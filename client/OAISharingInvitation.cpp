// model-body.mustache

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

#include "OAISharingInvitation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAISharingInvitationPrivate {
    friend class OAISharingInvitation;

     OAIIdentitySet invited_by;
     bool invited_by_isSet;
     bool invited_by_isValid;
};

OAISharingInvitation::OAISharingInvitation()
    : d_ptr()
{
}

OAISharingInvitation::OAISharingInvitation(const OAISharingInvitation& other)
    : d_ptr(other.d_ptr)
{
}

OAISharingInvitation::OAISharingInvitation(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAISharingInvitation::~OAISharingInvitation() = default;

void OAISharingInvitation::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAISharingInvitationPrivate{});

        Q_D(OAISharingInvitation);


        d->invited_by_isSet = false;
        d->invited_by_isValid = false;
    }
}

void OAISharingInvitation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISharingInvitation::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAISharingInvitation);

    d->invited_by_isValid = ::OpenAPI::fromJsonValue(d->invited_by, json[QString("invitedBy")]);
    d->invited_by_isSet = !json[QString("invitedBy")].isNull() && d->invited_by_isValid;
}

QString OAISharingInvitation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISharingInvitation::asJsonObject() const {
    Q_D(const OAISharingInvitation);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->invited_by.isSet()) {
        obj.insert(QString("invitedBy"), ::OpenAPI::toJsonValue(d->invited_by));
    }
    return obj;
}

OAIIdentitySet OAISharingInvitation::getInvitedBy() const {
    Q_D(const OAISharingInvitation);
    if(!d){
        return {};
    }
    return d->invited_by;
}
void OAISharingInvitation::setInvitedBy(const OAIIdentitySet &invited_by) {
    Q_D(OAISharingInvitation);
    Q_ASSERT(d);

    d->invited_by = invited_by;
    d->invited_by_isSet = true;
}

bool OAISharingInvitation::is_invited_by_Set() const{
    Q_D(const OAISharingInvitation);
    if(!d){
        return false;
    }

    return d->invited_by_isSet;
}

bool OAISharingInvitation::is_invited_by_Valid() const{
    Q_D(const OAISharingInvitation);
    if(!d){
        return false;
    }
    return d->invited_by_isValid;
}

bool OAISharingInvitation::isSet() const {
    Q_D(const OAISharingInvitation);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->invited_by.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISharingInvitation::isValid() const {
    Q_D(const OAISharingInvitation);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
