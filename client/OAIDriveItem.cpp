/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.7.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIDriveItem.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDriveItem::OAIDriveItem(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDriveItem::OAIDriveItem() {
    this->initializeModel();
}

OAIDriveItem::~OAIDriveItem() {}

void OAIDriveItem::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_created_by_isSet = false;
    m_created_by_isValid = false;

    m_created_date_time_isSet = false;
    m_created_date_time_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_e_tag_isSet = false;
    m_e_tag_isValid = false;

    m_last_modified_by_isSet = false;
    m_last_modified_by_isValid = false;

    m_last_modified_date_time_isSet = false;
    m_last_modified_date_time_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_parent_reference_isSet = false;
    m_parent_reference_isValid = false;

    m_web_url_isSet = false;
    m_web_url_isValid = false;

    m_created_by_user_isSet = false;
    m_created_by_user_isValid = false;

    m_last_modified_by_user_isSet = false;
    m_last_modified_by_user_isValid = false;

    m_content_isSet = false;
    m_content_isValid = false;

    m_c_tag_isSet = false;
    m_c_tag_isValid = false;

    m_deleted_isSet = false;
    m_deleted_isValid = false;

    m_file_isSet = false;
    m_file_isValid = false;

    m_file_system_info_isSet = false;
    m_file_system_info_isValid = false;

    m_folder_isSet = false;
    m_folder_isValid = false;

    m_image_isSet = false;
    m_image_isValid = false;

    m_root_isSet = false;
    m_root_isValid = false;

    m_trash_isSet = false;
    m_trash_isValid = false;

    m_size_isSet = false;
    m_size_isValid = false;

    m_web_dav_url_isSet = false;
    m_web_dav_url_isValid = false;

    m_children_isSet = false;
    m_children_isValid = false;
}

