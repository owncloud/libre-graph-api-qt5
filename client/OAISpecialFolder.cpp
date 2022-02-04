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

#include "OAISpecialFolder.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISpecialFolder::OAISpecialFolder(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISpecialFolder::OAISpecialFolder() {
    this->initializeModel();
}

OAISpecialFolder::~OAISpecialFolder() {}

void OAISpecialFolder::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;
}

void OAISpecialFolder::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISpecialFolder::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;
}

QString OAISpecialFolder::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISpecialFolder::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    return obj;
}

QString OAISpecialFolder::getName() const {
    return name;
}
void OAISpecialFolder::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAISpecialFolder::is_name_Set() const{
    return m_name_isSet;
}

bool OAISpecialFolder::is_name_Valid() const{
    return m_name_isValid;
}

bool OAISpecialFolder::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISpecialFolder::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
