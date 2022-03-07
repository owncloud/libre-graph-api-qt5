// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.12.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIPasswordProfile.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIPasswordProfilePrivate {
    friend class OAIPasswordProfile;

     bool force_change_password_next_sign_in;
     bool force_change_password_next_sign_in_isSet;
     bool force_change_password_next_sign_in_isValid;

     QString password;
     bool password_isSet;
     bool password_isValid;
};

OAIPasswordProfile::OAIPasswordProfile()
    : d_ptr()
{
}

OAIPasswordProfile::OAIPasswordProfile(const OAIPasswordProfile& other)
    : d_ptr(other.d_ptr)
{
}

OAIPasswordProfile::OAIPasswordProfile(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIPasswordProfile::~OAIPasswordProfile() = default;

void OAIPasswordProfile::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIPasswordProfilePrivate{});

        Q_D(OAIPasswordProfile);


        d->force_change_password_next_sign_in_isSet = false;
        d->force_change_password_next_sign_in_isValid = false;

        d->password_isSet = false;
        d->password_isValid = false;
    }
}

void OAIPasswordProfile::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPasswordProfile::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIPasswordProfile);

    d->force_change_password_next_sign_in_isValid = ::OpenAPI::fromJsonValue(d->force_change_password_next_sign_in, json[QString("forceChangePasswordNextSignIn")]);
    d->force_change_password_next_sign_in_isSet = !json[QString("forceChangePasswordNextSignIn")].isNull() && d->force_change_password_next_sign_in_isValid;

    d->password_isValid = ::OpenAPI::fromJsonValue(d->password, json[QString("password")]);
    d->password_isSet = !json[QString("password")].isNull() && d->password_isValid;
}

QString OAIPasswordProfile::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPasswordProfile::asJsonObject() const {
    Q_D(const OAIPasswordProfile);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->force_change_password_next_sign_in_isSet) {
        obj.insert(QString("forceChangePasswordNextSignIn"), ::OpenAPI::toJsonValue(d->force_change_password_next_sign_in));
    }
    if (d->password_isSet) {
        obj.insert(QString("password"), ::OpenAPI::toJsonValue(d->password));
    }
    return obj;
}

bool OAIPasswordProfile::isForceChangePasswordNextSignIn() const {
    Q_D(const OAIPasswordProfile);
    if(!d){
        return {};
    }
    return d->force_change_password_next_sign_in;
}
void OAIPasswordProfile::setForceChangePasswordNextSignIn(const bool &force_change_password_next_sign_in) {
    Q_D(OAIPasswordProfile);
    Q_ASSERT(d);

    d->force_change_password_next_sign_in = force_change_password_next_sign_in;
    d->force_change_password_next_sign_in_isSet = true;
}

bool OAIPasswordProfile::is_force_change_password_next_sign_in_Set() const{
    Q_D(const OAIPasswordProfile);
    if(!d){
        return false;
    }

    return d->force_change_password_next_sign_in_isSet;
}

bool OAIPasswordProfile::is_force_change_password_next_sign_in_Valid() const{
    Q_D(const OAIPasswordProfile);
    if(!d){
        return false;
    }
    return d->force_change_password_next_sign_in_isValid;
}

QString OAIPasswordProfile::getPassword() const {
    Q_D(const OAIPasswordProfile);
    if(!d){
        return {};
    }
    return d->password;
}
void OAIPasswordProfile::setPassword(const QString &password) {
    Q_D(OAIPasswordProfile);
    Q_ASSERT(d);

    d->password = password;
    d->password_isSet = true;
}

bool OAIPasswordProfile::is_password_Set() const{
    Q_D(const OAIPasswordProfile);
    if(!d){
        return false;
    }

    return d->password_isSet;
}

bool OAIPasswordProfile::is_password_Valid() const{
    Q_D(const OAIPasswordProfile);
    if(!d){
        return false;
    }
    return d->password_isValid;
}

bool OAIPasswordProfile::isSet() const {
    Q_D(const OAIPasswordProfile);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->force_change_password_next_sign_in_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->password_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPasswordProfile::isValid() const {
    Q_D(const OAIPasswordProfile);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
