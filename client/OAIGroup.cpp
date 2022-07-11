// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.15.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIGroup.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIGroupPrivate {
    friend class OAIGroup;

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

     QString on_premises_domain_name;
     bool on_premises_domain_name_isSet;
     bool on_premises_domain_name_isValid;

     QString on_premises_sam_account_name;
     bool on_premises_sam_account_name_isSet;
     bool on_premises_sam_account_name_isValid;

     QSet<QString> membersodata_bind;
     bool membersodata_bind_isSet;
     bool membersodata_bind_isValid;
};

OAIGroup::OAIGroup()
    : d_ptr()
{
}

OAIGroup::OAIGroup(const OAIGroup& other)
    : d_ptr(other.d_ptr)
{
}

OAIGroup::OAIGroup(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIGroup::~OAIGroup() = default;

void OAIGroup::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIGroupPrivate{});

        Q_D(OAIGroup);


        d->id_isSet = false;
        d->id_isValid = false;

        d->description_isSet = false;
        d->description_isValid = false;

        d->display_name_isSet = false;
        d->display_name_isValid = false;

        d->members_isSet = false;
        d->members_isValid = false;

        d->on_premises_domain_name_isSet = false;
        d->on_premises_domain_name_isValid = false;

        d->on_premises_sam_account_name_isSet = false;
        d->on_premises_sam_account_name_isValid = false;

        d->membersodata_bind_isSet = false;
        d->membersodata_bind_isValid = false;
    }
}

void OAIGroup::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGroup::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIGroup);

    d->id_isValid = ::OpenAPI::fromJsonValue(d->id, json[QString("id")]);
    d->id_isSet = !json[QString("id")].isNull() && d->id_isValid;

    d->description_isValid = ::OpenAPI::fromJsonValue(d->description, json[QString("description")]);
    d->description_isSet = !json[QString("description")].isNull() && d->description_isValid;

    d->display_name_isValid = ::OpenAPI::fromJsonValue(d->display_name, json[QString("displayName")]);
    d->display_name_isSet = !json[QString("displayName")].isNull() && d->display_name_isValid;

    d->members_isValid = ::OpenAPI::fromJsonValue(d->members, json[QString("members")]);
    d->members_isSet = !json[QString("members")].isNull() && d->members_isValid;

    d->on_premises_domain_name_isValid = ::OpenAPI::fromJsonValue(d->on_premises_domain_name, json[QString("onPremisesDomainName")]);
    d->on_premises_domain_name_isSet = !json[QString("onPremisesDomainName")].isNull() && d->on_premises_domain_name_isValid;

    d->on_premises_sam_account_name_isValid = ::OpenAPI::fromJsonValue(d->on_premises_sam_account_name, json[QString("onPremisesSamAccountName")]);
    d->on_premises_sam_account_name_isSet = !json[QString("onPremisesSamAccountName")].isNull() && d->on_premises_sam_account_name_isValid;

    d->membersodata_bind_isValid = ::OpenAPI::fromJsonValue(d->membersodata_bind, json[QString("members@odata.bind")]);
    d->membersodata_bind_isSet = !json[QString("members@odata.bind")].isNull() && d->membersodata_bind_isValid;
}

QString OAIGroup::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGroup::asJsonObject() const {
    Q_D(const OAIGroup);
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
    if (d->on_premises_domain_name_isSet) {
        obj.insert(QString("onPremisesDomainName"), ::OpenAPI::toJsonValue(d->on_premises_domain_name));
    }
    if (d->on_premises_sam_account_name_isSet) {
        obj.insert(QString("onPremisesSamAccountName"), ::OpenAPI::toJsonValue(d->on_premises_sam_account_name));
    }
    if (d->membersodata_bind.size() > 0) {
        obj.insert(QString("members@odata.bind"), ::OpenAPI::toJsonValue(d->membersodata_bind));
    }
    return obj;
}

QString OAIGroup::getId() const {
    Q_D(const OAIGroup);
    if(!d){
        return {};
    }
    return d->id;
}
void OAIGroup::setId(const QString &id) {
    Q_D(OAIGroup);
    Q_ASSERT(d);

    d->id = id;
    d->id_isSet = true;
}

