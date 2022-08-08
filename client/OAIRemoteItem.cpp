// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.16.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIRemoteItem.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIRemoteItemPrivate {
    friend class OAIRemoteItem;

     OAIIdentitySet created_by;
     bool created_by_isSet;
     bool created_by_isValid;

     QDateTime created_date_time;
     bool created_date_time_isSet;
     bool created_date_time_isValid;

     OAIOpenGraphFile file;
     bool file_isSet;
     bool file_isValid;

     OAIFileSystemInfo file_system_info;
     bool file_system_info_isSet;
     bool file_system_info_isValid;

     OAIFolder folder;
     bool folder_isSet;
     bool folder_isValid;

     QString id;
     bool id_isSet;
     bool id_isValid;

     OAIImage image;
     bool image_isSet;
     bool image_isValid;

     OAIIdentitySet last_modified_by;
     bool last_modified_by_isSet;
     bool last_modified_by_isValid;

     QDateTime last_modified_date_time;
     bool last_modified_date_time_isSet;
     bool last_modified_date_time_isValid;

     QString name;
     bool name_isSet;
     bool name_isValid;

     QString e_tag;
     bool e_tag_isSet;
     bool e_tag_isValid;

     QString c_tag;
     bool c_tag_isSet;
     bool c_tag_isValid;

     OAIItemReference parent_reference;
     bool parent_reference_isSet;
     bool parent_reference_isValid;

     OAIShared shared;
     bool shared_isSet;
     bool shared_isValid;

     qint64 size;
     bool size_isSet;
     bool size_isValid;

     OAISpecialFolder special_folder;
     bool special_folder_isSet;
     bool special_folder_isValid;

     QString web_dav_url;
     bool web_dav_url_isSet;
     bool web_dav_url_isValid;

     QString web_url;
     bool web_url_isSet;
     bool web_url_isValid;
};

OAIRemoteItem::OAIRemoteItem()
    : d_ptr()
{
}

OAIRemoteItem::OAIRemoteItem(const OAIRemoteItem& other)
    : d_ptr(other.d_ptr)
{
}

OAIRemoteItem::OAIRemoteItem(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIRemoteItem::~OAIRemoteItem() = default;

void OAIRemoteItem::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIRemoteItemPrivate{});

        Q_D(OAIRemoteItem);


        d->created_by_isSet = false;
        d->created_by_isValid = false;

        d->created_date_time_isSet = false;
        d->created_date_time_isValid = false;

        d->file_isSet = false;
        d->file_isValid = false;

        d->file_system_info_isSet = false;
        d->file_system_info_isValid = false;

        d->folder_isSet = false;
        d->folder_isValid = false;

        d->id_isSet = false;
        d->id_isValid = false;

        d->image_isSet = false;
        d->image_isValid = false;

        d->last_modified_by_isSet = false;
        d->last_modified_by_isValid = false;

        d->last_modified_date_time_isSet = false;
        d->last_modified_date_time_isValid = false;

        d->name_isSet = false;
        d->name_isValid = false;

        d->e_tag_isSet = false;
        d->e_tag_isValid = false;

        d->c_tag_isSet = false;
        d->c_tag_isValid = false;

        d->parent_reference_isSet = false;
        d->parent_reference_isValid = false;

        d->shared_isSet = false;
        d->shared_isValid = false;

        d->size_isSet = false;
        d->size_isValid = false;

        d->special_folder_isSet = false;
        d->special_folder_isValid = false;

        d->web_dav_url_isSet = false;
        d->web_dav_url_isValid = false;

        d->web_url_isSet = false;
        d->web_url_isValid = false;
    }
}

