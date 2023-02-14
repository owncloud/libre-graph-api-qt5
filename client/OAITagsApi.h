// api-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * Libre Graph is a free API for cloud collaboration inspired by the MS Graph API.
 *
 * The version of the OpenAPI document: v1.0.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAITagsApi_H
#define OAI_OAITagsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICollection_of_tags.h"
#include "OAIOdata_error.h"
#include "OAITagAssignment.h"
#include "OAITagUnassignment.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAITagsApi : public QObject {
    Q_OBJECT

public:
    OAITagsApi(const int timeOut = 0);
    ~OAITagsApi();

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
    * @param[in]  oai_tag_assignment OAITagAssignment [optional]
    */
    void assignTags(const ::OpenAPI::OptionalParam<OAITagAssignment> &oai_tag_assignment = ::OpenAPI::OptionalParam<OAITagAssignment>());


    void getTags();

    /**
    * @param[in]  oai_tag_unassignment OAITagUnassignment [optional]
    */
    void unassignTags(const ::OpenAPI::OptionalParam<OAITagUnassignment> &oai_tag_unassignment = ::OpenAPI::OptionalParam<OAITagUnassignment>());


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

    void assignTagsCallback(OAIHttpRequestWorker *worker);
    void getTagsCallback(OAIHttpRequestWorker *worker);
    void unassignTagsCallback(OAIHttpRequestWorker *worker);

signals:

    void assignTagsSignal();
    void getTagsSignal(OAICollection_of_tags summary);
    void unassignTagsSignal();

    void assignTagsSignalFull(OAIHttpRequestWorker *worker);
    void getTagsSignalFull(OAIHttpRequestWorker *worker, OAICollection_of_tags summary);
    void unassignTagsSignalFull(OAIHttpRequestWorker *worker);

    void assignTagsSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getTagsSignalE(OAICollection_of_tags summary, QNetworkReply::NetworkError error_type, QString error_str);
    void unassignTagsSignalE(QNetworkReply::NetworkError error_type, QString error_str);

    void assignTagsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getTagsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unassignTagsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
