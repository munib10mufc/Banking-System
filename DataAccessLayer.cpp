#include "DataAccessLayer.h"
#include <sstream>
#include<atldbcli.h>
#include<atldbsch.h>



string MyDAL::toString ( int i ){
	std::ostringstream strs;
	strs << i;
	string str = strs.str();
	return str;

}

string MyDAL::toString ( double d ){
	std::ostringstream strs;
	strs << d;
	string str = strs.str();
	return str;
}

MyDAL::MyDAL(){
	DAM = "OLEDB";

	lpcOleConnect = L"Provider = Microsoft.ACE.OLEDB.12.0; Data Source = \"C:\\Users\\Adeel Asif\\Desktop\\Banking System\\Banking System\\Banking System.accdb\"";
	
}

bool MyDAL::Connect(){

	USES_CONVERSION;

	hr1 = CoInitialize(NULL);
	hr = dbDataSource.OpenFromInitializationString(lpcOleConnect);

	if (FAILED(hr))
	{
		cout << DAM << ": Unable to connect to data source " << OLE2T((LPOLESTR)lpcOleConnect) << endl;
		return false;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			cout << DAM << ": Couldn't create session on data source " << OLE2T((LPOLESTR)lpcOleConnect) << endl;
			return false;
		}
		else
		{
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				cout << DAM << ": No Data Source Name Specified." << endl;
				return false;
			}
			else
			{
				cout << DAM << ": Successfully connected to database. Data source name:\n  "
					<< COLE2T(var.bstrVal) << endl;
				return true;
			}
		}
	}
}

bool MyDAL::CloseConnection()
{
	dbDataSource.Close();
	dbSession.Close();
	cout << DAM << "\n: Cleanup. Done." << endl;
	return true;
}

bool MyDAL::Insert(  ){
	bool done;
	if ( Connect() )
	{
		USES_CONVERSION; 

		string s = "INSERT INTO Account ( Balance , BranchID , AccountType , MinBalance, ChequeBookNo , InterestRate , CustomerID ) VALUES(  5000.0 , 1,0,500,0,0,1 );";


		LPOLESTR query = A2OLE (s.c_str());
		
		hr = cmd.Open(dbSession, query);

		if ( SUCCEEDED(hr) )
		{
			cout << "Successfully Inserted\n";
			done = true;
		}
		else
		{
			cout << "Failed to insert\n";
			done = false;
		}
	}
	else
		done = false;

	CloseConnection();

	return done;
}

bool MyDAL::RawQuery(string s){

	bool done;
	if ( Connect() )
	{
		USES_CONVERSION; 

		LPOLESTR query = A2OLE (s.c_str());
		
		hr = cmd.Open(dbSession, query);

		if ( SUCCEEDED(hr) )
		{
			done = true;
		}
		else
		{
			cout << "Query Failed : " << s << "\n";
			done = false;
		}
	}
	else
		done = false;
		
	CloseConnection();

	return done;

}

bool MyDAL::InsertBank( Bank * b){

	string name = b->getTitle();

	string q = "INSERT INTO Bank ( Title ) VALUES('" +  name + "');";

	return RawQuery(q);
}

bool MyDAL::InsertBranch(Branch * bb){

	string name = bb->getBranchName() ;
	string location = bb->getBranchLocation();
	string bankId = toString ( bb->getBranchId());

	string q = "INSERT INTO Branch ( BranchName , Location , BankId )  VALUES('" +  name + "','" + location + "'," +  bankId + ");";
	
	return RawQuery(q);
}


bool MyDAL::InsertCurrentAccount(CurrentAccount * ca){
	
	double Balance = ca->getBalance();
	string branchID = toString(ca->getBranchID());
	string accountType = "0";
	double minBalance = ca->getMinBalance();
	string chequeBookNo = toString(ca->getChequeBookId());
	double interestRate = 0.0;
	string s_balance = toString(Balance);
	string s_min_balance = toString(minBalance);
	string s_interest_rate = toString(interestRate);
	int ownerID = ca->getOwnerID();


	
	string q = "INSERT INTO Account(Balance, BranchID, AccountType, MinBalance, ChequeBookNo, InterestRate, CustomerID) VALUES("
		+ s_balance + "," + branchID + "," + accountType + "," + s_min_balance + "," + chequeBookNo + "," + s_interest_rate + "," + toString(ownerID) + ");";

	
	return RawQuery(q);


}



