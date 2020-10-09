#include"SavingAccount.h"
#include<iostream>
using namespace std;




SavingAccount::SavingAccount(int an, int bid , int oid , double b, double ir) :Account(an, bid , oid, b)
{
	this->setInterestRate(ir);
}


void SavingAccount::setInterestRate( double ir ){
	if (ir >= 0.0 )
		this->interestRate = ir;
}

double SavingAccount::getInterestRate( ) const{
	return this->interestRate;
}

double SavingAccount::computeInterest(double amount ) const{

	if ( amount < 0.0)
	{
		cout << "Invalid amount for interest\n";
		return 0.0;
	}

	return (this->interestRate/100.0) * amount ;

}

bool SavingAccount::WithdrawMoney(double a) {
	
	if ( a < 0.0 || this->getBalance() < a )
		return false;

	this->setBalance(this->getBalance() - a );
	return true;
}

bool SavingAccount::DepositMoney(double a ) {
	if ( a < 0.0 )
	{
		return false;
	}

	double i = this->computeInterest(a) ;

	this->setBalance ( a + i + this->getBalance() ) ;

	return true;
}


SavingAccount::~SavingAccount()
{

}