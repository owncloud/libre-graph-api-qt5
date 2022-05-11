// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.14.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIShared.h
 *
 * 
 */

#ifndef OAIShared_H
#define OAIShared_H

#include <QJsonObject>

#include "OAIIdentitySet.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIIdentitySet;


class OAISharedPrivate;

class OAIShared : public OAIObject {
public:
    OAIShared();
    OAIShared(const OAIShared &other);
    OAIShared(QString json);
    ~OAIShared() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIIdentitySet getOwner() const;
    void setOwner(const OAIIdentitySet &owner);
    bool is_owner_Set() const;
    bool is_owner_Valid() const;

    QString getScope() const;
    void setScope(const QString &scope);
    bool is_scope_Set() const;
    bool is_scope_Valid() const;

    OAIIdentitySet getSharedBy() const;
    void setSharedBy(const OAIIdentitySet &shared_by);
    bool is_shared_by_Set() const;
    bool is_shared_by_Valid() const;

    QDateTime getSharedDateTime() const;
    void setSharedDateTime(const QDateTime &shared_date_time);
    bool is_shared_date_time_Set() const;
    bool is_shared_date_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIShared)
    QSharedPointer<OAISharedPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIShared)

#endif // OAIShared_H