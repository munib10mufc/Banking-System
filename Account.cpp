#include"Account.h"
#include<iostream>
using namespace std;

Account::Account(int an  , int bid , int oid  , double b) 
{

	this->setBalance(b);
	this->setAccountNumber(an);
	this->setOwnerID(oid);
	this->setBranchID(bid);

}

int Account::getBranchID(){
	return branchID;
}
void Account::setBalance(double b)
{
	if ( b >= 0.0 )
		balance=b;
	else
		balance = b;

}

int Account::getOwnerID(){
	return ownerID;
}

void Account::setAccountNumber(int an)
{
	accountNumber= an;
}

double Account::getBalance()
{
	return this->balance;
}

int Account::getAccountNumber()
{
	return this->accountNumber;
}


void Account::setOwnerID(int oid){
	ownerID = oid;
}

Person * Account::getOwner(){
	return nullptr;
}

Branch * Account::getBranch(){
	return nullptr;
}

void Account::setBranchID(int bid){
	branchID = bid;
}

Account::~Account()
{

}