#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "ui_login.h"
#include "LoginData.h"
#include "DataAccessLayer.h"

class Login : public QWidget
{
	Q_OBJECT

public:
	Login(QWidget *parent = 0);
	~Login();

	public slots:
	void onLoginClicked();

private:
	Ui::Login ui;
	loginData * d;
	MyDAL db;
};

#endif // LOGIN_H
