// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * Libre Graph is a free API for cloud collaboration inspired by the MS Graph API.
 *
 * The version of the OpenAPI document: v1.0.4
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUnifiedRoleDefinition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIUnifiedRoleDefinitionPrivate {
    friend class OAIUnifiedRoleDefinition;

     QString description;
     bool description_isSet;
     bool description_isValid;

     QString display_name;
     bool display_name_isSet;
     bool display_name_isValid;

     QString id;
     bool id_isSet;
     bool id_isValid;

     QList<OAIUnifiedRolePermission> role_permissions;
     bool role_permissions_isSet;
     bool role_permissions_isValid;

     qint32 weight;
     bool weight_isSet;
     bool weight_isValid;
};

OAIUnifiedRoleDefinition::OAIUnifiedRoleDefinition()
    : d_ptr()
{
}

OAIUnifiedRoleDefinition::OAIUnifiedRoleDefinition(const OAIUnifiedRoleDefinition& other)
    : d_ptr(other.d_ptr)
{
}

OAIUnifiedRoleDefinition::OAIUnifiedRoleDefinition(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIUnifiedRoleDefinition::~OAIUnifiedRoleDefinition() = default;

void OAIUnifiedRoleDefinition::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIUnifiedRoleDefinitionPrivate{});

        Q_D(OAIUnifiedRoleDefinition);


        d->description_isSet = false;
        d->description_isValid = false;

        d->display_name_isSet = false;
        d->display_name_isValid = false;

        d->id_isSet = false;
        d->id_isValid = false;

        d->role_permissions_isSet = false;
        d->role_permissions_isValid = false;

        d->weight_isSet = false;
        d->weight_isValid = false;
    }
}

void OAIUnifiedRoleDefinition::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUnifiedRoleDefinition::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIUnifiedRoleDefinition);

    d->description_isValid = ::OpenAPI::fromJsonValue(d->description, json[QString("description")]);
    d->description_isSet = !json[QString("description")].isNull() && d->description_isValid;

    d->display_name_isValid = ::OpenAPI::fromJsonValue(d->display_name, json[QString("displayName")]);
    d->display_name_isSet = !json[QString("displayName")].isNull() && d->display_name_isValid;

    d->id_isValid = ::OpenAPI::fromJsonValue(d->id, json[QString("id")]);
    d->id_isSet = !json[QString("id")].isNull() && d->id_isValid;

    d->role_permissions_isValid = ::OpenAPI::fromJsonValue(d->role_permissions, json[QString("rolePermissions")]);
    d->role_permissions_isSet = !json[QString("rolePermissions")].isNull() && d->role_permissions_isValid;

    d->weight_isValid = ::OpenAPI::fromJsonValue(d->weight, json[QString("weight")]);
    d->weight_isSet = !json[QString("weight")].isNull() && d->weight_isValid;
}

QString OAIUnifiedRoleDefinition::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUnifiedRoleDefinition::asJsonObject() const {
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(d->description));
    }
    if (d->display_name_isSet) {
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(d->display_name));
    }
    if (d->id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(d->id));
    }
    if (d->role_permissions.size() > 0) {
        obj.insert(QString("rolePermissions"), ::OpenAPI::toJsonValue(d->role_permissions));
    }
    if (d->weight_isSet) {
        obj.insert(QString("weight"), ::OpenAPI::toJsonValue(d->weight));
    }
    return obj;
}

QString OAIUnifiedRoleDefinition::getDescription() const {
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return {};
    }
    return d->description;
}
void OAIUnifiedRoleDefinition::setDescription(const QString &description) {
    Q_D(OAIUnifiedRoleDefinition);
    Q_ASSERT(d);

    d->description = description;
    d->description_isSet = true;
}

bool OAIUnifiedRoleDefinition::is_description_Set() const{
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }

    return d->description_isSet;
}

bool OAIUnifiedRoleDefinition::is_description_Valid() const{
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }
    return d->description_isValid;
}

QString OAIUnifiedRoleDefinition::getDisplayName() const {
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return {};
    }
    return d->display_name;
}
void OAIUnifiedRoleDefinition::setDisplayName(const QString &display_name) {
    Q_D(OAIUnifiedRoleDefinition);
    Q_ASSERT(d);

    d->display_name = display_name;
    d->display_name_isSet = true;
}

bool OAIUnifiedRoleDefinition::is_display_name_Set() const{
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }

    return d->display_name_isSet;
}

bool OAIUnifiedRoleDefinition::is_display_name_Valid() const{
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }
    return d->display_name_isValid;
}

QString OAIUnifiedRoleDefinition::getId() const {
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return {};
    }
    return d->id;
}
void OAIUnifiedRoleDefinition::setId(const QString &id) {
    Q_D(OAIUnifiedRoleDefinition);
    Q_ASSERT(d);

    d->id = id;
    d->id_isSet = true;
}

bool OAIUnifiedRoleDefinition::is_id_Set() const{
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }

    return d->id_isSet;
}

bool OAIUnifiedRoleDefinition::is_id_Valid() const{
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }
    return d->id_isValid;
}

QList<OAIUnifiedRolePermission> OAIUnifiedRoleDefinition::getRolePermissions() const {
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return {};
    }
    return d->role_permissions;
}
void OAIUnifiedRoleDefinition::setRolePermissions(const QList<OAIUnifiedRolePermission> &role_permissions) {
    Q_D(OAIUnifiedRoleDefinition);
    Q_ASSERT(d);

    d->role_permissions = role_permissions;
    d->role_permissions_isSet = true;
}

bool OAIUnifiedRoleDefinition::is_role_permissions_Set() const{
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }

    return d->role_permissions_isSet;
}

bool OAIUnifiedRoleDefinition::is_role_permissions_Valid() const{
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }
    return d->role_permissions_isValid;
}

qint32 OAIUnifiedRoleDefinition::getWeight() const {
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return {};
    }
    return d->weight;
}
void OAIUnifiedRoleDefinition::setWeight(const qint32 &weight) {
    Q_D(OAIUnifiedRoleDefinition);
    Q_ASSERT(d);

    d->weight = weight;
    d->weight_isSet = true;
}

bool OAIUnifiedRoleDefinition::is_weight_Set() const{
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }

    return d->weight_isSet;
}

bool OAIUnifiedRoleDefinition::is_weight_Valid() const{
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }
    return d->weight_isValid;
}

bool OAIUnifiedRoleDefinition::isSet() const {
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->display_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->role_permissions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->weight_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUnifiedRoleDefinition::isValid() const {
    Q_D(const OAIUnifiedRoleDefinition);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
