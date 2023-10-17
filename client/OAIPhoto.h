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
 * OAIPhoto.h
 *
 * The photo resource provides photo and camera properties, for example, EXIF metadata, on a driveItem. 
 */

#ifndef OAIPhoto_H
#define OAIPhoto_H

#include <QJsonObject>

#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIPhotoPrivate;

class OAIPhoto : public OAIObject {
public:
    OAIPhoto();
    OAIPhoto(const OAIPhoto &other);
    OAIPhoto(QString json);
    ~OAIPhoto() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCameraMake() const;
    void setCameraMake(const QString &camera_make);
    bool is_camera_make_Set() const;
    bool is_camera_make_Valid() const;

    QString getCameraModel() const;
    void setCameraModel(const QString &camera_model);
    bool is_camera_model_Set() const;
    bool is_camera_model_Valid() const;

    double getExposureDenominator() const;
    void setExposureDenominator(const double &exposure_denominator);
    bool is_exposure_denominator_Set() const;
    bool is_exposure_denominator_Valid() const;

    double getExposureNumerator() const;
    void setExposureNumerator(const double &exposure_numerator);
    bool is_exposure_numerator_Set() const;
    bool is_exposure_numerator_Valid() const;

    double getFNumber() const;
    void setFNumber(const double &f_number);
    bool is_f_number_Set() const;
    bool is_f_number_Valid() const;

    double getFocalLength() const;
    void setFocalLength(const double &focal_length);
    bool is_focal_length_Set() const;
    bool is_focal_length_Valid() const;

    qint32 getIso() const;
    void setIso(const qint32 &iso);
    bool is_iso_Set() const;
    bool is_iso_Valid() const;

    qint32 getOrientation() const;
    void setOrientation(const qint32 &orientation);
    bool is_orientation_Set() const;
    bool is_orientation_Valid() const;

    QDateTime getTakenDateTime() const;
    void setTakenDateTime(const QDateTime &taken_date_time);
    bool is_taken_date_time_Set() const;
    bool is_taken_date_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIPhoto)
    QSharedPointer<OAIPhotoPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPhoto)

#endif // OAIPhoto_H
