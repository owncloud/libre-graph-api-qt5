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

#include "OAIEducationClass.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIEducationClassPrivate {
    friend class OAIEducationClass;

     QString id;
     bool id_isSet;
     bool id_isValid;

     QString description;
     bool description_isSet;
     bool description_isValid;

     QString display_name;
     bool display_name_isSet;
     bool display_name_isValid;

     QList<OAIUser> members;
     bool members_isSet;
     bool members_isValid;

     QSet<QString> membersodata_bind;
     bool membersodata_bind_isSet;
     bool membersodata_bind_isValid;

     QString classification;
     bool classification_isSet;
     bool classification_isValid;

     QString external_id;
     bool external_id_isSet;
     bool external_id_isValid;
};

OAIEducationClass::OAIEducationClass()
    : d_ptr()
{
}

OAIEducationClass::OAIEducationClass(const OAIEducationClass& other)
    : d_ptr(other.d_ptr)
{
}

OAIEducationClass::OAIEducationClass(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIEducationClass::~OAIEducationClass() = default;

void OAIEducationClass::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIEducationClassPrivate{});

        Q_D(OAIEducationClass);


        d->id_isSet = false;
        d->id_isValid = false;

        d->description_isSet = false;
        d->description_isValid = false;

        d->display_name_isSet = false;
        d->display_name_isValid = false;

        d->members_isSet = false;
        d->members_isValid = false;

        d->membersodata_bind_isSet = false;
        d->membersodata_bind_isValid = false;

        d->classification_isSet = false;
        d->classification_isValid = false;

        d->external_id_isSet = false;
        d->external_id_isValid = false;
    }
}

void OAIEducationClass::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEducationClass::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIEducationClass);

    d->id_isValid = ::OpenAPI::fromJsonValue(d->id, json[QString("id")]);
    d->id_isSet = !json[QString("id")].isNull() && d->id_isValid;

    d->description_isValid = ::OpenAPI::fromJsonValue(d->description, json[QString("description")]);
    d->description_isSet = !json[QString("description")].isNull() && d->description_isValid;

    d->display_name_isValid = ::OpenAPI::fromJsonValue(d->display_name, json[QString("displayName")]);
    d->display_name_isSet = !json[QString("displayName")].isNull() && d->display_name_isValid;

    d->members_isValid = ::OpenAPI::fromJsonValue(d->members, json[QString("members")]);
    d->members_isSet = !json[QString("members")].isNull() && d->members_isValid;

    d->membersodata_bind_isValid = ::OpenAPI::fromJsonValue(d->membersodata_bind, json[QString("members@odata.bind")]);
    d->membersodata_bind_isSet = !json[QString("members@odata.bind")].isNull() && d->membersodata_bind_isValid;

    d->classification_isValid = ::OpenAPI::fromJsonValue(d->classification, json[QString("classification")]);
    d->classification_isSet = !json[QString("classification")].isNull() && d->classification_isValid;

    d->external_id_isValid = ::OpenAPI::fromJsonValue(d->external_id, json[QString("externalId")]);
    d->external_id_isSet = !json[QString("externalId")].isNull() && d->external_id_isValid;
}

QString OAIEducationClass::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEducationClass::asJsonObject() const {
    Q_D(const OAIEducationClass);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(d->id));
    }
    if (d->description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(d->description));
    }
    if (d->display_name_isSet) {
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(d->display_name));
    }
    if (d->members.size() > 0) {
        obj.insert(QString("members"), ::OpenAPI::toJsonValue(d->members));
    }
    if (d->membersodata_bind.size() > 0) {
        obj.insert(QString("members@odata.bind"), ::OpenAPI::toJsonValue(d->membersodata_bind));
    }
    if (d->classification_isSet) {
        obj.insert(QString("classification"), ::OpenAPI::toJsonValue(d->classification));
    }
    if (d->external_id_isSet) {
        obj.insert(QString("externalId"), ::OpenAPI::toJsonValue(d->external_id));
    }
    return obj;
}

