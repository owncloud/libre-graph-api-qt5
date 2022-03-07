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

#include "OAIIdentitySet.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIIdentitySetPrivate {
    friend class OAIIdentitySet;

     OAIIdentity application;
     bool application_isSet;
     bool application_isValid;

     OAIIdentity device;
     bool device_isSet;
     bool device_isValid;

     OAIIdentity user;
     bool user_isSet;
     bool user_isValid;
};

OAIIdentitySet::OAIIdentitySet()
    : d_ptr()
{
}

OAIIdentitySet::OAIIdentitySet(const OAIIdentitySet& other)
    : d_ptr(other.d_ptr)
{
}

OAIIdentitySet::OAIIdentitySet(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIIdentitySet::~OAIIdentitySet() = default;

void OAIIdentitySet::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIIdentitySetPrivate{});

        Q_D(OAIIdentitySet);


        d->application_isSet = false;
        d->application_isValid = false;

        d->device_isSet = false;
        d->device_isValid = false;

        d->user_isSet = false;
        d->user_isValid = false;
    }
}

void OAIIdentitySet::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIIdentitySet::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIIdentitySet);

    d->application_isValid = ::OpenAPI::fromJsonValue(d->application, json[QString("application")]);
    d->application_isSet = !json[QString("application")].isNull() && d->application_isValid;

    d->device_isValid = ::OpenAPI::fromJsonValue(d->device, json[QString("device")]);
    d->device_isSet = !json[QString("device")].isNull() && d->device_isValid;

    d->user_isValid = ::OpenAPI::fromJsonValue(d->user, json[QString("user")]);
    d->user_isSet = !json[QString("user")].isNull() && d->user_isValid;
}

QString OAIIdentitySet::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIIdentitySet::asJsonObject() const {
    Q_D(const OAIIdentitySet);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->application.isSet()) {
        obj.insert(QString("application"), ::OpenAPI::toJsonValue(d->application));
    }
    if (d->device.isSet()) {
        obj.insert(QString("device"), ::OpenAPI::toJsonValue(d->device));
    }
    if (d->user.isSet()) {
        obj.insert(QString("user"), ::OpenAPI::toJsonValue(d->user));
    }
    return obj;
}

OAIIdentity OAIIdentitySet::getApplication() const {
    Q_D(const OAIIdentitySet);
    if(!d){
        return {};
    }
    return d->application;
}
void OAIIdentitySet::setApplication(const OAIIdentity &application) {
    Q_D(OAIIdentitySet);
    Q_ASSERT(d);

    d->application = application;
    d->application_isSet = true;
}

bool OAIIdentitySet::is_application_Set() const{
    Q_D(const OAIIdentitySet);
    if(!d){
        return false;
    }

    return d->application_isSet;
}

bool OAIIdentitySet::is_application_Valid() const{
    Q_D(const OAIIdentitySet);
    if(!d){
        return false;
    }
    return d->application_isValid;
}

OAIIdentity OAIIdentitySet::getDevice() const {
    Q_D(const OAIIdentitySet);
    if(!d){
        return {};
    }
    return d->device;
}
void OAIIdentitySet::setDevice(const OAIIdentity &device) {
    Q_D(OAIIdentitySet);
    Q_ASSERT(d);

    d->device = device;
    d->device_isSet = true;
}

bool OAIIdentitySet::is_device_Set() const{
    Q_D(const OAIIdentitySet);
    if(!d){
        return false;
    }

    return d->device_isSet;
}

bool OAIIdentitySet::is_device_Valid() const{
    Q_D(const OAIIdentitySet);
    if(!d){
        return false;
    }
    return d->device_isValid;
}

OAIIdentity OAIIdentitySet::getUser() const {
    Q_D(const OAIIdentitySet);
    if(!d){
        return {};
    }
    return d->user;
}
void OAIIdentitySet::setUser(const OAIIdentity &user) {
    Q_D(OAIIdentitySet);
    Q_ASSERT(d);

    d->user = user;
    d->user_isSet = true;
}

bool OAIIdentitySet::is_user_Set() const{
    Q_D(const OAIIdentitySet);
    if(!d){
        return false;
    }

    return d->user_isSet;
}

bool OAIIdentitySet::is_user_Valid() const{
    Q_D(const OAIIdentitySet);
    if(!d){
        return false;
    }
    return d->user_isValid;
}

bool OAIIdentitySet::isSet() const {
    Q_D(const OAIIdentitySet);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->application.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->device.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->user.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIIdentitySet::isValid() const {
    Q_D(const OAIIdentitySet);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
