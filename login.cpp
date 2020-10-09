#include "login.h"
#include "tellermenu.h"
#include "managermenu.h"

Login::Login(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Login::~Login()
{

}

void Login::onLoginClicked(){

	d = db.Login(ui.enter_login->text().toStdString() , ui.enter_password->text().toStdString());

	Employee * e = d->e;
	if (d->i == 1)
	{
		TellerMenu * w = new TellerMenu(dynamic_cast<Teller *>(d->e));
		w->show();
	}
	else
	{
		ManagerMenu * w = new ManagerMenu(dynamic_cast<Manager *>(d->e));
		w->show();
	}
	this->close();
}
