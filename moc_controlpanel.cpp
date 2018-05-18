/****************************************************************************
** Meta object code from reading C++ file 'controlpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Project_3_NewEra_2/controlpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controlpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputDialog_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputDialog_t qt_meta_stringdata_InputDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "InputDialog"
QT_MOC_LITERAL(1, 12, 18), // "choice_info_answer"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21) // "accept_button_clicked"

    },
    "InputDialog\0choice_info_answer\0\0"
    "accept_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void InputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputDialog *_t = static_cast<InputDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->choice_info_answer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->accept_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (InputDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDialog::choice_info_answer)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InputDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InputDialog.data,
      qt_meta_data_InputDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputDialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int InputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void InputDialog::choice_info_answer(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TestInputDialog_t {
    QByteArrayData data[4];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestInputDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestInputDialog_t qt_meta_stringdata_TestInputDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TestInputDialog"
QT_MOC_LITERAL(1, 16, 23), // "test_choice_info_answer"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21) // "accept_button_clicked"

    },
    "TestInputDialog\0test_choice_info_answer\0"
    "\0accept_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestInputDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TestInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestInputDialog *_t = static_cast<TestInputDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->test_choice_info_answer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->accept_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TestInputDialog::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestInputDialog::test_choice_info_answer)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestInputDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TestInputDialog.data,
      qt_meta_data_TestInputDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestInputDialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TestInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TestInputDialog::test_choice_info_answer(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ExpInputDialog_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExpInputDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExpInputDialog_t qt_meta_stringdata_ExpInputDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ExpInputDialog"
QT_MOC_LITERAL(1, 15, 11), // "info_absorb"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "ExpInputDialog\0info_absorb\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExpInputDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ExpInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExpInputDialog *_t = static_cast<ExpInputDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->info_absorb(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ExpInputDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExpInputDialog.data,
      qt_meta_data_ExpInputDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ExpInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExpInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExpInputDialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ExpInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ControlPanel_t {
    QByteArrayData data[49];
    char stringdata0[730];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlPanel_t qt_meta_stringdata_ControlPanel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ControlPanel"
QT_MOC_LITERAL(1, 13, 16), // "add_room_request"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "x_size"
QT_MOC_LITERAL(4, 38, 6), // "y_size"
QT_MOC_LITERAL(5, 45, 19), // "delete_room_request"
QT_MOC_LITERAL(6, 65, 2), // "id"
QT_MOC_LITERAL(7, 68, 19), // "add_element_request"
QT_MOC_LITERAL(8, 88, 1), // "x"
QT_MOC_LITERAL(9, 90, 1), // "y"
QT_MOC_LITERAL(10, 92, 4), // "type"
QT_MOC_LITERAL(11, 97, 24), // "add_element_mode_request"
QT_MOC_LITERAL(12, 122, 20), // "element_type_request"
QT_MOC_LITERAL(13, 143, 22), // "delete_element_request"
QT_MOC_LITERAL(14, 166, 3), // "all"
QT_MOC_LITERAL(15, 170, 27), // "delete_element_mode_request"
QT_MOC_LITERAL(16, 198, 15), // "connect_request"
QT_MOC_LITERAL(17, 214, 5), // "door1"
QT_MOC_LITERAL(18, 220, 5), // "door2"
QT_MOC_LITERAL(19, 226, 18), // "disconnect_request"
QT_MOC_LITERAL(20, 245, 3), // "id1"
QT_MOC_LITERAL(21, 249, 3), // "id2"
QT_MOC_LITERAL(22, 253, 12), // "redo_request"
QT_MOC_LITERAL(23, 266, 12), // "undo_request"
QT_MOC_LITERAL(24, 279, 12), // "save_request"
QT_MOC_LITERAL(25, 292, 12), // "load_request"
QT_MOC_LITERAL(26, 305, 4), // "next"
QT_MOC_LITERAL(27, 310, 4), // "prev"
QT_MOC_LITERAL(28, 315, 12), // "exit_request"
QT_MOC_LITERAL(29, 328, 4), // "exit"
QT_MOC_LITERAL(30, 333, 20), // "outside_draw_request"
QT_MOC_LITERAL(31, 354, 9), // "DataBase*"
QT_MOC_LITERAL(32, 364, 19), // "inside_draw_request"
QT_MOC_LITERAL(33, 384, 23), // "add_room_button_clicked"
QT_MOC_LITERAL(34, 408, 26), // "delete_room_button_clicked"
QT_MOC_LITERAL(35, 435, 19), // "undo_button_clicked"
QT_MOC_LITERAL(36, 455, 19), // "redo_button_clicked"
QT_MOC_LITERAL(37, 475, 19), // "save_button_clicked"
QT_MOC_LITERAL(38, 495, 19), // "load_button_clicked"
QT_MOC_LITERAL(39, 515, 19), // "exit_button_clicked"
QT_MOC_LITERAL(40, 535, 19), // "next_button_clicked"
QT_MOC_LITERAL(41, 555, 19), // "prev_button_clicked"
QT_MOC_LITERAL(42, 575, 26), // "add_element_button_toggled"
QT_MOC_LITERAL(43, 602, 5), // "state"
QT_MOC_LITERAL(44, 608, 29), // "delete_element_button_toggled"
QT_MOC_LITERAL(45, 638, 22), // "connect_button_clicked"
QT_MOC_LITERAL(46, 661, 25), // "disconnect_button_clicked"
QT_MOC_LITERAL(47, 687, 18), // "choice_info_answer"
QT_MOC_LITERAL(48, 706, 23) // "test_choice_info_answer"

    },
    "ControlPanel\0add_room_request\0\0x_size\0"
    "y_size\0delete_room_request\0id\0"
    "add_element_request\0x\0y\0type\0"
    "add_element_mode_request\0element_type_request\0"
    "delete_element_request\0all\0"
    "delete_element_mode_request\0connect_request\0"
    "door1\0door2\0disconnect_request\0id1\0"
    "id2\0redo_request\0undo_request\0"
    "save_request\0load_request\0next\0prev\0"
    "exit_request\0exit\0outside_draw_request\0"
    "DataBase*\0inside_draw_request\0"
    "add_room_button_clicked\0"
    "delete_room_button_clicked\0"
    "undo_button_clicked\0redo_button_clicked\0"
    "save_button_clicked\0load_button_clicked\0"
    "exit_button_clicked\0next_button_clicked\0"
    "prev_button_clicked\0add_element_button_toggled\0"
    "state\0delete_element_button_toggled\0"
    "connect_button_clicked\0disconnect_button_clicked\0"
    "choice_info_answer\0test_choice_info_answer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  184,    2, 0x06 /* Public */,
       5,    1,  189,    2, 0x06 /* Public */,
       7,    3,  192,    2, 0x06 /* Public */,
      11,    1,  199,    2, 0x06 /* Public */,
      12,    1,  202,    2, 0x06 /* Public */,
      13,    3,  205,    2, 0x06 /* Public */,
      15,    1,  212,    2, 0x06 /* Public */,
      16,    2,  215,    2, 0x06 /* Public */,
      19,    2,  220,    2, 0x06 /* Public */,
      22,    0,  225,    2, 0x06 /* Public */,
      23,    0,  226,    2, 0x06 /* Public */,
      24,    0,  227,    2, 0x06 /* Public */,
      25,    0,  228,    2, 0x06 /* Public */,
      26,    0,  229,    2, 0x06 /* Public */,
      27,    0,  230,    2, 0x06 /* Public */,
      28,    0,  231,    2, 0x06 /* Public */,
      29,    0,  232,    2, 0x06 /* Public */,
      30,    1,  233,    2, 0x06 /* Public */,
      32,    1,  236,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    0,  239,    2, 0x08 /* Private */,
      34,    0,  240,    2, 0x08 /* Private */,
      35,    0,  241,    2, 0x08 /* Private */,
      36,    0,  242,    2, 0x08 /* Private */,
      37,    0,  243,    2, 0x08 /* Private */,
      38,    0,  244,    2, 0x08 /* Private */,
      39,    0,  245,    2, 0x08 /* Private */,
      40,    0,  246,    2, 0x08 /* Private */,
      41,    0,  247,    2, 0x08 /* Private */,
      42,    1,  248,    2, 0x08 /* Private */,
      44,    1,  251,    2, 0x08 /* Private */,
      45,    0,  254,    2, 0x08 /* Private */,
      46,    0,  255,    2, 0x08 /* Private */,
      47,    1,  256,    2, 0x08 /* Private */,
      48,    3,  259,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   14,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,    2,
    QMetaType::Void, 0x80000000 | 31,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,

       0        // eod
};

void ControlPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ControlPanel *_t = static_cast<ControlPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add_room_request((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->delete_room_request((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->add_element_request((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->add_element_mode_request((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->element_type_request((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->delete_element_request((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->delete_element_mode_request((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->connect_request((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->disconnect_request((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->redo_request(); break;
        case 10: _t->undo_request(); break;
        case 11: _t->save_request(); break;
        case 12: _t->load_request(); break;
        case 13: _t->next(); break;
        case 14: _t->prev(); break;
        case 15: _t->exit_request(); break;
        case 16: _t->exit(); break;
        case 17: _t->outside_draw_request((*reinterpret_cast< DataBase*(*)>(_a[1]))); break;
        case 18: _t->inside_draw_request((*reinterpret_cast< DataBase*(*)>(_a[1]))); break;
        case 19: _t->add_room_button_clicked(); break;
        case 20: _t->delete_room_button_clicked(); break;
        case 21: _t->undo_button_clicked(); break;
        case 22: _t->redo_button_clicked(); break;
        case 23: _t->save_button_clicked(); break;
        case 24: _t->load_button_clicked(); break;
        case 25: _t->exit_button_clicked(); break;
        case 26: _t->next_button_clicked(); break;
        case 27: _t->prev_button_clicked(); break;
        case 28: _t->add_element_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->delete_element_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->connect_button_clicked(); break;
        case 31: _t->disconnect_button_clicked(); break;
        case 32: _t->choice_info_answer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->test_choice_info_answer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DataBase* >(); break;
            }
            break;
        case 18:
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
            typedef void (ControlPanel::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::add_room_request)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::delete_room_request)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::add_element_request)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::add_element_mode_request)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::element_type_request)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::delete_element_request)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::delete_element_mode_request)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::connect_request)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::disconnect_request)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::redo_request)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::undo_request)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::save_request)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::load_request)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::next)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::prev)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::exit_request)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::exit)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)(DataBase * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::outside_draw_request)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (ControlPanel::*_t)(DataBase * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::inside_draw_request)) {
                *result = 18;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControlPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ControlPanel.data,
      qt_meta_data_ControlPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ControlPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControlPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ControlPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void ControlPanel::add_room_request(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ControlPanel::delete_room_request(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ControlPanel::add_element_request(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ControlPanel::add_element_mode_request(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ControlPanel::element_type_request(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ControlPanel::delete_element_request(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ControlPanel::delete_element_mode_request(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ControlPanel::connect_request(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ControlPanel::disconnect_request(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ControlPanel::redo_request()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ControlPanel::undo_request()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ControlPanel::save_request()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ControlPanel::load_request()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ControlPanel::next()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void ControlPanel::prev()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void ControlPanel::exit_request()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void ControlPanel::exit()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void ControlPanel::outside_draw_request(DataBase * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void ControlPanel::inside_draw_request(DataBase * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
