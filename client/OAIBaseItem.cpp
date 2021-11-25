/**
 * Open Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.1.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIBaseItem.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBaseItem::OAIBaseItem(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBaseItem::OAIBaseItem() {
    this->initializeModel();
}

OAIBaseItem::~OAIBaseItem() {}

void OAIBaseItem::initializeModel() {

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
}

void OAIBaseItem::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBaseItem::fromJsonObject(QJsonObject json) {

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
}

QString OAIBaseItem::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBaseItem::asJsonObject() const {
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
    return obj;
}

QString OAIBaseItem::getId() const {
    return id;
}
void OAIBaseItem::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIBaseItem::is_id_Set() const{
    return m_id_isSet;
}

bool OAIBaseItem::is_id_Valid() const{
    return m_id_isValid;
}

OAIIdentitySet OAIBaseItem::getCreatedBy() const {
    return created_by;
}
void OAIBaseItem::setCreatedBy(const OAIIdentitySet &created_by) {
    this->created_by = created_by;
    this->m_created_by_isSet = true;
}

bool OAIBaseItem::is_created_by_Set() const{
    return m_created_by_isSet;
}

bool OAIBaseItem::is_created_by_Valid() const{
    return m_created_by_isValid;
}

QDateTime OAIBaseItem::getCreatedDateTime() const {
    return created_date_time;
}
void OAIBaseItem::setCreatedDateTime(const QDateTime &created_date_time) {
    this->created_date_time = created_date_time;
    this->m_created_date_time_isSet = true;
}

bool OAIBaseItem::is_created_date_time_Set() const{
    return m_created_date_time_isSet;
}

bool OAIBaseItem::is_created_date_time_Valid() const{
    return m_created_date_time_isValid;
}

QString OAIBaseItem::getDescription() const {
    return description;
}
void OAIBaseItem::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAIBaseItem::is_description_Set() const{
    return m_description_isSet;
}

bool OAIBaseItem::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIBaseItem::getETag() const {
    return e_tag;
}
void OAIBaseItem::setETag(const QString &e_tag) {
    this->e_tag = e_tag;
    this->m_e_tag_isSet = true;
}

bool OAIBaseItem::is_e_tag_Set() const{
    return m_e_tag_isSet;
}

bool OAIBaseItem::is_e_tag_Valid() const{
    return m_e_tag_isValid;
}

OAIIdentitySet OAIBaseItem::getLastModifiedBy() const {
    return last_modified_by;
}
void OAIBaseItem::setLastModifiedBy(const OAIIdentitySet &last_modified_by) {
    this->last_modified_by = last_modified_by;
    this->m_last_modified_by_isSet = true;
}

bool OAIBaseItem::is_last_modified_by_Set() const{
    return m_last_modified_by_isSet;
}

bool OAIBaseItem::is_last_modified_by_Valid() const{
    return m_last_modified_by_isValid;
}

QDateTime OAIBaseItem::getLastModifiedDateTime() const {
    return last_modified_date_time;
}
void OAIBaseItem::setLastModifiedDateTime(const QDateTime &last_modified_date_time) {
    this->last_modified_date_time = last_modified_date_time;
    this->m_last_modified_date_time_isSet = true;
}

bool OAIBaseItem::is_last_modified_date_time_Set() const{
    return m_last_modified_date_time_isSet;
}

bool OAIBaseItem::is_last_modified_date_time_Valid() const{
    return m_last_modified_date_time_isValid;
}

QString OAIBaseItem::getName() const {
    return name;
}
void OAIBaseItem::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIBaseItem::is_name_Set() const{
    return m_name_isSet;
}

bool OAIBaseItem::is_name_Valid() const{
    return m_name_isValid;
}

OAIItemReference OAIBaseItem::getParentReference() const {
    return parent_reference;
}
void OAIBaseItem::setParentReference(const OAIItemReference &parent_reference) {
    this->parent_reference = parent_reference;
    this->m_parent_reference_isSet = true;
}

bool OAIBaseItem::is_parent_reference_Set() const{
    return m_parent_reference_isSet;
}

bool OAIBaseItem::is_parent_reference_Valid() const{
    return m_parent_reference_isValid;
}

QString OAIBaseItem::getWebUrl() const {
    return web_url;
}
void OAIBaseItem::setWebUrl(const QString &web_url) {
    this->web_url = web_url;
    this->m_web_url_isSet = true;
}

bool OAIBaseItem::is_web_url_Set() const{
    return m_web_url_isSet;
}

bool OAIBaseItem::is_web_url_Valid() const{
    return m_web_url_isValid;
}

OAIUser OAIBaseItem::getCreatedByUser() const {
    return created_by_user;
}
void OAIBaseItem::setCreatedByUser(const OAIUser &created_by_user) {
    this->created_by_user = created_by_user;
    this->m_created_by_user_isSet = true;
}

bool OAIBaseItem::is_created_by_user_Set() const{
    return m_created_by_user_isSet;
}

bool OAIBaseItem::is_created_by_user_Valid() const{
    return m_created_by_user_isValid;
}

OAIUser OAIBaseItem::getLastModifiedByUser() const {
    return last_modified_by_user;
}
void OAIBaseItem::setLastModifiedByUser(const OAIUser &last_modified_by_user) {
    this->last_modified_by_user = last_modified_by_user;
    this->m_last_modified_by_user_isSet = true;
}

bool OAIBaseItem::is_last_modified_by_user_Set() const{
    return m_last_modified_by_user_isSet;
}

bool OAIBaseItem::is_last_modified_by_user_Valid() const{
    return m_last_modified_by_user_isValid;
}

bool OAIBaseItem::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIBaseItem::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