void OAIRemoteItem::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRemoteItem::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIRemoteItem);

    d->created_by_isValid = ::OpenAPI::fromJsonValue(d->created_by, json[QString("createdBy")]);
    d->created_by_isSet = !json[QString("createdBy")].isNull() && d->created_by_isValid;

    d->created_date_time_isValid = ::OpenAPI::fromJsonValue(d->created_date_time, json[QString("createdDateTime")]);
    d->created_date_time_isSet = !json[QString("createdDateTime")].isNull() && d->created_date_time_isValid;

    d->file_isValid = ::OpenAPI::fromJsonValue(d->file, json[QString("file")]);
    d->file_isSet = !json[QString("file")].isNull() && d->file_isValid;

    d->file_system_info_isValid = ::OpenAPI::fromJsonValue(d->file_system_info, json[QString("fileSystemInfo")]);
    d->file_system_info_isSet = !json[QString("fileSystemInfo")].isNull() && d->file_system_info_isValid;

    d->folder_isValid = ::OpenAPI::fromJsonValue(d->folder, json[QString("folder")]);
    d->folder_isSet = !json[QString("folder")].isNull() && d->folder_isValid;

    d->id_isValid = ::OpenAPI::fromJsonValue(d->id, json[QString("id")]);
    d->id_isSet = !json[QString("id")].isNull() && d->id_isValid;

    d->image_isValid = ::OpenAPI::fromJsonValue(d->image, json[QString("image")]);
    d->image_isSet = !json[QString("image")].isNull() && d->image_isValid;

    d->last_modified_by_isValid = ::OpenAPI::fromJsonValue(d->last_modified_by, json[QString("lastModifiedBy")]);
    d->last_modified_by_isSet = !json[QString("lastModifiedBy")].isNull() && d->last_modified_by_isValid;

    d->last_modified_date_time_isValid = ::OpenAPI::fromJsonValue(d->last_modified_date_time, json[QString("lastModifiedDateTime")]);
    d->last_modified_date_time_isSet = !json[QString("lastModifiedDateTime")].isNull() && d->last_modified_date_time_isValid;

    d->name_isValid = ::OpenAPI::fromJsonValue(d->name, json[QString("name")]);
    d->name_isSet = !json[QString("name")].isNull() && d->name_isValid;

    d->e_tag_isValid = ::OpenAPI::fromJsonValue(d->e_tag, json[QString("eTag")]);
    d->e_tag_isSet = !json[QString("eTag")].isNull() && d->e_tag_isValid;

    d->c_tag_isValid = ::OpenAPI::fromJsonValue(d->c_tag, json[QString("cTag")]);
    d->c_tag_isSet = !json[QString("cTag")].isNull() && d->c_tag_isValid;

    d->parent_reference_isValid = ::OpenAPI::fromJsonValue(d->parent_reference, json[QString("parentReference")]);
    d->parent_reference_isSet = !json[QString("parentReference")].isNull() && d->parent_reference_isValid;

    d->shared_isValid = ::OpenAPI::fromJsonValue(d->shared, json[QString("shared")]);
    d->shared_isSet = !json[QString("shared")].isNull() && d->shared_isValid;

    d->size_isValid = ::OpenAPI::fromJsonValue(d->size, json[QString("size")]);
    d->size_isSet = !json[QString("size")].isNull() && d->size_isValid;

    d->special_folder_isValid = ::OpenAPI::fromJsonValue(d->special_folder, json[QString("specialFolder")]);
    d->special_folder_isSet = !json[QString("specialFolder")].isNull() && d->special_folder_isValid;

    d->web_dav_url_isValid = ::OpenAPI::fromJsonValue(d->web_dav_url, json[QString("webDavUrl")]);
    d->web_dav_url_isSet = !json[QString("webDavUrl")].isNull() && d->web_dav_url_isValid;

    d->web_url_isValid = ::OpenAPI::fromJsonValue(d->web_url, json[QString("webUrl")]);
    d->web_url_isSet = !json[QString("webUrl")].isNull() && d->web_url_isValid;
}

