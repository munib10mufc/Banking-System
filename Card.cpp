#include"Card.h"
#include<iostream>
using namespace std;


Card::Card(int ci, bool iss , int ac )
{

	this->setCardId(ci);
	this->setIssued(iss);
	this->setAccount(ac);
	this->issuedDate = "";
	this->expirationDate = "";

}



void Card::setAccount(int ac ){
	this->account = ac;
}


void Card::setCardId(int ci)
{

	cardId=ci;

}



void Card::setIssued(bool i)
{

	issued=i;

}

int Card::getCardId()
{

	return this->cardId;

}

bool Card::getIssued()
{

	return this->issued;


}

Card::~Card()
{
	cardId=0;
	issued=false;
}

string Card::getIssueDate(){

	return this->issuedDate;

}

string Card::getExpiryDate(){

	return this->expirationDate;

}


int Card::getAccount(){
	return this->account;
}

void Card::setExpirationDate(string s){
	this->expirationDate=s;
}

void Card::setIssuedDate(string s){
	this->issuedDate=s;
}