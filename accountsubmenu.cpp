#include "accountsubmenu.h"
#include "createcurrentaccount.h"
#include "createsavingsaccount.h"
#include "depositcash.h"
#include "withdrawbalance.h"
#include "transfermoney.h"
#include "closeaccount.h"
#include "accountdetails.h"
#include "tellermenu.h"

AccountSubMenu::AccountSubMenu(Teller * _t ,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	t = _t;
}

AccountSubMenu::~AccountSubMenu()
{

}

void AccountSubMenu::onCreateCurrentAccountClicked(){

	createCurrentAccount * w = new createCurrentAccount(t);
	w->show();
	this->close();

}

void AccountSubMenu::onCreateSavingAccountClicked(){

	createSavingsAccount * w = new createSavingsAccount (t);
	w->show();
	this->close();
}


void AccountSubMenu::onWithdrawCashCLicked(){
	WithdrawBalance * w = new  WithdrawBalance(t);
	w->show();
	this->close();
}

void AccountSubMenu::onDepositCashClicked(){
	depositCash * w = new  depositCash(t);
	w->show();
	this->close();
}

void AccountSubMenu::onAccountDetailsClicked(){
	accountDetails * w = new accountDetails(t);
	w->show();
	this->close();
}

void AccountSubMenu::onTransferMoneyClicked(){
	TransferMoney * w = new  TransferMoney(t);
	w->show();
	this->close();
}

void AccountSubMenu::onModifyAccountClicked(){
	

}

void AccountSubMenu::onCloseAccountClicked(){
	closeAccount *w = new closeAccount(t);
	w->show();
	this->close();
	
}

void AccountSubMenu::backButtonClicked(){
	this->tellerMenu = new TellerMenu(this->t);
	this->close();
	tellerMenu->show();

}
