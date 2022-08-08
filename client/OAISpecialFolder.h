// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.16.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAISpecialFolder.h
 *
 * If the current item is also available as a special folder, this facet is returned. Read-only
 */

#ifndef OAISpecialFolder_H
#define OAISpecialFolder_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAISpecialFolderPrivate;

class OAISpecialFolder : public OAIObject {
public:
    OAISpecialFolder();
    OAISpecialFolder(const OAISpecialFolder &other);
    OAISpecialFolder(QString json);
    ~OAISpecialFolder() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAISpecialFolder)
    QSharedPointer<OAISpecialFolderPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISpecialFolder)

#endif // OAISpecialFolder_H
