/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.5.0
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

#include "OAIDrive.h"
#include "OAIPasswordProfile.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIDrive;

class OAIUser : public OAIObject {
public:
    OAIUser();
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

    QDateTime getDeletedDateTime() const;
    void setDeletedDateTime(const QDateTime &deleted_date_time);
    bool is_deleted_date_time_Set() const;
    bool is_deleted_date_time_Valid() const;

    bool isAccountEnabled() const;
    void setAccountEnabled(const bool &account_enabled);
    bool is_account_enabled_Set() const;
    bool is_account_enabled_Valid() const;

    QList<QString> getBusinessPhones() const;
    void setBusinessPhones(const QList<QString> &business_phones);
    bool is_business_phones_Set() const;
    bool is_business_phones_Valid() const;

    QString getCity() const;
    void setCity(const QString &city);
    bool is_city_Set() const;
    bool is_city_Valid() const;

    QString getCompanyName() const;
    void setCompanyName(const QString &company_name);
    bool is_company_name_Set() const;
    bool is_company_name_Valid() const;

    QString getCountry() const;
    void setCountry(const QString &country);
    bool is_country_Set() const;
    bool is_country_Valid() const;

    QDateTime getCreatedDateTime() const;
    void setCreatedDateTime(const QDateTime &created_date_time);
    bool is_created_date_time_Set() const;
    bool is_created_date_time_Valid() const;

