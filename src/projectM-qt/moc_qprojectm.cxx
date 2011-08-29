/****************************************************************************
** Meta object code from reading C++ file 'qprojectm.hpp'
**
** Created: Sat Aug 27 17:10:57 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qprojectm.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprojectm.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProjectM[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   11,   10,   10, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QProjectM[] = {
    "QProjectM\0\0hardCut,index\0"
    "presetSwitchedSignal(bool,uint)\0"
};

const QMetaObject QProjectM::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QProjectM,
      qt_meta_data_QProjectM, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProjectM::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProjectM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProjectM::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProjectM))
        return static_cast<void*>(const_cast< QProjectM*>(this));
    if (!strcmp(_clname, "projectM"))
        return static_cast< projectM*>(const_cast< QProjectM*>(this));
    return QObject::qt_metacast(_clname);
}

int QProjectM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: presetSwitchedSignal((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QProjectM::presetSwitchedSignal(bool _t1, unsigned int _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< QProjectM *>(this), &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
