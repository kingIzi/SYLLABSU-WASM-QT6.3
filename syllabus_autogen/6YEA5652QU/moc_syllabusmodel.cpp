/****************************************************************************
** Meta object code from reading C++ file 'syllabusmodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../syllabus/include/syllabusmodel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syllabusmodel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SyllabusModel_t {
    const uint offsetsAndSize[22];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SyllabusModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SyllabusModel_t qt_meta_stringdata_SyllabusModel = {
    {
QT_MOC_LITERAL(0, 13), // "SyllabusModel"
QT_MOC_LITERAL(14, 19), // "syllabusListChanged"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 14), // "isEmptyChanged"
QT_MOC_LITERAL(50, 15), // "setSyllabusList"
QT_MOC_LITERAL(66, 13), // "SyllabusList*"
QT_MOC_LITERAL(80, 15), // "newSyllabusList"
QT_MOC_LITERAL(96, 10), // "setIsEmpty"
QT_MOC_LITERAL(107, 5), // "empty"
QT_MOC_LITERAL(113, 12), // "syllabusList"
QT_MOC_LITERAL(126, 7) // "isEmpty"

    },
    "SyllabusModel\0syllabusListChanged\0\0"
    "isEmptyChanged\0setSyllabusList\0"
    "SyllabusList*\0newSyllabusList\0setIsEmpty\0"
    "empty\0syllabusList\0isEmpty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SyllabusModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    3 /* Public */,
       3,    0,   39,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   40,    2, 0x0a,    5 /* Public */,
       7,    1,   43,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // properties: name, type, flags
       9, 0x80000000 | 5, 0x0001510b, uint(0), 0,
      10, QMetaType::Bool, 0x00015103, uint(1), 0,

       0        // eod
};

void SyllabusModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SyllabusModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->syllabusListChanged(); break;
        case 1: _t->isEmptyChanged(); break;
        case 2: _t->setSyllabusList((*reinterpret_cast< std::add_pointer_t<SyllabusList*>>(_a[1]))); break;
        case 3: _t->setIsEmpty((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SyllabusList* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SyllabusModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyllabusModel::syllabusListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SyllabusModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyllabusModel::isEmptyChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SyllabusList* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SyllabusModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SyllabusList**>(_v) = _t->syllabusList(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isEmpty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SyllabusModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSyllabusList(*reinterpret_cast< SyllabusList**>(_v)); break;
        case 1: _t->setIsEmpty(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SyllabusModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_SyllabusModel.offsetsAndSize,
    qt_meta_data_SyllabusModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SyllabusModel_t
, QtPrivate::TypeAndForceComplete<SyllabusList*, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<SyllabusModel, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<SyllabusList *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *SyllabusModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyllabusModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SyllabusModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int SyllabusModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SyllabusModel::syllabusListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SyllabusModel::isEmptyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
