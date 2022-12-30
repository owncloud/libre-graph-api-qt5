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
 * OAIEducationUser_Reference.h
 *
 * 
 */

#ifndef OAIEducationUser_Reference_H
#define OAIEducationUser_Reference_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIEducationUser_ReferencePrivate;

class OAIEducationUser_Reference : public OAIObject {
public:
    OAIEducationUser_Reference();
    OAIEducationUser_Reference(const OAIEducationUser_Reference &other);
    OAIEducationUser_Reference(QString json);
    ~OAIEducationUser_Reference() override;

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
    Q_DECLARE_PRIVATE(OAIEducationUser_Reference)
    QSharedPointer<OAIEducationUser_ReferencePrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEducationUser_Reference)

#endif // OAIEducationUser_Reference_H
