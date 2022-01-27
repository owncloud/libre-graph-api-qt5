/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.9.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIGroup.h
 *
 * 
 */

#ifndef OAIGroup_H
#define OAIGroup_H

#include <QJsonObject>

#include "OAIDirectoryObject.h"
#include "OAIDrive.h"
#include <QDateTime>
#include <QList>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGroup : public OAIObject {
public:
    OAIGroup();
    OAIGroup(QString json);
    ~OAIGroup() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QDateTime getDeletedDateTime() const;
    void setDeletedDateTime(const QDateTime &deleted_date_time);
    bool is_deleted_date_time_Set() const;
    bool is_deleted_date_time_Valid() const;

    QDateTime getCreatedDateTime() const;
    void setCreatedDateTime(const QDateTime &created_date_time);
    bool is_created_date_time_Set() const;
    bool is_created_date_time_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);
    bool is_display_name_Set() const;
    bool is_display_name_Valid() const;

    QDateTime getExpirationDateTime() const;
    void setExpirationDateTime(const QDateTime &expiration_date_time);
    bool is_expiration_date_time_Set() const;
    bool is_expiration_date_time_Valid() const;

    QString getMail() const;
    void setMail(const QString &mail);
    bool is_mail_Set() const;
    bool is_mail_Valid() const;

    QString getOnPremisesDomainName() const;
    void setOnPremisesDomainName(const QString &on_premises_domain_name);
    bool is_on_premises_domain_name_Set() const;
    bool is_on_premises_domain_name_Valid() const;

    QDateTime getOnPremisesLastSyncDateTime() const;
    void setOnPremisesLastSyncDateTime(const QDateTime &on_premises_last_sync_date_time);
    bool is_on_premises_last_sync_date_time_Set() const;
    bool is_on_premises_last_sync_date_time_Valid() const;

    QString getOnPremisesSamAccountName() const;
    void setOnPremisesSamAccountName(const QString &on_premises_sam_account_name);
    bool is_on_premises_sam_account_name_Set() const;
    bool is_on_premises_sam_account_name_Valid() const;

    bool isOnPremisesSyncEnabled() const;
    void setOnPremisesSyncEnabled(const bool &on_premises_sync_enabled);
    bool is_on_premises_sync_enabled_Set() const;
    bool is_on_premises_sync_enabled_Valid() const;

    QString getPreferredLanguage() const;
    void setPreferredLanguage(const QString &preferred_language);
    bool is_preferred_language_Set() const;
    bool is_preferred_language_Valid() const;

    bool isSecurityEnabled() const;
    void setSecurityEnabled(const bool &security_enabled);
    bool is_security_enabled_Set() const;
    bool is_security_enabled_Valid() const;

    QString getSecurityIdentifier() const;
    void setSecurityIdentifier(const QString &security_identifier);
    bool is_security_identifier_Set() const;
    bool is_security_identifier_Valid() const;

    QString getVisibility() const;
    void setVisibility(const QString &visibility);
    bool is_visibility_Set() const;
    bool is_visibility_Valid() const;

    OAIDirectoryObject getCreatedOnBehalfOf() const;
    void setCreatedOnBehalfOf(const OAIDirectoryObject &created_on_behalf_of);
    bool is_created_on_behalf_of_Set() const;
    bool is_created_on_behalf_of_Valid() const;

    QList<OAIDirectoryObject> getMemberOf() const;
    void setMemberOf(const QList<OAIDirectoryObject> &member_of);
    bool is_member_of_Set() const;
    bool is_member_of_Valid() const;

    QList<OAIDirectoryObject> getMembers() const;
    void setMembers(const QList<OAIDirectoryObject> &members);
    bool is_members_Set() const;
    bool is_members_Valid() const;

    QList<OAIDirectoryObject> getOwners() const;
    void setOwners(const QList<OAIDirectoryObject> &owners);
    bool is_owners_Set() const;
    bool is_owners_Valid() const;

    OAIDrive getDrive() const;
    void setDrive(const OAIDrive &drive);
    bool is_drive_Set() const;
    bool is_drive_Valid() const;

    QList<OAIDrive> getDrives() const;
    void setDrives(const QList<OAIDrive> &drives);
    bool is_drives_Set() const;
    bool is_drives_Valid() const;

    bool isIsArchived() const;
    void setIsArchived(const bool &is_archived);
    bool is_is_archived_Set() const;
    bool is_is_archived_Valid() const;

    QSet<QString> getMembersodataBind() const;
    void setMembersodataBind(const QSet<QString> &membersodata_bind);
    bool is_membersodata_bind_Set() const;
    bool is_membersodata_bind_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QDateTime deleted_date_time;
    bool m_deleted_date_time_isSet;
    bool m_deleted_date_time_isValid;

    QDateTime created_date_time;
    bool m_created_date_time_isSet;
    bool m_created_date_time_isValid;

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString display_name;
    bool m_display_name_isSet;
    bool m_display_name_isValid;

    QDateTime expiration_date_time;
    bool m_expiration_date_time_isSet;
    bool m_expiration_date_time_isValid;

    QString mail;
    bool m_mail_isSet;
    bool m_mail_isValid;

    QString on_premises_domain_name;
    bool m_on_premises_domain_name_isSet;
    bool m_on_premises_domain_name_isValid;

    QDateTime on_premises_last_sync_date_time;
    bool m_on_premises_last_sync_date_time_isSet;
    bool m_on_premises_last_sync_date_time_isValid;

    QString on_premises_sam_account_name;
    bool m_on_premises_sam_account_name_isSet;
    bool m_on_premises_sam_account_name_isValid;

    bool on_premises_sync_enabled;
    bool m_on_premises_sync_enabled_isSet;
    bool m_on_premises_sync_enabled_isValid;

    QString preferred_language;
    bool m_preferred_language_isSet;
    bool m_preferred_language_isValid;

    bool security_enabled;
    bool m_security_enabled_isSet;
    bool m_security_enabled_isValid;

    QString security_identifier;
    bool m_security_identifier_isSet;
    bool m_security_identifier_isValid;

    QString visibility;
    bool m_visibility_isSet;
    bool m_visibility_isValid;

    OAIDirectoryObject created_on_behalf_of;
    bool m_created_on_behalf_of_isSet;
    bool m_created_on_behalf_of_isValid;

    QList<OAIDirectoryObject> member_of;
    bool m_member_of_isSet;
    bool m_member_of_isValid;

    QList<OAIDirectoryObject> members;
    bool m_members_isSet;
    bool m_members_isValid;

    QList<OAIDirectoryObject> owners;
    bool m_owners_isSet;
    bool m_owners_isValid;

    OAIDrive drive;
    bool m_drive_isSet;
    bool m_drive_isValid;

    QList<OAIDrive> drives;
    bool m_drives_isSet;
    bool m_drives_isValid;

    bool is_archived;
    bool m_is_archived_isSet;
    bool m_is_archived_isValid;

    QSet<QString> membersodata_bind;
    bool m_membersodata_bind_isSet;
    bool m_membersodata_bind_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGroup)

#endif // OAIGroup_H
