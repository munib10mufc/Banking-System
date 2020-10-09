#ifndef CARD_H
#define CARD_H
#include<time.h>

#include "Account.h"

class Card
{

	int cardId;
	bool issued;
	string expirationDate;
	string issuedDate;
	int account;
	
public:

	Card(int ci = 0, bool iss = false, int ac =0);
	void setCardId(int id);
	void setIssued(bool iss = false);
	void setExpirationDate( string ed );
	void setIssuedDate( string id);
	void setAccount( int ac=0);
	int getCardId();
	string getIssueDate();
	string getExpiryDate();
	int getAccount();
	bool getIssued();
	~Card();

};
#endif