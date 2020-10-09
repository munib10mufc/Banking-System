#include "inquirebalance.h"

inquireBalance::inquireBalance(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

inquireBalance::~inquireBalance()
{

}

void inquireBalance ::backClicked()
{
	this->back = new mainMenu;
	back->show();
	this->close();
}