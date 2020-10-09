#include"ChequeBook.h"
#include<iostream>
using namespace std;

ChequeBook::ChequeBook(int c , int accID)
{
	this->setChequeBookId(c);
	for ( int i = 0 ; i < 30 ; i++ ){
		cheques.push_back(new Cheque(i , false , false , this)) ;
	}
}

void ChequeBook::setChequeBookId(int c)
{
	chequeBookId=c;
}

int ChequeBook::getChequeBookId()
{
	return this->chequeBookId;
}

Cheque * ChequeBook::find( int id){
	for ( int i = 0 ; i < cheques.size() ; i++ )
	{
		if (  id == cheques[i]->getChequeNumber() )
			return cheques[i];
	}

	return nullptr;
}

bool ChequeBook::recieveCheck( int id ){

	Cheque * c = this->find(id);
	if ( !c )
		return false;
	c->setRecieved(true);
	return true;
}


bool ChequeBook::cancelCheck( int id ){

	Cheque * c = this->find(id);
	if ( !c )
		return false;
	c->setCancelled(true);
	return true;
}

bool ChequeBook::isChequeRecieved(int id){
	return this->find(id)->getRecieved();
}

bool ChequeBook::isChequeCanceled(int id){
	return this->find(id)->getCancelled();
}

ChequeBook::~ChequeBook()
{

	chequeBookId=0;

}

void ChequeBook::setAccountId(int aid){
	accountID = aid;
}

int ChequeBook::getAccountId(){
	return accountID;
}