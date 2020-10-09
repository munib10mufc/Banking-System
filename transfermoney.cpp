#include "transfermoney.h"
#include"accountsubmenu.h"
#include <qerrormessage.h>

TransferMoney::TransferMoney(Teller * _t , QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	t = _t;
}

TransferMoney::~TransferMoney()
{

}
void TransferMoney::onClickTransferMoney()
{


	int acc1,acc2;
	double amount;
	bool w;
	QErrorMessage * message = new QErrorMessage(this);

	acc1=ui.lineEdit->text().toInt();
	acc2=ui.lineEdit->text().toInt();
	amount=ui.lineEdit_3->text().toDouble();
	w=t->TransferMoney(acc1,acc2,amount);
	goBack4();

	if(w==true)
	message->showMessage("Money Transfer Successfully");
	else
		message->showMessage("Money Transfer UnSuccessfully");




}

void TransferMoney::Back4()
{

		goBack4();

}

void TransferMoney::goBack4()
{

	AccountSubMenu * a = new AccountSubMenu(t);
	a->show();
	this->close();

}




