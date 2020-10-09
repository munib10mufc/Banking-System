#ifndef CREATESAVINGSACCOUNT_H
#define CREATESAVINGSACCOUNT_H
#include "Teller.h"
#include <QWidget>
#include "ui_createsavingsaccount.h"

class createSavingsAccount : public QWidget
{
	Q_OBJECT

public:
	createSavingsAccount(Teller * t = nullptr, QWidget *parent = 0);
	~createSavingsAccount();
	void goBack2();
	public slots:
	void onCreateSavingsAccountClicked();
	void goBack();
private:
	Ui::createSavingsAccount ui;
	Teller * t;
};

#endif // CREATESAVINGSACCOUNT_H
