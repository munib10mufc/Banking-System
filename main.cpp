#include "login.h"
#include "Manager.h"
#include "Bank.h"
#include "CurrentAccount.h"
#include "enterscreen.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	
	Bank::getBankInstance();
	QApplication a(argc, argv);
	EnterScreen * w = new EnterScreen();
	w->show();

	return a.exec();
}
