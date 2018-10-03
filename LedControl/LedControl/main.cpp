#include "LedControl.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	LedControl w;
	w.show();
	return a.exec();
}
