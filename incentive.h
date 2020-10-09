#ifndef INCENTIVE_H
#define INCENTIVE_H

#include <QWidget>
#include "ui_incentive.h"
#include"Manager.h"
class ManagerMenu;

class incentive : public QWidget
{
	Q_OBJECT

public:
	incentive( Manager * _m , QWidget *parent = 0);
	~incentive();
	public slots:
	void backButton();
	void applyClicked();

private:
	Ui::incentive ui;
	Manager* m;
};

#endif // INCENTIVE_H