    QString getDepartment() const;
    void setDepartment(const QString &department);
    bool is_department_Set() const;
    bool is_department_Valid() const;

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);
    bool is_display_name_Set() const;
    bool is_display_name_Valid() const;

    QString getFaxNumber() const;
    void setFaxNumber(const QString &fax_number);
    bool is_fax_number_Set() const;
    bool is_fax_number_Valid() const;

    QString getGivenName() const;
    void setGivenName(const QString &given_name);
    bool is_given_name_Set() const;
    bool is_given_name_Valid() const;

    QDateTime getLastPasswordChangeDateTime() const;
    void setLastPasswordChangeDateTime(const QDateTime &last_password_change_date_time);
    bool is_last_password_change_date_time_Set() const;
    bool is_last_password_change_date_time_Valid() const;

    QString getLegalAgeGroupClassification() const;
    void setLegalAgeGroupClassification(const QString &legal_age_group_classification);
    bool is_legal_age_group_classification_Set() const;
    bool is_legal_age_group_classification_Valid() const;

    QString getMail() const;
    void setMail(const QString &mail);
    bool is_mail_Set() const;
    bool is_mail_Valid() const;

    QString getMailNickname() const;
    void setMailNickname(const QString &mail_nickname);
    bool is_mail_nickname_Set() const;
    bool is_mail_nickname_Valid() const;

    QString getMobilePhone() const;
    void setMobilePhone(const QString &mobile_phone);
    bool is_mobile_phone_Set() const;
    bool is_mobile_phone_Valid() const;

    QString getOnPremisesDistinguishedName() const;
    void setOnPremisesDistinguishedName(const QString &on_premises_distinguished_name);
    bool is_on_premises_distinguished_name_Set() const;
    bool is_on_premises_distinguished_name_Valid() const;

    QString getOnPremisesDomainName() const;
    void setOnPremisesDomainName(const QString &on_premises_domain_name);
    bool is_on_premises_domain_name_Set() const;
    bool is_on_premises_domain_name_Valid() const;

    QString getOnPremisesImmutableId() const;
    void setOnPremisesImmutableId(const QString &on_premises_immutable_id);
    bool is_on_premises_immutable_id_Set() const;
    bool is_on_premises_immutable_id_Valid() const;

    bool isOnPremisesSyncEnabled() const;
    void setOnPremisesSyncEnabled(const bool &on_premises_sync_enabled);
    bool is_on_premises_sync_enabled_Set() const;
    bool is_on_premises_sync_enabled_Valid() const;

    QDateTime getOnPremisesLastSyncDateTime() const;
    void setOnPremisesLastSyncDateTime(const QDateTime &on_premises_last_sync_date_time);
    bool is_on_premises_last_sync_date_time_Set() const;
    bool is_on_premises_last_sync_date_time_Valid() const;

    QString getOnPremisesSamAccountName() const;
    void setOnPremisesSamAccountName(const QString &on_premises_sam_account_name);
    bool is_on_premises_sam_account_name_Set() const;
    bool is_on_premises_sam_account_name_Valid() const;

    QString getOnPremisesUserPrincipalName() const;
    void setOnPremisesUserPrincipalName(const QString &on_premises_user_principal_name);
    bool is_on_premises_user_principal_name_Set() const;
    bool is_on_premises_user_principal_name_Valid() const;

    QString getOfficeLocation() const;
    void setOfficeLocation(const QString &office_location);
    bool is_office_location_Set() const;
    bool is_office_location_Valid() const;

    OAIPasswordProfile getPasswordProfile() const;
    void setPasswordProfile(const OAIPasswordProfile &password_profile);
    bool is_password_profile_Set() const;
    bool is_password_profile_Valid() const;

    QString getPostalCode() const;
    void setPostalCode(const QString &postal_code);
    bool is_postal_code_Set() const;
    bool is_postal_code_Valid() const;

    QString getPreferredLanguage() const;
    void setPreferredLanguage(const QString &preferred_language);
    bool is_preferred_language_Set() const;
    bool is_preferred_language_Valid() const;

    QString getState() const;
    void setState(const QString &state);
    bool is_state_Set() const;
    bool is_state_Valid() const;

    QString getStreetAddress() const;
    void setStreetAddress(const QString &street_address);
    bool is_street_address_Set() const;
    bool is_street_address_Valid() const;

    QString getSurname() const;
    void setSurname(const QString &surname);
    bool is_surname_Set() const;
    bool is_surname_Valid() const;

    QString getUsageLocation() const;
    void setUsageLocation(const QString &usage_location);
    bool is_usage_location_Set() const;
    bool is_usage_location_Valid() const;

    QString getUserPrincipalName() const;
    void setUserPrincipalName(const QString &user_principal_name);
    bool is_user_principal_name_Set() const;
    bool is_user_principal_name_Valid() const;

    QString getUserType() const;
    void setUserType(const QString &user_type);
    bool is_user_type_Set() const;
    bool is_user_type_Valid() const;

    QString getAboutMe() const;
    void setAboutMe(const QString &about_me);
    bool is_about_me_Set() const;
    bool is_about_me_Valid() const;

    QDateTime getBirthday() const;
    void setBirthday(const QDateTime &birthday);
    bool is_birthday_Set() const;
    bool is_birthday_Valid() const;

    QString getPreferredName() const;
    void setPreferredName(const QString &preferred_name);
    bool is_preferred_name_Set() const;
    bool is_preferred_name_Valid() const;

    OAIDrive getDrive() const;
    void setDrive(const OAIDrive &drive);
    bool is_drive_Set() const;
    bool is_drive_Valid() const;

    QList<OAIDrive> getDrives() const;
    void setDrives(const QList<OAIDrive> &drives);
    bool is_drives_Set() const;
    bool is_drives_Valid() const;

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

    bool account_enabled;
    bool m_account_enabled_isSet;
    bool m_account_enabled_isValid;

    QList<QString> business_phones;
    bool m_business_phones_isSet;
    bool m_business_phones_isValid;

    QString city;
    bool m_city_isSet;
    bool m_city_isValid;

    QString company_name;
    bool m_company_name_isSet;
    bool m_company_name_isValid;

    QString country;
    bool m_country_isSet;
    bool m_country_isValid;

    QDateTime created_date_time;
    bool m_created_date_time_isSet;
    bool m_created_date_time_isValid;

    QString department;
    bool m_department_isSet;
    bool m_department_isValid;

    QString display_name;
    bool m_display_name_isSet;
    bool m_display_name_isValid;

    QString fax_number;
    bool m_fax_number_isSet;
    bool m_fax_number_isValid;

    QString given_name;
    bool m_given_name_isSet;
    bool m_given_name_isValid;

    QDateTime last_password_change_date_time;
    bool m_last_password_change_date_time_isSet;
    bool m_last_password_change_date_time_isValid;

    QString legal_age_group_classification;
    bool m_legal_age_group_classification_isSet;
    bool m_legal_age_group_classification_isValid;

    QString mail;
    bool m_mail_isSet;
    bool m_mail_isValid;

    QString mail_nickname;
    bool m_mail_nickname_isSet;
    bool m_mail_nickname_isValid;

    QString mobile_phone;
    bool m_mobile_phone_isSet;
    bool m_mobile_phone_isValid;

    QString on_premises_distinguished_name;
    bool m_on_premises_distinguished_name_isSet;
    bool m_on_premises_distinguished_name_isValid;

    QString on_premises_domain_name;
    bool m_on_premises_domain_name_isSet;
    bool m_on_premises_domain_name_isValid;

    QString on_premises_immutable_id;
    bool m_on_premises_immutable_id_isSet;
    bool m_on_premises_immutable_id_isValid;

    bool on_premises_sync_enabled;
    bool m_on_premises_sync_enabled_isSet;
    bool m_on_premises_sync_enabled_isValid;

    QDateTime on_premises_last_sync_date_time;
    bool m_on_premises_last_sync_date_time_isSet;
    bool m_on_premises_last_sync_date_time_isValid;

    QString on_premises_sam_account_name;
    bool m_on_premises_sam_account_name_isSet;
    bool m_on_premises_sam_account_name_isValid;

    QString on_premises_user_principal_name;
    bool m_on_premises_user_principal_name_isSet;
    bool m_on_premises_user_principal_name_isValid;

    QString office_location;
    bool m_office_location_isSet;
    bool m_office_location_isValid;

    OAIPasswordProfile password_profile;
    bool m_password_profile_isSet;
    bool m_password_profile_isValid;

    QString postal_code;
    bool m_postal_code_isSet;
    bool m_postal_code_isValid;

    QString preferred_language;
    bool m_preferred_language_isSet;
    bool m_preferred_language_isValid;

    QString state;
    bool m_state_isSet;
    bool m_state_isValid;

    QString street_address;
    bool m_street_address_isSet;
    bool m_street_address_isValid;

    QString surname;
    bool m_surname_isSet;
    bool m_surname_isValid;

    QString usage_location;
    bool m_usage_location_isSet;
    bool m_usage_location_isValid;

    QString user_principal_name;
    bool m_user_principal_name_isSet;
    bool m_user_principal_name_isValid;

    QString user_type;
    bool m_user_type_isSet;
    bool m_user_type_isValid;

    QString about_me;
    bool m_about_me_isSet;
    bool m_about_me_isValid;

    QDateTime birthday;
    bool m_birthday_isSet;
    bool m_birthday_isValid;

    QString preferred_name;
    bool m_preferred_name_isSet;
    bool m_preferred_name_isValid;

    OAIDrive drive;
    bool m_drive_isSet;
    bool m_drive_isValid;

    QList<OAIDrive> drives;
    bool m_drives_isSet;
    bool m_drives_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUser)

#endif // OAIUser_H
