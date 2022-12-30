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
 * OAIOdata_error.h
 *
 * 
 */

#ifndef OAIOdata_error_H
#define OAIOdata_error_H

#include <QJsonObject>

#include "OAIOdata_error_main.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIOdata_error_main;


class OAIOdata_errorPrivate;

class OAIOdata_error : public OAIObject {
public:
    OAIOdata_error();
    OAIOdata_error(const OAIOdata_error &other);
    OAIOdata_error(QString json);
    ~OAIOdata_error() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIOdata_error_main getError() const;
    void setError(const OAIOdata_error_main &error);
    bool is_error_Set() const;
    bool is_error_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIOdata_error)
    QSharedPointer<OAIOdata_errorPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOdata_error)

#endif // OAIOdata_error_H
