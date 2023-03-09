// model-body.mustache

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

#include "OAIUser.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIUserPrivate {
    friend class OAIUser;

     QString id;
     bool id_isSet;
     bool id_isValid;

     bool account_enabled;
     bool account_enabled_isSet;
     bool account_enabled_isValid;

     QList<OAIAppRoleAssignment> app_role_assignments;
     bool app_role_assignments_isSet;
     bool app_role_assignments_isValid;

     QString display_name;
     bool display_name_isSet;
     bool display_name_isValid;

     QList<OAIDrive> drives;
     bool drives_isSet;
     bool drives_isValid;

     OAIDrive drive;
     bool drive_isSet;
     bool drive_isValid;

     QList<OAIObjectIdentity> identities;
     bool identities_isSet;
     bool identities_isValid;

     QString mail;
     bool mail_isSet;
     bool mail_isValid;

     QList<OAIGroup> member_of;
     bool member_of_isSet;
     bool member_of_isValid;

     QString on_premises_sam_account_name;
     bool on_premises_sam_account_name_isSet;
     bool on_premises_sam_account_name_isValid;

     OAIPasswordProfile password_profile;
     bool password_profile_isSet;
     bool password_profile_isValid;

     QString surname;
     bool surname_isSet;
     bool surname_isValid;

     QString given_name;
     bool given_name_isSet;
     bool given_name_isValid;

     QString user_type;
     bool user_type_isSet;
     bool user_type_isValid;
};

OAIUser::OAIUser()
    : d_ptr()
{
}

OAIUser::OAIUser(const OAIUser& other)
    : d_ptr(other.d_ptr)
{
}

OAIUser::OAIUser(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIUser::~OAIUser() = default;

void OAIUser::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIUserPrivate{});

        Q_D(OAIUser);


        d->id_isSet = false;
        d->id_isValid = false;

        d->account_enabled_isSet = false;
        d->account_enabled_isValid = false;

        d->app_role_assignments_isSet = false;
        d->app_role_assignments_isValid = false;

        d->display_name_isSet = false;
        d->display_name_isValid = false;

        d->drives_isSet = false;
        d->drives_isValid = false;

        d->drive_isSet = false;
        d->drive_isValid = false;

        d->identities_isSet = false;
        d->identities_isValid = false;

        d->mail_isSet = false;
        d->mail_isValid = false;

        d->member_of_isSet = false;
        d->member_of_isValid = false;

        d->on_premises_sam_account_name_isSet = false;
        d->on_premises_sam_account_name_isValid = false;

        d->password_profile_isSet = false;
        d->password_profile_isValid = false;

        d->surname_isSet = false;
        d->surname_isValid = false;

        d->given_name_isSet = false;
        d->given_name_isValid = false;

        d->user_type_isSet = false;
        d->user_type_isValid = false;
    }
}

