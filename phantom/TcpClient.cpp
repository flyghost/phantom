#include "TcpClient.h"



TcpClient::TcpClient(Ui::PhantomClass *m_ui)
{
	ui = m_ui;

	tcpClientInit();
}


TcpClient::~TcpClient()
{
}

//TCP初始化（按钮失能，信号槽初始化）
void TcpClient::tcpClientInit()
{
	ui->tcpClientSendButton->setEnabled(false);

	tcpSocket = new QTcpSocket(this);

	tcpConnectInit();
}

//信号槽初始化
void TcpClient::tcpConnectInit()
{
	QObject::connect(ui->tcpClientConnectButton, &QPushButton::clicked, this, &TcpClient::on_tcpClientConnectButton_clicked);
	connect(tcpSocket, &QTcpSocket::readyRead, this, &TcpClient::readMessageFromServer);
	connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),this, SLOT(connectError(QAbstractSocket::SocketError)));

}

//连接按钮事件
void TcpClient::on_tcpClientConnectButton_clicked()
{
	if ((ui->tcpClientConnectButton->text()) == QString::fromLocal8Bit("连接"))
	{
		host = ui->tcpClientHostLineEdit->text();
		port = ui->tcpClientPortLineEdit->text();

		qDebug() << "host:" << host << "port:" << port;
		
		tcpSocket->connectToHost(host, port.toInt());

		ui->tcpClientHostLineEdit->setEnabled(false);
		ui->tcpClientPortLineEdit->setEnabled(false);
		ui->tcpClientSendButton->setEnabled(true);
		ui->tcpClientConnectButton->setText(QString::fromLocal8Bit("断开"));

		//qDebug() << "connect";
	}
	else
	{
		tcpSocket->abort();

		ui->tcpClientHostLineEdit->setEnabled(true);
		ui->tcpClientPortLineEdit->setEnabled(true);
		ui->tcpClientSendButton->setEnabled(false);
		ui->tcpClientConnectButton->setText(QString::fromLocal8Bit("连接"));
		//qDebug() << "disconnect";
	}
}

//读取消息
void TcpClient::readMessageFromServer()
{
	recvMesgByte = tcpSocket->readAll();
	ui->tcpClientReceiveBrowser->setText(QString(recvMesgByte));
}




//连接错误
void TcpClient::connectError(QAbstractSocket::SocketError)
{
	//qDebug() << "connect error:" << tcpSocket->errorString();

	tcpSocket->abort();
	ui->tcpClientHostLineEdit->setEnabled(true);
	ui->tcpClientPortLineEdit->setEnabled(true);
	ui->tcpClientSendButton->setEnabled(false);
	ui->tcpClientConnectButton->setText(QString::fromLocal8Bit("连接"));
	
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

