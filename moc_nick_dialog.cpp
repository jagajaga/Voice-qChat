/****************************************************************************
** Meta object code from reading C++ file 'nick_dialog.hpp'
**
** Created: Sat Jan 26 23:21:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "nick_dialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nick_dialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_nick_dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   12,   12,   12, 0x08,
      42,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_nick_dialog[] = {
    "nick_dialog\0\0nick_changed(QString)\0"
    "quit()\0set_nick()\0"
};

void nick_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        nick_dialog *_t = static_cast<nick_dialog *>(_o);
        switch (_id) {
        case 0: _t->nick_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->quit(); break;
        case 2: _t->set_nick(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData nick_dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject nick_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_nick_dialog,
      qt_meta_data_nick_dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &nick_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *nick_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *nick_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_nick_dialog))
        return static_cast<void*>(const_cast< nick_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int nick_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void nick_dialog::nick_changed(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
