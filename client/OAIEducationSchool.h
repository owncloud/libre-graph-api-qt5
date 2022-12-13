// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEducationSchool.h
 *
 * Represents a school
 */

#ifndef OAIEducationSchool_H
#define OAIEducationSchool_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIEducationSchoolPrivate;

class OAIEducationSchool : public OAIObject {
public:
    OAIEducationSchool();
    OAIEducationSchool(const OAIEducationSchool &other);
    OAIEducationSchool(QString json);
    ~OAIEducationSchool() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);
    bool is_display_name_Set() const;
    bool is_display_name_Valid() const;

    QString getSchoolNumber() const;
    void setSchoolNumber(const QString &school_number);
    bool is_school_number_Set() const;
    bool is_school_number_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIEducationSchool)
    QSharedPointer<OAIEducationSchoolPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEducationSchool)

#endif // OAIEducationSchool_H