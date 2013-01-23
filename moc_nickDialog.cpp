/****************************************************************************
** Meta object code from reading C++ file 'nickDialog.hpp'
**
** Created: Wed Jan 23 19:04:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "nickDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nickDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_nickDialog[] = {

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
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   11,   11,   11, 0x08,
      41,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_nickDialog[] = {
    "nickDialog\0\0nick_changed(QString)\0"
    "quit()\0set_nick()\0"
};

void nickDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        nickDialog *_t = static_cast<nickDialog *>(_o);
        switch (_id) {
        case 0: _t->nick_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->quit(); break;
        case 2: _t->set_nick(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData nickDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject nickDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_nickDialog,
      qt_meta_data_nickDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &nickDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *nickDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *nickDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_nickDialog))
        return static_cast<void*>(const_cast< nickDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int nickDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void nickDialog::nick_changed(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
