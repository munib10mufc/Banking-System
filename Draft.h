#pragma once
#include <string>
using namespace std;

class Person;
class Draft
{
private:
	int DraftId;
	double amount;
	int branchId;
	string sender;
	string reciever;
	bool recieved;

public:
	Draft(void);
	~Draft(void);

	int getDraftID();
	void setDraftID(int);
	
	void setAmount(double a);
	double getAmount();
	void setBranchId(int b);
	int getBranchId();
	void setSender(string);
	string getSender();
	void setReciever(string);
	string getReciever();
	void setRevieved(bool);
	bool getRecieved();



};

