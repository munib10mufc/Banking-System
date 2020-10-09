#ifndef Employee_h
#define Employee_h
#include <string>
#include "Branch.h"
using namespace std;
#include"Person.h"


class Employee:public Person
{
	double salary;
	int branchID;
	int managerID;
	string dateOfJoining;
	string loginID;
	string password;
	bool status;
	
public:

	Employee(int id = 0, string c="",string n="", int a=0,string ad="",string p="",string m="",double s=0.0 , int bid = 0 , int mid = 0 , string lid = "" , string pass ="", string d="");
	void setSalary(double );
	void setBranch(int branchId);
	void setDateOfJoining(string );
	void setLogin(string login);
	void setPassword(string p);
	void setManagerID(int id);
	void setStatus(bool st = true);
	double getSalary();
	Branch * getBranch();
	string getDateOfJoining();
	virtual Employee * getManager() ;
	int getManagerID();
	string getLogin();
	string getPassword();
	bool getStatus();
	int getBranchId();

	//void addIncetive(string);
	//bool removeIncentive(string);
	//void setLogin(Login *);
	//Login* getLogin();
	//void setManager(Manager*);
	
	
	~Employee();



};

#endif