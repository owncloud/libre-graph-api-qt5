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

#include "OAIOdata_error.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOdata_error::OAIOdata_error(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOdata_error::OAIOdata_error() {
    this->initializeModel();
}

OAIOdata_error::~OAIOdata_error() {}

void OAIOdata_error::initializeModel() {

    m_error_isSet = false;
    m_error_isValid = false;
}

void OAIOdata_error::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOdata_error::fromJsonObject(QJsonObject json) {

    m_error_isValid = ::OpenAPI::fromJsonValue(error, json[QString("error")]);
    m_error_isSet = !json[QString("error")].isNull() && m_error_isValid;
}

QString OAIOdata_error::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOdata_error::asJsonObject() const {
    QJsonObject obj;
    if (error.isSet()) {
        obj.insert(QString("error"), ::OpenAPI::toJsonValue(error));
    }
    return obj;
}

OAIOdata_error_main OAIOdata_error::getError() const {
    return error;
}
void OAIOdata_error::setError(const OAIOdata_error_main &error) {
    this->error = error;
    this->m_error_isSet = true;
}

bool OAIOdata_error::is_error_Set() const{
    return m_error_isSet;
}

bool OAIOdata_error::is_error_Valid() const{
    return m_error_isValid;
}

bool OAIOdata_error::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (error.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOdata_error::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_error_isValid && true;
}

} // namespace OpenAPI
