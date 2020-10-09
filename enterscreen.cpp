#include "enterscreen.h"

EnterScreen::EnterScreen(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

EnterScreen::~EnterScreen()
{

}


void EnterScreen::onBankClicked(){
	Login * w = new Login();
	w->show();
	this->close();
}

void EnterScreen::onATMClicked(){
	welcome * w = new welcome();
	w->show();
	this->close();
}