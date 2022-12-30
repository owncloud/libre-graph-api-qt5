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
 * OAICollection_of_drives_1.h
 *
 * 
 */

#ifndef OAICollection_of_drives_1_H
#define OAICollection_of_drives_1_H

#include <QJsonObject>

#include "OAIDrive.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIDrive;


class OAICollection_of_drives_1Private;

class OAICollection_of_drives_1 : public OAIObject {
public:
    OAICollection_of_drives_1();
    OAICollection_of_drives_1(const OAICollection_of_drives_1 &other);
    OAICollection_of_drives_1(QString json);
    ~OAICollection_of_drives_1() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIDrive> getValue() const;
    void setValue(const QList<OAIDrive> &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAICollection_of_drives_1)
    QSharedPointer<OAICollection_of_drives_1Private> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICollection_of_drives_1)

#endif // OAICollection_of_drives_1_H
