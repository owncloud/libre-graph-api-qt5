// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.12.0
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

class OAIImagePrivate {
    friend class OAIImage;

     qint32 height;
     bool height_isSet;
     bool height_isValid;

     qint32 width;
     bool width_isSet;
     bool width_isValid;
};

OAIImage::OAIImage()
    : d_ptr()
{
}

OAIImage::OAIImage(const OAIImage& other)
    : d_ptr(other.d_ptr)
{
}

OAIImage::OAIImage(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIImage::~OAIImage() = default;

void OAIImage::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIImagePrivate{});

        Q_D(OAIImage);


        d->height_isSet = false;
        d->height_isValid = false;

        d->width_isSet = false;
        d->width_isValid = false;
    }
}

void OAIImage::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIImage::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIImage);

    d->height_isValid = ::OpenAPI::fromJsonValue(d->height, json[QString("height")]);
    d->height_isSet = !json[QString("height")].isNull() && d->height_isValid;

    d->width_isValid = ::OpenAPI::fromJsonValue(d->width, json[QString("width")]);
    d->width_isSet = !json[QString("width")].isNull() && d->width_isValid;
}

QString OAIImage::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIImage::asJsonObject() const {
    Q_D(const OAIImage);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->height_isSet) {
        obj.insert(QString("height"), ::OpenAPI::toJsonValue(d->height));
    }
    if (d->width_isSet) {
        obj.insert(QString("width"), ::OpenAPI::toJsonValue(d->width));
    }
    return obj;
}

qint32 OAIImage::getHeight() const {
    Q_D(const OAIImage);
    if(!d){
        return {};
    }
    return d->height;
}
void OAIImage::setHeight(const qint32 &height) {
    Q_D(OAIImage);
    Q_ASSERT(d);

    d->height = height;
    d->height_isSet = true;
}

bool OAIImage::is_height_Set() const{
    Q_D(const OAIImage);
    if(!d){
        return false;
    }

    return d->height_isSet;
}

bool OAIImage::is_height_Valid() const{
    Q_D(const OAIImage);
    if(!d){
        return false;
    }
    return d->height_isValid;
}

qint32 OAIImage::getWidth() const {
    Q_D(const OAIImage);
    if(!d){
        return {};
    }
    return d->width;
}
void OAIImage::setWidth(const qint32 &width) {
    Q_D(OAIImage);
    Q_ASSERT(d);

    d->width = width;
    d->width_isSet = true;
}

bool OAIImage::is_width_Set() const{
    Q_D(const OAIImage);
    if(!d){
        return false;
    }

    return d->width_isSet;
}

bool OAIImage::is_width_Valid() const{
    Q_D(const OAIImage);
    if(!d){
        return false;
    }
    return d->width_isValid;
}

bool OAIImage::isSet() const {
    Q_D(const OAIImage);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->width_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIImage::isValid() const {
    Q_D(const OAIImage);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
