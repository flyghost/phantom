/****************************************************************************
** Meta object code from reading C++ file 'Wave.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Wave.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Wave.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Wave_t {
    QByteArrayData data[21];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Wave_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Wave_t qt_meta_stringdata_Wave = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Wave"
QT_MOC_LITERAL(1, 5, 37), // "on_waveTcpClientConnectButton..."
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 21), // "readMessageFromServer"
QT_MOC_LITERAL(4, 66, 12), // "connectError"
QT_MOC_LITERAL(5, 79, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(6, 108, 19), // "onMouseUsageChanged"
QT_MOC_LITERAL(7, 128, 10), // "mouseUsage"
QT_MOC_LITERAL(8, 139, 6), // "onSave"
QT_MOC_LITERAL(9, 146, 21), // "onUpdatePeriodChanged"
QT_MOC_LITERAL(10, 168, 19), // "onMouseMovePlotArea"
QT_MOC_LITERAL(11, 188, 12), // "QMouseEvent*"
QT_MOC_LITERAL(12, 201, 5), // "event"
QT_MOC_LITERAL(13, 207, 11), // "onDataTimer"
QT_MOC_LITERAL(14, 219, 5), // "dataA"
QT_MOC_LITERAL(15, 225, 5), // "dataB"
QT_MOC_LITERAL(16, 231, 5), // "dataC"
QT_MOC_LITERAL(17, 237, 18), // "onChartUpdateTimer"
QT_MOC_LITERAL(18, 256, 17), // "onViewPortChanged"
QT_MOC_LITERAL(19, 274, 19), // "onHScrollBarChanged"
QT_MOC_LITERAL(20, 294, 5) // "value"

    },
    "Wave\0on_waveTcpClientConnectButton_clicked\0"
    "\0readMessageFromServer\0connectError\0"
    "QAbstractSocket::SocketError\0"
    "onMouseUsageChanged\0mouseUsage\0onSave\0"
    "onUpdatePeriodChanged\0onMouseMovePlotArea\0"
    "QMouseEvent*\0event\0onDataTimer\0dataA\0"
    "dataB\0dataC\0onChartUpdateTimer\0"
    "onViewPortChanged\0onHScrollBarChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Wave[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    1,   71,    2, 0x08 /* Private */,
       6,    1,   74,    2, 0x08 /* Private */,
       8,    1,   77,    2, 0x08 /* Private */,
       9,    1,   80,    2, 0x08 /* Private */,
      10,    1,   83,    2, 0x08 /* Private */,
      13,    3,   86,    2, 0x08 /* Private */,
      17,    0,   93,    2, 0x08 /* Private */,
      18,    0,   94,    2, 0x08 /* Private */,
      19,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void Wave::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Wave *_t = static_cast<Wave *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_waveTcpClientConnectButton_clicked(); break;
        case 1: _t->readMessageFromServer(); break;
        case 2: _t->connectError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->onMouseUsageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onSave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onUpdatePeriodChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onMouseMovePlotArea((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->onDataTimer((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->onChartUpdateTimer(); break;
        case 9: _t->onViewPortChanged(); break;
        case 10: _t->onHScrollBarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Wave::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Wave.data,
      qt_meta_data_Wave,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Wave::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Wave::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Wave.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Wave::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
