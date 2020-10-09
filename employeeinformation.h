
#ifndef EMPLOYEEINFORMATION_H
#define EMPLOYEEINFORMATION_H

#include <QWidget>
#include "ui_employeeinformation.h"
#include "Manager.h"

class EmployeeInformation : public QWidget
{
	Q_OBJECT

public:
	EmployeeInformation(Manager * _m = nullptr , QWidget *parent = 0);
	~EmployeeInformation();

	public slots:
	void backClicked();
	void onViewInfoClicked();
private:
	Ui::EmployeeInformation ui;
	Manager * m;
};

#endif // EMPLOYEEINFORMATION_H
