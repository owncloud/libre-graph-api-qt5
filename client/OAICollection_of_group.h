// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.15.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICollection_of_group.h
 *
 * 
 */

#ifndef OAICollection_of_group_H
#define OAICollection_of_group_H

#include <QJsonObject>

#include "OAIGroup.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIGroup;


class OAICollection_of_groupPrivate;

class OAICollection_of_group : public OAIObject {
public:
    OAICollection_of_group();
    OAICollection_of_group(const OAICollection_of_group &other);
    OAICollection_of_group(QString json);
    ~OAICollection_of_group() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIGroup> getValue() const;
    void setValue(const QList<OAIGroup> &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    QString getOdataNextLink() const;
    void setOdataNextLink(const QString &odata_next_link);
    bool is_odata_next_link_Set() const;
    bool is_odata_next_link_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAICollection_of_group)
    QSharedPointer<OAICollection_of_groupPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICollection_of_group)

#endif // OAICollection_of_group_H
