#ifndef Item_H
#define Item_H

#include <string>
using namespace std;
#include "Vault.h"

class Vault;
class Item
{
	int id;
	string name;
	string description;
	double weight;
	int vaultId;

public:
	
	Item (int id = 0, string n = "" , string d= "", double w = 0.0 , int vaultId= 0);
	void setName(string );
	void setDescription(string );
	void setWeight(double );
	void setID(int id);
	void setVault (int v=0);
	int getID() ;
	string getName();
	string getDescription();
	double getWeight();
	int  getVaultId() ;
	~Item();

};

#endif;