/****************************************************************************
** Meta object code from reading C++ file 'system.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Controllers/system.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSystemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSystemENDCLASS = QtMocHelpers::stringData(
    "System",
    "carlockedChanged",
    "",
    "outdoorTempChanged",
    "userNameChanged",
    "currentTimeChanged",
    "sunrooflockedChanged",
    "tractionControlChanged",
    "setCarlocked",
    "newCarlocked",
    "setSunrooflocked",
    "newSunrooflocked",
    "setTractionControl",
    "newTractionControl",
    "carlocked",
    "outdoorTemp",
    "userName",
    "currentTime",
    "sunrooflocked",
    "tractionControl"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSystemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   83, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    7 /* Public */,
       3,    0,   69,    2, 0x06,    8 /* Public */,
       4,    0,   70,    2, 0x06,    9 /* Public */,
       5,    0,   71,    2, 0x06,   10 /* Public */,
       6,    0,   72,    2, 0x06,   11 /* Public */,
       7,    0,   73,    2, 0x06,   12 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   74,    2, 0x02,   13 /* Public */,
      10,    1,   77,    2, 0x02,   15 /* Public */,
      12,    1,   80,    2, 0x02,   17 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00015903, uint(0), 0,
      15, QMetaType::Int, 0x00015903, uint(1), 0,
      16, QMetaType::QString, 0x00015903, uint(2), 0,
      17, QMetaType::QString, 0x00015903, uint(3), 0,
      18, QMetaType::Bool, 0x00015903, uint(4), 0,
      19, QMetaType::Bool, 0x00015903, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject System::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSystemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSystemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSystemENDCLASS_t,
        // property 'carlocked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'outdoorTemp'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'userName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentTime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sunrooflocked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tractionControl'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<System, std::true_type>,
        // method 'carlockedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'outdoorTempChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sunrooflockedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tractionControlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCarlocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSunrooflocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setTractionControl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void System::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->carlockedChanged(); break;
        case 1: _t->outdoorTempChanged(); break;
        case 2: _t->userNameChanged(); break;
        case 3: _t->currentTimeChanged(); break;
        case 4: _t->sunrooflockedChanged(); break;
        case 5: _t->tractionControlChanged(); break;
        case 6: _t->setCarlocked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setSunrooflocked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setTractionControl((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::carlockedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::outdoorTempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::userNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::currentTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::sunrooflockedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::tractionControlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->carlocked(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->outdoorTemp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->currentTime(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->sunrooflocked(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->tractionControl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCarlocked(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setOutdoorTemp(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurrentTime(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setSunrooflocked(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setTractionControl(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *System::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *System::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSystemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int System::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void System::carlockedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void System::outdoorTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void System::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void System::currentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void System::sunrooflockedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void System::tractionControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