QString OAIRemoteItem::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRemoteItem::asJsonObject() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->created_by.isSet()) {
        obj.insert(QString("createdBy"), ::OpenAPI::toJsonValue(d->created_by));
    }
    if (d->created_date_time_isSet) {
        obj.insert(QString("createdDateTime"), ::OpenAPI::toJsonValue(d->created_date_time));
    }
    if (d->file.isSet()) {
        obj.insert(QString("file"), ::OpenAPI::toJsonValue(d->file));
    }
    if (d->file_system_info.isSet()) {
        obj.insert(QString("fileSystemInfo"), ::OpenAPI::toJsonValue(d->file_system_info));
    }
    if (d->folder.isSet()) {
        obj.insert(QString("folder"), ::OpenAPI::toJsonValue(d->folder));
    }
    if (d->id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(d->id));
    }
    if (d->image.isSet()) {
        obj.insert(QString("image"), ::OpenAPI::toJsonValue(d->image));
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
    if (d->e_tag_isSet) {
        obj.insert(QString("eTag"), ::OpenAPI::toJsonValue(d->e_tag));
    }
    if (d->c_tag_isSet) {
        obj.insert(QString("cTag"), ::OpenAPI::toJsonValue(d->c_tag));
    }
    if (d->parent_reference.isSet()) {
        obj.insert(QString("parentReference"), ::OpenAPI::toJsonValue(d->parent_reference));
    }
    if (d->shared.isSet()) {
        obj.insert(QString("shared"), ::OpenAPI::toJsonValue(d->shared));
    }
    if (d->size_isSet) {
        obj.insert(QString("size"), ::OpenAPI::toJsonValue(d->size));
    }
    if (d->special_folder.isSet()) {
        obj.insert(QString("specialFolder"), ::OpenAPI::toJsonValue(d->special_folder));
    }
    if (d->web_dav_url_isSet) {
        obj.insert(QString("webDavUrl"), ::OpenAPI::toJsonValue(d->web_dav_url));
    }
    if (d->web_url_isSet) {
        obj.insert(QString("webUrl"), ::OpenAPI::toJsonValue(d->web_url));
    }
    return obj;
}

OAIIdentitySet OAIRemoteItem::getCreatedBy() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->created_by;
}
void OAIRemoteItem::setCreatedBy(const OAIIdentitySet &created_by) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->created_by = created_by;
    d->created_by_isSet = true;
}

bool OAIRemoteItem::is_created_by_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->created_by_isSet;
}

bool OAIRemoteItem::is_created_by_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->created_by_isValid;
}

QDateTime OAIRemoteItem::getCreatedDateTime() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->created_date_time;
}
void OAIRemoteItem::setCreatedDateTime(const QDateTime &created_date_time) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->created_date_time = created_date_time;
    d->created_date_time_isSet = true;
}

bool OAIRemoteItem::is_created_date_time_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->created_date_time_isSet;
}

bool OAIRemoteItem::is_created_date_time_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->created_date_time_isValid;
}

OAIOpenGraphFile OAIRemoteItem::getFile() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->file;
}
void OAIRemoteItem::setFile(const OAIOpenGraphFile &file) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->file = file;
    d->file_isSet = true;
}

bool OAIRemoteItem::is_file_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->file_isSet;
}

bool OAIRemoteItem::is_file_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->file_isValid;
}

OAIFileSystemInfo OAIRemoteItem::getFileSystemInfo() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->file_system_info;
}
void OAIRemoteItem::setFileSystemInfo(const OAIFileSystemInfo &file_system_info) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->file_system_info = file_system_info;
    d->file_system_info_isSet = true;
}

bool OAIRemoteItem::is_file_system_info_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->file_system_info_isSet;
}

bool OAIRemoteItem::is_file_system_info_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->file_system_info_isValid;
}

OAIFolder OAIRemoteItem::getFolder() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->folder;
}
void OAIRemoteItem::setFolder(const OAIFolder &folder) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->folder = folder;
    d->folder_isSet = true;
}

bool OAIRemoteItem::is_folder_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->folder_isSet;
}

bool OAIRemoteItem::is_folder_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->folder_isValid;
}

QString OAIRemoteItem::getId() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->id;
}
void OAIRemoteItem::setId(const QString &id) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->id = id;
    d->id_isSet = true;
}

bool OAIRemoteItem::is_id_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->id_isSet;
}

bool OAIRemoteItem::is_id_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->id_isValid;
}

OAIImage OAIRemoteItem::getImage() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->image;
}
void OAIRemoteItem::setImage(const OAIImage &image) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->image = image;
    d->image_isSet = true;
}

bool OAIRemoteItem::is_image_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->image_isSet;
}

bool OAIRemoteItem::is_image_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->image_isValid;
}

OAIIdentitySet OAIRemoteItem::getLastModifiedBy() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->last_modified_by;
}
void OAIRemoteItem::setLastModifiedBy(const OAIIdentitySet &last_modified_by) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->last_modified_by = last_modified_by;
    d->last_modified_by_isSet = true;
}

bool OAIRemoteItem::is_last_modified_by_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->last_modified_by_isSet;
}

bool OAIRemoteItem::is_last_modified_by_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->last_modified_by_isValid;
}