void OAIUser::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIUser);

    d->id_isValid = ::OpenAPI::fromJsonValue(d->id, json[QString("id")]);
    d->id_isSet = !json[QString("id")].isNull() && d->id_isValid;

    d->account_enabled_isValid = ::OpenAPI::fromJsonValue(d->account_enabled, json[QString("accountEnabled")]);
    d->account_enabled_isSet = !json[QString("accountEnabled")].isNull() && d->account_enabled_isValid;

    d->app_role_assignments_isValid = ::OpenAPI::fromJsonValue(d->app_role_assignments, json[QString("appRoleAssignments")]);
    d->app_role_assignments_isSet = !json[QString("appRoleAssignments")].isNull() && d->app_role_assignments_isValid;

    d->display_name_isValid = ::OpenAPI::fromJsonValue(d->display_name, json[QString("displayName")]);
    d->display_name_isSet = !json[QString("displayName")].isNull() && d->display_name_isValid;

    d->drives_isValid = ::OpenAPI::fromJsonValue(d->drives, json[QString("drives")]);
    d->drives_isSet = !json[QString("drives")].isNull() && d->drives_isValid;

    d->drive_isValid = ::OpenAPI::fromJsonValue(d->drive, json[QString("drive")]);
    d->drive_isSet = !json[QString("drive")].isNull() && d->drive_isValid;

    d->identities_isValid = ::OpenAPI::fromJsonValue(d->identities, json[QString("identities")]);
    d->identities_isSet = !json[QString("identities")].isNull() && d->identities_isValid;

    d->mail_isValid = ::OpenAPI::fromJsonValue(d->mail, json[QString("mail")]);
    d->mail_isSet = !json[QString("mail")].isNull() && d->mail_isValid;

    d->member_of_isValid = ::OpenAPI::fromJsonValue(d->member_of, json[QString("memberOf")]);
    d->member_of_isSet = !json[QString("memberOf")].isNull() && d->member_of_isValid;

    d->on_premises_sam_account_name_isValid = ::OpenAPI::fromJsonValue(d->on_premises_sam_account_name, json[QString("onPremisesSamAccountName")]);
    d->on_premises_sam_account_name_isSet = !json[QString("onPremisesSamAccountName")].isNull() && d->on_premises_sam_account_name_isValid;

    d->password_profile_isValid = ::OpenAPI::fromJsonValue(d->password_profile, json[QString("passwordProfile")]);
    d->password_profile_isSet = !json[QString("passwordProfile")].isNull() && d->password_profile_isValid;

    d->surname_isValid = ::OpenAPI::fromJsonValue(d->surname, json[QString("surname")]);
    d->surname_isSet = !json[QString("surname")].isNull() && d->surname_isValid;

    d->given_name_isValid = ::OpenAPI::fromJsonValue(d->given_name, json[QString("givenName")]);
    d->given_name_isSet = !json[QString("givenName")].isNull() && d->given_name_isValid;

    d->user_type_isValid = ::OpenAPI::fromJsonValue(d->user_type, json[QString("userType")]);
    d->user_type_isSet = !json[QString("userType")].isNull() && d->user_type_isValid;
}

QString OAIUser::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser::asJsonObject() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(d->id));
    }
    if (d->account_enabled_isSet) {
        obj.insert(QString("accountEnabled"), ::OpenAPI::toJsonValue(d->account_enabled));
    }
    if (d->app_role_assignments.size() > 0) {
        obj.insert(QString("appRoleAssignments"), ::OpenAPI::toJsonValue(d->app_role_assignments));
    }
    if (d->display_name_isSet) {
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(d->display_name));
    }
    if (d->drives.size() > 0) {
        obj.insert(QString("drives"), ::OpenAPI::toJsonValue(d->drives));
    }
    if (d->drive.isSet()) {
        obj.insert(QString("drive"), ::OpenAPI::toJsonValue(d->drive));
    }
    if (d->identities.size() > 0) {
        obj.insert(QString("identities"), ::OpenAPI::toJsonValue(d->identities));
    }
    if (d->mail_isSet) {
        obj.insert(QString("mail"), ::OpenAPI::toJsonValue(d->mail));
    }
    if (d->member_of.size() > 0) {
        obj.insert(QString("memberOf"), ::OpenAPI::toJsonValue(d->member_of));
    }
    if (d->on_premises_sam_account_name_isSet) {
        obj.insert(QString("onPremisesSamAccountName"), ::OpenAPI::toJsonValue(d->on_premises_sam_account_name));
    }
    if (d->password_profile.isSet()) {
        obj.insert(QString("passwordProfile"), ::OpenAPI::toJsonValue(d->password_profile));
    }
    if (d->surname_isSet) {
        obj.insert(QString("surname"), ::OpenAPI::toJsonValue(d->surname));
    }
    if (d->given_name_isSet) {
        obj.insert(QString("givenName"), ::OpenAPI::toJsonValue(d->given_name));
    }
    if (d->user_type_isSet) {
        obj.insert(QString("userType"), ::OpenAPI::toJsonValue(d->user_type));
    }
    return obj;
}

QString OAIUser::getId() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->id;
}
void OAIUser::setId(const QString &id) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->id = id;
    d->id_isSet = true;
}

bool OAIUser::is_id_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->id_isSet;
}

bool OAIUser::is_id_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->id_isValid;
}

bool OAIUser::isAccountEnabled() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->account_enabled;
}
void OAIUser::setAccountEnabled(const bool &account_enabled) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->account_enabled = account_enabled;
    d->account_enabled_isSet = true;
}

bool OAIUser::is_account_enabled_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->account_enabled_isSet;
}

bool OAIUser::is_account_enabled_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->account_enabled_isValid;
}

QList<OAIAppRoleAssignment> OAIUser::getAppRoleAssignments() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->app_role_assignments;
}
void OAIUser::setAppRoleAssignments(const QList<OAIAppRoleAssignment> &app_role_assignments) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->app_role_assignments = app_role_assignments;
    d->app_role_assignments_isSet = true;
}

