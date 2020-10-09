#include "creditcardapplication.h"
#include "tellermenu.h"
#include<qerrormessage.h>

CreditCardApplication::CreditCardApplication(Teller* _t,QWidget *parent)
	: QWidget(parent)
{
	this->teller=_t;
	ui.setupUi(this);
}

void CreditCardApplication::backButton(){
	TellerMenu* f = new TellerMenu(this->teller);
	f->show();
	this->close();
}


bool CreditCardApplication::isInt(string p){
	if(p.size()<=0){
		return false;
	}
	for(int i=0;i<p.size();i++){
		if(p[i]!='1'&&p[i]!='2'&&p[i]!='3'&&p[i]!='4'&&p[i]!='5'&&p[i]!='6'&&p[i]!='7'&&p[i]!='8'&&p[i]!='9'&&p[i]!='0'){
			return false;
		}
	}
return true;
}



void CreditCardApplication::applyButtonClicked(){ //check credit card for account already created on not 
	QErrorMessage* msg = new QErrorMessage(this);
	if(this->isInt(ui.lineEdit->text().toStdString()) && this->isInt(ui.lineEdit_2->text().toStdString())&& ui.lineEdit_3->text().toStdString().size()>0 && ui.lineEdit_4->text().toStdString().size()>0){
		Card* c = new Card(ui.lineEdit_2->text().toInt(),true,ui.lineEdit->text().toInt());
		c->setIssuedDate(ui.lineEdit_3->text().toStdString());
		c->setExpirationDate(ui.lineEdit_4->text().toStdString());
		if(this->teller->requestCreditCard(c)){
			msg->showMessage("Card Created Successfully");
		}
		else{
			msg->showMessage("Operation Failed");
		}
		return;
	}

	msg->showMessage("Fill the form Completely, card id and account is int");
}

CreditCardApplication::~CreditCardApplication()
{

}