void OAIDriveItem::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDriveItem::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_created_by_isValid = ::OpenAPI::fromJsonValue(created_by, json[QString("createdBy")]);
    m_created_by_isSet = !json[QString("createdBy")].isNull() && m_created_by_isValid;

    m_created_date_time_isValid = ::OpenAPI::fromJsonValue(created_date_time, json[QString("createdDateTime")]);
    m_created_date_time_isSet = !json[QString("createdDateTime")].isNull() && m_created_date_time_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_e_tag_isValid = ::OpenAPI::fromJsonValue(e_tag, json[QString("eTag")]);
    m_e_tag_isSet = !json[QString("eTag")].isNull() && m_e_tag_isValid;

    m_last_modified_by_isValid = ::OpenAPI::fromJsonValue(last_modified_by, json[QString("lastModifiedBy")]);
    m_last_modified_by_isSet = !json[QString("lastModifiedBy")].isNull() && m_last_modified_by_isValid;

    m_last_modified_date_time_isValid = ::OpenAPI::fromJsonValue(last_modified_date_time, json[QString("lastModifiedDateTime")]);
    m_last_modified_date_time_isSet = !json[QString("lastModifiedDateTime")].isNull() && m_last_modified_date_time_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_parent_reference_isValid = ::OpenAPI::fromJsonValue(parent_reference, json[QString("parentReference")]);
    m_parent_reference_isSet = !json[QString("parentReference")].isNull() && m_parent_reference_isValid;

    m_web_url_isValid = ::OpenAPI::fromJsonValue(web_url, json[QString("webUrl")]);
    m_web_url_isSet = !json[QString("webUrl")].isNull() && m_web_url_isValid;

    m_created_by_user_isValid = ::OpenAPI::fromJsonValue(created_by_user, json[QString("createdByUser")]);
    m_created_by_user_isSet = !json[QString("createdByUser")].isNull() && m_created_by_user_isValid;

    m_last_modified_by_user_isValid = ::OpenAPI::fromJsonValue(last_modified_by_user, json[QString("lastModifiedByUser")]);
    m_last_modified_by_user_isSet = !json[QString("lastModifiedByUser")].isNull() && m_last_modified_by_user_isValid;

    m_content_isValid = ::OpenAPI::fromJsonValue(content, json[QString("content")]);
    m_content_isSet = !json[QString("content")].isNull() && m_content_isValid;

    m_c_tag_isValid = ::OpenAPI::fromJsonValue(c_tag, json[QString("cTag")]);
    m_c_tag_isSet = !json[QString("cTag")].isNull() && m_c_tag_isValid;

    m_deleted_isValid = ::OpenAPI::fromJsonValue(deleted, json[QString("deleted")]);
    m_deleted_isSet = !json[QString("deleted")].isNull() && m_deleted_isValid;

    m_file_isValid = ::OpenAPI::fromJsonValue(file, json[QString("file")]);
    m_file_isSet = !json[QString("file")].isNull() && m_file_isValid;

    m_file_system_info_isValid = ::OpenAPI::fromJsonValue(file_system_info, json[QString("fileSystemInfo")]);
    m_file_system_info_isSet = !json[QString("fileSystemInfo")].isNull() && m_file_system_info_isValid;

    m_folder_isValid = ::OpenAPI::fromJsonValue(folder, json[QString("folder")]);
    m_folder_isSet = !json[QString("folder")].isNull() && m_folder_isValid;

    m_image_isValid = ::OpenAPI::fromJsonValue(image, json[QString("image")]);
    m_image_isSet = !json[QString("image")].isNull() && m_image_isValid;

    m_root_isValid = ::OpenAPI::fromJsonValue(root, json[QString("root")]);
    m_root_isSet = !json[QString("root")].isNull() && m_root_isValid;

    m_trash_isValid = ::OpenAPI::fromJsonValue(trash, json[QString("trash")]);
    m_trash_isSet = !json[QString("trash")].isNull() && m_trash_isValid;

    m_size_isValid = ::OpenAPI::fromJsonValue(size, json[QString("size")]);
    m_size_isSet = !json[QString("size")].isNull() && m_size_isValid;

    m_web_dav_url_isValid = ::OpenAPI::fromJsonValue(web_dav_url, json[QString("webDavUrl")]);
    m_web_dav_url_isSet = !json[QString("webDavUrl")].isNull() && m_web_dav_url_isValid;

    m_children_isValid = ::OpenAPI::fromJsonValue(children, json[QString("children")]);
    m_children_isSet = !json[QString("children")].isNull() && m_children_isValid;
}

