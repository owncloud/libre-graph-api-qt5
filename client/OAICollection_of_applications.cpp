// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1.0.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICollection_of_applications.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAICollection_of_applicationsPrivate {
    friend class OAICollection_of_applications;

     QList<OAIApplication> value;
     bool value_isSet;
     bool value_isValid;
};

OAICollection_of_applications::OAICollection_of_applications()
    : d_ptr()
{
}

OAICollection_of_applications::OAICollection_of_applications(const OAICollection_of_applications& other)
    : d_ptr(other.d_ptr)
{
}

OAICollection_of_applications::OAICollection_of_applications(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAICollection_of_applications::~OAICollection_of_applications() = default;

void OAICollection_of_applications::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAICollection_of_applicationsPrivate{});

        Q_D(OAICollection_of_applications);


        d->value_isSet = false;
        d->value_isValid = false;
    }
}

void OAICollection_of_applications::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICollection_of_applications::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAICollection_of_applications);

    d->value_isValid = ::OpenAPI::fromJsonValue(d->value, json[QString("value")]);
    d->value_isSet = !json[QString("value")].isNull() && d->value_isValid;
}

QString OAICollection_of_applications::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICollection_of_applications::asJsonObject() const {
    Q_D(const OAICollection_of_applications);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->value.size() > 0) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(d->value));
    }
    return obj;
}

QList<OAIApplication> OAICollection_of_applications::getValue() const {
    Q_D(const OAICollection_of_applications);
    if(!d){
        return {};
    }
    return d->value;
}
void OAICollection_of_applications::setValue(const QList<OAIApplication> &value) {
    Q_D(OAICollection_of_applications);
    Q_ASSERT(d);

    d->value = value;
    d->value_isSet = true;
}

bool OAICollection_of_applications::is_value_Set() const{
    Q_D(const OAICollection_of_applications);
    if(!d){
        return false;
    }

    return d->value_isSet;
}

bool OAICollection_of_applications::is_value_Valid() const{
    Q_D(const OAICollection_of_applications);
    if(!d){
        return false;
    }
    return d->value_isValid;
}

bool OAICollection_of_applications::isSet() const {
    Q_D(const OAICollection_of_applications);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->value.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICollection_of_applications::isValid() const {
    Q_D(const OAICollection_of_applications);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
