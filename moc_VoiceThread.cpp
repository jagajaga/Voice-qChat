/****************************************************************************
** Meta object code from reading C++ file 'VoiceThread.hpp'
**
** Created: Wed Jan 23 22:53:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "VoiceThread.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VoiceThread.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VoiceThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   12,   12,   12, 0x0a,
      48,   46,   12,   12, 0x0a,
      74,   46,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VoiceThread[] = {
    "VoiceThread\0\0send_encoded(QByteArray&)\0"
    "read()\0,\0write(QByteArray,QString)\0"
    "add_output_device(QString,QString)\0"
};

void VoiceThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VoiceThread *_t = static_cast<VoiceThread *>(_o);
        switch (_id) {
        case 0: _t->send_encoded((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->read(); break;
        case 2: _t->write((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->add_output_device((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VoiceThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VoiceThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VoiceThread,
      qt_meta_data_VoiceThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VoiceThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VoiceThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VoiceThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VoiceThread))
        return static_cast<void*>(const_cast< VoiceThread*>(this));
    return QObject::qt_metacast(_clname);
}

int VoiceThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void VoiceThread::send_encoded(QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE