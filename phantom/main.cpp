#include "phantom.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));

	QApplication a(argc, argv);
	Phantom w;
	w.show();
	return a.exec();
}
