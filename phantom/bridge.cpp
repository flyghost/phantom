#include "bridge.h"
#include "ui_phantom.h"

#include <QMessageBox>

bridge* bridge::instance()
{
	static bridge s_obj;
	return &s_obj;
}

bridge::bridge()
{
}

void bridge::htmlToCpp(QString mesg)
{
	//QMessageBox::aboutQt(0, tr("Qt"));
	emit htmlToCppEmit(mesg);
}

void bridge::cppToHtml(QString mesg)
{
	emit cppToHtmlEmit(mesg);

}

void bridge::htmlToCppLocation(QString lon,QString lat)
{
	emit htmlToCppLocationEmit(lon, lat);
}
void bridge::mouseMove(QString lon, QString lat)
{
	emit mouseMoveEmit(lon,lat);
}
