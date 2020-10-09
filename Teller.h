#ifndef Teller_h
#define Teller_h

#include"Account.h"
#include "Employee.h"
#include "Bill.h"

//#include"BankLoan.h"
//#include"AtmCard.h"
class Draft;
class Vault;
class Cheque;
#include"AtmCard.h"
#include"Card.h"
#include"BankLoan.h"
#include"ChequeBook.h"
#include "Item.h"
#include "Vault.h"

class Teller : public Employee{

public:
	Teller(int id = 0, string c = "", string n = "", int a = 0, string ad = "", string p = "", string m = "", double s = 0.0, int bid = 0, int mid = 0, string lid = "", string pass = "", string d = "");


	bool addAccount(Account* =nullptr);
	bool eraseAccount(Account* =nullptr);
	bool requestLoan(BankLoan* =nullptr);
	bool requestAtmCard(AtmCard* =nullptr);
	bool requestCreditCard(Card* =nullptr);
	bool createSavingAccount(Account * =nullptr);
	bool createCurrentAccount(CurrentAccount * =nullptr);
	bool modiySavingAccount(Account* =nullptr);
	bool modifyCurrentAccount(Account* =nullptr);
	bool createVault(Vault* =nullptr);
	bool closeAccount(int acId);
	bool closeVault(Vault* =nullptr);
	bool applyForChequeBook(ChequeBook* =nullptr);
	bool makeDraft(Draft* =nullptr);
	bool receiveDraft(Draft* =nullptr);
	bool acceptCheque(Cheque* =nullptr);
	bool cancelCheque(Cheque* =nullptr);
	bool TransferMoney(int accId, int AccId, double amount = 0.0);
	bool depositCash(int acid , double amount = 0.0);
	bool payBill(Bill* = nullptr);
	bool withdrawCash(int acid , double amount = 0.0);
	bool addPerson(Person * p);
	Person * getPerson(string cn);

	Employee * getManager();
	~Teller();

	/*Haseeb*/
	
	bool addItemToVault(Item* = nullptr);
	bool getVault(int vaultno);
	bool retrieveItem(int itemId, int vaultno);
	vector<Item*>* getAllVaultItems();
};
#endif