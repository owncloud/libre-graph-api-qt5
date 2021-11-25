/**
 * Open Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.1.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIOdata_error_main.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOdata_error_main::OAIOdata_error_main(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOdata_error_main::OAIOdata_error_main() {
    this->initializeModel();
}

OAIOdata_error_main::~OAIOdata_error_main() {}

void OAIOdata_error_main::initializeModel() {

    m_code_isSet = false;
    m_code_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;

    m_target_isSet = false;
    m_target_isValid = false;

    m_details_isSet = false;
    m_details_isValid = false;

    m_innererror_isSet = false;
    m_innererror_isValid = false;
}

void OAIOdata_error_main::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOdata_error_main::fromJsonObject(QJsonObject json) {

    m_code_isValid = ::OpenAPI::fromJsonValue(code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_message_isValid = ::OpenAPI::fromJsonValue(message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;

    m_target_isValid = ::OpenAPI::fromJsonValue(target, json[QString("target")]);
    m_target_isSet = !json[QString("target")].isNull() && m_target_isValid;

    m_details_isValid = ::OpenAPI::fromJsonValue(details, json[QString("details")]);
    m_details_isSet = !json[QString("details")].isNull() && m_details_isValid;

    m_innererror_isValid = ::OpenAPI::fromJsonValue(innererror, json[QString("innererror")]);
    m_innererror_isSet = !json[QString("innererror")].isNull() && m_innererror_isValid;
}

QString OAIOdata_error_main::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOdata_error_main::asJsonObject() const {
    QJsonObject obj;
    if (m_code_isSet) {
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(code));
    }
    if (m_message_isSet) {
        obj.insert(QString("message"), ::OpenAPI::toJsonValue(message));
    }
    if (m_target_isSet) {
        obj.insert(QString("target"), ::OpenAPI::toJsonValue(target));
    }
    if (details.size() > 0) {
        obj.insert(QString("details"), ::OpenAPI::toJsonValue(details));
    }
    if (m_innererror_isSet) {
        obj.insert(QString("innererror"), ::OpenAPI::toJsonValue(innererror));
    }
    return obj;
}

QString OAIOdata_error_main::getCode() const {
    return code;
}
void OAIOdata_error_main::setCode(const QString &code) {
    this->code = code;
    this->m_code_isSet = true;
}

bool OAIOdata_error_main::is_code_Set() const{
    return m_code_isSet;
}

bool OAIOdata_error_main::is_code_Valid() const{
    return m_code_isValid;
}

QString OAIOdata_error_main::getMessage() const {
    return message;
}
void OAIOdata_error_main::setMessage(const QString &message) {
    this->message = message;
    this->m_message_isSet = true;
}

bool OAIOdata_error_main::is_message_Set() const{
    return m_message_isSet;
}

bool OAIOdata_error_main::is_message_Valid() const{
    return m_message_isValid;
}

QString OAIOdata_error_main::getTarget() const {
    return target;
}
void OAIOdata_error_main::setTarget(const QString &target) {
    this->target = target;
    this->m_target_isSet = true;
}

bool OAIOdata_error_main::is_target_Set() const{
    return m_target_isSet;
}

bool OAIOdata_error_main::is_target_Valid() const{
    return m_target_isValid;
}

QList<OAIOdata_error_detail> OAIOdata_error_main::getDetails() const {
    return details;
}
void OAIOdata_error_main::setDetails(const QList<OAIOdata_error_detail> &details) {
    this->details = details;
    this->m_details_isSet = true;
}

bool OAIOdata_error_main::is_details_Set() const{
    return m_details_isSet;
}

bool OAIOdata_error_main::is_details_Valid() const{
    return m_details_isValid;
}

OAIObject OAIOdata_error_main::getInnererror() const {
    return innererror;
}
void OAIOdata_error_main::setInnererror(const OAIObject &innererror) {
    this->innererror = innererror;
    this->m_innererror_isSet = true;
}

bool OAIOdata_error_main::is_innererror_Set() const{
    return m_innererror_isSet;
}

bool OAIOdata_error_main::is_innererror_Valid() const{
    return m_innererror_isValid;
}

bool OAIOdata_error_main::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (details.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_innererror_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOdata_error_main::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && m_message_isValid && true;
}

} // namespace OpenAPI