QDateTime OAIRemoteItem::getLastModifiedDateTime() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->last_modified_date_time;
}
void OAIRemoteItem::setLastModifiedDateTime(const QDateTime &last_modified_date_time) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->last_modified_date_time = last_modified_date_time;
    d->last_modified_date_time_isSet = true;
}

bool OAIRemoteItem::is_last_modified_date_time_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->last_modified_date_time_isSet;
}

bool OAIRemoteItem::is_last_modified_date_time_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->last_modified_date_time_isValid;
}

QString OAIRemoteItem::getName() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->name;
}
void OAIRemoteItem::setName(const QString &name) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->name = name;
    d->name_isSet = true;
}

bool OAIRemoteItem::is_name_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->name_isSet;
}

bool OAIRemoteItem::is_name_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->name_isValid;
}

QString OAIRemoteItem::getETag() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->e_tag;
}
void OAIRemoteItem::setETag(const QString &e_tag) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->e_tag = e_tag;
    d->e_tag_isSet = true;
}

bool OAIRemoteItem::is_e_tag_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->e_tag_isSet;
}

bool OAIRemoteItem::is_e_tag_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->e_tag_isValid;
}

QString OAIRemoteItem::getCTag() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->c_tag;
}
void OAIRemoteItem::setCTag(const QString &c_tag) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->c_tag = c_tag;
    d->c_tag_isSet = true;
}

bool OAIRemoteItem::is_c_tag_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->c_tag_isSet;
}

bool OAIRemoteItem::is_c_tag_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->c_tag_isValid;
}

OAIItemReference OAIRemoteItem::getParentReference() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->parent_reference;
}
void OAIRemoteItem::setParentReference(const OAIItemReference &parent_reference) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->parent_reference = parent_reference;
    d->parent_reference_isSet = true;
}

bool OAIRemoteItem::is_parent_reference_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->parent_reference_isSet;
}

bool OAIRemoteItem::is_parent_reference_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->parent_reference_isValid;
}

OAIShared OAIRemoteItem::getShared() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->shared;
}
void OAIRemoteItem::setShared(const OAIShared &shared) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->shared = shared;
    d->shared_isSet = true;
}

bool OAIRemoteItem::is_shared_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->shared_isSet;
}

bool OAIRemoteItem::is_shared_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->shared_isValid;
}

qint64 OAIRemoteItem::getSize() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->size;
}
void OAIRemoteItem::setSize(const qint64 &size) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->size = size;
    d->size_isSet = true;
}

bool OAIRemoteItem::is_size_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->size_isSet;
}

bool OAIRemoteItem::is_size_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->size_isValid;
}

OAISpecialFolder OAIRemoteItem::getSpecialFolder() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->special_folder;
}
void OAIRemoteItem::setSpecialFolder(const OAISpecialFolder &special_folder) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->special_folder = special_folder;
    d->special_folder_isSet = true;
}

bool OAIRemoteItem::is_special_folder_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->special_folder_isSet;
}

bool OAIRemoteItem::is_special_folder_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->special_folder_isValid;
}

QString OAIRemoteItem::getWebDavUrl() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->web_dav_url;
}
void OAIRemoteItem::setWebDavUrl(const QString &web_dav_url) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->web_dav_url = web_dav_url;
    d->web_dav_url_isSet = true;
}

bool OAIRemoteItem::is_web_dav_url_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->web_dav_url_isSet;
}

bool OAIRemoteItem::is_web_dav_url_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->web_dav_url_isValid;
}

QString OAIRemoteItem::getWebUrl() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return {};
    }
    return d->web_url;
}
void OAIRemoteItem::setWebUrl(const QString &web_url) {
    Q_D(OAIRemoteItem);
    Q_ASSERT(d);

    d->web_url = web_url;
    d->web_url_isSet = true;
}

bool OAIRemoteItem::is_web_url_Set() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }

    return d->web_url_isSet;
}

bool OAIRemoteItem::is_web_url_Valid() const{
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    return d->web_url_isValid;
}

bool OAIRemoteItem::isSet() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->created_by.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->created_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->file.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->file_system_info.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->folder.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->image.isSet()) {
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

        if (d->e_tag_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->c_tag_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->parent_reference.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->shared.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->special_folder.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->web_dav_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->web_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIRemoteItem::isValid() const {
    Q_D(const OAIRemoteItem);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
