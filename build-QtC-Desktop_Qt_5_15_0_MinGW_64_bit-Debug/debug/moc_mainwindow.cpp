/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../QtC/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(4, 59, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(5, 83, 26), // "on_actionSave_as_triggered"
QT_MOC_LITERAL(6, 110, 22), // "on_actionCut_triggered"
QT_MOC_LITERAL(7, 133, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(8, 157, 23), // "on_actionBold_triggered"
QT_MOC_LITERAL(9, 181, 24), // "on_actionPaste_triggered"
QT_MOC_LITERAL(10, 206, 30), // "on_actionSuperscript_triggered"
QT_MOC_LITERAL(11, 237, 28), // "on_actionSubscript_triggered"
QT_MOC_LITERAL(12, 266, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(13, 290, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(14, 314, 11), // "madeChanges"
QT_MOC_LITERAL(15, 326, 27) // "on_actionAbout_Me_triggered"

    },
    "MainWindow\0on_actionNew_triggered\0\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
    "on_actionSave_as_triggered\0"
    "on_actionCut_triggered\0on_actionCopy_triggered\0"
    "on_actionBold_triggered\0"
    "on_actionPaste_triggered\0"
    "on_actionSuperscript_triggered\0"
    "on_actionSubscript_triggered\0"
    "on_actionRedo_triggered\0on_actionUndo_triggered\0"
    "madeChanges\0on_actionAbout_Me_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionSave_triggered(); break;
        case 3: _t->on_actionSave_as_triggered(); break;
        case 4: _t->on_actionCut_triggered(); break;
        case 5: _t->on_actionCopy_triggered(); break;
        case 6: _t->on_actionBold_triggered(); break;
        case 7: _t->on_actionPaste_triggered(); break;
        case 8: _t->on_actionSuperscript_triggered(); break;
        case 9: _t->on_actionSubscript_triggered(); break;
        case 10: _t->on_actionRedo_triggered(); break;
        case 11: _t->on_actionUndo_triggered(); break;
        case 12: { int _r = _t->madeChanges();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->on_actionAbout_Me_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
