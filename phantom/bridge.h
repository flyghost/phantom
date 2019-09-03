#pragma once

#include <QObject>

class bridge : QObject
{
	Q_OBJECT
public:
	static bridge* instance();
	void cppToHtml(QString mesg);

public slots:
	
	void htmlToCpp(QString mesg);
	void htmlToCppLocation(QString lon, QString lat);
	void mouseMove(QString lon, QString lat);


signals:
	void cppToHtmlEmit(QString mesg);
	void htmlToCppEmit(QString mesg);
	void htmlToCppLocationEmit(QString lon, QString lat);
	void mouseMoveEmit(QString lon, QString lat);

private:
	bridge();
};

