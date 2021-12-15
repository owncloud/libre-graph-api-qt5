/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.4.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIIdentity.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIIdentity::OAIIdentity(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIIdentity::OAIIdentity() {
    this->initializeModel();
}

OAIIdentity::~OAIIdentity() {}

void OAIIdentity::initializeModel() {

    m_display_name_isSet = false;
    m_display_name_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;
}

void OAIIdentity::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIIdentity::fromJsonObject(QJsonObject json) {

    m_display_name_isValid = ::OpenAPI::fromJsonValue(display_name, json[QString("displayName")]);
    m_display_name_isSet = !json[QString("displayName")].isNull() && m_display_name_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;
}

QString OAIIdentity::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIIdentity::asJsonObject() const {
    QJsonObject obj;
    if (m_display_name_isSet) {
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(display_name));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    return obj;
}

QString OAIIdentity::getDisplayName() const {
    return display_name;
}
void OAIIdentity::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

bool OAIIdentity::is_display_name_Set() const{
    return m_display_name_isSet;
}

bool OAIIdentity::is_display_name_Valid() const{
    return m_display_name_isValid;
}

QString OAIIdentity::getId() const {
    return id;
}
void OAIIdentity::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIIdentity::is_id_Set() const{
    return m_id_isSet;
}

bool OAIIdentity::is_id_Valid() const{
    return m_id_isValid;
}

bool OAIIdentity::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_display_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIIdentity::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
