// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * Libre Graph is a free API for cloud collaboration inspired by the MS Graph API.
 *
 * The version of the OpenAPI document: v1.0.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIObjectIdentity.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIObjectIdentityPrivate {
    friend class OAIObjectIdentity;

     QString issuer;
     bool issuer_isSet;
     bool issuer_isValid;

     QString issuer_assigned_id;
     bool issuer_assigned_id_isSet;
     bool issuer_assigned_id_isValid;
};

OAIObjectIdentity::OAIObjectIdentity()
    : d_ptr()
{
}

OAIObjectIdentity::OAIObjectIdentity(const OAIObjectIdentity& other)
    : d_ptr(other.d_ptr)
{
}

OAIObjectIdentity::OAIObjectIdentity(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIObjectIdentity::~OAIObjectIdentity() = default;

void OAIObjectIdentity::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIObjectIdentityPrivate{});

        Q_D(OAIObjectIdentity);


        d->issuer_isSet = false;
        d->issuer_isValid = false;

        d->issuer_assigned_id_isSet = false;
        d->issuer_assigned_id_isValid = false;
    }
}

void OAIObjectIdentity::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIObjectIdentity::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIObjectIdentity);

    d->issuer_isValid = ::OpenAPI::fromJsonValue(d->issuer, json[QString("issuer")]);
    d->issuer_isSet = !json[QString("issuer")].isNull() && d->issuer_isValid;

    d->issuer_assigned_id_isValid = ::OpenAPI::fromJsonValue(d->issuer_assigned_id, json[QString("issuerAssignedId")]);
    d->issuer_assigned_id_isSet = !json[QString("issuerAssignedId")].isNull() && d->issuer_assigned_id_isValid;
}

QString OAIObjectIdentity::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIObjectIdentity::asJsonObject() const {
    Q_D(const OAIObjectIdentity);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->issuer_isSet) {
        obj.insert(QString("issuer"), ::OpenAPI::toJsonValue(d->issuer));
    }
    if (d->issuer_assigned_id_isSet) {
        obj.insert(QString("issuerAssignedId"), ::OpenAPI::toJsonValue(d->issuer_assigned_id));
    }
    return obj;
}

QString OAIObjectIdentity::getIssuer() const {
    Q_D(const OAIObjectIdentity);
    if(!d){
        return {};
    }
    return d->issuer;
}
void OAIObjectIdentity::setIssuer(const QString &issuer) {
    Q_D(OAIObjectIdentity);
    Q_ASSERT(d);

    d->issuer = issuer;
    d->issuer_isSet = true;
}

bool OAIObjectIdentity::is_issuer_Set() const{
    Q_D(const OAIObjectIdentity);
    if(!d){
        return false;
    }

    return d->issuer_isSet;
}

bool OAIObjectIdentity::is_issuer_Valid() const{
    Q_D(const OAIObjectIdentity);
    if(!d){
        return false;
    }
    return d->issuer_isValid;
}

QString OAIObjectIdentity::getIssuerAssignedId() const {
    Q_D(const OAIObjectIdentity);
    if(!d){
        return {};
    }
    return d->issuer_assigned_id;
}
void OAIObjectIdentity::setIssuerAssignedId(const QString &issuer_assigned_id) {
    Q_D(OAIObjectIdentity);
    Q_ASSERT(d);

    d->issuer_assigned_id = issuer_assigned_id;
    d->issuer_assigned_id_isSet = true;
}

bool OAIObjectIdentity::is_issuer_assigned_id_Set() const{
    Q_D(const OAIObjectIdentity);
    if(!d){
        return false;
    }

    return d->issuer_assigned_id_isSet;
}

bool OAIObjectIdentity::is_issuer_assigned_id_Valid() const{
    Q_D(const OAIObjectIdentity);
    if(!d){
        return false;
    }
    return d->issuer_assigned_id_isValid;
}

bool OAIObjectIdentity::isSet() const {
    Q_D(const OAIObjectIdentity);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->issuer_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->issuer_assigned_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIObjectIdentity::isValid() const {
    Q_D(const OAIObjectIdentity);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
