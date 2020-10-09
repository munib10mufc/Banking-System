/****************************************************************************
** Meta object code from reading C++ file 'accountsubmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../accountsubmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountsubmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AccountSubMenu_t {
    QByteArrayData data[11];
    char stringdata[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccountSubMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccountSubMenu_t qt_meta_stringdata_AccountSubMenu = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 17),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 29),
QT_MOC_LITERAL(4, 64, 28),
QT_MOC_LITERAL(5, 93, 21),
QT_MOC_LITERAL(6, 115, 20),
QT_MOC_LITERAL(7, 136, 23),
QT_MOC_LITERAL(8, 160, 22),
QT_MOC_LITERAL(9, 183, 22),
QT_MOC_LITERAL(10, 206, 21)
    },
    "AccountSubMenu\0backButtonClicked\0\0"
    "onCreateCurrentAccountClicked\0"
    "onCreateSavingAccountClicked\0"
    "onWithdrawCashCLicked\0onDepositCashClicked\0"
    "onAccountDetailsClicked\0onTransferMoneyClicked\0"
    "onModifyAccountClicked\0onCloseAccountClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountSubMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

       0        // eod
};

void AccountSubMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccountSubMenu *_t = static_cast<AccountSubMenu *>(_o);
        switch (_id) {
        case 0: _t->backButtonClicked(); break;
        case 1: _t->onCreateCurrentAccountClicked(); break;
        case 2: _t->onCreateSavingAccountClicked(); break;
        case 3: _t->onWithdrawCashCLicked(); break;
        case 4: _t->onDepositCashClicked(); break;
        case 5: _t->onAccountDetailsClicked(); break;
        case 6: _t->onTransferMoneyClicked(); break;
        case 7: _t->onModifyAccountClicked(); break;
        case 8: _t->onCloseAccountClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AccountSubMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AccountSubMenu.data,
      qt_meta_data_AccountSubMenu,  qt_static_metacall, 0, 0}
};


const QMetaObject *AccountSubMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountSubMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AccountSubMenu.stringdata))
        return static_cast<void*>(const_cast< AccountSubMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int AccountSubMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
