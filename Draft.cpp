#include "Draft.h"
#include "Person.h"

Draft::Draft(void)
{
}


Draft::~Draft(void)
{
}


void Draft::setAmount(double a){
	this->amount=a;
}
double Draft::getAmount(){
	return this->amount;

}
void Draft::setBranchId(int b){
	this->branchId=b;	
}
int Draft::getBranchId(){
	return this->branchId;
}
void Draft::setSender(string s){
	this->sender=s;
}
string Draft::getSender(){
	return this->sender;
}
void Draft::setReciever(string r){
	this->reciever=r;
}
string Draft::getReciever(){
	return this->reciever;
}
void Draft::setRevieved(bool r){
	this->recieved=r;
}
bool Draft::getRecieved(){
	return this->recieved;
}

void Draft::setDraftID(int n){
	this->DraftId=n;
}

int Draft::getDraftID(){
	return this->DraftId;
}
