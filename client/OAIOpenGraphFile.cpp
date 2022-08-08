// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.16.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIOpenGraphFile.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIOpenGraphFilePrivate {
    friend class OAIOpenGraphFile;

     OAIHashes hashes;
     bool hashes_isSet;
     bool hashes_isValid;

     QString mime_type;
     bool mime_type_isSet;
     bool mime_type_isValid;

     bool processing_metadata;
     bool processing_metadata_isSet;
     bool processing_metadata_isValid;
};

OAIOpenGraphFile::OAIOpenGraphFile()
    : d_ptr()
{
}

OAIOpenGraphFile::OAIOpenGraphFile(const OAIOpenGraphFile& other)
    : d_ptr(other.d_ptr)
{
}

OAIOpenGraphFile::OAIOpenGraphFile(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIOpenGraphFile::~OAIOpenGraphFile() = default;

void OAIOpenGraphFile::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIOpenGraphFilePrivate{});

        Q_D(OAIOpenGraphFile);


        d->hashes_isSet = false;
        d->hashes_isValid = false;

        d->mime_type_isSet = false;
        d->mime_type_isValid = false;

        d->processing_metadata_isSet = false;
        d->processing_metadata_isValid = false;
    }
}

void OAIOpenGraphFile::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOpenGraphFile::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIOpenGraphFile);

    d->hashes_isValid = ::OpenAPI::fromJsonValue(d->hashes, json[QString("hashes")]);
    d->hashes_isSet = !json[QString("hashes")].isNull() && d->hashes_isValid;

    d->mime_type_isValid = ::OpenAPI::fromJsonValue(d->mime_type, json[QString("mimeType")]);
    d->mime_type_isSet = !json[QString("mimeType")].isNull() && d->mime_type_isValid;

    d->processing_metadata_isValid = ::OpenAPI::fromJsonValue(d->processing_metadata, json[QString("processingMetadata")]);
    d->processing_metadata_isSet = !json[QString("processingMetadata")].isNull() && d->processing_metadata_isValid;
}

QString OAIOpenGraphFile::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOpenGraphFile::asJsonObject() const {
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->hashes.isSet()) {
        obj.insert(QString("hashes"), ::OpenAPI::toJsonValue(d->hashes));
    }
    if (d->mime_type_isSet) {
        obj.insert(QString("mimeType"), ::OpenAPI::toJsonValue(d->mime_type));
    }
    if (d->processing_metadata_isSet) {
        obj.insert(QString("processingMetadata"), ::OpenAPI::toJsonValue(d->processing_metadata));
    }
    return obj;
}

OAIHashes OAIOpenGraphFile::getHashes() const {
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return {};
    }
    return d->hashes;
}
void OAIOpenGraphFile::setHashes(const OAIHashes &hashes) {
    Q_D(OAIOpenGraphFile);
    Q_ASSERT(d);

    d->hashes = hashes;
    d->hashes_isSet = true;
}

bool OAIOpenGraphFile::is_hashes_Set() const{
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return false;
    }

    return d->hashes_isSet;
}

bool OAIOpenGraphFile::is_hashes_Valid() const{
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return false;
    }
    return d->hashes_isValid;
}

QString OAIOpenGraphFile::getMimeType() const {
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return {};
    }
    return d->mime_type;
}
void OAIOpenGraphFile::setMimeType(const QString &mime_type) {
    Q_D(OAIOpenGraphFile);
    Q_ASSERT(d);

    d->mime_type = mime_type;
    d->mime_type_isSet = true;
}

bool OAIOpenGraphFile::is_mime_type_Set() const{
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return false;
    }

    return d->mime_type_isSet;
}

bool OAIOpenGraphFile::is_mime_type_Valid() const{
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return false;
    }
    return d->mime_type_isValid;
}

bool OAIOpenGraphFile::isProcessingMetadata() const {
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return {};
    }
    return d->processing_metadata;
}
void OAIOpenGraphFile::setProcessingMetadata(const bool &processing_metadata) {
    Q_D(OAIOpenGraphFile);
    Q_ASSERT(d);

    d->processing_metadata = processing_metadata;
    d->processing_metadata_isSet = true;
}

bool OAIOpenGraphFile::is_processing_metadata_Set() const{
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return false;
    }

    return d->processing_metadata_isSet;
}

bool OAIOpenGraphFile::is_processing_metadata_Valid() const{
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return false;
    }
    return d->processing_metadata_isValid;
}

bool OAIOpenGraphFile::isSet() const {
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->hashes.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->mime_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->processing_metadata_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOpenGraphFile::isValid() const {
    Q_D(const OAIOpenGraphFile);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
