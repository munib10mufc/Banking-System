#include "chequbookapplication.h"
#include <qerrormessage.h>
#include "tellermenu.h"
#include"ChequeBook.h"
ChequBookApplication::ChequBookApplication(Teller * t1,QWidget *parent)
	: QWidget(parent)
{
	t=t1;
	ui.setupUi(this);
}

ChequBookApplication::~ChequBookApplication()
{

}
void ChequBookApplication::onApplyclick()
{

	double a;
	bool b;
	QErrorMessage * message = new QErrorMessage(this);

	a=ui.lineEdit->text().toDouble();
	ChequeBook * c=new ChequeBook(0,a);
	b=t->applyForChequeBook(c);
	goBack1();
	if(b==true)
		message->showMessage("ChequeBook Applied Successfully");
	else
		message->showMessage("ChequeBook Applied UnSuccessfully");


}
void ChequBookApplication::Back1()
{

	goBack1();
	
}

void ChequBookApplication::goBack1(){
	TellerMenu * w = new TellerMenu(t);
	w->show();
	this->close();
}
