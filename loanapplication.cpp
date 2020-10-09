#include "loanapplication.h"
#include "BankLoan.h"
#include"ui_loanapplication.h"
#include <qerrormessage.h>
#include "tellermenu.h"

LoanApplication::LoanApplication(Teller * t1,QWidget *parent)
	: QWidget(parent)
{
	t=t1;
	ui.setupUi(this);
}

LoanApplication::~LoanApplication()
{
	
}

void LoanApplication::OnApplyClick()
{
	double s,v;
	bool c;
	QErrorMessage * message = new QErrorMessage(this);

	s=ui.lineEdit->text().toDouble();
	v=ui.lineEdit_2->text().toDouble();
	BankLoan * b = new BankLoan( v , 200.00 , 1.5 ,  false , s );
	c=t->requestLoan(b);
	

	goBack();
	if(c==true)
		message->showMessage("Loan Applied Successfully");
	else
		message->showMessage("Loan Applied UnSuccessfully");

}


void LoanApplication::Back(){
	goBack();
}

void LoanApplication::goBack(){
	TellerMenu * w = new TellerMenu(t);
	w->show();
	this->close();
}