bool MyDAL::InsertSavingAccount(SavingAccount * sa){

	double Balance = sa->getBalance();
	string branchID = toString(sa->getBranchID());
	string accountType = "1";
	double minBalance = 0.0;
	string chequeBookNo = 0;
	double interestRate = sa->getInterestRate();
	string s_balance = toString(Balance);
	string s_min_balance = toString(minBalance);
	string s_interest_rate = toString(interestRate);


	string q = "INSERT INTO Account ( Balance , BranchID , AccountType , MinBalance , ChequeBookNo , InterestRate, CustomerID)  VALUES("
		+ s_balance + "," + branchID + "," + accountType + "," + s_min_balance + "," + chequeBookNo + "," + s_interest_rate + "," + toString(sa->getOwnerID())+ ");";
	
	return RawQuery(q);
}


bool MyDAL::InsertPerson(Person * p)
{
	
	string CNIC = p->getCNIC();
	string name = p->getName();
	int age = p->getAge();
	string address = p->getAddress();
	string phone_number = p->getPhoneNo();
	string mobile_number = p->getMobileNo();


	string s_age = toString(age);

	string q = "INSERT INTO Person(   CNIC,  Name , Age, Address , PhoneNumber, MobileNumber ) VALUES('" + CNIC + "','" + name + "'," + s_age + ",'" + address + "','" + phone_number + "','" + mobile_number + "');";

	return RawQuery(q);
}


bool MyDAL::InsertATM(){
	
	string location = "Lahore";
	double availableBalance = 3.2;
	
	string ab = toString(availableBalance);
	
	string q = "INSERT INTO ATM (  Location , AvailableBalance )  VALUES('" +  location + "'," + ab + ");";
	
	return RawQuery(q);
}


//bool MyDAL::InsertAccount( Account * acc)
//{
//	double Balance = acc->getBalance();
//string branchID = toString (acc->getBranchID());
//string accountType = "1";
//double minBalance = 52.5;
//string chequeBookNo = "1";
//double interestRate = 3.5;
//string s_balance = toString(Balance);
//string s_min_balance = toString(minBalance);
//string s_interest_rate = toString(interestRate);
//
//string q = "INSERT INTO Account (  Balance , BranchID , AccountType, MinBalance ,ChequeBookNo, interestRate )  VALUES('" + s_balance + "'," + branchID + "'," + accountType + "'," + s_min_balance + "'," + chequeBookNo + "'," + s_interest_rate + "'," + type");";
//return RawQuery(q);
//}


Account * MyDAL::getAccount(int aid){

	Account * p = nullptr;
	if (Connect())
	{
		USES_CONVERSION;

		string s = "Select * from Account where ID = "  +  toString(aid) +";";
		LPOLESTR query = A2OLE(s.c_str());

		hr = cmd.Open(dbSession, query);
		DBORDINAL colCount = cmd.GetColumnCount();
		if (SUCCEEDED(hr))
		{

			DBORDINAL cColumns;
			DBCOLUMNINFO* rgInfo = NULL;
			OLECHAR* pStringsBuffer = NULL;
			cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);


			int rowCount = 0;
			WCHAR* szValue;
			CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
			if (pRS->MoveNext() == S_OK)
			{

				char arr[200] = { '0' };

				szValue = cmd.GetString(1);
				wcstombs(arr, szValue, 199);
				int id = atoi(arr);


				szValue = cmd.GetString(2);
				wcstombs(arr, szValue, 199);
				double balance = atof(arr);

				szValue = cmd.GetString(3);
				wcstombs(arr, szValue, 199);
				int bid = atoi(arr);

				szValue = cmd.GetString(4);
				wcstombs(arr, szValue, 199);
				int type = atoi(arr);

				szValue = cmd.GetString(5);
				wcstombs(arr, szValue, 199);
				double minBalance = atof(arr);

				szValue = cmd.GetString(6);
				wcstombs(arr, szValue, 199);
				int cbn = atoi(arr);

				szValue = cmd.GetString(7);
				wcstombs(arr, szValue, 199);
				double ir = atof(arr);

				szValue = cmd.GetString(8);
				wcstombs(arr, szValue, 199);
				double cid = atoi(arr);


				if (type == 0)
					p = new CurrentAccount(id, bid, cid, balance, minBalance, cbn);
				else
					p = new SavingAccount(id,bid,cid,balance,ir);
			}

		}
		else
		{
			cout << "Query Failed : " << s << "\n";
		}
	}


	CloseConnection();

	return p;

}