bool OAIUser::is_app_role_assignments_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->app_role_assignments_isSet;
}

bool OAIUser::is_app_role_assignments_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->app_role_assignments_isValid;
}

QString OAIUser::getDisplayName() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->display_name;
}
void OAIUser::setDisplayName(const QString &display_name) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->display_name = display_name;
    d->display_name_isSet = true;
}

bool OAIUser::is_display_name_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->display_name_isSet;
}

bool OAIUser::is_display_name_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->display_name_isValid;
}

QList<OAIDrive> OAIUser::getDrives() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->drives;
}
void OAIUser::setDrives(const QList<OAIDrive> &drives) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->drives = drives;
    d->drives_isSet = true;
}

bool OAIUser::is_drives_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->drives_isSet;
}

bool OAIUser::is_drives_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->drives_isValid;
}

OAIDrive OAIUser::getDrive() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->drive;
}
void OAIUser::setDrive(const OAIDrive &drive) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->drive = drive;
    d->drive_isSet = true;
}

bool OAIUser::is_drive_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->drive_isSet;
}

bool OAIUser::is_drive_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->drive_isValid;
}

QList<OAIObjectIdentity> OAIUser::getIdentities() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->identities;
}
void OAIUser::setIdentities(const QList<OAIObjectIdentity> &identities) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->identities = identities;
    d->identities_isSet = true;
}

bool OAIUser::is_identities_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->identities_isSet;
}

bool OAIUser::is_identities_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->identities_isValid;
}

QString OAIUser::getMail() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->mail;
}
void OAIUser::setMail(const QString &mail) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->mail = mail;
    d->mail_isSet = true;
}

bool OAIUser::is_mail_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->mail_isSet;
}

bool OAIUser::is_mail_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->mail_isValid;
}

QList<OAIGroup> OAIUser::getMemberOf() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->member_of;
}
void OAIUser::setMemberOf(const QList<OAIGroup> &member_of) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->member_of = member_of;
    d->member_of_isSet = true;
}

bool OAIUser::is_member_of_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->member_of_isSet;
}

bool OAIUser::is_member_of_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->member_of_isValid;
}

QString OAIUser::getOnPremisesSamAccountName() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->on_premises_sam_account_name;
}
void OAIUser::setOnPremisesSamAccountName(const QString &on_premises_sam_account_name) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->on_premises_sam_account_name = on_premises_sam_account_name;
    d->on_premises_sam_account_name_isSet = true;
}

bool OAIUser::is_on_premises_sam_account_name_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->on_premises_sam_account_name_isSet;
}

bool OAIUser::is_on_premises_sam_account_name_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->on_premises_sam_account_name_isValid;
}

OAIPasswordProfile OAIUser::getPasswordProfile() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->password_profile;
}
void OAIUser::setPasswordProfile(const OAIPasswordProfile &password_profile) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->password_profile = password_profile;
    d->password_profile_isSet = true;
}

bool OAIUser::is_password_profile_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->password_profile_isSet;
}

bool OAIUser::is_password_profile_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->password_profile_isValid;
}

QString OAIUser::getSurname() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->surname;
}
void OAIUser::setSurname(const QString &surname) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->surname = surname;
    d->surname_isSet = true;
}

bool OAIUser::is_surname_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->surname_isSet;
}

bool OAIUser::is_surname_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->surname_isValid;
}

QString OAIUser::getGivenName() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->given_name;
}
void OAIUser::setGivenName(const QString &given_name) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->given_name = given_name;
    d->given_name_isSet = true;
}

bool OAIUser::is_given_name_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->given_name_isSet;
}

bool OAIUser::is_given_name_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->given_name_isValid;
}

QString OAIUser::getUserType() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->user_type;
}
void OAIUser::setUserType(const QString &user_type) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->user_type = user_type;
    d->user_type_isSet = true;
}

bool OAIUser::is_user_type_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->user_type_isSet;
}

bool OAIUser::is_user_type_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->user_type_isValid;
}

bool OAIUser::isSet() const {
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->account_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->app_role_assignments.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->display_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->drives.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->drive.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->identities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->mail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->member_of.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->on_premises_sam_account_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->password_profile.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->surname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->given_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->user_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUser::isValid() const {
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
