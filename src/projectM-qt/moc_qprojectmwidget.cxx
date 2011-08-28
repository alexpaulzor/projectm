/****************************************************************************
** Meta object code from reading C++ file 'qprojectmwidget.hpp'
**
** Created: Mon Aug 15 22:29:40 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qprojectmwidget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprojectmwidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProjectMWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      50,   16,   16,   16, 0x05,
      84,   75,   16,   16, 0x05,
     125,  108,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     159,  153,   16,   16, 0x09,
     188,  153,   16,   16, 0x09,
     208,   16,   16,   16, 0x0a,
     230,  224,   16,   16, 0x0a,
     259,  253,   16,   16, 0x0a,
     278,  253,   16,   16, 0x0a,
     301,  153,   16,   16, 0x0a,
     331,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QProjectMWidget[] = {
    "QProjectMWidget\0\0projectM_Initialized(QProjectM*)\0"
    "projectM_BeforeDestroy()\0isLocked\0"
    "presetLockChanged(bool)\0isShuffleEnabled\0"
    "shuffleEnabledChanged(bool)\0event\0"
    "mouseMoveEvent(QMouseEvent*)\0"
    "leaveEvent(QEvent*)\0resetProjectM()\0"
    "mutex\0setAudioMutex(QMutex*)\0state\0"
    "setPresetLock(int)\0setShuffleEnabled(int)\0"
    "mousePressEvent(QMouseEvent*)\0hideMouse()\0"
};

const QMetaObject QProjectMWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_QProjectMWidget,
      qt_meta_data_QProjectMWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProjectMWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProjectMWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProjectMWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProjectMWidget))
        return static_cast<void*>(const_cast< QProjectMWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int QProjectMWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: projectM_Initialized((*reinterpret_cast< QProjectM*(*)>(_a[1]))); break;
        case 1: projectM_BeforeDestroy(); break;
        case 2: presetLockChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: shuffleEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: leaveEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 6: resetProjectM(); break;
        case 7: setAudioMutex((*reinterpret_cast< QMutex*(*)>(_a[1]))); break;
        case 8: setPresetLock((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: setShuffleEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: hideMouse(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QProjectMWidget::projectM_Initialized(QProjectM * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QProjectMWidget::projectM_BeforeDestroy()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QProjectMWidget::presetLockChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QProjectMWidget::shuffleEnabledChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
