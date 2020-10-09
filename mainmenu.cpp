#include "mainmenu.h"

mainMenu::mainMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

mainMenu::~mainMenu()
{

}

void mainMenu::withdrawClicked()
{
	this->w = new withDrawBalance;
	w->show();
	this->close();
}



void mainMenu::changePinClicked()
{
	this->p = new changePin;
	p->show();
	this->close();

}
void mainMenu::inquireBalanceClicked()
{
	this->b = new inquireBalance;
	b->show();
	this->close();
}