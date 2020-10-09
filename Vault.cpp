#include"Vault.h"
#include<iostream>
using namespace std;

Vault::Vault(   int id,int aId,int bId   )
{
	this->branchId=bId;
	this->accountId=aId;
	this->setID(id);
	
}


vector< Item * > * Vault::getItems()
{
	return nullptr;
}

void Vault::setID ( int i ){
	this->vaultId = i;
}
	
int Vault::getID ( ){
	return this->vaultId;
}
int Vault::getBranchId(){
	return branchId;
}
int Vault::getAccountId(){
	return accountId;
}
	

Vault::~Vault()
{
}


	
Item *  Vault::retrieveItem ( int id ){
	return nullptr;
}