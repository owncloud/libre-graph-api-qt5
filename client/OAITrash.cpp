// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.15.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAITrash.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAITrashPrivate {
    friend class OAITrash;

     OAIIdentitySet trashed_by;
     bool trashed_by_isSet;
     bool trashed_by_isValid;

     QDateTime trashed_date_time;
     bool trashed_date_time_isSet;
     bool trashed_date_time_isValid;
};

OAITrash::OAITrash()
    : d_ptr()
{
}

OAITrash::OAITrash(const OAITrash& other)
    : d_ptr(other.d_ptr)
{
}

OAITrash::OAITrash(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAITrash::~OAITrash() = default;

void OAITrash::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAITrashPrivate{});

        Q_D(OAITrash);


        d->trashed_by_isSet = false;
        d->trashed_by_isValid = false;

        d->trashed_date_time_isSet = false;
        d->trashed_date_time_isValid = false;
    }
}

void OAITrash::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITrash::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAITrash);

    d->trashed_by_isValid = ::OpenAPI::fromJsonValue(d->trashed_by, json[QString("trashedBy")]);
    d->trashed_by_isSet = !json[QString("trashedBy")].isNull() && d->trashed_by_isValid;

    d->trashed_date_time_isValid = ::OpenAPI::fromJsonValue(d->trashed_date_time, json[QString("trashedDateTime")]);
    d->trashed_date_time_isSet = !json[QString("trashedDateTime")].isNull() && d->trashed_date_time_isValid;
}

QString OAITrash::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITrash::asJsonObject() const {
    Q_D(const OAITrash);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->trashed_by.isSet()) {
        obj.insert(QString("trashedBy"), ::OpenAPI::toJsonValue(d->trashed_by));
    }
    if (d->trashed_date_time_isSet) {
        obj.insert(QString("trashedDateTime"), ::OpenAPI::toJsonValue(d->trashed_date_time));
    }
    return obj;
}

OAIIdentitySet OAITrash::getTrashedBy() const {
    Q_D(const OAITrash);
    if(!d){
        return {};
    }
    return d->trashed_by;
}
void OAITrash::setTrashedBy(const OAIIdentitySet &trashed_by) {
    Q_D(OAITrash);
    Q_ASSERT(d);

    d->trashed_by = trashed_by;
    d->trashed_by_isSet = true;
}

bool OAITrash::is_trashed_by_Set() const{
    Q_D(const OAITrash);
    if(!d){
        return false;
    }

    return d->trashed_by_isSet;
}

bool OAITrash::is_trashed_by_Valid() const{
    Q_D(const OAITrash);
    if(!d){
        return false;
    }
    return d->trashed_by_isValid;
}

QDateTime OAITrash::getTrashedDateTime() const {
    Q_D(const OAITrash);
    if(!d){
        return {};
    }
    return d->trashed_date_time;
}
void OAITrash::setTrashedDateTime(const QDateTime &trashed_date_time) {
    Q_D(OAITrash);
    Q_ASSERT(d);

    d->trashed_date_time = trashed_date_time;
    d->trashed_date_time_isSet = true;
}

bool OAITrash::is_trashed_date_time_Set() const{
    Q_D(const OAITrash);
    if(!d){
        return false;
    }

    return d->trashed_date_time_isSet;
}

bool OAITrash::is_trashed_date_time_Valid() const{
    Q_D(const OAITrash);
    if(!d){
        return false;
    }
    return d->trashed_date_time_isValid;
}

bool OAITrash::isSet() const {
    Q_D(const OAITrash);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->trashed_by.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->trashed_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITrash::isValid() const {
    Q_D(const OAITrash);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
