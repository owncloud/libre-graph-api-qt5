// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1.0.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIClass_Teacher_Reference.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIClass_Teacher_ReferencePrivate {
    friend class OAIClass_Teacher_Reference;

     QString odata_id;
     bool odata_id_isSet;
     bool odata_id_isValid;
};

OAIClass_Teacher_Reference::OAIClass_Teacher_Reference()
    : d_ptr()
{
}

OAIClass_Teacher_Reference::OAIClass_Teacher_Reference(const OAIClass_Teacher_Reference& other)
    : d_ptr(other.d_ptr)
{
}

OAIClass_Teacher_Reference::OAIClass_Teacher_Reference(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIClass_Teacher_Reference::~OAIClass_Teacher_Reference() = default;

void OAIClass_Teacher_Reference::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIClass_Teacher_ReferencePrivate{});

        Q_D(OAIClass_Teacher_Reference);


        d->odata_id_isSet = false;
        d->odata_id_isValid = false;
    }
}

void OAIClass_Teacher_Reference::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIClass_Teacher_Reference::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIClass_Teacher_Reference);

    d->odata_id_isValid = ::OpenAPI::fromJsonValue(d->odata_id, json[QString("@odata.id")]);
    d->odata_id_isSet = !json[QString("@odata.id")].isNull() && d->odata_id_isValid;
}

QString OAIClass_Teacher_Reference::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIClass_Teacher_Reference::asJsonObject() const {
    Q_D(const OAIClass_Teacher_Reference);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->odata_id_isSet) {
        obj.insert(QString("@odata.id"), ::OpenAPI::toJsonValue(d->odata_id));
    }
    return obj;
}

QString OAIClass_Teacher_Reference::getOdataId() const {
    Q_D(const OAIClass_Teacher_Reference);
    if(!d){
        return {};
    }
    return d->odata_id;
}
void OAIClass_Teacher_Reference::setOdataId(const QString &odata_id) {
    Q_D(OAIClass_Teacher_Reference);
    Q_ASSERT(d);

    d->odata_id = odata_id;
    d->odata_id_isSet = true;
}

bool OAIClass_Teacher_Reference::is_odata_id_Set() const{
    Q_D(const OAIClass_Teacher_Reference);
    if(!d){
        return false;
    }

    return d->odata_id_isSet;
}

bool OAIClass_Teacher_Reference::is_odata_id_Valid() const{
    Q_D(const OAIClass_Teacher_Reference);
    if(!d){
        return false;
    }
    return d->odata_id_isValid;
}

bool OAIClass_Teacher_Reference::isSet() const {
    Q_D(const OAIClass_Teacher_Reference);
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

bool OAIClass_Teacher_Reference::isValid() const {
    Q_D(const OAIClass_Teacher_Reference);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
