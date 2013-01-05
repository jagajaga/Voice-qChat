/****************************************************************************
** Meta object code from reading C++ file 'mainDialog.h'
**
** Created: Sun Jan 6 02:08:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_newForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      20,    8,    8,    8, 0x08,
      32,    8,    8,    8, 0x08,
      45,    8,    8,    8, 0x08,
      66,    8,    8,    8, 0x08,
      79,   77,    8,    8, 0x08,
     104,    8,    8,    8, 0x08,
     124,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_newForm[] = {
    "newForm\0\0drop_map()\0f_connect()\0"
    "disconnect()\0connect_disconnect()\0"
    "set_nick()\0,\0newUser(QString,QString)\0"
    "deleteUser(QString)\0nick_changed(QString)\0"
};

void newForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        newForm *_t = static_cast<newForm *>(_o);
        switch (_id) {
        case 0: _t->drop_map(); break;
        case 1: _t->f_connect(); break;
        case 2: _t->disconnect(); break;
        case 3: _t->connect_disconnect(); break;
        case 4: _t->set_nick(); break;
        case 5: _t->newUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->deleteUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->nick_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData newForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject newForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_newForm,
      qt_meta_data_newForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &newForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *newForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *newForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_newForm))
        return static_cast<void*>(const_cast< newForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int newForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
