/****************************************************************************
** Meta object code from reading C++ file 'requests.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../syllabus/include/requests.hpp"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'requests.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_REQUESTS__Requests_t {
    const uint offsetsAndSize[62];
    char stringdata0[515];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_REQUESTS__Requests_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_REQUESTS__Requests_t qt_meta_stringdata_REQUESTS__Requests = {
    {
QT_MOC_LITERAL(0, 18), // "REQUESTS::Requests"
QT_MOC_LITERAL(19, 14), // "signUpResponse"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 17), // "REQDATA::Document"
QT_MOC_LITERAL(53, 14), // "signInResponse"
QT_MOC_LITERAL(68, 16), // "userDataResponse"
QT_MOC_LITERAL(85, 25), // "verificationEmailResponse"
QT_MOC_LITERAL(111, 13), // "allCategories"
QT_MOC_LITERAL(125, 16), // "categoryMaterial"
QT_MOC_LITERAL(142, 15), // "addUserResponse"
QT_MOC_LITERAL(158, 16), // "allUsersResponse"
QT_MOC_LITERAL(175, 13), // "savedSyllabus"
QT_MOC_LITERAL(189, 12), // "allFavorites"
QT_MOC_LITERAL(202, 19), // "yearStudiesResponse"
QT_MOC_LITERAL(222, 21), // "requestUploadSyllabus"
QT_MOC_LITERAL(244, 3), // "obj"
QT_MOC_LITERAL(248, 23), // "syllabusDocumentCreated"
QT_MOC_LITERAL(272, 6), // "userId"
QT_MOC_LITERAL(279, 23), // "onRequestUploadSyllabus"
QT_MOC_LITERAL(303, 15), // "onRequestSignUp"
QT_MOC_LITERAL(319, 15), // "onRequestSignIn"
QT_MOC_LITERAL(335, 17), // "onRequestUserData"
QT_MOC_LITERAL(353, 26), // "onRequestVerificationEmail"
QT_MOC_LITERAL(380, 22), // "onRequestAllCategories"
QT_MOC_LITERAL(403, 25), // "onRequestCategoryMaterial"
QT_MOC_LITERAL(429, 4), // "name"
QT_MOC_LITERAL(434, 9), // "onAddUser"
QT_MOC_LITERAL(444, 3), // "map"
QT_MOC_LITERAL(448, 20), // "onRequestUserProfile"
QT_MOC_LITERAL(469, 24), // "onRequestSyllabusByNames"
QT_MOC_LITERAL(494, 20) // "onRequestYearStudies"

    },
    "REQUESTS::Requests\0signUpResponse\0\0"
    "REQDATA::Document\0signInResponse\0"
    "userDataResponse\0verificationEmailResponse\0"
    "allCategories\0categoryMaterial\0"
    "addUserResponse\0allUsersResponse\0"
    "savedSyllabus\0allFavorites\0"
    "yearStudiesResponse\0requestUploadSyllabus\0"
    "obj\0syllabusDocumentCreated\0userId\0"
    "onRequestUploadSyllabus\0onRequestSignUp\0"
    "onRequestSignIn\0onRequestUserData\0"
    "onRequestVerificationEmail\0"
    "onRequestAllCategories\0onRequestCategoryMaterial\0"
    "name\0onAddUser\0map\0onRequestUserProfile\0"
    "onRequestSyllabusByNames\0onRequestYearStudies"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_REQUESTS__Requests[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  164,    2, 0x06,    1 /* Public */,
       4,    1,  167,    2, 0x06,    3 /* Public */,
       5,    1,  170,    2, 0x06,    5 /* Public */,
       6,    1,  173,    2, 0x06,    7 /* Public */,
       7,    1,  176,    2, 0x06,    9 /* Public */,
       8,    1,  179,    2, 0x06,   11 /* Public */,
       9,    1,  182,    2, 0x06,   13 /* Public */,
      10,    2,  185,    2, 0x06,   15 /* Public */,
      11,    1,  190,    2, 0x06,   18 /* Public */,
      12,    1,  193,    2, 0x06,   20 /* Public */,
      13,    1,  196,    2, 0x06,   22 /* Public */,
      14,    2,  199,    2, 0x06,   24 /* Public */,
      16,    1,  204,    2, 0x06,   27 /* Public */,
      17,    1,  207,    2, 0x06,   29 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      18,    2,  210,    2, 0x08,   31 /* Private */,
      19,    2,  215,    2, 0x0a,   34 /* Public */,
      20,    2,  220,    2, 0x0a,   37 /* Public */,
      21,    0,  225,    2, 0x0a,   40 /* Public */,
      22,    0,  226,    2, 0x0a,   41 /* Public */,
      23,    0,  227,    2, 0x0a,   42 /* Public */,
      24,    1,  228,    2, 0x0a,   43 /* Public */,
      26,    1,  231,    2, 0x0a,   45 /* Public */,
      28,    0,  234,    2, 0x0a,   47 /* Public */,
      29,    1,  235,    2, 0x0a,   48 /* Public */,
      30,    0,  238,    2, 0x0a,   50 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::QJsonObject,    2,   15,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, QMetaType::QVariantMap,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::QJsonObject,    2,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QVariantMap,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,

       0        // eod
};

