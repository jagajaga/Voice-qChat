/****************************************************************************
** Meta object code from reading C++ file 'CommandBroadcaster.hpp'
**
** Created: Tue Dec 18 23:57:35 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CommandBroadcaster.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommandBroadcaster.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CommandBroadcaster[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      40,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CommandBroadcaster[] = {
    "CommandBroadcaster\0\0deleteUser(QString)\0"
    "newUser(QString)\0process_pending_datagrams()\0"
};

void CommandBroadcaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommandBroadcaster *_t = static_cast<CommandBroadcaster *>(_o);
        switch (_id) {
        case 0: _t->deleteUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->newUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->process_pending_datagrams(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CommandBroadcaster::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CommandBroadcaster::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CommandBroadcaster,
      qt_meta_data_CommandBroadcaster, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CommandBroadcaster::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CommandBroadcaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CommandBroadcaster::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CommandBroadcaster))
        return static_cast<void*>(const_cast< CommandBroadcaster*>(this));
    return QObject::qt_metacast(_clname);
}

int CommandBroadcaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CommandBroadcaster::deleteUser(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommandBroadcaster::newUser(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
