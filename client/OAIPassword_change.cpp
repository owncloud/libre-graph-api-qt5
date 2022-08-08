// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.16.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIPassword_change.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIPassword_changePrivate {
    friend class OAIPassword_change;

     QString current_password;
     bool current_password_isSet;
     bool current_password_isValid;

     QString new_password;
     bool new_password_isSet;
     bool new_password_isValid;
};

OAIPassword_change::OAIPassword_change()
    : d_ptr()
{
}

OAIPassword_change::OAIPassword_change(const OAIPassword_change& other)
    : d_ptr(other.d_ptr)
{
}

OAIPassword_change::OAIPassword_change(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIPassword_change::~OAIPassword_change() = default;

void OAIPassword_change::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIPassword_changePrivate{});

        Q_D(OAIPassword_change);


        d->current_password_isSet = false;
        d->current_password_isValid = false;

        d->new_password_isSet = false;
        d->new_password_isValid = false;
    }
}

void OAIPassword_change::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPassword_change::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIPassword_change);

    d->current_password_isValid = ::OpenAPI::fromJsonValue(d->current_password, json[QString("currentPassword")]);
    d->current_password_isSet = !json[QString("currentPassword")].isNull() && d->current_password_isValid;

    d->new_password_isValid = ::OpenAPI::fromJsonValue(d->new_password, json[QString("newPassword")]);
    d->new_password_isSet = !json[QString("newPassword")].isNull() && d->new_password_isValid;
}

QString OAIPassword_change::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPassword_change::asJsonObject() const {
    Q_D(const OAIPassword_change);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->current_password_isSet) {
        obj.insert(QString("currentPassword"), ::OpenAPI::toJsonValue(d->current_password));
    }
    if (d->new_password_isSet) {
        obj.insert(QString("newPassword"), ::OpenAPI::toJsonValue(d->new_password));
    }
    return obj;
}

QString OAIPassword_change::getCurrentPassword() const {
    Q_D(const OAIPassword_change);
    if(!d){
        return {};
    }
    return d->current_password;
}
void OAIPassword_change::setCurrentPassword(const QString &current_password) {
    Q_D(OAIPassword_change);
    Q_ASSERT(d);

    d->current_password = current_password;
    d->current_password_isSet = true;
}

bool OAIPassword_change::is_current_password_Set() const{
    Q_D(const OAIPassword_change);
    if(!d){
        return false;
    }

    return d->current_password_isSet;
}

bool OAIPassword_change::is_current_password_Valid() const{
    Q_D(const OAIPassword_change);
    if(!d){
        return false;
    }
    return d->current_password_isValid;
}

QString OAIPassword_change::getNewPassword() const {
    Q_D(const OAIPassword_change);
    if(!d){
        return {};
    }
    return d->new_password;
}
void OAIPassword_change::setNewPassword(const QString &new_password) {
    Q_D(OAIPassword_change);
    Q_ASSERT(d);

    d->new_password = new_password;
    d->new_password_isSet = true;
}

bool OAIPassword_change::is_new_password_Set() const{
    Q_D(const OAIPassword_change);
    if(!d){
        return false;
    }

    return d->new_password_isSet;
}

bool OAIPassword_change::is_new_password_Valid() const{
    Q_D(const OAIPassword_change);
    if(!d){
        return false;
    }
    return d->new_password_isValid;
}

bool OAIPassword_change::isSet() const {
    Q_D(const OAIPassword_change);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->current_password_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->new_password_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPassword_change::isValid() const {
    Q_D(const OAIPassword_change);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
