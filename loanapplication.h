#ifndef LOANAPPLICATION_H
#define LOANAPPLICATION_H

#include <QWidget>
#include "ui_loanapplication.h"
#include"Teller.h"

class LoanApplication : public QWidget
{
	Q_OBJECT

public:
	LoanApplication(Teller * t1=nullptr,QWidget *parent = 0);
	~LoanApplication();
	void goBack();
	public slots:
		void OnApplyClick();
		void Back();
private:
	Ui::LoanApplication ui;
	Teller * t;
};

#endif // LOANAPPLICATION_H
