QT += network

HEADERS += \
# Models
    $${PWD}/OAIAppRole.h \
    $${PWD}/OAIAppRoleAssignment.h \
    $${PWD}/OAIApplication.h \
    $${PWD}/OAIAudio.h \
    $${PWD}/OAIClass_Member_Reference.h \
    $${PWD}/OAIClass_Reference.h \
    $${PWD}/OAIClass_Teacher_Reference.h \
    $${PWD}/OAICollection_of_appRoleAssignments.h \
    $${PWD}/OAICollection_of_applications.h \
    $${PWD}/OAICollection_of_class.h \
    $${PWD}/OAICollection_of_driveItems.h \
    $${PWD}/OAICollection_of_driveItems_1.h \
    $${PWD}/OAICollection_of_drives.h \
    $${PWD}/OAICollection_of_drives_1.h \
    $${PWD}/OAICollection_of_educationClass.h \
    $${PWD}/OAICollection_of_educationUser.h \
    $${PWD}/OAICollection_of_group.h \
    $${PWD}/OAICollection_of_permissions.h \
    $${PWD}/OAICollection_of_permissions_with_allowed_values.h \
    $${PWD}/OAICollection_of_schools.h \
    $${PWD}/OAICollection_of_tags.h \
    $${PWD}/OAICollection_of_user.h \
    $${PWD}/OAICollection_of_users.h \
    $${PWD}/OAIDeleted.h \
    $${PWD}/OAIDirectoryObject.h \
    $${PWD}/OAIDrive.h \
    $${PWD}/OAIDriveItem.h \
    $${PWD}/OAIDriveItemCreateLink.h \
    $${PWD}/OAIDriveItemInvite.h \
    $${PWD}/OAIDriveRecipient.h \
    $${PWD}/OAIEducationClass.h \
    $${PWD}/OAIEducationOrganization.h \
    $${PWD}/OAIEducationSchool.h \
    $${PWD}/OAIEducationUser.h \
    $${PWD}/OAIEducationUser_Reference.h \
    $${PWD}/OAIEntity.h \
    $${PWD}/OAIExportPersonalData_request.h \
    $${PWD}/OAIFileSystemInfo.h \
    $${PWD}/OAIFolder.h \
    $${PWD}/OAIFolderView.h \
    $${PWD}/OAIGeoCoordinates.h \
    $${PWD}/OAIGroup.h \
    $${PWD}/OAIHashes.h \
    $${PWD}/OAIIdentity.h \
    $${PWD}/OAIIdentitySet.h \
    $${PWD}/OAIImage.h \
    $${PWD}/OAIItemReference.h \
    $${PWD}/OAIMember_Reference.h \
    $${PWD}/OAIObjectIdentity.h \
    $${PWD}/OAIOdata_error.h \
    $${PWD}/OAIOdata_error_detail.h \
    $${PWD}/OAIOdata_error_main.h \
    $${PWD}/OAIOpenGraphFile.h \
    $${PWD}/OAIPasswordProfile.h \
    $${PWD}/OAIPassword_change.h \
    $${PWD}/OAIPermission.h \
    $${PWD}/OAIPhoto.h \
    $${PWD}/OAIQuota.h \
    $${PWD}/OAIRemoteItem.h \
    $${PWD}/OAISharePointIdentitySet.h \
    $${PWD}/OAIShared.h \
    $${PWD}/OAISharingLink.h \
    $${PWD}/OAISharingLinkPassword.h \
    $${PWD}/OAISharingLinkType.h \
    $${PWD}/OAISpecialFolder.h \
    $${PWD}/OAITagAssignment.h \
    $${PWD}/OAITagUnassignment.h \
    $${PWD}/OAITrash.h \
    $${PWD}/OAIUnifiedRoleDefinition.h \
    $${PWD}/OAIUnifiedRolePermission.h \
    $${PWD}/OAIUser.h \
    $${PWD}/OAIVideo.h \
# APIs
    $${PWD}/OAIApplicationsApi.h \
    $${PWD}/OAIDrivesApi.h \
    $${PWD}/OAIDrivesGetDrivesApi.h \
    $${PWD}/OAIDrivesPermissionsApi.h \
    $${PWD}/OAIDrivesRootApi.h \
    $${PWD}/OAIEducationClassApi.h \
    $${PWD}/OAIEducationClassTeachersApi.h \
    $${PWD}/OAIEducationSchoolApi.h \
    $${PWD}/OAIEducationUserApi.h \
    $${PWD}/OAIGroupApi.h \
    $${PWD}/OAIGroupsApi.h \
    $${PWD}/OAIMeChangepasswordApi.h \
    $${PWD}/OAIMeDriveApi.h \
    $${PWD}/OAIMeDriveRootApi.h \
    $${PWD}/OAIMeDriveRootChildrenApi.h \
    $${PWD}/OAIMeDrivesApi.h \
    $${PWD}/OAIMeUserApi.h \
    $${PWD}/OAIRoleManagementApi.h \
    $${PWD}/OAITagsApi.h \
    $${PWD}/OAIUserApi.h \
    $${PWD}/OAIUserAppRoleAssignmentApi.h \
    $${PWD}/OAIUsersApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h \
    $${PWD}/OAIServerConfiguration.h \
    $${PWD}/OAIServerVariable.h \
    $${PWD}/OAIOauth.h

