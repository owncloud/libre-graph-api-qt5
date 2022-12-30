// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1.0.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIClass_Reference.h
 *
 * 
 */

#ifndef OAIClass_Reference_H
#define OAIClass_Reference_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIClass_ReferencePrivate;

class OAIClass_Reference : public OAIObject {
public:
    OAIClass_Reference();
    OAIClass_Reference(const OAIClass_Reference &other);
    OAIClass_Reference(QString json);
    ~OAIClass_Reference() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getOdataId() const;
    void setOdataId(const QString &odata_id);
    bool is_odata_id_Set() const;
    bool is_odata_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIClass_Reference)
    QSharedPointer<OAIClass_ReferencePrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIClass_Reference)

#endif // OAIClass_Reference_H
