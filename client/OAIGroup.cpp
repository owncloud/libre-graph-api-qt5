/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.8.0
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

OAIGroup::OAIGroup(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGroup::OAIGroup() {
    this->initializeModel();
}

OAIGroup::~OAIGroup() {}

void OAIGroup::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_deleted_date_time_isSet = false;
    m_deleted_date_time_isValid = false;

    m_created_date_time_isSet = false;
    m_created_date_time_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_display_name_isSet = false;
    m_display_name_isValid = false;

    m_expiration_date_time_isSet = false;
    m_expiration_date_time_isValid = false;

    m_mail_isSet = false;
    m_mail_isValid = false;

    m_on_premises_domain_name_isSet = false;
    m_on_premises_domain_name_isValid = false;

    m_on_premises_last_sync_date_time_isSet = false;
    m_on_premises_last_sync_date_time_isValid = false;

    m_on_premises_sam_account_name_isSet = false;
    m_on_premises_sam_account_name_isValid = false;

    m_on_premises_sync_enabled_isSet = false;
    m_on_premises_sync_enabled_isValid = false;

    m_preferred_language_isSet = false;
    m_preferred_language_isValid = false;

    m_security_enabled_isSet = false;
    m_security_enabled_isValid = false;

    m_security_identifier_isSet = false;
    m_security_identifier_isValid = false;

    m_visibility_isSet = false;
    m_visibility_isValid = false;

    m_created_on_behalf_of_isSet = false;
    m_created_on_behalf_of_isValid = false;

    m_member_of_isSet = false;
    m_member_of_isValid = false;

    m_members_isSet = false;
    m_members_isValid = false;

    m_owners_isSet = false;
    m_owners_isValid = false;

    m_drive_isSet = false;
    m_drive_isValid = false;

    m_drives_isSet = false;
    m_drives_isValid = false;

    m_is_archived_isSet = false;
    m_is_archived_isValid = false;
}

