/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.8.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIOdata_error_main.h
 *
 * 
 */

#ifndef OAIOdata_error_main_H
#define OAIOdata_error_main_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAIOdata_error_detail.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOdata_error_main : public OAIObject {
public:
    OAIOdata_error_main();
    OAIOdata_error_main(QString json);
    ~OAIOdata_error_main() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCode() const;
    void setCode(const QString &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    QString getMessage() const;
    void setMessage(const QString &message);
    bool is_message_Set() const;
    bool is_message_Valid() const;

    QString getTarget() const;
    void setTarget(const QString &target);
    bool is_target_Set() const;
    bool is_target_Valid() const;

    QList<OAIOdata_error_detail> getDetails() const;
    void setDetails(const QList<OAIOdata_error_detail> &details);
    bool is_details_Set() const;
    bool is_details_Valid() const;

    OAIObject getInnererror() const;
    void setInnererror(const OAIObject &innererror);
    bool is_innererror_Set() const;
    bool is_innererror_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString code;
    bool m_code_isSet;
    bool m_code_isValid;

    QString message;
    bool m_message_isSet;
    bool m_message_isValid;

    QString target;
    bool m_target_isSet;
    bool m_target_isValid;

    QList<OAIOdata_error_detail> details;
    bool m_details_isSet;
    bool m_details_isValid;

    OAIObject innererror;
    bool m_innererror_isSet;
    bool m_innererror_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOdata_error_main)

#endif // OAIOdata_error_main_H
