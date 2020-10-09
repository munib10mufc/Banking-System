#ifndef CLOSEACCOUNT_H
#define CLOSEACCOUNT_H
#include"Teller.h"
#include <QWidget>
#include "ui_closeaccount.h"

class closeAccount : public QWidget
{
	Q_OBJECT

public:
	closeAccount(Teller * t1,QWidget *parent = 0);
	~closeAccount();
	void goBack6();
	public slots:
		void OnCloseAccountClicked();
		void Back6();
private:
	Ui::closeAccount ui;
	Teller * t;
};

#endif // CLOSEACCOUNT_H
