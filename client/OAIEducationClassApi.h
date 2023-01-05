// api-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1.0.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIEducationClassApi_H
#define OAI_OAIEducationClassApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIClass_Member_Reference.h"
#include "OAICollection_of_class.h"
#include "OAICollection_of_educationUser.h"
#include "OAIEducationClass.h"
#include "OAIOdata_error.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIEducationClassApi : public QObject {
    Q_OBJECT

public:
    OAIEducationClassApi(const int timeOut = 0);
    ~OAIEducationClassApi();

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
    * @param[in]  class_id QString [required]
    * @param[in]  oai_class_member_reference OAIClass_Member_Reference [required]
    */
    void addUserToClass(const QString &class_id, const OAIClass_Member_Reference &oai_class_member_reference);

    /**
    * @param[in]  oai_education_class OAIEducationClass [required]
    */
    void createClass(const OAIEducationClass &oai_education_class);

    /**
    * @param[in]  class_id QString [required]
    */
    void deleteClass(const QString &class_id);

    /**
    * @param[in]  class_id QString [required]
    * @param[in]  user_id QString [required]
    */
    void deleteUserFromClass(const QString &class_id, const QString &user_id);

    /**
    * @param[in]  class_id QString [required]
    */
    void getClass(const QString &class_id);

    /**
    * @param[in]  class_id QString [required]
    */
    void listClassMembers(const QString &class_id);


    void listClasses();

    /**
    * @param[in]  class_id QString [required]
    * @param[in]  oai_education_class OAIEducationClass [required]
    */
    void updateClass(const QString &class_id, const OAIEducationClass &oai_education_class);


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

    void addUserToClassCallback(OAIHttpRequestWorker *worker);
    void createClassCallback(OAIHttpRequestWorker *worker);
    void deleteClassCallback(OAIHttpRequestWorker *worker);
    void deleteUserFromClassCallback(OAIHttpRequestWorker *worker);
    void getClassCallback(OAIHttpRequestWorker *worker);
    void listClassMembersCallback(OAIHttpRequestWorker *worker);
    void listClassesCallback(OAIHttpRequestWorker *worker);
    void updateClassCallback(OAIHttpRequestWorker *worker);

signals:

    void addUserToClassSignal();
    void createClassSignal(OAIEducationClass summary);
    void deleteClassSignal();
    void deleteUserFromClassSignal();
    void getClassSignal(OAIEducationClass summary);
    void listClassMembersSignal(OAICollection_of_educationUser summary);
    void listClassesSignal(OAICollection_of_class summary);
    void updateClassSignal(OAIEducationClass summary);

    void addUserToClassSignalFull(OAIHttpRequestWorker *worker);
    void createClassSignalFull(OAIHttpRequestWorker *worker, OAIEducationClass summary);
    void deleteClassSignalFull(OAIHttpRequestWorker *worker);
    void deleteUserFromClassSignalFull(OAIHttpRequestWorker *worker);
    void getClassSignalFull(OAIHttpRequestWorker *worker, OAIEducationClass summary);
    void listClassMembersSignalFull(OAIHttpRequestWorker *worker, OAICollection_of_educationUser summary);
    void listClassesSignalFull(OAIHttpRequestWorker *worker, OAICollection_of_class summary);
    void updateClassSignalFull(OAIHttpRequestWorker *worker, OAIEducationClass summary);

    void addUserToClassSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void createClassSignalE(OAIEducationClass summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteClassSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteUserFromClassSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getClassSignalE(OAIEducationClass summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listClassMembersSignalE(OAICollection_of_educationUser summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listClassesSignalE(OAICollection_of_class summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateClassSignalE(OAIEducationClass summary, QNetworkReply::NetworkError error_type, QString error_str);

    void addUserToClassSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createClassSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteClassSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteUserFromClassSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getClassSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listClassMembersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listClassesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateClassSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
