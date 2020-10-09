#include"Employee.h"
#include<iostream>
using namespace std;

Employee::Employee(int id, string c, string n,int a, string ad, string p, string m, double s, int bid, int mid, string lid , string pass , string d)
	: Person( id , c , n ,  a , ad , p , m)
{

	this->setSalary(s);
	this->setBranch(bid);
	this->setDateOfJoining(d);
	this->setManagerID(mid);
	this->setLogin(lid);
	this->setPassword(pass);
	this->setStatus(true);

}

void Employee::setSalary(double s)
{

	salary=s;

}

void Employee::setBranch(int b)
{

	branchID =b;

}

void Employee::setDateOfJoining(string d)
{
	dateOfJoining=d;

}

void Employee::setManagerID(int id){
	this->managerID = id;
}

void Employee::setLogin(string login){
	this->loginID = login;
}

void Employee::setPassword(string p){
	this->password = p;
}

void Employee::setStatus(bool st ){
	this->status = st;
}


/*** Getters ****/
double Employee::getSalary()
{
	return this->salary;

}

Employee * Employee::getManager(){
	return nullptr;

}


int Employee::getManagerID(){
	return this->managerID;
}

int Employee::getBranchId(){
	return branchID;
}

Branch * Employee::getBranch()
{
	return nullptr;

}

string Employee::getDateOfJoining()
{

	return this->dateOfJoining;

}

string Employee::getLogin(){
	return loginID;
}

string Employee::getPassword(){
	return password;
}

bool Employee::getStatus(){
	return status;
}



Employee::~Employee()
{

}