void OAIGroup::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGroup::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_deleted_date_time_isValid = ::OpenAPI::fromJsonValue(deleted_date_time, json[QString("deletedDateTime")]);
    m_deleted_date_time_isSet = !json[QString("deletedDateTime")].isNull() && m_deleted_date_time_isValid;

    m_created_date_time_isValid = ::OpenAPI::fromJsonValue(created_date_time, json[QString("createdDateTime")]);
    m_created_date_time_isSet = !json[QString("createdDateTime")].isNull() && m_created_date_time_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_display_name_isValid = ::OpenAPI::fromJsonValue(display_name, json[QString("displayName")]);
    m_display_name_isSet = !json[QString("displayName")].isNull() && m_display_name_isValid;

    m_expiration_date_time_isValid = ::OpenAPI::fromJsonValue(expiration_date_time, json[QString("expirationDateTime")]);
    m_expiration_date_time_isSet = !json[QString("expirationDateTime")].isNull() && m_expiration_date_time_isValid;

    m_mail_isValid = ::OpenAPI::fromJsonValue(mail, json[QString("mail")]);
    m_mail_isSet = !json[QString("mail")].isNull() && m_mail_isValid;

    m_on_premises_domain_name_isValid = ::OpenAPI::fromJsonValue(on_premises_domain_name, json[QString("onPremisesDomainName")]);
    m_on_premises_domain_name_isSet = !json[QString("onPremisesDomainName")].isNull() && m_on_premises_domain_name_isValid;

    m_on_premises_last_sync_date_time_isValid = ::OpenAPI::fromJsonValue(on_premises_last_sync_date_time, json[QString("onPremisesLastSyncDateTime")]);
    m_on_premises_last_sync_date_time_isSet = !json[QString("onPremisesLastSyncDateTime")].isNull() && m_on_premises_last_sync_date_time_isValid;

    m_on_premises_sam_account_name_isValid = ::OpenAPI::fromJsonValue(on_premises_sam_account_name, json[QString("onPremisesSamAccountName")]);
    m_on_premises_sam_account_name_isSet = !json[QString("onPremisesSamAccountName")].isNull() && m_on_premises_sam_account_name_isValid;

    m_on_premises_sync_enabled_isValid = ::OpenAPI::fromJsonValue(on_premises_sync_enabled, json[QString("onPremisesSyncEnabled")]);
    m_on_premises_sync_enabled_isSet = !json[QString("onPremisesSyncEnabled")].isNull() && m_on_premises_sync_enabled_isValid;

    m_preferred_language_isValid = ::OpenAPI::fromJsonValue(preferred_language, json[QString("preferredLanguage")]);
    m_preferred_language_isSet = !json[QString("preferredLanguage")].isNull() && m_preferred_language_isValid;

    m_security_enabled_isValid = ::OpenAPI::fromJsonValue(security_enabled, json[QString("securityEnabled")]);
    m_security_enabled_isSet = !json[QString("securityEnabled")].isNull() && m_security_enabled_isValid;

    m_security_identifier_isValid = ::OpenAPI::fromJsonValue(security_identifier, json[QString("securityIdentifier")]);
    m_security_identifier_isSet = !json[QString("securityIdentifier")].isNull() && m_security_identifier_isValid;

    m_visibility_isValid = ::OpenAPI::fromJsonValue(visibility, json[QString("visibility")]);
    m_visibility_isSet = !json[QString("visibility")].isNull() && m_visibility_isValid;

    m_created_on_behalf_of_isValid = ::OpenAPI::fromJsonValue(created_on_behalf_of, json[QString("createdOnBehalfOf")]);
    m_created_on_behalf_of_isSet = !json[QString("createdOnBehalfOf")].isNull() && m_created_on_behalf_of_isValid;

    m_member_of_isValid = ::OpenAPI::fromJsonValue(member_of, json[QString("memberOf")]);
    m_member_of_isSet = !json[QString("memberOf")].isNull() && m_member_of_isValid;

    m_members_isValid = ::OpenAPI::fromJsonValue(members, json[QString("members")]);
    m_members_isSet = !json[QString("members")].isNull() && m_members_isValid;

    m_owners_isValid = ::OpenAPI::fromJsonValue(owners, json[QString("owners")]);
    m_owners_isSet = !json[QString("owners")].isNull() && m_owners_isValid;

    m_drive_isValid = ::OpenAPI::fromJsonValue(drive, json[QString("drive")]);
    m_drive_isSet = !json[QString("drive")].isNull() && m_drive_isValid;

    m_drives_isValid = ::OpenAPI::fromJsonValue(drives, json[QString("drives")]);
    m_drives_isSet = !json[QString("drives")].isNull() && m_drives_isValid;

    m_is_archived_isValid = ::OpenAPI::fromJsonValue(is_archived, json[QString("isArchived")]);
    m_is_archived_isSet = !json[QString("isArchived")].isNull() && m_is_archived_isValid;
}

