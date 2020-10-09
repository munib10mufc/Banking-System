#ifndef GUIDESIGN_H
#define GUIDESIGN_H

#include <QtWidgets/QMainWindow>
#include "ui_guidesign.h"

class guidesign : public QMainWindow
{
	Q_OBJECT

public:
	guidesign(QWidget *parent = 0);
	~guidesign();

private:
	Ui::guidesignClass ui;
};

#endif // GUIDESIGN_H
