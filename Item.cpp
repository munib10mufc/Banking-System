#include"Item.h"
#include<iostream>
using namespace std;

Item::Item(int id , string n , string d , double w , int vaultId )
{
	this->setID(id);
	this->setName(n);
	this->setDescription(d);
	this->setWeight(w);
	this->setVault(vaultId);
}

void Item::setID(int id){
	this->id = id;
}

void Item::setVault (int v){
	this->vaultId=v;
}

void Item::setName(string n)
{
	name = n;
}
void Item::setDescription(string d)
{

	description = d;

}

void Item::setWeight(double w)
{
	weight=w;
}

string Item::getName()
{
	return this->name;

}

string Item::getDescription()
{
	return this->description;

}

double Item::getWeight()
{
	return this->weight;
}

int Item::getID(){
	return id;
}

int Item::getVaultId(){
	return this->vaultId;
}

Item::~Item()
{

}