QString OAIDriveItem::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDriveItem::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (created_by.isSet()) {
        obj.insert(QString("createdBy"), ::OpenAPI::toJsonValue(created_by));
    }
    if (m_created_date_time_isSet) {
        obj.insert(QString("createdDateTime"), ::OpenAPI::toJsonValue(created_date_time));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
    if (m_e_tag_isSet) {
        obj.insert(QString("eTag"), ::OpenAPI::toJsonValue(e_tag));
    }
    if (last_modified_by.isSet()) {
        obj.insert(QString("lastModifiedBy"), ::OpenAPI::toJsonValue(last_modified_by));
    }
    if (m_last_modified_date_time_isSet) {
        obj.insert(QString("lastModifiedDateTime"), ::OpenAPI::toJsonValue(last_modified_date_time));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (parent_reference.isSet()) {
        obj.insert(QString("parentReference"), ::OpenAPI::toJsonValue(parent_reference));
    }
    if (m_web_url_isSet) {
        obj.insert(QString("webUrl"), ::OpenAPI::toJsonValue(web_url));
    }
    if (created_by_user.isSet()) {
        obj.insert(QString("createdByUser"), ::OpenAPI::toJsonValue(created_by_user));
    }
    if (last_modified_by_user.isSet()) {
        obj.insert(QString("lastModifiedByUser"), ::OpenAPI::toJsonValue(last_modified_by_user));
    }
    if (m_content_isSet) {
        obj.insert(QString("content"), ::OpenAPI::toJsonValue(content));
    }
    if (m_c_tag_isSet) {
        obj.insert(QString("cTag"), ::OpenAPI::toJsonValue(c_tag));
    }
    if (deleted.isSet()) {
        obj.insert(QString("deleted"), ::OpenAPI::toJsonValue(deleted));
    }
    if (file.isSet()) {
        obj.insert(QString("file"), ::OpenAPI::toJsonValue(file));
    }
    if (file_system_info.isSet()) {
        obj.insert(QString("fileSystemInfo"), ::OpenAPI::toJsonValue(file_system_info));
    }
    if (folder.isSet()) {
        obj.insert(QString("folder"), ::OpenAPI::toJsonValue(folder));
    }
    if (image.isSet()) {
        obj.insert(QString("image"), ::OpenAPI::toJsonValue(image));
    }
    if (m_root_isSet) {
        obj.insert(QString("root"), ::OpenAPI::toJsonValue(root));
    }
    if (trash.isSet()) {
        obj.insert(QString("trash"), ::OpenAPI::toJsonValue(trash));
    }
    if (m_size_isSet) {
        obj.insert(QString("size"), ::OpenAPI::toJsonValue(size));
    }
    if (m_web_dav_url_isSet) {
        obj.insert(QString("webDavUrl"), ::OpenAPI::toJsonValue(web_dav_url));
    }
    if (children.size() > 0) {
        obj.insert(QString("children"), ::OpenAPI::toJsonValue(children));
    }
    return obj;
}

QString OAIDriveItem::getId() const {
    return id;
}
void OAIDriveItem::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIDriveItem::is_id_Set() const{
    return m_id_isSet;
}

bool OAIDriveItem::is_id_Valid() const{
    return m_id_isValid;
}

OAIIdentitySet OAIDriveItem::getCreatedBy() const {
    return created_by;
}
void OAIDriveItem::setCreatedBy(const OAIIdentitySet &created_by) {
    this->created_by = created_by;
    this->m_created_by_isSet = true;
}

bool OAIDriveItem::is_created_by_Set() const{
    return m_created_by_isSet;
}

bool OAIDriveItem::is_created_by_Valid() const{
    return m_created_by_isValid;
}

QDateTime OAIDriveItem::getCreatedDateTime() const {
    return created_date_time;
}
void OAIDriveItem::setCreatedDateTime(const QDateTime &created_date_time) {
    this->created_date_time = created_date_time;
    this->m_created_date_time_isSet = true;
}

bool OAIDriveItem::is_created_date_time_Set() const{
    return m_created_date_time_isSet;
}

bool OAIDriveItem::is_created_date_time_Valid() const{
    return m_created_date_time_isValid;
}

QString OAIDriveItem::getDescription() const {
    return description;
}
void OAIDriveItem::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAIDriveItem::is_description_Set() const{
    return m_description_isSet;
}

bool OAIDriveItem::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIDriveItem::getETag() const {
    return e_tag;
}
void OAIDriveItem::setETag(const QString &e_tag) {
    this->e_tag = e_tag;
    this->m_e_tag_isSet = true;
}

bool OAIDriveItem::is_e_tag_Set() const{
    return m_e_tag_isSet;
}

bool OAIDriveItem::is_e_tag_Valid() const{
    return m_e_tag_isValid;
}

OAIIdentitySet OAIDriveItem::getLastModifiedBy() const {
    return last_modified_by;
}
void OAIDriveItem::setLastModifiedBy(const OAIIdentitySet &last_modified_by) {
    this->last_modified_by = last_modified_by;
    this->m_last_modified_by_isSet = true;
}

bool OAIDriveItem::is_last_modified_by_Set() const{
    return m_last_modified_by_isSet;
}

bool OAIDriveItem::is_last_modified_by_Valid() const{
    return m_last_modified_by_isValid;
}

QDateTime OAIDriveItem::getLastModifiedDateTime() const {
    return last_modified_date_time;
}
void OAIDriveItem::setLastModifiedDateTime(const QDateTime &last_modified_date_time) {
    this->last_modified_date_time = last_modified_date_time;
    this->m_last_modified_date_time_isSet = true;
}

bool OAIDriveItem::is_last_modified_date_time_Set() const{
    return m_last_modified_date_time_isSet;
}

bool OAIDriveItem::is_last_modified_date_time_Valid() const{
    return m_last_modified_date_time_isValid;
}

QString OAIDriveItem::getName() const {
    return name;
}
void OAIDriveItem::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIDriveItem::is_name_Set() const{
    return m_name_isSet;
}

bool OAIDriveItem::is_name_Valid() const{
    return m_name_isValid;
}

OAIItemReference OAIDriveItem::getParentReference() const {
    return parent_reference;
}
void OAIDriveItem::setParentReference(const OAIItemReference &parent_reference) {
    this->parent_reference = parent_reference;
    this->m_parent_reference_isSet = true;
}

bool OAIDriveItem::is_parent_reference_Set() const{
    return m_parent_reference_isSet;
}

bool OAIDriveItem::is_parent_reference_Valid() const{
    return m_parent_reference_isValid;
}

QString OAIDriveItem::getWebUrl() const {
    return web_url;
}
void OAIDriveItem::setWebUrl(const QString &web_url) {
    this->web_url = web_url;
    this->m_web_url_isSet = true;
}

bool OAIDriveItem::is_web_url_Set() const{
    return m_web_url_isSet;
}

bool OAIDriveItem::is_web_url_Valid() const{
    return m_web_url_isValid;
}

OAIUser OAIDriveItem::getCreatedByUser() const {
    return created_by_user;
}
void OAIDriveItem::setCreatedByUser(const OAIUser &created_by_user) {
    this->created_by_user = created_by_user;
    this->m_created_by_user_isSet = true;
}

bool OAIDriveItem::is_created_by_user_Set() const{
    return m_created_by_user_isSet;
}

bool OAIDriveItem::is_created_by_user_Valid() const{
    return m_created_by_user_isValid;
}

OAIUser OAIDriveItem::getLastModifiedByUser() const {
    return last_modified_by_user;
}
void OAIDriveItem::setLastModifiedByUser(const OAIUser &last_modified_by_user) {
    this->last_modified_by_user = last_modified_by_user;
    this->m_last_modified_by_user_isSet = true;
}

bool OAIDriveItem::is_last_modified_by_user_Set() const{
    return m_last_modified_by_user_isSet;
}

bool OAIDriveItem::is_last_modified_by_user_Valid() const{
    return m_last_modified_by_user_isValid;
}

QString OAIDriveItem::getContent() const {
    return content;
}
void OAIDriveItem::setContent(const QString &content) {
    this->content = content;
    this->m_content_isSet = true;
}

bool OAIDriveItem::is_content_Set() const{
    return m_content_isSet;
}

bool OAIDriveItem::is_content_Valid() const{
    return m_content_isValid;
}

QString OAIDriveItem::getCTag() const {
    return c_tag;
}
void OAIDriveItem::setCTag(const QString &c_tag) {
    this->c_tag = c_tag;
    this->m_c_tag_isSet = true;
}

bool OAIDriveItem::is_c_tag_Set() const{
    return m_c_tag_isSet;
}

bool OAIDriveItem::is_c_tag_Valid() const{
    return m_c_tag_isValid;
}

OAIDeleted OAIDriveItem::getDeleted() const {
    return deleted;
}
void OAIDriveItem::setDeleted(const OAIDeleted &deleted) {
    this->deleted = deleted;
    this->m_deleted_isSet = true;
}

bool OAIDriveItem::is_deleted_Set() const{
    return m_deleted_isSet;
}

bool OAIDriveItem::is_deleted_Valid() const{
    return m_deleted_isValid;
}

OAIOpenGraphFile OAIDriveItem::getFile() const {
    return file;
}
void OAIDriveItem::setFile(const OAIOpenGraphFile &file) {
    this->file = file;
    this->m_file_isSet = true;
}

bool OAIDriveItem::is_file_Set() const{
    return m_file_isSet;
}

bool OAIDriveItem::is_file_Valid() const{
    return m_file_isValid;
}

OAIFileSystemInfo OAIDriveItem::getFileSystemInfo() const {
    return file_system_info;
}
void OAIDriveItem::setFileSystemInfo(const OAIFileSystemInfo &file_system_info) {
    this->file_system_info = file_system_info;
    this->m_file_system_info_isSet = true;
}

bool OAIDriveItem::is_file_system_info_Set() const{
    return m_file_system_info_isSet;
}

bool OAIDriveItem::is_file_system_info_Valid() const{
    return m_file_system_info_isValid;
}

OAIFolder OAIDriveItem::getFolder() const {
    return folder;
}
void OAIDriveItem::setFolder(const OAIFolder &folder) {
    this->folder = folder;
    this->m_folder_isSet = true;
}

bool OAIDriveItem::is_folder_Set() const{
    return m_folder_isSet;
}

bool OAIDriveItem::is_folder_Valid() const{
    return m_folder_isValid;
}

OAIImage OAIDriveItem::getImage() const {
    return image;
}
void OAIDriveItem::setImage(const OAIImage &image) {
    this->image = image;
    this->m_image_isSet = true;
}

bool OAIDriveItem::is_image_Set() const{
    return m_image_isSet;
}

bool OAIDriveItem::is_image_Valid() const{
    return m_image_isValid;
}

OAIObject OAIDriveItem::getRoot() const {
    return root;
}
void OAIDriveItem::setRoot(const OAIObject &root) {
    this->root = root;
    this->m_root_isSet = true;
}

bool OAIDriveItem::is_root_Set() const{
    return m_root_isSet;
}

bool OAIDriveItem::is_root_Valid() const{
    return m_root_isValid;
}

OAITrash OAIDriveItem::getTrash() const {
    return trash;
}
void OAIDriveItem::setTrash(const OAITrash &trash) {
    this->trash = trash;
    this->m_trash_isSet = true;
}

bool OAIDriveItem::is_trash_Set() const{
    return m_trash_isSet;
}

bool OAIDriveItem::is_trash_Valid() const{
    return m_trash_isValid;
}

qint64 OAIDriveItem::getSize() const {
    return size;
}
void OAIDriveItem::setSize(const qint64 &size) {
    this->size = size;
    this->m_size_isSet = true;
}

bool OAIDriveItem::is_size_Set() const{
    return m_size_isSet;
}

bool OAIDriveItem::is_size_Valid() const{
    return m_size_isValid;
}

QString OAIDriveItem::getWebDavUrl() const {
    return web_dav_url;
}
void OAIDriveItem::setWebDavUrl(const QString &web_dav_url) {
    this->web_dav_url = web_dav_url;
    this->m_web_dav_url_isSet = true;
}

bool OAIDriveItem::is_web_dav_url_Set() const{
    return m_web_dav_url_isSet;
}

bool OAIDriveItem::is_web_dav_url_Valid() const{
    return m_web_dav_url_isValid;
}

QList<OAIDriveItem> OAIDriveItem::getChildren() const {
    return children;
}
void OAIDriveItem::setChildren(const QList<OAIDriveItem> &children) {
    this->children = children;
    this->m_children_isSet = true;
}

bool OAIDriveItem::is_children_Set() const{
    return m_children_isSet;
}

bool OAIDriveItem::is_children_Valid() const{
    return m_children_isValid;
}

bool OAIDriveItem::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (created_by.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_tag_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (last_modified_by.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_modified_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (parent_reference.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_web_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (created_by_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (last_modified_by_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_c_tag_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (deleted.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (file.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (file_system_info.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (folder.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (image.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_root_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (trash.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_web_dav_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (children.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDriveItem::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