QString OAIGroup::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGroup::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_deleted_date_time_isSet) {
        obj.insert(QString("deletedDateTime"), ::OpenAPI::toJsonValue(deleted_date_time));
    }
    if (m_created_date_time_isSet) {
        obj.insert(QString("createdDateTime"), ::OpenAPI::toJsonValue(created_date_time));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
    if (m_display_name_isSet) {
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(display_name));
    }
    if (m_expiration_date_time_isSet) {
        obj.insert(QString("expirationDateTime"), ::OpenAPI::toJsonValue(expiration_date_time));
    }
    if (m_mail_isSet) {
        obj.insert(QString("mail"), ::OpenAPI::toJsonValue(mail));
    }
    if (m_on_premises_domain_name_isSet) {
        obj.insert(QString("onPremisesDomainName"), ::OpenAPI::toJsonValue(on_premises_domain_name));
    }
    if (m_on_premises_last_sync_date_time_isSet) {
        obj.insert(QString("onPremisesLastSyncDateTime"), ::OpenAPI::toJsonValue(on_premises_last_sync_date_time));
    }
    if (m_on_premises_sam_account_name_isSet) {
        obj.insert(QString("onPremisesSamAccountName"), ::OpenAPI::toJsonValue(on_premises_sam_account_name));
    }
    if (m_on_premises_sync_enabled_isSet) {
        obj.insert(QString("onPremisesSyncEnabled"), ::OpenAPI::toJsonValue(on_premises_sync_enabled));
    }
    if (m_preferred_language_isSet) {
        obj.insert(QString("preferredLanguage"), ::OpenAPI::toJsonValue(preferred_language));
    }
    if (m_security_enabled_isSet) {
        obj.insert(QString("securityEnabled"), ::OpenAPI::toJsonValue(security_enabled));
    }
    if (m_security_identifier_isSet) {
        obj.insert(QString("securityIdentifier"), ::OpenAPI::toJsonValue(security_identifier));
    }
    if (m_visibility_isSet) {
        obj.insert(QString("visibility"), ::OpenAPI::toJsonValue(visibility));
    }
    if (created_on_behalf_of.isSet()) {
        obj.insert(QString("createdOnBehalfOf"), ::OpenAPI::toJsonValue(created_on_behalf_of));
    }
    if (member_of.size() > 0) {
        obj.insert(QString("memberOf"), ::OpenAPI::toJsonValue(member_of));
    }
    if (members.size() > 0) {
        obj.insert(QString("members"), ::OpenAPI::toJsonValue(members));
    }
    if (owners.size() > 0) {
        obj.insert(QString("owners"), ::OpenAPI::toJsonValue(owners));
    }
    if (drive.isSet()) {
        obj.insert(QString("drive"), ::OpenAPI::toJsonValue(drive));
    }
    if (drives.size() > 0) {
        obj.insert(QString("drives"), ::OpenAPI::toJsonValue(drives));
    }
    if (m_is_archived_isSet) {
        obj.insert(QString("isArchived"), ::OpenAPI::toJsonValue(is_archived));
    }
    return obj;
}

QString OAIGroup::getId() const {
    return id;
}
void OAIGroup::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIGroup::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGroup::is_id_Valid() const{
    return m_id_isValid;
}

QDateTime OAIGroup::getDeletedDateTime() const {
    return deleted_date_time;
}
void OAIGroup::setDeletedDateTime(const QDateTime &deleted_date_time) {
    this->deleted_date_time = deleted_date_time;
    this->m_deleted_date_time_isSet = true;
}

bool OAIGroup::is_deleted_date_time_Set() const{
    return m_deleted_date_time_isSet;
}

bool OAIGroup::is_deleted_date_time_Valid() const{
    return m_deleted_date_time_isValid;
}

QDateTime OAIGroup::getCreatedDateTime() const {
    return created_date_time;
}
void OAIGroup::setCreatedDateTime(const QDateTime &created_date_time) {
    this->created_date_time = created_date_time;
    this->m_created_date_time_isSet = true;
}

bool OAIGroup::is_created_date_time_Set() const{
    return m_created_date_time_isSet;
}

bool OAIGroup::is_created_date_time_Valid() const{
    return m_created_date_time_isValid;
}

QString OAIGroup::getDescription() const {
    return description;
}
void OAIGroup::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAIGroup::is_description_Set() const{
    return m_description_isSet;
}

bool OAIGroup::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIGroup::getDisplayName() const {
    return display_name;
}
void OAIGroup::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

bool OAIGroup::is_display_name_Set() const{
    return m_display_name_isSet;
}

bool OAIGroup::is_display_name_Valid() const{
    return m_display_name_isValid;
}

QDateTime OAIGroup::getExpirationDateTime() const {
    return expiration_date_time;
}
void OAIGroup::setExpirationDateTime(const QDateTime &expiration_date_time) {
    this->expiration_date_time = expiration_date_time;
    this->m_expiration_date_time_isSet = true;
}

bool OAIGroup::is_expiration_date_time_Set() const{
    return m_expiration_date_time_isSet;
}

bool OAIGroup::is_expiration_date_time_Valid() const{
    return m_expiration_date_time_isValid;
}

