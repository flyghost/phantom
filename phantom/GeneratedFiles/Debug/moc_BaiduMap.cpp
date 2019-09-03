/****************************************************************************
** Meta object code from reading C++ file 'BaiduMap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BaiduMap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BaiduMap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaiduMap_t {
    QByteArrayData data[11];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaiduMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaiduMap_t qt_meta_stringdata_BaiduMap = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BaiduMap"
QT_MOC_LITERAL(1, 9, 15), // "mapToBridgeEmit"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "mesg"
QT_MOC_LITERAL(4, 31, 19), // "getFromHtmlLocation"
QT_MOC_LITERAL(5, 51, 3), // "lon"
QT_MOC_LITERAL(6, 55, 3), // "lat"
QT_MOC_LITERAL(7, 59, 20), // "getFromHtmlMouseMove"
QT_MOC_LITERAL(8, 80, 31), // "on_baiduMapStreetButton_clicked"
QT_MOC_LITERAL(9, 112, 34), // "on_baiduMapSetelliteButton_cl..."
QT_MOC_LITERAL(10, 147, 30) // "on_baiduMapClearButton_clicked"

    },
    "BaiduMap\0mapToBridgeEmit\0\0mesg\0"
    "getFromHtmlLocation\0lon\0lat\0"
    "getFromHtmlMouseMove\0"
    "on_baiduMapStreetButton_clicked\0"
    "on_baiduMapSetelliteButton_clicked\0"
    "on_baiduMapClearButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaiduMap[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   47,    2, 0x08 /* Private */,
       7,    2,   52,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BaiduMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaiduMap *_t = static_cast<BaiduMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapToBridgeEmit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->getFromHtmlLocation((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->getFromHtmlMouseMove((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->on_baiduMapStreetButton_clicked(); break;
        case 4: _t->on_baiduMapSetelliteButton_clicked(); break;
        case 5: _t->on_baiduMapClearButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BaiduMap::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaiduMap::mapToBridgeEmit)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BaiduMap::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BaiduMap.data,
      qt_meta_data_BaiduMap,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BaiduMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaiduMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaiduMap.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BaiduMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void BaiduMap::mapToBridgeEmit(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
