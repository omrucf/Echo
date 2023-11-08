/****************************************************************************
** Meta object code from reading C++ file 'startscreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Echo/startscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_startScreen_t {
    const uint offsetsAndSize[14];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_startScreen_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_startScreen_t qt_meta_stringdata_startScreen = {
    {
QT_MOC_LITERAL(0, 11), // "startScreen"
QT_MOC_LITERAL(12, 20), // "on_featuresB_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 17), // "on_aboutB_clicked"
QT_MOC_LITERAL(52, 17), // "on_strtnw_clicked"
QT_MOC_LITERAL(70, 21), // "on_getStarted_clicked"
QT_MOC_LITERAL(92, 21) // "on_howItWorks_clicked"

    },
    "startScreen\0on_featuresB_clicked\0\0"
    "on_aboutB_clicked\0on_strtnw_clicked\0"
    "on_getStarted_clicked\0on_howItWorks_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_startScreen[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void startScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<startScreen *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_featuresB_clicked(); break;
        case 1: _t->on_aboutB_clicked(); break;
        case 2: _t->on_strtnw_clicked(); break;
        case 3: _t->on_getStarted_clicked(); break;
        case 4: _t->on_howItWorks_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject startScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_startScreen.offsetsAndSize,
    qt_meta_data_startScreen,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_startScreen_t
, QtPrivate::TypeAndForceComplete<startScreen, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *startScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *startScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_startScreen.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int startScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
