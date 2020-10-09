#include"CurrentAccount.h"
#include<iostream>
using namespace std;


CurrentAccount::CurrentAccount(int an, int bid , int oid ,  double b, double m, int cbID ) : Account(an, bid, oid, b)
{

	this->setMinBalance(m);
	this->setChequeBookID(cbID);

}


int CurrentAccount::getChequeBookId(){
	return this->chequeBookID;

}
void CurrentAccount::setMinBalance(double m)
{
	if ( m >= 0.0 )
	minBalance=m;
	else
		minBalance = m;

}

void CurrentAccount::setChequeBookID( int cbID   )
{
	chequeBookID = cbID;
}

double CurrentAccount::getMinBalance()
{
	return this->minBalance;


}

ChequeBook *  CurrentAccount::getChequeBook()
{
	return nullptr;
}


	
bool CurrentAccount::WithdrawMoney(double a ) {
	if ( a <0.0 )
		return false;

	this->setBalance ( this->getBalance() - a) ;
	return true;
}

bool CurrentAccount::DepositMoney(double a ) {
	if ( a < 0.0 )
		return false;

	this->setBalance( getBalance() + a);
	return true;
}

CurrentAccount::~CurrentAccount()
{
	minBalance=0;
}