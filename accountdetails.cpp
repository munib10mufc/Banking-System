#include "accountdetails.h"
#include "accountsubmenu.h"
accountDetails::accountDetails(Teller * _t ,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	t = _t;
}

accountDetails::~accountDetails()
{

}


void accountDetails::goBack2(){
	AccountSubMenu * a = new AccountSubMenu(t);
	a->show();
	this->close();
}


void accountDetails::goBack(){
	goBack2();
}