QString OAIGroup::getMail() const {
    return mail;
}
void OAIGroup::setMail(const QString &mail) {
    this->mail = mail;
    this->m_mail_isSet = true;
}

bool OAIGroup::is_mail_Set() const{
    return m_mail_isSet;
}

bool OAIGroup::is_mail_Valid() const{
    return m_mail_isValid;
}

QString OAIGroup::getOnPremisesDomainName() const {
    return on_premises_domain_name;
}
void OAIGroup::setOnPremisesDomainName(const QString &on_premises_domain_name) {
    this->on_premises_domain_name = on_premises_domain_name;
    this->m_on_premises_domain_name_isSet = true;
}

bool OAIGroup::is_on_premises_domain_name_Set() const{
    return m_on_premises_domain_name_isSet;
}

bool OAIGroup::is_on_premises_domain_name_Valid() const{
    return m_on_premises_domain_name_isValid;
}

QDateTime OAIGroup::getOnPremisesLastSyncDateTime() const {
    return on_premises_last_sync_date_time;
}
void OAIGroup::setOnPremisesLastSyncDateTime(const QDateTime &on_premises_last_sync_date_time) {
    this->on_premises_last_sync_date_time = on_premises_last_sync_date_time;
    this->m_on_premises_last_sync_date_time_isSet = true;
}

bool OAIGroup::is_on_premises_last_sync_date_time_Set() const{
    return m_on_premises_last_sync_date_time_isSet;
}

bool OAIGroup::is_on_premises_last_sync_date_time_Valid() const{
    return m_on_premises_last_sync_date_time_isValid;
}

QString OAIGroup::getOnPremisesSamAccountName() const {
    return on_premises_sam_account_name;
}
void OAIGroup::setOnPremisesSamAccountName(const QString &on_premises_sam_account_name) {
    this->on_premises_sam_account_name = on_premises_sam_account_name;
    this->m_on_premises_sam_account_name_isSet = true;
}

bool OAIGroup::is_on_premises_sam_account_name_Set() const{
    return m_on_premises_sam_account_name_isSet;
}

bool OAIGroup::is_on_premises_sam_account_name_Valid() const{
    return m_on_premises_sam_account_name_isValid;
}

bool OAIGroup::isOnPremisesSyncEnabled() const {
    return on_premises_sync_enabled;
}
void OAIGroup::setOnPremisesSyncEnabled(const bool &on_premises_sync_enabled) {
    this->on_premises_sync_enabled = on_premises_sync_enabled;
    this->m_on_premises_sync_enabled_isSet = true;
}

bool OAIGroup::is_on_premises_sync_enabled_Set() const{
    return m_on_premises_sync_enabled_isSet;
}

bool OAIGroup::is_on_premises_sync_enabled_Valid() const{
    return m_on_premises_sync_enabled_isValid;
}

QString OAIGroup::getPreferredLanguage() const {
    return preferred_language;
}
void OAIGroup::setPreferredLanguage(const QString &preferred_language) {
    this->preferred_language = preferred_language;
    this->m_preferred_language_isSet = true;
}

bool OAIGroup::is_preferred_language_Set() const{
    return m_preferred_language_isSet;
}

bool OAIGroup::is_preferred_language_Valid() const{
    return m_preferred_language_isValid;
}

bool OAIGroup::isSecurityEnabled() const {
    return security_enabled;
}
void OAIGroup::setSecurityEnabled(const bool &security_enabled) {
    this->security_enabled = security_enabled;
    this->m_security_enabled_isSet = true;
}

bool OAIGroup::is_security_enabled_Set() const{
    return m_security_enabled_isSet;
}

bool OAIGroup::is_security_enabled_Valid() const{
    return m_security_enabled_isValid;
}

QString OAIGroup::getSecurityIdentifier() const {
    return security_identifier;
}
void OAIGroup::setSecurityIdentifier(const QString &security_identifier) {
    this->security_identifier = security_identifier;
    this->m_security_identifier_isSet = true;
}

