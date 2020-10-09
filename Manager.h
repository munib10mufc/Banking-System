#ifndef Manager_h
#define Manager_h

#include "Employee.h"
#include "BankLoan.h"

class Manager : public Employee{

	static Manager* mangerPointer;
	Manager();

public:
	
	static Manager* getManagerInstance();
	bool approveLoan(BankLoan*);
	bool addEmployee( Employee * );
	bool eraseEmployee(Employee * );
	bool eraseLoan ( BankLoan * );
	vector<Employee*> * getEmployeeInformation();
	vector<BankLoan *> * getLoans();
	Employee * getManager();
	//bool provideIncentive(Employee*, string);
	~Manager();


};
#endif