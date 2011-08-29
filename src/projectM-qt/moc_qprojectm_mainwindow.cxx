/****************************************************************************
** Meta object code from reading C++ file 'qprojectm_mainwindow.hpp'
**
** Created: Sat Aug 27 17:10:56 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qprojectm_mainwindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprojectm_mainwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProjectM_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   37,   21,   21, 0x08,
      82,   21,   21,   21, 0x08,
      98,   21,   21,   21, 0x08,
     114,   21,   21,   21, 0x08,
     136,   21,   21,   21, 0x08,
     166,   21,   21,   21, 0x08,
     215,  208,   21,   21, 0x08,
     270,   21,   21,   21, 0x08,
     297,  288,   21,   21, 0x08,
     321,   21,   21,   21, 0x08,
     342,  288,   21,   21, 0x08,
     370,   21,   21,   21, 0x08,
     380,   21,   21,   21, 0x08,
     396,   21,   21,   21, 0x08,
     421,  415,   21,   21, 0x08,
     451,   21,   21,   21, 0x08,
     472,   21,   21,   21, 0x08,
     498,   21,   21,   21, 0x08,
     521,   21,   21,   21, 0x08,
     529,   21,   21,   21, 0x08,
     569,  555,   21,   21, 0x08,
     604,  415,   21,   21, 0x08,
     636,  415,   21,   21, 0x08,
     671,   21,   21,   21, 0x08,
     697,  692,   21,   21, 0x08,
     735,  729,   21,   21, 0x08,
     765,   21,   21,   21, 0x28,
     788,  782,   21,   21, 0x08,
     827,  825,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QProjectM_MainWindow[] = {
    "QProjectM_MainWindow\0\0shuttingDown()\0"
    "area\0dockLocationChanged(Qt::DockWidgetArea)\0"
    "presetHardCut()\0presetSoftCut()\0"
    "insertPresetsDialog()\0"
    "removeSelectedPlaylistItems()\0"
    "openPresetEditorDialogForSelectedPreset()\0"
    ",items\0popupPlaylistContextMenu(QMouseEvent*,QModelIndexList)\0"
    "hotkeyReference()\0rowIndex\0"
    "selectPlaylistItem(int)\0clearPlaylistModel()\0"
    "openPresetEditorDialog(int)\0aboutQt()\0"
    "clearPlaylist()\0addPresetsDialog()\0"
    "index\0addPresetsDialog(QModelIndex)\0"
    "openPlaylistDialog()\0savePlaylistButtonClick()\0"
    "savePlaylistAsDialog()\0about()\0"
    "postProjectM_Initialize()\0hardCut,index\0"
    "updatePlaylistSelection(bool,uint)\0"
    "selectPlaylistItem(QModelIndex)\0"
    "changePresetAttribute(QModelIndex)\0"
    "openSettingsDialog()\0text\0"
    "updateFilteredPlaylist(QString)\0event\0"
    "refreshHeaders(QResizeEvent*)\0"
    "refreshHeaders()\0items\0"
    "removePlaylistItems(QModelIndexList)\0"
    ",\0dragAndDropPlaylistItems(QModelIndexList,QModelIndex)\0"
};

const QMetaObject QProjectM_MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QProjectM_MainWindow,
      qt_meta_data_QProjectM_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProjectM_MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProjectM_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProjectM_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProjectM_MainWindow))
        return static_cast<void*>(const_cast< QProjectM_MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QProjectM_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: shuttingDown(); break;
        case 1: dockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 2: presetHardCut(); break;
        case 3: presetSoftCut(); break;
        case 4: insertPresetsDialog(); break;
        case 5: removeSelectedPlaylistItems(); break;
        case 6: openPresetEditorDialogForSelectedPreset(); break;
        case 7: popupPlaylistContextMenu((*reinterpret_cast< QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< const QModelIndexList(*)>(_a[2]))); break;
        case 8: hotkeyReference(); break;
        case 9: selectPlaylistItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: clearPlaylistModel(); break;
        case 11: openPresetEditorDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: aboutQt(); break;
        case 13: clearPlaylist(); break;
        case 14: addPresetsDialog(); break;
        case 15: addPresetsDialog((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: openPlaylistDialog(); break;
        case 17: savePlaylistButtonClick(); break;
        case 18: savePlaylistAsDialog(); break;
        case 19: about(); break;
        case 20: postProjectM_Initialize(); break;
        case 21: updatePlaylistSelection((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 22: selectPlaylistItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 23: changePresetAttribute((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 24: openSettingsDialog(); break;
        case 25: updateFilteredPlaylist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: refreshHeaders((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 27: refreshHeaders(); break;
        case 28: removePlaylistItems((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 29: dragAndDropPlaylistItems((*reinterpret_cast< const QModelIndexList(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void QProjectM_MainWindow::shuttingDown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
