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
 * OAIMember_Reference.h
 *
 * 
 */

#ifndef OAIMember_Reference_H
#define OAIMember_Reference_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIMember_ReferencePrivate;

class OAIMember_Reference : public OAIObject {
public:
    OAIMember_Reference();
    OAIMember_Reference(const OAIMember_Reference &other);
    OAIMember_Reference(QString json);
    ~OAIMember_Reference() override;

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
    Q_DECLARE_PRIVATE(OAIMember_Reference)
    QSharedPointer<OAIMember_ReferencePrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMember_Reference)

#endif // OAIMember_Reference_H
