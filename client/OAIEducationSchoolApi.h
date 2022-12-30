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

#ifndef OAI_OAIEducationSchoolApi_H
#define OAI_OAIEducationSchoolApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIClass_Reference.h"
#include "OAICollection_of_schools.h"
#include "OAIEducationSchool.h"
#include "OAIEducationUser_Reference.h"
#include "OAIOdata_error.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIEducationSchoolApi : public QObject {
    Q_OBJECT

public:
    OAIEducationSchoolApi(const int timeOut = 0);
    ~OAIEducationSchoolApi();

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
    * @param[in]  school_id QString [required]
    * @param[in]  oai_class_reference OAIClass_Reference [required]
    */
    void addClassToSchool(const QString &school_id, const OAIClass_Reference &oai_class_reference);

    /**
    * @param[in]  school_id QString [required]
    * @param[in]  oai_education_user_reference OAIEducationUser_Reference [required]
    */
    void addUserToSchool(const QString &school_id, const OAIEducationUser_Reference &oai_education_user_reference);

    /**
    * @param[in]  oai_education_school OAIEducationSchool [required]
    */
    void createSchool(const OAIEducationSchool &oai_education_school);

    /**
    * @param[in]  school_id QString [required]
    * @param[in]  class_id QString [required]
    */
    void deleteClassFromSchool(const QString &school_id, const QString &class_id);

    /**
    * @param[in]  school_id QString [required]
    */
    void deleteSchool(const QString &school_id);

    /**
    * @param[in]  school_id QString [required]
    * @param[in]  user_id QString [required]
    */
    void deleteUserFromSchool(const QString &school_id, const QString &user_id);

    /**
    * @param[in]  school_id QString [required]
    */
    void getSchool(const QString &school_id);


    void listSchools();

    /**
    * @param[in]  school_id QString [required]
    * @param[in]  oai_education_school OAIEducationSchool [required]
    */
    void updateSchool(const QString &school_id, const OAIEducationSchool &oai_education_school);


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

    void addClassToSchoolCallback(OAIHttpRequestWorker *worker);
    void addUserToSchoolCallback(OAIHttpRequestWorker *worker);
    void createSchoolCallback(OAIHttpRequestWorker *worker);
    void deleteClassFromSchoolCallback(OAIHttpRequestWorker *worker);
    void deleteSchoolCallback(OAIHttpRequestWorker *worker);
    void deleteUserFromSchoolCallback(OAIHttpRequestWorker *worker);
    void getSchoolCallback(OAIHttpRequestWorker *worker);
    void listSchoolsCallback(OAIHttpRequestWorker *worker);
    void updateSchoolCallback(OAIHttpRequestWorker *worker);

signals:

    void addClassToSchoolSignal();
    void addUserToSchoolSignal();
    void createSchoolSignal(OAIEducationSchool summary);
    void deleteClassFromSchoolSignal();
    void deleteSchoolSignal();
    void deleteUserFromSchoolSignal();
    void getSchoolSignal(OAIEducationSchool summary);
    void listSchoolsSignal(OAICollection_of_schools summary);
    void updateSchoolSignal(OAIEducationSchool summary);

    void addClassToSchoolSignalFull(OAIHttpRequestWorker *worker);
    void addUserToSchoolSignalFull(OAIHttpRequestWorker *worker);
    void createSchoolSignalFull(OAIHttpRequestWorker *worker, OAIEducationSchool summary);
    void deleteClassFromSchoolSignalFull(OAIHttpRequestWorker *worker);
    void deleteSchoolSignalFull(OAIHttpRequestWorker *worker);
    void deleteUserFromSchoolSignalFull(OAIHttpRequestWorker *worker);
    void getSchoolSignalFull(OAIHttpRequestWorker *worker, OAIEducationSchool summary);
    void listSchoolsSignalFull(OAIHttpRequestWorker *worker, OAICollection_of_schools summary);
    void updateSchoolSignalFull(OAIHttpRequestWorker *worker, OAIEducationSchool summary);

    void addClassToSchoolSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void addUserToSchoolSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void createSchoolSignalE(OAIEducationSchool summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteClassFromSchoolSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteSchoolSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteUserFromSchoolSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getSchoolSignalE(OAIEducationSchool summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listSchoolsSignalE(OAICollection_of_schools summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateSchoolSignalE(OAIEducationSchool summary, QNetworkReply::NetworkError error_type, QString error_str);

    void addClassToSchoolSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void addUserToSchoolSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createSchoolSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteClassFromSchoolSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteSchoolSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteUserFromSchoolSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getSchoolSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listSchoolsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateSchoolSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
