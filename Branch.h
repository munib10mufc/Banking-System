#ifndef Branch_H
#define Branch_H

#include "Bank.h"
#include "Account.h"


#include <string>
#include <vector>
using namespace std;

class Bank;
class Account;
class Branch
{
	int branchId;
	string branchName;
	string location;
	int bankID;
public:

	Branch(int b=0 , string bn = "" , string l = "" , int bID = 0);
	void setBranchId(int );
	void setBranchName(string );
	void setBranchLocation(string );
	int getBranchId();
	string getBranchName();
	string getBranchLocation();
	Bank * getBank();
	void setBankID(int bID) ;
	~Branch();

};

#endif