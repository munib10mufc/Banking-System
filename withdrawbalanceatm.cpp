#include "withdrawbalanceatm.h"
#include<qerrormessage.h>

withDrawBalance::withDrawBalance(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

withDrawBalance::~withDrawBalance()
{

}

void withDrawBalance::backClicked()
{
	this->back = new mainMenu;
	back->show();
	this->close();

}
void withDrawBalance::onenterClicked()
{

	QErrorMessage * message = new QErrorMessage(this);
	backClicked();
	message->showMessage("Amount withdraw successfully");



}