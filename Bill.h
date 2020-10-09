#pragma once
#include<string>
using namespace std;
class Bill
{
	int BillID;
	string party;
	int paidAmount;
	int BillAmount;
public:
	Bill(int ID=0,string party="",int paid=0,int Due=0);
	
	int getBillID();
	void setBillID(int);
	string getParty();
	void setParty(string);
	int getPaidAmount();
	void setPaidAmount(int);
	int getBillAmount();
	void setBillAmount(int);

	~Bill(void);
};

