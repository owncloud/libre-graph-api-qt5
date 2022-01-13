/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.8.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICollection_of_driveItems.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICollection_of_driveItems::OAICollection_of_driveItems(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICollection_of_driveItems::OAICollection_of_driveItems() {
    this->initializeModel();
}

OAICollection_of_driveItems::~OAICollection_of_driveItems() {}

void OAICollection_of_driveItems::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;

    m_odata_next_link_isSet = false;
    m_odata_next_link_isValid = false;
}

void OAICollection_of_driveItems::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICollection_of_driveItems::fromJsonObject(QJsonObject json) {

    m_value_isValid = ::OpenAPI::fromJsonValue(value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;

    m_odata_next_link_isValid = ::OpenAPI::fromJsonValue(odata_next_link, json[QString("@odata.nextLink")]);
    m_odata_next_link_isSet = !json[QString("@odata.nextLink")].isNull() && m_odata_next_link_isValid;
}

QString OAICollection_of_driveItems::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICollection_of_driveItems::asJsonObject() const {
    QJsonObject obj;
    if (value.size() > 0) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(value));
    }
    if (m_odata_next_link_isSet) {
        obj.insert(QString("@odata.nextLink"), ::OpenAPI::toJsonValue(odata_next_link));
    }
    return obj;
}

QList<OAIDriveItem> OAICollection_of_driveItems::getValue() const {
    return value;
}
void OAICollection_of_driveItems::setValue(const QList<OAIDriveItem> &value) {
    this->value = value;
    this->m_value_isSet = true;
}

bool OAICollection_of_driveItems::is_value_Set() const{
    return m_value_isSet;
}

bool OAICollection_of_driveItems::is_value_Valid() const{
    return m_value_isValid;
}

QString OAICollection_of_driveItems::getOdataNextLink() const {
    return odata_next_link;
}
void OAICollection_of_driveItems::setOdataNextLink(const QString &odata_next_link) {
    this->odata_next_link = odata_next_link;
    this->m_odata_next_link_isSet = true;
}

bool OAICollection_of_driveItems::is_odata_next_link_Set() const{
    return m_odata_next_link_isSet;
}

bool OAICollection_of_driveItems::is_odata_next_link_Valid() const{
    return m_odata_next_link_isValid;
}

bool OAICollection_of_driveItems::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (value.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_odata_next_link_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICollection_of_driveItems::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
