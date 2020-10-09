#include"Cheque.h"
#include<iostream>
using namespace std;

Cheque::Cheque(int cn  , bool r  , bool c  , ChequeBook * cb )
{

	this->setChequeNumber(cn);
	this->setRecieved(r);
	this->setCancelled(c);
	this->setChequeBook(cb);

}

void Cheque::setChequeNumber(int cn)
{
    chequeNo = cn;

}

void Cheque::setRecieved(bool r)
{
	recieved=r;
}

void Cheque::setCancelled(bool c)
{
	cancelled=c;
}

int Cheque::getChequeNumber()
{

	return this->chequeNo;

}
bool Cheque::getRecieved()
{

	return this->recieved;

}
bool Cheque::getCancelled()
{

	return this->cancelled;

}

Cheque::~Cheque()
{

	recieved=false;
	cancelled=false;

}

void Cheque::setChequeBook( ChequeBook * cb ){
	this->chequeBook = cb;
}

ChequeBook * Cheque::getChequeBook(){
	return this->chequeBook;
}