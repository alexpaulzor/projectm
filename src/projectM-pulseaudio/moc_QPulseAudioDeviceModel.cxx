/****************************************************************************
** Meta object code from reading C++ file 'QPulseAudioDeviceModel.hpp'
**
** Created: Sat Aug 27 17:11:13 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QPulseAudioDeviceModel.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QPulseAudioDeviceModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPulseAudioDeviceModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QPulseAudioDeviceModel[] = {
    "QPulseAudioDeviceModel\0\0updateItemHighlights()\0"
};

const QMetaObject QPulseAudioDeviceModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QPulseAudioDeviceModel,
      qt_meta_data_QPulseAudioDeviceModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPulseAudioDeviceModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPulseAudioDeviceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPulseAudioDeviceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudioDeviceModel))
        return static_cast<void*>(const_cast< QPulseAudioDeviceModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int QPulseAudioDeviceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateItemHighlights(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
