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
 * OAIIdentitySet.h
 *
 * Optional. User account.
 */

#ifndef OAIIdentitySet_H
#define OAIIdentitySet_H

#include <QJsonObject>

#include "OAIIdentity.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIIdentity;


class OAIIdentitySetPrivate;

class OAIIdentitySet : public OAIObject {
public:
    OAIIdentitySet();
    OAIIdentitySet(const OAIIdentitySet &other);
    OAIIdentitySet(QString json);
    ~OAIIdentitySet() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIIdentity getApplication() const;
    void setApplication(const OAIIdentity &application);
    bool is_application_Set() const;
    bool is_application_Valid() const;

    OAIIdentity getDevice() const;
    void setDevice(const OAIIdentity &device);
    bool is_device_Set() const;
    bool is_device_Valid() const;

    OAIIdentity getUser() const;
    void setUser(const OAIIdentity &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIIdentitySet)
    QSharedPointer<OAIIdentitySetPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIIdentitySet)

#endif // OAIIdentitySet_H
