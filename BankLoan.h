#ifndef BANKLOAN_H
#define BANKLOAN_H

#include "Account.h"

class BankLoan
{
	int lid;
	double loanAmount;
	double dueAmount;
	double intrestRate;
	bool issued;
	int accountID;

public:
	BankLoan(int lid = 0 ,double l=0,double d=0,double i=0,bool b=false , int aid = 0);
	void setLoanAmount(double );
	void setDueAmount(double );
	void setInterestRate(double );
	void setIssued(bool );
	void setAccountID( int aid = 0);
	double getLoanAmount();
	double getDueAmount();
	double getInterestRate();
	bool getIsIssued();
	Account * getAccount();
	int getAccountID();
	int getLoanID();
	void setLoanID(int id);

	//void ComputeInterest();
	//void getAccountNumber();
	~BankLoan(); //is ka destructor dekh lai ma ne bool ko false kia ha





};

#endif