Person * MyDAL::getPerson(string CNIC){

	Person * p = nullptr;
	if (Connect())
	{
		USES_CONVERSION;

		string s = "Select * from Person where CNIC = '" + CNIC + "';";
		LPOLESTR query = A2OLE(s.c_str());

		hr = cmd.Open(dbSession, query);
		DBORDINAL colCount = cmd.GetColumnCount();
		if (SUCCEEDED(hr))
		{

			DBORDINAL cColumns;
			DBCOLUMNINFO* rgInfo = NULL;
			OLECHAR* pStringsBuffer = NULL;
			cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);


			int rowCount = 0;
			WCHAR* szValue;
			CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
			if (pRS->MoveNext() == S_OK)
			{

				char arr[200] = { '0' };

				szValue = cmd.GetString(1);
				wcstombs(arr, szValue, 199);
				int id = atoi(arr);


				szValue = cmd.GetString(3);
				wcstombs(arr, szValue, 199);
				string name = arr;

				szValue = cmd.GetString(4);
				wcstombs(arr, szValue, 199);
				int age = atoi(arr);

				szValue = cmd.GetString(5);
				wcstombs(arr, szValue, 199);
				string address = arr;

				szValue = cmd.GetString(6);
				wcstombs(arr, szValue, 199);
				string ph = arr;

				szValue = cmd.GetString(7);
				wcstombs(arr, szValue, 199);
				string mn = arr;

				p = new Person(id, CNIC, name, age, address, ph, mn);



			}

		}
		else
		{
			cout << "Query Failed : " << s << "\n";
		}
	}


	CloseConnection();

	return p;
}



