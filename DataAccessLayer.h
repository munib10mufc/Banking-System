#ifndef DataAccessLayer_h
#define DataAccessLayer_h

#include<iostream>
#include<string>
#include <vector>
using namespace std;
#include "LoginData.h"
#include "Manager.h"
#include "Bank.h"
#include "Branch.h"
#include "Account.h"
#include "Employee.h"
#include "SavingAccount.h"
#include "Item.h"
#include "ChequeBook.h"
#include<atldbcli.h>
#include<atldbsch.h>
#include "Draft.h"

class MyDAL{

char* DAM ;

LPCOLESTR lpcOleConnect ; 
CDataSource dbDataSource;
CSession dbSession;
HRESULT hr1 ;
HRESULT hr ;
CComVariant var;
CCommand<CDynamicStringAccessor> cmd;

public:
	MyDAL();
	
	bool Insert(  );
	bool InsertBank( Bank * b);
	bool InsertBranch( Branch * b);
	bool InsertATM( );
	bool InsertCurrentAccount(CurrentAccount *);
	bool InsertSavingAccount(SavingAccount *);
	bool InsertATMTransaction( );
	bool InsertTransaction();
	bool InsertBankLoan( BankLoan *);
	bool InsertCard( Card * c);
	bool InsertCheque( );
	bool InsertChequeBook( ChequeBook *);
	bool InsertDraft( Draft *);
	bool InsertEmployee( Employee * e);
	bool InsertItem( Item * i );
	bool InsertPerson( Person * p);

	bool UpdateBank( Bank * b);
	bool UpdateBranch( Branch * b);
	bool UpdateATM();
	bool UpdateAccount( Account * a);
	bool UpdateATMTransaction();
	bool UpdateTransaction();
	bool UpdateBankLoan( BankLoan * bl);
	bool UpdateCard( Card * c);
	bool UpdateCheque();
	bool UpdateChequeBook(ChequeBook * );
	bool UpdateDraft( Draft *);
	bool UpdateEmployee(Employee *);
	bool UpdateItem( Item *);
	bool UpdatePerson( Person *);
	bool UpdateVault(Vault *);


	bool DeleteBank( Bank *);
	bool DeleteBranch( Branch *);
	bool DeleteAccount(int acid );
	bool DeleteBankLoan( BankLoan *);
	bool DeleteCard( Card *);
	bool DeleteChequeBook( ChequeBook *);
	bool DeleteDraft( Draft *);
	bool DeleteEmployee( Employee *);
	bool DeletePerson( Person *);

	bool RawQuery(string s);

	void LoadManager(Manager * m);
	void LoadBank(Bank * b);

	
	bool DepositCash();
	vector<Branch * > * getAllBranches( Bank * b);
	vector<Account * > * getAllAccounts(Branch * b);
	vector<Employee *> * getAllEmployees();
	vector<BankLoan *> * getLoans();
	Person * getPerson(string CNIC);
	Account * getAccount(int aid);
	vector<string> * getAllVaults();

	loginData * Login( string username , string pass );


	bool DeleteVault(Vault *);
	bool InsertVault(Vault * v);
	bool DeleteItem(int, int);
	vector<Item* > * getAllVaultItems();

private:
	bool Connect();
	bool CloseConnection();
	string toString ( int i );
	string toString ( double d );
	
};

#endif