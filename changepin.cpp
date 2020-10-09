#include "changepin.h"
#include<qerrormessage.h>

changePin::changePin(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

changePin::~changePin()
{

}

void changePin::backClicked()
{
	this->back = new mainMenu;
	back->show();
	this->close();

}
void changePin::onEnterClick()
{

	QString s, v;
	
	QErrorMessage * message = new QErrorMessage(this);
	s = ui.newPin_lineEdit->text();
	v = ui.reenterPin_lineEdit->text();
	if (s == v)
	{
		backClicked();
		message->showMessage("Pin changed successfully");
		
	}
	else
		message->showMessage("Pin doesnot match");




}