loginData * MyDAL::Login(string username, string pass){
	
	loginData * ld = new loginData();

	if (username == "" || pass == "")
		return ld;

	if (Connect())
	{
		USES_CONVERSION;

		string s = "Select * from Employee where LoginID = '" + username + "' and Password = '" + pass + "' ;";
		LPOLESTR query = A2OLE(s.c_str());

		hr = cmd.Open(dbSession, query);
		DBORDINAL colCount = cmd.GetColumnCount();
		if (SUCCEEDED(hr))
		{
			
			DBORDINAL cColumns;
			DBCOLUMNINFO* rgInfo = NULL;
			OLECHAR* pStringsBuffer = NULL;
			cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);
	
			
			int rowCount = 0;
			WCHAR* szValue;
			CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
			if (pRS->MoveNext() == S_OK)
			{
				char arr[200] = { '0' };

				szValue = cmd.GetString(1);
				wcstombs(arr, szValue,199);
				int id = atoi( arr );

				szValue = cmd.GetString(2);
				wcstombs(arr, szValue, 199);
				string CNIC = arr;

				szValue = cmd.GetString(3);
				wcstombs(arr, szValue, 199);
				string name = arr;

				szValue = cmd.GetString(4);
				wcstombs(arr, szValue, 199);
				int age = atoi(arr);

				szValue = cmd.GetString(5);
				wcstombs(arr, szValue, 199);
				string address = arr;

				szValue = cmd.GetString(6);
				wcstombs(arr, szValue, 199);
				string ph = arr;

				szValue = cmd.GetString(7);
				wcstombs(arr, szValue, 199);
				string mn = arr;

				szValue = cmd.GetString(8);
				wcstombs(arr, szValue, 199);
				double salary = atof(arr);

				szValue = cmd.GetString(9);
				wcstombs(arr, szValue, 199);
				int bid = atoi(arr);

				szValue = cmd.GetString(10);
				wcstombs(arr, szValue, 199);
				string doj = arr;

				szValue = cmd.GetString(11);
				wcstombs(arr, szValue, 199);
				string isManager = arr;

				szValue = cmd.GetString(12);
				wcstombs(arr, szValue, 199);
				int mid = atoi(arr);
				
				szValue = cmd.GetString(13);
				wcstombs(arr, szValue, 199);
				string login = arr;

				szValue = cmd.GetString(14);
				wcstombs(arr, szValue, 199);
				string pass = arr;

				if (isManager != "Tr")
				{
					ld->e = new Teller (id, CNIC,  name, age, address, ph, mn, salary, bid,mid,login,pass, doj);
					ld->i = 1;
					
				}
				else
				{
					ld->e = Manager::getManagerInstance();
					ld->e->setId(id);
					ld->e->setCNIC(CNIC);
					ld->e->setName(name);
					ld->e->setAge(age);
					ld->e->setAddress(address);
					ld->e->setPhoneNo(ph);
					ld->e->setMobileNo(mn);
					ld->e->setSalary(salary);
					ld->e->setBranch(bid);
					ld->e->setManagerID(0);
					ld->e->setLogin(login);
					ld->e->setPassword(pass);
					ld->e->setDateOfJoining(doj);
					ld->i = 2;
				}
			}
			
		}
		else
		{
			cout << "Query Failed : " << s << "\n";
		}
	}
	

	CloseConnection();

	return ld;

}

void MyDAL::LoadManager(Manager * m){

	
	if (Connect())
	{
		USES_CONVERSION;

		string s = "Select * from Employee where ManagedBy is NULL";
		LPOLESTR query = A2OLE(s.c_str());

		hr = cmd.Open(dbSession, query);
		DBORDINAL colCount = cmd.GetColumnCount();
		if (SUCCEEDED(hr))
		{

			DBORDINAL cColumns;
			DBCOLUMNINFO* rgInfo = NULL;
			OLECHAR* pStringsBuffer = NULL;
			cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);


			int rowCount = 0;
			WCHAR* szValue;
			CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
			if (pRS->MoveNext() == S_OK)
			{
				char arr[200] = { '0' };

				szValue = cmd.GetString(1);
				wcstombs(arr, szValue, 199);
				int id = atoi(arr);

				szValue = cmd.GetString(2);
				wcstombs(arr, szValue, 199);
				string CNIC = arr;

				szValue = cmd.GetString(3);
				wcstombs(arr, szValue, 199);
				string name = arr;

				szValue = cmd.GetString(4);
				wcstombs(arr, szValue, 199);
				int age = atoi(arr);

				szValue = cmd.GetString(5);
				wcstombs(arr, szValue, 199);
				string address = arr;

				szValue = cmd.GetString(6);
				wcstombs(arr, szValue, 199);
				string ph = arr;

				szValue = cmd.GetString(7);
				wcstombs(arr, szValue, 199);
				string mn = arr;

				szValue = cmd.GetString(8);
				wcstombs(arr, szValue, 199);
				double salary = atof(arr);

				szValue = cmd.GetString(9);
				wcstombs(arr, szValue, 199);
				int bid = atoi(arr);

				szValue = cmd.GetString(10);
				wcstombs(arr, szValue, 199);
				string doj = arr;

				szValue = cmd.GetString(11);
				wcstombs(arr, szValue, 199);
				string isManager = arr;

				szValue = cmd.GetString(12);
				wcstombs(arr, szValue, 199);
				int mid = atoi(arr);

				szValue = cmd.GetString(13);
				wcstombs(arr, szValue, 199);
				string login = arr;

				szValue = cmd.GetString(14);
				wcstombs(arr, szValue, 199);
				string pass = arr;

				m->setId(id);
				m->setCNIC(CNIC);
				m->setName(name);
				m->setAge(age);
				m->setAddress(address);
				m->setPhoneNo(ph);
				m->setMobileNo(mn);
				m->setSalary(salary);
				m->setBranch(bid);
				m->setManagerID(0);
				m->setLogin(login);
				m->setPassword(pass);
				m->setDateOfJoining(doj);
				
				
			}

		}
		else
		{
			cout << "Query Failed : " << s << "\n";
		}
	}


	CloseConnection();

}

