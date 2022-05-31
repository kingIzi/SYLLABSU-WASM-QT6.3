/****************************************************************************
** Meta object code from reading C++ file 'user.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../syllabus/include/user.hpp"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_USR__ErrorMessage_t {
    const uint offsetsAndSize[4];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_USR__ErrorMessage_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_USR__ErrorMessage_t qt_meta_stringdata_USR__ErrorMessage = {
    {
QT_MOC_LITERAL(0, 17), // "USR::ErrorMessage"
QT_MOC_LITERAL(18, 7) // "message"

    },
    "USR::ErrorMessage\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_USR__ErrorMessage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015003, uint(-1), 0,

       0        // eod
};

void USR::ErrorMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<ErrorMessage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->message; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<ErrorMessage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->message != *reinterpret_cast< QString*>(_v)) {
                _t->message = *reinterpret_cast< QString*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject USR::ErrorMessage::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_USR__ErrorMessage.offsetsAndSize,
    qt_meta_data_USR__ErrorMessage,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_USR__ErrorMessage_t
, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<ErrorMessage, std::true_type>



>,
    nullptr
} };

struct qt_meta_stringdata_USR__User_t {
    const uint offsetsAndSize[104];
    char stringdata0[812];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_USR__User_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_USR__User_t qt_meta_stringdata_USR__User = {
    {
QT_MOC_LITERAL(0, 9), // "USR::User"
QT_MOC_LITERAL(10, 19), // "signUpFailedMessage"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 17), // "USR::ErrorMessage"
QT_MOC_LITERAL(49, 16), // "isLogedInChanged"
QT_MOC_LITERAL(66, 13), // "requestSignUp"
QT_MOC_LITERAL(80, 13), // "requestSignIn"
QT_MOC_LITERAL(94, 15), // "requestUserData"
QT_MOC_LITERAL(110, 24), // "requestVerificationEmail"
QT_MOC_LITERAL(135, 18), // "requestUserProfile"
QT_MOC_LITERAL(154, 17), // "isVerifiedChanged"
QT_MOC_LITERAL(172, 5), // "login"
QT_MOC_LITERAL(178, 20), // "requestAllCategories"
QT_MOC_LITERAL(199, 23), // "requestCategoryMaterial"
QT_MOC_LITERAL(223, 14), // "categoriesList"
QT_MOC_LITERAL(238, 15), // "CategoriesList*"
QT_MOC_LITERAL(254, 12), // "syllabusList"
QT_MOC_LITERAL(267, 13), // "SyllabusList*"
QT_MOC_LITERAL(281, 13), // "favoritesList"
QT_MOC_LITERAL(295, 20), // "saveFavoriteSyllabus"
QT_MOC_LITERAL(316, 7), // "addUser"
QT_MOC_LITERAL(324, 3), // "map"
QT_MOC_LITERAL(328, 16), // "favoritesUpdated"
QT_MOC_LITERAL(345, 22), // "requestSyllabusByNames"
QT_MOC_LITERAL(368, 18), // "requestYearStudies"
QT_MOC_LITERAL(387, 16), // "favoritesChanged"
QT_MOC_LITERAL(404, 18), // "yearStudiesChanged"
QT_MOC_LITERAL(423, 13), // "setIsVerified"
QT_MOC_LITERAL(437, 8), // "verified"
QT_MOC_LITERAL(446, 22), // "onSaveFavoriteSyllabus"
QT_MOC_LITERAL(469, 12), // "setFavorites"
QT_MOC_LITERAL(482, 9), // "favorites"
QT_MOC_LITERAL(492, 14), // "setYearStudies"
QT_MOC_LITERAL(507, 11), // "yearStudies"
QT_MOC_LITERAL(519, 14), // "uploadSyllabus"
QT_MOC_LITERAL(534, 12), // "setIsLogedIn"
QT_MOC_LITERAL(547, 5), // "logIn"
QT_MOC_LITERAL(553, 24), // "onSavedSyllabusesUpdated"
QT_MOC_LITERAL(578, 22), // "onSignUpFailedResponse"
QT_MOC_LITERAL(601, 18), // "onSignInSuccessful"
QT_MOC_LITERAL(620, 7), // "profile"
QT_MOC_LITERAL(628, 18), // "onSignUpSuccessful"
QT_MOC_LITERAL(647, 29), // "onSendVerificationEmailFailed"
QT_MOC_LITERAL(677, 33), // "onSendVerificationEmailSucces..."
QT_MOC_LITERAL(711, 15), // "onAllCategories"
QT_MOC_LITERAL(727, 18), // "onCategoryMaterial"
QT_MOC_LITERAL(746, 7), // "onLogin"
QT_MOC_LITERAL(754, 19), // "onFavoriteMaterials"
QT_MOC_LITERAL(774, 9), // "setUserId"
QT_MOC_LITERAL(784, 6), // "userId"
QT_MOC_LITERAL(791, 10), // "isVerified"
QT_MOC_LITERAL(802, 9) // "isLogedIn"

    },
    "USR::User\0signUpFailedMessage\0\0"
    "USR::ErrorMessage\0isLogedInChanged\0"
    "requestSignUp\0requestSignIn\0requestUserData\0"
    "requestVerificationEmail\0requestUserProfile\0"
    "isVerifiedChanged\0login\0requestAllCategories\0"
    "requestCategoryMaterial\0categoriesList\0"
    "CategoriesList*\0syllabusList\0SyllabusList*\0"
    "favoritesList\0saveFavoriteSyllabus\0"
    "addUser\0map\0favoritesUpdated\0"
    "requestSyllabusByNames\0requestYearStudies\0"
    "favoritesChanged\0yearStudiesChanged\0"
    "setIsVerified\0verified\0onSaveFavoriteSyllabus\0"
    "setFavorites\0favorites\0setYearStudies\0"
    "yearStudies\0uploadSyllabus\0setIsLogedIn\0"
    "logIn\0onSavedSyllabusesUpdated\0"
    "onSignUpFailedResponse\0onSignInSuccessful\0"
    "profile\0onSignUpSuccessful\0"
    "onSendVerificationEmailFailed\0"
    "onSendVerificationEmailSuccessful\0"
    "onAllCategories\0onCategoryMaterial\0"
    "onLogin\0onFavoriteMaterials\0setUserId\0"
    "userId\0isVerified\0isLogedIn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_USR__User[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       4,  342, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  242,    2, 0x06,    5 /* Public */,
       4,    0,  245,    2, 0x06,    7 /* Public */,
       5,    2,  246,    2, 0x06,    8 /* Public */,
       6,    2,  251,    2, 0x06,   11 /* Public */,
       7,    0,  256,    2, 0x06,   14 /* Public */,
       8,    0,  257,    2, 0x06,   15 /* Public */,
       9,    0,  258,    2, 0x06,   16 /* Public */,
      10,    0,  259,    2, 0x06,   17 /* Public */,
      11,    0,  260,    2, 0x06,   18 /* Public */,
      12,    0,  261,    2, 0x06,   19 /* Public */,
      13,    1,  262,    2, 0x06,   20 /* Public */,
      14,    1,  265,    2, 0x06,   22 /* Public */,
      16,    1,  268,    2, 0x06,   24 /* Public */,
      18,    1,  271,    2, 0x06,   26 /* Public */,
      19,    1,  274,    2, 0x06,   28 /* Public */,
      20,    1,  277,    2, 0x06,   30 /* Public */,
      22,    1,  280,    2, 0x06,   32 /* Public */,
      23,    1,  283,    2, 0x06,   34 /* Public */,
      24,    0,  286,    2, 0x06,   36 /* Public */,
      25,    0,  287,    2, 0x06,   37 /* Public */,
      26,    0,  288,    2, 0x06,   38 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      27,    1,  289,    2, 0x0a,   39 /* Public */,
      29,    1,  292,    2, 0x0a,   41 /* Public */,
      30,    1,  295,    2, 0x0a,   43 /* Public */,
      32,    1,  298,    2, 0x0a,   45 /* Public */,
      34,    6,  301,    2, 0x0a,   47 /* Public */,
      35,    1,  314,    2, 0x0a,   54 /* Public */,
      37,    0,  317,    2, 0x08,   56 /* Private */,
      38,    1,  318,    2, 0x08,   57 /* Private */,
      39,    1,  321,    2, 0x08,   59 /* Private */,
      41,    1,  324,    2, 0x08,   61 /* Private */,
      42,    0,  327,    2, 0x08,   63 /* Private */,
      43,    0,  328,    2, 0x08,   64 /* Private */,
      44,    1,  329,    2, 0x08,   65 /* Private */,
      45,    1,  332,    2, 0x08,   67 /* Private */,
      46,    0,  335,    2, 0x08,   69 /* Private */,
      47,    1,  336,    2, 0x08,   70 /* Private */,
      48,    1,  339,    2, 0x08,   72 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QVariantMap,   21,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QStringList,   31,
    QMetaType::Void, QMetaType::QStringList,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QVariantMap,   40,
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, QMetaType::QVariantMap,   49,

 // properties: name, type, flags
      50, QMetaType::Bool, 0x00015103, uint(7), 0,
      31, QMetaType::QStringList, 0x00015103, uint(19), 0,
      33, QMetaType::QStringList, 0x00015103, uint(20), 0,
      51, QMetaType::Bool, 0x00015103, uint(1), 0,

       0        // eod
};

