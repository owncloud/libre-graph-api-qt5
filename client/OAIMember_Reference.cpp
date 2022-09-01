// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.17.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIMember_Reference.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIMember_ReferencePrivate {
    friend class OAIMember_Reference;

     QString odata_id;
     bool odata_id_isSet;
     bool odata_id_isValid;
};

OAIMember_Reference::OAIMember_Reference()
    : d_ptr()
{
}

OAIMember_Reference::OAIMember_Reference(const OAIMember_Reference& other)
    : d_ptr(other.d_ptr)
{
}

OAIMember_Reference::OAIMember_Reference(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIMember_Reference::~OAIMember_Reference() = default;

void OAIMember_Reference::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIMember_ReferencePrivate{});

        Q_D(OAIMember_Reference);


        d->odata_id_isSet = false;
        d->odata_id_isValid = false;
    }
}

void OAIMember_Reference::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMember_Reference::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIMember_Reference);

    d->odata_id_isValid = ::OpenAPI::fromJsonValue(d->odata_id, json[QString("@odata.id")]);
    d->odata_id_isSet = !json[QString("@odata.id")].isNull() && d->odata_id_isValid;
}

QString OAIMember_Reference::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMember_Reference::asJsonObject() const {
    Q_D(const OAIMember_Reference);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->odata_id_isSet) {
        obj.insert(QString("@odata.id"), ::OpenAPI::toJsonValue(d->odata_id));
    }
    return obj;
}

QString OAIMember_Reference::getOdataId() const {
    Q_D(const OAIMember_Reference);
    if(!d){
        return {};
    }
    return d->odata_id;
}
void OAIMember_Reference::setOdataId(const QString &odata_id) {
    Q_D(OAIMember_Reference);
    Q_ASSERT(d);

    d->odata_id = odata_id;
    d->odata_id_isSet = true;
}

bool OAIMember_Reference::is_odata_id_Set() const{
    Q_D(const OAIMember_Reference);
    if(!d){
        return false;
    }

    return d->odata_id_isSet;
}

bool OAIMember_Reference::is_odata_id_Valid() const{
    Q_D(const OAIMember_Reference);
    if(!d){
        return false;
    }
    return d->odata_id_isValid;
}

bool OAIMember_Reference::isSet() const {
    Q_D(const OAIMember_Reference);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->odata_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMember_Reference::isValid() const {
    Q_D(const OAIMember_Reference);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
