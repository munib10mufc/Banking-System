#include"Person.h"
#include<iostream>
using namespace std;

Person::Person(int id , string c , string n , int a , string ad , string p , string m )
{
	this->setId(id);
	this->setCNIC(c);
	this->setName(n);
	this->setAge(a);
	this->setAddress(ad);
	this->setPhoneNo(p);
	this->setMobileNo(m);


}

void Person::setId(int i){
	id = i;
}

void Person::setCNIC(string  c)
{
	cnic=c;
}

void Person::setName(string n)
{
    name=n;
}

void Person::setAge(int a)
{
	age=a;
}

void Person::setAddress(string ad)
{
	address=ad;
}

void Person::setPhoneNo(string p)
{

	phoneNo=p;

}
void Person::setMobileNo(string m)
{

	mobileNo=m;

}
string Person::getName()
{
	return this->name;

}
string Person::getAddress()
{

	return this->address;

}
string Person::getMobileNo()
{

	return this->mobileNo;

}

int Person::getId(){
	return id;
}


string Person::getPhoneNo()
{

	return this->phoneNo;

}
int Person::getAge()
{

	return this->age;

}
string Person::getCNIC()
{

	return this->cnic;

}
Person::~Person()
{



}