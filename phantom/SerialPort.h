#pragma once

#include "ui_phantom.h"
#include <QtSerialPort>
#include <QtWidgets/QMainWindow>



class SerialPort : public QObject
{
	Q_OBJECT
public:
	SerialPort(Ui::PhantomClass *m_ui);
	~SerialPort();

private:
	Ui::PhantomClass *ui;
	QSerialPort *serial;
	bool if_show_time = false;//是否显示时间
	bool if_auto_enter = false;//是否自动换行
	bool if_serial_open = false;//是否开始接受数据

private:
	//void serialCheck();
	void serialInit();
	void serialConnectInit();
	QString get_time()
	{
		QDateTime time = QDateTime::currentDateTime();
		QString timetoString = time.toString("yyyy-MM-dd hh:mm:ss");//yyyy-MM-dd hh:mm:ss dddd
		return timetoString;
	}
	
	//QTimer *timer = new QTimer(this);
	//void timeSerialCheck()//定时器定时检查可用串口
	//{
	//	//停止运行定时器
	//	if (timer->isActive())
	//	{
	//		timer->stop();
	//	}
	//	else
	//	{
	//		connect(timer, SIGNAL(timeout()), this, SLOT(serialCheck()));
	//		timer->start(1000);
	//	}
	//}



private slots:
	void serialCheck();
	void read_Data();
	void on_serialOpenButton_clicked();
	void on_serialClearReceiveButton_clicked();
	void on_serialSendButton_clicked();
	void on_serialClearSendButton_clicked();
	void onLineStateChanged(int state);
	void onTimeStateChanged(int state);


};

