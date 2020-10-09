#ifndef SavingAccount_H
#define SavingAccount_H
#include "Account.h"



class SavingAccount : public Account
{
	double interestRate;

public:
	SavingAccount(int an = 0, int bid = 0, int oid = 0, double b = 0.0, double ir = 0.0);
	void setInterestRate( double ir = 0.0);
	double getInterestRate( ) const;
	double computeInterest(double amount = 0.0) const;
	virtual bool WithdrawMoney(double a = 0.0) ;
	virtual bool DepositMoney(double a = 0.0) ;
	~SavingAccount();

};
#endif