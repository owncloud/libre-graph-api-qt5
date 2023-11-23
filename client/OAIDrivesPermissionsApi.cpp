// api-body.mustache

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

#include "OAIDrivesPermissionsApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIDrivesPermissionsApi::OAIDrivesPermissionsApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIDrivesPermissionsApi::~OAIDrivesPermissionsApi() {
}

void OAIDrivesPermissionsApi::initializeServerConfigs() {
    //Default server
    QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
    //varying endpoint server
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://ocis.ocis-traefik.latest.owncloud.works/graph"),
    "ownCloud Infinite Scale Latest",
    QMap<QString, OAIServerVariable>()));
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://localhost:9200/graph"),
    "ownCloud Infinite Scale Development Setup",
    QMap<QString, OAIServerVariable>()));
    _serverConfigs.insert("createLink", defaultConf);
    _serverIndices.insert("createLink", 0);
    _serverConfigs.insert("deletePermission", defaultConf);
    _serverIndices.insert("deletePermission", 0);
    _serverConfigs.insert("getPermission", defaultConf);
    _serverIndices.insert("getPermission", 0);
    _serverConfigs.insert("invite", defaultConf);
    _serverIndices.insert("invite", 0);
    _serverConfigs.insert("listPermissions", defaultConf);
    _serverIndices.insert("listPermissions", 0);
    _serverConfigs.insert("setPermissionPassword", defaultConf);
    _serverIndices.insert("setPermissionPassword", 0);
    _serverConfigs.insert("updatePermission", defaultConf);
    _serverIndices.insert("updatePermission", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIDrivesPermissionsApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIDrivesPermissionsApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void OAIDrivesPermissionsApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIDrivesPermissionsApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void OAIDrivesPermissionsApi::setUsername(const QString &username) {
    _username = username;
}

void OAIDrivesPermissionsApi::setPassword(const QString &password) {
    _password = password;
}


void OAIDrivesPermissionsApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIDrivesPermissionsApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIDrivesPermissionsApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;
}

/**
    * Appends a new ServerConfiguration to the config map for a specific operation.
    * @param operation The id to the target operation.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    * returns the index of the new server config on success and -1 if the operation is not found
    */
int OAIDrivesPermissionsApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    if (_serverConfigs.contains(operation)) {
        _serverConfigs[operation].append(OAIServerConfiguration(
                    url,
                    description,
                    variables));
        return _serverConfigs[operation].size()-1;
    } else {
        return -1;
    }
}

