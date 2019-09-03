#include "phantom.h"
#include <QFile.h>

Phantom::Phantom(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QFile *qssFile;//界面文件
				   //this->setWindowFlags(Qt::FramelessWindowHint|Qt::Tool );
	qssFile = new QFile(":/Phantom/Resources/stylesheet.qss", this);
	qssFile->open(QFile::ReadOnly);// 只读方式打开该文件
	QString styleSheet = tr(qssFile->readAll());// 读取文件全部内容，使用tr()函数将其转换为QString类型
	qApp->setStyleSheet(styleSheet);// 为QApplication设置样式表
	qssFile->close();

	phantomport = new SerialPort(&ui);
	tcpclient = new TcpClient(&ui);
	wave = new Wave(&ui);
	baidumap = new BaiduMap(&ui);
	videotcpclient = new TcpClientVideo(&ui);
}
