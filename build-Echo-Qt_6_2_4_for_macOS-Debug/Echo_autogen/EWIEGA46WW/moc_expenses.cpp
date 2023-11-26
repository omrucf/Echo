/****************************************************************************
** Meta object code from reading C++ file 'expenses.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Echo/expenses.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'expenses.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_expenses_t {
    const uint offsetsAndSize[22];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_expenses_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_expenses_t qt_meta_stringdata_expenses = {
    {
QT_MOC_LITERAL(0, 8), // "expenses"
QT_MOC_LITERAL(9, 15), // "on_addB_clicked"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 16), // "on_saveB_clicked"
QT_MOC_LITERAL(43, 16), // "on_homeB_clicked"
QT_MOC_LITERAL(60, 17), // "on_aboutB_clicked"
QT_MOC_LITERAL(78, 20), // "on_featuresB_clicked"
QT_MOC_LITERAL(99, 29), // "on_sourceE_currentTextChanged"
QT_MOC_LITERAL(129, 4), // "arg1"
QT_MOC_LITERAL(134, 30), // "on_sourceE_currentIndexChanged"
QT_MOC_LITERAL(165, 5) // "index"

    },
    "expenses\0on_addB_clicked\0\0on_saveB_clicked\0"
    "on_homeB_clicked\0on_aboutB_clicked\0"
    "on_featuresB_clicked\0on_sourceE_currentTextChanged\0"
    "arg1\0on_sourceE_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_expenses[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    1,   61,    2, 0x08,    6 /* Private */,
       9,    1,   64,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void expenses::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<expenses *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addB_clicked(); break;
        case 1: _t->on_saveB_clicked(); break;
        case 2: _t->on_homeB_clicked(); break;
        case 3: _t->on_aboutB_clicked(); break;
        case 4: _t->on_featuresB_clicked(); break;
        case 5: _t->on_sourceE_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_sourceE_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject expenses::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_expenses.offsetsAndSize,
    qt_meta_data_expenses,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_expenses_t
, QtPrivate::TypeAndForceComplete<expenses, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *expenses::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *expenses::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_expenses.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int expenses::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
