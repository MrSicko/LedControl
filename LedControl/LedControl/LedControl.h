#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LedControl.h"

class LedControl : public QMainWindow
{
	Q_OBJECT

public:
	LedControl(QWidget *parent = Q_NULLPTR);

private:
	Ui::LedControlClass ui;
};
