#ifndef ACCOUNTDETAILS_H
#define ACCOUNTDETAILS_H
#include "Teller.h"
#include <QWidget>
#include "ui_accountdetails.h"

class accountDetails : public QWidget
{
	Q_OBJECT

public:
	accountDetails(Teller * _t = nullptr ,QWidget *parent = 0);
	~accountDetails();
	void goBack2();
	public slots:
	void goBack();
private:
	Ui::accountDetails ui;
	Teller * t;
};

#endif // ACCOUNTDETAILS_H
