#pragma once

#include "ui_phantom.h"
#include <QThread>
#include <QAbstractSocket>
#include <QtNetwork>
#include <QTcpSocket>
#include <QMessageBox>

class QTcpSocket;

class TcpClientVideo : public QObject
{
	Q_OBJECT

public:
	TcpClientVideo(Ui::PhantomClass *m_ui);
	~TcpClientVideo();

private:
	Ui::PhantomClass *ui;

	QString host;//IP
	QString port;//端口
	QString recvMesg;//存储消息
	QByteArray recvMesgByte;
	QTcpSocket *tcpSocket;

	QByteArray pData;//图片数据流
	QByteArray image;
	QPixmap imageresult;

private:
	void tcpClientInit();
	void tcpConnectInit();
	void showVideo(QByteArray recvMesgByte);



private slots:
	void on_videoTcpClientConnectButton_clicked();
	void readMessageFromServer();
	void connectError(QAbstractSocket::SocketError);


};

