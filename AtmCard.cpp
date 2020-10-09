#include"AtmCard.h"
#include<iostream>
using namespace std;
AtmCard::AtmCard(int ci, bool iss, int ac,int p):Card(ci,iss,ac)
{
	this->setPin(p);

}
void AtmCard::setPin(int p)
{


	pin=p;

}
int AtmCard::getPin()
{

	return this->pin;

}
AtmCard::~AtmCard()
{

	pin=0;

}