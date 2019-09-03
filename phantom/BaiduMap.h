#pragma once

#include "ui_phantom.h"
#include <QtWidgets/QMainWindow>
#include <QtWebEngineWidgets/qwebengineview.h>

class BaiduMap : public QWidget
{
	Q_OBJECT

public:
	BaiduMap(Ui::PhantomClass *m_ui);
	~BaiduMap();



private:
	void allConnectInit();
	void webChannelInit();

signals:
	void mapToBridgeEmit(QString mesg);

private:
	Ui::PhantomClass * ui;
	QWebEngineView baiduMap;
	QObject * m_bridge;


private slots:
	void getFromHtmlLocation(QString lon, QString lat);
	void getFromHtmlMouseMove(QString lon, QString lat);
	void on_baiduMapStreetButton_clicked();
	void on_baiduMapSetelliteButton_clicked();
	void on_baiduMapClearButton_clicked();

};