void REQUESTS::Requests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Requests *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signUpResponse((*reinterpret_cast< std::add_pointer_t<REQDATA::Document>>(_a[1]))); break;
        case 1: _t->signInResponse((*reinterpret_cast< std::add_pointer_t<REQDATA::Document>>(_a[1]))); break;
        case 2: _t->userDataResponse((*reinterpret_cast< std::add_pointer_t<REQDATA::Document>>(_a[1]))); break;
        case 3: _t->verificationEmailResponse((*reinterpret_cast< std::add_pointer_t<REQDATA::Document>>(_a[1]))); break;
        case 4: _t->allCategories((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 5: _t->categoryMaterial((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 6: _t->addUserResponse((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 7: _t->allUsersResponse((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->savedSyllabus((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 9: _t->allFavorites((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 10: _t->yearStudiesResponse((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 11: _t->requestUploadSyllabus((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 12: _t->syllabusDocumentCreated((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 13: _t->userId((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 14: _t->onRequestUploadSyllabus((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 15: _t->onRequestSignUp((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->onRequestSignIn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: _t->onRequestUserData(); break;
        case 18: _t->onRequestVerificationEmail(); break;
        case 19: _t->onRequestAllCategories(); break;
        case 20: _t->onRequestCategoryMaterial((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->onAddUser((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 22: _t->onRequestUserProfile(); break;
        case 23: _t->onRequestSyllabusByNames((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 24: _t->onRequestYearStudies(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Requests::*)(const REQDATA::Document & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::signUpResponse)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const REQDATA::Document & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::signInResponse)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const REQDATA::Document & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::userDataResponse)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const REQDATA::Document & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::verificationEmailResponse)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const QJsonDocument & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::allCategories)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const QJsonDocument & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::categoryMaterial)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const QJsonDocument );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::addUserResponse)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const QJsonDocument , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::allUsersResponse)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const QJsonDocument );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::savedSyllabus)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const QJsonDocument );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::allFavorites)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const QJsonDocument & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::yearStudiesResponse)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const QJsonDocument & , QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::requestUploadSyllabus)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Requests::*)(const QJsonDocument & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::syllabusDocumentCreated)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Requests::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Requests::userId)) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject REQUESTS::Requests::staticMetaObject = { {
    QMetaObject::SuperData::link<REQUESTSHANDLER::RequestsHandler::staticMetaObject>(),
    qt_meta_stringdata_REQUESTS__Requests.offsetsAndSize,
    qt_meta_data_REQUESTS__Requests,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_REQUESTS__Requests_t
, QtPrivate::TypeAndForceComplete<Requests, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const REQDATA::Document &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const REQDATA::Document &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const REQDATA::Document &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const REQDATA::Document &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonDocument, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonDocument, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonDocument, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonDocument, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *REQUESTS::Requests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *REQUESTS::Requests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_REQUESTS__Requests.stringdata0))
        return static_cast<void*>(this);
    return REQUESTSHANDLER::RequestsHandler::qt_metacast(_clname);
}

int REQUESTS::Requests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = REQUESTSHANDLER::RequestsHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void REQUESTS::Requests::signUpResponse(const REQDATA::Document & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void REQUESTS::Requests::signInResponse(const REQDATA::Document & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void REQUESTS::Requests::userDataResponse(const REQDATA::Document & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void REQUESTS::Requests::verificationEmailResponse(const REQDATA::Document & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void REQUESTS::Requests::allCategories(const QJsonDocument & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void REQUESTS::Requests::categoryMaterial(const QJsonDocument & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void REQUESTS::Requests::addUserResponse(const QJsonDocument _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void REQUESTS::Requests::allUsersResponse(const QJsonDocument _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void REQUESTS::Requests::savedSyllabus(const QJsonDocument _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void REQUESTS::Requests::allFavorites(const QJsonDocument _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void REQUESTS::Requests::yearStudiesResponse(const QJsonDocument & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void REQUESTS::Requests::requestUploadSyllabus(const QJsonDocument & _t1, QJsonObject _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void REQUESTS::Requests::syllabusDocumentCreated(const QJsonDocument & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void REQUESTS::Requests::userId(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
