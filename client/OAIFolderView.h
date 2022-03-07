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
 * OAIFolderView.h
 *
 * A collection of properties defining the recommended view for the folder.
 */

#ifndef OAIFolderView_H
#define OAIFolderView_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIFolderViewPrivate;

class OAIFolderView : public OAIObject {
public:
    OAIFolderView();
    OAIFolderView(const OAIFolderView &other);
    OAIFolderView(QString json);
    ~OAIFolderView() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSortBy() const;
    void setSortBy(const QString &sort_by);
    bool is_sort_by_Set() const;
    bool is_sort_by_Valid() const;

    QString getSortOrder() const;
    void setSortOrder(const QString &sort_order);
    bool is_sort_order_Set() const;
    bool is_sort_order_Valid() const;

    QString getViewType() const;
    void setViewType(const QString &view_type);
    bool is_view_type_Set() const;
    bool is_view_type_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIFolderView)
    QSharedPointer<OAIFolderViewPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFolderView)

#endif // OAIFolderView_H