bool OAIGroup::is_id_Set() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }

    return d->id_isSet;
}

bool OAIGroup::is_id_Valid() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }
    return d->id_isValid;
}

QString OAIGroup::getDescription() const {
    Q_D(const OAIGroup);
    if(!d){
        return {};
    }
    return d->description;
}
void OAIGroup::setDescription(const QString &description) {
    Q_D(OAIGroup);
    Q_ASSERT(d);

    d->description = description;
    d->description_isSet = true;
}

bool OAIGroup::is_description_Set() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }

    return d->description_isSet;
}

bool OAIGroup::is_description_Valid() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }
    return d->description_isValid;
}

QString OAIGroup::getDisplayName() const {
    Q_D(const OAIGroup);
    if(!d){
        return {};
    }
    return d->display_name;
}
void OAIGroup::setDisplayName(const QString &display_name) {
    Q_D(OAIGroup);
    Q_ASSERT(d);

    d->display_name = display_name;
    d->display_name_isSet = true;
}

bool OAIGroup::is_display_name_Set() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }

    return d->display_name_isSet;
}

bool OAIGroup::is_display_name_Valid() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }
    return d->display_name_isValid;
}

QList<OAIUser> OAIGroup::getMembers() const {
    Q_D(const OAIGroup);
    if(!d){
        return {};
    }
    return d->members;
}
void OAIGroup::setMembers(const QList<OAIUser> &members) {
    Q_D(OAIGroup);
    Q_ASSERT(d);

    d->members = members;
    d->members_isSet = true;
}

bool OAIGroup::is_members_Set() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }

    return d->members_isSet;
}

bool OAIGroup::is_members_Valid() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }
    return d->members_isValid;
}

QString OAIGroup::getOnPremisesDomainName() const {
    Q_D(const OAIGroup);
    if(!d){
        return {};
    }
    return d->on_premises_domain_name;
}
void OAIGroup::setOnPremisesDomainName(const QString &on_premises_domain_name) {
    Q_D(OAIGroup);
    Q_ASSERT(d);

    d->on_premises_domain_name = on_premises_domain_name;
    d->on_premises_domain_name_isSet = true;
}

bool OAIGroup::is_on_premises_domain_name_Set() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }

    return d->on_premises_domain_name_isSet;
}

bool OAIGroup::is_on_premises_domain_name_Valid() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }
    return d->on_premises_domain_name_isValid;
}

QString OAIGroup::getOnPremisesSamAccountName() const {
    Q_D(const OAIGroup);
    if(!d){
        return {};
    }
    return d->on_premises_sam_account_name;
}
void OAIGroup::setOnPremisesSamAccountName(const QString &on_premises_sam_account_name) {
    Q_D(OAIGroup);
    Q_ASSERT(d);

    d->on_premises_sam_account_name = on_premises_sam_account_name;
    d->on_premises_sam_account_name_isSet = true;
}

bool OAIGroup::is_on_premises_sam_account_name_Set() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }

    return d->on_premises_sam_account_name_isSet;
}

bool OAIGroup::is_on_premises_sam_account_name_Valid() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }
    return d->on_premises_sam_account_name_isValid;
}

QSet<QString> OAIGroup::getMembersodataBind() const {
    Q_D(const OAIGroup);
    if(!d){
        return {};
    }
    return d->membersodata_bind;
}
void OAIGroup::setMembersodataBind(const QSet<QString> &membersodata_bind) {
    Q_D(OAIGroup);
    Q_ASSERT(d);

    d->membersodata_bind = membersodata_bind;
    d->membersodata_bind_isSet = true;
}

bool OAIGroup::is_membersodata_bind_Set() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }

    return d->membersodata_bind_isSet;
}

bool OAIGroup::is_membersodata_bind_Valid() const{
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }
    return d->membersodata_bind_isValid;
}

bool OAIGroup::isSet() const {
    Q_D(const OAIGroup);
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

        if (d->on_premises_domain_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->on_premises_sam_account_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->membersodata_bind.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGroup::isValid() const {
    Q_D(const OAIGroup);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