/**
    * Appends a new ServerConfiguration to the config map for a all operations and sets the index to that server.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIDrivesPermissionsApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    for (auto keyIt = _serverIndices.keyBegin(); keyIt != _serverIndices.keyEnd(); keyIt++) {
        setServerIndex(*keyIt, addServerConfiguration(*keyIt, url, description, variables));
    }
#else
    for (auto &e : _serverIndices.keys()) {
        setServerIndex(e, addServerConfiguration(e, url, description, variables));
    }
#endif
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIDrivesPermissionsApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIDrivesPermissionsApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void OAIDrivesPermissionsApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void OAIDrivesPermissionsApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void OAIDrivesPermissionsApi::abortRequests() {
    emit abortRequestsSignal();
}

QString OAIDrivesPermissionsApi::getParamStylePrefix(const QString &style) {
    if (style == "matrix") {
        return ";";
    } else if (style == "label") {
        return ".";
    } else if (style == "form") {
        return "&";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "&";
    } else if (style == "pipeDelimited") {
        return "&";
    } else {
        return "none";
    }
}

QString OAIDrivesPermissionsApi::getParamStyleSuffix(const QString &style) {
    if (style == "matrix") {
        return "=";
    } else if (style == "label") {
        return "";
    } else if (style == "form") {
        return "=";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "=";
    } else if (style == "pipeDelimited") {
        return "=";
    } else {
        return "none";
    }
}

QString OAIDrivesPermissionsApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

    if (style == "matrix") {
        return (isExplode) ? ";" + name + "=" : ",";

    } else if (style == "label") {
        return (isExplode) ? "." : ",";

    } else if (style == "form") {
        return (isExplode) ? "&" + name + "=" : ",";

    } else if (style == "simple") {
        return ",";
    } else if (style == "spaceDelimited") {
        return (isExplode) ? "&" + name + "=" : " ";

    } else if (style == "pipeDelimited") {
        return (isExplode) ? "&" + name + "=" : "|";

    } else if (style == "deepObject") {
        return (isExplode) ? "&" : "none";

    } else {
        return "none";
    }
}

void OAIDrivesPermissionsApi::createLink(const QString &drive_id, const QString &item_id, const ::OpenAPI::OptionalParam<OAIDriveItemCreateLink> &oai_drive_item_create_link) {
    QString fullPath = QString(_serverConfigs["createLink"][_serverIndices.value("createLink")].URL()+"/v1beta1/drives/{drive-id}/items/{item-id}/createLink");
    
    
    {
        QString drive_idPathParam("{");
        drive_idPathParam.append("drive-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "drive-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"drive-id"+pathSuffix : pathPrefix;
        fullPath.replace(drive_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(drive_id)));
    }
    
    {
        QString item_idPathParam("{");
        item_idPathParam.append("item-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "item-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"item-id"+pathSuffix : pathPrefix;
        fullPath.replace(item_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(item_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (oai_drive_item_create_link.hasValue()){

        QByteArray output = oai_drive_item_create_link.value().asJson().toUtf8();
        input.request_body.append(output);
    }
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDrivesPermissionsApi::createLinkCallback);
    connect(this, &OAIDrivesPermissionsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDrivesPermissionsApi::createLinkCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIPermission output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit createLinkSignal(output);
        emit createLinkSignalFull(worker, output);
    } else {
        emit createLinkSignalE(output, error_type, error_str);
        emit createLinkSignalEFull(worker, error_type, error_str);
    }
}

void OAIDrivesPermissionsApi::deletePermission(const QString &drive_id, const QString &item_id, const QString &perm_id) {
    QString fullPath = QString(_serverConfigs["deletePermission"][_serverIndices.value("deletePermission")].URL()+"/v1beta1/drives/{drive-id}/items/{item-id}/permissions/{perm-id}");
    
    
    {
        QString drive_idPathParam("{");
        drive_idPathParam.append("drive-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "drive-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"drive-id"+pathSuffix : pathPrefix;
        fullPath.replace(drive_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(drive_id)));
    }
    
    {
        QString item_idPathParam("{");
        item_idPathParam.append("item-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "item-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"item-id"+pathSuffix : pathPrefix;
        fullPath.replace(item_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(item_id)));
    }
    
    {
        QString perm_idPathParam("{");
        perm_idPathParam.append("perm-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "perm-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"perm-id"+pathSuffix : pathPrefix;
        fullPath.replace(perm_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(perm_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "DELETE");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDrivesPermissionsApi::deletePermissionCallback);
    connect(this, &OAIDrivesPermissionsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDrivesPermissionsApi::deletePermissionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit deletePermissionSignal();
        emit deletePermissionSignalFull(worker);
    } else {
        emit deletePermissionSignalE(error_type, error_str);
        emit deletePermissionSignalEFull(worker, error_type, error_str);
    }
}

void OAIDrivesPermissionsApi::getPermission(const QString &drive_id, const QString &item_id, const QString &perm_id) {
    QString fullPath = QString(_serverConfigs["getPermission"][_serverIndices.value("getPermission")].URL()+"/v1beta1/drives/{drive-id}/items/{item-id}/permissions/{perm-id}");
    
    
    {
        QString drive_idPathParam("{");
        drive_idPathParam.append("drive-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "drive-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"drive-id"+pathSuffix : pathPrefix;
        fullPath.replace(drive_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(drive_id)));
    }
    
    {
        QString item_idPathParam("{");
        item_idPathParam.append("item-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "item-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"item-id"+pathSuffix : pathPrefix;
        fullPath.replace(item_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(item_id)));
    }
    
    {
        QString perm_idPathParam("{");
        perm_idPathParam.append("perm-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "perm-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"perm-id"+pathSuffix : pathPrefix;
        fullPath.replace(perm_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(perm_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDrivesPermissionsApi::getPermissionCallback);
    connect(this, &OAIDrivesPermissionsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDrivesPermissionsApi::getPermissionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIPermission output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getPermissionSignal(output);
        emit getPermissionSignalFull(worker, output);
    } else {
        emit getPermissionSignalE(output, error_type, error_str);
        emit getPermissionSignalEFull(worker, error_type, error_str);
    }
}

void OAIDrivesPermissionsApi::invite(const QString &drive_id, const QString &item_id, const ::OpenAPI::OptionalParam<OAIDriveItemInvite> &oai_drive_item_invite) {
    QString fullPath = QString(_serverConfigs["invite"][_serverIndices.value("invite")].URL()+"/v1beta1/drives/{drive-id}/items/{item-id}/invite");
    
    
    {
        QString drive_idPathParam("{");
        drive_idPathParam.append("drive-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "drive-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"drive-id"+pathSuffix : pathPrefix;
        fullPath.replace(drive_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(drive_id)));
    }
    
    {
        QString item_idPathParam("{");
        item_idPathParam.append("item-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "item-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"item-id"+pathSuffix : pathPrefix;
        fullPath.replace(item_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(item_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (oai_drive_item_invite.hasValue()){

        QByteArray output = oai_drive_item_invite.value().asJson().toUtf8();
        input.request_body.append(output);
    }
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDrivesPermissionsApi::inviteCallback);
    connect(this, &OAIDrivesPermissionsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDrivesPermissionsApi::inviteCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICollection_of_permissions output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit inviteSignal(output);
        emit inviteSignalFull(worker, output);
    } else {
        emit inviteSignalE(output, error_type, error_str);
        emit inviteSignalEFull(worker, error_type, error_str);
    }
}

void OAIDrivesPermissionsApi::listPermissions(const QString &drive_id, const QString &item_id) {
    QString fullPath = QString(_serverConfigs["listPermissions"][_serverIndices.value("listPermissions")].URL()+"/v1beta1/drives/{drive-id}/items/{item-id}/permissions");
    
    
    {
        QString drive_idPathParam("{");
        drive_idPathParam.append("drive-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "drive-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"drive-id"+pathSuffix : pathPrefix;
        fullPath.replace(drive_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(drive_id)));
    }
    
    {
        QString item_idPathParam("{");
        item_idPathParam.append("item-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "item-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"item-id"+pathSuffix : pathPrefix;
        fullPath.replace(item_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(item_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDrivesPermissionsApi::listPermissionsCallback);
    connect(this, &OAIDrivesPermissionsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDrivesPermissionsApi::listPermissionsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICollection_of_permissions_with_allowed_values output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit listPermissionsSignal(output);
        emit listPermissionsSignalFull(worker, output);
    } else {
        emit listPermissionsSignalE(output, error_type, error_str);
        emit listPermissionsSignalEFull(worker, error_type, error_str);
    }
}

void OAIDrivesPermissionsApi::setPermissionPassword(const QString &drive_id, const QString &item_id, const QString &perm_id, const OAISharingLinkPassword &oai_sharing_link_password) {
    QString fullPath = QString(_serverConfigs["setPermissionPassword"][_serverIndices.value("setPermissionPassword")].URL()+"/v1beta1/drives/{drive-id}/items/{item-id}/permissions/{perm-id}/setPassword");
    
    
    {
        QString drive_idPathParam("{");
        drive_idPathParam.append("drive-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "drive-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"drive-id"+pathSuffix : pathPrefix;
        fullPath.replace(drive_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(drive_id)));
    }
    
    {
        QString item_idPathParam("{");
        item_idPathParam.append("item-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "item-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"item-id"+pathSuffix : pathPrefix;
        fullPath.replace(item_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(item_id)));
    }
    
    {
        QString perm_idPathParam("{");
        perm_idPathParam.append("perm-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "perm-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"perm-id"+pathSuffix : pathPrefix;
        fullPath.replace(perm_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(perm_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    {

        QByteArray output = oai_sharing_link_password.asJson().toUtf8();
        input.request_body.append(output);
    }
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDrivesPermissionsApi::setPermissionPasswordCallback);
    connect(this, &OAIDrivesPermissionsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDrivesPermissionsApi::setPermissionPasswordCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIPermission output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit setPermissionPasswordSignal(output);
        emit setPermissionPasswordSignalFull(worker, output);
    } else {
        emit setPermissionPasswordSignalE(output, error_type, error_str);
        emit setPermissionPasswordSignalEFull(worker, error_type, error_str);
    }
}

void OAIDrivesPermissionsApi::updatePermission(const QString &drive_id, const QString &item_id, const QString &perm_id, const OAIPermission &oai_permission) {
    QString fullPath = QString(_serverConfigs["updatePermission"][_serverIndices.value("updatePermission")].URL()+"/v1beta1/drives/{drive-id}/items/{item-id}/permissions/{perm-id}");
    
    
    {
        QString drive_idPathParam("{");
        drive_idPathParam.append("drive-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "drive-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"drive-id"+pathSuffix : pathPrefix;
        fullPath.replace(drive_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(drive_id)));
    }
    
    {
        QString item_idPathParam("{");
        item_idPathParam.append("item-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "item-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"item-id"+pathSuffix : pathPrefix;
        fullPath.replace(item_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(item_id)));
    }
    
    {
        QString perm_idPathParam("{");
        perm_idPathParam.append("perm-id").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "perm-id", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"perm-id"+pathSuffix : pathPrefix;
        fullPath.replace(perm_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(perm_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "PATCH");

    {

        QByteArray output = oai_permission.asJson().toUtf8();
        input.request_body.append(output);
    }
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDrivesPermissionsApi::updatePermissionCallback);
    connect(this, &OAIDrivesPermissionsApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDrivesPermissionsApi::updatePermissionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIPermission output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit updatePermissionSignal(output);
        emit updatePermissionSignalFull(worker, output);
    } else {
        emit updatePermissionSignalE(output, error_type, error_str);
        emit updatePermissionSignalEFull(worker, error_type, error_str);
    }
}

void OAIDrivesPermissionsApi::tokenAvailable(){
  
    oauthToken token; 
    switch (_OauthMethod) {
    case 1: //implicit flow
        token = _implicitFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _implicitFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retreive a valid token";
        }
        break;
    case 2: //authorization flow
        token = _authFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _authFlow.removeToken(_latestScope.join(" "));    
            qDebug() << "Could not retreive a valid token";
        }
        break;
    case 3: //client credentials flow
        token = _credentialFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));    
            qDebug() << "Could not retreive a valid token";
        }
        break;
    case 4: //resource owner password flow
        token = _passwordFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));    
            qDebug() << "Could not retreive a valid token";
        }
        break;
    default:
        qDebug() << "No Oauth method set!";
        break;
    }
}
} // namespace OpenAPI
