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
 * OAIHashes.h
 *
 * Hashes of the file&#39;s binary content, if available. Read-only.
 */

#ifndef OAIHashes_H
#define OAIHashes_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIHashesPrivate;

class OAIHashes : public OAIObject {
public:
    OAIHashes();
    OAIHashes(const OAIHashes &other);
    OAIHashes(QString json);
    ~OAIHashes() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCrc32Hash() const;
    void setCrc32Hash(const QString &crc32_hash);
    bool is_crc32_hash_Set() const;
    bool is_crc32_hash_Valid() const;

    QString getQuickXorHash() const;
    void setQuickXorHash(const QString &quick_xor_hash);
    bool is_quick_xor_hash_Set() const;
    bool is_quick_xor_hash_Valid() const;

    QString getSha1Hash() const;
    void setSha1Hash(const QString &sha1_hash);
    bool is_sha1_hash_Set() const;
    bool is_sha1_hash_Valid() const;

    QString getSha256Hash() const;
    void setSha256Hash(const QString &sha256_hash);
    bool is_sha256_hash_Set() const;
    bool is_sha256_hash_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIHashes)
    QSharedPointer<OAIHashesPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIHashes)

#endif // OAIHashes_H
