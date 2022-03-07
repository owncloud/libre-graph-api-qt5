// api-header.mustache

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

#ifndef OAI_OAIUsersApi_H
#define OAI_OAIUsersApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICollection_of_user.h"
#include "OAIOdata_error.h"
#include "OAIUser.h"
#include <QSet>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIUsersApi : public QObject {
    Q_OBJECT

public:
    OAIUsersApi(const int timeOut = 0);
    ~OAIUsersApi();

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
    * @param[in]  oai_user OAIUser [required]
    */
    void createUser(const OAIUser &oai_user);

    /**
    * @param[in]  top qint32 [optional]
    * @param[in]  skip qint32 [optional]
    * @param[in]  search QString [optional]
    * @param[in]  filter QString [optional]
    * @param[in]  count bool [optional]
    * @param[in]  orderby QSet<QString> [optional]
    * @param[in]  select QSet<QString> [optional]
    * @param[in]  expand QSet<QString> [optional]
    */
    void listUsers(const ::OpenAPI::OptionalParam<qint32> &top = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &skip = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &search = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &filter = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<bool> &count = ::OpenAPI::OptionalParam<bool>(), const ::OpenAPI::OptionalParam<QSet<QString>> &orderby = ::OpenAPI::OptionalParam<QSet<QString>>(), const ::OpenAPI::OptionalParam<QSet<QString>> &select = ::OpenAPI::OptionalParam<QSet<QString>>(), const ::OpenAPI::OptionalParam<QSet<QString>> &expand = ::OpenAPI::OptionalParam<QSet<QString>>());


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

    void createUserCallback(OAIHttpRequestWorker *worker);
    void listUsersCallback(OAIHttpRequestWorker *worker);

signals:

    void createUserSignal(OAIUser summary);
    void listUsersSignal(OAICollection_of_user summary);

    void createUserSignalFull(OAIHttpRequestWorker *worker, OAIUser summary);
    void listUsersSignalFull(OAIHttpRequestWorker *worker, OAICollection_of_user summary);

    void createUserSignalE(OAIUser summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listUsersSignalE(OAICollection_of_user summary, QNetworkReply::NetworkError error_type, QString error_str);

    void createUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listUsersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
