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
 * OAIFileSystemInfo.h
 *
 * File system information on client. Read-write.
 */

#ifndef OAIFileSystemInfo_H
#define OAIFileSystemInfo_H

#include <QJsonObject>

#include <QDateTime>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIFileSystemInfo : public OAIObject {
public:
    OAIFileSystemInfo();
    OAIFileSystemInfo(QString json);
    ~OAIFileSystemInfo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QDateTime getCreatedDateTime() const;
    void setCreatedDateTime(const QDateTime &created_date_time);
    bool is_created_date_time_Set() const;
    bool is_created_date_time_Valid() const;

    QDateTime getLastAccessedDateTime() const;
    void setLastAccessedDateTime(const QDateTime &last_accessed_date_time);
    bool is_last_accessed_date_time_Set() const;
    bool is_last_accessed_date_time_Valid() const;

    QDateTime getLastModifiedDateTime() const;
    void setLastModifiedDateTime(const QDateTime &last_modified_date_time);
    bool is_last_modified_date_time_Set() const;
    bool is_last_modified_date_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QDateTime created_date_time;
    bool m_created_date_time_isSet;
    bool m_created_date_time_isValid;

    QDateTime last_accessed_date_time;
    bool m_last_accessed_date_time_isSet;
    bool m_last_accessed_date_time_isValid;

    QDateTime last_modified_date_time;
    bool m_last_modified_date_time_isSet;
    bool m_last_modified_date_time_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFileSystemInfo)

#endif // OAIFileSystemInfo_H
