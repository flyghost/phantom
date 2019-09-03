#pragma once

#include "ui_phantom.h"
#include <QThread>
#include <QAbstractSocket>
#include <QtNetwork>
#include <QTcpSocket>
#include <QMessageBox>


class QTcpSocket;

class TcpClient : public QObject
{
	Q_OBJECT

public:
	TcpClient(Ui::PhantomClass *m_ui);
	~TcpClient();

private:
	Ui::PhantomClass *ui;

	QString host;//IP
	QString port;//¶Ë¿Ú
	QString recvMesg;//´æ´¢ÏûÏ¢
	QByteArray recvMesgByte;
	//qint64 recvlength = 0;
	//qint64 sendlength = 0;
	QTcpSocket *tcpSocket;

private:
	void tcpClientInit();
	void tcpConnectInit();
	


private slots:
	void on_tcpClientConnectButton_clicked();
	void readMessageFromServer();
	void connectError(QAbstractSocket::SocketError);

};

