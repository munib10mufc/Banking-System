#ifndef Account_H
#define Account_H

#include <string>
#include "Branch.h"
#include "Person.h"
using namespace std;

class Person;
class Branch;
class Account
{
	double balance;
	int accountNumber;
	//Branch * b;
	int ownerID;
	int branchID;
public:
	
	Account( int an = 0 , int bid = 0 ,int oid = 0 ,double b= 0.0  );
	void setBalance(double );
	void setAccountNumber(int);
	void setBranchID(int bid);
	double getBalance();
	int getBranchID();
	int getAccountNumber();
	virtual bool WithdrawMoney(double a = 0.0) = 0;
	virtual bool DepositMoney(double a = 0.0) = 0;
	void setOwnerID( int oid );
	int getOwnerID();
	Person * getOwner();
	Branch * getBranch();
	//void GenerateBankStatement();
	void TransferMoney(Account *);
	~Account();

};

#endif