void MyDAL::LoadBank(Bank * b){

	if (Connect())
	{
		USES_CONVERSION;

		string s = "Select * from Bank where ID = 1";
		LPOLESTR query = A2OLE(s.c_str());

		hr = cmd.Open(dbSession, query);
		DBORDINAL colCount = cmd.GetColumnCount();
		if (SUCCEEDED(hr))
		{

			DBORDINAL cColumns;
			DBCOLUMNINFO* rgInfo = NULL;
			OLECHAR* pStringsBuffer = NULL;
			cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);


			int rowCount = 0;
			WCHAR* szValue;
			CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
			if (pRS->MoveNext() == S_OK)
			{
				char arr[200] = { '0' };

				szValue = cmd.GetString(1);
				wcstombs(arr, szValue, 199);
				int id = atoi(arr);

				szValue = cmd.GetString(2);
				wcstombs(arr, szValue, 199);
				string Title = arr;

				b->setTitle(Title);
				b->setID(id);

			}

		}
		else
		{
			cout << "Query Failed : " << s << "\n";
		}
	}


	CloseConnection();
}


vector<BankLoan *> * MyDAL::getLoans(){

	vector<BankLoan * > * loans = new vector<BankLoan *>;

	if (Connect())
	{
		USES_CONVERSION;

		string s = "Select * from BankLoan ;";
		LPOLESTR query = A2OLE(s.c_str());

		hr = cmd.Open(dbSession, query);
		DBORDINAL colCount = cmd.GetColumnCount();
		if (SUCCEEDED(hr))
		{

			DBORDINAL cColumns;
			DBCOLUMNINFO* rgInfo = NULL;
			OLECHAR* pStringsBuffer = NULL;
			cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);


			int rowCount = 0;

			WCHAR* szValue;
			CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
			while (pRS->MoveNext() == S_OK)
			{
				char arr[200] = { '0' };

				szValue = cmd.GetString(1);
				wcstombs(arr, szValue, 199);
				int id = atoi(arr);

				szValue = cmd.GetString(2);
				wcstombs(arr, szValue, 199);
				double la = atof(arr);

				szValue = cmd.GetString(3);
				wcstombs(arr, szValue, 199);
				double da = atof(arr);

				szValue = cmd.GetString(4);
				wcstombs(arr, szValue, 199);
				double ir = atof(arr);

				szValue = cmd.GetString(5);
				wcstombs(arr, szValue, 199);
				string issued = arr;

				szValue = cmd.GetString(6);
				wcstombs(arr, szValue, 199);
				string issueDate = arr;


				szValue = cmd.GetString(7);
				wcstombs(arr, szValue, 199);
				string dd = arr;

				szValue = cmd.GetString(8);
				wcstombs(arr, szValue, 199);
				int aid = atoi(arr);

				loans->push_back(new BankLoan(id, la,da ,ir, false, aid));

				
			}

		}
		else
		{
			cout << "Query Failed : " << s << "\n";
		}
	}


	CloseConnection();

	return loans;

}
vector<Employee *> * MyDAL::getAllEmployees(){
	vector<Employee * > * employees = new vector<Employee *>;

	if (Connect())
	{
		USES_CONVERSION;

		string s = "Select * from Employee ;";
		LPOLESTR query = A2OLE(s.c_str());

		hr = cmd.Open(dbSession, query);
		DBORDINAL colCount = cmd.GetColumnCount();
		if (SUCCEEDED(hr))
		{

			DBORDINAL cColumns;
			DBCOLUMNINFO* rgInfo = NULL;
			OLECHAR* pStringsBuffer = NULL;
			cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);


			int rowCount = 0;

			WCHAR* szValue;
			CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
			while (pRS->MoveNext() == S_OK)
			{
				char arr[200] = { '0' };

				szValue = cmd.GetString(1);
				wcstombs(arr, szValue, 199);
				int id = atoi(arr);

				szValue = cmd.GetString(2);
				wcstombs(arr, szValue, 199);
				string CNIC = arr;

				szValue = cmd.GetString(3);
				wcstombs(arr, szValue, 199);
				string name = arr;

				szValue = cmd.GetString(4);
				wcstombs(arr, szValue, 199);
				int age = atoi(arr);

				szValue = cmd.GetString(5);
				wcstombs(arr, szValue, 199);
				string address = arr;

				szValue = cmd.GetString(6);
				wcstombs(arr, szValue, 199);
				string ph = arr;

				szValue = cmd.GetString(7);
				wcstombs(arr, szValue, 199);
				string mn = arr;

				szValue = cmd.GetString(8);
				wcstombs(arr, szValue, 199);
				double salary = atof(arr);

				szValue = cmd.GetString(9);
				wcstombs(arr, szValue, 199);
				int bid = atoi(arr);

				szValue = cmd.GetString(10);
				wcstombs(arr, szValue, 199);
				string doj = arr;

				szValue = cmd.GetString(11);
				wcstombs(arr, szValue, 199);
				string isManager = arr;

				szValue = cmd.GetString(12);
				wcstombs(arr, szValue, 199);
				int mid = atoi(arr);

				szValue = cmd.GetString(13);
				wcstombs(arr, szValue, 199);
				string login = arr;

				szValue = cmd.GetString(14);
				wcstombs(arr, szValue, 199);
				string pass = arr;

				employees->push_back(new Employee(id,CNIC,name,age,address,ph,mn,salary,bid,mid,login,pass));

			}

		}
		else
		{
			cout << "Query Failed : " << s << "\n";
		}
	}


	CloseConnection();

	return employees;
}