SOURCES += \
# Models
    $${PWD}/OAIAppRole.cpp \
    $${PWD}/OAIAppRoleAssignment.cpp \
    $${PWD}/OAIApplication.cpp \
    $${PWD}/OAIAudio.cpp \
    $${PWD}/OAIClass_Member_Reference.cpp \
    $${PWD}/OAIClass_Reference.cpp \
    $${PWD}/OAIClass_Teacher_Reference.cpp \
    $${PWD}/OAICollection_of_appRoleAssignments.cpp \
    $${PWD}/OAICollection_of_applications.cpp \
    $${PWD}/OAICollection_of_class.cpp \
    $${PWD}/OAICollection_of_driveItems.cpp \
    $${PWD}/OAICollection_of_driveItems_1.cpp \
    $${PWD}/OAICollection_of_drives.cpp \
    $${PWD}/OAICollection_of_drives_1.cpp \
    $${PWD}/OAICollection_of_educationClass.cpp \
    $${PWD}/OAICollection_of_educationUser.cpp \
    $${PWD}/OAICollection_of_group.cpp \
    $${PWD}/OAICollection_of_permissions.cpp \
    $${PWD}/OAICollection_of_permissions_with_allowed_values.cpp \
    $${PWD}/OAICollection_of_schools.cpp \
    $${PWD}/OAICollection_of_tags.cpp \
    $${PWD}/OAICollection_of_user.cpp \
    $${PWD}/OAICollection_of_users.cpp \
    $${PWD}/OAIDeleted.cpp \
    $${PWD}/OAIDirectoryObject.cpp \
    $${PWD}/OAIDrive.cpp \
    $${PWD}/OAIDriveItem.cpp \
    $${PWD}/OAIDriveItemCreateLink.cpp \
    $${PWD}/OAIDriveItemInvite.cpp \
    $${PWD}/OAIDriveRecipient.cpp \
    $${PWD}/OAIEducationClass.cpp \
    $${PWD}/OAIEducationOrganization.cpp \
    $${PWD}/OAIEducationSchool.cpp \
    $${PWD}/OAIEducationUser.cpp \
    $${PWD}/OAIEducationUser_Reference.cpp \
    $${PWD}/OAIEntity.cpp \
    $${PWD}/OAIExportPersonalData_request.cpp \
    $${PWD}/OAIFileSystemInfo.cpp \
    $${PWD}/OAIFolder.cpp \
    $${PWD}/OAIFolderView.cpp \
    $${PWD}/OAIGeoCoordinates.cpp \
    $${PWD}/OAIGroup.cpp \
    $${PWD}/OAIHashes.cpp \
    $${PWD}/OAIIdentity.cpp \
    $${PWD}/OAIIdentitySet.cpp \
    $${PWD}/OAIImage.cpp \
    $${PWD}/OAIItemReference.cpp \
    $${PWD}/OAIMember_Reference.cpp \
    $${PWD}/OAIObjectIdentity.cpp \
    $${PWD}/OAIOdata_error.cpp \
    $${PWD}/OAIOdata_error_detail.cpp \
    $${PWD}/OAIOdata_error_main.cpp \
    $${PWD}/OAIOpenGraphFile.cpp \
    $${PWD}/OAIPasswordProfile.cpp \
    $${PWD}/OAIPassword_change.cpp \
    $${PWD}/OAIPermission.cpp \
    $${PWD}/OAIPhoto.cpp \
    $${PWD}/OAIQuota.cpp \
    $${PWD}/OAIRemoteItem.cpp \
    $${PWD}/OAISharePointIdentitySet.cpp \
    $${PWD}/OAIShared.cpp \
    $${PWD}/OAISharingLink.cpp \
    $${PWD}/OAISharingLinkPassword.cpp \
    $${PWD}/OAISharingLinkType.cpp \
    $${PWD}/OAISpecialFolder.cpp \
    $${PWD}/OAITagAssignment.cpp \
    $${PWD}/OAITagUnassignment.cpp \
    $${PWD}/OAITrash.cpp \
    $${PWD}/OAIUnifiedRoleDefinition.cpp \
    $${PWD}/OAIUnifiedRolePermission.cpp \
    $${PWD}/OAIUser.cpp \
    $${PWD}/OAIVideo.cpp \
# APIs
    $${PWD}/OAIApplicationsApi.cpp \
    $${PWD}/OAIDrivesApi.cpp \
    $${PWD}/OAIDrivesGetDrivesApi.cpp \
    $${PWD}/OAIDrivesPermissionsApi.cpp \
    $${PWD}/OAIDrivesRootApi.cpp \
    $${PWD}/OAIEducationClassApi.cpp \
    $${PWD}/OAIEducationClassTeachersApi.cpp \
    $${PWD}/OAIEducationSchoolApi.cpp \
    $${PWD}/OAIEducationUserApi.cpp \
    $${PWD}/OAIGroupApi.cpp \
    $${PWD}/OAIGroupsApi.cpp \
    $${PWD}/OAIMeChangepasswordApi.cpp \
    $${PWD}/OAIMeDriveApi.cpp \
    $${PWD}/OAIMeDriveRootApi.cpp \
    $${PWD}/OAIMeDriveRootChildrenApi.cpp \
    $${PWD}/OAIMeDrivesApi.cpp \
    $${PWD}/OAIMeUserApi.cpp \
    $${PWD}/OAIRoleManagementApi.cpp \
    $${PWD}/OAITagsApi.cpp \
    $${PWD}/OAIUserApi.cpp \
    $${PWD}/OAIUserAppRoleAssignmentApi.cpp \
    $${PWD}/OAIUsersApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp \
    $${PWD}/OAIOauth.cpp
