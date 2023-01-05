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

#include "OAICollection_of_educationClass.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAICollection_of_educationClassPrivate {
    friend class OAICollection_of_educationClass;

     QList<OAIEducationClass> value;
     bool value_isSet;
     bool value_isValid;
};

OAICollection_of_educationClass::OAICollection_of_educationClass()
    : d_ptr()
{
}

OAICollection_of_educationClass::OAICollection_of_educationClass(const OAICollection_of_educationClass& other)
    : d_ptr(other.d_ptr)
{
}

OAICollection_of_educationClass::OAICollection_of_educationClass(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAICollection_of_educationClass::~OAICollection_of_educationClass() = default;

void OAICollection_of_educationClass::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAICollection_of_educationClassPrivate{});

        Q_D(OAICollection_of_educationClass);


        d->value_isSet = false;
        d->value_isValid = false;
    }
}

void OAICollection_of_educationClass::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICollection_of_educationClass::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAICollection_of_educationClass);

    d->value_isValid = ::OpenAPI::fromJsonValue(d->value, json[QString("value")]);
    d->value_isSet = !json[QString("value")].isNull() && d->value_isValid;
}

QString OAICollection_of_educationClass::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICollection_of_educationClass::asJsonObject() const {
    Q_D(const OAICollection_of_educationClass);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->value.size() > 0) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(d->value));
    }
    return obj;
}

QList<OAIEducationClass> OAICollection_of_educationClass::getValue() const {
    Q_D(const OAICollection_of_educationClass);
    if(!d){
        return {};
    }
    return d->value;
}
void OAICollection_of_educationClass::setValue(const QList<OAIEducationClass> &value) {
    Q_D(OAICollection_of_educationClass);
    Q_ASSERT(d);

    d->value = value;
    d->value_isSet = true;
}

bool OAICollection_of_educationClass::is_value_Set() const{
    Q_D(const OAICollection_of_educationClass);
    if(!d){
        return false;
    }

    return d->value_isSet;
}

bool OAICollection_of_educationClass::is_value_Valid() const{
    Q_D(const OAICollection_of_educationClass);
    if(!d){
        return false;
    }
    return d->value_isValid;
}

bool OAICollection_of_educationClass::isSet() const {
    Q_D(const OAICollection_of_educationClass);
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

bool OAICollection_of_educationClass::isValid() const {
    Q_D(const OAICollection_of_educationClass);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
