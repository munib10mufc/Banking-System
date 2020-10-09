#ifndef Vault_H
#define Vault_H

#include "Item.h"
#include "Branch.h"

class Item;
class Branch;

class Vault
{
	int branchId;
	int accountId;
	int vaultId;
	

public:

	Vault( int id = 0 ,int aId=0,int bId=0 );
	
	void setID ( int i );
	
	int getID ( );
	int getBranchId();
	int getAccountId();
	
	bool addItem ( Item * i ) ;
	
	Item * retrieveItem ( int id );
	
	vector<Item * > * getItems() ;

	


	
	//void AddItem();
	//void RetrieveItem();
	~Vault();





};
#endif