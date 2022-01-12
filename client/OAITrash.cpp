/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.7.0
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

OAITrash::OAITrash(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITrash::OAITrash() {
    this->initializeModel();
}

OAITrash::~OAITrash() {}

void OAITrash::initializeModel() {

    m_trashed_by_isSet = false;
    m_trashed_by_isValid = false;

    m_trashed_date_time_isSet = false;
    m_trashed_date_time_isValid = false;
}

void OAITrash::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITrash::fromJsonObject(QJsonObject json) {

    m_trashed_by_isValid = ::OpenAPI::fromJsonValue(trashed_by, json[QString("trashedBy")]);
    m_trashed_by_isSet = !json[QString("trashedBy")].isNull() && m_trashed_by_isValid;

    m_trashed_date_time_isValid = ::OpenAPI::fromJsonValue(trashed_date_time, json[QString("trashedDateTime")]);
    m_trashed_date_time_isSet = !json[QString("trashedDateTime")].isNull() && m_trashed_date_time_isValid;
}

QString OAITrash::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITrash::asJsonObject() const {
    QJsonObject obj;
    if (trashed_by.isSet()) {
        obj.insert(QString("trashedBy"), ::OpenAPI::toJsonValue(trashed_by));
    }
    if (m_trashed_date_time_isSet) {
        obj.insert(QString("trashedDateTime"), ::OpenAPI::toJsonValue(trashed_date_time));
    }
    return obj;
}

OAIIdentitySet OAITrash::getTrashedBy() const {
    return trashed_by;
}
void OAITrash::setTrashedBy(const OAIIdentitySet &trashed_by) {
    this->trashed_by = trashed_by;
    this->m_trashed_by_isSet = true;
}

bool OAITrash::is_trashed_by_Set() const{
    return m_trashed_by_isSet;
}

bool OAITrash::is_trashed_by_Valid() const{
    return m_trashed_by_isValid;
}

QDateTime OAITrash::getTrashedDateTime() const {
    return trashed_date_time;
}
void OAITrash::setTrashedDateTime(const QDateTime &trashed_date_time) {
    this->trashed_date_time = trashed_date_time;
    this->m_trashed_date_time_isSet = true;
}

bool OAITrash::is_trashed_date_time_Set() const{
    return m_trashed_date_time_isSet;
}

bool OAITrash::is_trashed_date_time_Valid() const{
    return m_trashed_date_time_isValid;
}

bool OAITrash::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (trashed_by.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_trashed_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITrash::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
