/****************************************************************************
** Meta object code from reading C++ file 'qprojectmconfigdialog.hpp'
**
** Created: Mon Aug 15 22:29:40 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qprojectmconfigdialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprojectmconfigdialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProjectMConfigDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   22,   22,   22, 0x08,
      65,   22,   22,   22, 0x08,
      95,   22,   22,   22, 0x08,
     120,   22,   22,   22, 0x08,
     146,   22,   22,   22, 0x08,
     166,  159,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QProjectMConfigDialog[] = {
    "QProjectMConfigDialog\0\0projectM_Reset()\0"
    "openPlaylistFileDialog()\0"
    "openPlaylistDirectoryDialog()\0"
    "openMenuFontFileDialog()\0"
    "openTitleFontFileDialog()\0saveConfig()\0"
    "button\0buttonBoxHandler(QAbstractButton*)\0"
};

const QMetaObject QProjectMConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QProjectMConfigDialog,
      qt_meta_data_QProjectMConfigDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProjectMConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProjectMConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProjectMConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProjectMConfigDialog))
        return static_cast<void*>(const_cast< QProjectMConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QProjectMConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: projectM_Reset(); break;
        case 1: openPlaylistFileDialog(); break;
        case 2: openPlaylistDirectoryDialog(); break;
        case 3: openMenuFontFileDialog(); break;
        case 4: openTitleFontFileDialog(); break;
        case 5: saveConfig(); break;
        case 6: buttonBoxHandler((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QProjectMConfigDialog::projectM_Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
