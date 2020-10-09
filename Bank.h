#ifndef Bank_H
#define Bank_H

#include <string>
#include <vector>
#include "Branch.h"
using namespace std;

class Branch;
class Bank
{
	int id;
	string title;
	static Bank * instance;
	Bank( );
public:
	
	static Bank * getBankInstance( ) ;
	vector<Branch *> * getBranches() ;
	bool addBranch( Branch * );
	void setTitle(string);
	string getTitle();
	int getID();
	void setID(int i);
	~Bank();

};

#endif