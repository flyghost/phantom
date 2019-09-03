/****************************************************************************
** Meta object code from reading C++ file 'bridge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bridge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bridge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bridge_t {
    QByteArrayData data[12];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bridge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bridge_t qt_meta_stringdata_bridge = {
    {
QT_MOC_LITERAL(0, 0, 6), // "bridge"
QT_MOC_LITERAL(1, 7, 13), // "cppToHtmlEmit"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "mesg"
QT_MOC_LITERAL(4, 27, 13), // "htmlToCppEmit"
QT_MOC_LITERAL(5, 41, 21), // "htmlToCppLocationEmit"
QT_MOC_LITERAL(6, 63, 3), // "lon"
QT_MOC_LITERAL(7, 67, 3), // "lat"
QT_MOC_LITERAL(8, 71, 13), // "mouseMoveEmit"
QT_MOC_LITERAL(9, 85, 9), // "htmlToCpp"
QT_MOC_LITERAL(10, 95, 17), // "htmlToCppLocation"
QT_MOC_LITERAL(11, 113, 9) // "mouseMove"

    },
    "bridge\0cppToHtmlEmit\0\0mesg\0htmlToCppEmit\0"
    "htmlToCppLocationEmit\0lon\0lat\0"
    "mouseMoveEmit\0htmlToCpp\0htmlToCppLocation\0"
    "mouseMove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bridge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    2,   55,    2, 0x06 /* Public */,
       8,    2,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   65,    2, 0x0a /* Public */,
      10,    2,   68,    2, 0x0a /* Public */,
      11,    2,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

       0        // eod
};

void bridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        bridge *_t = static_cast<bridge *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cppToHtmlEmit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->htmlToCppEmit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->htmlToCppLocationEmit((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->mouseMoveEmit((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->htmlToCpp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->htmlToCppLocation((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->mouseMove((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&bridge::cppToHtmlEmit)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&bridge::htmlToCppEmit)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (bridge::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&bridge::htmlToCppLocationEmit)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (bridge::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&bridge::mouseMoveEmit)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject bridge::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_bridge.data,
      qt_meta_data_bridge,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *bridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bridge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bridge.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int bridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void bridge::cppToHtmlEmit(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void bridge::htmlToCppEmit(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void bridge::htmlToCppLocationEmit(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void bridge::mouseMoveEmit(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
