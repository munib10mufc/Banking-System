#ifndef CurrentAccount_H
#define CurrentAccount_H

#include "Account.h"
#include "ChequeBook.h"
#include <string>
using namespace std;


class ChequeBook;
class CurrentAccount :public Account
{
	double minBalance;
	int chequeBookID;

public:
	CurrentAccount(int an = 0, int bid = 0, int oid = 0, double b = 0.0, double m = 0, int cbID = 0);
	void setMinBalance(double );
	void setChequeBookID(int cbID );
	bool WithdrawMoney(double a = 0.0) ;
	bool DepositMoney(double a = 0.0) ;
	double getMinBalance();
	int getChequeBookId();
	ChequeBook * getChequeBook();
	~CurrentAccount();
};

#endif