QString OAIEducationClass::getId() const {
    Q_D(const OAIEducationClass);
    if(!d){
        return {};
    }
    return d->id;
}
void OAIEducationClass::setId(const QString &id) {
    Q_D(OAIEducationClass);
    Q_ASSERT(d);

    d->id = id;
    d->id_isSet = true;
}

bool OAIEducationClass::is_id_Set() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }

    return d->id_isSet;
}

bool OAIEducationClass::is_id_Valid() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }
    return d->id_isValid;
}

QString OAIEducationClass::getDescription() const {
    Q_D(const OAIEducationClass);
    if(!d){
        return {};
    }
    return d->description;
}
void OAIEducationClass::setDescription(const QString &description) {
    Q_D(OAIEducationClass);
    Q_ASSERT(d);

    d->description = description;
    d->description_isSet = true;
}

bool OAIEducationClass::is_description_Set() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }

    return d->description_isSet;
}

bool OAIEducationClass::is_description_Valid() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }
    return d->description_isValid;
}

QString OAIEducationClass::getDisplayName() const {
    Q_D(const OAIEducationClass);
    if(!d){
        return {};
    }
    return d->display_name;
}
void OAIEducationClass::setDisplayName(const QString &display_name) {
    Q_D(OAIEducationClass);
    Q_ASSERT(d);

    d->display_name = display_name;
    d->display_name_isSet = true;
}

bool OAIEducationClass::is_display_name_Set() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }

    return d->display_name_isSet;
}

bool OAIEducationClass::is_display_name_Valid() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }
    return d->display_name_isValid;
}

QList<OAIUser> OAIEducationClass::getMembers() const {
    Q_D(const OAIEducationClass);
    if(!d){
        return {};
    }
    return d->members;
}
void OAIEducationClass::setMembers(const QList<OAIUser> &members) {
    Q_D(OAIEducationClass);
    Q_ASSERT(d);

    d->members = members;
    d->members_isSet = true;
}

bool OAIEducationClass::is_members_Set() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }

    return d->members_isSet;
}

bool OAIEducationClass::is_members_Valid() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }
    return d->members_isValid;
}

QSet<QString> OAIEducationClass::getMembersodataBind() const {
    Q_D(const OAIEducationClass);
    if(!d){
        return {};
    }
    return d->membersodata_bind;
}
void OAIEducationClass::setMembersodataBind(const QSet<QString> &membersodata_bind) {
    Q_D(OAIEducationClass);
    Q_ASSERT(d);

    d->membersodata_bind = membersodata_bind;
    d->membersodata_bind_isSet = true;
}

bool OAIEducationClass::is_membersodata_bind_Set() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }

    return d->membersodata_bind_isSet;
}

bool OAIEducationClass::is_membersodata_bind_Valid() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }
    return d->membersodata_bind_isValid;
}

QString OAIEducationClass::getClassification() const {
    Q_D(const OAIEducationClass);
    if(!d){
        return {};
    }
    return d->classification;
}
void OAIEducationClass::setClassification(const QString &classification) {
    Q_D(OAIEducationClass);
    Q_ASSERT(d);

    d->classification = classification;
    d->classification_isSet = true;
}

bool OAIEducationClass::is_classification_Set() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }

    return d->classification_isSet;
}

bool OAIEducationClass::is_classification_Valid() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }
    return d->classification_isValid;
}

QString OAIEducationClass::getExternalId() const {
    Q_D(const OAIEducationClass);
    if(!d){
        return {};
    }
    return d->external_id;
}
void OAIEducationClass::setExternalId(const QString &external_id) {
    Q_D(OAIEducationClass);
    Q_ASSERT(d);

    d->external_id = external_id;
    d->external_id_isSet = true;
}

bool OAIEducationClass::is_external_id_Set() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }

    return d->external_id_isSet;
}

bool OAIEducationClass::is_external_id_Valid() const{
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }
    return d->external_id_isValid;
}

bool OAIEducationClass::isSet() const {
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->display_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->members.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->membersodata_bind.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->classification_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->external_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEducationClass::isValid() const {
    Q_D(const OAIEducationClass);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return d->display_name_isValid && d->classification_isValid && true;
}

} // namespace OpenAPI
