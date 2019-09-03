#include "BaiduMap.h"

#include <QDir>
#include <QWebChannel>
#include "bridge.h"

BaiduMap::BaiduMap(Ui::PhantomClass *m_ui)
{
	ui = m_ui;

	webChannelInit();

	allConnectInit();
}


BaiduMap::~BaiduMap()
{
}

void BaiduMap::webChannelInit()
{
	QWebChannel *channel = new QWebChannel(this);

	m_bridge = (QObject*)bridge::instance();

	channel->registerObject("bridge", m_bridge);
	ui->baiduMapWebEngineView->page()->setWebChannel(channel);
	ui->baiduMapWebEngineView->page()->load(QUrl(QString("file:///%1/%2").arg(QApplication::applicationDirPath()).arg("map.html")));
	ui->baiduMapWebEngineView->show();
}

//信号槽绑定
void BaiduMap::allConnectInit()
{
	//从bridge接收到鼠标移动信号，触发C++中的槽函数
	connect(m_bridge, SIGNAL(mouseMoveEmit(QString, QString)), this, SLOT(getFromHtmlMouseMove(QString, QString)));
	//从bridge接收到设置经纬坐标信号，触发C++中的槽函数
	connect(m_bridge, SIGNAL(htmlToCppLocationEmit(QString, QString)), this, SLOT(getFromHtmlLocation(QString,QString)));

	//也可以直接将按钮信号与JS中的函数连接
	//connect(ui->baiduMapStreetButton, &QPushButton::clicked, [this]() {
	//	ui->baiduMapWebEngineView->page()->runJavaScript("clearOverlaysPC()");
	//});
	//按钮的信号槽绑定
	connect(ui->baiduMapSetelliteButton, &QPushButton::clicked, this, &BaiduMap::on_baiduMapSetelliteButton_clicked);
	connect(ui->baiduMapStreetButton, &QPushButton::clicked, this, &BaiduMap::on_baiduMapStreetButton_clicked);
	connect(ui->baiduMapClearButton, &QPushButton::clicked, this, &BaiduMap::on_baiduMapClearButton_clicked);
}

//设置的经纬
void BaiduMap::getFromHtmlLocation(QString lon, QString lat)
{
	ui->baiduMapLocateBrowser->append(lon + ", " + lat);
}
//鼠标经纬
void BaiduMap::getFromHtmlMouseMove(QString lon, QString lat)
{
	ui->baiduMapLonLatLabel->setText(QString::fromLocal8Bit("鼠标经度：") + lon + QString::fromLocal8Bit(" 鼠标纬度：") + lat);
}

//设置为街道图
void BaiduMap::on_baiduMapStreetButton_clicked()
{
	ui->baiduMapWebEngineView->page()->runJavaScript("setStreetMapMode()");
}

//设置为卫星图
void BaiduMap::on_baiduMapSetelliteButton_clicked()
{
	ui->baiduMapWebEngineView->page()->runJavaScript("setSatelliteMapMode()");
}

//清除所有标记
void BaiduMap::on_baiduMapClearButton_clicked()
{
	ui->baiduMapWebEngineView->page()->runJavaScript("clearOverlaysPC()");//调用js清除标记
	ui->baiduMapLocateBrowser->clear();//清除text browser
}


