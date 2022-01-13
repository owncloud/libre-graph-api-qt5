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

/*
 * OAITrash.h
 *
 * Metadata for trashed drive Items
 */

#ifndef OAITrash_H
#define OAITrash_H

#include <QJsonObject>

#include "OAIIdentitySet.h"
#include <QDateTime>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAITrash : public OAIObject {
public:
    OAITrash();
    OAITrash(QString json);
    ~OAITrash() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIIdentitySet getTrashedBy() const;
    void setTrashedBy(const OAIIdentitySet &trashed_by);
    bool is_trashed_by_Set() const;
    bool is_trashed_by_Valid() const;

    QDateTime getTrashedDateTime() const;
    void setTrashedDateTime(const QDateTime &trashed_date_time);
    bool is_trashed_date_time_Set() const;
    bool is_trashed_date_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIIdentitySet trashed_by;
    bool m_trashed_by_isSet;
    bool m_trashed_by_isValid;

    QDateTime trashed_date_time;
    bool m_trashed_date_time_isSet;
    bool m_trashed_date_time_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITrash)

#endif // OAITrash_H
