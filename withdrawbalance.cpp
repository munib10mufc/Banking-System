#include "withdrawbalance.h"
#include"accountsubmenu.h"
#include <qerrormessage.h>

WithdrawBalance::WithdrawBalance(Teller * _t , QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	t = _t;
}

WithdrawBalance::~WithdrawBalance()
{

}
void WithdrawBalance::OnEnterClick()
{
	double acc,am;
	bool w;
	
	QErrorMessage * message = new QErrorMessage(this);

	am=ui.lineEdit->text().toDouble();
	acc=ui.lineEdit_2->text().toInt();
	w=t->withdrawCash(acc,am);
	goBack2();
	if(w==true)
	message->showMessage("Balance Withdraw Successfully");
	else
		message->showMessage("Balance Withdraw UnSuccessfully");

}
void WithdrawBalance::Back2()
{
	goBack2();
}

void WithdrawBalance::goBack2(){
	AccountSubMenu * a = new AccountSubMenu(t);
	a->show();
	this->close();
}