vector<Branch * > * MyDAL::getAllBranches(Bank * b){
	vector<Branch * > * branches = new vector<Branch *>;

	if (Connect())
	{
		USES_CONVERSION;

		string s = "Select * from Branch where BankId = " +  toString(b->getID())  + ";";
		LPOLESTR query = A2OLE(s.c_str());

		hr = cmd.Open(dbSession, query);
		DBORDINAL colCount = cmd.GetColumnCount();
		if (SUCCEEDED(hr))
		{

			DBORDINAL cColumns;
			DBCOLUMNINFO* rgInfo = NULL;
			OLECHAR* pStringsBuffer = NULL;
			cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);


			int rowCount = 0;
			
			WCHAR* szValue;
			CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
			while (pRS->MoveNext() == S_OK)
			{
				char arr[200] = { '0' };

				szValue = cmd.GetString(1);
				wcstombs(arr, szValue, 199);
				int id = atoi(arr);

				szValue = cmd.GetString(2);
				wcstombs(arr, szValue, 199);
				string name = arr;

				szValue = cmd.GetString(3);
				wcstombs(arr, szValue, 199);
				string location = arr;

				int bankID = b->getID();

				branches->push_back(new Branch(id, name, location, bankID));

			}

		}
		else
		{
			cout << "Query Failed : " << s << "\n";
		}
	}


	CloseConnection();

	return branches;
}



bool MyDAL::UpdateAccount(Account * a){

	string q = "UPDATE Account set Balance = " + toString(a->getBalance()) + " where ID = " + toString(a->getAccountNumber()) + ";";
	return RawQuery(q);
}




