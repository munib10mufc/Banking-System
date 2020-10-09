#include "welcome.h"

welcome::welcome(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

welcome::~welcome()
{


}

void welcome::enterClicked()
{
	this->enter = new mainMenu;
	enter->show();
	this->close();
}
