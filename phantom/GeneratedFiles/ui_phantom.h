/********************************************************************************
** Form generated from reading UI file 'phantom.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHANTOM_H
#define UI_PHANTOM_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhantomClass
{
public:
    QWidget *centralWidget;
    QTabWidget *phantomTabWidget;
    QWidget *tabTCP;
    QTextBrowser *tcpClientReceiveBrowser;
    QTextEdit *tcpClientSendEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *tcpClientSendButton;
    QPushButton *tcpClearSendButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *tcpClientHostLineEdit;
    QLabel *label;
    QLineEdit *tcpClientPortLineEdit;
    QPushButton *tcpClientConnectButton;
    QPushButton *tcpClientClearReceiveButton;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *tcpHostLineEdit_2;
    QLabel *label_6;
    QLineEdit *tcpPortLineEdit_2;
    QPushButton *tcpConnectButton_2;
    QTextBrowser *tcpReceiveBrowser_2;
    QTextEdit *tcpSendEdit_2;
    QPushButton *tcpClearReceiveButton_2;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    QPushButton *tcpSendButton_2;
    QPushButton *tcpClearSendButton_2;
    QWidget *tabUDP;
    QTextBrowser *udpReceiveBrowser;
    QPushButton *udpClearReceiveButton;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_20;
    QLineEdit *udpHostLineEdit;
    QLabel *label_21;
    QLineEdit *udpPortLineEdit;
    QPushButton *udpConnectButton;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QPushButton *udpSendButton;
    QPushButton *udpClearSendButton;
    QTextEdit *udpSendEdit;
    QWidget *tabSerial;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *serialSaveButton;
    QPushButton *serialClearReceiveButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QCheckBox *serialTimeAdd;
    QCheckBox *serialLineChange;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *serialSendButton;
    QPushButton *serialClearSendButton;
    QTextEdit *serialSendEdit;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QComboBox *serialComSelectBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QComboBox *serialStopBitBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QComboBox *serialBondBox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_15;
    QComboBox *serialDateBitBox;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_16;
    QComboBox *serialOddEvenBox;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_17;
    QPushButton *serialOpenButton;
    QTextBrowser *serialReceiveBrowser;
    QWidget *tabWave;
    QWidget *waveWidget;
    QTextBrowser *waveTcpClientReceiveBrowser;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *waveTcpClientHostLineEdit;
    QLabel *label_8;
    QLineEdit *waveTcpClientPortLineEdit;
    QPushButton *waveTcpClientConnectButton;
    QWidget *heightWaveWidget;
    QWidget *tabMap;
    QLabel *baiduMapLonLatLabel;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *baiduMapSetelliteButton;
    QPushButton *baiduMapStreetButton;
    QPushButton *baiduMapClearButton;
    QTextBrowser *baiduMapLocateBrowser;
    QWebEngineView *baiduMapWebEngineView;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *videoTcpClientHostLineEdit;
    QLabel *label_5;
    QLineEdit *videoTcpClientPortLineEdit;
    QPushButton *videoTcpClientConnectButton;
    QTextBrowser *videoTcpClientReceiveBrowser;
    QLabel *VideoTcpClientLabel;
    QWidget *tab4;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PhantomClass)
    {
        if (PhantomClass->objectName().isEmpty())
            PhantomClass->setObjectName(QStringLiteral("PhantomClass"));
        PhantomClass->resize(1421, 889);
        centralWidget = new QWidget(PhantomClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        phantomTabWidget = new QTabWidget(centralWidget);
        phantomTabWidget->setObjectName(QStringLiteral("phantomTabWidget"));
        phantomTabWidget->setGeometry(QRect(20, 20, 1391, 801));
        tabTCP = new QWidget();
        tabTCP->setObjectName(QStringLiteral("tabTCP"));
        tcpClientReceiveBrowser = new QTextBrowser(tabTCP);
        tcpClientReceiveBrowser->setObjectName(QStringLiteral("tcpClientReceiveBrowser"));
        tcpClientReceiveBrowser->setGeometry(QRect(40, 140, 351, 261));
        tcpClientSendEdit = new QTextEdit(tabTCP);
        tcpClientSendEdit->setObjectName(QStringLiteral("tcpClientSendEdit"));
        tcpClientSendEdit->setGeometry(QRect(40, 460, 351, 161));
        verticalLayoutWidget_2 = new QWidget(tabTCP);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(300, 630, 77, 80));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tcpClientSendButton = new QPushButton(verticalLayoutWidget_2);
        tcpClientSendButton->setObjectName(QStringLiteral("tcpClientSendButton"));

        verticalLayout_4->addWidget(tcpClientSendButton);

        tcpClearSendButton = new QPushButton(verticalLayoutWidget_2);
        tcpClearSendButton->setObjectName(QStringLiteral("tcpClearSendButton"));

        verticalLayout_4->addWidget(tcpClearSendButton);

        horizontalLayoutWidget = new QWidget(tabTCP);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 30, 351, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        tcpClientHostLineEdit = new QLineEdit(horizontalLayoutWidget);
        tcpClientHostLineEdit->setObjectName(QStringLiteral("tcpClientHostLineEdit"));

        horizontalLayout->addWidget(tcpClientHostLineEdit);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        tcpClientPortLineEdit = new QLineEdit(horizontalLayoutWidget);
        tcpClientPortLineEdit->setObjectName(QStringLiteral("tcpClientPortLineEdit"));

        horizontalLayout->addWidget(tcpClientPortLineEdit);

        tcpClientConnectButton = new QPushButton(horizontalLayoutWidget);
        tcpClientConnectButton->setObjectName(QStringLiteral("tcpClientConnectButton"));

        horizontalLayout->addWidget(tcpClientConnectButton);

        tcpClientClearReceiveButton = new QPushButton(tabTCP);
        tcpClientClearReceiveButton->setObjectName(QStringLiteral("tcpClientClearReceiveButton"));
        tcpClientClearReceiveButton->setGeometry(QRect(320, 420, 75, 23));
        horizontalLayoutWidget_5 = new QWidget(tabTCP);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(720, 30, 351, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        tcpHostLineEdit_2 = new QLineEdit(horizontalLayoutWidget_5);
        tcpHostLineEdit_2->setObjectName(QStringLiteral("tcpHostLineEdit_2"));

        horizontalLayout_3->addWidget(tcpHostLineEdit_2);

        label_6 = new QLabel(horizontalLayoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        tcpPortLineEdit_2 = new QLineEdit(horizontalLayoutWidget_5);
        tcpPortLineEdit_2->setObjectName(QStringLiteral("tcpPortLineEdit_2"));

        horizontalLayout_3->addWidget(tcpPortLineEdit_2);

        tcpConnectButton_2 = new QPushButton(horizontalLayoutWidget_5);
        tcpConnectButton_2->setObjectName(QStringLiteral("tcpConnectButton_2"));

        horizontalLayout_3->addWidget(tcpConnectButton_2);

        tcpReceiveBrowser_2 = new QTextBrowser(tabTCP);
        tcpReceiveBrowser_2->setObjectName(QStringLiteral("tcpReceiveBrowser_2"));
        tcpReceiveBrowser_2->setGeometry(QRect(720, 140, 351, 261));
        tcpSendEdit_2 = new QTextEdit(tabTCP);
        tcpSendEdit_2->setObjectName(QStringLiteral("tcpSendEdit_2"));
        tcpSendEdit_2->setGeometry(QRect(720, 460, 351, 161));
        tcpClearReceiveButton_2 = new QPushButton(tabTCP);
        tcpClearReceiveButton_2->setObjectName(QStringLiteral("tcpClearReceiveButton_2"));
        tcpClearReceiveButton_2->setGeometry(QRect(1000, 420, 75, 23));
        verticalLayoutWidget_6 = new QWidget(tabTCP);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(980, 630, 77, 80));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        tcpSendButton_2 = new QPushButton(verticalLayoutWidget_6);
        tcpSendButton_2->setObjectName(QStringLiteral("tcpSendButton_2"));

        verticalLayout_7->addWidget(tcpSendButton_2);

        tcpClearSendButton_2 = new QPushButton(verticalLayoutWidget_6);
        tcpClearSendButton_2->setObjectName(QStringLiteral("tcpClearSendButton_2"));

        verticalLayout_7->addWidget(tcpClearSendButton_2);

        phantomTabWidget->addTab(tabTCP, QString());
        tabUDP = new QWidget();
        tabUDP->setObjectName(QStringLiteral("tabUDP"));
        udpReceiveBrowser = new QTextBrowser(tabUDP);
        udpReceiveBrowser->setObjectName(QStringLiteral("udpReceiveBrowser"));
        udpReceiveBrowser->setGeometry(QRect(50, 140, 821, 261));
        udpClearReceiveButton = new QPushButton(tabUDP);
        udpClearReceiveButton->setObjectName(QStringLiteral("udpClearReceiveButton"));
        udpClearReceiveButton->setGeometry(QRect(990, 310, 75, 23));
        horizontalLayoutWidget_4 = new QWidget(tabUDP);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(50, 30, 351, 61));
        horizontalLayout_18 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(horizontalLayoutWidget_4);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_18->addWidget(label_20);

        udpHostLineEdit = new QLineEdit(horizontalLayoutWidget_4);
        udpHostLineEdit->setObjectName(QStringLiteral("udpHostLineEdit"));

        horizontalLayout_18->addWidget(udpHostLineEdit);

        label_21 = new QLabel(horizontalLayoutWidget_4);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_18->addWidget(label_21);

        udpPortLineEdit = new QLineEdit(horizontalLayoutWidget_4);
        udpPortLineEdit->setObjectName(QStringLiteral("udpPortLineEdit"));

        horizontalLayout_18->addWidget(udpPortLineEdit);

        udpConnectButton = new QPushButton(horizontalLayoutWidget_4);
        udpConnectButton->setObjectName(QStringLiteral("udpConnectButton"));

        horizontalLayout_18->addWidget(udpConnectButton);

        verticalLayoutWidget_5 = new QWidget(tabUDP);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(990, 480, 77, 80));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        udpSendButton = new QPushButton(verticalLayoutWidget_5);
        udpSendButton->setObjectName(QStringLiteral("udpSendButton"));

        verticalLayout_8->addWidget(udpSendButton);

        udpClearSendButton = new QPushButton(verticalLayoutWidget_5);
        udpClearSendButton->setObjectName(QStringLiteral("udpClearSendButton"));

        verticalLayout_8->addWidget(udpClearSendButton);

        udpSendEdit = new QTextEdit(tabUDP);
        udpSendEdit->setObjectName(QStringLiteral("udpSendEdit"));
        udpSendEdit->setGeometry(QRect(50, 460, 821, 161));
        phantomTabWidget->addTab(tabUDP, QString());
        tabSerial = new QWidget();
        tabSerial->setObjectName(QStringLiteral("tabSerial"));
        horizontalLayoutWidget_3 = new QWidget(tabSerial);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(689, 370, 158, 31));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        serialSaveButton = new QPushButton(horizontalLayoutWidget_3);
        serialSaveButton->setObjectName(QStringLiteral("serialSaveButton"));

        horizontalLayout_10->addWidget(serialSaveButton);

        serialClearReceiveButton = new QPushButton(horizontalLayoutWidget_3);
        serialClearReceiveButton->setObjectName(QStringLiteral("serialClearReceiveButton"));

        horizontalLayout_10->addWidget(serialClearReceiveButton);

        gridLayoutWidget = new QWidget(tabSerial);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(690, 410, 101, 61));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        serialTimeAdd = new QCheckBox(gridLayoutWidget);
        serialTimeAdd->setObjectName(QStringLiteral("serialTimeAdd"));

        gridLayout_2->addWidget(serialTimeAdd, 0, 0, 1, 1);

        serialLineChange = new QCheckBox(gridLayoutWidget);
        serialLineChange->setObjectName(QStringLiteral("serialLineChange"));

        gridLayout_2->addWidget(serialLineChange, 1, 0, 1, 1);

        verticalLayoutWidget_3 = new QWidget(tabSerial);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(670, 500, 160, 54));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        serialSendButton = new QPushButton(verticalLayoutWidget_3);
        serialSendButton->setObjectName(QStringLiteral("serialSendButton"));

        verticalLayout_5->addWidget(serialSendButton);

        serialClearSendButton = new QPushButton(verticalLayoutWidget_3);
        serialClearSendButton->setObjectName(QStringLiteral("serialClearSendButton"));

        verticalLayout_5->addWidget(serialClearSendButton);

        serialSendEdit = new QTextEdit(tabSerial);
        serialSendEdit->setObjectName(QStringLiteral("serialSendEdit"));
        serialSendEdit->setGeometry(QRect(30, 500, 631, 71));
        verticalLayoutWidget_4 = new QWidget(tabSerial);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(690, 30, 151, 311));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_12 = new QLabel(verticalLayoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_11->addWidget(label_12);

        serialComSelectBox = new QComboBox(verticalLayoutWidget_4);
        serialComSelectBox->setObjectName(QStringLiteral("serialComSelectBox"));

        horizontalLayout_11->addWidget(serialComSelectBox);


        verticalLayout_6->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_13 = new QLabel(verticalLayoutWidget_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_12->addWidget(label_13);

        serialStopBitBox = new QComboBox(verticalLayoutWidget_4);
        serialStopBitBox->addItem(QString());
        serialStopBitBox->addItem(QString());
        serialStopBitBox->addItem(QString());
        serialStopBitBox->setObjectName(QStringLiteral("serialStopBitBox"));
        serialStopBitBox->setEditable(false);

        horizontalLayout_12->addWidget(serialStopBitBox);


        verticalLayout_6->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_14 = new QLabel(verticalLayoutWidget_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_13->addWidget(label_14);

        serialBondBox = new QComboBox(verticalLayoutWidget_4);
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->addItem(QString());
        serialBondBox->setObjectName(QStringLiteral("serialBondBox"));

        horizontalLayout_13->addWidget(serialBondBox);


        verticalLayout_6->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_15 = new QLabel(verticalLayoutWidget_4);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_14->addWidget(label_15);

        serialDateBitBox = new QComboBox(verticalLayoutWidget_4);
        serialDateBitBox->addItem(QString());
        serialDateBitBox->addItem(QString());
        serialDateBitBox->addItem(QString());
        serialDateBitBox->addItem(QString());
        serialDateBitBox->setObjectName(QStringLiteral("serialDateBitBox"));

        horizontalLayout_14->addWidget(serialDateBitBox);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_16 = new QLabel(verticalLayoutWidget_4);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_15->addWidget(label_16);

        serialOddEvenBox = new QComboBox(verticalLayoutWidget_4);
        serialOddEvenBox->addItem(QString());
        serialOddEvenBox->addItem(QString());
        serialOddEvenBox->addItem(QString());
        serialOddEvenBox->setObjectName(QStringLiteral("serialOddEvenBox"));

        horizontalLayout_15->addWidget(serialOddEvenBox);


        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_17 = new QLabel(verticalLayoutWidget_4);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_16->addWidget(label_17);

        serialOpenButton = new QPushButton(verticalLayoutWidget_4);
        serialOpenButton->setObjectName(QStringLiteral("serialOpenButton"));

        horizontalLayout_16->addWidget(serialOpenButton);


        verticalLayout_6->addLayout(horizontalLayout_16);

        serialReceiveBrowser = new QTextBrowser(tabSerial);
        serialReceiveBrowser->setObjectName(QStringLiteral("serialReceiveBrowser"));
        serialReceiveBrowser->setGeometry(QRect(30, 30, 641, 451));
        phantomTabWidget->addTab(tabSerial, QString());
        tabWave = new QWidget();
        tabWave->setObjectName(QStringLiteral("tabWave"));
        waveWidget = new QWidget(tabWave);
        waveWidget->setObjectName(QStringLiteral("waveWidget"));
        waveWidget->setGeometry(QRect(10, 10, 781, 391));
        waveTcpClientReceiveBrowser = new QTextBrowser(tabWave);
        waveTcpClientReceiveBrowser->setObjectName(QStringLiteral("waveTcpClientReceiveBrowser"));
        waveTcpClientReceiveBrowser->setGeometry(QRect(840, 70, 521, 401));
        horizontalLayoutWidget_7 = new QWidget(tabWave);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(890, 20, 351, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_7);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        waveTcpClientHostLineEdit = new QLineEdit(horizontalLayoutWidget_7);
        waveTcpClientHostLineEdit->setObjectName(QStringLiteral("waveTcpClientHostLineEdit"));

        horizontalLayout_5->addWidget(waveTcpClientHostLineEdit);

        label_8 = new QLabel(horizontalLayoutWidget_7);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        waveTcpClientPortLineEdit = new QLineEdit(horizontalLayoutWidget_7);
        waveTcpClientPortLineEdit->setObjectName(QStringLiteral("waveTcpClientPortLineEdit"));

        horizontalLayout_5->addWidget(waveTcpClientPortLineEdit);

        waveTcpClientConnectButton = new QPushButton(horizontalLayoutWidget_7);
        waveTcpClientConnectButton->setObjectName(QStringLiteral("waveTcpClientConnectButton"));

        horizontalLayout_5->addWidget(waveTcpClientConnectButton);

        heightWaveWidget = new QWidget(tabWave);
        heightWaveWidget->setObjectName(QStringLiteral("heightWaveWidget"));
        heightWaveWidget->setGeometry(QRect(10, 420, 781, 341));
        phantomTabWidget->addTab(tabWave, QString());
        tabMap = new QWidget();
        tabMap->setObjectName(QStringLiteral("tabMap"));
        baiduMapLonLatLabel = new QLabel(tabMap);
        baiduMapLonLatLabel->setObjectName(QStringLiteral("baiduMapLonLatLabel"));
        baiduMapLonLatLabel->setGeometry(QRect(1050, 20, 281, 41));
        horizontalLayoutWidget_2 = new QWidget(tabMap);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(1050, 80, 281, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        baiduMapSetelliteButton = new QPushButton(horizontalLayoutWidget_2);
        baiduMapSetelliteButton->setObjectName(QStringLiteral("baiduMapSetelliteButton"));

        horizontalLayout_2->addWidget(baiduMapSetelliteButton);

        baiduMapStreetButton = new QPushButton(horizontalLayoutWidget_2);
        baiduMapStreetButton->setObjectName(QStringLiteral("baiduMapStreetButton"));

        horizontalLayout_2->addWidget(baiduMapStreetButton);

        baiduMapClearButton = new QPushButton(horizontalLayoutWidget_2);
        baiduMapClearButton->setObjectName(QStringLiteral("baiduMapClearButton"));

        horizontalLayout_2->addWidget(baiduMapClearButton);

        baiduMapLocateBrowser = new QTextBrowser(tabMap);
        baiduMapLocateBrowser->setObjectName(QStringLiteral("baiduMapLocateBrowser"));
        baiduMapLocateBrowser->setGeometry(QRect(670, 20, 361, 41));
        baiduMapWebEngineView = new QWebEngineView(tabMap);
        baiduMapWebEngineView->setObjectName(QStringLiteral("baiduMapWebEngineView"));
        baiduMapWebEngineView->setGeometry(QRect(10, 10, 641, 751));
        baiduMapWebEngineView->setUrl(QUrl(QStringLiteral("about:blank")));
        horizontalLayoutWidget_6 = new QWidget(tabMap);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(680, 730, 351, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_6);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        videoTcpClientHostLineEdit = new QLineEdit(horizontalLayoutWidget_6);
        videoTcpClientHostLineEdit->setObjectName(QStringLiteral("videoTcpClientHostLineEdit"));

        horizontalLayout_4->addWidget(videoTcpClientHostLineEdit);

        label_5 = new QLabel(horizontalLayoutWidget_6);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        videoTcpClientPortLineEdit = new QLineEdit(horizontalLayoutWidget_6);
        videoTcpClientPortLineEdit->setObjectName(QStringLiteral("videoTcpClientPortLineEdit"));

        horizontalLayout_4->addWidget(videoTcpClientPortLineEdit);

        videoTcpClientConnectButton = new QPushButton(horizontalLayoutWidget_6);
        videoTcpClientConnectButton->setObjectName(QStringLiteral("videoTcpClientConnectButton"));

        horizontalLayout_4->addWidget(videoTcpClientConnectButton);

        videoTcpClientReceiveBrowser = new QTextBrowser(tabMap);
        videoTcpClientReceiveBrowser->setObjectName(QStringLiteral("videoTcpClientReceiveBrowser"));
        videoTcpClientReceiveBrowser->setGeometry(QRect(1090, 740, 231, 31));
        VideoTcpClientLabel = new QLabel(tabMap);
        VideoTcpClientLabel->setObjectName(QStringLiteral("VideoTcpClientLabel"));
        VideoTcpClientLabel->setGeometry(QRect(670, 120, 661, 601));
        phantomTabWidget->addTab(tabMap, QString());
        tab4 = new QWidget();
        tab4->setObjectName(QStringLiteral("tab4"));
        textBrowser = new QTextBrowser(tab4);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 90, 401, 121));
        textBrowser_2 = new QTextBrowser(tab4);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(40, 230, 461, 131));
        textBrowser_3 = new QTextBrowser(tab4);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(40, 390, 461, 61));
        phantomTabWidget->addTab(tab4, QString());
        PhantomClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PhantomClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1421, 23));
        PhantomClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PhantomClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PhantomClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PhantomClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PhantomClass->setStatusBar(statusBar);

        retranslateUi(PhantomClass);

        phantomTabWidget->setCurrentIndex(3);
        serialStopBitBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PhantomClass);
    } // setupUi

    void retranslateUi(QMainWindow *PhantomClass)
    {
        PhantomClass->setWindowTitle(QApplication::translate("PhantomClass", "Phantom", nullptr));
        tcpClientSendButton->setText(QApplication::translate("PhantomClass", "\345\217\221\351\200\201", nullptr));
        tcpClearSendButton->setText(QApplication::translate("PhantomClass", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        label_2->setText(QApplication::translate("PhantomClass", "IP:", nullptr));
        tcpClientHostLineEdit->setText(QApplication::translate("PhantomClass", "127.0.0.1", nullptr));
        label->setText(QApplication::translate("PhantomClass", "PORT:", nullptr));
        tcpClientPortLineEdit->setText(QApplication::translate("PhantomClass", "8080", nullptr));
        tcpClientConnectButton->setText(QApplication::translate("PhantomClass", "\350\277\236\346\216\245", nullptr));
        tcpClientClearReceiveButton->setText(QApplication::translate("PhantomClass", "\346\270\205\351\231\244\346\216\245\346\224\266", nullptr));
        label_3->setText(QApplication::translate("PhantomClass", "IP:", nullptr));
        tcpHostLineEdit_2->setText(QApplication::translate("PhantomClass", "127.0.0.1", nullptr));
        label_6->setText(QApplication::translate("PhantomClass", "PORT:", nullptr));
        tcpPortLineEdit_2->setText(QApplication::translate("PhantomClass", "8080", nullptr));
        tcpConnectButton_2->setText(QApplication::translate("PhantomClass", "\350\277\236\346\216\245", nullptr));
        tcpClearReceiveButton_2->setText(QApplication::translate("PhantomClass", "\346\270\205\351\231\244\346\216\245\346\224\266", nullptr));
        tcpSendButton_2->setText(QApplication::translate("PhantomClass", "\345\217\221\351\200\201", nullptr));
        tcpClearSendButton_2->setText(QApplication::translate("PhantomClass", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        phantomTabWidget->setTabText(phantomTabWidget->indexOf(tabTCP), QApplication::translate("PhantomClass", "TCP\346\224\266\345\217\221", nullptr));
        udpClearReceiveButton->setText(QApplication::translate("PhantomClass", "\346\270\205\351\231\244\346\216\245\346\224\266", nullptr));
        label_20->setText(QApplication::translate("PhantomClass", "IP:", nullptr));
        udpHostLineEdit->setText(QApplication::translate("PhantomClass", "127.0.0.1", nullptr));
        label_21->setText(QApplication::translate("PhantomClass", "PORT:", nullptr));
        udpPortLineEdit->setText(QApplication::translate("PhantomClass", "8080", nullptr));
        udpConnectButton->setText(QApplication::translate("PhantomClass", "\350\277\236\346\216\245", nullptr));
        udpSendButton->setText(QApplication::translate("PhantomClass", "\345\217\221\351\200\201", nullptr));
        udpClearSendButton->setText(QApplication::translate("PhantomClass", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        phantomTabWidget->setTabText(phantomTabWidget->indexOf(tabUDP), QApplication::translate("PhantomClass", "UDP\346\224\266\345\217\221", nullptr));
        serialSaveButton->setText(QApplication::translate("PhantomClass", "\344\277\235\345\255\230\347\252\227\345\217\243", nullptr));
        serialClearReceiveButton->setText(QApplication::translate("PhantomClass", "\346\270\205\351\231\244\346\216\245\346\224\266", nullptr));
        serialTimeAdd->setText(QApplication::translate("PhantomClass", "\346\227\266\351\227\264\346\210\263", nullptr));
        serialLineChange->setText(QApplication::translate("PhantomClass", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        serialSendButton->setText(QApplication::translate("PhantomClass", "\345\217\221\351\200\201", nullptr));
        serialClearSendButton->setText(QApplication::translate("PhantomClass", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        label_12->setText(QApplication::translate("PhantomClass", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        label_13->setText(QApplication::translate("PhantomClass", "\345\201\234\346\255\242\344\275\215", nullptr));
        serialStopBitBox->setItemText(0, QApplication::translate("PhantomClass", "1", nullptr));
        serialStopBitBox->setItemText(1, QApplication::translate("PhantomClass", "1.5", nullptr));
        serialStopBitBox->setItemText(2, QApplication::translate("PhantomClass", "2", nullptr));

        label_14->setText(QApplication::translate("PhantomClass", "\346\263\242\347\211\271\347\216\207", nullptr));
        serialBondBox->setItemText(0, QApplication::translate("PhantomClass", "9600", nullptr));
        serialBondBox->setItemText(1, QApplication::translate("PhantomClass", "14400", nullptr));
        serialBondBox->setItemText(2, QApplication::translate("PhantomClass", "19200", nullptr));
        serialBondBox->setItemText(3, QApplication::translate("PhantomClass", "38400", nullptr));
        serialBondBox->setItemText(4, QApplication::translate("PhantomClass", "43000", nullptr));
        serialBondBox->setItemText(5, QApplication::translate("PhantomClass", "57600", nullptr));
        serialBondBox->setItemText(6, QApplication::translate("PhantomClass", "76800", nullptr));
        serialBondBox->setItemText(7, QApplication::translate("PhantomClass", "115200", nullptr));
        serialBondBox->setItemText(8, QApplication::translate("PhantomClass", "128000", nullptr));
        serialBondBox->setItemText(9, QApplication::translate("PhantomClass", "230400", nullptr));
        serialBondBox->setItemText(10, QApplication::translate("PhantomClass", "256000", nullptr));
        serialBondBox->setItemText(11, QApplication::translate("PhantomClass", "460800", nullptr));
        serialBondBox->setItemText(12, QApplication::translate("PhantomClass", "500000", nullptr));
        serialBondBox->setItemText(13, QApplication::translate("PhantomClass", "921600", nullptr));
        serialBondBox->setItemText(14, QApplication::translate("PhantomClass", "1382400", nullptr));

        label_15->setText(QApplication::translate("PhantomClass", "\346\225\260\346\215\256\344\275\215", nullptr));
        serialDateBitBox->setItemText(0, QApplication::translate("PhantomClass", "8", nullptr));
        serialDateBitBox->setItemText(1, QApplication::translate("PhantomClass", "7", nullptr));
        serialDateBitBox->setItemText(2, QApplication::translate("PhantomClass", "6", nullptr));
        serialDateBitBox->setItemText(3, QApplication::translate("PhantomClass", "5", nullptr));

        label_16->setText(QApplication::translate("PhantomClass", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        serialOddEvenBox->setItemText(0, QApplication::translate("PhantomClass", "\346\227\240", nullptr));
        serialOddEvenBox->setItemText(1, QApplication::translate("PhantomClass", "\345\245\207\346\240\241\351\252\214", nullptr));
        serialOddEvenBox->setItemText(2, QApplication::translate("PhantomClass", "\345\201\266\346\240\241\351\252\214", nullptr));

        label_17->setText(QApplication::translate("PhantomClass", "\344\270\262\345\217\243\346\223\215\344\275\234", nullptr));
        serialOpenButton->setText(QApplication::translate("PhantomClass", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        phantomTabWidget->setTabText(phantomTabWidget->indexOf(tabSerial), QApplication::translate("PhantomClass", "\344\270\262\345\217\243\346\224\266\345\217\221", nullptr));
        label_7->setText(QApplication::translate("PhantomClass", "IP:", nullptr));
        waveTcpClientHostLineEdit->setText(QApplication::translate("PhantomClass", "47.106.72.78", nullptr));
        label_8->setText(QApplication::translate("PhantomClass", "PORT:", nullptr));
        waveTcpClientPortLineEdit->setText(QApplication::translate("PhantomClass", "8080", nullptr));
        waveTcpClientConnectButton->setText(QApplication::translate("PhantomClass", "\350\277\236\346\216\245", nullptr));
        phantomTabWidget->setTabText(phantomTabWidget->indexOf(tabWave), QApplication::translate("PhantomClass", "\346\225\260\346\215\256\350\247\202\346\265\213", nullptr));
        baiduMapLonLatLabel->setText(QApplication::translate("PhantomClass", "\347\273\217\345\272\246\357\274\2320          \347\272\254\345\272\246\357\274\2320", nullptr));
        baiduMapSetelliteButton->setText(QApplication::translate("PhantomClass", "\345\215\253\346\230\237\345\233\276", nullptr));
        baiduMapStreetButton->setText(QApplication::translate("PhantomClass", "\350\241\227\351\201\223\345\233\276", nullptr));
        baiduMapClearButton->setText(QApplication::translate("PhantomClass", "\346\270\205\351\231\244\346\240\207\350\256\260", nullptr));
        label_4->setText(QApplication::translate("PhantomClass", "IP:", nullptr));
        videoTcpClientHostLineEdit->setText(QApplication::translate("PhantomClass", "47.106.72.78", nullptr));
        label_5->setText(QApplication::translate("PhantomClass", "PORT:", nullptr));
        videoTcpClientPortLineEdit->setText(QApplication::translate("PhantomClass", "8080", nullptr));
        videoTcpClientConnectButton->setText(QApplication::translate("PhantomClass", "\350\277\236\346\216\245", nullptr));
        VideoTcpClientLabel->setText(QString());
        phantomTabWidget->setTabText(phantomTabWidget->indexOf(tabMap), QApplication::translate("PhantomClass", "\347\254\254\344\270\200\350\247\206\350\247\222/\344\270\212\345\270\235\350\247\206\350\247\222", nullptr));
        textBrowser->setHtml(QApplication::translate("PhantomClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\270\247\345\244\264\357\274\232      0xAA</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\217\221\351\200\201\350\256\276\345\244\207\357\274\232  0x05</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\233\256\346\240\207\350\256\276\345\244\207\357\274\232  0xAF</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345"
                        "\212\237\350\203\275\345\255\227\357\274\232    0x00----0xFF</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\225\260\346\215\256\351\225\277\345\272\246\357\274\232  LEN</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\225\260\346\215\256\357\274\232      N_byte</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\240\241\351\252\214\345\222\214\357\274\232    SUM\357\274\210\344\273\216\345\270\247\345\244\264\345\210\260\346\234\200\345\220\216\344\270\200\344\270\252\345\255\227\350\212\202\346\211\200\346\234\211\345\255\227\350\212\202\347\232\204\345\222\214\357\274\214\345\217\252\344\277\235\347\225\231\344\275\216\345\205\253\344\275\215\357\274\211</p></body></html>", nullptr));
        textBrowser_2->setHtml(QApplication::translate("PhantomClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\255\227\347\254\246\344\270\262\346\225\260\346\215\256\346\211\223\345\214\205\346\240\274\345\274\217\357\274\210\346\216\245\346\224\266\357\274\211</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; mar"
                        "gin-right:0px; -qt-block-indent:0; text-indent:0px;\">#\350\212\202\347\202\271\344\270\200\345\220\215\347\247\260#\346\225\260\346\215\256\344\270\200#\346\225\260\346\215\256\344\272\214#\346\225\260\346\215\256\344\270\211#\350\212\202\347\202\271\344\272\214\345\220\215\347\247\260#\346\225\260\346\215\256\344\270\200#\346\225\260\346\215\256\344\272\214#\346\225\260\346\215\256\344\270\211#\350\212\202\347\202\271\344\270\211#\346\225\260\346\215\256\344\270\200#\346\225\260\346\215\256\344\272\214#\346\225\260\346\215\256\344\270\211#</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\205\211\347\205\247\345\274\272\345\272\246\350\256\276\347\275\256\357\274\210\345\217\221\351\200\201\357\274\211</p>\n"
"<p style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">#\350\212\202\347\202\271\345\220\215\347\247\260\357\274\2101\343\200\2012\343\200\2013\357\274\211#24\345\260\217\346\227\266\346\225\260\346\215\256#\350\223\235#\347\272\242#\347\231\275#</p></body></html>", nullptr));
        textBrowser_3->setHtml(QApplication::translate("PhantomClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\263\250\346\204\217</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\351\273\230\350\256\244\347\232\204IP\345\222\214PORT\344\270\272\350\277\234\347\250\213\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\214\345\217\252\345\205\201\350\256\270\344\270\244\345\217\260"
                        "\345\256\242\346\210\267\347\253\257\350\277\233\350\241\214\345\220\214\346\227\266\350\256\277\351\227\256\357\274\201\357\274\201\357\274\201</p></body></html>", nullptr));
        phantomTabWidget->setTabText(phantomTabWidget->indexOf(tab4), QApplication::translate("PhantomClass", "\347\250\213\345\272\217\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhantomClass: public Ui_PhantomClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHANTOM_H
