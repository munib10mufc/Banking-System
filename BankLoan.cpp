#include"BankLoan.h"
#include<iostream>
using namespace std;

BankLoan::BankLoan(int lid  ,double l, double d, double i, bool b, int aic )
{

	this->setLoanAmount(l);
	this->setDueAmount(d);
	this->setInterestRate(i);
	this->setIssued(b);
	this->setAccountID(aic);
	this->setLoanID(lid);
}


int BankLoan::getAccountID(){
	return this->accountID;
}
int BankLoan::getLoanID(){
	return this->lid;
}

void BankLoan::setLoanID(int id){
	lid = id;
}

void BankLoan::setLoanAmount(double l)
{

	loanAmount=l;
}


void BankLoan::setDueAmount(double d)
{

	dueAmount=d;
}


void BankLoan::setInterestRate(double i)
{

	intrestRate=i;

}

void BankLoan::setIssued(bool b)
{

	issued=b;

}

double BankLoan::getLoanAmount()
{

	return this->loanAmount;

}
double BankLoan::getDueAmount()
{

	return this->dueAmount;

}
double BankLoan::getInterestRate()
{

	return this->intrestRate;

}

bool BankLoan::getIsIssued()
{

	return this->issued;
}

BankLoan::~BankLoan()
{

	dueAmount=0;
	intrestRate=0;
	loanAmount=0;
	issued=false;

}

void BankLoan::setAccountID(int aic){

	this->accountID = aic;
}

Account * BankLoan::getAccount(){
	return nullptr;
}