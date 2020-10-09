#include "createcurrentaccount.h"
#include "Person.h"
#include "CurrentAccount.h"
#include "accountsubmenu.h"
#include <qerrormessage.h>
#include <string>
using namespace std;

createCurrentAccount::createCurrentAccount(Teller * _t , QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->t = _t;

	
}

createCurrentAccount::~createCurrentAccount()
{

}

void createCurrentAccount::onCreateCurrentAccountClicked(){
	string name = ui.accountNoEdit->text().toStdString();
	string CNIC = ui.lineEdit->text().toStdString();
	int age = ui.lineEdit_2->text().toInt();
	string dob = ui.dateEdit->text().toStdString();
	string address = ui.lineEdit_5->text().toStdString();
	string phone_number = ui.lineEdit_3->text().toStdString();
	string mobile_number = ui.lineEdit_6->text().toStdString();
	double balance = ui.lineEdit_7->text().toDouble();

	Person * p = new Person(0, CNIC, name,  age, address, phone_number, mobile_number);
	
	t->addPerson(p);

	p = t->getPerson(CNIC);

	CurrentAccount * ca = new CurrentAccount(0, t->getBranchId(), p->getId(), balance, 500, 0);

	bool r = t->createCurrentAccount(ca);
	
	QErrorMessage * message = new QErrorMessage(this);

	goBack2();

	if (r == true)
		message->showMessage("Savings Account Created Successfully");
	else
		message->showMessage("Saving Account failed to create");

}

void createCurrentAccount::goBack2(){
	AccountSubMenu * a = new AccountSubMenu(t);
	a->show();
	this->close();
}


void createCurrentAccount::goBack(){
	goBack2();
}