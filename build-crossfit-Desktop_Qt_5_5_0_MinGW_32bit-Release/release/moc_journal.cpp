/****************************************************************************
** Meta object code from reading C++ file 'journal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../crossfit/journal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'journal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Journal_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Journal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Journal_t qt_meta_stringdata_Journal = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Journal"
QT_MOC_LITERAL(1, 8, 6), // "wclose"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 27), // "on_calendarWidget_activated"
QT_MOC_LITERAL(4, 44, 4), // "date"
QT_MOC_LITERAL(5, 49, 21), // "on_QuitButton_clicked"
QT_MOC_LITERAL(6, 71, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(7, 95, 3) // "arg"

    },
    "Journal\0wclose\0\0on_calendarWidget_activated\0"
    "date\0on_QuitButton_clicked\0"
    "on_lineEdit_textChanged\0arg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Journal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void Journal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Journal *_t = static_cast<Journal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wclose(); break;
        case 1: _t->on_calendarWidget_activated((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->on_QuitButton_clicked(); break;
        case 3: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Journal::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Journal::wclose)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Journal::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Journal.data,
      qt_meta_data_Journal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Journal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Journal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Journal.stringdata0))
        return static_cast<void*>(const_cast< Journal*>(this));
    return QWidget::qt_metacast(_clname);
}

int Journal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Journal::wclose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE