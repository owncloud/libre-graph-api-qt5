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

#include "OAIDrive.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIDrivePrivate {
    friend class OAIDrive;

     QString id;
     bool id_isSet;
     bool id_isValid;

     OAIIdentitySet created_by;
     bool created_by_isSet;
     bool created_by_isValid;

     QDateTime created_date_time;
     bool created_date_time_isSet;
     bool created_date_time_isValid;

     QString description;
     bool description_isSet;
     bool description_isValid;

     QString e_tag;
     bool e_tag_isSet;
     bool e_tag_isValid;

     OAIIdentitySet last_modified_by;
     bool last_modified_by_isSet;
     bool last_modified_by_isValid;

     QDateTime last_modified_date_time;
     bool last_modified_date_time_isSet;
     bool last_modified_date_time_isValid;

     QString name;
     bool name_isSet;
     bool name_isValid;

     OAIItemReference parent_reference;
     bool parent_reference_isSet;
     bool parent_reference_isValid;

     QString web_url;
     bool web_url_isSet;
     bool web_url_isValid;

     OAIUser created_by_user;
     bool created_by_user_isSet;
     bool created_by_user_isValid;

     OAIUser last_modified_by_user;
     bool last_modified_by_user_isSet;
     bool last_modified_by_user_isValid;

     QString drive_type;
     bool drive_type_isSet;
     bool drive_type_isValid;

     QString drive_alias;
     bool drive_alias_isSet;
     bool drive_alias_isValid;

     OAIIdentitySet owner;
     bool owner_isSet;
     bool owner_isValid;

     OAIQuota quota;
     bool quota_isSet;
     bool quota_isValid;

     QList<OAIDriveItem> items;
     bool items_isSet;
     bool items_isValid;

     OAIDriveItem root;
     bool root_isSet;
     bool root_isValid;

     QList<OAIDriveItem> special;
     bool special_isSet;
     bool special_isValid;
};

OAIDrive::OAIDrive()
    : d_ptr()
{
}

OAIDrive::OAIDrive(const OAIDrive& other)
    : d_ptr(other.d_ptr)
{
}

OAIDrive::OAIDrive(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIDrive::~OAIDrive() = default;

void OAIDrive::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIDrivePrivate{});

        Q_D(OAIDrive);


        d->id_isSet = false;
        d->id_isValid = false;

        d->created_by_isSet = false;
        d->created_by_isValid = false;

        d->created_date_time_isSet = false;
        d->created_date_time_isValid = false;

        d->description_isSet = false;
        d->description_isValid = false;

        d->e_tag_isSet = false;
        d->e_tag_isValid = false;

        d->last_modified_by_isSet = false;
        d->last_modified_by_isValid = false;

        d->last_modified_date_time_isSet = false;
        d->last_modified_date_time_isValid = false;

        d->name_isSet = false;
        d->name_isValid = false;

        d->parent_reference_isSet = false;
        d->parent_reference_isValid = false;

        d->web_url_isSet = false;
        d->web_url_isValid = false;

        d->created_by_user_isSet = false;
        d->created_by_user_isValid = false;

        d->last_modified_by_user_isSet = false;
        d->last_modified_by_user_isValid = false;

        d->drive_type_isSet = false;
        d->drive_type_isValid = false;

        d->drive_alias_isSet = false;
        d->drive_alias_isValid = false;

        d->owner_isSet = false;
        d->owner_isValid = false;

        d->quota_isSet = false;
        d->quota_isValid = false;

        d->items_isSet = false;
        d->items_isValid = false;

        d->root_isSet = false;
        d->root_isValid = false;

        d->special_isSet = false;
        d->special_isValid = false;
    }
}

void OAIDrive::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDrive::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIDrive);

    d->id_isValid = ::OpenAPI::fromJsonValue(d->id, json[QString("id")]);
    d->id_isSet = !json[QString("id")].isNull() && d->id_isValid;

    d->created_by_isValid = ::OpenAPI::fromJsonValue(d->created_by, json[QString("createdBy")]);
    d->created_by_isSet = !json[QString("createdBy")].isNull() && d->created_by_isValid;

    d->created_date_time_isValid = ::OpenAPI::fromJsonValue(d->created_date_time, json[QString("createdDateTime")]);
    d->created_date_time_isSet = !json[QString("createdDateTime")].isNull() && d->created_date_time_isValid;

    d->description_isValid = ::OpenAPI::fromJsonValue(d->description, json[QString("description")]);
    d->description_isSet = !json[QString("description")].isNull() && d->description_isValid;

    d->e_tag_isValid = ::OpenAPI::fromJsonValue(d->e_tag, json[QString("eTag")]);
    d->e_tag_isSet = !json[QString("eTag")].isNull() && d->e_tag_isValid;

    d->last_modified_by_isValid = ::OpenAPI::fromJsonValue(d->last_modified_by, json[QString("lastModifiedBy")]);
    d->last_modified_by_isSet = !json[QString("lastModifiedBy")].isNull() && d->last_modified_by_isValid;

    d->last_modified_date_time_isValid = ::OpenAPI::fromJsonValue(d->last_modified_date_time, json[QString("lastModifiedDateTime")]);
    d->last_modified_date_time_isSet = !json[QString("lastModifiedDateTime")].isNull() && d->last_modified_date_time_isValid;

    d->name_isValid = ::OpenAPI::fromJsonValue(d->name, json[QString("name")]);
    d->name_isSet = !json[QString("name")].isNull() && d->name_isValid;

    d->parent_reference_isValid = ::OpenAPI::fromJsonValue(d->parent_reference, json[QString("parentReference")]);
    d->parent_reference_isSet = !json[QString("parentReference")].isNull() && d->parent_reference_isValid;

    d->web_url_isValid = ::OpenAPI::fromJsonValue(d->web_url, json[QString("webUrl")]);
    d->web_url_isSet = !json[QString("webUrl")].isNull() && d->web_url_isValid;

    d->created_by_user_isValid = ::OpenAPI::fromJsonValue(d->created_by_user, json[QString("createdByUser")]);
    d->created_by_user_isSet = !json[QString("createdByUser")].isNull() && d->created_by_user_isValid;

    d->last_modified_by_user_isValid = ::OpenAPI::fromJsonValue(d->last_modified_by_user, json[QString("lastModifiedByUser")]);
    d->last_modified_by_user_isSet = !json[QString("lastModifiedByUser")].isNull() && d->last_modified_by_user_isValid;

    d->drive_type_isValid = ::OpenAPI::fromJsonValue(d->drive_type, json[QString("driveType")]);
    d->drive_type_isSet = !json[QString("driveType")].isNull() && d->drive_type_isValid;

    d->drive_alias_isValid = ::OpenAPI::fromJsonValue(d->drive_alias, json[QString("driveAlias")]);
    d->drive_alias_isSet = !json[QString("driveAlias")].isNull() && d->drive_alias_isValid;

    d->owner_isValid = ::OpenAPI::fromJsonValue(d->owner, json[QString("owner")]);
    d->owner_isSet = !json[QString("owner")].isNull() && d->owner_isValid;

    d->quota_isValid = ::OpenAPI::fromJsonValue(d->quota, json[QString("quota")]);
    d->quota_isSet = !json[QString("quota")].isNull() && d->quota_isValid;

    d->items_isValid = ::OpenAPI::fromJsonValue(d->items, json[QString("items")]);
    d->items_isSet = !json[QString("items")].isNull() && d->items_isValid;

    d->root_isValid = ::OpenAPI::fromJsonValue(d->root, json[QString("root")]);
    d->root_isSet = !json[QString("root")].isNull() && d->root_isValid;

    d->special_isValid = ::OpenAPI::fromJsonValue(d->special, json[QString("special")]);
    d->special_isSet = !json[QString("special")].isNull() && d->special_isValid;
}

QString OAIDrive::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDrive::asJsonObject() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(d->id));
    }
    if (d->created_by.isSet()) {
        obj.insert(QString("createdBy"), ::OpenAPI::toJsonValue(d->created_by));
    }
    if (d->created_date_time_isSet) {
        obj.insert(QString("createdDateTime"), ::OpenAPI::toJsonValue(d->created_date_time));
    }
    if (d->description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(d->description));
    }
    if (d->e_tag_isSet) {
        obj.insert(QString("eTag"), ::OpenAPI::toJsonValue(d->e_tag));
    }
    if (d->last_modified_by.isSet()) {
        obj.insert(QString("lastModifiedBy"), ::OpenAPI::toJsonValue(d->last_modified_by));
    }
    if (d->last_modified_date_time_isSet) {
        obj.insert(QString("lastModifiedDateTime"), ::OpenAPI::toJsonValue(d->last_modified_date_time));
    }
    if (d->name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(d->name));
    }
    if (d->parent_reference.isSet()) {
        obj.insert(QString("parentReference"), ::OpenAPI::toJsonValue(d->parent_reference));
    }
    if (d->web_url_isSet) {
        obj.insert(QString("webUrl"), ::OpenAPI::toJsonValue(d->web_url));
    }
    if (d->created_by_user.isSet()) {
        obj.insert(QString("createdByUser"), ::OpenAPI::toJsonValue(d->created_by_user));
    }
    if (d->last_modified_by_user.isSet()) {
        obj.insert(QString("lastModifiedByUser"), ::OpenAPI::toJsonValue(d->last_modified_by_user));
    }
    if (d->drive_type_isSet) {
        obj.insert(QString("driveType"), ::OpenAPI::toJsonValue(d->drive_type));
    }
    if (d->drive_alias_isSet) {
        obj.insert(QString("driveAlias"), ::OpenAPI::toJsonValue(d->drive_alias));
    }
    if (d->owner.isSet()) {
        obj.insert(QString("owner"), ::OpenAPI::toJsonValue(d->owner));
    }
    if (d->quota.isSet()) {
        obj.insert(QString("quota"), ::OpenAPI::toJsonValue(d->quota));
    }
    if (d->items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(d->items));
    }
    if (d->root.isSet()) {
        obj.insert(QString("root"), ::OpenAPI::toJsonValue(d->root));
    }
    if (d->special.size() > 0) {
        obj.insert(QString("special"), ::OpenAPI::toJsonValue(d->special));
    }
    return obj;
}

QString OAIDrive::getId() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->id;
}
void OAIDrive::setId(const QString &id) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->id = id;
    d->id_isSet = true;
}

bool OAIDrive::is_id_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->id_isSet;
}

bool OAIDrive::is_id_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->id_isValid;
}

OAIIdentitySet OAIDrive::getCreatedBy() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->created_by;
}
void OAIDrive::setCreatedBy(const OAIIdentitySet &created_by) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->created_by = created_by;
    d->created_by_isSet = true;
}

bool OAIDrive::is_created_by_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->created_by_isSet;
}

bool OAIDrive::is_created_by_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->created_by_isValid;
}

QDateTime OAIDrive::getCreatedDateTime() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->created_date_time;
}
void OAIDrive::setCreatedDateTime(const QDateTime &created_date_time) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->created_date_time = created_date_time;
    d->created_date_time_isSet = true;
}

bool OAIDrive::is_created_date_time_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->created_date_time_isSet;
}

bool OAIDrive::is_created_date_time_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->created_date_time_isValid;
}

QString OAIDrive::getDescription() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->description;
}
void OAIDrive::setDescription(const QString &description) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->description = description;
    d->description_isSet = true;
}

bool OAIDrive::is_description_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->description_isSet;
}

bool OAIDrive::is_description_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->description_isValid;
}

QString OAIDrive::getETag() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->e_tag;
}
void OAIDrive::setETag(const QString &e_tag) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->e_tag = e_tag;
    d->e_tag_isSet = true;
}

bool OAIDrive::is_e_tag_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->e_tag_isSet;
}

bool OAIDrive::is_e_tag_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->e_tag_isValid;
}

OAIIdentitySet OAIDrive::getLastModifiedBy() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->last_modified_by;
}
void OAIDrive::setLastModifiedBy(const OAIIdentitySet &last_modified_by) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->last_modified_by = last_modified_by;
    d->last_modified_by_isSet = true;
}

bool OAIDrive::is_last_modified_by_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->last_modified_by_isSet;
}

bool OAIDrive::is_last_modified_by_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->last_modified_by_isValid;
}

QDateTime OAIDrive::getLastModifiedDateTime() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->last_modified_date_time;
}
void OAIDrive::setLastModifiedDateTime(const QDateTime &last_modified_date_time) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->last_modified_date_time = last_modified_date_time;
    d->last_modified_date_time_isSet = true;
}

bool OAIDrive::is_last_modified_date_time_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->last_modified_date_time_isSet;
}

bool OAIDrive::is_last_modified_date_time_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->last_modified_date_time_isValid;
}

QString OAIDrive::getName() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->name;
}
void OAIDrive::setName(const QString &name) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->name = name;
    d->name_isSet = true;
}

bool OAIDrive::is_name_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->name_isSet;
}

bool OAIDrive::is_name_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->name_isValid;
}

OAIItemReference OAIDrive::getParentReference() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->parent_reference;
}
void OAIDrive::setParentReference(const OAIItemReference &parent_reference) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->parent_reference = parent_reference;
    d->parent_reference_isSet = true;
}

bool OAIDrive::is_parent_reference_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->parent_reference_isSet;
}

bool OAIDrive::is_parent_reference_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->parent_reference_isValid;
}

QString OAIDrive::getWebUrl() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->web_url;
}
void OAIDrive::setWebUrl(const QString &web_url) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->web_url = web_url;
    d->web_url_isSet = true;
}

bool OAIDrive::is_web_url_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->web_url_isSet;
}

bool OAIDrive::is_web_url_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->web_url_isValid;
}

OAIUser OAIDrive::getCreatedByUser() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->created_by_user;
}
void OAIDrive::setCreatedByUser(const OAIUser &created_by_user) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->created_by_user = created_by_user;
    d->created_by_user_isSet = true;
}

bool OAIDrive::is_created_by_user_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->created_by_user_isSet;
}

bool OAIDrive::is_created_by_user_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->created_by_user_isValid;
}

OAIUser OAIDrive::getLastModifiedByUser() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->last_modified_by_user;
}
void OAIDrive::setLastModifiedByUser(const OAIUser &last_modified_by_user) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->last_modified_by_user = last_modified_by_user;
    d->last_modified_by_user_isSet = true;
}

bool OAIDrive::is_last_modified_by_user_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->last_modified_by_user_isSet;
}

bool OAIDrive::is_last_modified_by_user_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->last_modified_by_user_isValid;
}

QString OAIDrive::getDriveType() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->drive_type;
}
void OAIDrive::setDriveType(const QString &drive_type) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->drive_type = drive_type;
    d->drive_type_isSet = true;
}

bool OAIDrive::is_drive_type_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->drive_type_isSet;
}

bool OAIDrive::is_drive_type_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->drive_type_isValid;
}

QString OAIDrive::getDriveAlias() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->drive_alias;
}
void OAIDrive::setDriveAlias(const QString &drive_alias) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->drive_alias = drive_alias;
    d->drive_alias_isSet = true;
}

bool OAIDrive::is_drive_alias_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->drive_alias_isSet;
}

bool OAIDrive::is_drive_alias_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->drive_alias_isValid;
}

OAIIdentitySet OAIDrive::getOwner() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->owner;
}
void OAIDrive::setOwner(const OAIIdentitySet &owner) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->owner = owner;
    d->owner_isSet = true;
}

bool OAIDrive::is_owner_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->owner_isSet;
}

bool OAIDrive::is_owner_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->owner_isValid;
}

OAIQuota OAIDrive::getQuota() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->quota;
}
void OAIDrive::setQuota(const OAIQuota &quota) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->quota = quota;
    d->quota_isSet = true;
}

bool OAIDrive::is_quota_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->quota_isSet;
}

bool OAIDrive::is_quota_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->quota_isValid;
}

QList<OAIDriveItem> OAIDrive::getItems() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->items;
}
void OAIDrive::setItems(const QList<OAIDriveItem> &items) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->items = items;
    d->items_isSet = true;
}

bool OAIDrive::is_items_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->items_isSet;
}

bool OAIDrive::is_items_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->items_isValid;
}

OAIDriveItem OAIDrive::getRoot() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->root;
}
void OAIDrive::setRoot(const OAIDriveItem &root) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->root = root;
    d->root_isSet = true;
}

bool OAIDrive::is_root_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->root_isSet;
}

bool OAIDrive::is_root_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->root_isValid;
}

QList<OAIDriveItem> OAIDrive::getSpecial() const {
    Q_D(const OAIDrive);
    if(!d){
        return {};
    }
    return d->special;
}
void OAIDrive::setSpecial(const QList<OAIDriveItem> &special) {
    Q_D(OAIDrive);
    Q_ASSERT(d);

    d->special = special;
    d->special_isSet = true;
}

bool OAIDrive::is_special_Set() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }

    return d->special_isSet;
}

bool OAIDrive::is_special_Valid() const{
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    return d->special_isValid;
}

bool OAIDrive::isSet() const {
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->created_by.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->created_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->e_tag_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->last_modified_by.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->last_modified_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->parent_reference.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->web_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->created_by_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->last_modified_by_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->drive_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->drive_alias_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->owner.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->quota.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->items.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->root.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->special.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDrive::isValid() const {
    Q_D(const OAIDrive);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
