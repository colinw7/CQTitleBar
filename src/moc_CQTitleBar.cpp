/****************************************************************************
** Meta object code from reading C++ file 'CQTitleBar.h'
**
** Created: Wed Jul 17 08:46:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/CQTitleBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CQTitleBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CQTitleBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      19,   11, 0x0a095103,
      31,   25, 0x45095103,
      52,   36, 0x0009510b,
      71,   64, 0x43095103,
      87,   64, 0x43095103,

       0        // eod
};

static const char qt_meta_stringdata_CQTitleBar[] = {
    "CQTitleBar\0QString\0title\0QIcon\0icon\0"
    "Qt::Orientation\0orientation\0QColor\0"
    "backgroundColor\0barColor\0"
};

void CQTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CQTitleBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CQTitleBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CQTitleBar,
      qt_meta_data_CQTitleBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CQTitleBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CQTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CQTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CQTitleBar))
        return static_cast<void*>(const_cast< CQTitleBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int CQTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = title(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = icon(); break;
        case 2: *reinterpret_cast< Qt::Orientation*>(_v) = orientation(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = backgroundColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = barColor(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 3: setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: setBarColor(*reinterpret_cast< QColor*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
