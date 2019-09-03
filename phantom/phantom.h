#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_phantom.h"
#include "SerialPort.h"
#include "TcpClient.h"
#include "Wave.h"
#include "BaiduMap.h"
#include "TcpClientVideo.h"


class Phantom : public QMainWindow
{
	Q_OBJECT

public:
	Phantom(QWidget *parent = Q_NULLPTR);
	SerialPort *phantomport;
	TcpClient *tcpclient;
	Wave *wave;
	BaiduMap *baidumap;
	TcpClientVideo *videotcpclient;


private:
	Ui::PhantomClass ui;


private slots:

};
