/****************************************************************************
** Meta object code from reading C++ file 'QHighPass.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../auverdionControl/src/QHighPass.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QHighPass.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QHighPass_t {
    QByteArrayData data[6];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHighPass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHighPass_t qt_meta_stringdata_QHighPass = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QHighPass"
QT_MOC_LITERAL(1, 10, 31), // "on_doubleSpinBoxFc_valueChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 35), // "on_comboBoxType_currentIndexC..."
QT_MOC_LITERAL(4, 79, 27), // "on_pushButtonBypass_clicked"
QT_MOC_LITERAL(5, 107, 9) // "updateDsp"

    },
    "QHighPass\0on_doubleSpinBoxFc_valueChanged\0"
    "\0on_comboBoxType_currentIndexChanged\0"
    "on_pushButtonBypass_clicked\0updateDsp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHighPass[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       3,    1,   37,    2, 0x08 /* Private */,
       4,    0,   40,    2, 0x08 /* Private */,
       5,    0,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QHighPass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QHighPass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_doubleSpinBoxFc_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->on_comboBoxType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButtonBypass_clicked(); break;
        case 3: _t->updateDsp(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QHighPass::staticMetaObject = { {
    &QDspBlock::staticMetaObject,
    qt_meta_stringdata_QHighPass.data,
    qt_meta_data_QHighPass,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QHighPass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHighPass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHighPass.stringdata0))
        return static_cast<void*>(this);
    return QDspBlock::qt_metacast(_clname);
}

int QHighPass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDspBlock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE