/**
 * Open Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.1.0
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

class OAIOdata_error : public OAIObject {
public:
    OAIOdata_error();
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

    OAIOdata_error_main error;
    bool m_error_isSet;
    bool m_error_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOdata_error)

#endif // OAIOdata_error_H
