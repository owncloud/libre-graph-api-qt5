// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.17.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIFolderView.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIFolderViewPrivate {
    friend class OAIFolderView;

     QString sort_by;
     bool sort_by_isSet;
     bool sort_by_isValid;

     QString sort_order;
     bool sort_order_isSet;
     bool sort_order_isValid;

     QString view_type;
     bool view_type_isSet;
     bool view_type_isValid;
};

OAIFolderView::OAIFolderView()
    : d_ptr()
{
}

OAIFolderView::OAIFolderView(const OAIFolderView& other)
    : d_ptr(other.d_ptr)
{
}

OAIFolderView::OAIFolderView(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIFolderView::~OAIFolderView() = default;

void OAIFolderView::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIFolderViewPrivate{});

        Q_D(OAIFolderView);


        d->sort_by_isSet = false;
        d->sort_by_isValid = false;

        d->sort_order_isSet = false;
        d->sort_order_isValid = false;

        d->view_type_isSet = false;
        d->view_type_isValid = false;
    }
}

void OAIFolderView::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFolderView::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIFolderView);

    d->sort_by_isValid = ::OpenAPI::fromJsonValue(d->sort_by, json[QString("sortBy")]);
    d->sort_by_isSet = !json[QString("sortBy")].isNull() && d->sort_by_isValid;

    d->sort_order_isValid = ::OpenAPI::fromJsonValue(d->sort_order, json[QString("sortOrder")]);
    d->sort_order_isSet = !json[QString("sortOrder")].isNull() && d->sort_order_isValid;

    d->view_type_isValid = ::OpenAPI::fromJsonValue(d->view_type, json[QString("viewType")]);
    d->view_type_isSet = !json[QString("viewType")].isNull() && d->view_type_isValid;
}

QString OAIFolderView::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFolderView::asJsonObject() const {
    Q_D(const OAIFolderView);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->sort_by_isSet) {
        obj.insert(QString("sortBy"), ::OpenAPI::toJsonValue(d->sort_by));
    }
    if (d->sort_order_isSet) {
        obj.insert(QString("sortOrder"), ::OpenAPI::toJsonValue(d->sort_order));
    }
    if (d->view_type_isSet) {
        obj.insert(QString("viewType"), ::OpenAPI::toJsonValue(d->view_type));
    }
    return obj;
}

QString OAIFolderView::getSortBy() const {
    Q_D(const OAIFolderView);
    if(!d){
        return {};
    }
    return d->sort_by;
}
void OAIFolderView::setSortBy(const QString &sort_by) {
    Q_D(OAIFolderView);
    Q_ASSERT(d);

    d->sort_by = sort_by;
    d->sort_by_isSet = true;
}

bool OAIFolderView::is_sort_by_Set() const{
    Q_D(const OAIFolderView);
    if(!d){
        return false;
    }

    return d->sort_by_isSet;
}

bool OAIFolderView::is_sort_by_Valid() const{
    Q_D(const OAIFolderView);
    if(!d){
        return false;
    }
    return d->sort_by_isValid;
}

QString OAIFolderView::getSortOrder() const {
    Q_D(const OAIFolderView);
    if(!d){
        return {};
    }
    return d->sort_order;
}
void OAIFolderView::setSortOrder(const QString &sort_order) {
    Q_D(OAIFolderView);
    Q_ASSERT(d);

    d->sort_order = sort_order;
    d->sort_order_isSet = true;
}

bool OAIFolderView::is_sort_order_Set() const{
    Q_D(const OAIFolderView);
    if(!d){
        return false;
    }

    return d->sort_order_isSet;
}

bool OAIFolderView::is_sort_order_Valid() const{
    Q_D(const OAIFolderView);
    if(!d){
        return false;
    }
    return d->sort_order_isValid;
}

QString OAIFolderView::getViewType() const {
    Q_D(const OAIFolderView);
    if(!d){
        return {};
    }
    return d->view_type;
}
void OAIFolderView::setViewType(const QString &view_type) {
    Q_D(OAIFolderView);
    Q_ASSERT(d);

    d->view_type = view_type;
    d->view_type_isSet = true;
}

bool OAIFolderView::is_view_type_Set() const{
    Q_D(const OAIFolderView);
    if(!d){
        return false;
    }

    return d->view_type_isSet;
}

bool OAIFolderView::is_view_type_Valid() const{
    Q_D(const OAIFolderView);
    if(!d){
        return false;
    }
    return d->view_type_isValid;
}

bool OAIFolderView::isSet() const {
    Q_D(const OAIFolderView);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->sort_by_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->sort_order_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->view_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFolderView::isValid() const {
    Q_D(const OAIFolderView);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
