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

#include "OAIEducationUser_Reference.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIEducationUser_ReferencePrivate {
    friend class OAIEducationUser_Reference;

     QString odata_id;
     bool odata_id_isSet;
     bool odata_id_isValid;
};

OAIEducationUser_Reference::OAIEducationUser_Reference()
    : d_ptr()
{
}

OAIEducationUser_Reference::OAIEducationUser_Reference(const OAIEducationUser_Reference& other)
    : d_ptr(other.d_ptr)
{
}

OAIEducationUser_Reference::OAIEducationUser_Reference(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIEducationUser_Reference::~OAIEducationUser_Reference() = default;

void OAIEducationUser_Reference::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIEducationUser_ReferencePrivate{});

        Q_D(OAIEducationUser_Reference);


        d->odata_id_isSet = false;
        d->odata_id_isValid = false;
    }
}

void OAIEducationUser_Reference::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEducationUser_Reference::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIEducationUser_Reference);

    d->odata_id_isValid = ::OpenAPI::fromJsonValue(d->odata_id, json[QString("@odata.id")]);
    d->odata_id_isSet = !json[QString("@odata.id")].isNull() && d->odata_id_isValid;
}

QString OAIEducationUser_Reference::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEducationUser_Reference::asJsonObject() const {
    Q_D(const OAIEducationUser_Reference);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->odata_id_isSet) {
        obj.insert(QString("@odata.id"), ::OpenAPI::toJsonValue(d->odata_id));
    }
    return obj;
}

QString OAIEducationUser_Reference::getOdataId() const {
    Q_D(const OAIEducationUser_Reference);
    if(!d){
        return {};
    }
    return d->odata_id;
}
void OAIEducationUser_Reference::setOdataId(const QString &odata_id) {
    Q_D(OAIEducationUser_Reference);
    Q_ASSERT(d);

    d->odata_id = odata_id;
    d->odata_id_isSet = true;
}

bool OAIEducationUser_Reference::is_odata_id_Set() const{
    Q_D(const OAIEducationUser_Reference);
    if(!d){
        return false;
    }

    return d->odata_id_isSet;
}

bool OAIEducationUser_Reference::is_odata_id_Valid() const{
    Q_D(const OAIEducationUser_Reference);
    if(!d){
        return false;
    }
    return d->odata_id_isValid;
}

bool OAIEducationUser_Reference::isSet() const {
    Q_D(const OAIEducationUser_Reference);
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

bool OAIEducationUser_Reference::isValid() const {
    Q_D(const OAIEducationUser_Reference);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