bool MyDAL::DeleteAccount(int acid){
	string q = "Delete From Account where ID = " + toString(acid) + ";";
	return RawQuery(q);
}


bool MyDAL::DeleteBank(Bank * b){
	string q = "Delete From Bank where ID = " + toString(b->getID()) + ";";
	return RawQuery(q);
}


bool MyDAL::DeleteBranch(Branch * b){
	string q = "Delete From Bank where ID = " + toString(b->getBranchId()) + ";";
	return RawQuery(q);
}



bool MyDAL::DeleteCard(Card * c){
	string q = "Delete From Card where ID = " + toString(c->getCardId()) + ";";
	return RawQuery(q);
}

bool DeleteChequeBook(ChequeBook *);

bool MyDAL::DeleteDraft(Draft * d){
	string q = "Delete From Draft where ID = " + toString( d->getDraftID()) + ";";
	return RawQuery(q);
}

bool MyDAL::DeleteEmployee(Employee * e){
	string q = "Delete From Employee where ID = " + toString(e->getId()) + ";";
	return RawQuery(q);
}

bool MyDAL::DeletePerson(Person * p){
	string q = "Delete From Person where ID = " + toString(p->getId()) + ";";
	return RawQuery(q);
}




vector<Item* >*MyDAL::getAllVaultItems(){
	vector<Item * > * items = new vector<Item *>;

	if (Connect())
	{
		USES_CONVERSION;

		string s = "Select * from Item ;";
		LPOLESTR query = A2OLE(s.c_str());

		hr = cmd.Open(dbSession, query);
		DBORDINAL colCount = cmd.GetColumnCount();
		if (SUCCEEDED(hr))
		{

			DBORDINAL cColumns;
			DBCOLUMNINFO* rgInfo = NULL;
			OLECHAR* pStringsBuffer = NULL;
			cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);


			int rowCount = 0;

			WCHAR* szValue;
			CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
			while (pRS->MoveNext() == S_OK)
			{
				char arr[200] = { '0' };

				szValue = cmd.GetString(1);
				wcstombs(arr, szValue, 199);
				int id = atoi(arr);

				szValue = cmd.GetString(2);
				wcstombs(arr, szValue, 199);
				string name = arr;

				szValue = cmd.GetString(3);
				wcstombs(arr, szValue, 199);
				string desc = arr;

				szValue = cmd.GetString(4);
				wcstombs(arr, szValue, 199);
				double weight = (double)atoi(arr);

				szValue = cmd.GetString(5);
				wcstombs(arr, szValue, 199);
				int vaultNo = atoi(arr);

				items->push_back(new Item(id, name, desc, weight, vaultNo));

			}

		}
		else
		{
			cout << "Query Failed : " << s << "\n";
		}
	}


	CloseConnection();

	return items;





}




bool MyDAL::InsertVault(Vault * v){
	string accountno = toString(v->getAccountId());
	string branchno = toString(v->getBranchId());
	string q = "INSERT INTO Vault(BranchID ,AccountNo) VALUES('" + branchno + "','" + accountno + "');";
	return RawQuery(q);


}


bool MyDAL::DeleteVault(Vault * v){
	string q = "Delete from Vault where id=" + toString(v->getID()) + "and AccountNo=" + toString(v->getAccountId()) + ";";
	return RawQuery(q);

}

bool MyDAL::InsertItem(Item * i){
	string weight = toString(i->getWeight());
	string vaultno = toString(i->getVaultId());
	string q = "INSERT INTO Item(Name,Description,Weight,VaultNumber) VALUES('" + i->getName() + "','" + i->getDescription() + "','" + weight + "','" + vaultno + "');";
	return RawQuery(q);

}
bool MyDAL::DeleteItem(int itemNo, int vaultNo)
{
	string q = "Delete from Item where id=" + toString(itemNo) + "and VaultNumber=" + toString(vaultNo) + ";";
	return RawQuery(q);
}