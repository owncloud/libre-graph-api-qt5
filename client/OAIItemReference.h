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
 * OAIItemReference.h
 *
 * 
 */

#ifndef OAIItemReference_H
#define OAIItemReference_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIItemReferencePrivate;

class OAIItemReference : public OAIObject {
public:
    OAIItemReference();
    OAIItemReference(const OAIItemReference &other);
    OAIItemReference(QString json);
    ~OAIItemReference() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getDriveId() const;
    void setDriveId(const QString &drive_id);
    bool is_drive_id_Set() const;
    bool is_drive_id_Valid() const;

    QString getDriveType() const;
    void setDriveType(const QString &drive_type);
    bool is_drive_type_Set() const;
    bool is_drive_type_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getPath() const;
    void setPath(const QString &path);
    bool is_path_Set() const;
    bool is_path_Valid() const;

    QString getShareId() const;
    void setShareId(const QString &share_id);
    bool is_share_id_Set() const;
    bool is_share_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIItemReference)
    QSharedPointer<OAIItemReferencePrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIItemReference)

#endif // OAIItemReference_H
