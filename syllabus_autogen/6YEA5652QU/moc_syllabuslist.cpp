/****************************************************************************
** Meta object code from reading C++ file 'syllabuslist.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../syllabus/include/syllabuslist.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syllabuslist.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SyllabusList_t {
    const uint offsetsAndSize[20];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SyllabusList_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SyllabusList_t qt_meta_stringdata_SyllabusList = {
    {
QT_MOC_LITERAL(0, 12), // "SyllabusList"
QT_MOC_LITERAL(13, 15), // "preItemAppended"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 16), // "postItemAppended"
QT_MOC_LITERAL(47, 14), // "preItemRemoved"
QT_MOC_LITERAL(62, 5), // "index"
QT_MOC_LITERAL(68, 15), // "postItemRemoved"
QT_MOC_LITERAL(84, 11), // "addSyllabus"
QT_MOC_LITERAL(96, 17), // "SyllabusList::Ptr"
QT_MOC_LITERAL(114, 8) // "syllabus"

    },
    "SyllabusList\0preItemAppended\0\0"
    "postItemAppended\0preItemRemoved\0index\0"
    "postItemRemoved\0addSyllabus\0"
    "SyllabusList::Ptr\0syllabus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SyllabusList[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    1,   46,    2, 0x06,    3 /* Public */,
       6,    0,   49,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   50,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void SyllabusList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SyllabusList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->preItemAppended(); break;
        case 1: _t->postItemAppended(); break;
        case 2: _t->preItemRemoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->postItemRemoved(); break;
        case 4: _t->addSyllabus((*reinterpret_cast< std::add_pointer_t<SyllabusList::Ptr>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SyllabusList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyllabusList::preItemAppended)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SyllabusList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyllabusList::postItemAppended)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SyllabusList::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyllabusList::preItemRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SyllabusList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyllabusList::postItemRemoved)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject SyllabusList::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SyllabusList.offsetsAndSize,
    qt_meta_data_SyllabusList,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SyllabusList_t
, QtPrivate::TypeAndForceComplete<SyllabusList, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<SyllabusList::Ptr, std::false_type>


>,
    nullptr
} };


const QMetaObject *SyllabusList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyllabusList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SyllabusList.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SyllabusList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SyllabusList::preItemAppended()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SyllabusList::postItemAppended()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SyllabusList::preItemRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SyllabusList::postItemRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
