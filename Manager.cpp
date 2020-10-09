#include"Manager.h"
#include"BankLoan.h"
#include "DataAccessLayer.h"

Manager* Manager::mangerPointer=nullptr;

Manager::Manager():Employee(0,"","",0,"","","",0.0,0,0,""){

	MyDAL db;
	db.LoadManager(this);
}

vector<BankLoan *> * Manager::getLoans(){
	MyDAL db;
	return db.getLoans();

}

Manager * Manager::getManagerInstance(){
	if(Manager::mangerPointer==nullptr){
		Manager::mangerPointer = new Manager();
	}
	return Manager::mangerPointer;
}

Employee * Manager::getManager(){
	return nullptr;
}


bool Manager::approveLoan(BankLoan* s){
	return true;
}



bool Manager::eraseLoan(BankLoan* b){
	return true;
}

bool Manager::addEmployee(Employee* e){
	return true;
}


bool Manager::eraseEmployee(Employee* e){
	return true;
}


vector<Employee*> * Manager::getEmployeeInformation(){
	MyDAL db;
	return db.getAllEmployees();
}

//
//bool Manager::provideIncentive(Employee* e,string s){
//	for(int i=0;i<empArray.size();i++){
//		if(empArray[i]==e){
//			empArray[i]->addIncetive(s);
//			return true;
//		}
//	}
//	return false; // if employee not found
//
//}



Manager::~Manager(){
}