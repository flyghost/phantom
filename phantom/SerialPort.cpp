#include "SerialPort.h"


SerialPort::SerialPort(Ui::PhantomClass *m_ui)
{
	ui = m_ui;

	serialInit();//串口初始化
	serialConnectInit();//信号槽初始化
}


SerialPort::~SerialPort()
{
}

//信号槽初始化
void SerialPort::serialConnectInit()
{
	QObject::connect(ui->serialOpenButton, &QPushButton::clicked, this, &SerialPort::on_serialOpenButton_clicked);
	QObject::connect(ui->serialClearReceiveButton, &QPushButton::clicked, this, &SerialPort::on_serialClearReceiveButton_clicked);
	QObject::connect(ui->serialSendButton, &QPushButton::clicked, this, &SerialPort::on_serialSendButton_clicked);
	QObject::connect(ui->serialClearSendButton, &QPushButton::clicked, this, &SerialPort::on_serialClearSendButton_clicked);
	connect(ui->serialTimeAdd, SIGNAL(stateChanged(int)), this, SLOT(onTimeStateChanged(int)));
	connect(ui->serialLineChange, SIGNAL(stateChanged(int)), this, SLOT(onLineStateChanged(int)));
}

void SerialPort::serialInit()
{
	serialCheck();
	//设置波特率下拉菜单默认显示第三项
	ui->serialBondBox->setCurrentIndex(7);
	//关闭发送按钮的使能
	ui->serialSendButton->setEnabled(false);

	
}
void SerialPort::serialCheck()
{
	//qDebug() << "check com can use";
	ui->serialComSelectBox->clear();
	//查找可用的串口
	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
	{
		QSerialPort serial;
		serial.setPort(info);
		if (serial.open(QIODevice::ReadWrite))
		{
			//ui->serialBox->addItem(serial.portName());
			ui->serialComSelectBox->addItem(serial.portName());
			serial.close();
		}
	}
}
void SerialPort::on_serialOpenButton_clicked()
{
	if( (ui->serialOpenButton->text()) == QString::fromLocal8Bit("打开串口"))
	{
		serial = new QSerialPort;
		//设置串口名
		serial->setPortName(ui->serialComSelectBox->currentText());
		//打开串口
		serial->open(QIODevice::ReadWrite);
		//设置波特率
		serial->setBaudRate(ui->serialBondBox->currentText().toInt());
		//设置数据位数
		switch (ui->serialDateBitBox->currentIndex())
		{
		case 8: serial->setDataBits(QSerialPort::Data8); break;
		default: break;
		}
		//设置奇偶校验
		switch (ui->serialOddEvenBox->currentIndex())
		{
		case 0: serial->setParity(QSerialPort::NoParity); break;
		default: break;
		}
		//设置停止位
		switch (ui->serialStopBitBox->currentIndex())
		{
		case 1: serial->setStopBits(QSerialPort::OneStop); break;
		case 2: serial->setStopBits(QSerialPort::TwoStop); break;
		default: break;
		}
		//设置流控制
		serial->setFlowControl(QSerialPort::NoFlowControl);
		//关闭设置菜单使能
		ui->serialComSelectBox->setEnabled(false);
		ui->serialBondBox->setEnabled(false);
		ui->serialDateBitBox->setEnabled(false);
		ui->serialOddEvenBox->setEnabled(false);
		ui->serialStopBitBox->setEnabled(false);
		ui->serialSendButton->setEnabled(true);
		ui->serialOpenButton->setText(QString::fromLocal8Bit("关闭串口"));
		//连接信号槽
		QObject::connect(serial, &QSerialPort::readyRead, this, &SerialPort::read_Data);
	}
	else
	{
		//关闭串口
		//serial->clear();
		serial->close();
		serial->deleteLater();
		//恢复设置使能
		ui->serialComSelectBox->setEnabled(true);
		ui->serialBondBox->setEnabled(true);
		ui->serialDateBitBox->setEnabled(true);
		ui->serialOddEvenBox->setEnabled(true);
		ui->serialStopBitBox->setEnabled(true);
		ui->serialSendButton->setEnabled(true);
		ui->serialOpenButton->setText(QString::fromLocal8Bit("打开串口"));
	}
}

//读取接收到的数据
void SerialPort::read_Data()
{
	QByteArray recvQBA = serial->readAll();
	QTextCodec *tc = QTextCodec::codecForName("GBK");
	QString recvQStr = tc->toUnicode(recvQBA);
	if (!recvQStr.isEmpty())
	{
		QString str = ui->serialReceiveBrowser->toPlainText();
		str += recvQStr;
		if (if_show_time)
		{
			str += "[";
			str += get_time();
			str += "]";
		}
		if (if_auto_enter)
		{
			str += "\r\n";
		}
		ui->serialReceiveBrowser->clear();
		ui->serialReceiveBrowser->append(str);

		qDebug() << str.length();
	}
	recvQStr.clear();

}

//清空接收窗口
void SerialPort::on_serialClearReceiveButton_clicked()
{
	ui->serialReceiveBrowser->clear();
}

//发送数据
void SerialPort::on_serialSendButton_clicked()
{
	QString sendmesg = ui->serialSendEdit->toPlainText();

	sendmesg.replace(QString("\n"), QString("\r\n"));

	serial->write(sendmesg.toLatin1());

}
//清除发送窗口
void SerialPort::on_serialClearSendButton_clicked()
{
	ui->serialSendEdit->clear();
}

//是否自动换行显示
void SerialPort::onLineStateChanged(int state)
{
	if (state == Qt::Checked) // "选中"
	{
		if_auto_enter = true;
	}
	else if (state == Qt::PartiallyChecked) // "半选"
	{
		if_auto_enter = false;
	}
	else // 未选中 - Qt::Unchecked
	{
		if_auto_enter = false;
	}
}
//是否加上时间戳
void SerialPort::onTimeStateChanged(int state)
{
	if (state == Qt::Checked) // "选中"
	{
		//qDebug() << tr("选中");
		if_show_time = true;
	}
	else if (state == Qt::PartiallyChecked) // "半选"
	{
		if_show_time = false;
	}
	else // 未选中 - Qt::Unchecked
	{
		if_show_time = false;
	}
}