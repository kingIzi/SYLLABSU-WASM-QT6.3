/****************************************************************************
** Meta object code from reading C++ file 'booklist.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../syllabus/include/booklist.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'booklist.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BookList_t {
    const uint offsetsAndSize[28];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BookList_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BookList_t qt_meta_stringdata_BookList = {
    {
QT_MOC_LITERAL(0, 8), // "BookList"
QT_MOC_LITERAL(9, 17), // "categoriesChanged"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 15), // "navItemsChanged"
QT_MOC_LITERAL(44, 13), // "setCategories"
QT_MOC_LITERAL(58, 15), // "CategoriesList*"
QT_MOC_LITERAL(74, 13), // "newCategories"
QT_MOC_LITERAL(88, 11), // "setNavItems"
QT_MOC_LITERAL(100, 8), // "navItems"
QT_MOC_LITERAL(109, 34), // "getCategoryIconUrlFromSyllabu..."
QT_MOC_LITERAL(144, 12), // "syllabusName"
QT_MOC_LITERAL(157, 32), // "getCategoryColorFromSyllabusName"
QT_MOC_LITERAL(190, 31), // "getCategoryNameFromSyllabusName"
QT_MOC_LITERAL(222, 10) // "categories"

    },
    "BookList\0categoriesChanged\0\0navItemsChanged\0"
    "setCategories\0CategoriesList*\0"
    "newCategories\0setNavItems\0navItems\0"
    "getCategoryIconUrlFromSyllabusName\0"
    "syllabusName\0getCategoryColorFromSyllabusName\0"
    "getCategoryNameFromSyllabusName\0"
    "categories"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookList[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   73, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    3 /* Public */,
       3,    0,   57,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   58,    2, 0x0a,    5 /* Public */,
       7,    1,   61,    2, 0x0a,    7 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   64,    2, 0x102,    9 /* Public | MethodIsConst  */,
      11,    1,   67,    2, 0x102,   11 /* Public | MethodIsConst  */,
      12,    1,   70,    2, 0x102,   13 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QStringList,    8,

 // methods: parameters
    QMetaType::QVariant, QMetaType::QString,   10,
    QMetaType::QVariant, QMetaType::QString,   10,
    QMetaType::QVariant, QMetaType::QString,   10,

 // properties: name, type, flags
      13, 0x80000000 | 5, 0x0001510b, uint(0), 0,
       8, QMetaType::QStringList, 0x00015103, uint(1), 0,

       0        // eod
};

void BookList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BookList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->categoriesChanged(); break;
        case 1: _t->navItemsChanged(); break;
        case 2: _t->setCategories((*reinterpret_cast< std::add_pointer_t<CategoriesList*>>(_a[1]))); break;
        case 3: _t->setNavItems((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 4: { QVariant _r = _t->getCategoryIconUrlFromSyllabusName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVariant _r = _t->getCategoryColorFromSyllabusName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVariant _r = _t->getCategoryNameFromSyllabusName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CategoriesList* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BookList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookList::categoriesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BookList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookList::navItemsChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CategoriesList* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BookList *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CategoriesList**>(_v) = _t->categories(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->navItems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BookList *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCategories(*reinterpret_cast< CategoriesList**>(_v)); break;
        case 1: _t->setNavItems(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BookList::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_BookList.offsetsAndSize,
    qt_meta_data_BookList,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BookList_t
, QtPrivate::TypeAndForceComplete<CategoriesList*, std::true_type>, QtPrivate::TypeAndForceComplete<QStringList, std::true_type>, QtPrivate::TypeAndForceComplete<BookList, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<CategoriesList *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>
, QtPrivate::TypeAndForceComplete<QVariant, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<QVariant, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<QVariant, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>

>,
    nullptr
} };


const QMetaObject *BookList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BookList.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int BookList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
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
void BookList::categoriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BookList::navItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
