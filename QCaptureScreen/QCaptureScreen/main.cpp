#include "./UI/QHomePage.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QCaptureScreen w;
	w.show();
	return a.exec();
}