bool OAIGroup::is_security_identifier_Set() const{
    return m_security_identifier_isSet;
}

bool OAIGroup::is_security_identifier_Valid() const{
    return m_security_identifier_isValid;
}

QString OAIGroup::getVisibility() const {
    return visibility;
}
void OAIGroup::setVisibility(const QString &visibility) {
    this->visibility = visibility;
    this->m_visibility_isSet = true;
}

bool OAIGroup::is_visibility_Set() const{
    return m_visibility_isSet;
}

bool OAIGroup::is_visibility_Valid() const{
    return m_visibility_isValid;
}

OAIDirectoryObject OAIGroup::getCreatedOnBehalfOf() const {
    return created_on_behalf_of;
}
void OAIGroup::setCreatedOnBehalfOf(const OAIDirectoryObject &created_on_behalf_of) {
    this->created_on_behalf_of = created_on_behalf_of;
    this->m_created_on_behalf_of_isSet = true;
}

bool OAIGroup::is_created_on_behalf_of_Set() const{
    return m_created_on_behalf_of_isSet;
}

bool OAIGroup::is_created_on_behalf_of_Valid() const{
    return m_created_on_behalf_of_isValid;
}

QList<OAIDirectoryObject> OAIGroup::getMemberOf() const {
    return member_of;
}
void OAIGroup::setMemberOf(const QList<OAIDirectoryObject> &member_of) {
    this->member_of = member_of;
    this->m_member_of_isSet = true;
}

bool OAIGroup::is_member_of_Set() const{
    return m_member_of_isSet;
}

bool OAIGroup::is_member_of_Valid() const{
    return m_member_of_isValid;
}

QList<OAIDirectoryObject> OAIGroup::getMembers() const {
    return members;
}
void OAIGroup::setMembers(const QList<OAIDirectoryObject> &members) {
    this->members = members;
    this->m_members_isSet = true;
}

bool OAIGroup::is_members_Set() const{
    return m_members_isSet;
}

bool OAIGroup::is_members_Valid() const{
    return m_members_isValid;
}

QList<OAIDirectoryObject> OAIGroup::getOwners() const {
    return owners;
}
void OAIGroup::setOwners(const QList<OAIDirectoryObject> &owners) {
    this->owners = owners;
    this->m_owners_isSet = true;
}

bool OAIGroup::is_owners_Set() const{
    return m_owners_isSet;
}

bool OAIGroup::is_owners_Valid() const{
    return m_owners_isValid;
}

OAIDrive OAIGroup::getDrive() const {
    return drive;
}
void OAIGroup::setDrive(const OAIDrive &drive) {
    this->drive = drive;
    this->m_drive_isSet = true;
}

bool OAIGroup::is_drive_Set() const{
    return m_drive_isSet;
}

bool OAIGroup::is_drive_Valid() const{
    return m_drive_isValid;
}

QList<OAIDrive> OAIGroup::getDrives() const {
    return drives;
}
void OAIGroup::setDrives(const QList<OAIDrive> &drives) {
    this->drives = drives;
    this->m_drives_isSet = true;
}

bool OAIGroup::is_drives_Set() const{
    return m_drives_isSet;
}

bool OAIGroup::is_drives_Valid() const{
    return m_drives_isValid;
}

bool OAIGroup::isIsArchived() const {
    return is_archived;
}
void OAIGroup::setIsArchived(const bool &is_archived) {
    this->is_archived = is_archived;
    this->m_is_archived_isSet = true;
}

bool OAIGroup::is_is_archived_Set() const{
    return m_is_archived_isSet;
}

bool OAIGroup::is_is_archived_Valid() const{
    return m_is_archived_isValid;
}

bool OAIGroup::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_deleted_date_time_isSet) {
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

        if (m_display_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expiration_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_on_premises_domain_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_on_premises_last_sync_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_on_premises_sam_account_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_on_premises_sync_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_preferred_language_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_security_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_security_identifier_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_visibility_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (created_on_behalf_of.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (member_of.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (members.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (owners.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (drive.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (drives.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_archived_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGroup::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
