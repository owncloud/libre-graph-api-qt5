// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * Libre Graph is a free API for cloud collaboration inspired by the MS Graph API.
 *
 * The version of the OpenAPI document: v1.0.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICollection_of_tags.h
 *
 * 
 */

#ifndef OAICollection_of_tags_H
#define OAICollection_of_tags_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAICollection_of_tagsPrivate;

class OAICollection_of_tags : public OAIObject {
public:
    OAICollection_of_tags();
    OAICollection_of_tags(const OAICollection_of_tags &other);
    OAICollection_of_tags(QString json);
    ~OAICollection_of_tags() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getValue() const;
    void setValue(const QList<QString> &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAICollection_of_tags)
    QSharedPointer<OAICollection_of_tagsPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICollection_of_tags)

#endif // OAICollection_of_tags_H
