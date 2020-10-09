#ifndef ChequeBook_H
#define ChequeBook_H

#include "Cheque.h"
#include "CurrentAccount.h"
#include <vector>
using namespace std;

class Cheque;
class ChequeBook
{
	int chequeBookId;
	int accountID;
	vector < Cheque *> cheques;
public:

	ChequeBook(int c = 0 , int accID = 0);
	void setChequeBookId(int );
	void setAccountId(int);
	int getAccountId();
	int getChequeBookId();
	bool recieveCheck( int id );
	bool cancelCheck( int id );
	bool isChequeRecieved(int id);
	bool isChequeCanceled(int id);
	~ChequeBook();

private:
	Cheque * find( int id);
};

#endif