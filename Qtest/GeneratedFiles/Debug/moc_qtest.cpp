/****************************************************************************
** Meta object code from reading C++ file 'qtest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qtest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qtest_t {
    QByteArrayData data[10];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtest_t qt_meta_stringdata_Qtest = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Qtest"
QT_MOC_LITERAL(1, 6, 17), // "on_Qtest_fileopen"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 20), // "on_Qtest_reversetest"
QT_MOC_LITERAL(4, 46, 25), // "on_Qtest_reverseoperation"
QT_MOC_LITERAL(5, 72, 22), // "on_Qtest_turnoperation"
QT_MOC_LITERAL(6, 95, 17), // "on_Qtest_filesave"
QT_MOC_LITERAL(7, 113, 17), // "Mouse_current_pos"
QT_MOC_LITERAL(8, 131, 13), // "Mouse_Pressed"
QT_MOC_LITERAL(9, 145, 10) // "Mouse_left"

    },
    "Qtest\0on_Qtest_fileopen\0\0on_Qtest_reversetest\0"
    "on_Qtest_reverseoperation\0"
    "on_Qtest_turnoperation\0on_Qtest_filesave\0"
    "Mouse_current_pos\0Mouse_Pressed\0"
    "Mouse_left"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Qtest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Qtest *_t = static_cast<Qtest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Qtest_fileopen(); break;
        case 1: _t->on_Qtest_reversetest(); break;
        case 2: _t->on_Qtest_reverseoperation(); break;
        case 3: _t->on_Qtest_turnoperation(); break;
        case 4: _t->on_Qtest_filesave(); break;
        case 5: _t->Mouse_current_pos(); break;
        case 6: _t->Mouse_Pressed(); break;
        case 7: _t->Mouse_left(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Qtest::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Qtest.data,
      qt_meta_data_Qtest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qtest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qtest.stringdata0))
        return static_cast<void*>(const_cast< Qtest*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Qtest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
