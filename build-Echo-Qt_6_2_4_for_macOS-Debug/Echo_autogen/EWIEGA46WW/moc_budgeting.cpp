/****************************************************************************
** Meta object code from reading C++ file 'budgeting.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Echo/budgeting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'budgeting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_budgeting_t {
    const uint offsetsAndSize[16];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_budgeting_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_budgeting_t qt_meta_stringdata_budgeting = {
    {
QT_MOC_LITERAL(0, 9), // "budgeting"
QT_MOC_LITERAL(10, 15), // "on_addB_clicked"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 33), // "on_categories_currentIndexCha..."
QT_MOC_LITERAL(61, 5), // "index"
QT_MOC_LITERAL(67, 16), // "on_homeB_clicked"
QT_MOC_LITERAL(84, 20), // "on_featuresB_clicked"
QT_MOC_LITERAL(105, 17) // "on_aboutB_clicked"

    },
    "budgeting\0on_addB_clicked\0\0"
    "on_categories_currentIndexChanged\0"
    "index\0on_homeB_clicked\0on_featuresB_clicked\0"
    "on_aboutB_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_budgeting[] = {

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
       3,    1,   45,    2, 0x08,    2 /* Private */,
       5,    0,   48,    2, 0x08,    4 /* Private */,
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void budgeting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<budgeting *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addB_clicked(); break;
        case 1: _t->on_categories_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_homeB_clicked(); break;
        case 3: _t->on_featuresB_clicked(); break;
        case 4: _t->on_aboutB_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject budgeting::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_budgeting.offsetsAndSize,
    qt_meta_data_budgeting,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_budgeting_t
, QtPrivate::TypeAndForceComplete<budgeting, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *budgeting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *budgeting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_budgeting.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int budgeting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
