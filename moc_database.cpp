/****************************************************************************
** Meta object code from reading C++ file 'database.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Project_3_NewEra_2/database.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'database.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataBase_t {
    QByteArrayData data[31];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataBase_t qt_meta_stringdata_DataBase = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DataBase"
QT_MOC_LITERAL(1, 9, 11), // "info_answer"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "DataBase*"
QT_MOC_LITERAL(4, 32, 4), // "test"
QT_MOC_LITERAL(5, 37, 16), // "add_room_request"
QT_MOC_LITERAL(6, 54, 6), // "x_size"
QT_MOC_LITERAL(7, 61, 6), // "y_size"
QT_MOC_LITERAL(8, 68, 19), // "delete_room_request"
QT_MOC_LITERAL(9, 88, 2), // "id"
QT_MOC_LITERAL(10, 91, 19), // "add_element_request"
QT_MOC_LITERAL(11, 111, 7), // "x_local"
QT_MOC_LITERAL(12, 119, 7), // "y_local"
QT_MOC_LITERAL(13, 127, 4), // "type"
QT_MOC_LITERAL(14, 132, 24), // "add_element_mode_request"
QT_MOC_LITERAL(15, 157, 5), // "state"
QT_MOC_LITERAL(16, 163, 20), // "element_type_request"
QT_MOC_LITERAL(17, 184, 22), // "delete_element_request"
QT_MOC_LITERAL(18, 207, 3), // "all"
QT_MOC_LITERAL(19, 211, 27), // "delete_element_mode_request"
QT_MOC_LITERAL(20, 239, 15), // "connect_request"
QT_MOC_LITERAL(21, 255, 5), // "door1"
QT_MOC_LITERAL(22, 261, 5), // "door2"
QT_MOC_LITERAL(23, 267, 18), // "disconnect_request"
QT_MOC_LITERAL(24, 286, 12), // "redo_request"
QT_MOC_LITERAL(25, 299, 12), // "undo_request"
QT_MOC_LITERAL(26, 312, 12), // "save_request"
QT_MOC_LITERAL(27, 325, 12), // "load_request"
QT_MOC_LITERAL(28, 338, 12), // "exit_request"
QT_MOC_LITERAL(29, 351, 12), // "next_request"
QT_MOC_LITERAL(30, 364, 12) // "prev_request"

    },
    "DataBase\0info_answer\0\0DataBase*\0test\0"
    "add_room_request\0x_size\0y_size\0"
    "delete_room_request\0id\0add_element_request\0"
    "x_local\0y_local\0type\0add_element_mode_request\0"
    "state\0element_type_request\0"
    "delete_element_request\0all\0"
    "delete_element_mode_request\0connect_request\0"
    "door1\0door2\0disconnect_request\0"
    "redo_request\0undo_request\0save_request\0"
    "load_request\0exit_request\0next_request\0"
    "prev_request"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  107,    2, 0x08 /* Private */,
       5,    2,  108,    2, 0x08 /* Private */,
       8,    1,  113,    2, 0x08 /* Private */,
      10,    3,  116,    2, 0x08 /* Private */,
      14,    1,  123,    2, 0x08 /* Private */,
      16,    1,  126,    2, 0x08 /* Private */,
      17,    3,  129,    2, 0x08 /* Private */,
      19,    1,  136,    2, 0x08 /* Private */,
      20,    2,  139,    2, 0x08 /* Private */,
      23,    2,  144,    2, 0x08 /* Private */,
      24,    0,  149,    2, 0x08 /* Private */,
      25,    0,  150,    2, 0x08 /* Private */,
      26,    0,  151,    2, 0x08 /* Private */,
      27,    0,  152,    2, 0x08 /* Private */,
      28,    0,  153,    2, 0x08 /* Private */,
      29,    0,  154,    2, 0x08 /* Private */,
      30,    0,  155,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   18,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   21,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DataBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataBase *_t = static_cast<DataBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->info_answer((*reinterpret_cast< DataBase*(*)>(_a[1]))); break;
        case 1: _t->test(); break;
        case 2: _t->add_room_request((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->delete_room_request((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->add_element_request((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->add_element_mode_request((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->element_type_request((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->delete_element_request((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->delete_element_mode_request((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->connect_request((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->disconnect_request((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->redo_request(); break;
        case 12: _t->undo_request(); break;
        case 13: _t->save_request(); break;
        case 14: _t->load_request(); break;
        case 15: _t->exit_request(); break;
        case 16: _t->next_request(); break;
        case 17: _t->prev_request(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DataBase* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DataBase::*_t)(DataBase * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataBase::info_answer)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataBase.data,
      qt_meta_data_DataBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DataBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void DataBase::info_answer(DataBase * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
