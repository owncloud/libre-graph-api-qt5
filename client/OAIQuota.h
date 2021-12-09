/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.3.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIQuota.h
 *
 * Optional. Information about the drive&#39;s storage space quota. Read-only.
 */

#ifndef OAIQuota_H
#define OAIQuota_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIQuota : public OAIObject {
public:
    OAIQuota();
    OAIQuota(QString json);
    ~OAIQuota() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint64 getDeleted() const;
    void setDeleted(const qint64 &deleted);
    bool is_deleted_Set() const;
    bool is_deleted_Valid() const;

    qint64 getRemaining() const;
    void setRemaining(const qint64 &remaining);
    bool is_remaining_Set() const;
    bool is_remaining_Valid() const;

    QString getState() const;
    void setState(const QString &state);
    bool is_state_Set() const;
    bool is_state_Valid() const;

    qint64 getTotal() const;
    void setTotal(const qint64 &total);
    bool is_total_Set() const;
    bool is_total_Valid() const;

    qint64 getUsed() const;
    void setUsed(const qint64 &used);
    bool is_used_Set() const;
    bool is_used_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint64 deleted;
    bool m_deleted_isSet;
    bool m_deleted_isValid;

    qint64 remaining;
    bool m_remaining_isSet;
    bool m_remaining_isValid;

    QString state;
    bool m_state_isSet;
    bool m_state_isValid;

    qint64 total;
    bool m_total_isSet;
    bool m_total_isValid;

    qint64 used;
    bool m_used_isSet;
    bool m_used_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIQuota)

#endif // OAIQuota_H
