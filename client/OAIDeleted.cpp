/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.10.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIDeleted.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDeleted::OAIDeleted(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDeleted::OAIDeleted() {
    this->initializeModel();
}

OAIDeleted::~OAIDeleted() {}

void OAIDeleted::initializeModel() {

    m_state_isSet = false;
    m_state_isValid = false;
}

void OAIDeleted::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDeleted::fromJsonObject(QJsonObject json) {

    m_state_isValid = ::OpenAPI::fromJsonValue(state, json[QString("state")]);
    m_state_isSet = !json[QString("state")].isNull() && m_state_isValid;
}

QString OAIDeleted::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDeleted::asJsonObject() const {
    QJsonObject obj;
    if (m_state_isSet) {
        obj.insert(QString("state"), ::OpenAPI::toJsonValue(state));
    }
    return obj;
}

QString OAIDeleted::getState() const {
    return state;
}
void OAIDeleted::setState(const QString &state) {
    this->state = state;
    this->m_state_isSet = true;
}

bool OAIDeleted::is_state_Set() const{
    return m_state_isSet;
}

bool OAIDeleted::is_state_Valid() const{
    return m_state_isValid;
}

bool OAIDeleted::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_state_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDeleted::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
