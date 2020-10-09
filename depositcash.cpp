#include "depositcash.h"
#include"accountsubmenu.h"
#include <qerrormessage.h>
depositCash::depositCash(Teller * _t , QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	t = _t;
}

depositCash::~depositCash()
{

}
void depositCash::onSubmitButton()
{

	int acc;
	double am;
	bool w;
	
	QErrorMessage * message = new QErrorMessage(this);

	acc=ui.AccountNumberEdit->text().toInt();
	am=ui.DepositAmountEdit->text().toDouble();
	w=t->depositCash(acc,am);

	goBack3();

	if(w==true)
	message->showMessage("Cash Deposit Successfully");
	else
		message->showMessage("Cash Deposit UnSuccessfully");




}

void depositCash::Back3()
{

		goBack3();

}

void depositCash::goBack3()
{

	AccountSubMenu * a = new AccountSubMenu(t);
	a->show();
	this->close();

}