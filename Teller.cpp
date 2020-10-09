#include "Teller.h"
#include "Manager.h"
#include"Draft.h"
#include"Vault.h"
#include"Cheque.h"
#include "DataAccessLayer.h"

Teller::Teller(int id , string c , string n ,  int a , string ad , string p , string m , double s , int bid , int mid , string lid , string pass , string d )
	: Employee(id, c, n, a, ad, p, m, s, bid, mid, lid, pass, d){ }


bool Teller::addAccount(Account* a){
	
return true; }

bool Teller::addPerson(Person * p){
	MyDAL db;
	return db.InsertPerson(p);
}

Person * Teller::getPerson(string cn){
	MyDAL db;
	
	return db.getPerson(cn);
}

bool Teller::eraseAccount(Account* a){
	
return true; }

bool Teller::requestLoan(BankLoan* b){

	return true;
 }

Employee * Teller::getManager(){
	return Manager::getManagerInstance();
}

bool Teller::requestAtmCard(AtmCard* b){

	return true;
return true; }

bool Teller::requestCreditCard(Card* b){
	return true;
return true; }

bool Teller::createSavingAccount(Account* b){
return true; }

bool Teller::createCurrentAccount(CurrentAccount* b){
	MyDAL db;

	return db.InsertCurrentAccount(b);
}

bool Teller::modiySavingAccount(Account* b){
return true; }

bool Teller::modifyCurrentAccount(Account* b){
return true; }

bool Teller::createVault(Vault* b){
	MyDAL db;
	return db.InsertVault(b);
}

bool Teller::closeAccount(int acId){
	MyDAL db;
	return db.DeleteAccount(acId);
}

bool Teller::closeVault(Vault* b){
	
	MyDAL db;
	return db.DeleteVault(b);
}


bool Teller::depositCash(int acid , double amount ){
	
	MyDAL db;
	Account * a = db.getAccount(acid);
	return a->DepositMoney(amount);


}

bool Teller::withdrawCash( int acid , double amount ){
	MyDAL db;

	Account * a = db.getAccount(acid);

	return a->WithdrawMoney(amount);
	
}

bool Teller::TransferMoney(int accId, int AccId, double amount){
	
	if (this->withdrawCash(accId, amount))
		return this->depositCash(AccId, amount);

	return false;

}

bool Teller::payBill(Bill* b){
	return true;
}

bool Teller::applyForChequeBook(ChequeBook* b){
return true; }

bool Teller::makeDraft(Draft* b){
return true; }

bool Teller::receiveDraft(Draft* b){
return true; }

bool Teller::acceptCheque(Cheque* b){
return true; }

bool Teller::cancelCheque(Cheque* b){
return true; }



Teller::~Teller(){ }

//addons by Haseeb
bool Teller::addItemToVault(Item* i){
	MyDAL db;
	return db.InsertItem(i);
}

bool Teller::getVault(int vaultno){
	return true;
}

bool Teller::retrieveItem(int itemId, int vaultno){
	MyDAL db;
	return db.DeleteItem(itemId, vaultno);


}

vector<Item*>* Teller::getAllVaultItems(){
	MyDAL db;
	return db.getAllVaultItems();

}