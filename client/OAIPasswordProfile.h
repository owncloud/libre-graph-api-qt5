// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.12.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIPasswordProfile.h
 *
 * Password Profile associated with a user
 */

#ifndef OAIPasswordProfile_H
#define OAIPasswordProfile_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIPasswordProfilePrivate;

class OAIPasswordProfile : public OAIObject {
public:
    OAIPasswordProfile();
    OAIPasswordProfile(const OAIPasswordProfile &other);
    OAIPasswordProfile(QString json);
    ~OAIPasswordProfile() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isForceChangePasswordNextSignIn() const;
    void setForceChangePasswordNextSignIn(const bool &force_change_password_next_sign_in);
    bool is_force_change_password_next_sign_in_Set() const;
    bool is_force_change_password_next_sign_in_Valid() const;

    QString getPassword() const;
    void setPassword(const QString &password);
    bool is_password_Set() const;
    bool is_password_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIPasswordProfile)
    QSharedPointer<OAIPasswordProfilePrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPasswordProfile)

#endif // OAIPasswordProfile_H
