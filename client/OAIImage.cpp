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

#include "OAIImage.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIImage::OAIImage(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIImage::OAIImage() {
    this->initializeModel();
}

OAIImage::~OAIImage() {}

void OAIImage::initializeModel() {

    m_height_isSet = false;
    m_height_isValid = false;

    m_width_isSet = false;
    m_width_isValid = false;
}

void OAIImage::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIImage::fromJsonObject(QJsonObject json) {

    m_height_isValid = ::OpenAPI::fromJsonValue(height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_width_isValid = ::OpenAPI::fromJsonValue(width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;
}

QString OAIImage::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIImage::asJsonObject() const {
    QJsonObject obj;
    if (m_height_isSet) {
        obj.insert(QString("height"), ::OpenAPI::toJsonValue(height));
    }
    if (m_width_isSet) {
        obj.insert(QString("width"), ::OpenAPI::toJsonValue(width));
    }
    return obj;
}

qint32 OAIImage::getHeight() const {
    return height;
}
void OAIImage::setHeight(const qint32 &height) {
    this->height = height;
    this->m_height_isSet = true;
}

bool OAIImage::is_height_Set() const{
    return m_height_isSet;
}

bool OAIImage::is_height_Valid() const{
    return m_height_isValid;
}

qint32 OAIImage::getWidth() const {
    return width;
}
void OAIImage::setWidth(const qint32 &width) {
    this->width = width;
    this->m_width_isSet = true;
}

bool OAIImage::is_width_Set() const{
    return m_width_isSet;
}

bool OAIImage::is_width_Valid() const{
    return m_width_isValid;
}

bool OAIImage::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_width_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIImage::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
