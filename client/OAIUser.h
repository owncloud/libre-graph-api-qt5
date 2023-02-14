// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * Libre Graph is a free API for cloud collaboration inspired by the MS Graph API.
 *
 * The version of the OpenAPI document: v1.0.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUser.h
 *
 * Represents an Active Directory user object.
 */

#ifndef OAIUser_H
#define OAIUser_H

#include <QJsonObject>

#include "OAIAppRoleAssignment.h"
#include "OAIDrive.h"
#include "OAIGroup.h"
#include "OAIObjectIdentity.h"
#include "OAIPasswordProfile.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAppRoleAssignment;
class OAIDrive;
class OAIObjectIdentity;
class OAIGroup;
class OAIPasswordProfile;


class OAIUserPrivate;

class OAIUser : public OAIObject {
public:
    OAIUser();
    OAIUser(const OAIUser &other);
    OAIUser(QString json);
    ~OAIUser() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    bool isAccountEnabled() const;
    void setAccountEnabled(const bool &account_enabled);
    bool is_account_enabled_Set() const;
    bool is_account_enabled_Valid() const;

    QList<OAIAppRoleAssignment> getAppRoleAssignments() const;
    void setAppRoleAssignments(const QList<OAIAppRoleAssignment> &app_role_assignments);
    bool is_app_role_assignments_Set() const;
    bool is_app_role_assignments_Valid() const;

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);
    bool is_display_name_Set() const;
    bool is_display_name_Valid() const;

    QList<OAIDrive> getDrives() const;
    void setDrives(const QList<OAIDrive> &drives);
    bool is_drives_Set() const;
    bool is_drives_Valid() const;

    OAIDrive getDrive() const;
    void setDrive(const OAIDrive &drive);
    bool is_drive_Set() const;
    bool is_drive_Valid() const;

    QList<OAIObjectIdentity> getIdentities() const;
    void setIdentities(const QList<OAIObjectIdentity> &identities);
    bool is_identities_Set() const;
    bool is_identities_Valid() const;

    QString getMail() const;
    void setMail(const QString &mail);
    bool is_mail_Set() const;
    bool is_mail_Valid() const;

    QList<OAIGroup> getMemberOf() const;
    void setMemberOf(const QList<OAIGroup> &member_of);
    bool is_member_of_Set() const;
    bool is_member_of_Valid() const;

    QString getOnPremisesSamAccountName() const;
    void setOnPremisesSamAccountName(const QString &on_premises_sam_account_name);
    bool is_on_premises_sam_account_name_Set() const;
    bool is_on_premises_sam_account_name_Valid() const;

    OAIPasswordProfile getPasswordProfile() const;
    void setPasswordProfile(const OAIPasswordProfile &password_profile);
    bool is_password_profile_Set() const;
    bool is_password_profile_Valid() const;

    QString getSurname() const;
    void setSurname(const QString &surname);
    bool is_surname_Set() const;
    bool is_surname_Valid() const;

    QString getGivenName() const;
    void setGivenName(const QString &given_name);
    bool is_given_name_Set() const;
    bool is_given_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIUser)
    QSharedPointer<OAIUserPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUser)

#endif // OAIUser_H
