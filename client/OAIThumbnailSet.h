// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * Libre Graph is a free API for cloud collaboration inspired by the MS Graph API.
 *
 * The version of the OpenAPI document: v1.0.4
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIThumbnailSet.h
 *
 * The ThumbnailSet resource is a keyed collection of thumbnail resources. It&#39;s used to represent a set of thumbnails associated with a DriveItem. 
 */

#ifndef OAIThumbnailSet_H
#define OAIThumbnailSet_H

#include <QJsonObject>

#include "OAIThumbnail.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIThumbnail;


class OAIThumbnailSetPrivate;

class OAIThumbnailSet : public OAIObject {
public:
    OAIThumbnailSet();
    OAIThumbnailSet(const OAIThumbnailSet &other);
    OAIThumbnailSet(QString json);
    ~OAIThumbnailSet() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    OAIThumbnail getLarge() const;
    void setLarge(const OAIThumbnail &large);
    bool is_large_Set() const;
    bool is_large_Valid() const;

    OAIThumbnail getMedium() const;
    void setMedium(const OAIThumbnail &medium);
    bool is_medium_Set() const;
    bool is_medium_Valid() const;

    OAIThumbnail getSmall() const;
    void setSmall(const OAIThumbnail &small);
    bool is_small_Set() const;
    bool is_small_Valid() const;

    OAIThumbnail getSource() const;
    void setSource(const OAIThumbnail &source);
    bool is_source_Set() const;
    bool is_source_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIThumbnailSet)
    QSharedPointer<OAIThumbnailSetPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIThumbnailSet)

#endif // OAIThumbnailSet_H