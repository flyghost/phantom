#include "TcpClientVideo.h"



TcpClientVideo::TcpClientVideo(Ui::PhantomClass *m_ui)
{
	ui = m_ui;

	tcpClientInit();

	//ui->VideoTcpClientLabel->setGeometry(0, 0, 600, 600);

}


TcpClientVideo::~TcpClientVideo()
{
}

//检验一帧是否完成，完成则显示
void TcpClientVideo::showVideo(QByteArray recvMesgByte)
{

	qint8 t = 0;

	if ((t = (recvMesgByte).indexOf("end")) != -1)
	{
		QString str = QString(recvMesgByte);
		QStringList list = str.split("e");
		QString len = list[0];
		qint32 length = len.toInt();

		//判断接收的长度和发送的长度是否相等
		if (length == pData.size())
		{
			image = pData;
			if (imageresult.loadFromData(image))
			{
				ui->VideoTcpClientLabel->setPixmap(imageresult);

				ui->VideoTcpClientLabel->update();
			}



			//qDebug()<< "receive pic:" << str << "#" << length << "#" << pData.size();
		}
		pData.clear();
	}
	else
	{
		pData.append((recvMesgByte));
	}

}

//TCP初始化（按钮失能，信号槽初始化）
void TcpClientVideo::tcpClientInit()
{
	ui->tcpClientSendButton->setEnabled(false);

	tcpSocket = new QTcpSocket(this);

	tcpConnectInit();
}

//信号槽初始化
void TcpClientVideo::tcpConnectInit()
{
	QObject::connect(ui->videoTcpClientConnectButton, &QPushButton::clicked, this, &TcpClientVideo::on_videoTcpClientConnectButton_clicked);
	connect(tcpSocket, &QTcpSocket::readyRead, this, &TcpClientVideo::readMessageFromServer);
	connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(connectError(QAbstractSocket::SocketError)));

}

//连接按钮事件
void TcpClientVideo::on_videoTcpClientConnectButton_clicked()
{
	if ((ui->videoTcpClientConnectButton->text()) == QString::fromLocal8Bit("连接"))
	{
		host = ui->videoTcpClientHostLineEdit->text();
		port = ui->videoTcpClientPortLineEdit->text();

		qDebug() << "host:" << host << "port:" << port;

		tcpSocket->connectToHost(host, port.toInt());

		ui->videoTcpClientConnectButton->setText(QString::fromLocal8Bit("断开"));

		//qDebug() << "connect";
	}
	else
	{
		tcpSocket->abort();

		ui->videoTcpClientConnectButton->setText(QString::fromLocal8Bit("连接"));
		//qDebug() << "disconnect";
	}
}

//读取消息
void TcpClientVideo::readMessageFromServer()
{
	recvMesgByte = tcpSocket->readAll();
	//ui->videoTcpClientReceiveBrowser->setText(QString(recvMesgByte));
	showVideo(recvMesgByte);
}




//连接错误
void TcpClientVideo::connectError(QAbstractSocket::SocketError)
{
	//qDebug() << "connect error:" << tcpSocket->errorString();

	tcpSocket->abort();

	ui->videoTcpClientConnectButton->setText(QString::fromLocal8Bit("连接"));

	//QMessageBox::about(ui->phantomTabWidget, QString::fromLocal8Bit("错误"), tcpSocket->errorString());

	QString error = tcpSocket->errorString();

	if ("Connection refused" == error)
	{
		QMessageBox::about(ui->phantomTabWidget, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("远程服务器未开启"));
	}
	else if ("The remote host closed the connection" == error)
	{
		QMessageBox::about(ui->phantomTabWidget, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("远程服务器连接中断"));
	}
	else
	{
		QMessageBox::about(ui->phantomTabWidget, QString::fromLocal8Bit("提示"), error);
	}
}

