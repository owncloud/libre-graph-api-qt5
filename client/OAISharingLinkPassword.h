// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * Libre Graph is a free API for cloud collaboration inspired by the MS Graph API.
 *
 * The version of the OpenAPI document: v1.0.4
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAISharingLinkPassword.h
 *
 * The sharing link password which should be set. 
 */

#ifndef OAISharingLinkPassword_H
#define OAISharingLinkPassword_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAISharingLinkPasswordPrivate;

class OAISharingLinkPassword : public OAIObject {
public:
    OAISharingLinkPassword();
    OAISharingLinkPassword(const OAISharingLinkPassword &other);
    OAISharingLinkPassword(QString json);
    ~OAISharingLinkPassword() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPassword() const;
    void setPassword(const QString &password);
    bool is_password_Set() const;
    bool is_password_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAISharingLinkPassword)
    QSharedPointer<OAISharingLinkPasswordPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISharingLinkPassword)

#endif // OAISharingLinkPassword_H
