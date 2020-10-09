#include "createsavingsaccount.h"
#include "SavingAccount.h"
#include <qerrormessage.h>
#include "accountsubmenu.h"

createSavingsAccount::createSavingsAccount(Teller * _t , QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->t = _t;

}

createSavingsAccount::~createSavingsAccount()
{

}

void createSavingsAccount::onCreateSavingsAccountClicked(){

	string name = ui.accountNoEdit->text().toStdString();
	string CNIC = ui.lineEdit->text().toStdString();
	int age = ui.lineEdit_2->text().toInt();
	string dob = ui.dateEdit->text().toStdString();
	string address = ui.lineEdit_5->text().toStdString();
	string phone_number = ui.lineEdit_3->text().toStdString();
	string mobile_number = ui.lineEdit_6->text().toStdString();
	Person * p = new Person(0, CNIC, name, age, address, phone_number, mobile_number);

	t->addPerson(p);

	p = t->getPerson(CNIC);


	SavingAccount * sa = new SavingAccount(0, t->getBranchId(), p->getId(),0.0,5.5);

	bool r = t->createSavingAccount(sa);

	QErrorMessage * message = new QErrorMessage(this);

	goBack2();

	if (r == true)
		message->showMessage("Savings Account Created Successfully");
	else
		message->showMessage("Saving Account failed to create");
	
}

void createSavingsAccount::goBack2(){
	AccountSubMenu * a = new AccountSubMenu(t);
	a->show();
	this->close();
}

void  createSavingsAccount::goBack(){
	goBack2();
}
