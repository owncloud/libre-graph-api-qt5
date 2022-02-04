/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.10.0
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

OAIFolderView::OAIFolderView(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFolderView::OAIFolderView() {
    this->initializeModel();
}

OAIFolderView::~OAIFolderView() {}

void OAIFolderView::initializeModel() {

    m_sort_by_isSet = false;
    m_sort_by_isValid = false;

    m_sort_order_isSet = false;
    m_sort_order_isValid = false;

    m_view_type_isSet = false;
    m_view_type_isValid = false;
}

void OAIFolderView::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFolderView::fromJsonObject(QJsonObject json) {

    m_sort_by_isValid = ::OpenAPI::fromJsonValue(sort_by, json[QString("sortBy")]);
    m_sort_by_isSet = !json[QString("sortBy")].isNull() && m_sort_by_isValid;

    m_sort_order_isValid = ::OpenAPI::fromJsonValue(sort_order, json[QString("sortOrder")]);
    m_sort_order_isSet = !json[QString("sortOrder")].isNull() && m_sort_order_isValid;

    m_view_type_isValid = ::OpenAPI::fromJsonValue(view_type, json[QString("viewType")]);
    m_view_type_isSet = !json[QString("viewType")].isNull() && m_view_type_isValid;
}

QString OAIFolderView::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFolderView::asJsonObject() const {
    QJsonObject obj;
    if (m_sort_by_isSet) {
        obj.insert(QString("sortBy"), ::OpenAPI::toJsonValue(sort_by));
    }
    if (m_sort_order_isSet) {
        obj.insert(QString("sortOrder"), ::OpenAPI::toJsonValue(sort_order));
    }
    if (m_view_type_isSet) {
        obj.insert(QString("viewType"), ::OpenAPI::toJsonValue(view_type));
    }
    return obj;
}

QString OAIFolderView::getSortBy() const {
    return sort_by;
}
void OAIFolderView::setSortBy(const QString &sort_by) {
    this->sort_by = sort_by;
    this->m_sort_by_isSet = true;
}

bool OAIFolderView::is_sort_by_Set() const{
    return m_sort_by_isSet;
}

bool OAIFolderView::is_sort_by_Valid() const{
    return m_sort_by_isValid;
}

QString OAIFolderView::getSortOrder() const {
    return sort_order;
}
void OAIFolderView::setSortOrder(const QString &sort_order) {
    this->sort_order = sort_order;
    this->m_sort_order_isSet = true;
}

bool OAIFolderView::is_sort_order_Set() const{
    return m_sort_order_isSet;
}

bool OAIFolderView::is_sort_order_Valid() const{
    return m_sort_order_isValid;
}

QString OAIFolderView::getViewType() const {
    return view_type;
}
void OAIFolderView::setViewType(const QString &view_type) {
    this->view_type = view_type;
    this->m_view_type_isSet = true;
}

bool OAIFolderView::is_view_type_Set() const{
    return m_view_type_isSet;
}

bool OAIFolderView::is_view_type_Valid() const{
    return m_view_type_isValid;
}

bool OAIFolderView::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_sort_by_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sort_order_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_view_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFolderView::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
