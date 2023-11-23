// api-header.mustache

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

#ifndef OAI_OAIDrivesPermissionsApi_H
#define OAI_OAIDrivesPermissionsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICollection_of_permissions.h"
#include "OAICollection_of_permissions_with_allowed_values.h"
#include "OAIDriveItemCreateLink.h"
#include "OAIDriveItemInvite.h"
#include "OAIOdata_error.h"
#include "OAIPermission.h"
#include "OAISharingLinkPassword.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIDrivesPermissionsApi : public QObject {
    Q_OBJECT

public:
    OAIDrivesPermissionsApi(const int timeOut = 0);
    ~OAIDrivesPermissionsApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  drive_id QString [required]
    * @param[in]  item_id QString [required]
    * @param[in]  oai_drive_item_create_link OAIDriveItemCreateLink [optional]
    */
    void createLink(const QString &drive_id, const QString &item_id, const ::OpenAPI::OptionalParam<OAIDriveItemCreateLink> &oai_drive_item_create_link = ::OpenAPI::OptionalParam<OAIDriveItemCreateLink>());

    /**
    * @param[in]  drive_id QString [required]
    * @param[in]  item_id QString [required]
    * @param[in]  perm_id QString [required]
    */
    void deletePermission(const QString &drive_id, const QString &item_id, const QString &perm_id);

    /**
    * @param[in]  drive_id QString [required]
    * @param[in]  item_id QString [required]
    * @param[in]  perm_id QString [required]
    */
    void getPermission(const QString &drive_id, const QString &item_id, const QString &perm_id);

    /**
    * @param[in]  drive_id QString [required]
    * @param[in]  item_id QString [required]
    * @param[in]  oai_drive_item_invite OAIDriveItemInvite [optional]
    */
    void invite(const QString &drive_id, const QString &item_id, const ::OpenAPI::OptionalParam<OAIDriveItemInvite> &oai_drive_item_invite = ::OpenAPI::OptionalParam<OAIDriveItemInvite>());

    /**
    * @param[in]  drive_id QString [required]
    * @param[in]  item_id QString [required]
    */
    void listPermissions(const QString &drive_id, const QString &item_id);

    /**
    * @param[in]  drive_id QString [required]
    * @param[in]  item_id QString [required]
    * @param[in]  perm_id QString [required]
    * @param[in]  oai_sharing_link_password OAISharingLinkPassword [required]
    */
    void setPermissionPassword(const QString &drive_id, const QString &item_id, const QString &perm_id, const OAISharingLinkPassword &oai_sharing_link_password);

    /**
    * @param[in]  drive_id QString [required]
    * @param[in]  item_id QString [required]
    * @param[in]  perm_id QString [required]
    * @param[in]  oai_permission OAIPermission [required]
    */
    void updatePermission(const QString &drive_id, const QString &item_id, const QString &perm_id, const OAIPermission &oai_permission);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void createLinkCallback(OAIHttpRequestWorker *worker);
    void deletePermissionCallback(OAIHttpRequestWorker *worker);
    void getPermissionCallback(OAIHttpRequestWorker *worker);
    void inviteCallback(OAIHttpRequestWorker *worker);
    void listPermissionsCallback(OAIHttpRequestWorker *worker);
    void setPermissionPasswordCallback(OAIHttpRequestWorker *worker);
    void updatePermissionCallback(OAIHttpRequestWorker *worker);

signals:

    void createLinkSignal(OAIPermission summary);
    void deletePermissionSignal();
    void getPermissionSignal(OAIPermission summary);
    void inviteSignal(OAICollection_of_permissions summary);
    void listPermissionsSignal(OAICollection_of_permissions_with_allowed_values summary);
    void setPermissionPasswordSignal(OAIPermission summary);
    void updatePermissionSignal(OAIPermission summary);

    void createLinkSignalFull(OAIHttpRequestWorker *worker, OAIPermission summary);
    void deletePermissionSignalFull(OAIHttpRequestWorker *worker);
    void getPermissionSignalFull(OAIHttpRequestWorker *worker, OAIPermission summary);
    void inviteSignalFull(OAIHttpRequestWorker *worker, OAICollection_of_permissions summary);
    void listPermissionsSignalFull(OAIHttpRequestWorker *worker, OAICollection_of_permissions_with_allowed_values summary);
    void setPermissionPasswordSignalFull(OAIHttpRequestWorker *worker, OAIPermission summary);
    void updatePermissionSignalFull(OAIHttpRequestWorker *worker, OAIPermission summary);

    void createLinkSignalE(OAIPermission summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deletePermissionSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getPermissionSignalE(OAIPermission summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inviteSignalE(OAICollection_of_permissions summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listPermissionsSignalE(OAICollection_of_permissions_with_allowed_values summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setPermissionPasswordSignalE(OAIPermission summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updatePermissionSignalE(OAIPermission summary, QNetworkReply::NetworkError error_type, QString error_str);

    void createLinkSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deletePermissionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getPermissionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inviteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listPermissionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setPermissionPasswordSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updatePermissionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
