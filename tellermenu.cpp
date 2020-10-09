#include "tellermenu.h"
#include"login.h"

TellerMenu::TellerMenu(Teller * t, QWidget *parent )
	: QWidget(parent)
{
	ui.setupUi(this);
	this->teller = t;
}


void TellerMenu::accountOptionClicked(){
	this->accMenue= new AccountSubMenu(teller);
	accMenue->show();
	this->close();
}

void TellerMenu::vaultOptionsClicked(){
	this->vault = new VaultSubMenu(teller);
	vault->show();
	this->close();
}

void TellerMenu::logout(){
	Login* f = new Login();
	f->show();
	this->close();
}

void TellerMenu::creditCardOptionClicked(){
	this->cardApp = new CreditCardApplication(this->teller);
	cardApp->show();
	this->close();
}

void TellerMenu::applyLoanClicked(){
	this->loan = new LoanApplication(teller);
	loan->show();
	this->hide();
}

void TellerMenu::makeCashDraft(){
	this->draft= new makeDraft(teller);
	draft->show();
	this->hide();
}

void TellerMenu::billPaymentClicked(){
	this->bill = new billPayment(teller);
	this->bill->show();
	this->hide();
}

void TellerMenu::atmCardOptionClicked(){
	this->atmCardApp = new AtmCardApplication(this->teller);
	atmCardApp->show();
	this->close();
}

void TellerMenu::chequeBookOptionClicked(){
	this->chequeBookAPP=new ChequBookApplication(teller);
	this->chequeBookAPP->show();
	this->hide();
}

TellerMenu::~TellerMenu()
{

}
