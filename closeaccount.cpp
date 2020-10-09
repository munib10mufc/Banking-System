#include "closeaccount.h"
#include"accountsubmenu.h"
#include"tellermenu.h"
#include <qerrormessage.h>

closeAccount::closeAccount(Teller * t1,QWidget *parent)
	: QWidget(parent)
{
	t=t1;
	ui.setupUi(this);
}

closeAccount::~closeAccount()
{

}
void closeAccount::OnCloseAccountClicked()
{

	int acc;
	bool w;
	QErrorMessage * message = new QErrorMessage(this);

	acc=ui.accountNoEdit->text().toInt();
	w=t->closeAccount(acc);
	goBack6();

	w = t->closeAccount(acc);
	if(w==true)
	message->showMessage("Account Closed Successfully");
	else
		message->showMessage("Account Closed UnSuccessfully");


}
void closeAccount::Back6()
{

		goBack6();

}

void closeAccount::goBack6()
{

	TellerMenu * tm=new TellerMenu(t);
	tm->show();
	this->close();

}