/****************************************************************************
** Meta object code from reading C++ file 'setting.h'
**
** Created: Thu Jun 19 10:15:01 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "setting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_setting[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      42,    8,    8,    8, 0x08,
      70,    8,    8,    8, 0x08,
     102,    8,    8,    8, 0x08,
     135,    8,    8,    8, 0x08,
     162,    8,    8,    8, 0x08,
     188,    8,    8,    8, 0x08,
     220,  215,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_setting[] = {
    "setting\0\0on_bt_config_setttings_clicked()\0"
    "on_factory_button_clicked()\0"
    "on_sensor_show_button_clicked()\0"
    "on_setting_hide_button_clicked()\0"
    "on_telnet_button_clicked()\0"
    "on_reset_button_clicked()\0"
    "on_return_button_clicked()\0flag\0"
    "show_recover_button(bool)\0"
};

const QMetaObject setting::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_setting,
      qt_meta_data_setting, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &setting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *setting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *setting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_setting))
        return static_cast<void*>(const_cast< setting*>(this));
    return QDialog::qt_metacast(_clname);
}

int setting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_bt_config_setttings_clicked(); break;
        case 1: on_factory_button_clicked(); break;
        case 2: on_sensor_show_button_clicked(); break;
        case 3: on_setting_hide_button_clicked(); break;
        case 4: on_telnet_button_clicked(); break;
        case 5: on_reset_button_clicked(); break;
        case 6: on_return_button_clicked(); break;
        case 7: show_recover_button((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
