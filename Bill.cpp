#include "Bill.h"

Bill::Bill(int id,string n,int p,int d)
{
	this->setBillAmount(d);
	this->setBillID(id);
	this->setPaidAmount(p);
	this->setParty(n);
}
int Bill::getBillID(){
	return this->BillID;
}
void Bill::setBillID(int s){
	this->BillID=s;
}
string Bill::getParty(){
	return this->party;
}

void Bill::setParty(string s){
	this->party=s;
}

int Bill::getPaidAmount(){
	return this->paidAmount;
}
void Bill::setPaidAmount(int s){
	this->paidAmount=s;
}
int Bill::getBillAmount(){
	return this->BillAmount;
}
void Bill::setBillAmount(int s){
	this->BillAmount=s;
}

Bill::~Bill(void)
{
}
