#include "incentive.h"
#include"managermenu.h"""

incentive::incentive(Manager * _m ,QWidget *parent)
	: QWidget(parent)
{
	this->m = _m;
	ui.setupUi(this);

}

void incentive::backButton(){
	ManagerMenu* t = new ManagerMenu(this->m);
	t->show();
	this->close();
}

void incentive::applyClicked(){

}


incentive::~incentive()
{

}

