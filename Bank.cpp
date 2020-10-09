#include"Bank.h"
#include<iostream>
#include "DataAccessLayer.h"
using namespace std;

Bank * Bank::instance = nullptr;

Bank::Bank()
{
	MyDAL db;
	db.LoadBank(this);
}

Bank * Bank::getBankInstance() {
	if (!instance)
		instance = new Bank();

	return instance;
}


vector<Branch *> * Bank::getBranches() {
	MyDAL db;

	return db.getAllBranches(this);
}

bool Bank::addBranch( Branch * b){

	/*if ( !branches)
		branches = new vector<Branch *> ;

	if ( b)
	{
		branches->push_back(b);
		b->setBank(this);
		return true;
	}
	*/
	return false;
}

void Bank::setTitle(string t)
{
	title = t;
}

string Bank::getTitle()
{
	return this->title;
}


int Bank::getID(){
	return id;
}

void Bank::setID(int i){
	id = i;
}

Bank::~Bank()
{
}