/****************************************************************************
** Meta object code from reading C++ file 'main_form.h'
**
** Created: Sun Jan 27 01:11:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "main_form.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_main_form[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      18,   10,   10,   10, 0x08,
      29,   10,   10,   10, 0x08,
      41,   10,   10,   10, 0x08,
      54,   10,   10,   10, 0x08,
      75,   10,   10,   10, 0x08,
      88,   86,   10,   10, 0x08,
     113,   10,   10,   10, 0x08,
     133,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_main_form[] = {
    "main_form\0\0mute()\0drop_map()\0f_connect()\0"
    "disconnect()\0connect_disconnect()\0"
    "set_nick()\0,\0newUser(QString,QString)\0"
    "deleteUser(QString)\0nick_changed(QString)\0"
};

void main_form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        main_form *_t = static_cast<main_form *>(_o);
        switch (_id) {
        case 0: _t->mute(); break;
        case 1: _t->drop_map(); break;
        case 2: _t->f_connect(); break;
        case 3: _t->disconnect(); break;
        case 4: _t->connect_disconnect(); break;
        case 5: _t->set_nick(); break;
        case 6: _t->newUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->deleteUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->nick_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData main_form::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject main_form::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_main_form,
      qt_meta_data_main_form, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &main_form::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *main_form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *main_form::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_main_form))
        return static_cast<void*>(const_cast< main_form*>(this));
    return QDialog::qt_metacast(_clname);
}

int main_form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