void USR::User::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<User *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signUpFailedMessage((*reinterpret_cast< std::add_pointer_t<USR::ErrorMessage>>(_a[1]))); break;
        case 1: _t->isLogedInChanged(); break;
        case 2: _t->requestSignUp((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->requestSignIn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->requestUserData(); break;
        case 5: _t->requestVerificationEmail(); break;
        case 6: _t->requestUserProfile(); break;
        case 7: _t->isVerifiedChanged(); break;
        case 8: _t->login(); break;
        case 9: _t->requestAllCategories(); break;
        case 10: _t->requestCategoryMaterial((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->categoriesList((*reinterpret_cast< std::add_pointer_t<CategoriesList*>>(_a[1]))); break;
        case 12: _t->syllabusList((*reinterpret_cast< std::add_pointer_t<SyllabusList*>>(_a[1]))); break;
        case 13: _t->favoritesList((*reinterpret_cast< std::add_pointer_t<SyllabusList*>>(_a[1]))); break;
        case 14: _t->saveFavoriteSyllabus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->addUser((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 16: _t->favoritesUpdated((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 17: _t->requestSyllabusByNames((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 18: _t->requestYearStudies(); break;
        case 19: _t->favoritesChanged(); break;
        case 20: _t->yearStudiesChanged(); break;
        case 21: _t->setIsVerified((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->onSaveFavoriteSyllabus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->setFavorites((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 24: _t->setYearStudies((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 25: _t->uploadSyllabus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6]))); break;
        case 26: _t->setIsLogedIn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->onSavedSyllabusesUpdated(); break;
        case 28: _t->onSignUpFailedResponse((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->onSignInSuccessful((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 30: _t->onSignUpSuccessful((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 31: _t->onSendVerificationEmailFailed(); break;
        case 32: _t->onSendVerificationEmailSuccessful(); break;
        case 33: _t->onAllCategories((*reinterpret_cast< std::add_pointer_t<CategoriesList*>>(_a[1]))); break;
        case 34: _t->onCategoryMaterial((*reinterpret_cast< std::add_pointer_t<SyllabusList*>>(_a[1]))); break;
        case 35: _t->onLogin(); break;
        case 36: _t->onFavoriteMaterials((*reinterpret_cast< std::add_pointer_t<SyllabusList*>>(_a[1]))); break;
        case 37: _t->setUserId((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CategoriesList* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SyllabusList* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SyllabusList* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CategoriesList* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SyllabusList* >(); break;
            }
            break;
        case 36:
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
            using _t = void (User::*)(USR::ErrorMessage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::signUpFailedMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::isLogedInChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (User::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::requestSignUp)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (User::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::requestSignIn)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::requestUserData)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::requestVerificationEmail)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::requestUserProfile)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::isVerifiedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::login)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::requestAllCategories)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (User::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::requestCategoryMaterial)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (User::*)(CategoriesList * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::categoriesList)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (User::*)(SyllabusList * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::syllabusList)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (User::*)(SyllabusList * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::favoritesList)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (User::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::saveFavoriteSyllabus)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (User::*)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::addUser)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (User::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::favoritesUpdated)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (User::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::requestSyllabusByNames)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::requestYearStudies)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::favoritesChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&User::yearStudiesChanged)) {
                *result = 20;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<User *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isVerified(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->favorites(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->yearStudies(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isLogedIn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<User *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsVerified(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFavorites(*reinterpret_cast< QStringList*>(_v)); break;
        case 2: _t->setYearStudies(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: _t->setIsLogedIn(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject USR::User::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_USR__User.offsetsAndSize,
    qt_meta_data_USR__User,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_USR__User_t
, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QStringList, std::true_type>, QtPrivate::TypeAndForceComplete<QStringList, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<User, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<USR::ErrorMessage, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<CategoriesList *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<SyllabusList *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<SyllabusList *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<CategoriesList *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<SyllabusList *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<SyllabusList *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>


>,
    nullptr
} };


const QMetaObject *USR::User::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *USR::User::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_USR__User.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int USR::User::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void USR::User::signUpFailedMessage(USR::ErrorMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void USR::User::isLogedInChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void USR::User::requestSignUp(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void USR::User::requestSignIn(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void USR::User::requestUserData()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void USR::User::requestVerificationEmail()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void USR::User::requestUserProfile()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void USR::User::isVerifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void USR::User::login()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void USR::User::requestAllCategories()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void USR::User::requestCategoryMaterial(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void USR::User::categoriesList(CategoriesList * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void USR::User::syllabusList(SyllabusList * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void USR::User::favoritesList(SyllabusList * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void USR::User::saveFavoriteSyllabus(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void USR::User::addUser(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void USR::User::favoritesUpdated(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void USR::User::requestSyllabusByNames(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void USR::User::requestYearStudies()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void USR::User::favoritesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void USR::User::yearStudiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
