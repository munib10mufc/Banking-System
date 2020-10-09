#include"Branch.h"
#include<iostream>
using namespace std;

Branch::Branch(int b,string bn,string l , int bID)
{
	this->setBranchId(b);
	this->setBranchName(bn);
	this->setBranchLocation(l);
	this->setBankID(bID);
}

void Branch::setBranchId(int i)
{
	branchId=i;
}

void Branch::setBranchName(string bn)
{
	branchName = bn;
}

void Branch::setBranchLocation(string l)
{
	location = l ;
}

int Branch::getBranchId()
{
	return this->branchId;
}

string Branch::getBranchName()
{

	return this->branchName;

}


string Branch::getBranchLocation()
{

	return this->location;

}


Bank * Branch::getBank(){
	return nullptr;
}

void Branch::setBankID(int bID){
	bankID = bID;
}


Branch::~Branch()
{
	branchId=0;
}

