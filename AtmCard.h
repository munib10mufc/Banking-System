#ifndef ATMCARD_H
#define ATMCARD_H
#include"Card.h"

class AtmCard:public Card
{
	int pin;
public:
	AtmCard(int ci = 0, bool iss = false, int ac = 0,int p=0);
	void setPin(int p);
	int getPin();
	~AtmCard();


};
#endif