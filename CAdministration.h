//=========================================================================
// Copyright (C) 2012 The Elastos Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=========================================================================

#ifndef __CHUBBAMORRIS_CLASS_H__
#define __CHUBBAMORRIS_CLASS_H__

#include "Elastos.ChubbaMorris.h"       // include module header file, file name format: module name.h
#include "elastos/core/Object.h"    // include Object base class

using Elastos::Core::IComparable;

namespace Elastos {
namespace ChubbaMorris {


class CAdministration
    : public Object
    , public ICH
    , public IComparable
{
public:
    CAR_INTERFACE_DECL()    // The class which implements a CAR interface requires macros CAR_INTERFACE_DECL/CAR_INTERFACE_IMPL.

    CAdministration();               // If a member needs to be initialized, the constructor must be explicitly declared 

    virtual ~CAdministration();

    CARAPI constructor();   // CAR constructor for subclass inheritance.

     // IComparable interface function
    //
    CARAPI CompareTo(
        /* [in] */ IInterface* another,
        /* [out] */ Int32* result);

    // ICH interface function
    //
   

   CARAPI SetService_ServiceId(
     /* [in] */ const String& CAdministration.service.serviceId);

    CARAPI GetService_ServiceId(
     /* [out] */ String* CAdministration.service.serviceId);


   CARAPI SetService_ServiceName(
     /* [in] */ const String& CAdministration.service.serviceName);

    CARAPI GetService_ServiceName(
     /* [out] */ String* CAdministration.service.serviceName);


   CARAPI SetService_Description(
     /* [in] */ const String& CAdministration.service.description);

    CARAPI GetService_Description(
     /* [out] */ String* CAdministration.service.description);


   CARAPI SetService_ServiceUnitsSupplied(
     /* [in] */ Double CAdministration.service.serviceUnitsSupplied);

    CARAPI GetService_ServiceUnitsSupplied(
     /* [out] */ Double* CAdministration.service.serviceUnitsSupplied);


   CARAPI SetService_PricingUnits(
     /* [in] */ const String& CAdministration.service.pricingUnits);

    CARAPI GetService_PricingUnits(
     /* [out] */ String* CAdministration.service.pricingUnits);


   CARAPI SetService_PriceRatePerUnit(
     /* [in] */ Double CAdministration.service.priceRatePerUnit);

    CARAPI GetService_PriceRatePerUnit(
     /* [out] */ Double* CAdministration.service.priceRatePerUnit);


   CARAPI SetService_ItemIdsSupplied(
     /* [in] */ ArrayOf<const String&> CAdministration.service.itemIdsSupplied);

    CARAPI GetService_ItemIdsSupplied(
     /* [out, callee] */ ArrayOf<String>* CAdministration.service.itemIdsSupplied);


   CARAPI SetService_ItemQuantities(
     /* [in] */ ArrayOf<Double> CAdministration.service.itemQuantities);

    CARAPI GetService_ItemQuantities(
     /* [out, callee] */ ArrayOf<Double>* CAdministration.service.itemQuantities);


   CARAPI SetService_EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.service.employeeIds);

    CARAPI GetService_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.service.employeeIds);


   CARAPI SetService_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.service.supplierIds);

    CARAPI GetService_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.service.supplierIds);


   CARAPI SetService_ServiceTypeId(
     /* [in] */ CAdministration.serviceType CAdministration.service.serviceTypeId);

    CARAPI GetService_ServiceTypeId(
     /* [out] */ CAdministration.serviceType* CAdministration.service.serviceTypeId);


   CARAPI SetService_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.service.docRefs);

    CARAPI GetService_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.service.docRefs);


   CARAPI SetService_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.service.imageRefs);

    CARAPI GetService_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.service.imageRefs);


   CARAPI SetService_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.service.audioRefIds);

    CARAPI GetService_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.service.audioRefIds);


   CARAPI SetService_CustomerId(
     /* [in] */ CCustomer.customer CAdministration.service.customerId);

    CARAPI GetService_CustomerId(
     /* [out] */ CCustomer.customer* CAdministration.service.customerId);


   CARAPI SetService_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.service.businessChannelOwnerId);

    CARAPI GetService_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.service.businessChannelOwnerId);


   CARAPI SetServiceType_ServiceTypeId(
     /* [in] */ const String& CAdministration.serviceType.serviceTypeId);

    CARAPI GetServiceType_ServiceTypeId(
     /* [out] */ String* CAdministration.serviceType.serviceTypeId);


   CARAPI SetServiceType_ServiceName(
     /* [in] */ const String& CAdministration.serviceType.serviceName);

    CARAPI GetServiceType_ServiceName(
     /* [out] */ String* CAdministration.serviceType.serviceName);


   CARAPI SetServiceType_Description(
     /* [in] */ const String& CAdministration.serviceType.description);

    CARAPI GetServiceType_Description(
     /* [out] */ String* CAdministration.serviceType.description);


   CARAPI SetServiceType_PriceRateUnits(
     /* [in] */ const String& CAdministration.serviceType.priceRateUnits);

    CARAPI GetServiceType_PriceRateUnits(
     /* [out] */ String* CAdministration.serviceType.priceRateUnits);


   CARAPI SetServiceType_PriceRate(
     /* [in] */ Double CAdministration.serviceType.priceRate);

    CARAPI GetServiceType_PriceRate(
     /* [out] */ Double* CAdministration.serviceType.priceRate);


   CARAPI SetServiceType_ProviderRoleIdsWithinEnterprise(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.serviceType.providerRoleIdsWithinEnterprise);

    CARAPI GetServiceType_ProviderRoleIdsWithinEnterprise(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.serviceType.providerRoleIdsWithinEnterprise);


   CARAPI SetServiceType_BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.serviceType.branchIds);

    CARAPI GetServiceType_BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.serviceType.branchIds);


   CARAPI SetServiceType_DeptIds(
     /* [in] */ ArrayOf<CAdministration.department> CAdministration.serviceType.deptIds);

    CARAPI GetServiceType_DeptIds(
     /* [out, callee] */ ArrayOf<CAdministration.department>* CAdministration.serviceType.deptIds);


   CARAPI SetServiceType_ExternalProvidersIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.serviceType.externalProvidersIds);

    CARAPI GetServiceType_ExternalProvidersIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.serviceType.externalProvidersIds);


   CARAPI SetServiceType_SupplierTypeIds(
     /* [in] */ ArrayOf<CSupplier.supplierType> CAdministration.serviceType.supplierTypeIds);

    CARAPI GetServiceType_SupplierTypeIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplierType>* CAdministration.serviceType.supplierTypeIds);


   CARAPI SetServiceType_ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CAdministration.serviceType.itemTypeIds);

    CARAPI GetServiceType_ItemTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CAdministration.serviceType.itemTypeIds);


   CARAPI SetServiceType_JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CAdministration.serviceType.jobTypeIds);

    CARAPI GetServiceType_JobTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.jobType>* CAdministration.serviceType.jobTypeIds);


   CARAPI SetServiceType_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.serviceType.docRefs);

    CARAPI GetServiceType_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.serviceType.docRefs);


   CARAPI SetServiceType_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.serviceType.imageRefs);

    CARAPI GetServiceType_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.serviceType.imageRefs);


   CARAPI SetServiceType_VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.serviceType.videoRefs);

    CARAPI GetServiceType_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.serviceType.videoRefs);


   CARAPI SetServiceType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.serviceType.businessChannelOwnerId);

    CARAPI GetServiceType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.serviceType.businessChannelOwnerId);


   CARAPI SetServiceRequest_SRQId(
     /* [in] */ const String& CAdministration.serviceRequest.sRQId);

    CARAPI GetServiceRequest_SRQId(
     /* [out] */ String* CAdministration.serviceRequest.sRQId);


   CARAPI SetServiceRequest_ServiceSequenceDescription(
     /* [in] */ ArrayOf<const String&> CAdministration.serviceRequest.serviceSequenceDescription);

    CARAPI GetServiceRequest_ServiceSequenceDescription(
     /* [out, callee] */ ArrayOf<String>* CAdministration.serviceRequest.serviceSequenceDescription);


   CARAPI SetServiceRequest_RequestsAccepted(
     /* [in] */ ArrayOf<const String&> CAdministration.serviceRequest.requestsAccepted);

    CARAPI GetServiceRequest_RequestsAccepted(
     /* [out, callee] */ ArrayOf<String>* CAdministration.serviceRequest.requestsAccepted);


   CARAPI SetServiceRequest_ItemQuantities(
     /* [in] */ ArrayOf<Double> CAdministration.serviceRequest.itemQuantities);

    CARAPI GetServiceRequest_ItemQuantities(
     /* [out, callee] */ ArrayOf<Double>* CAdministration.serviceRequest.itemQuantities);


   CARAPI SetServiceRequest_ItemUnits(
     /* [in] */ ArrayOf<const String&> CAdministration.serviceRequest.itemUnits);

    CARAPI GetServiceRequest_ItemUnits(
     /* [out, callee] */ ArrayOf<String>* CAdministration.serviceRequest.itemUnits);


   CARAPI SetServiceRequest_DueDates(
     /* [in] */ ArrayOf<const String&> CAdministration.serviceRequest.dueDates);

    CARAPI GetServiceRequest_DueDates(
     /* [out, callee] */ ArrayOf<String>* CAdministration.serviceRequest.dueDates);


   CARAPI SetServiceRequest_RequestByStaffIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.serviceRequest.requestByStaffIds);

    CARAPI GetServiceRequest_RequestByStaffIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.serviceRequest.requestByStaffIds);


   CARAPI SetServiceRequest_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.serviceRequest.docRefIds);

    CARAPI GetServiceRequest_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.serviceRequest.docRefIds);


   CARAPI SetServiceRequest_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.serviceRequest.imageRefIds);

    CARAPI GetServiceRequest_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.serviceRequest.imageRefIds);


   CARAPI SetServiceRequest_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.serviceRequest.audioRefIds);

    CARAPI GetServiceRequest_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.serviceRequest.audioRefIds);


   CARAPI SetServiceRequest_BranchIdsInvolved(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.serviceRequest.branchIdsInvolved);

    CARAPI GetServiceRequest_BranchIdsInvolved(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.serviceRequest.branchIdsInvolved);


   CARAPI SetServiceRequest_DeptIdsInvolved(
     /* [in] */ ArrayOf<CAdministration.department> CAdministration.serviceRequest.deptIdsInvolved);

    CARAPI GetServiceRequest_DeptIdsInvolved(
     /* [out, callee] */ ArrayOf<CAdministration.department>* CAdministration.serviceRequest.deptIdsInvolved);


   CARAPI SetServiceRequest_ResponsibleRoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.serviceRequest.responsibleRoleIds);

    CARAPI GetServiceRequest_ResponsibleRoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.serviceRequest.responsibleRoleIds);


   CARAPI SetServiceRequest_ResponsibleStaffIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.serviceRequest.responsibleStaffIds);

    CARAPI GetServiceRequest_ResponsibleStaffIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.serviceRequest.responsibleStaffIds);


   CARAPI SetServiceRequest_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.serviceRequest.serviceIds);

    CARAPI GetServiceRequest_ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.serviceRequest.serviceIds);


   CARAPI SetServiceRequest_ServiceTypeIds(
     /* [in] */ ArrayOf<CAdministration.serviceType> CAdministration.serviceRequest.serviceTypeIds);

    CARAPI GetServiceRequest_ServiceTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.serviceType>* CAdministration.serviceRequest.serviceTypeIds);


   CARAPI SetServiceRequest_ItemTypeIdsRequired(
     /* [in] */ ArrayOf<CAdministration.itemType> CAdministration.serviceRequest.itemTypeIdsRequired);

    CARAPI GetServiceRequest_ItemTypeIdsRequired(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CAdministration.serviceRequest.itemTypeIdsRequired);


   CARAPI SetServiceRequest_JobTypeIdsRequired(
     /* [in] */ ArrayOf<CAdministration.jobType> CAdministration.serviceRequest.jobTypeIdsRequired);

    CARAPI GetServiceRequest_JobTypeIdsRequired(
     /* [out, callee] */ ArrayOf<CAdministration.jobType>* CAdministration.serviceRequest.jobTypeIdsRequired);


   CARAPI SetServiceRequest_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CAdministration.serviceRequest.propertyIds);

    CARAPI GetServiceRequest_PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CAdministration.serviceRequest.propertyIds);


   CARAPI SetServiceRequest_MasterAsset(
     /* [in] */ ArrayOf<CFinance.masterAssetRegister> CAdministration.serviceRequest.masterAssetIds);

    CARAPI GetServiceRequest_MasterAsset(
     /* [out, callee] */ ArrayOf<CFinance.masterAssetRegister>* CAdministration.serviceRequest.masterAssetIds);


   CARAPI SetServiceRequest_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.serviceRequest.customerIds);

    CARAPI GetServiceRequest_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.serviceRequest.customerIds);


   CARAPI SetServiceRequest_CustomerTypesIds(
     /* [in] */ ArrayOf<CCustomer.customerType> CAdministration.serviceRequest.customerTypesIds);

    CARAPI GetServiceRequest_CustomerTypesIds(
     /* [out, callee] */ ArrayOf<CCustomer.customerType>* CAdministration.serviceRequest.customerTypesIds);


   CARAPI SetServiceRequest_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.serviceRequest.businessChannelOwnerId);

    CARAPI GetServiceRequest_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.serviceRequest.businessChannelOwnerId);


   CARAPI SetCorrespondenceLog_CorroId(
     /* [in] */ const String& CAdministration.correspondenceLog.corroId);

    CARAPI GetCorrespondenceLog_CorroId(
     /* [out] */ String* CAdministration.correspondenceLog.corroId);


   CARAPI SetCorrespondenceLog_ParticipantName(
     /* [in] */ const String& CAdministration.correspondenceLog.participantName);

    CARAPI GetCorrespondenceLog_ParticipantName(
     /* [out] */ String* CAdministration.correspondenceLog.participantName);


   CARAPI SetCorrespondenceLog_ParticipantId(
     /* [in] */ const String& CAdministration.correspondenceLog.participantId);

    CARAPI GetCorrespondenceLog_ParticipantId(
     /* [out] */ String* CAdministration.correspondenceLog.participantId);


   CARAPI SetCorrespondenceLog_Description(
     /* [in] */ const String& CAdministration.correspondenceLog.description);

    CARAPI GetCorrespondenceLog_Description(
     /* [out] */ String* CAdministration.correspondenceLog.description);


   CARAPI SetCorrespondenceLog_CorroReceived(
     /* [in] */ const String& CAdministration.correspondenceLog.corroReceived);

    CARAPI GetCorrespondenceLog_CorroReceived(
     /* [out] */ String* CAdministration.correspondenceLog.corroReceived);


   CARAPI SetCorrespondenceLog_PropertyIds(
     /* [in] */ ArrayOf<const String&> CAdministration.correspondenceLog.propertyIds);

    CARAPI GetCorrespondenceLog_PropertyIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.correspondenceLog.propertyIds);


   CARAPI SetCorrespondenceLog_ResponseDocRefs(
     /* [in] */ ArrayOf<const String&> CAdministration.correspondenceLog.responseDocRefs);

    CARAPI GetCorrespondenceLog_ResponseDocRefs(
     /* [out, callee] */ ArrayOf<String>* CAdministration.correspondenceLog.responseDocRefs);


   CARAPI SetCorrespondenceLog_RepliedWhen(
     /* [in] */ const String& CAdministration.correspondenceLog.repliedWhen);

    CARAPI GetCorrespondenceLog_RepliedWhen(
     /* [out] */ String* CAdministration.correspondenceLog.repliedWhen);


   CARAPI SetCorrespondenceLog_ResponsibilitiesParticpantsIds(
     /* [in] */ ArrayOf<const String&> CAdministration.correspondenceLog.responsibilitiesParticpantsIds);

    CARAPI GetCorrespondenceLog_ResponsibilitiesParticpantsIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.correspondenceLog.responsibilitiesParticpantsIds);


   CARAPI SetCorrespondenceLog_ResponsibilitiesParticpantsNames(
     /* [in] */ ArrayOf<const String&> CAdministration.correspondenceLog.responsibilitiesParticpantsNames);

    CARAPI GetCorrespondenceLog_ResponsibilitiesParticpantsNames(
     /* [out, callee] */ ArrayOf<String>* CAdministration.correspondenceLog.responsibilitiesParticpantsNames);


   CARAPI SetCorrespondenceLog_RequiredActions(
     /* [in] */ ArrayOf<const String&> CAdministration.correspondenceLog.requiredActions);

    CARAPI GetCorrespondenceLog_RequiredActions(
     /* [out, callee] */ ArrayOf<String>* CAdministration.correspondenceLog.requiredActions);


   CARAPI SetCorrespondenceLog_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.correspondenceLog.businessChannelOwnerId);

    CARAPI GetCorrespondenceLog_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.correspondenceLog.businessChannelOwnerId);


   CARAPI SetCorrespondenceLog_BranchId(
     /* [in] */ CAdministration.branch CAdministration.correspondenceLog.branchId);

    CARAPI GetCorrespondenceLog_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.correspondenceLog.branchId);


   CARAPI SetCorrespondenceLog_DeptId(
     /* [in] */ CAdministration.department CAdministration.correspondenceLog.deptId);

    CARAPI GetCorrespondenceLog_DeptId(
     /* [out] */ CAdministration.department* CAdministration.correspondenceLog.deptId);


   CARAPI SetCorrespondenceLog_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.correspondenceLog.supplierIds);

    CARAPI GetCorrespondenceLog_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.correspondenceLog.supplierIds);


   CARAPI SetCorrespondenceLog_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.correspondenceLog.customerIds);

    CARAPI GetCorrespondenceLog_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.correspondenceLog.customerIds);


   CARAPI SetCorrespondenceLog_PartnerIds(
     /* [in] */ ArrayOf<CStakeholder.partner> CAdministration.correspondenceLog.partnerIds);

    CARAPI GetCorrespondenceLog_PartnerIds(
     /* [out, callee] */ ArrayOf<CStakeholder.partner>* CAdministration.correspondenceLog.partnerIds);


   CARAPI SetCorrespondenceLog_MediaIds(
     /* [in] */ ArrayOf<CStakeholder.media> CAdministration.correspondenceLog.mediaIds);

    CARAPI GetCorrespondenceLog_MediaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.media>* CAdministration.correspondenceLog.mediaIds);


   CARAPI SetCorrespondenceLog_CommunityIds(
     /* [in] */ ArrayOf<CStakeholder.community> CAdministration.correspondenceLog.communityIds);

    CARAPI GetCorrespondenceLog_CommunityIds(
     /* [out, callee] */ ArrayOf<CStakeholder.community>* CAdministration.correspondenceLog.communityIds);


   CARAPI SetCorrespondenceLog_BankIds(
     /* [in] */ ArrayOf<CFinance.bank> CAdministration.correspondenceLog.bankIds);

    CARAPI GetCorrespondenceLog_BankIds(
     /* [out, callee] */ ArrayOf<CFinance.bank>* CAdministration.correspondenceLog.bankIds);


   CARAPI SetCorrespondenceLog_PropertyOwnerIds(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CAdministration.correspondenceLog.propertyOwnerIds);

    CARAPI GetCorrespondenceLog_PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CAdministration.correspondenceLog.propertyOwnerIds);


   CARAPI SetCorrespondenceLog_ApplicantIds(
     /* [in] */ ArrayOf<CCustomer.applicant> CAdministration.correspondenceLog.applicantIds);

    CARAPI GetCorrespondenceLog_ApplicantIds(
     /* [out, callee] */ ArrayOf<CCustomer.applicant>* CAdministration.correspondenceLog.applicantIds);


   CARAPI SetCorrespondenceLog_TenancyIds(
     /* [in] */ ArrayOf<CProperty.tenant> CAdministration.correspondenceLog.tenancyIds);

    CARAPI GetCorrespondenceLog_TenancyIds(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CAdministration.correspondenceLog.tenancyIds);


   CARAPI SetCorrespondenceLog_EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.correspondenceLog.employeeIds);

    CARAPI GetCorrespondenceLog_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.correspondenceLog.employeeIds);


   CARAPI SetCorrespondenceLog_SuperFundIds(
     /* [in] */ ArrayOf<CSupplier.superannuationFund> CAdministration.correspondenceLog.superFundIds);

    CARAPI GetCorrespondenceLog_SuperFundIds(
     /* [out, callee] */ ArrayOf<CSupplier.superannuationFund>* CAdministration.correspondenceLog.superFundIds);


   CARAPI SetCorrespondenceLog_SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.correspondenceLog.solicitorIds);

    CARAPI GetCorrespondenceLog_SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.correspondenceLog.solicitorIds);


   CARAPI SetCorrespondenceLog_AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.correspondenceLog.agentIds);

    CARAPI GetCorrespondenceLog_AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.correspondenceLog.agentIds);


   CARAPI SetCorrespondenceLog_NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder> CAdministration.correspondenceLog.nonGovStakeholderIds);

    CARAPI GetCorrespondenceLog_NonGovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.correspondenceLog.nonGovStakeholderIds);


   CARAPI SetCorrespondenceLog_GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.correspondenceLog.govStakeholderIds);

    CARAPI GetCorrespondenceLog_GovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.correspondenceLog.govStakeholderIds);


   CARAPI SetCorrespondenceLog_CentrelinkId(
     /* [in] */ CFinance.centrelink CAdministration.correspondenceLog.centrelinkId);

    CARAPI GetCorrespondenceLog_CentrelinkId(
     /* [out] */ CFinance.centrelink* CAdministration.correspondenceLog.centrelinkId);


   CARAPI SetCorrespondenceLog_StateLAHAuthorityId(
     /* [in] */ CStakeholder.stateLAHAuthority CAdministration.correspondenceLog.stateLAHAuthorityId);

    CARAPI GetCorrespondenceLog_StateLAHAuthorityId(
     /* [out] */ CStakeholder.stateLAHAuthority* CAdministration.correspondenceLog.stateLAHAuthorityId);


   CARAPI SetCorrespondenceLog_StatePublicHousingAuthorityId(
     /* [in] */ CStakeholder.statePublicHousingAuthority CAdministration.correspondenceLog.statePublicHousingAuthorityId);

    CARAPI GetCorrespondenceLog_StatePublicHousingAuthorityId(
     /* [out] */ CStakeholder.statePublicHousingAuthority* CAdministration.correspondenceLog.statePublicHousingAuthorityId);


   CARAPI SetCorrespondenceLog_CommunityHousingRegulatorId(
     /* [in] */ CRegulator.communityHousingRegulator CAdministration.correspondenceLog.communityHousingRegulatorId);

    CARAPI GetCorrespondenceLog_CommunityHousingRegulatorId(
     /* [out] */ CRegulator.communityHousingRegulator* CAdministration.correspondenceLog.communityHousingRegulatorId);


   CARAPI SetCorrespondenceLog_ATOId(
     /* [in] */ CRegulator.aTO CAdministration.correspondenceLog.aTOId);

    CARAPI GetCorrespondenceLog_ATOId(
     /* [out] */ CRegulator.aTO* CAdministration.correspondenceLog.aTOId);


   CARAPI SetCorrespondenceLog_NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.correspondenceLog.natRegId);

    CARAPI GetCorrespondenceLog_NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.correspondenceLog.natRegId);


   CARAPI SetCorrespondenceLog_TribunalId(
     /* [in] */ CRegulator.nCAT CAdministration.correspondenceLog.tribunalId);

    CARAPI GetCorrespondenceLog_TribunalId(
     /* [out] */ CRegulator.nCAT* CAdministration.correspondenceLog.tribunalId);


   CARAPI SetCorrespondenceLog_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.correspondenceLog.docRefs);

    CARAPI GetCorrespondenceLog_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.correspondenceLog.docRefs);


   CARAPI SetCorrespondenceLog_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.correspondenceLog.imageRefs);

    CARAPI GetCorrespondenceLog_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.correspondenceLog.imageRefs);


   CARAPI SetCorrespondenceLog_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.correspondenceLog.audioRefIds);

    CARAPI GetCorrespondenceLog_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.correspondenceLog.audioRefIds);


   CARAPI SetCorrespondenceLog_VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.correspondenceLog.videoRefs);

    CARAPI GetCorrespondenceLog_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.correspondenceLog.videoRefs);


   CARAPI SetAdvertisingTemplatesPlans_AdvertDesignId(
     /* [in] */ const String& CAdministration.advertisingTemplatesPlans.advertDesignId);

    CARAPI GetAdvertisingTemplatesPlans_AdvertDesignId(
     /* [out] */ String* CAdministration.advertisingTemplatesPlans.advertDesignId);


   CARAPI SetAdvertisingTemplatesPlans_AdvertDesignName(
     /* [in] */ const String& CAdministration.advertisingTemplatesPlans.advertDesignName);

    CARAPI GetAdvertisingTemplatesPlans_AdvertDesignName(
     /* [out] */ String* CAdministration.advertisingTemplatesPlans.advertDesignName);


   CARAPI SetAdvertisingTemplatesPlans_AdvertisingMedium(
     /* [in] */ CHelper.advertisingMedium CAdministration.advertisingTemplatesPlans.AdvertisingMedium);

    CARAPI GetAdvertisingTemplatesPlans_AdvertisingMedium(
     /* [out] */ CHelper.advertisingMedium* CAdministration.advertisingTemplatesPlans.AdvertisingMedium);


   CARAPI SetAdvertisingTemplatesPlans_AccountsReceivableIds(
     /* [in] */ ArrayOf<const String&> CAdministration.advertisingTemplatesPlans.accountsReceivableIds);

    CARAPI GetAdvertisingTemplatesPlans_AccountsReceivableIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.advertisingTemplatesPlans.accountsReceivableIds);


   CARAPI SetAdvertisingTemplatesPlans_AccountsPayableIds(
     /* [in] */ ArrayOf<const String&> CAdministration.advertisingTemplatesPlans.accountsPayableIds);

    CARAPI GetAdvertisingTemplatesPlans_AccountsPayableIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.advertisingTemplatesPlans.accountsPayableIds);


   CARAPI SetAdvertisingTemplatesPlans_Budget(
     /* [in] */ Double CAdministration.advertisingTemplatesPlans.budgetedAmount);

    CARAPI GetAdvertisingTemplatesPlans_Budget(
     /* [out] */ Double* CAdministration.advertisingTemplatesPlans.budgetedAmount);


   CARAPI SetAdvertisingTemplatesPlans_DocRefsAdvertisingTemplatesPlans(
     /* [in] */ ArrayOf<const String&> CAdministration.advertisingTemplatesPlans.docRefsAdvertisingTemplatesPlans);

    CARAPI GetAdvertisingTemplatesPlans_DocRefsAdvertisingTemplatesPlans(
     /* [out, callee] */ ArrayOf<String>* CAdministration.advertisingTemplatesPlans.docRefsAdvertisingTemplatesPlans);


   CARAPI SetAdvertisingTemplatesPlans_RunDateTimes(
     /* [in] */ ArrayOf<const String&> CAdministration.advertisingTemplatesPlans.runDateTimes);

    CARAPI GetAdvertisingTemplatesPlans_RunDateTimes(
     /* [out, callee] */ ArrayOf<String>* CAdministration.advertisingTemplatesPlans.runDateTimes);


   CARAPI SetAdvertisingTemplatesPlans_PropertyId(
     /* [in] */ CProperty.property CAdministration.advertisingTemplatesPlans.propertyId);

    CARAPI GetAdvertisingTemplatesPlans_PropertyId(
     /* [out] */ CProperty.property* CAdministration.advertisingTemplatesPlans.propertyId);


   CARAPI SetAdvertisingTemplatesPlans_PropertyOwners(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CAdministration.advertisingTemplatesPlans.propertyOwners);

    CARAPI GetAdvertisingTemplatesPlans_PropertyOwners(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CAdministration.advertisingTemplatesPlans.propertyOwners);


   CARAPI SetAdvertisingTemplatesPlans_AdvertScheduleId(
     /* [in] */ CProperty.advertisingBudget( GetSchedule CAdministration.advertisingTemplatesPlans.advertScheduleId);

    CARAPI GetAdvertisingTemplatesPlans_AdvertScheduleId(
     /* [out] */ CProperty.advertisingBudget( GetSchedule* CAdministration.advertisingTemplatesPlans.advertScheduleId);


   CARAPI SetAdvertisingTemplatesPlans_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.advertisingTemplatesPlans.businessChannelOwnerId);

    CARAPI GetAdvertisingTemplatesPlans_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.advertisingTemplatesPlans.businessChannelOwnerId);


   CARAPI SetAdvertisingTemplatesPlans_BranchId(
     /* [in] */ CAdministration.branch CAdministration.advertisingTemplatesPlans.branchId);

    CARAPI GetAdvertisingTemplatesPlans_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.advertisingTemplatesPlans.branchId);


   CARAPI SetAdvertisingTemplatesPlans_DeptId(
     /* [in] */ CAdministration.department CAdministration.advertisingTemplatesPlans.deptId);

    CARAPI GetAdvertisingTemplatesPlans_DeptId(
     /* [out] */ CAdministration.department* CAdministration.advertisingTemplatesPlans.deptId);


   CARAPI SetBranch_BranchId(
     /* [in] */ const String& CAdministration.branch.branchId);

    CARAPI GetBranch_BranchId(
     /* [out] */ String* CAdministration.branch.branchId);


   CARAPI SetBranch_BranchName(
     /* [in] */ const String& CAdministration.branch.branchName);

    CARAPI GetBranch_BranchName(
     /* [out] */ String* CAdministration.branch.branchName);


   CARAPI SetBranch_BranchAddressLine1(
     /* [in] */ const String& CAdministration.branch.branchAddressLine1);

    CARAPI GetBranch_BranchAddressLine1(
     /* [out] */ String* CAdministration.branch.branchAddressLine1);


   CARAPI SetBranch_BranchAddressLine2(
     /* [in] */ const String& CAdministration.branch.branchAddressLine2);

    CARAPI GetBranch_BranchAddressLine2(
     /* [out] */ String* CAdministration.branch.branchAddressLine2);


   CARAPI SetBranch_BranchSuburb(
     /* [in] */ const String& CAdministration.branch.branchSuburb);

    CARAPI GetBranch_BranchSuburb(
     /* [out] */ String* CAdministration.branch.branchSuburb);


   CARAPI SetBranch_BranchPostcode(
     /* [in] */ const String& CAdministration.branch.branchPostcode);

    CARAPI GetBranch_BranchPostcode(
     /* [out] */ String* CAdministration.branch.branchPostcode);


   CARAPI SetBranch_BranchPhone(
     /* [in] */ const String& CAdministration.branch.branchPhone);

    CARAPI GetBranch_BranchPhone(
     /* [out] */ String* CAdministration.branch.branchPhone);


   CARAPI SetBranch_RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.branch.roleIds);

    CARAPI GetBranch_RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.branch.roleIds);


   CARAPI SetBranch_DeptIds(
     /* [in] */ ArrayOf<CAdministration.department> CAdministration.branch.deptIds);

    CARAPI GetBranch_DeptIds(
     /* [out, callee] */ ArrayOf<CAdministration.department>* CAdministration.branch.deptIds);


   CARAPI SetBranch_SubDeptIds(
     /* [in] */ ArrayOf<CAdministration.subdepartment> CAdministration.branch.subDeptIds);

    CARAPI GetBranch_SubDeptIds(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartment>* CAdministration.branch.subDeptIds);


   CARAPI SetBranch_SubDeptLevel2Ids(
     /* [in] */ ArrayOf<CAdministration.subdepartmentLevel2> CAdministration.branch.subDeptLevel2Ids);

    CARAPI GetBranch_SubDeptLevel2Ids(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartmentLevel2>* CAdministration.branch.subDeptLevel2Ids);


   CARAPI SetBranch_SubDeptLevel3Ids(
     /* [in] */ ArrayOf<CAdministration.subdepartmentLevel3> CAdministration.branch.subDeptLevel3Ids);

    CARAPI GetBranch_SubDeptLevel3Ids(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartmentLevel3>* CAdministration.branch.subDeptLevel3Ids);


   CARAPI SetBranch_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.branch.businessChannelOwnerId);

    CARAPI GetBranch_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.branch.businessChannelOwnerId);


   CARAPI SetBranch_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.branch.docRefs);

    CARAPI GetBranch_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.branch.docRefs);


   CARAPI SetBranch_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.branch.imageRefs);

    CARAPI GetBranch_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.branch.imageRefs);


   CARAPI SetBranch_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.branch.audioRefIds);

    CARAPI GetBranch_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.branch.audioRefIds);


   CARAPI SetBranch_VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.branch.videoRefs);

    CARAPI GetBranch_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.branch.videoRefs);





   CARAPI SetDepartmentMap_DeptMapId(
     /* [in] */ const String& CAdministration.departmentMap.deptMapId);

    CARAPI GetDepartmentMap_DeptMapId(
     /* [out] */ String* CAdministration.departmentMap.deptMapId);


   CARAPI SetDepartmentMap_Description(
     /* [in] */ const String& CAdministration.departmentMap.description);

    CARAPI GetDepartmentMap_Description(
     /* [out] */ String* CAdministration.departmentMap.description);


   CARAPI SetDepartmentMap_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.departmentMap.businessChannelOwnerId);

    CARAPI GetDepartmentMap_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.departmentMap.businessChannelOwnerId);


   CARAPI SetDepartmentMap_DepartmentId(
     /* [in] */ CAdministration.department CAdministration.departmentMap.departmentId);

    CARAPI GetDepartmentMap_DepartmentId(
     /* [out] */ CAdministration.department* CAdministration.departmentMap.departmentId);


   CARAPI SetDepartmentMap_SubDeptId(
     /* [in] */ CAdministration.subdepartment CAdministration.departmentMap.subDeptId);

    CARAPI GetDepartmentMap_SubDeptId(
     /* [out] */ CAdministration.subdepartment* CAdministration.departmentMap.subDeptId);


   CARAPI SetDepartmentMap_SubDeptLevel2Id(
     /* [in] */ CAdministration.subdepartmentLevel2 CAdministration.departmentMap.subDeptLevel2Id);

    CARAPI GetDepartmentMap_SubDeptLevel2Id(
     /* [out] */ CAdministration.subdepartmentLevel2* CAdministration.departmentMap.subDeptLevel2Id);


   CARAPI SetDepartmentMap_SubDeptLevel3Id(
     /* [in] */ CAdministration.subdepartmentLevel3 CAdministration.departmentMap.subDeptLevel3Id);

    CARAPI GetDepartmentMap_SubDeptLevel3Id(
     /* [out] */ CAdministration.subdepartmentLevel3* CAdministration.departmentMap.subDeptLevel3Id);


   CARAPI SetDepartmentMap_HeadsDeptsSubDeptsEmployeeIdsDescending(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.departmentMap.headsDeptsSubDeptsEmployeeIdsDescending);

    CARAPI GetDepartmentMap_HeadsDeptsSubDeptsEmployeeIdsDescending(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.departmentMap.headsDeptsSubDeptsEmployeeIdsDescending);


   CARAPI SetDepartmentMap_RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.departmentMap.roleIds);

    CARAPI GetDepartmentMap_RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.departmentMap.roleIds);


   CARAPI SetDepartmentMap_BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.departmentMap.branchIds);

    CARAPI GetDepartmentMap_BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.departmentMap.branchIds);


   CARAPI SetDepartmentMap_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.departmentMap.docRefs);

    CARAPI GetDepartmentMap_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.departmentMap.docRefs);


   CARAPI SetDepartmentMap_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.departmentMap.imageRefs);

    CARAPI GetDepartmentMap_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.departmentMap.imageRefs);


   CARAPI SetDepartmentMap_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.departmentMap.audioRefIds);

    CARAPI GetDepartmentMap_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.departmentMap.audioRefIds);


   CARAPI SetDepartmentMap_VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.departmentMap.videoRefs);

    CARAPI GetDepartmentMap_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.departmentMap.videoRefs);


   CARAPI SetDepartment_DeptId(
     /* [in] */ const String& CAdministration.department.deptId);

    CARAPI GetDepartment_DeptId(
     /* [out] */ String* CAdministration.department.deptId);


   CARAPI SetDepartment_DeptName(
     /* [in] */ const String& CAdministration.department.deptName);

    CARAPI GetDepartment_DeptName(
     /* [out] */ String* CAdministration.department.deptName);


   CARAPI SetDepartment_DeptAddressLine1(
     /* [in] */ ArrayOf<const String&> CAdministration.department.deptAddressLine1);

    CARAPI GetDepartment_DeptAddressLine1(
     /* [out, callee] */ ArrayOf<String>* CAdministration.department.deptAddressLine1);


   CARAPI SetDepartment_DeptAddressLine2(
     /* [in] */ ArrayOf<const String&> CAdministration.department.deptAddressLine2);

    CARAPI GetDepartment_DeptAddressLine2(
     /* [out, callee] */ ArrayOf<String>* CAdministration.department.deptAddressLine2);


   CARAPI SetDepartment_BranchSuburb(
     /* [in] */ ArrayOf<const String&> CAdministration.department.branchSuburb);

    CARAPI GetDepartment_BranchSuburb(
     /* [out, callee] */ ArrayOf<String>* CAdministration.department.branchSuburb);


   CARAPI SetDepartment_BranchPostcode(
     /* [in] */ ArrayOf<const String&> CAdministration.department.branchPostcode);

    CARAPI GetDepartment_BranchPostcode(
     /* [out, callee] */ ArrayOf<String>* CAdministration.department.branchPostcode);


   CARAPI SetDepartment_BranchPhone(
     /* [in] */ ArrayOf<const String&> CAdministration.department.branchPhone);

    CARAPI GetDepartment_BranchPhone(
     /* [out, callee] */ ArrayOf<String>* CAdministration.department.branchPhone);


   CARAPI SetDepartment_HeadDeptEmployeeId(
     /* [in] */ CAdministration.staff CAdministration.department.headDeptEmployeeId);

    CARAPI GetDepartment_HeadDeptEmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.department.headDeptEmployeeId);


   CARAPI SetDepartment_RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.department.roleIds);

    CARAPI GetDepartment_RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.department.roleIds);


   CARAPI SetDepartment_BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.department.branchIds);

    CARAPI GetDepartment_BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.department.branchIds);


   CARAPI SetDepartment_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.department.businessChannelOwnerId);

    CARAPI GetDepartment_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.department.businessChannelOwnerId);


   CARAPI SetDepartment_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.department.docRefs);

    CARAPI GetDepartment_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.department.docRefs);


   CARAPI SetDepartment_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.department.imageRefs);

    CARAPI GetDepartment_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.department.imageRefs);


   CARAPI SetDepartment_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.department.audioRefIds);

    CARAPI GetDepartment_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.department.audioRefIds);


   CARAPI SetDepartment_VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.department.videoRefs);

    CARAPI GetDepartment_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.department.videoRefs);


   CARAPI SetSubDepartment_SubDeptId(
     /* [in] */ const String& CAdministration.subdepartment.subDeptId);

    CARAPI GetSubDepartment_SubDeptId(
     /* [out] */ String* CAdministration.subdepartment.subDeptId);


   CARAPI SetSubDepartment_SubDeptName(
     /* [in] */ const String& CAdministration.subdepartment.subDeptName);

    CARAPI GetSubDepartment_SubDeptName(
     /* [out] */ String* CAdministration.subdepartment.subDeptName);


   CARAPI SetSubDepartment_SubDeptAddressLine1(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartment.subDeptAddressLine1);

    CARAPI GetSubDepartment_SubDeptAddressLine1(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartment.subDeptAddressLine1);


   CARAPI SetSubDepartment_SubDeptAddressLine2(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartment.subDeptAddressLine2);

    CARAPI GetSubDepartment_SubDeptAddressLine2(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartment.subDeptAddressLine2);


   CARAPI SetSubDepartment_BranchSuburb(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartment.branchSuburb);

    CARAPI GetSubDepartment_BranchSuburb(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartment.branchSuburb);


   CARAPI SetSubDepartment_BranchPostcode(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartment.branchPostcode);

    CARAPI GetSubDepartment_BranchPostcode(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartment.branchPostcode);


   CARAPI SetSubDepartment_BranchPhone(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartment.branchPhone);

    CARAPI GetSubDepartment_BranchPhone(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartment.branchPhone);


   CARAPI SetSubDepartment_HeadSubDeptEmployeeId(
     /* [in] */ CAdministration.staff CAdministration.subdepartment.headSubDeptEmployeeId);

    CARAPI GetSubDepartment_HeadSubDeptEmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.subdepartment.headSubDeptEmployeeId);


   CARAPI SetSubDepartment_RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.subdepartment.roleIds);

    CARAPI GetSubDepartment_RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.subdepartment.roleIds);


   CARAPI SetSubDepartment_BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.subdepartment.branchIds);

    CARAPI GetSubDepartment_BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.subdepartment.branchIds);


   CARAPI SetSubDepartment_SupDeptId(
     /* [in] */ CAdministration.department CAdministration.subdepartment.supDeptId);

    CARAPI GetSubDepartment_SupDeptId(
     /* [out] */ CAdministration.department* CAdministration.subdepartment.supDeptId);


   CARAPI SetSubDepartment_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.subdepartment.businessChannelOwnerId);

    CARAPI GetSubDepartment_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.subdepartment.businessChannelOwnerId);


   CARAPI SetSubDepartment_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.subdepartment.docRefs);

    CARAPI GetSubDepartment_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.subdepartment.docRefs);


   CARAPI SetSubDepartment_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.subdepartment.imageRefs);

    CARAPI GetSubDepartment_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.subdepartment.imageRefs);


   CARAPI SetSubDepartment_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.subdepartment.audioRefIds);

    CARAPI GetSubDepartment_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.subdepartment.audioRefIds);


   CARAPI SetSubDepartment_VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.subdepartment.videoRefs);

    CARAPI GetSubDepartment_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.subdepartment.videoRefs);


   CARAPI SetSubDepartmentLevel2_SubDeptLevel2Id(
     /* [in] */ const String& CAdministration.subdepartmentLevel2.subDeptLevel2Id);

    CARAPI GetSubDepartmentLevel2_SubDeptLevel2Id(
     /* [out] */ String* CAdministration.subdepartmentLevel2.subDeptLevel2Id);


   CARAPI SetSubDepartmentLevel2_SubDeptLevel2Name(
     /* [in] */ const String& CAdministration.subdepartmentLevel2.subDeptLevel2Name);

    CARAPI GetSubDepartmentLevel2_SubDeptLevel2Name(
     /* [out] */ String* CAdministration.subdepartmentLevel2.subDeptLevel2Name);


   CARAPI SetSubDepartmentLevel2_SubDeptLevel2AddressLine1(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel2.subDeptLevel2AddressLine1);

    CARAPI GetSubDepartmentLevel2_SubDeptLevel2AddressLine1(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel2.subDeptLevel2AddressLine1);


   CARAPI SetSubDepartmentLevel2_SubDeptLevel2AddressLine2(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel2.subDeptLevel2AddressLine2);

    CARAPI GetSubDepartmentLevel2_SubDeptLevel2AddressLine2(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel2.subDeptLevel2AddressLine2);


   CARAPI SetSubDepartmentLevel2_BranchSuburb(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel2.branchSuburb);

    CARAPI GetSubDepartmentLevel2_BranchSuburb(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel2.branchSuburb);


   CARAPI SetSubDepartmentLevel2_BranchPostcode(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel2.branchPostcode);

    CARAPI GetSubDepartmentLevel2_BranchPostcode(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel2.branchPostcode);


   CARAPI SetSubDepartmentLevel2_BranchPhone(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel2.branchPhone);

    CARAPI GetSubDepartmentLevel2_BranchPhone(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel2.branchPhone);


   CARAPI SetSubDepartmentLevel2_HeadLevel2SubDeptEmployeeId(
     /* [in] */ CAdministration.staff CAdministration.subdepartmentLevel2.headLevel2SubDeptEmployeeId);

    CARAPI GetSubDepartmentLevel2_HeadLevel2SubDeptEmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.subdepartmentLevel2.headLevel2SubDeptEmployeeId);


   CARAPI SetSubDepartmentLevel2_RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.subdepartmentLevel2.roleIds);

    CARAPI GetSubDepartmentLevel2_RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.subdepartmentLevel2.roleIds);


   CARAPI SetSubDepartmentLevel2_BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.subdepartmentLevel2.branchIds);

    CARAPI GetSubDepartmentLevel2_BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.subdepartmentLevel2.branchIds);


   CARAPI SetSubDepartmentLevel2_SupSubDeptId(
     /* [in] */ CAdministration.subdepartment CAdministration.subdepartmentLevel2.supSubDeptId);

    CARAPI GetSubDepartmentLevel2_SupSubDeptId(
     /* [out] */ CAdministration.subdepartment* CAdministration.subdepartmentLevel2.supSubDeptId);


   CARAPI SetSubDepartmentLevel2_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.subdepartmentLevel2.businessChannelOwnerId);

    CARAPI GetSubDepartmentLevel2_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.subdepartmentLevel2.businessChannelOwnerId);


   CARAPI SetSubDepartmentLevel2_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.subdepartmentLevel2.docRefs);

    CARAPI GetSubDepartmentLevel2_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.subdepartmentLevel2.docRefs);


   CARAPI SetSubDepartmentLevel2_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.subdepartmentLevel2.imageRefs);

    CARAPI GetSubDepartmentLevel2_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.subdepartmentLevel2.imageRefs);


   CARAPI SetSubDepartmentLevel2_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.subdepartmentLevel2.audioRefIds);

    CARAPI GetSubDepartmentLevel2_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.subdepartmentLevel2.audioRefIds);


   CARAPI SetSubDepartmentLevel2_VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.subdepartmentLevel2.videoRefs);

    CARAPI GetSubDepartmentLevel2_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.subdepartmentLevel2.videoRefs);


   CARAPI SetSubDepartmentLevel3_SubDeptLevel3Id(
     /* [in] */ const String& CAdministration.subdepartmentLevel3.subDeptLevel3Id);

    CARAPI GetSubDepartmentLevel3_SubDeptLevel3Id(
     /* [out] */ String* CAdministration.subdepartmentLevel3.subDeptLevel3Id);


   CARAPI SetSubDepartmentLevel3_SubDeptLevel3Name(
     /* [in] */ const String& CAdministration.subdepartmentLevel3.subDeptLevel3Name);

    CARAPI GetSubDepartmentLevel3_SubDeptLevel3Name(
     /* [out] */ String* CAdministration.subdepartmentLevel3.subDeptLevel3Name);


   CARAPI SetSubDepartmentLevel3_SubDeptLevel3AddressLine1(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel3.subDeptLevel3AddressLine1);

    CARAPI GetSubDepartmentLevel3_SubDeptLevel3AddressLine1(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel3.subDeptLevel3AddressLine1);


   CARAPI SetSubDepartmentLevel3_SubDeptLevel3AddressLine2(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel3.subDeptLevel3AddressLine2);

    CARAPI GetSubDepartmentLevel3_SubDeptLevel3AddressLine2(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel3.subDeptLevel3AddressLine2);


   CARAPI SetSubDepartmentLevel3_BranchSuburb(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel3.branchSuburb);

    CARAPI GetSubDepartmentLevel3_BranchSuburb(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel3.branchSuburb);


   CARAPI SetSubDepartmentLevel3_BranchPostcode(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel3.branchPostcode);

    CARAPI GetSubDepartmentLevel3_BranchPostcode(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel3.branchPostcode);


   CARAPI SetSubDepartmentLevel3_BranchPhone(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel3.branchPhone);

    CARAPI GetSubDepartmentLevel3_BranchPhone(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel3.branchPhone);


   CARAPI SetSubDepartmentLevel3_HeadLevel2SubDeptEmployeeId(
     /* [in] */ CAdministration.staff CAdministration.subdepartmentLevel3.headLevel2SubDeptEmployeeId);

    CARAPI GetSubDepartmentLevel3_HeadLevel2SubDeptEmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.subdepartmentLevel3.headLevel2SubDeptEmployeeId);


   CARAPI SetSubDepartmentLevel3_RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.subdepartmentLevel3.roleIds);

    CARAPI GetSubDepartmentLevel3_RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.subdepartmentLevel3.roleIds);


   CARAPI SetSubDepartmentLevel3_BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.subdepartmentLevel3.branchIds);

    CARAPI GetSubDepartmentLevel3_BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.subdepartmentLevel3.branchIds);


   CARAPI SetSubDepartmentLevel3_SupSubDeptLevel2Id(
     /* [in] */ CAdministration.subdepartmentLevel2 CAdministration.subdepartmentLevel3.supSubDeptLevel2Id);

    CARAPI GetSubDepartmentLevel3_SupSubDeptLevel2Id(
     /* [out] */ CAdministration.subdepartmentLevel2* CAdministration.subdepartmentLevel3.supSubDeptLevel2Id);


   CARAPI SetSubDepartmentLevel3_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.subdepartmentLevel3.businessChannelOwnerId);

    CARAPI GetSubDepartmentLevel3_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.subdepartmentLevel3.businessChannelOwnerId);


   CARAPI SetSubDepartmentLevel3_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.subdepartmentLevel3.docRefs);

    CARAPI GetSubDepartmentLevel3_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.subdepartmentLevel3.docRefs);


   CARAPI SetSubDepartmentLevel3_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.subdepartmentLevel3.imageRefs);

    CARAPI GetSubDepartmentLevel3_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.subdepartmentLevel3.imageRefs);


   CARAPI SetSubDepartmentLevel3_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.subdepartmentLevel3.audioRefIds);

    CARAPI GetSubDepartmentLevel3_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.subdepartmentLevel3.audioRefIds);


   CARAPI SetSubDepartmentLevel3_VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.subdepartmentLevel3.videoRefs);

    CARAPI GetSubDepartmentLevel3_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.subdepartmentLevel3.videoRefs);


   CARAPI SetDocuments_DocRefId(
     /* [in] */ const String& CAdministration.documents.docRefId);

    CARAPI GetDocuments_DocRefId(
     /* [out] */ String* CAdministration.documents.docRefId);


   CARAPI SetDocuments_DocHash(
     /* [in] */ const String& CAdministration.documents.docHash);

    CARAPI GetDocuments_DocHash(
     /* [out] */ String* CAdministration.documents.docHash);


   CARAPI SetDocuments_MasLedgeFinTxId(
     /* [in] */ const String& CAdministration.documents.masLedgeFinTxId);

    CARAPI GetDocuments_MasLedgeFinTxId(
     /* [out] */ String* CAdministration.documents.masLedgeFinTxId);


   CARAPI SetDocuments_GenLedgeFinTxId(
     /* [in] */ const String& CAdministration.documents.genLedgeFinTxId);

    CARAPI GetDocuments_GenLedgeFinTxId(
     /* [out] */ String* CAdministration.documents.genLedgeFinTxId);


   CARAPI SetDocuments_MasLedgeFinTxNum(
     /* [in] */ Int32 CAdministration.documents.masLedgeFinTxNum);

    CARAPI GetDocuments_MasLedgeFinTxNum(
     /* [out] */ Int32* CAdministration.documents.masLedgeFinTxNum);


   CARAPI SetDocuments_GenLedgeFinTxNum(
     /* [in] */ Int32 CAdministration.documents.genLedgeFinTxNum);

    CARAPI GetDocuments_GenLedgeFinTxNum(
     /* [out] */ Int32* CAdministration.documents.genLedgeFinTxNum);


   CARAPI SetDocuments_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.documents.businessChannelOwnerId);

    CARAPI GetDocuments_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.documents.businessChannelOwnerId);


   CARAPI SetDocuments_BranchId(
     /* [in] */ CAdministration.branch CAdministration.documents.branchId);

    CARAPI GetDocuments_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.documents.branchId);


   CARAPI SetDocuments_DeptId(
     /* [in] */ CAdministration.department CAdministration.documents.deptId);

    CARAPI GetDocuments_DeptId(
     /* [out] */ CAdministration.department* CAdministration.documents.deptId);


   CARAPI SetDocuments_PropertyId(
     /* [in] */ CProperty.property CAdministration.documents.propertyId);

    CARAPI GetDocuments_PropertyId(
     /* [out] */ CProperty.property* CAdministration.documents.propertyId);


   CARAPI SetDocuments_PropOwners(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CAdministration.documents.propOwners);

    CARAPI GetDocuments_PropOwners(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CAdministration.documents.propOwners);


   CARAPI SetDocuments_MasterLedgerAsset(
     /* [in] */ ArrayOf<CFinance.masterAssetRegister> CAdministration.documents.masterLedgerAssetIds);

    CARAPI GetDocuments_MasterLedgerAsset(
     /* [out, callee] */ ArrayOf<CFinance.masterAssetRegister>* CAdministration.documents.masterLedgerAssetIds);


   CARAPI SetDocuments_EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.documents.employeeIds);

    CARAPI GetDocuments_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.documents.employeeIds);


   CARAPI SetDocuments_TenancyIds(
     /* [in] */ ArrayOf<CProperty.tenant> CAdministration.documents.tenancyIds);

    CARAPI GetDocuments_TenancyIds(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CAdministration.documents.tenancyIds);


   CARAPI SetDocuments_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.documents.customerIds);

    CARAPI GetDocuments_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.documents.customerIds);


   CARAPI SetDocuments_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.documents.supplierIds);

    CARAPI GetDocuments_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.documents.supplierIds);


   CARAPI SetDocuments_SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.documents.solicitorIds);

    CARAPI GetDocuments_SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.documents.solicitorIds);


   CARAPI SetDocuments_AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.documents.agentIds);

    CARAPI GetDocuments_AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.documents.agentIds);


   CARAPI SetDocuments_NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder> CAdministration.documents.nonGovStakeholderIds);

    CARAPI GetDocuments_NonGovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.documents.nonGovStakeholderIds);


   CARAPI SetDocuments_GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.documents.govStakeholderIds);

    CARAPI GetDocuments_GovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.documents.govStakeholderIds);


   CARAPI SetDocuments_StateLAHCId(
     /* [in] */ CStakeholder.stateLAHAuthority CAdministration.documents.stateLAHCId);

    CARAPI GetDocuments_StateLAHCId(
     /* [out] */ CStakeholder.stateLAHAuthority* CAdministration.documents.stateLAHCId);


   CARAPI SetDocuments_StatePublicHousingAuthorityId(
     /* [in] */ CStakeholder.statePublicHousingAuthority CAdministration.documents.statePublicHousingAuthorityId);

    CARAPI GetDocuments_StatePublicHousingAuthorityId(
     /* [out] */ CStakeholder.statePublicHousingAuthority* CAdministration.documents.statePublicHousingAuthorityId);


   CARAPI SetDocuments_NCATId(
     /* [in] */ CRegulator.nCAT CAdministration.documents.nCATId);

    CARAPI GetDocuments_NCATId(
     /* [out] */ CRegulator.nCAT* CAdministration.documents.nCATId);


   CARAPI SetDocuments_RentalBondAuthorityId(
     /* [in] */ CRegulator.rentalBondAuthority CAdministration.documents.rentalBondAuthorityId);

    CARAPI GetDocuments_RentalBondAuthorityId(
     /* [out] */ CRegulator.rentalBondAuthority* CAdministration.documents.rentalBondAuthorityId);


   CARAPI SetDocuments_CommunityHousingRegulatorId(
     /* [in] */ CRegulator.communityHousingRegulator CAdministration.documents.communityHousingRegulatorId);

    CARAPI GetDocuments_CommunityHousingRegulatorId(
     /* [out] */ CRegulator.communityHousingRegulator* CAdministration.documents.communityHousingRegulatorId);


   CARAPI SetDocuments_CommunityIds(
     /* [in] */ ArrayOf<CStakeholder.community> CAdministration.documents.communityIds);

    CARAPI GetDocuments_CommunityIds(
     /* [out, callee] */ ArrayOf<CStakeholder.community>* CAdministration.documents.communityIds);


   CARAPI SetDocuments_MediaIds(
     /* [in] */ ArrayOf<CStakeholder.media> CAdministration.documents.mediaIds);

    CARAPI GetDocuments_MediaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.media>* CAdministration.documents.mediaIds);


   CARAPI SetDocuments_PartnerIds(
     /* [in] */ ArrayOf<CStakeholder.partner> CAdministration.documents.partnerIds);

    CARAPI GetDocuments_PartnerIds(
     /* [out, callee] */ ArrayOf<CStakeholder.partner>* CAdministration.documents.partnerIds);


   CARAPI SetDocuments_NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.documents.natRegId);

    CARAPI GetDocuments_NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.documents.natRegId);


   CARAPI SetDocuments_StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.documents.stateBasedRegId);

    CARAPI GetDocuments_StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.documents.stateBasedRegId);


   CARAPI SetDocuments_PropertyInspectionResId(
     /* [in] */ CProperty.propertyInspectionResidential CAdministration.documents.propertyInspectionResId);

    CARAPI GetDocuments_PropertyInspectionResId(
     /* [out] */ CProperty.propertyInspectionResidential* CAdministration.documents.propertyInspectionResId);


   CARAPI SetDocuments_PropertyInspectionCommercId(
     /* [in] */ CProperty.propertyInspectionCommercial CAdministration.documents.propertyInspectionCommercId);

    CARAPI GetDocuments_PropertyInspectionCommercId(
     /* [out] */ CProperty.propertyInspectionCommercial* CAdministration.documents.propertyInspectionCommercId);


   CARAPI SetDocuments_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.documents.serviceIds);

    CARAPI GetDocuments_ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.documents.serviceIds);


   CARAPI SetDocuments_ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CAdministration.documents.itemIds);

    CARAPI GetDocuments_ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CAdministration.documents.itemIds);


   CARAPI SetDocuments_JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CAdministration.documents.jobIds);

    CARAPI GetDocuments_JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CAdministration.documents.jobIds);


   CARAPI SetDocuments_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.documents.docRefIds);

    CARAPI GetDocuments_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.documents.docRefIds);


   CARAPI SetDocuments_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.documents.imageRefIds);

    CARAPI GetDocuments_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.documents.imageRefIds);


   CARAPI SetDocuments_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.documents.audioRefIds);

    CARAPI GetDocuments_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.documents.audioRefIds);


   CARAPI SetDocuments_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.documents.videoRefIds);

    CARAPI GetDocuments_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.documents.videoRefIds);


   CARAPI SetImages_ImageRefId(
     /* [in] */ const String& CAdministration.images.imageRefId);

    CARAPI GetImages_ImageRefId(
     /* [out] */ String* CAdministration.images.imageRefId);


   CARAPI SetImages_ImageHash(
     /* [in] */ const String& CAdministration.images.imageHash);

    CARAPI GetImages_ImageHash(
     /* [out] */ String* CAdministration.images.imageHash);


   CARAPI SetImages_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.images.businessChannelOwnerId);

    CARAPI GetImages_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.images.businessChannelOwnerId);


   CARAPI SetImages_BranchId(
     /* [in] */ CAdministration.branch CAdministration.images.branchId);

    CARAPI GetImages_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.images.branchId);


   CARAPI SetImages_DeptId(
     /* [in] */ CAdministration.department CAdministration.images.deptId);

    CARAPI GetImages_DeptId(
     /* [out] */ CAdministration.department* CAdministration.images.deptId);


   CARAPI SetImages_PropertyId(
     /* [in] */ CProperty.property CAdministration.images.propertyId);

    CARAPI GetImages_PropertyId(
     /* [out] */ CProperty.property* CAdministration.images.propertyId);


   CARAPI SetImages_PropOwners(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CAdministration.images.propOwners);

    CARAPI GetImages_PropOwners(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CAdministration.images.propOwners);


   CARAPI SetImages_MasterLedgerAsset(
     /* [in] */ ArrayOf<CFinance.masterAssetRegister> CAdministration.images.masterLedgerAssetIds);

    CARAPI GetImages_MasterLedgerAsset(
     /* [out, callee] */ ArrayOf<CFinance.masterAssetRegister>* CAdministration.images.masterLedgerAssetIds);


   CARAPI SetImages_EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.images.employeeIds);

    CARAPI GetImages_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.images.employeeIds);


   CARAPI SetImages_TenancyIds(
     /* [in] */ ArrayOf<CProperty.tenant> CAdministration.images.tenancyIds);

    CARAPI GetImages_TenancyIds(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CAdministration.images.tenancyIds);


   CARAPI SetImages_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.images.customerIds);

    CARAPI GetImages_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.images.customerIds);


   CARAPI SetImages_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.images.supplierIds);

    CARAPI GetImages_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.images.supplierIds);


   CARAPI SetImages_SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.images.solicitorIds);

    CARAPI GetImages_SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.images.solicitorIds);


   CARAPI SetImages_AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.images.agentIds);

    CARAPI GetImages_AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.images.agentIds);


   CARAPI SetImages_NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder> CAdministration.images.nonGovStakeholderIds);

    CARAPI GetImages_NonGovStakeholderIds(
     /* [out, callee] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.images.nonGovStakeholderIds);


   CARAPI SetImages_GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.images.govStakeholderIds);

    CARAPI GetImages_GovStakeholderIds(
     /* [out, callee] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.images.govStakeholderIds);


   CARAPI SetImages_StateLAHCId(
     /* [in] */ CStakeholder.stateLAHAuthority CAdministration.images.stateLAHCId);

    CARAPI GetImages_StateLAHCId(
     /* [out] */ CStakeholder.stateLAHAuthority* CAdministration.images.stateLAHCId);


   CARAPI SetImages_StatePublicHousingAuthorityId(
     /* [in] */ CStakeholder.statePublicHousingAuthority CAdministration.images.statePublicHousingAuthorityId);

    CARAPI GetImages_StatePublicHousingAuthorityId(
     /* [out] */ CStakeholder.statePublicHousingAuthority* CAdministration.images.statePublicHousingAuthorityId);


   CARAPI SetImages_NCATId(
     /* [in] */ CRegulator.nCAT CAdministration.images.nCATId);

    CARAPI GetImages_NCATId(
     /* [out] */ CRegulator.nCAT* CAdministration.images.nCATId);


   CARAPI SetImages_RentalBondAuthorityId(
     /* [in] */ CRegulator.rentalBondAuthority CAdministration.images.rentalBondAuthorityId);

    CARAPI GetImages_RentalBondAuthorityId(
     /* [out] */ CRegulator.rentalBondAuthority* CAdministration.images.rentalBondAuthorityId);


   CARAPI SetImages_CommunityHousingRegulatorId(
     /* [in] */ CRegulator.communityHousingRegulator CAdministration.images.communityHousingRegulatorId);

    CARAPI GetImages_CommunityHousingRegulatorId(
     /* [out] */ CRegulator.communityHousingRegulator* CAdministration.images.communityHousingRegulatorId);


   CARAPI SetImages_CommunityId(
     /* [in] */ CStakeholder.community CAdministration.images.communityId);

    CARAPI GetImages_CommunityId(
     /* [out] */ CStakeholder.community* CAdministration.images.communityId);


   CARAPI SetImages_MediaId(
     /* [in] */ CStakeholder.media CAdministration.images.mediaId);

    CARAPI GetImages_MediaId(
     /* [out] */ CStakeholder.media* CAdministration.images.mediaId);


   CARAPI SetImages_PartnerId(
     /* [in] */ CStakeholder.partner CAdministration.images.partnerId);

    CARAPI GetImages_PartnerId(
     /* [out] */ CStakeholder.partner* CAdministration.images.partnerId);


   CARAPI SetImages_NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.images.natRegId);

    CARAPI GetImages_NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.images.natRegId);


   CARAPI SetImages_StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.images.stateBasedRegId);

    CARAPI GetImages_StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.images.stateBasedRegId);


   CARAPI SetImages_PropertyInspectionResId(
     /* [in] */ CProperty.propertyInspectionResidential CAdministration.images.propertyInspectionResId);

    CARAPI GetImages_PropertyInspectionResId(
     /* [out] */ CProperty.propertyInspectionResidential* CAdministration.images.propertyInspectionResId);


   CARAPI SetImages_PropertyInspectionCommercId(
     /* [in] */ CProperty.propertyInspectionCommercial CAdministration.images.propertyInspectionCommercId);

    CARAPI GetImages_PropertyInspectionCommercId(
     /* [out] */ CProperty.propertyInspectionCommercial* CAdministration.images.propertyInspectionCommercId);


   CARAPI SetImages_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.images.serviceIds);

    CARAPI GetImages_ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.images.serviceIds);


   CARAPI SetImages_ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CAdministration.images.itemIds);

    CARAPI GetImages_ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CAdministration.images.itemIds);


   CARAPI SetImages_JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CAdministration.images.jobIds);

    CARAPI GetImages_JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CAdministration.images.jobIds);


   CARAPI SetImages_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.images.docRefIds);

    CARAPI GetImages_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.images.docRefIds);


   CARAPI SetImages_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.images.imageRefIds);

    CARAPI GetImages_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.images.imageRefIds);


   CARAPI SetImages_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.images.audioRefIds);

    CARAPI GetImages_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.images.audioRefIds);


   CARAPI SetImages_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.images.videoRefIds);

    CARAPI GetImages_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.images.videoRefIds);


   CARAPI SetAudio_AudioRefId(
     /* [in] */ const String& CAdministration.audio.audioRefId);

    CARAPI GetAudio_AudioRefId(
     /* [out] */ String* CAdministration.audio.audioRefId);


   CARAPI SetAudio_AudioHash(
     /* [in] */ const String& CAdministration.audio.audioHash);

    CARAPI GetAudio_AudioHash(
     /* [out] */ String* CAdministration.audio.audioHash);


   CARAPI SetAudio_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.audio.businessChannelOwnerId);

    CARAPI GetAudio_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.audio.businessChannelOwnerId);


   CARAPI SetAudio_BranchId(
     /* [in] */ CAdministration.branch CAdministration.audio.branchId);

    CARAPI GetAudio_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.audio.branchId);


   CARAPI SetAudio_DeptMapId(
     /* [in] */ CAdministration.mapOfdepartments CAdministration.audio.deptMapId);

    CARAPI GetAudio_DeptMapId(
     /* [out] */ CAdministration.mapOfdepartments* CAdministration.audio.deptMapId);


   CARAPI SetAudio_EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.audio.employeeIds);

    CARAPI GetAudio_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.audio.employeeIds);


   CARAPI SetAudio_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.audio.customerIds);

    CARAPI GetAudio_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.audio.customerIds);


   CARAPI SetAudio_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.audio.supplierIds);

    CARAPI GetAudio_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.audio.supplierIds);


   CARAPI SetAudio_SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.audio.solicitorIds);

    CARAPI GetAudio_SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.audio.solicitorIds);


   CARAPI SetAudio_AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.audio.agentIds);

    CARAPI GetAudio_AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.audio.agentIds);


   CARAPI SetAudio_NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder> CAdministration.audio.nonGovStakeholderIds);

    CARAPI GetAudio_NonGovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.audio.nonGovStakeholderIds);


   CARAPI SetAudio_GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.audio.govStakeholderIds);

    CARAPI GetAudio_GovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.audio.govStakeholderIds);


   CARAPI SetAudio_NCATId(
     /* [in] */ CRegulator.nCAT CAdministration.audio.nCATId);

    CARAPI GetAudio_NCATId(
     /* [out] */ CRegulator.nCAT* CAdministration.audio.nCATId);


   CARAPI SetAudio_CommunityId(
     /* [in] */ CStakeholder.community CAdministration.audio.communityId);

    CARAPI GetAudio_CommunityId(
     /* [out] */ CStakeholder.community* CAdministration.audio.communityId);


   CARAPI SetAudio_MediaId(
     /* [in] */ CStakeholder.media CAdministration.audio.mediaId);

    CARAPI GetAudio_MediaId(
     /* [out] */ CStakeholder.media* CAdministration.audio.mediaId);


   CARAPI SetAudio_PartnerId(
     /* [in] */ CStakeholder.partner CAdministration.audio.partnerId);

    CARAPI GetAudio_PartnerId(
     /* [out] */ CStakeholder.partner* CAdministration.audio.partnerId);


   CARAPI SetAudio_NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.audio.natRegId);

    CARAPI GetAudio_NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.audio.natRegId);


   CARAPI SetAudio_StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.audio.stateBasedRegId);

    CARAPI GetAudio_StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.audio.stateBasedRegId);


   CARAPI SetAudio_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.audio.serviceIds);

    CARAPI GetAudio_ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.audio.serviceIds);


   CARAPI SetAudio_ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CAdministration.audio.itemIds);

    CARAPI GetAudio_ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CAdministration.audio.itemIds);


   CARAPI SetAudio_JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CAdministration.audio.jobIds);

    CARAPI GetAudio_JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CAdministration.audio.jobIds);


   CARAPI SetAudio_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.audio.docRefIds);

    CARAPI GetAudio_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.audio.docRefIds);


   CARAPI SetAudio_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.audio.imageRefIds);

    CARAPI GetAudio_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.audio.imageRefIds);


   CARAPI SetAudio_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.audio.audioRefIds);

    CARAPI GetAudio_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.audio.audioRefIds);


   CARAPI SetAudio_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.audio.videoRefIds);

    CARAPI GetAudio_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.audio.videoRefIds);





   CARAPI SetVideo_VideoRefId(
     /* [in] */ const String& CAdministration.video.videoRefId);

    CARAPI GetVideo_VideoRefId(
     /* [out] */ String* CAdministration.video.videoRefId);


   CARAPI SetVideo_VideoHash(
     /* [in] */ const String& CAdministration.video.videoHash);

    CARAPI GetVideo_VideoHash(
     /* [out] */ String* CAdministration.video.videoHash);


   CARAPI SetVideo_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.video.businessChannelOwnerId);

    CARAPI GetVideo_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.video.businessChannelOwnerId);


   CARAPI SetVideo_BranchId(
     /* [in] */ CAdministration.branch CAdministration.video.branchId);

    CARAPI GetVideo_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.video.branchId);


   CARAPI SetVideo_DeptId(
     /* [in] */ CAdministration.department CAdministration.video.deptId);

    CARAPI GetVideo_DeptId(
     /* [out] */ CAdministration.department* CAdministration.video.deptId);


   CARAPI SetVideo_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CAdministration.video.propertyIds);

    CARAPI GetVideo_PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CAdministration.video.propertyIds);


   CARAPI SetVideo_PropOwners(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CAdministration.video.propOwners);

    CARAPI GetVideo_PropOwners(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CAdministration.video.propOwners);


   CARAPI SetVideo_EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.video.employeeIds);

    CARAPI GetVideo_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.video.employeeIds);


   CARAPI SetVideo_TenancyIds(
     /* [in] */ ArrayOf<CProperty.tenant> CAdministration.video.tenancyIds);

    CARAPI GetVideo_TenancyIds(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CAdministration.video.tenancyIds);


   CARAPI SetVideo_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.video.customerIds);

    CARAPI GetVideo_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.video.customerIds);


   CARAPI SetVideo_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.video.supplierIds);

    CARAPI GetVideo_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.video.supplierIds);


   CARAPI SetVideo_SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.video.solicitorIds);

    CARAPI GetVideo_SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.video.solicitorIds);


   CARAPI SetVideo_AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.video.agentIds);

    CARAPI GetVideo_AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.video.agentIds);


   CARAPI SetVideo_NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder> CAdministration.video.nonGovStakeholderIds);

    CARAPI GetVideo_NonGovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.video.nonGovStakeholderIds);


   CARAPI SetVideo_GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.video.govStakeholderIds);

    CARAPI GetVideo_GovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.video.govStakeholderIds);


   CARAPI SetVideo_StateLAHCId(
     /* [in] */ CStakeholder.stateLAHAuthority CAdministration.video.stateLAHCId);

    CARAPI GetVideo_StateLAHCId(
     /* [out] */ CStakeholder.stateLAHAuthority* CAdministration.video.stateLAHCId);


   CARAPI SetVideo_StatePublicHousingAuthorityId(
     /* [in] */ CStakeholder.statePublicHousingAuthority CAdministration.video.statePublicHousingAuthorityId);

    CARAPI GetVideo_StatePublicHousingAuthorityId(
     /* [out] */ CStakeholder.statePublicHousingAuthority* CAdministration.video.statePublicHousingAuthorityId);


   CARAPI SetVideo_NCATId(
     /* [in] */ CRegulator.nCAT CAdministration.video.nCATId);

    CARAPI GetVideo_NCATId(
     /* [out] */ CRegulator.nCAT* CAdministration.video.nCATId);


   CARAPI SetVideo_RentalBondAuthorityId(
     /* [in] */ CRegulator.rentalBondAuthority CAdministration.video.rentalBondAuthorityId);

    CARAPI GetVideo_RentalBondAuthorityId(
     /* [out] */ CRegulator.rentalBondAuthority* CAdministration.video.rentalBondAuthorityId);


   CARAPI SetVideo_CommunityHousingRegulatorId(
     /* [in] */ CRegulator.communityHousingRegulator CAdministration.video.communityHousingRegulatorId);

    CARAPI GetVideo_CommunityHousingRegulatorId(
     /* [out] */ CRegulator.communityHousingRegulator* CAdministration.video.communityHousingRegulatorId);


   CARAPI SetVideo_CommunityId(
     /* [in] */ CStakeholder.community CAdministration.video.communityId);

    CARAPI GetVideo_CommunityId(
     /* [out] */ CStakeholder.community* CAdministration.video.communityId);


   CARAPI SetVideo_MediaId(
     /* [in] */ CStakeholder.media CAdministration.video.mediaId);

    CARAPI GetVideo_MediaId(
     /* [out] */ CStakeholder.media* CAdministration.video.mediaId);


   CARAPI SetVideo_PartnerId(
     /* [in] */ CStakeholder.partner CAdministration.video.partnerId);

    CARAPI GetVideo_PartnerId(
     /* [out] */ CStakeholder.partner* CAdministration.video.partnerId);


   CARAPI SetVideo_NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.video.natRegId);

    CARAPI GetVideo_NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.video.natRegId);


   CARAPI SetVideo_StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.video.stateBasedRegId);

    CARAPI GetVideo_StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.video.stateBasedRegId);


   CARAPI SetVideo_PropertyInspectionResId(
     /* [in] */ CProperty.propertyInspectionResidential CAdministration.video.propertyInspectionResId);

    CARAPI GetVideo_PropertyInspectionResId(
     /* [out] */ CProperty.propertyInspectionResidential* CAdministration.video.propertyInspectionResId);


   CARAPI SetVideo_PropertyInspectionCommercId(
     /* [in] */ CProperty.propertyInspectionCommercial CAdministration.video.propertyInspectionCommercId);

    CARAPI GetVideo_PropertyInspectionCommercId(
     /* [out] */ CProperty.propertyInspectionCommercial* CAdministration.video.propertyInspectionCommercId);


   CARAPI SetVideo_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.video.serviceIds);

    CARAPI GetVideo_ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.video.serviceIds);


   CARAPI SetVideo_ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CAdministration.video.itemIds);

    CARAPI GetVideo_ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CAdministration.video.itemIds);


   CARAPI SetVideo_JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CAdministration.video.jobIds);

    CARAPI GetVideo_JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CAdministration.video.jobIds);


   CARAPI SetVideo_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.video.docRefIds);

    CARAPI GetVideo_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.video.docRefIds);


   CARAPI SetVideo_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.video.imageRefIds);

    CARAPI GetVideo_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.video.imageRefIds);


   CARAPI SetVideo_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.video.audioRefIds);

    CARAPI GetVideo_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.video.audioRefIds);


   CARAPI SetVideo_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.video.videoRefIds);

    CARAPI GetVideo_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.video.videoRefIds);


   CARAPI SetItemType_ItemTypeId(
     /* [in] */ const String& CAdministration.itemType.itemTypeId);

    CARAPI GetItemType_ItemTypeId(
     /* [out] */ String* CAdministration.itemType.itemTypeId);


   CARAPI SetItemType_ItemTypeDescription(
     /* [in] */ const String& CAdministration.itemType.itemTypeDescription);

    CARAPI GetItemType_ItemTypeDescription(
     /* [out] */ String* CAdministration.itemType.itemTypeDescription);


   CARAPI SetItemType_ItemModelNumber(
     /* [in] */ const String& CAdministration.itemType.itemModelNumber);

    CARAPI GetItemType_ItemModelNumber(
     /* [out] */ String* CAdministration.itemType.itemModelNumber);


   CARAPI SetItemType_ItemName(
     /* [in] */ const String& CAdministration.itemType.itemName);

    CARAPI GetItemType_ItemName(
     /* [out] */ String* CAdministration.itemType.itemName);


   CARAPI SetItemType_NumberInInventory(
     /* [in] */ Int32 CAdministration.itemType.numberInInventory);

    CARAPI GetItemType_NumberInInventory(
     /* [out] */ Int32* CAdministration.itemType.numberInInventory);


   CARAPI SetItemType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.itemType.businessChannelOwnerId);

    CARAPI GetItemType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.itemType.businessChannelOwnerId);


   CARAPI SetItemType_OurProductTypeId(
     /* [in] */ CFactory.productType CAdministration.itemType.ourProductTypeId);

    CARAPI GetItemType_OurProductTypeId(
     /* [out] */ CFactory.productType* CAdministration.itemType.ourProductTypeId);


   CARAPI SetItemType_BranchId(
     /* [in] */ CAdministration.branch CAdministration.itemType.branchId);

    CARAPI GetItemType_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.itemType.branchId);


   CARAPI SetItemType_DeptId(
     /* [in] */ CAdministration.department CAdministration.itemType.deptId);

    CARAPI GetItemType_DeptId(
     /* [out] */ CAdministration.department* CAdministration.itemType.deptId);


   CARAPI SetItemType_Suppliers(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.itemType.suppliers);

    CARAPI GetItemType_Suppliers(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.itemType.suppliers);


   CARAPI SetItemType_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.itemType.serviceIds);

    CARAPI GetItemType_ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.itemType.serviceIds);


   CARAPI SetItemType_SupplierTypeIds(
     /* [in] */ ArrayOf<CSupplier.supplierType> CAdministration.itemType.supplierTypeIds);

    CARAPI GetItemType_SupplierTypeIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplierType>* CAdministration.itemType.supplierTypeIds);


   CARAPI SetItemType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.itemType.docRefIds);

    CARAPI GetItemType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.itemType.docRefIds);


   CARAPI SetItemType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.itemType.imageRefIds);

    CARAPI GetItemType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.itemType.imageRefIds);


   CARAPI SetItemType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.itemType.videoRefIds);

    CARAPI GetItemType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.itemType.videoRefIds);


   CARAPI SetItem_ItemId(
     /* [in] */ const String& CAdministration.item.itemId);

    CARAPI GetItem_ItemId(
     /* [out] */ String* CAdministration.item.itemId);


   CARAPI SetItem_ItemName(
     /* [in] */ const String& CAdministration.item.itemName);

    CARAPI GetItem_ItemName(
     /* [out] */ String* CAdministration.item.itemName);


   CARAPI SetItem_ItemDescription(
     /* [in] */ const String& CAdministration.item.itemDescription);

    CARAPI GetItem_ItemDescription(
     /* [out] */ String* CAdministration.item.itemDescription);


   CARAPI SetItem_Fragile(
     /* [in] */ Boolean CAdministration.item.fragile);

    CARAPI GetItem_Fragile(
     /* [out] */ Boolean* CAdministration.item.fragile);


   CARAPI SetItem_Toxic(
     /* [in] */ Boolean CAdministration.item.toxic);

    CARAPI GetItem_Toxic(
     /* [out] */ Boolean* CAdministration.item.toxic);


   CARAPI SetItem_Corrosive(
     /* [in] */ Boolean CAdministration.item.corrosive);

    CARAPI GetItem_Corrosive(
     /* [out] */ Boolean* CAdministration.item.corrosive);


   CARAPI SetItem_ItemModelNumber(
     /* [in] */ const String& CAdministration.item.itemModelNumber);

    CARAPI GetItem_ItemModelNumber(
     /* [out] */ String* CAdministration.item.itemModelNumber);


   CARAPI SetItem_ItemSerialNumber(
     /* [in] */ const String& CAdministration.item.itemSerialNumber);

    CARAPI GetItem_ItemSerialNumber(
     /* [out] */ String* CAdministration.item.itemSerialNumber);


   CARAPI SetItem_ItemQualityDimensionsCheckedPassed(
     /* [in] */ Boolean CAdministration.item.itemQualityDimensionsCheckedPassed);

    CARAPI GetItem_ItemQualityDimensionsCheckedPassed(
     /* [out] */ Boolean* CAdministration.item.itemQualityDimensionsCheckedPassed);


   CARAPI SetItem_PricePerItem(
     /* [in] */ const String& CAdministration.item.pricePerItem);

    CARAPI GetItem_PricePerItem(
     /* [out] */ String* CAdministration.item.pricePerItem);


   CARAPI SetItem_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.item.businessChannelOwnerId);

    CARAPI GetItem_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.item.businessChannelOwnerId);


   CARAPI SetItem_OurProductId(
     /* [in] */ CFactory.product CAdministration.item.ourProductId);

    CARAPI GetItem_OurProductId(
     /* [out] */ CFactory.product* CAdministration.item.ourProductId);


   CARAPI SetItem_BranchId(
     /* [in] */ CAdministration.branch CAdministration.item.branchId);

    CARAPI GetItem_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.item.branchId);


   CARAPI SetItem_DeptId(
     /* [in] */ CAdministration.department CAdministration.item.deptId);

    CARAPI GetItem_DeptId(
     /* [out] */ CAdministration.department* CAdministration.item.deptId);


   CARAPI SetItem_SupplierId(
     /* [in] */ CSupplier.supplier CAdministration.item.supplierId);

    CARAPI GetItem_SupplierId(
     /* [out] */ CSupplier.supplier* CAdministration.item.supplierId);


   CARAPI SetItem_ItemTypeId(
     /* [in] */ CAdministration.itemType CAdministration.item.itemTypeId);

    CARAPI GetItem_ItemTypeId(
     /* [out] */ CAdministration.itemType* CAdministration.item.itemTypeId);


   CARAPI SetItem_JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CAdministration.item.jobTypeIds);

    CARAPI GetItem_JobTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.jobType>* CAdministration.item.jobTypeIds);


   CARAPI SetItem_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.item.docRefIds);

    CARAPI GetItem_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.item.docRefIds);


   CARAPI SetItem_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.item.imageRefIds);

    CARAPI GetItem_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.item.imageRefIds);


   CARAPI SetItem_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.item.videoRefIds);

    CARAPI GetItem_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.item.videoRefIds);


   CARAPI SetJobType_JobTypeId(
     /* [in] */ const String& CAdministration.jobType.jobTypeId);

    CARAPI GetJobType_JobTypeId(
     /* [out] */ String* CAdministration.jobType.jobTypeId);


   CARAPI SetJobType_JobDescription(
     /* [in] */ const String& CAdministration.jobType.jobDescription);

    CARAPI GetJobType_JobDescription(
     /* [out] */ String* CAdministration.jobType.jobDescription);


   CARAPI SetJobType_JobCode(
     /* [in] */ const String& CAdministration.jobType.jobCode);

    CARAPI GetJobType_JobCode(
     /* [out] */ String* CAdministration.jobType.jobCode);


   CARAPI SetJobType_JobName(
     /* [in] */ const String& CAdministration.jobType.jobName);

    CARAPI GetJobType_JobName(
     /* [out] */ String* CAdministration.jobType.jobName);


   CARAPI SetJobType_TaskSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.jobType.taskSequence);

    CARAPI GetJobType_TaskSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.jobType.taskSequence);


   CARAPI SetJobType_NatRegId(
     /* [in] */ ArrayOf<const String&> CAdministration.jobType.natRegId);

    CARAPI GetJobType_NatRegId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.jobType.natRegId);


   CARAPI SetJobType_StateBasedRegId(
     /* [in] */ ArrayOf<const String&> CAdministration.jobType.stateBasedRegId);

    CARAPI GetJobType_StateBasedRegId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.jobType.stateBasedRegId);


   CARAPI SetJobType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.jobType.businessChannelOwnerId);

    CARAPI GetJobType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.jobType.businessChannelOwnerId);


   CARAPI SetJobType_BranchId(
     /* [in] */ CAdministration.branch CAdministration.jobType.branchId);

    CARAPI GetJobType_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.jobType.branchId);


   CARAPI SetJobType_DeptId(
     /* [in] */ CAdministration.department CAdministration.jobType.deptId);

    CARAPI GetJobType_DeptId(
     /* [out] */ CAdministration.department* CAdministration.jobType.deptId);


   CARAPI SetJobType_Suppliers(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.jobType.suppliers);

    CARAPI GetJobType_Suppliers(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.jobType.suppliers);


   CARAPI SetJobType_ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CAdministration.jobType.itemTypeIds);

    CARAPI GetJobType_ItemTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CAdministration.jobType.itemTypeIds);


   CARAPI SetJobType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.jobType.docRefIds);

    CARAPI GetJobType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.jobType.docRefIds);


   CARAPI SetJobType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.jobType.imageRefIds);

    CARAPI GetJobType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.jobType.imageRefIds);


   CARAPI SetJobType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.jobType.videoRefIds);

    CARAPI GetJobType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.jobType.videoRefIds);


   CARAPI SetJob_JobId(
     /* [in] */ const String& CAdministration.job.jobId);

    CARAPI GetJob_JobId(
     /* [out] */ String* CAdministration.job.jobId);


   CARAPI SetJob_JobDescription(
     /* [in] */ const String& CAdministration.job.jobDescription);

    CARAPI GetJob_JobDescription(
     /* [out] */ String* CAdministration.job.jobDescription);


   CARAPI SetJob_TaskDescriptionSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.job.taskDescriptionSequence);

    CARAPI GetJob_TaskDescriptionSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.job.taskDescriptionSequence);


   CARAPI SetJob_JobCode(
     /* [in] */ const String& CAdministration.job.jobCode);

    CARAPI GetJob_JobCode(
     /* [out] */ String* CAdministration.job.jobCode);


   CARAPI SetJob_JobName(
     /* [in] */ const String& CAdministration.job.jobName);

    CARAPI GetJob_JobName(
     /* [out] */ String* CAdministration.job.jobName);


   CARAPI SetJob_JobNum(
     /* [in] */ Int32 CAdministration.job.jobNum);

    CARAPI GetJob_JobNum(
     /* [out] */ Int32* CAdministration.job.jobNum);


   CARAPI SetJob_ResponsiveMaintenance(
     /* [in] */ Boolean CAdministration.job.responsiveMaintenance);

    CARAPI GetJob_ResponsiveMaintenance(
     /* [out] */ Boolean* CAdministration.job.responsiveMaintenance);


   CARAPI SetJob_PlannedMaintenance(
     /* [in] */ Boolean CAdministration.job.plannedMaintenance);

    CARAPI GetJob_PlannedMaintenance(
     /* [out] */ Boolean* CAdministration.job.plannedMaintenance);


   CARAPI SetJob_ImmediatePrevJobNums(
     /* [in] */ ArrayOf<Int32> CAdministration.job.immediatePrevJobNums);

    CARAPI GetJob_ImmediatePrevJobNums(
     /* [out, callee] */ ArrayOf<Int32>* CAdministration.job.immediatePrevJobNums);


   CARAPI SetJob_ImmediatePrevJobsQCPass(
     /* [in] */ ArrayOf<Boolean> CAdministration.job.immediatePrevJobsQCPass);

    CARAPI GetJob_ImmediatePrevJobsQCPass(
     /* [out, callee] */ ArrayOf<Boolean>* CAdministration.job.immediatePrevJobsQCPass);


   CARAPI SetJob_DateTimeTaskStartSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.job.dateTimeTaskStartSequence);

    CARAPI GetJob_DateTimeTaskStartSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.job.dateTimeTaskStartSequence);


   CARAPI SetJob_DateTimeTaskEndSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.job.dateTimeTaskEndSequence);

    CARAPI GetJob_DateTimeTaskEndSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.job.dateTimeTaskEndSequence);


   CARAPI SetJob_ActualTaskStartTime(
     /* [in] */ ArrayOf<const String&> CAdministration.job.actualTaskStartTime);

    CARAPI GetJob_ActualTaskStartTime(
     /* [out, callee] */ ArrayOf<String>* CAdministration.job.actualTaskStartTime);


   CARAPI SetJob_ActualTaskCompleteTime(
     /* [in] */ ArrayOf<const String&> CAdministration.job.actualTaskCompleteTime);

    CARAPI GetJob_ActualTaskCompleteTime(
     /* [out, callee] */ ArrayOf<String>* CAdministration.job.actualTaskCompleteTime);


   CARAPI SetJob_TaskCompletionQCPasses(
     /* [in] */ ArrayOf<Boolean> CAdministration.job.taskCompletionQCPasses);

    CARAPI GetJob_TaskCompletionQCPasses(
     /* [out, callee] */ ArrayOf<Boolean>* CAdministration.job.taskCompletionQCPasses);


   CARAPI SetJob_JobCompletionQCPass(
     /* [in] */ Boolean CAdministration.job.jobCompletionQCPass);

    CARAPI GetJob_JobCompletionQCPass(
     /* [out] */ Boolean* CAdministration.job.jobCompletionQCPass);


   CARAPI SetJob_NextJobTypeId(
     /* [in] */ const String& CAdministration.job.nextJobTypeId);

    CARAPI GetJob_NextJobTypeId(
     /* [out] */ String* CAdministration.job.nextJobTypeId);


   CARAPI SetJob_TenantDamages(
     /* [in] */ ArrayOf<Boolean> CAdministration.job.tenantDamages);

    CARAPI GetJob_TenantDamages(
     /* [out, callee] */ ArrayOf<Boolean>* CAdministration.job.tenantDamages);


   CARAPI SetJob_LesseeCustomerDamage(
     /* [in] */ ArrayOf<Boolean> CAdministration.job.lesseeCustomerDamage);

    CARAPI GetJob_LesseeCustomerDamage(
     /* [out, callee] */ ArrayOf<Boolean>* CAdministration.job.lesseeCustomerDamage);


   CARAPI SetJob_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.job.businessChannelOwnerId);

    CARAPI GetJob_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.job.businessChannelOwnerId);


   CARAPI SetJob_BranchId(
     /* [in] */ CAdministration.branch CAdministration.job.branchId);

    CARAPI GetJob_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.job.branchId);


   CARAPI SetJob_DeptId(
     /* [in] */ CAdministration.department CAdministration.job.deptId);

    CARAPI GetJob_DeptId(
     /* [out] */ CAdministration.department* CAdministration.job.deptId);


   CARAPI SetJob_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.job.docRefIds);

    CARAPI GetJob_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.job.docRefIds);


   CARAPI SetJob_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.job.imageRefIds);

    CARAPI GetJob_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.job.imageRefIds);


   CARAPI SetJob_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CAdministration.job.propertyIds);

    CARAPI GetJob_PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CAdministration.job.propertyIds);


   CARAPI SetJob_MasterLedgerAsset(
     /* [in] */ CFinance.masterAssetRegister CAdministration.job.masterLedgerAssetId);

    CARAPI GetJob_MasterLedgerAsset(
     /* [out] */ CFinance.masterAssetRegister* CAdministration.job.masterLedgerAssetId);


   CARAPI SetJob_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.job.customerIds);

    CARAPI GetJob_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.job.customerIds);


   CARAPI SetJob_EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.job.employeeIds);

    CARAPI GetJob_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.job.employeeIds);


   CARAPI SetJob_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.job.supplierIds);

    CARAPI GetJob_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.job.supplierIds);


   CARAPI SetJob_JobTypeId(
     /* [in] */ CAdministration.jobType CAdministration.job.jobTypeId);

    CARAPI GetJob_JobTypeId(
     /* [out] */ CAdministration.jobType* CAdministration.job.jobTypeId);


   CARAPI SetJob_ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CAdministration.job.itemTypeIds);

    CARAPI GetJob_ItemTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CAdministration.job.itemTypeIds);


   CARAPI SetJob_ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CAdministration.job.itemIds);

    CARAPI GetJob_ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CAdministration.job.itemIds);


   CARAPI SetJob_ServiceTypeIds(
     /* [in] */ ArrayOf<CAdministration.serviceType> CAdministration.job.serviceTypeIds);

    CARAPI GetJob_ServiceTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.serviceType>* CAdministration.job.serviceTypeIds);


   CARAPI SetJob_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.job.serviceIds);

    CARAPI GetJob_ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.job.serviceIds);


   CARAPI SetJob_MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CAdministration.job.materialTypeIds);

    CARAPI GetJob_MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CAdministration.job.materialTypeIds);


   CARAPI SetJob_MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CAdministration.job.materialIds);

    CARAPI GetJob_MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CAdministration.job.materialIds);


   CARAPI SetJob_PartTypeIds(
     /* [in] */ ArrayOf<CFactory.partType> CAdministration.job.partTypeIds);

    CARAPI GetJob_PartTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CAdministration.job.partTypeIds);


   CARAPI SetJob_PartIds(
     /* [in] */ ArrayOf<CFactory.part> CAdministration.job.partIds);

    CARAPI GetJob_PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CAdministration.job.partIds);


   CARAPI SetJob_MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CAdministration.job.minorsubassemblyTypeIds);

    CARAPI GetJob_MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CAdministration.job.minorsubassemblyTypeIds);


   CARAPI SetJob_MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CAdministration.job.minorsubassemblyIds);

    CARAPI GetJob_MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CAdministration.job.minorsubassemblyIds);


   CARAPI SetJob_SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CAdministration.job.subassemblyTypeIds);

    CARAPI GetJob_SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CAdministration.job.subassemblyTypeIds);


   CARAPI SetJob_SubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.subassembly> CAdministration.job.subassemblyIds);

    CARAPI GetJob_SubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.subassembly>* CAdministration.job.subassemblyIds);


   CARAPI SetJob_MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CAdministration.job.majorsubassemblyTypeIds);

    CARAPI GetJob_MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CAdministration.job.majorsubassemblyTypeIds);


   CARAPI SetJob_MajorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.majorsubassembly> CAdministration.job.majorsubassemblyIds);

    CARAPI GetJob_MajorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassembly>* CAdministration.job.majorsubassemblyIds);


   CARAPI SetJob_LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CAdministration.job.lesserassemblyTypeIds);

    CARAPI GetJob_LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CAdministration.job.lesserassemblyTypeIds);


   CARAPI SetJob_LesserAssemblyIds(
     /* [in] */ ArrayOf<CFactory.lesserassembly> CAdministration.job.lesserassemblyIds);

    CARAPI GetJob_LesserAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassembly>* CAdministration.job.lesserassemblyIds);


   CARAPI SetJob_AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CAdministration.job.assemblyTypeIds);

    CARAPI GetJob_AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CAdministration.job.assemblyTypeIds);


   CARAPI SetJob_AssemblyIds(
     /* [in] */ ArrayOf<CFactory.assembly> CAdministration.job.assemblyIds);

    CARAPI GetJob_AssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.assembly>* CAdministration.job.assemblyIds);


   CARAPI SetJob_GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CAdministration.job.greaterassemblyTypeIds);

    CARAPI GetJob_GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CAdministration.job.greaterassemblyTypeIds);


   CARAPI SetJob_GreaterAssemblyIds(
     /* [in] */ ArrayOf<CFactory.greaterassembly> CAdministration.job.greaterassemblyIds);

    CARAPI GetJob_GreaterAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassembly>* CAdministration.job.greaterassemblyIds);


   CARAPI SetJob_ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CAdministration.job.productTypeIds);

    CARAPI GetJob_ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CAdministration.job.productTypeIds);


   CARAPI SetJob_ProductIds(
     /* [in] */ ArrayOf<CFactory.product> CAdministration.job.productIds);

    CARAPI GetJob_ProductIds(
     /* [out, callee] */ ArrayOf<CFactory.product>* CAdministration.job.productIds);


   CARAPI SetJob_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CAdministration.job.masterSalesOrderId);

    CARAPI GetJob_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CAdministration.job.masterSalesOrderId);


   CARAPI SetJob_PurchOrderId(
     /* [in] */ realEstatePurchOrders CAdministration.job.purchOrderId);

    CARAPI GetJob_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CAdministration.job.purchOrderId);


   CARAPI SetJob_NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.job.natRegId);

    CARAPI GetJob_NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.job.natRegId);


   CARAPI SetJob_StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.job.stateBasedRegId);

    CARAPI GetJob_StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.job.stateBasedRegId);


   CARAPI SetLeaveTypesCodes_LeaveId(
     /* [in] */ const String& CAdministration.leaveTypesCodes.leaveId);

    CARAPI GetLeaveTypesCodes_LeaveId(
     /* [out] */ String* CAdministration.leaveTypesCodes.leaveId);


   CARAPI SetLeaveTypesCodes_LeaveCode(
     /* [in] */ const String& CAdministration.leaveTypesCodes.leaveCode);

    CARAPI GetLeaveTypesCodes_LeaveCode(
     /* [out] */ String* CAdministration.leaveTypesCodes.leaveCode);


   CARAPI SetLeaveTypesCodes_LeaveDescription(
     /* [in] */ const String& CAdministration.leaveTypesCodes.leaveDescription);

    CARAPI GetLeaveTypesCodes_LeaveDescription(
     /* [out] */ String* CAdministration.leaveTypesCodes.leaveDescription);


   CARAPI SetLeaveTypesCodes_AwardName(
     /* [in] */ const String& CAdministration.leaveTypesCodes.awardName);

    CARAPI GetLeaveTypesCodes_AwardName(
     /* [out] */ String* CAdministration.leaveTypesCodes.awardName);


   CARAPI SetLeaveTypesCodes_Notes(
     /* [in] */ const String& CAdministration.leaveTypesCodes.notes);

    CARAPI GetLeaveTypesCodes_Notes(
     /* [out] */ String* CAdministration.leaveTypesCodes.notes);


   CARAPI SetLeaveTypesCodes_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.leaveTypesCodes.businessChannelOwnerId);

    CARAPI GetLeaveTypesCodes_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.leaveTypesCodes.businessChannelOwnerId);


   CARAPI SetLeaveTypesCodes_BranchId(
     /* [in] */ CAdministration.branch CAdministration.leaveTypesCodes.branchId);

    CARAPI GetLeaveTypesCodes_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.leaveTypesCodes.branchId);


   CARAPI SetLeaveTypesCodes_DeptId(
     /* [in] */ CAdministration.department CAdministration.leaveTypesCodes.deptId);

    CARAPI GetLeaveTypesCodes_DeptId(
     /* [out] */ CAdministration.department* CAdministration.leaveTypesCodes.deptId);


   CARAPI SetLeaveTypesCodes_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.leaveTypesCodes.docRefIds);

    CARAPI GetLeaveTypesCodes_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.leaveTypesCodes.docRefIds);


   CARAPI SetQuoteIn_QuoteInId(
     /* [in] */ const String& CAdministration.quoteIn.quoteInId);

    CARAPI GetQuoteIn_QuoteInId(
     /* [out] */ String* CAdministration.quoteIn.quoteInId);


   CARAPI SetQuoteIn_JobDescription(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteIn.jobDescription);

    CARAPI GetQuoteIn_JobDescription(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteIn.jobDescription);


   CARAPI SetQuoteIn_JobTypeId(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteIn.jobTypeId);

    CARAPI GetQuoteIn_JobTypeId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteIn.jobTypeId);


   CARAPI SetQuoteIn_JobName(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteIn.jobName);

    CARAPI GetQuoteIn_JobName(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteIn.jobName);


   CARAPI SetQuoteIn_ItemId(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteIn.itemId);

    CARAPI GetQuoteIn_ItemId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteIn.itemId);


   CARAPI SetQuoteIn_ConditionsUponCustomer(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteIn.conditionsUponCustomer);

    CARAPI GetQuoteIn_ConditionsUponCustomer(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteIn.conditionsUponCustomer);


   CARAPI SetQuoteIn_QuoteAmountEachJob(
     /* [in] */ ArrayOf<Double> CAdministration.quoteIn.quoteAmountEachJob);

    CARAPI GetQuoteIn_QuoteAmountEachJob(
     /* [out, callee] */ ArrayOf<Double>* CAdministration.quoteIn.quoteAmountEachJob);


   CARAPI SetQuoteIn_QuoteTotalForOrder(
     /* [in] */ Double CAdministration.quoteIn.quoteTotalForOrder);

    CARAPI GetQuoteIn_QuoteTotalForOrder(
     /* [out] */ Double* CAdministration.quoteIn.quoteTotalForOrder);


   CARAPI SetQuoteIn_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.quoteIn.businessChannelOwnerId);

    CARAPI GetQuoteIn_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.quoteIn.businessChannelOwnerId);


   CARAPI SetQuoteIn_BranchId(
     /* [in] */ CAdministration.branch CAdministration.quoteIn.branchId);

    CARAPI GetQuoteIn_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.quoteIn.branchId);


   CARAPI SetQuoteIn_DeptId(
     /* [in] */ CAdministration.department CAdministration.quoteIn.deptId);

    CARAPI GetQuoteIn_DeptId(
     /* [out] */ CAdministration.department* CAdministration.quoteIn.deptId);


   CARAPI SetQuoteIn_SupplierId(
     /* [in] */ CSupplier.supplier CAdministration.quoteIn.supplierId);

    CARAPI GetQuoteIn_SupplierId(
     /* [out] */ CSupplier.supplier* CAdministration.quoteIn.supplierId);


   CARAPI SetQuoteIn_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.quoteIn.docRefIds);

    CARAPI GetQuoteIn_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.quoteIn.docRefIds);


   CARAPI SetQuoteIn_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.quoteIn.imageRefIds);

    CARAPI GetQuoteIn_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.quoteIn.imageRefIds);


   CARAPI SetQuoteIn_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.quoteIn.videoRefIds);

    CARAPI GetQuoteIn_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.quoteIn.videoRefIds);


   CARAPI SetQuoteIn_PurchOrderId(
     /* [in] */ realEstatePurchOrders CAdministration.quoteIn.purchOrderId);

    CARAPI GetQuoteIn_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CAdministration.quoteIn.purchOrderId);


   CARAPI SetQuoteOut_QuoteOutId(
     /* [in] */ const String& CAdministration.quoteOut.quoteOutId);

    CARAPI GetQuoteOut_QuoteOutId(
     /* [out] */ String* CAdministration.quoteOut.quoteOutId);


   CARAPI SetQuoteOut_JobDescription(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteOut.jobDescription);

    CARAPI GetQuoteOut_JobDescription(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteOut.jobDescription);


   CARAPI SetQuoteOut_JobTypeId(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteOut.jobTypeId);

    CARAPI GetQuoteOut_JobTypeId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteOut.jobTypeId);


   CARAPI SetQuoteOut_JobName(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteOut.jobName);

    CARAPI GetQuoteOut_JobName(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteOut.jobName);


   CARAPI SetQuoteOut_ItemId(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteOut.itemId);

    CARAPI GetQuoteOut_ItemId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteOut.itemId);


   CARAPI SetQuoteOut_ConditionsUponCustomer(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteOut.conditionsUponCustomer);

    CARAPI GetQuoteOut_ConditionsUponCustomer(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteOut.conditionsUponCustomer);


   CARAPI SetQuoteOut_QuoteAmountEachJobItem(
     /* [in] */ ArrayOf<Double> CAdministration.quoteOut.quoteAmountEachJobItem);

    CARAPI GetQuoteOut_QuoteAmountEachJobItem(
     /* [out, callee] */ ArrayOf<Double>* CAdministration.quoteOut.quoteAmountEachJobItem);


   CARAPI SetQuoteOut_QuoteTotalForOrder(
     /* [in] */ Double CAdministration.quoteOut.quoteTotalForOrder);

    CARAPI GetQuoteOut_QuoteTotalForOrder(
     /* [out] */ Double* CAdministration.quoteOut.quoteTotalForOrder);


   CARAPI SetQuoteOut_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.quoteOut.businessChannelOwnerId);

    CARAPI GetQuoteOut_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.quoteOut.businessChannelOwnerId);


   CARAPI SetQuoteOut_BranchId(
     /* [in] */ CAdministration.branch CAdministration.quoteOut.branchId);

    CARAPI GetQuoteOut_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.quoteOut.branchId);


   CARAPI SetQuoteOut_DeptId(
     /* [in] */ CAdministration.department CAdministration.quoteOut.deptId);

    CARAPI GetQuoteOut_DeptId(
     /* [out] */ CAdministration.department* CAdministration.quoteOut.deptId);


   CARAPI SetQuoteOut_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.quoteOut.docRefIds);

    CARAPI GetQuoteOut_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.quoteOut.docRefIds);


   CARAPI SetQuoteOut_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.quoteOut.imageRefIds);

    CARAPI GetQuoteOut_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.quoteOut.imageRefIds);


   CARAPI SetQuoteOut_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.quoteOut.videoRefIds);

    CARAPI GetQuoteOut_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.quoteOut.videoRefIds);


   CARAPI SetQuoteOut_Customers(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.quoteOut.customers);

    CARAPI GetQuoteOut_Customers(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.quoteOut.customers);


   CARAPI SetQuoteOut_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CAdministration.quoteOut.masterSalesOrderId);

    CARAPI GetQuoteOut_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CAdministration.quoteOut.masterSalesOrderId);


   CARAPI SetRiskRegister_RiskId(
     /* [in] */ const String& CAdministration.riskRegister.riskId);

    CARAPI GetRiskRegister_RiskId(
     /* [out] */ String* CAdministration.riskRegister.riskId);


   CARAPI SetRiskRegister_PropertyType(
     /* [in] */ CHelper.propertyType CAdministration.riskRegister.propertyType);

    CARAPI GetRiskRegister_PropertyType(
     /* [out] */ CHelper.propertyType* CAdministration.riskRegister.propertyType);


   CARAPI SetRiskRegister_RiskDescriptionSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.riskRegister.riskDescriptionSequence);

    CARAPI GetRiskRegister_RiskDescriptionSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.riskRegister.riskDescriptionSequence);


   CARAPI SetRiskRegister_RiskMitigationSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.riskRegister.riskMitigationSequence);

    CARAPI GetRiskRegister_RiskMitigationSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.riskRegister.riskMitigationSequence);


   CARAPI SetRiskRegister_StatementsOfRisksAssociated(
     /* [in] */ ArrayOf<const String&> CAdministration.riskRegister.statementsOfRisksAssociated);

    CARAPI GetRiskRegister_StatementsOfRisksAssociated(
     /* [out, callee] */ ArrayOf<String>* CAdministration.riskRegister.statementsOfRisksAssociated);


   CARAPI SetRiskRegister_RiskLikelihoodRating(
     /* [in] */ CHelper.riskLikelihoodOfOccurrenceRating CAdministration.riskRegister.riskLikelihoodRating);

    CARAPI GetRiskRegister_RiskLikelihoodRating(
     /* [out] */ CHelper.riskLikelihoodOfOccurrenceRating* CAdministration.riskRegister.riskLikelihoodRating);


   CARAPI SetRiskRegister_RiskConsequenceRating(
     /* [in] */ CHelper.riskConsequence CAdministration.riskRegister.riskConsequenceRating);

    CARAPI GetRiskRegister_RiskConsequenceRating(
     /* [out] */ CHelper.riskConsequence* CAdministration.riskRegister.riskConsequenceRating);


   CARAPI SetRiskRegister_ResidualRiskLevel(
     /* [in] */ CHelper.residualRiskLevel CAdministration.riskRegister.residualRiskLevel);

    CARAPI GetRiskRegister_ResidualRiskLevel(
     /* [out] */ CHelper.residualRiskLevel* CAdministration.riskRegister.residualRiskLevel);


   CARAPI SetRiskRegister_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.riskRegister.businessChannelOwnerId);

    CARAPI GetRiskRegister_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.riskRegister.businessChannelOwnerId);


   CARAPI SetRiskRegister_BranchId(
     /* [in] */ CAdministration.branch CAdministration.riskRegister.branchId);

    CARAPI GetRiskRegister_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.riskRegister.branchId);


   CARAPI SetRiskRegister_DeptId(
     /* [in] */ CAdministration.department CAdministration.riskRegister.deptId);

    CARAPI GetRiskRegister_DeptId(
     /* [out] */ CAdministration.department* CAdministration.riskRegister.deptId);


   CARAPI SetRiskRegister_RoleId(
     /* [in] */ CAdministration.role CAdministration.riskRegister.roleId);

    CARAPI GetRiskRegister_RoleId(
     /* [out] */ CAdministration.role* CAdministration.riskRegister.roleId);


   CARAPI SetRiskRegister_PropertyId(
     /* [in] */ CProperty.property CAdministration.riskRegister.propertyId);

    CARAPI GetRiskRegister_PropertyId(
     /* [out] */ CProperty.property* CAdministration.riskRegister.propertyId);


   CARAPI SetRiskRegister_PropertyConstructionTypeId(
     /* [in] */ CProperty.propertyConstructionType CAdministration.riskRegister.propertyConstructionTypeId);

    CARAPI GetRiskRegister_PropertyConstructionTypeId(
     /* [out] */ CProperty.propertyConstructionType* CAdministration.riskRegister.propertyConstructionTypeId);


   CARAPI SetRiskRegister_MasterAsset(
     /* [in] */ CFinance.masterAssetType CAdministration.riskRegister.masterAssetTypeId);

    CARAPI GetRiskRegister_MasterAsset(
     /* [out] */ CFinance.masterAssetType* CAdministration.riskRegister.masterAssetTypeId);


   CARAPI SetRiskRegister_MasterAsset(
     /* [in] */ CFinance.masterAssetRegister CAdministration.riskRegister.masterAssetId);

    CARAPI GetRiskRegister_MasterAsset(
     /* [out] */ CFinance.masterAssetRegister* CAdministration.riskRegister.masterAssetId);


   CARAPI SetRiskRegister_ProgramId(
     /* [in] */ CProperty.program CAdministration.riskRegister.programId);

    CARAPI GetRiskRegister_ProgramId(
     /* [out] */ CProperty.program* CAdministration.riskRegister.programId);


   CARAPI SetRiskRegister_ProjectId(
     /* [in] */ CProperty.project CAdministration.riskRegister.projectId);

    CARAPI GetRiskRegister_ProjectId(
     /* [out] */ CProperty.project* CAdministration.riskRegister.projectId);


   CARAPI SetRiskRegister_JobTypeId(
     /* [in] */ CAdministration.jobType CAdministration.riskRegister.jobTypeId);

    CARAPI GetRiskRegister_JobTypeId(
     /* [out] */ CAdministration.jobType* CAdministration.riskRegister.jobTypeId);


   CARAPI SetRiskRegister_JobId(
     /* [in] */ CAdministration.job CAdministration.riskRegister.jobId);

    CARAPI GetRiskRegister_JobId(
     /* [out] */ CAdministration.job* CAdministration.riskRegister.jobId);


   CARAPI SetRiskRegister_PurchaseOrderId(
     /* [in] */ realEstatePurchOrders CAdministration.riskRegister.purchaseOrderId);

    CARAPI GetRiskRegister_PurchaseOrderId(
     /* [out] */ realEstatePurchOrders* CAdministration.riskRegister.purchaseOrderId);


   CARAPI SetRiskRegister_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CAdministration.riskRegister.masterSalesOrderId);

    CARAPI GetRiskRegister_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CAdministration.riskRegister.masterSalesOrderId);


   CARAPI SetRiskRegister_AllocationId(
     /* [in] */ CProperty.allocation CAdministration.riskRegister.allocationId);

    CARAPI GetRiskRegister_AllocationId(
     /* [out] */ CProperty.allocation* CAdministration.riskRegister.allocationId);


   CARAPI SetRiskRegister_ComplaintId(
     /* [in] */ CCustomer.complaint CAdministration.riskRegister.complaintId);

    CARAPI GetRiskRegister_ComplaintId(
     /* [out] */ CCustomer.complaint* CAdministration.riskRegister.complaintId);


   CARAPI SetRiskRegister_ServiceTypeId(
     /* [in] */ CAdministration.serviceType CAdministration.riskRegister.serviceTypeId);

    CARAPI GetRiskRegister_ServiceTypeId(
     /* [out] */ CAdministration.serviceType* CAdministration.riskRegister.serviceTypeId);


   CARAPI SetRiskRegister_ItemTypeId(
     /* [in] */ CAdministration.itemType CAdministration.riskRegister.itemTypeId);

    CARAPI GetRiskRegister_ItemTypeId(
     /* [out] */ CAdministration.itemType* CAdministration.riskRegister.itemTypeId);


   CARAPI SetRiskRegister_ItemId(
     /* [in] */ CAdministration.item CAdministration.riskRegister.itemId);

    CARAPI GetRiskRegister_ItemId(
     /* [out] */ CAdministration.item* CAdministration.riskRegister.itemId);


   CARAPI SetRiskRegister_MaterialTypeId(
     /* [in] */ CFactory.materialType CAdministration.riskRegister.materialTypeId);

    CARAPI GetRiskRegister_MaterialTypeId(
     /* [out] */ CFactory.materialType* CAdministration.riskRegister.materialTypeId);


   CARAPI SetRiskRegister_MaterialId(
     /* [in] */ CFactory.material CAdministration.riskRegister.materialId);

    CARAPI GetRiskRegister_MaterialId(
     /* [out] */ CFactory.material* CAdministration.riskRegister.materialId);


   CARAPI SetRiskRegister_PartTypeId(
     /* [in] */ CFactory.partType CAdministration.riskRegister.partTypeId);

    CARAPI GetRiskRegister_PartTypeId(
     /* [out] */ CFactory.partType* CAdministration.riskRegister.partTypeId);


   CARAPI SetRiskRegister_PartId(
     /* [in] */ CFactory.part CAdministration.riskRegister.partId);

    CARAPI GetRiskRegister_PartId(
     /* [out] */ CFactory.part* CAdministration.riskRegister.partId);


   CARAPI SetRiskRegister_MinorSubAssemblyTypeId(
     /* [in] */ CFactory.minorsubassemblyType CAdministration.riskRegister.minorsubassemblyTypeId);

    CARAPI GetRiskRegister_MinorSubAssemblyTypeId(
     /* [out] */ CFactory.minorsubassemblyType* CAdministration.riskRegister.minorsubassemblyTypeId);


   CARAPI SetRiskRegister_MinorSubAssemblyId(
     /* [in] */ CFactory.minorsubassembly CAdministration.riskRegister.minorsubassemblyId);

    CARAPI GetRiskRegister_MinorSubAssemblyId(
     /* [out] */ CFactory.minorsubassembly* CAdministration.riskRegister.minorsubassemblyId);


   CARAPI SetRiskRegister_SubAssemblyTypeId(
     /* [in] */ CFactory.subassemblyType CAdministration.riskRegister.subassemblyTypeId);

    CARAPI GetRiskRegister_SubAssemblyTypeId(
     /* [out] */ CFactory.subassemblyType* CAdministration.riskRegister.subassemblyTypeId);


   CARAPI SetRiskRegister_SubAssemblyId(
     /* [in] */ CFactory.subassembly CAdministration.riskRegister.subassemblyId);

    CARAPI GetRiskRegister_SubAssemblyId(
     /* [out] */ CFactory.subassembly* CAdministration.riskRegister.subassemblyId);


   CARAPI SetRiskRegister_MajorSubAssemblyTypeId(
     /* [in] */ CFactory.majorsubassemblyType CAdministration.riskRegister.majorsubassemblyTypeId);

    CARAPI GetRiskRegister_MajorSubAssemblyTypeId(
     /* [out] */ CFactory.majorsubassemblyType* CAdministration.riskRegister.majorsubassemblyTypeId);


   CARAPI SetRiskRegister_MajorSubAssemblyId(
     /* [in] */ CFactory.majorsubassembly CAdministration.riskRegister.majorsubassemblyId);

    CARAPI GetRiskRegister_MajorSubAssemblyId(
     /* [out] */ CFactory.majorsubassembly* CAdministration.riskRegister.majorsubassemblyId);


   CARAPI SetRiskRegister_LesserAssemblyTypeId(
     /* [in] */ CFactory.lesserassemblyType CAdministration.riskRegister.lesserassemblyTypeId);

    CARAPI GetRiskRegister_LesserAssemblyTypeId(
     /* [out] */ CFactory.lesserassemblyType* CAdministration.riskRegister.lesserassemblyTypeId);


   CARAPI SetRiskRegister_LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CAdministration.riskRegister.lesserassemblyId);

    CARAPI GetRiskRegister_LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CAdministration.riskRegister.lesserassemblyId);


   CARAPI SetRiskRegister_AssemblyTypeId(
     /* [in] */ CFactory.assemblyType CAdministration.riskRegister.assemblyTypeId);

    CARAPI GetRiskRegister_AssemblyTypeId(
     /* [out] */ CFactory.assemblyType* CAdministration.riskRegister.assemblyTypeId);


   CARAPI SetRiskRegister_AssemblyId(
     /* [in] */ CFactory.assembly CAdministration.riskRegister.assemblyId);

    CARAPI GetRiskRegister_AssemblyId(
     /* [out] */ CFactory.assembly* CAdministration.riskRegister.assemblyId);


   CARAPI SetRiskRegister_GreaterAssemblyTypeId(
     /* [in] */ CFactory.greaterassemblyType CAdministration.riskRegister.greaterassemblyTypeId);

    CARAPI GetRiskRegister_GreaterAssemblyTypeId(
     /* [out] */ CFactory.greaterassemblyType* CAdministration.riskRegister.greaterassemblyTypeId);


   CARAPI SetRiskRegister_GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CAdministration.riskRegister.greaterassemblyId);

    CARAPI GetRiskRegister_GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CAdministration.riskRegister.greaterassemblyId);


   CARAPI SetRiskRegister_ProductTypeId(
     /* [in] */ CFactory.productType CAdministration.riskRegister.productTypeId);

    CARAPI GetRiskRegister_ProductTypeId(
     /* [out] */ CFactory.productType* CAdministration.riskRegister.productTypeId);


   CARAPI SetRiskRegister_ProductId(
     /* [in] */ CFactory.product CAdministration.riskRegister.productId);

    CARAPI GetRiskRegister_ProductId(
     /* [out] */ CFactory.product* CAdministration.riskRegister.productId);


   CARAPI SetRiskRegister_CustomerId(
     /* [in] */ CCustomer.customer CAdministration.riskRegister.customerId);

    CARAPI GetRiskRegister_CustomerId(
     /* [out] */ CCustomer.customer* CAdministration.riskRegister.customerId);


   CARAPI SetRiskRegister_CustomerTypeId(
     /* [in] */ CCustomer.customerType CAdministration.riskRegister.customerTypeId);

    CARAPI GetRiskRegister_CustomerTypeId(
     /* [out] */ CCustomer.customerType* CAdministration.riskRegister.customerTypeId);


   CARAPI SetRiskRegister_SupplierId(
     /* [in] */ CSupplier.supplier CAdministration.riskRegister.supplierId);

    CARAPI GetRiskRegister_SupplierId(
     /* [out] */ CSupplier.supplier* CAdministration.riskRegister.supplierId);


   CARAPI SetRiskRegister_SupplierTypeId(
     /* [in] */ CSupplier.supplierType CAdministration.riskRegister.supplierTypeId);

    CARAPI GetRiskRegister_SupplierTypeId(
     /* [out] */ CSupplier.supplierType* CAdministration.riskRegister.supplierTypeId);


   CARAPI SetRiskRegister_PartnerId(
     /* [in] */ CStakeholder.partner CAdministration.riskRegister.partnerId);

    CARAPI GetRiskRegister_PartnerId(
     /* [out] */ CStakeholder.partner* CAdministration.riskRegister.partnerId);


   CARAPI SetRiskRegister_MediaId(
     /* [in] */ CStakeholder.media CAdministration.riskRegister.mediaId);

    CARAPI GetRiskRegister_MediaId(
     /* [out] */ CStakeholder.media* CAdministration.riskRegister.mediaId);


   CARAPI SetRiskRegister_CommunityId(
     /* [in] */ CStakeholder.community CAdministration.riskRegister.communityId);

    CARAPI GetRiskRegister_CommunityId(
     /* [out] */ CStakeholder.community* CAdministration.riskRegister.communityId);


   CARAPI SetRiskRegister_BankId(
     /* [in] */ CFinance.bank CAdministration.riskRegister.bankId);

    CARAPI GetRiskRegister_BankId(
     /* [out] */ CFinance.bank* CAdministration.riskRegister.bankId);


   CARAPI SetRiskRegister_PropertyOwnerId(
     /* [in] */ CProperty.propertyOwner CAdministration.riskRegister.propertyOwnerId);

    CARAPI GetRiskRegister_PropertyOwnerId(
     /* [out] */ CProperty.propertyOwner* CAdministration.riskRegister.propertyOwnerId);


   CARAPI SetRiskRegister_ApplicantId(
     /* [in] */ CCustomer.applicant CAdministration.riskRegister.applicantId);

    CARAPI GetRiskRegister_ApplicantId(
     /* [out] */ CCustomer.applicant* CAdministration.riskRegister.applicantId);


   CARAPI SetRiskRegister_TenancyId(
     /* [in] */ CProperty.tenant CAdministration.riskRegister.tenancyId);

    CARAPI GetRiskRegister_TenancyId(
     /* [out] */ CProperty.tenant* CAdministration.riskRegister.tenancyId);


   CARAPI SetRiskRegister_EmployeeId(
     /* [in] */ CAdministration.staff CAdministration.riskRegister.employeeId);

    CARAPI GetRiskRegister_EmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.riskRegister.employeeId);


   CARAPI SetRiskRegister_SuperFundId(
     /* [in] */ CSupplier.superannuationFund CAdministration.riskRegister.superFundId);

    CARAPI GetRiskRegister_SuperFundId(
     /* [out] */ CSupplier.superannuationFund* CAdministration.riskRegister.superFundId);


   CARAPI SetRiskRegister_SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.riskRegister.solicitorIds);

    CARAPI GetRiskRegister_SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.riskRegister.solicitorIds);


   CARAPI SetRiskRegister_AgentTypeIds(
     /* [in] */ ArrayOf<CStakeholder.agentType> CAdministration.riskRegister.agentTypeIds);

    CARAPI GetRiskRegister_AgentTypeIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agentType>* CAdministration.riskRegister.agentTypeIds);


   CARAPI SetRiskRegister_AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.riskRegister.agentIds);

    CARAPI GetRiskRegister_AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.riskRegister.agentIds);


   CARAPI SetRiskRegister_NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.riskRegister.nonGovStakeholderIds);

    CARAPI GetRiskRegister_NonGovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.riskRegister.nonGovStakeholderIds);


   CARAPI SetRiskRegister_GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.riskRegister.govStakeholderIds);

    CARAPI GetRiskRegister_GovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.riskRegister.govStakeholderIds);


   CARAPI SetRiskRegister_CentrelinkId(
     /* [in] */ CFinance.centrelink CAdministration.riskRegister.centrelinkId);

    CARAPI GetRiskRegister_CentrelinkId(
     /* [out] */ CFinance.centrelink* CAdministration.riskRegister.centrelinkId);


   CARAPI SetRiskRegister_StateLAHAuthorityId(
     /* [in] */ CStakeholder.stateLAHAuthority CAdministration.riskRegister.stateLAHAuthorityId);

    CARAPI GetRiskRegister_StateLAHAuthorityId(
     /* [out] */ CStakeholder.stateLAHAuthority* CAdministration.riskRegister.stateLAHAuthorityId);


   CARAPI SetRiskRegister_StatePublicHousingAuthorityId(
     /* [in] */ CStakeholder.statePublicHousingAuthority CAdministration.riskRegister.statePublicHousingAuthorityId);

    CARAPI GetRiskRegister_StatePublicHousingAuthorityId(
     /* [out] */ CStakeholder.statePublicHousingAuthority* CAdministration.riskRegister.statePublicHousingAuthorityId);


   CARAPI SetRiskRegister_CommunityHousingRegulatorId(
     /* [in] */ CRegulator.communityHousingRegulator CAdministration.riskRegister.communityHousingRegulatorId);

    CARAPI GetRiskRegister_CommunityHousingRegulatorId(
     /* [out] */ CRegulator.communityHousingRegulator* CAdministration.riskRegister.communityHousingRegulatorId);


   CARAPI SetRiskRegister_ATOId(
     /* [in] */ CRegulator.aTO CAdministration.riskRegister.aTOId);

    CARAPI GetRiskRegister_ATOId(
     /* [out] */ CRegulator.aTO* CAdministration.riskRegister.aTOId);


   CARAPI SetRiskRegister_NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.riskRegister.natRegId);

    CARAPI GetRiskRegister_NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.riskRegister.natRegId);


   CARAPI SetRiskRegister_TribunalId(
     /* [in] */ CRegulator.nCAT CAdministration.riskRegister.tribunalId);

    CARAPI GetRiskRegister_TribunalId(
     /* [out] */ CRegulator.nCAT* CAdministration.riskRegister.tribunalId);


   CARAPI SetRiskRegister_ApplicationId(
     /* [in] */ CCustomer.application CAdministration.riskRegister.applicationId);

    CARAPI GetRiskRegister_ApplicationId(
     /* [out] */ CCustomer.application* CAdministration.riskRegister.applicationId);


   CARAPI SetRiskRegister_StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.riskRegister.stateBasedRegId);

    CARAPI GetRiskRegister_StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.riskRegister.stateBasedRegId);


   CARAPI SetRiskRegister_ItemTraderId(
     /* [in] */ itemTrader CAdministration.riskRegister.itemTraderId);

    CARAPI GetRiskRegister_ItemTraderId(
     /* [out] */ itemTrader* CAdministration.riskRegister.itemTraderId);


   CARAPI SetRiskRegister_TenancyCaseMngmntId(
     /* [in] */ CProperty.tenancyCaseManagement CAdministration.riskRegister.tenancyCaseMngmntId);

    CARAPI GetRiskRegister_TenancyCaseMngmntId(
     /* [out] */ CProperty.tenancyCaseManagement* CAdministration.riskRegister.tenancyCaseMngmntId);


   CARAPI SetRiskRegister_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.riskRegister.docRefIds);

    CARAPI GetRiskRegister_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.riskRegister.docRefIds);


   CARAPI SetRiskRegister_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.riskRegister.imageRefIds);

    CARAPI GetRiskRegister_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.riskRegister.imageRefIds);


   CARAPI SetRole_RoleId(
     /* [in] */ const String& CAdministration.role.roleId);

    CARAPI GetRole_RoleId(
     /* [out] */ String* CAdministration.role.roleId);


   CARAPI SetRole_RoleTitle(
     /* [in] */ const String& CAdministration.role.roleTitle);

    CARAPI GetRole_RoleTitle(
     /* [out] */ String* CAdministration.role.roleTitle);


   CARAPI SetRole_RoleDescription(
     /* [in] */ const String& CAdministration.role.roleDescription);

    CARAPI GetRole_RoleDescription(
     /* [out] */ String* CAdministration.role.roleDescription);


   CARAPI SetRole_EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.role.employeeIds);

    CARAPI GetRole_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.role.employeeIds);


   CARAPI SetRole_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.role.businessChannelOwnerId);

    CARAPI GetRole_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.role.businessChannelOwnerId);


   CARAPI SetRole_BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.role.branchIds);

    CARAPI GetRole_BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.role.branchIds);


   CARAPI SetRole_DeptIds(
     /* [in] */ ArrayOf<CAdministration.department> CAdministration.role.deptIds);

    CARAPI GetRole_DeptIds(
     /* [out, callee] */ ArrayOf<CAdministration.department>* CAdministration.role.deptIds);


   CARAPI SetRole_SubDeptIds(
     /* [in] */ ArrayOf<CAdministration.subdepartment> CAdministration.role.subDeptIds);

    CARAPI GetRole_SubDeptIds(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartment>* CAdministration.role.subDeptIds);


   CARAPI SetRole_SubDeptLevel2Ids(
     /* [in] */ ArrayOf<CAdministration.subdepartmentLevel2> CAdministration.role.subDeptLevel2Ids);

    CARAPI GetRole_SubDeptLevel2Ids(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartmentLevel2>* CAdministration.role.subDeptLevel2Ids);


   CARAPI SetRole_SubDeptLevel3Ids(
     /* [in] */ ArrayOf<CAdministration.subdepartmentLevel3> CAdministration.role.subDeptLevel3Ids);

    CARAPI GetRole_SubDeptLevel3Ids(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartmentLevel3>* CAdministration.role.subDeptLevel3Ids);


   CARAPI SetRole_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.role.docRefIds);

    CARAPI GetRole_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.role.docRefIds);


   CARAPI SetRole_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.role.imageRefIds);

    CARAPI GetRole_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.role.imageRefIds);


   CARAPI SetRole_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.role.videoRefIds);

    CARAPI GetRole_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.role.videoRefIds);


   CARAPI SetStaffRoleJoins_StaffRoleJoinsId(
     /* [in] */ const String& CAdministration.staffRoleJoins.staffRoleJoinsId);

    CARAPI GetStaffRoleJoins_StaffRoleJoinsId(
     /* [out] */ String* CAdministration.staffRoleJoins.staffRoleJoinsId);


   CARAPI SetStaffRoleJoins_RoleId(
     /* [in] */ CAdministration.role CAdministration.staffRoleJoins.roleId);

    CARAPI GetStaffRoleJoins_RoleId(
     /* [out] */ CAdministration.role* CAdministration.staffRoleJoins.roleId);


   CARAPI SetStaffRoleJoins_EmployeeId(
     /* [in] */ CAdministration.staff CAdministration.staffRoleJoins.employeeId);

    CARAPI GetStaffRoleJoins_EmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.staffRoleJoins.employeeId);


   CARAPI SetBusinessDirector_BusinessDirectorId(
     /* [in] */ const String& CAdministration.businessDirector.businessDirectorId);

    CARAPI GetBusinessDirector_BusinessDirectorId(
     /* [out] */ String* CAdministration.businessDirector.businessDirectorId);


   CARAPI SetBusinessDirector_FirstName(
     /* [in] */ const String& CAdministration.businessDirector.firstName);

    CARAPI GetBusinessDirector_FirstName(
     /* [out] */ String* CAdministration.businessDirector.firstName);


   CARAPI SetBusinessDirector_LastName(
     /* [in] */ const String& CAdministration.businessDirector.lastName);

    CARAPI GetBusinessDirector_LastName(
     /* [out] */ String* CAdministration.businessDirector.lastName);


   CARAPI SetBusinessDirector_ResidentialAddress(
     /* [in] */ const String& CAdministration.businessDirector.residentialAddress);

    CARAPI GetBusinessDirector_ResidentialAddress(
     /* [out] */ String* CAdministration.businessDirector.residentialAddress);


   CARAPI SetBusinessDirector_PostalAddress(
     /* [in] */ const String& CAdministration.businessDirector.postalAddress);

    CARAPI GetBusinessDirector_PostalAddress(
     /* [out] */ String* CAdministration.businessDirector.postalAddress);


   CARAPI SetBusinessDirector_Email(
     /* [in] */ const String& CAdministration.businessDirector.email);

    CARAPI GetBusinessDirector_Email(
     /* [out] */ String* CAdministration.businessDirector.email);


   CARAPI SetBusinessDirector_HomePhone(
     /* [in] */ Int32 CAdministration.businessDirector.homePhone);

    CARAPI GetBusinessDirector_HomePhone(
     /* [out] */ Int32* CAdministration.businessDirector.homePhone);


   CARAPI SetBusinessDirector_MobilePhone(
     /* [in] */ Int32 CAdministration.businessDirector.mobilePhone);

    CARAPI GetBusinessDirector_MobilePhone(
     /* [out] */ Int32* CAdministration.businessDirector.mobilePhone);


   CARAPI SetBusinessDirector_WorkPhone(
     /* [in] */ Int32 CAdministration.businessDirector.workPhone);

    CARAPI GetBusinessDirector_WorkPhone(
     /* [out] */ Int32* CAdministration.businessDirector.workPhone);


   CARAPI SetBusinessDirector_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CAdministration.businessDirector.contactedWithDetails);

    CARAPI GetBusinessDirector_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CAdministration.businessDirector.contactedWithDetails);


   CARAPI SetBusinessDirector_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.businessDirector.businessChannelOwnerId);

    CARAPI GetBusinessDirector_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.businessDirector.businessChannelOwnerId);


   CARAPI SetBusinessDirector_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.businessDirector.docRefIds);

    CARAPI GetBusinessDirector_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.businessDirector.docRefIds);


   CARAPI SetBusinessDirector_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.businessDirector.imageRefIds);

    CARAPI GetBusinessDirector_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.businessDirector.imageRefIds);


   CARAPI SetStaff_EmployeeId(
     /* [in] */ const String& CAdministration.staff.employeeId);

    CARAPI GetStaff_EmployeeId(
     /* [out] */ String* CAdministration.staff.employeeId);


   CARAPI SetStaff_OurBranchId(
     /* [in] */ const String& CAdministration.staff.ourBranchId);

    CARAPI GetStaff_OurBranchId(
     /* [out] */ String* CAdministration.staff.ourBranchId);


   CARAPI SetStaff_FirstName(
     /* [in] */ const String& CAdministration.staff.firstName);

    CARAPI GetStaff_FirstName(
     /* [out] */ String* CAdministration.staff.firstName);


   CARAPI SetStaff_LastName(
     /* [in] */ const String& CAdministration.staff.lastName);

    CARAPI GetStaff_LastName(
     /* [out] */ String* CAdministration.staff.lastName);


   CARAPI SetStaff_ResidentialAddress(
     /* [in] */ const String& CAdministration.staff.residentialAddress);

    CARAPI GetStaff_ResidentialAddress(
     /* [out] */ String* CAdministration.staff.residentialAddress);


   CARAPI SetStaff_PostalAddress(
     /* [in] */ const String& CAdministration.staff.postalAddress);

    CARAPI GetStaff_PostalAddress(
     /* [out] */ String* CAdministration.staff.postalAddress);


   CARAPI SetStaff_Email(
     /* [in] */ const String& CAdministration.staff.email);

    CARAPI GetStaff_Email(
     /* [out] */ String* CAdministration.staff.email);


   CARAPI SetStaff_HomePhone(
     /* [in] */ Int32 CAdministration.staff.homePhone);

    CARAPI GetStaff_HomePhone(
     /* [out] */ Int32* CAdministration.staff.homePhone);


   CARAPI SetStaff_MobilePhone(
     /* [in] */ Int32 CAdministration.staff.mobilePhone);

    CARAPI GetStaff_MobilePhone(
     /* [out] */ Int32* CAdministration.staff.mobilePhone);


   CARAPI SetStaff_WorkPhone(
     /* [in] */ Int32 CAdministration.staff.workPhone);

    CARAPI GetStaff_WorkPhone(
     /* [out] */ Int32* CAdministration.staff.workPhone);


   CARAPI SetStaff_ATOTFN(
     /* [in] */ Int32 CAdministration.staff.aTOTFN);

    CARAPI GetStaff_ATOTFN(
     /* [out] */ Int32* CAdministration.staff.aTOTFN);


   CARAPI SetStaff_TaxFreeThreshold(
     /* [in] */ Boolean CAdministration.staff.taxFreeThreshold);

    CARAPI GetStaff_TaxFreeThreshold(
     /* [out] */ Boolean* CAdministration.staff.taxFreeThreshold);


   CARAPI SetStaff_DocRefIds(
     /* [in] */ ArrayOf<const String&> CAdministration.staff.docRefIds);

    CARAPI GetStaff_DocRefIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.staff.docRefIds);


   CARAPI SetStaff_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CAdministration.staff.contactedWithDetails);

    CARAPI GetStaff_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CAdministration.staff.contactedWithDetails);


   CARAPI SetStaff_StaffImmedSuperRoleId(
     /* [in] */ CAdministration.role CAdministration.staff.staffImmedSuperRoleId);

    CARAPI GetStaff_StaffImmedSuperRoleId(
     /* [out] */ CAdministration.role* CAdministration.staff.staffImmedSuperRoleId);


   CARAPI SetStaff_PerformanceAgreementDocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.staff.performanceAgreementDocRefs);

    CARAPI GetStaff_PerformanceAgreementDocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.staff.performanceAgreementDocRefs);


   CARAPI SetStaff_RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.staff.roleIds);

    CARAPI GetStaff_RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.staff.roleIds);


   CARAPI SetStaff_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.staff.imageRefIds);

    CARAPI GetStaff_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.staff.imageRefIds);


   CARAPI SetStaff_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.staff.businessChannelOwnerId);

    CARAPI GetStaff_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.staff.businessChannelOwnerId);


   CARAPI SetServicePurchaseRequest_ServicePurchRequestId(
     /* [in] */ const String& CAdministration.servicePurchaseRequest.servicePurchRequestId);

    CARAPI GetServicePurchaseRequest_ServicePurchRequestId(
     /* [out] */ String* CAdministration.servicePurchaseRequest.servicePurchRequestId);


   CARAPI SetServicePurchaseRequest_MRQIdIfRentalProperty(
     /* [in] */ const String& CAdministration.servicePurchaseRequest.mRQIdIfRentalProperty);

    CARAPI GetServicePurchaseRequest_MRQIdIfRentalProperty(
     /* [out] */ String* CAdministration.servicePurchaseRequest.mRQIdIfRentalProperty);


   CARAPI SetServicePurchaseRequest_DamageCausedByCustomerTenantOthers(
     /* [in] */ Boolean CAdministration.servicePurchaseRequest.damageCausedByCustomerTenantOthers);

    CARAPI GetServicePurchaseRequest_DamageCausedByCustomerTenantOthers(
     /* [out] */ Boolean* CAdministration.servicePurchaseRequest.damageCausedByCustomerTenantOthers);


   CARAPI SetServicePurchaseRequest_OwnerResponsible(
     /* [in] */ Boolean CAdministration.servicePurchaseRequest.ownerResponsible);

    CARAPI GetServicePurchaseRequest_OwnerResponsible(
     /* [out] */ Boolean* CAdministration.servicePurchaseRequest.ownerResponsible);


   CARAPI SetServicePurchaseRequest_SummaryDescriptionOfProblemItemised(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.summaryDescriptionOfProblemItemised);

    CARAPI GetServicePurchaseRequest_SummaryDescriptionOfProblemItemised(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.summaryDescriptionOfProblemItemised);


   CARAPI SetServicePurchaseRequest_JobTypeSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.jobTypeSequence);

    CARAPI GetServicePurchaseRequest_JobTypeSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.jobTypeSequence);


   CARAPI SetServicePurchaseRequest_QuoteIdsIn(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.quoteIdsIn);

    CARAPI GetServicePurchaseRequest_QuoteIdsIn(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.quoteIdsIn);


   CARAPI SetServicePurchaseRequest_MostAppropriateQuotesReceived(
     /* [in] */ ArrayOf<Double> CAdministration.servicePurchaseRequest.mostAppropriateQuotesReceived);

    CARAPI GetServicePurchaseRequest_MostAppropriateQuotesReceived(
     /* [out, callee] */ ArrayOf<Double>* CAdministration.servicePurchaseRequest.mostAppropriateQuotesReceived);


   CARAPI SetServicePurchaseRequest_QuotesFinalised(
     /* [in] */ const String& CAdministration.servicePurchaseRequest.quotesFinalised);

    CARAPI GetServicePurchaseRequest_QuotesFinalised(
     /* [out] */ String* CAdministration.servicePurchaseRequest.quotesFinalised);


   CARAPI SetServicePurchaseRequest_RequestsToLandlordDocRefs(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.requestsToLandlordDocRefs);

    CARAPI GetServicePurchaseRequest_RequestsToLandlordDocRefs(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.requestsToLandlordDocRefs);


   CARAPI SetServicePurchaseRequest_RequestsSentDates(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.requestsSentDates);

    CARAPI GetServicePurchaseRequest_RequestsSentDates(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.requestsSentDates);


   CARAPI SetServicePurchaseRequest_JobTypeSequenceApproved(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.jobTypeSequenceApproved);

    CARAPI GetServicePurchaseRequest_JobTypeSequenceApproved(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.jobTypeSequenceApproved);


   CARAPI SetServicePurchaseRequest_TribunalIds(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.tribunalIds);

    CARAPI GetServicePurchaseRequest_TribunalIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.tribunalIds);


   CARAPI SetServicePurchaseRequest_JobIds(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.jobIds);

    CARAPI GetServicePurchaseRequest_JobIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.jobIds);


   CARAPI SetServicePurchaseRequest_PurchaseOrderIdSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.purchaseOrderIdSequence);

    CARAPI GetServicePurchaseRequest_PurchaseOrderIdSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.purchaseOrderIdSequence);


   CARAPI SetServicePurchaseRequest_PurchaseOrderSupplierIdSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.purchaseOrderSupplierIdSequence);

    CARAPI GetServicePurchaseRequest_PurchaseOrderSupplierIdSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.purchaseOrderSupplierIdSequence);


   CARAPI SetServicePurchaseRequest_ExpectedCompletionDate(
     /* [in] */ const String& CAdministration.servicePurchaseRequest.expectedCompletionDate);

    CARAPI GetServicePurchaseRequest_ExpectedCompletionDate(
     /* [out] */ String* CAdministration.servicePurchaseRequest.expectedCompletionDate);


   CARAPI SetServicePurchaseRequest_WorkCheckedPassed(
     /* [in] */ ArrayOf<Boolean> CAdministration.servicePurchaseRequest.workCheckedPassed);

    CARAPI GetServicePurchaseRequest_WorkCheckedPassed(
     /* [out, callee] */ ArrayOf<Boolean>* CAdministration.servicePurchaseRequest.workCheckedPassed);


   CARAPI SetServicePurchaseRequest_TotalMaintPurchOrderAmount(
     /* [in] */ Double CAdministration.servicePurchaseRequest.totalMaintPurchOrderAmount);

    CARAPI GetServicePurchaseRequest_TotalMaintPurchOrderAmount(
     /* [out] */ Double* CAdministration.servicePurchaseRequest.totalMaintPurchOrderAmount);


   CARAPI SetServicePurchaseRequest_MasLedgeFinTxNumsReturned(
     /* [in] */ ArrayOf<Int32> CAdministration.servicePurchaseRequest.masLedgeFinTxNumsReturned);

    CARAPI GetServicePurchaseRequest_MasLedgeFinTxNumsReturned(
     /* [out, callee] */ ArrayOf<Int32>* CAdministration.servicePurchaseRequest.masLedgeFinTxNumsReturned);


   CARAPI SetServicePurchaseRequest_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.servicePurchaseRequest.businessChannelOwnerId);

    CARAPI GetServicePurchaseRequest_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.servicePurchaseRequest.businessChannelOwnerId);


   CARAPI SetServicePurchaseRequest_PropertyId(
     /* [in] */ CProperty.property CAdministration.servicePurchaseRequest.propertyId);

    CARAPI GetServicePurchaseRequest_PropertyId(
     /* [out] */ CProperty.property* CAdministration.servicePurchaseRequest.propertyId);


   CARAPI SetServicePurchaseRequest_BranchId(
     /* [in] */ CAdministration.branch CAdministration.servicePurchaseRequest.branchId);

    CARAPI GetServicePurchaseRequest_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.servicePurchaseRequest.branchId);


   CARAPI SetServicePurchaseRequest_DeptId(
     /* [in] */ CAdministration.department CAdministration.servicePurchaseRequest.deptId);

    CARAPI GetServicePurchaseRequest_DeptId(
     /* [out] */ CAdministration.department* CAdministration.servicePurchaseRequest.deptId);


   CARAPI SetServicePurchaseRequest_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.servicePurchaseRequest.supplierIds);

    CARAPI GetServicePurchaseRequest_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.servicePurchaseRequest.supplierIds);


   CARAPI SetServicePurchaseRequest_ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CAdministration.servicePurchaseRequest.itemTypeIds);

    CARAPI GetServicePurchaseRequest_ItemTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CAdministration.servicePurchaseRequest.itemTypeIds);


   CARAPI SetServicePurchaseRequest_JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CAdministration.servicePurchaseRequest.jobTypeIds);

    CARAPI GetServicePurchaseRequest_JobTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.jobType>* CAdministration.servicePurchaseRequest.jobTypeIds);


   CARAPI SetServicePurchaseRequest_ServiceTypeIds(
     /* [in] */ ArrayOf<CAdministration.serviceType> CAdministration.servicePurchaseRequest.serviceTypeIds);

    CARAPI GetServicePurchaseRequest_ServiceTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.serviceType>* CAdministration.servicePurchaseRequest.serviceTypeIds);


   CARAPI SetServicePurchaseRequest_EmployeesRequestingIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.servicePurchaseRequest.employeesRequestingIds);

    CARAPI GetServicePurchaseRequest_EmployeesRequestingIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.servicePurchaseRequest.employeesRequestingIds);


   CARAPI SetServicePurchaseRequest_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.servicePurchaseRequest.docRefIds);

    CARAPI GetServicePurchaseRequest_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.servicePurchaseRequest.docRefIds);


   CARAPI SetServicePurchaseRequest_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.servicePurchaseRequest.imageRefIds);

    CARAPI GetServicePurchaseRequest_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.servicePurchaseRequest.imageRefIds);


   CARAPI SetServicePurchaseRequest_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.servicePurchaseRequest.audioRefIds);

    CARAPI GetServicePurchaseRequest_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.servicePurchaseRequest.audioRefIds);

   CARAPI SetTimesheet_TimesheetId(
     /* [in] */ const String& CAdministration.timesheet.timesheetId);

    CARAPI GetTimesheet_TimesheetId(
     /* [out] */ String* CAdministration.timesheet.timesheetId);


   CARAPI SetTimesheet_RosteredStarts(
     /* [in] */ ArrayOf<const String&> CAdministration.timesheet.rosteredStarts);

    CARAPI GetTimesheet_RosteredStarts(
     /* [out, callee] */ ArrayOf<String>* CAdministration.timesheet.rosteredStarts);


   CARAPI SetTimesheet_RosteredFinishes(
     /* [in] */ ArrayOf<const String&> CAdministration.timesheet.rosteredFinishes);

    CARAPI GetTimesheet_RosteredFinishes(
     /* [out, callee] */ ArrayOf<String>* CAdministration.timesheet.rosteredFinishes);


   CARAPI SetTimesheet_ActualStarts(
     /* [in] */ ArrayOf<const String&> CAdministration.timesheet.actualStarts);

    CARAPI GetTimesheet_ActualStarts(
     /* [out, callee] */ ArrayOf<String>* CAdministration.timesheet.actualStarts);


   CARAPI SetTimesheet_ActualFinishes(
     /* [in] */ ArrayOf<const String&> CAdministration.timesheet.actualFinishes);

    CARAPI GetTimesheet_ActualFinishes(
     /* [out, callee] */ ArrayOf<String>* CAdministration.timesheet.actualFinishes);


   CARAPI SetTimesheet_Submitted(
     /* [in] */ const String& CAdministration.timesheet.submitted);

    CARAPI GetTimesheet_Submitted(
     /* [out] */ String* CAdministration.timesheet.submitted);


   CARAPI SetTimesheet_Checked(
     /* [in] */ const String& CAdministration.timesheet.checked);

    CARAPI GetTimesheet_Checked(
     /* [out] */ String* CAdministration.timesheet.checked);


   CARAPI SetTimesheet_Passed(
     /* [in] */ Boolean CAdministration.timesheet.passed);

    CARAPI GetTimesheet_Passed(
     /* [out] */ Boolean* CAdministration.timesheet.passed);


   CARAPI SetTimesheet_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.timesheet.businessChannelOwnerId);

    CARAPI GetTimesheet_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.timesheet.businessChannelOwnerId);


   CARAPI SetTimesheet_EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.timesheet.employeeIds);

    CARAPI GetTimesheet_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.timesheet.employeeIds);


   CARAPI SetTimesheet_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.timesheet.docRefIds);

    CARAPI GetTimesheet_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.timesheet.docRefIds);


   CARAPI SetTimesheet_BranchId(
     /* [in] */ CAdministration.branch CAdministration.timesheet.branchId);

    CARAPI GetTimesheet_BranchId(
     /* [out] */ CAdministration.branch* CAdministration.timesheet.branchId);


   CARAPI SetWaitQueue_WaitQueueId(
     /* [in] */ const String& CAdministration.waitQueue.waitQueueId);

    CARAPI GetWaitQueue_WaitQueueId(
     /* [out] */ String* CAdministration.waitQueue.waitQueueId);


   CARAPI SetWaitQueue_QueueName(
     /* [in] */ const String& CAdministration.waitQueue.queueName);

    CARAPI GetWaitQueue_QueueName(
     /* [out] */ String* CAdministration.waitQueue.queueName);


   CARAPI SetWaitQueue_QueueCode(
     /* [in] */ const String& CAdministration.waitQueue.queueCode);

    CARAPI GetWaitQueue_QueueCode(
     /* [out] */ String* CAdministration.waitQueue.queueCode);


   CARAPI SetWaitQueue_QueueDescription(
     /* [in] */ const String& CAdministration.waitQueue.queueDescription);

    CARAPI GetWaitQueue_QueueDescription(
     /* [out] */ String* CAdministration.waitQueue.queueDescription);


   CARAPI SetWaitQueue_Notes(
     /* [in] */ const String& CAdministration.waitQueue.notes);

    CARAPI GetWaitQueue_Notes(
     /* [out] */ String* CAdministration.waitQueue.notes);


   CARAPI SetWaitQueue_AusState(
     /* [in] */ CHelper.ausState CAdministration.waitQueue.ausState);

    CARAPI GetWaitQueue_AusState(
     /* [out] */ CHelper.ausState* CAdministration.waitQueue.ausState);


   CARAPI SetWaitQueue_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.waitQueue.businessChannelOwnerId);

    CARAPI GetWaitQueue_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.waitQueue.businessChannelOwnerId);


   CARAPI SetWaitQueue_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.waitQueue.docRefIds);

    CARAPI GetWaitQueue_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.waitQueue.docRefIds);



protected:
    // Member variables
const String& mSetService_ServiceId
String* mGetService_ServiceId
const String& mSetService_ServiceName
String* mGetService_ServiceName
const String& mSetService_Description
String* mGetService_Description
Double mSetService_ServiceUnitsSupplied
Double* mGetService_ServiceUnitsSupplied
const String& mSetService_PricingUnits
String* mGetService_PricingUnits
Double mSetService_PriceRatePerUnit
Double* mGetService_PriceRatePerUnit
ArrayOf<const String&> mSetService_ItemIdsSupplied
ArrayOf<String>* mGetService_ItemIdsSupplied
ArrayOf<Double> mSetService_ItemQuantities
ArrayOf<Double>* mGetService_ItemQuantities
ArrayOf<CAdministration.staff> mSetService_EmployeeIds
ArrayOf<CAdministration.staff>* mGetService_EmployeeIds
ArrayOf<CSupplier.supplier> mSetService_SupplierIds
ArrayOf<CSupplier.supplier>* mGetService_SupplierIds
CAdministration.serviceType mSetService_ServiceTypeId
CAdministration.serviceType* mGetService_ServiceTypeId
ArrayOf<CAdministration.documents> mSetService_DocRefs
ArrayOf<CAdministration.documents>* mGetService_DocRefs
ArrayOf<CAdministration.images> mSetService_ImageRefs
ArrayOf<CAdministration.images>* mGetService_ImageRefs
ArrayOf<CAdministration.audio> mSetService_AudioRefIds
ArrayOf<CAdministration.audio>* mGetService_AudioRefIds
CCustomer.customer mSetService_CustomerId
CCustomer.customer* mGetService_CustomerId
CRegister.businessChannelOwner mSetService_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetService_BusinessChannelOwnerId
const String& mSetServiceType_ServiceTypeId
String* mGetServiceType_ServiceTypeId
const String& mSetServiceType_ServiceName
String* mGetServiceType_ServiceName
const String& mSetServiceType_Description
String* mGetServiceType_Description
const String& mSetServiceType_PriceRateUnits
String* mGetServiceType_PriceRateUnits
Double mSetServiceType_PriceRate
Double* mGetServiceType_PriceRate
ArrayOf<CAdministration.role> mSetServiceType_ProviderRoleIdsWithinEnterprise
ArrayOf<CAdministration.role>* mGetServiceType_ProviderRoleIdsWithinEnterprise
ArrayOf<CAdministration.branch> mSetServiceType_BranchIds
ArrayOf<CAdministration.branch>* mGetServiceType_BranchIds
ArrayOf<CAdministration.department> mSetServiceType_DeptIds
ArrayOf<CAdministration.department>* mGetServiceType_DeptIds
ArrayOf<CSupplier.supplier> mSetServiceType_ExternalProvidersIds
ArrayOf<CSupplier.supplier>* mGetServiceType_ExternalProvidersIds
ArrayOf<CSupplier.supplierType> mSetServiceType_SupplierTypeIds
ArrayOf<CSupplier.supplierType>* mGetServiceType_SupplierTypeIds
ArrayOf<CAdministration.itemType> mSetServiceType_ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetServiceType_ItemTypeIds
ArrayOf<CAdministration.jobType> mSetServiceType_JobTypeIds
ArrayOf<CAdministration.jobType>* mGetServiceType_JobTypeIds
ArrayOf<CAdministration.documents> mSetServiceType_DocRefs
ArrayOf<CAdministration.documents>* mGetServiceType_DocRefs
ArrayOf<CAdministration.images> mSetServiceType_ImageRefs
ArrayOf<CAdministration.images>* mGetServiceType_ImageRefs
ArrayOf<CAdministration.video> mSetServiceType_VideoRefs
ArrayOf<CAdministration.video>* mGetServiceType_VideoRefs
CRegister.businessChannelOwner mSetServiceType_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetServiceType_BusinessChannelOwnerId
const String& mSetServiceRequest_SRQId
String* mGetServiceRequest_SRQId
ArrayOf<const String&> mSetServiceRequest_ServiceSequenceDescription
ArrayOf<String>* mGetServiceRequest_ServiceSequenceDescription
ArrayOf<const String&> mSetServiceRequest_RequestsAccepted
ArrayOf<String>* mGetServiceRequest_RequestsAccepted
ArrayOf<Double> mSetServiceRequest_ItemQuantities
ArrayOf<Double>* mGetServiceRequest_ItemQuantities
ArrayOf<const String&> mSetServiceRequest_ItemUnits
ArrayOf<String>* mGetServiceRequest_ItemUnits
ArrayOf<const String&> mSetServiceRequest_DueDates
ArrayOf<String>* mGetServiceRequest_DueDates
ArrayOf<CAdministration.staff> mSetServiceRequest_RequestByStaffIds
ArrayOf<CAdministration.staff>* mGetServiceRequest_RequestByStaffIds
ArrayOf<CAdministration.documents> mSetServiceRequest_DocRefIds
ArrayOf<CAdministration.documents>* mGetServiceRequest_DocRefIds
ArrayOf<CAdministration.images> mSetServiceRequest_ImageRefIds
ArrayOf<CAdministration.images>* mGetServiceRequest_ImageRefIds
ArrayOf<CAdministration.audio> mSetServiceRequest_AudioRefIds
ArrayOf<CAdministration.audio>* mGetServiceRequest_AudioRefIds
ArrayOf<CAdministration.branch> mSetServiceRequest_BranchIdsInvolved
ArrayOf<CAdministration.branch>* mGetServiceRequest_BranchIdsInvolved
ArrayOf<CAdministration.department> mSetServiceRequest_DeptIdsInvolved
ArrayOf<CAdministration.department>* mGetServiceRequest_DeptIdsInvolved
ArrayOf<CAdministration.role> mSetServiceRequest_ResponsibleRoleIds
ArrayOf<CAdministration.role>* mGetServiceRequest_ResponsibleRoleIds
ArrayOf<CAdministration.staff> mSetServiceRequest_ResponsibleStaffIds
ArrayOf<CAdministration.staff>* mGetServiceRequest_ResponsibleStaffIds
ArrayOf<CAdministration.service> mSetServiceRequest_ServiceIds
ArrayOf<CAdministration.service>* mGetServiceRequest_ServiceIds
ArrayOf<CAdministration.serviceType> mSetServiceRequest_ServiceTypeIds
ArrayOf<CAdministration.serviceType>* mGetServiceRequest_ServiceTypeIds
ArrayOf<CAdministration.itemType> mSetServiceRequest_ItemTypeIdsRequired
ArrayOf<CAdministration.itemType>* mGetServiceRequest_ItemTypeIdsRequired
ArrayOf<CAdministration.jobType> mSetServiceRequest_JobTypeIdsRequired
ArrayOf<CAdministration.jobType>* mGetServiceRequest_JobTypeIdsRequired
ArrayOf<CProperty.property> mSetServiceRequest_PropertyIds
ArrayOf<CProperty.property>* mGetServiceRequest_PropertyIds
ArrayOf<CFinance.SetRegister> mSetServiceRequest_SetIds
ArrayOf<CFinance.SetRegister>* mGetServiceRequest_SetIds
ArrayOf<CCustomer.customer> mSetServiceRequest_CustomerIds
ArrayOf<CCustomer.customer>* mGetServiceRequest_CustomerIds
ArrayOf<CCustomer.customerType> mSetServiceRequest_CustomerTypesIds
ArrayOf<CCustomer.customerType>* mGetServiceRequest_CustomerTypesIds
CRegister.businessChannelOwner mSetServiceRequest_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetServiceRequest_BusinessChannelOwnerId
const String& mSetCorrespondenceLog_CorroId
String* mGetCorrespondenceLog_CorroId
const String& mSetCorrespondenceLog_ParticipantName
String* mGetCorrespondenceLog_ParticipantName
const String& mSetCorrespondenceLog_ParticipantId
String* mGetCorrespondenceLog_ParticipantId
const String& mSetCorrespondenceLog_Description
String* mGetCorrespondenceLog_Description
const String& mSetCorrespondenceLog_CorroReceived
String* mGetCorrespondenceLog_CorroReceived
ArrayOf<const String&> mSetCorrespondenceLog_PropertyIds
ArrayOf<String>* mGetCorrespondenceLog_PropertyIds
ArrayOf<const String&> mSetCorrespondenceLog_ResponseDocRefs
ArrayOf<String>* mGetCorrespondenceLog_ResponseDocRefs
const String& mSetCorrespondenceLog_RepliedWhen
String* mGetCorrespondenceLog_RepliedWhen
ArrayOf<const String&> mSetCorrespondenceLog_ResponsibilitiesParticpantsIds
ArrayOf<String>* mGetCorrespondenceLog_ResponsibilitiesParticpantsIds
ArrayOf<const String&> mSetCorrespondenceLog_ResponsibilitiesParticpantsNames
ArrayOf<String>* mGetCorrespondenceLog_ResponsibilitiesParticpantsNames
ArrayOf<const String&> mSetCorrespondenceLog_RequiredActions
ArrayOf<String>* mGetCorrespondenceLog_RequiredActions
CRegister.businessChannelOwner mSetCorrespondenceLog_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCorrespondenceLog_BusinessChannelOwnerId
CAdministration.branch mSetCorrespondenceLog_BranchId
CAdministration.branch* mGetCorrespondenceLog_BranchId
CAdministration.department mSetCorrespondenceLog_DeptId
CAdministration.department* mGetCorrespondenceLog_DeptId
ArrayOf<CSupplier.supplier> mSetCorrespondenceLog_SupplierIds
ArrayOf<CSupplier.supplier>* mGetCorrespondenceLog_SupplierIds
ArrayOf<CCustomer.customer> mSetCorrespondenceLog_CustomerIds
ArrayOf<CCustomer.customer>* mGetCorrespondenceLog_CustomerIds
ArrayOf<CStakeholder.partner> mSetCorrespondenceLog_PartnerIds
ArrayOf<CStakeholder.partner>* mGetCorrespondenceLog_PartnerIds
ArrayOf<CStakeholder.media> mSetCorrespondenceLog_MediaIds
ArrayOf<CStakeholder.media>* mGetCorrespondenceLog_MediaIds
ArrayOf<CStakeholder.community> mSetCorrespondenceLog_CommunityIds
ArrayOf<CStakeholder.community>* mGetCorrespondenceLog_CommunityIds
ArrayOf<CFinance.bank> mSetCorrespondenceLog_BankIds
ArrayOf<CFinance.bank>* mGetCorrespondenceLog_BankIds
ArrayOf<CProperty.propertyOwner> mSetCorrespondenceLog_PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetCorrespondenceLog_PropertyOwnerIds
ArrayOf<CCustomer.applicant> mSetCorrespondenceLog_ApplicantIds
ArrayOf<CCustomer.applicant>* mGetCorrespondenceLog_ApplicantIds
ArrayOf<CProperty.tenant> mSetCorrespondenceLog_TenancyIds
ArrayOf<CProperty.tenant>* mGetCorrespondenceLog_TenancyIds
ArrayOf<CAdministration.staff> mSetCorrespondenceLog_EmployeeIds
ArrayOf<CAdministration.staff>* mGetCorrespondenceLog_EmployeeIds
ArrayOf<CSupplier.superannuationFund> mSetCorrespondenceLog_SuperFundIds
ArrayOf<CSupplier.superannuationFund>* mGetCorrespondenceLog_SuperFundIds
ArrayOf<CSolicitor.solicitor> mSetCorrespondenceLog_SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetCorrespondenceLog_SolicitorIds
ArrayOf<CStakeholder.agent> mSetCorrespondenceLog_AgentIds
ArrayOf<CStakeholder.agent>* mGetCorrespondenceLog_AgentIds
ArrayOf<CStakeholder.nonGovStakeholder> mSetCorrespondenceLog_NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetCorrespondenceLog_NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetCorrespondenceLog_GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetCorrespondenceLog_GovStakeholderIds
CFinance.centrelink mSetCorrespondenceLog_CentrelinkId
CFinance.centrelink* mGetCorrespondenceLog_CentrelinkId
CStakeholder.stateLAHAuthority mSetCorrespondenceLog_StateLAHAuthorityId
CStakeholder.stateLAHAuthority* mGetCorrespondenceLog_StateLAHAuthorityId
CStakeholder.statePublicHousingAuthority mSetCorrespondenceLog_StatePublicHousingAuthorityId
CStakeholder.statePublicHousingAuthority* mGetCorrespondenceLog_StatePublicHousingAuthorityId
CRegulator.communityHousingRegulator mSetCorrespondenceLog_CommunityHousingRegulatorId
CRegulator.communityHousingRegulator* mGetCorrespondenceLog_CommunityHousingRegulatorId
CRegulator.aTO mSetCorrespondenceLog_ATOId
CRegulator.aTO* mGetCorrespondenceLog_ATOId
CRegulator.nationalRegulator mSetCorrespondenceLog_NatRegId
CRegulator.nationalRegulator* mGetCorrespondenceLog_NatRegId
CRegulator.nCAT mSetCorrespondenceLog_TribunalId
CRegulator.nCAT* mGetCorrespondenceLog_TribunalId
ArrayOf<CAdministration.documents> mSetCorrespondenceLog_DocRefs
ArrayOf<CAdministration.documents>* mGetCorrespondenceLog_DocRefs
ArrayOf<CAdministration.images> mSetCorrespondenceLog_ImageRefs
ArrayOf<CAdministration.images>* mGetCorrespondenceLog_ImageRefs
ArrayOf<CAdministration.audio> mSetCorrespondenceLog_AudioRefIds
ArrayOf<CAdministration.audio>* mGetCorrespondenceLog_AudioRefIds
ArrayOf<CAdministration.video> mSetCorrespondenceLog_VideoRefs
ArrayOf<CAdministration.video>* mGetCorrespondenceLog_VideoRefs
const String& mSetAdvertisingTemplatesPlans_AdvertDesignId
String* mGetAdvertisingTemplatesPlans_AdvertDesignId
const String& mSetAdvertisingTemplatesPlans_AdvertDesignName
String* mGetAdvertisingTemplatesPlans_AdvertDesignName
CHelper.advertisingMedium mSetAdvertisingTemplatesPlans_AdvertisingMedium
CHelper.advertisingMedium* mGetAdvertisingTemplatesPlans_AdvertisingMedium
ArrayOf<const String&> mSetAdvertisingTemplatesPlans_AccountsReceivableIds
ArrayOf<String>* mGetAdvertisingTemplatesPlans_AccountsReceivableIds
ArrayOf<const String&> mSetAdvertisingTemplatesPlans_AccountsPayableIds
ArrayOf<String>* mGetAdvertisingTemplatesPlans_AccountsPayableIds
Double mSetAdvertisingTemplatesPlans_BudgetedAmount
Double* mGetAdvertisingTemplatesPlans_BudgetedAmount
ArrayOf<const String&> mSetAdvertisingTemplatesPlans_DocRefsAdvertisingTemplatesPlans
ArrayOf<String>* mGetAdvertisingTemplatesPlans_DocRefsAdvertisingTemplatesPlans
ArrayOf<const String&> mSetAdvertisingTemplatesPlans_RunDateTimes
ArrayOf<String>* mGetAdvertisingTemplatesPlans_RunDateTimes
CProperty.property mSetAdvertisingTemplatesPlans_PropertyId
CProperty.property* mGetAdvertisingTemplatesPlans_PropertyId
ArrayOf<CProperty.propertyOwner> mSetAdvertisingTemplatesPlans_PropertyOwners
ArrayOf<CProperty.propertyOwner>* mGetAdvertisingTemplatesPlans_PropertyOwners
CProperty.advertisingBudgetSchedule mSetAdvertisingTemplatesPlans_AdvertScheduleId
CProperty.advertisingBudgetSchedule* mGetAdvertisingTemplatesPlans_AdvertScheduleId
CRegister.businessChannelOwner mSetAdvertisingTemplatesPlans_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAdvertisingTemplatesPlans_BusinessChannelOwnerId
CAdministration.branch mSetAdvertisingTemplatesPlans_BranchId
CAdministration.branch* mGetAdvertisingTemplatesPlans_BranchId
CAdministration.department mSetAdvertisingTemplatesPlans_DeptId
CAdministration.department* mGetAdvertisingTemplatesPlans_DeptId
const String& mSetBranch_BranchId
String* mGetBranch_BranchId
const String& mSetBranch_BranchName
String* mGetBranch_BranchName
const String& mSetBranch_BranchAddressLine1
String* mGetBranch_BranchAddressLine1
const String& mSetBranch_BranchAddressLine2
String* mGetBranch_BranchAddressLine2
const String& mSetBranch_BranchSuburb
String* mGetBranch_BranchSuburb
const String& mSetBranch_BranchPostcode
String* mGetBranch_BranchPostcode
const String& mSetBranch_BranchPhone
String* mGetBranch_BranchPhone
ArrayOf<CAdministration.role> mSetBranch_RoleIds
ArrayOf<CAdministration.role>* mGetBranch_RoleIds
ArrayOf<CAdministration.department> mSetBranch_DeptIds
ArrayOf<CAdministration.department>* mGetBranch_DeptIds
ArrayOf<CAdministration.subdepartment> mSetBranch_SubDeptIds
ArrayOf<CAdministration.subdepartment>* mGetBranch_SubDeptIds
ArrayOf<CAdministration.subdepartmentLevel2> mSetBranch_SubDeptLevel2Ids
ArrayOf<CAdministration.subdepartmentLevel2>* mGetBranch_SubDeptLevel2Ids
ArrayOf<CAdministration.subdepartmentLevel3> mSetBranch_SubDeptLevel3Ids
ArrayOf<CAdministration.subdepartmentLevel3>* mGetBranch_SubDeptLevel3Ids
CRegister.businessChannelOwner mSetBranch_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetBranch_BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetBranch_DocRefs
ArrayOf<CAdministration.documents>* mGetBranch_DocRefs
ArrayOf<CAdministration.images> mSetBranch_ImageRefs
ArrayOf<CAdministration.images>* mGetBranch_ImageRefs
ArrayOf<CAdministration.audio> mSetBranch_AudioRefIds
ArrayOf<CAdministration.audio>* mGetBranch_AudioRefIds
ArrayOf<CAdministration.video> mSetBranch_VideoRefs
ArrayOf<CAdministration.video>* mGetBranch_VideoRefs
const String& mSetDepartmentMap_DeptMapId
String* mGetDepartmentMap_DeptMapId
const String& mSetDepartmentMap_Description
String* mGetDepartmentMap_Description
CRegister.businessChannelOwner mSetDepartmentMap_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetDepartmentMap_BusinessChannelOwnerId
CAdministration.department mSetDepartmentMap_DepartmentId
CAdministration.department* mGetDepartmentMap_DepartmentId
CAdministration.subdepartment mSetDepartmentMap_SubDeptId
CAdministration.subdepartment* mGetDepartmentMap_SubDeptId
CAdministration.subdepartmentLevel2 mSetDepartmentMap_SubDeptLevel2Id
CAdministration.subdepartmentLevel2* mGetDepartmentMap_SubDeptLevel2Id
CAdministration.subdepartmentLevel3 mSetDepartmentMap_SubDeptLevel3Id
CAdministration.subdepartmentLevel3* mGetDepartmentMap_SubDeptLevel3Id
ArrayOf<CAdministration.staff> mSetDepartmentMap_HeadsDeptsSubDeptsEmployeeIdsDescending
ArrayOf<CAdministration.staff>* mGetDepartmentMap_HeadsDeptsSubDeptsEmployeeIdsDescending
ArrayOf<CAdministration.role> mSetDepartmentMap_RoleIds
ArrayOf<CAdministration.role>* mGetDepartmentMap_RoleIds
ArrayOf<CAdministration.branch> mSetDepartmentMap_BranchIds
ArrayOf<CAdministration.branch>* mGetDepartmentMap_BranchIds
ArrayOf<CAdministration.documents> mSetDepartmentMap_DocRefs
ArrayOf<CAdministration.documents>* mGetDepartmentMap_DocRefs
ArrayOf<CAdministration.images> mSetDepartmentMap_ImageRefs
ArrayOf<CAdministration.images>* mGetDepartmentMap_ImageRefs
ArrayOf<CAdministration.audio> mSetDepartmentMap_AudioRefIds
ArrayOf<CAdministration.audio>* mGetDepartmentMap_AudioRefIds
ArrayOf<CAdministration.video> mSetDepartmentMap_VideoRefs
ArrayOf<CAdministration.video>* mGetDepartmentMap_VideoRefs
const String& mSetDepartment_DeptId
String* mGetDepartment_DeptId
const String& mSetDepartment_DeptName
String* mGetDepartment_DeptName
ArrayOf<const String&> mSetDepartment_DeptAddressLine1
ArrayOf<String>* mGetDepartment_DeptAddressLine1
ArrayOf<const String&> mSetDepartment_DeptAddressLine2
ArrayOf<String>* mGetDepartment_DeptAddressLine2
ArrayOf<const String&> mSetDepartment_BranchSuburb
ArrayOf<String>* mGetDepartment_BranchSuburb
ArrayOf<const String&> mSetDepartment_BranchPostcode
ArrayOf<String>* mGetDepartment_BranchPostcode
ArrayOf<const String&> mSetDepartment_BranchPhone
ArrayOf<String>* mGetDepartment_BranchPhone
CAdministration.staff mSetDepartment_HeadDeptEmployeeId
CAdministration.staff* mGetDepartment_HeadDeptEmployeeId
ArrayOf<CAdministration.role> mSetDepartment_RoleIds
ArrayOf<CAdministration.role>* mGetDepartment_RoleIds
ArrayOf<CAdministration.branch> mSetDepartment_BranchIds
ArrayOf<CAdministration.branch>* mGetDepartment_BranchIds
CRegister.businessChannelOwner mSetDepartment_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetDepartment_BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetDepartment_DocRefs
ArrayOf<CAdministration.documents>* mGetDepartment_DocRefs
ArrayOf<CAdministration.images> mSetDepartment_ImageRefs
ArrayOf<CAdministration.images>* mGetDepartment_ImageRefs
ArrayOf<CAdministration.audio> mSetDepartment_AudioRefIds
ArrayOf<CAdministration.audio>* mGetDepartment_AudioRefIds
ArrayOf<CAdministration.video> mSetDepartment_VideoRefs
ArrayOf<CAdministration.video>* mGetDepartment_VideoRefs
const String& mSetSubDepartment_SubDeptId
String* mGetSubDepartment_SubDeptId
const String& mSetSubDepartment_SubDeptName
String* mGetSubDepartment_SubDeptName
ArrayOf<const String&> mSetSubDepartment_SubDeptAddressLine1
ArrayOf<String>* mGetSubDepartment_SubDeptAddressLine1
ArrayOf<const String&> mSetSubDepartment_SubDeptAddressLine2
ArrayOf<String>* mGetSubDepartment_SubDeptAddressLine2
ArrayOf<const String&> mSetSubDepartment_BranchSuburb
ArrayOf<String>* mGetSubDepartment_BranchSuburb
ArrayOf<const String&> mSetSubDepartment_BranchPostcode
ArrayOf<String>* mGetSubDepartment_BranchPostcode
ArrayOf<const String&> mSetSubDepartment_BranchPhone
ArrayOf<String>* mGetSubDepartment_BranchPhone
CAdministration.staff mSetSubDepartment_HeadSubDeptEmployeeId
CAdministration.staff* mGetSubDepartment_HeadSubDeptEmployeeId
ArrayOf<CAdministration.role> mSetSubDepartment_RoleIds
ArrayOf<CAdministration.role>* mGetSubDepartment_RoleIds
ArrayOf<CAdministration.branch> mSetSubDepartment_BranchIds
ArrayOf<CAdministration.branch>* mGetSubDepartment_BranchIds
CAdministration.department mSetSubDepartment_SupDeptId
CAdministration.department* mGetSubDepartment_SupDeptId
CRegister.businessChannelOwner mSetSubDepartment_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSubDepartment_BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetSubDepartment_DocRefs
ArrayOf<CAdministration.documents>* mGetSubDepartment_DocRefs
ArrayOf<CAdministration.images> mSetSubDepartment_ImageRefs
ArrayOf<CAdministration.images>* mGetSubDepartment_ImageRefs
ArrayOf<CAdministration.audio> mSetSubDepartment_AudioRefIds
ArrayOf<CAdministration.audio>* mGetSubDepartment_AudioRefIds
ArrayOf<CAdministration.video> mSetSubDepartment_VideoRefs
ArrayOf<CAdministration.video>* mGetSubDepartment_VideoRefs
const String& mSetSubDepartmentLevel2_SubDeptLevel2Id
String* mGetSubDepartmentLevel2_SubDeptLevel2Id
const String& mSetSubDepartmentLevel2_SubDeptLevel2Name
String* mGetSubDepartmentLevel2_SubDeptLevel2Name
ArrayOf<const String&> mSetSubDepartmentLevel2_SubDeptLevel2AddressLine1
ArrayOf<String>* mGetSubDepartmentLevel2_SubDeptLevel2AddressLine1
ArrayOf<const String&> mSetSubDepartmentLevel2_SubDeptLevel2AddressLine2
ArrayOf<String>* mGetSubDepartmentLevel2_SubDeptLevel2AddressLine2
ArrayOf<const String&> mSetSubDepartmentLevel2_BranchSuburb
ArrayOf<String>* mGetSubDepartmentLevel2_BranchSuburb
ArrayOf<const String&> mSetSubDepartmentLevel2_BranchPostcode
ArrayOf<String>* mGetSubDepartmentLevel2_BranchPostcode
ArrayOf<const String&> mSetSubDepartmentLevel2_BranchPhone
ArrayOf<String>* mGetSubDepartmentLevel2_BranchPhone
CAdministration.staff mSetSubDepartmentLevel2_HeadLevel2SubDeptEmployeeId
CAdministration.staff* mGetSubDepartmentLevel2_HeadLevel2SubDeptEmployeeId
ArrayOf<CAdministration.role> mSetSubDepartmentLevel2_RoleIds
ArrayOf<CAdministration.role>* mGetSubDepartmentLevel2_RoleIds
ArrayOf<CAdministration.branch> mSetSubDepartmentLevel2_BranchIds
ArrayOf<CAdministration.branch>* mGetSubDepartmentLevel2_BranchIds
CAdministration.subdepartment mSetSubDepartmentLevel2_SupSubDeptId
CAdministration.subdepartment* mGetSubDepartmentLevel2_SupSubDeptId
CRegister.businessChannelOwner mSetSubDepartmentLevel2_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSubDepartmentLevel2_BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetSubDepartmentLevel2_DocRefs
ArrayOf<CAdministration.documents>* mGetSubDepartmentLevel2_DocRefs
ArrayOf<CAdministration.images> mSetSubDepartmentLevel2_ImageRefs
ArrayOf<CAdministration.images>* mGetSubDepartmentLevel2_ImageRefs
ArrayOf<CAdministration.audio> mSetSubDepartmentLevel2_AudioRefIds
ArrayOf<CAdministration.audio>* mGetSubDepartmentLevel2_AudioRefIds
ArrayOf<CAdministration.video> mSetSubDepartmentLevel2_VideoRefs
ArrayOf<CAdministration.video>* mGetSubDepartmentLevel2_VideoRefs
const String& mSetSubDepartmentLevel3_SubDeptLevel3Id
String* mGetSubDepartmentLevel3_SubDeptLevel3Id
const String& mSetSubDepartmentLevel3_SubDeptLevel3Name
String* mGetSubDepartmentLevel3_SubDeptLevel3Name
ArrayOf<const String&> mSetSubDepartmentLevel3_SubDeptLevel3AddressLine1
ArrayOf<String>* mGetSubDepartmentLevel3_SubDeptLevel3AddressLine1
ArrayOf<const String&> mSetSubDepartmentLevel3_SubDeptLevel3AddressLine2
ArrayOf<String>* mGetSubDepartmentLevel3_SubDeptLevel3AddressLine2
ArrayOf<const String&> mSetSubDepartmentLevel3_BranchSuburb
ArrayOf<String>* mGetSubDepartmentLevel3_BranchSuburb
ArrayOf<const String&> mSetSubDepartmentLevel3_BranchPostcode
ArrayOf<String>* mGetSubDepartmentLevel3_BranchPostcode
ArrayOf<const String&> mSetSubDepartmentLevel3_BranchPhone
ArrayOf<String>* mGetSubDepartmentLevel3_BranchPhone
CAdministration.staff mSetSubDepartmentLevel3_HeadLevel2SubDeptEmployeeId
CAdministration.staff* mGetSubDepartmentLevel3_HeadLevel2SubDeptEmployeeId
ArrayOf<CAdministration.role> mSetSubDepartmentLevel3_RoleIds
ArrayOf<CAdministration.role>* mGetSubDepartmentLevel3_RoleIds
ArrayOf<CAdministration.branch> mSetSubDepartmentLevel3_BranchIds
ArrayOf<CAdministration.branch>* mGetSubDepartmentLevel3_BranchIds
CAdministration.subdepartmentLevel2 mSetSubDepartmentLevel3_SupSubDeptLevel2Id
CAdministration.subdepartmentLevel2* mGetSubDepartmentLevel3_SupSubDeptLevel2Id
CRegister.businessChannelOwner mSetSubDepartmentLevel3_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSubDepartmentLevel3_BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetSubDepartmentLevel3_DocRefs
ArrayOf<CAdministration.documents>* mGetSubDepartmentLevel3_DocRefs
ArrayOf<CAdministration.images> mSetSubDepartmentLevel3_ImageRefs
ArrayOf<CAdministration.images>* mGetSubDepartmentLevel3_ImageRefs
ArrayOf<CAdministration.audio> mSetSubDepartmentLevel3_AudioRefIds
ArrayOf<CAdministration.audio>* mGetSubDepartmentLevel3_AudioRefIds
ArrayOf<CAdministration.video> mSetSubDepartmentLevel3_VideoRefs
ArrayOf<CAdministration.video>* mGetSubDepartmentLevel3_VideoRefs
const String& mSetDocuments_DocRefId
String* mGetDocuments_DocRefId
const String& mSetDocuments_DocHash
String* mGetDocuments_DocHash
const String& mSetDocuments_MasLedgeFinTxId
String* mGetDocuments_MasLedgeFinTxId
const String& mSetDocuments_GenLedgeFinTxId
String* mGetDocuments_GenLedgeFinTxId
Int32 mSetDocuments_MasLedgeFinTxNum
Int32* mGetDocuments_MasLedgeFinTxNum
Int32 mSetDocuments_GenLedgeFinTxNum
Int32* mGetDocuments_GenLedgeFinTxNum
CRegister.businessChannelOwner mSetDocuments_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetDocuments_BusinessChannelOwnerId
CAdministration.branch mSetDocuments_BranchId
CAdministration.branch* mGetDocuments_BranchId
CAdministration.department mSetDocuments_DeptId
CAdministration.department* mGetDocuments_DeptId
CProperty.property mSetDocuments_PropertyId
CProperty.property* mGetDocuments_PropertyId
ArrayOf<CProperty.propertyOwner> mSetDocuments_PropOwners
ArrayOf<CProperty.propertyOwner>* mGetDocuments_PropOwners
ArrayOf<CFinance.SetRegister> mSetDocuments_MasterLedgerSetIds
ArrayOf<CFinance.SetRegister>* mGetDocuments_MasterLedgerSetIds
ArrayOf<CAdministration.staff> mSetDocuments_EmployeeIds
ArrayOf<CAdministration.staff>* mGetDocuments_EmployeeIds
ArrayOf<CProperty.tenant> mSetDocuments_TenancyIds
ArrayOf<CProperty.tenant>* mGetDocuments_TenancyIds
ArrayOf<CCustomer.customer> mSetDocuments_CustomerIds
ArrayOf<CCustomer.customer>* mGetDocuments_CustomerIds
ArrayOf<CSupplier.supplier> mSetDocuments_SupplierIds
ArrayOf<CSupplier.supplier>* mGetDocuments_SupplierIds
ArrayOf<CSolicitor.solicitor> mSetDocuments_SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetDocuments_SolicitorIds
ArrayOf<CStakeholder.agent> mSetDocuments_AgentIds
ArrayOf<CStakeholder.agent>* mGetDocuments_AgentIds
ArrayOf<CStakeholder.nonGovStakeholder> mSetDocuments_NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetDocuments_NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetDocuments_GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetDocuments_GovStakeholderIds
CStakeholder.stateLAHAuthority mSetDocuments_StateLAHCId
CStakeholder.stateLAHAuthority* mGetDocuments_StateLAHCId
CStakeholder.statePublicHousingAuthority mSetDocuments_StatePublicHousingAuthorityId
CStakeholder.statePublicHousingAuthority* mGetDocuments_StatePublicHousingAuthorityId
CRegulator.nCAT mSetDocuments_NCATId
CRegulator.nCAT* mGetDocuments_NCATId
CRegulator.rentalBondAuthority mSetDocuments_RentalBondAuthorityId
CRegulator.rentalBondAuthority* mGetDocuments_RentalBondAuthorityId
CRegulator.communityHousingRegulator mSetDocuments_CommunityHousingRegulatorId
CRegulator.communityHousingRegulator* mGetDocuments_CommunityHousingRegulatorId
ArrayOf<CStakeholder.community> mSetDocuments_CommunityIds
ArrayOf<CStakeholder.community>* mGetDocuments_CommunityIds
ArrayOf<CStakeholder.media> mSetDocuments_MediaIds
ArrayOf<CStakeholder.media>* mGetDocuments_MediaIds
ArrayOf<CStakeholder.partner> mSetDocuments_PartnerIds
ArrayOf<CStakeholder.partner>* mGetDocuments_PartnerIds
CRegulator.nationalRegulator mSetDocuments_NatRegId
CRegulator.nationalRegulator* mGetDocuments_NatRegId
CRegulator.stateBasedRegulator mSetDocuments_StateBasedRegId
CRegulator.stateBasedRegulator* mGetDocuments_StateBasedRegId
CProperty.propertyInspectionResidential mSetDocuments_PropertyInspectionResId
CProperty.propertyInspectionResidential* mGetDocuments_PropertyInspectionResId
CProperty.propertyInspectionCommercial mSetDocuments_PropertyInspectionCommercId
CProperty.propertyInspectionCommercial* mGetDocuments_PropertyInspectionCommercId
ArrayOf<CAdministration.service> mSetDocuments_ServiceIds
ArrayOf<CAdministration.service>* mGetDocuments_ServiceIds
ArrayOf<CAdministration.item> mSetDocuments_ItemIds
ArrayOf<CAdministration.item>* mGetDocuments_ItemIds
ArrayOf<CAdministration.job> mSetDocuments_JobIds
ArrayOf<CAdministration.job>* mGetDocuments_JobIds
ArrayOf<CAdministration.documents> mSetDocuments_DocRefIds
ArrayOf<CAdministration.documents>* mGetDocuments_DocRefIds
ArrayOf<CAdministration.images> mSetDocuments_ImageRefIds
ArrayOf<CAdministration.images>* mGetDocuments_ImageRefIds
ArrayOf<CAdministration.audio> mSetDocuments_AudioRefIds
ArrayOf<CAdministration.audio>* mGetDocuments_AudioRefIds
ArrayOf<CAdministration.video> mSetDocuments_VideoRefIds
ArrayOf<CAdministration.video>* mGetDocuments_VideoRefIds
const String& mSetImages_ImageRefId
String* mGetImages_ImageRefId
const String& mSetImages_ImageHash
String* mGetImages_ImageHash
CRegister.businessChannelOwner mSetImages_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetImages_BusinessChannelOwnerId
CAdministration.branch mSetImages_BranchId
CAdministration.branch* mGetImages_BranchId
CAdministration.department mSetImages_DeptId
CAdministration.department* mGetImages_DeptId
CProperty.property mSetImages_PropertyId
CProperty.property* mGetImages_PropertyId
ArrayOf<CProperty.propertyOwner> mSetImages_PropOwners
ArrayOf<CProperty.propertyOwner>* mGetImages_PropOwners
ArrayOf<CFinance.SetRegister> mSetImages_MasterLedgerSetIds
ArrayOf<CFinance.SetRegister>* mGetImages_MasterLedgerSetIds
ArrayOf<CAdministration.staff> mSetImages_EmployeeIds
ArrayOf<CAdministration.staff>* mGetImages_EmployeeIds
ArrayOf<CProperty.tenant> mSetImages_TenancyIds
ArrayOf<CProperty.tenant>* mGetImages_TenancyIds
ArrayOf<CCustomer.customer> mSetImages_CustomerIds
ArrayOf<CCustomer.customer>* mGetImages_CustomerIds
ArrayOf<CSupplier.supplier> mSetImages_SupplierIds
ArrayOf<CSupplier.supplier>* mGetImages_SupplierIds
ArrayOf<CSolicitor.solicitor> mSetImages_SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetImages_SolicitorIds
ArrayOf<CStakeholder.agent> mSetImages_AgentIds
ArrayOf<CStakeholder.agent>* mGetImages_AgentIds
ArrayOf<CStakeholder.nonGovStakeholder> mSetImages_NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetImages_NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetImages_GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetImages_GovStakeholderIds
CStakeholder.stateLAHAuthority mSetImages_StateLAHCId
CStakeholder.stateLAHAuthority* mGetImages_StateLAHCId
CStakeholder.statePublicHousingAuthority mSetImages_StatePublicHousingAuthorityId
CStakeholder.statePublicHousingAuthority* mGetImages_StatePublicHousingAuthorityId
CRegulator.nCAT mSetImages_NCATId
CRegulator.nCAT* mGetImages_NCATId
CRegulator.rentalBondAuthority mSetImages_RentalBondAuthorityId
CRegulator.rentalBondAuthority* mGetImages_RentalBondAuthorityId
CRegulator.communityHousingRegulator mSetImages_CommunityHousingRegulatorId
CRegulator.communityHousingRegulator* mGetImages_CommunityHousingRegulatorId
CStakeholder.community mSetImages_CommunityId
CStakeholder.community* mGetImages_CommunityId
CStakeholder.media mSetImages_MediaId
CStakeholder.media* mGetImages_MediaId
CStakeholder.partner mSetImages_PartnerId
CStakeholder.partner* mGetImages_PartnerId
CRegulator.nationalRegulator mSetImages_NatRegId
CRegulator.nationalRegulator* mGetImages_NatRegId
CRegulator.stateBasedRegulator mSetImages_StateBasedRegId
CRegulator.stateBasedRegulator* mGetImages_StateBasedRegId
CProperty.propertyInspectionResidential mSetImages_PropertyInspectionResId
CProperty.propertyInspectionResidential* mGetImages_PropertyInspectionResId
CProperty.propertyInspectionCommercial mSetImages_PropertyInspectionCommercId
CProperty.propertyInspectionCommercial* mGetImages_PropertyInspectionCommercId
ArrayOf<CAdministration.service> mSetImages_ServiceIds
ArrayOf<CAdministration.service>* mGetImages_ServiceIds
ArrayOf<CAdministration.item> mSetImages_ItemIds
ArrayOf<CAdministration.item>* mGetImages_ItemIds
ArrayOf<CAdministration.job> mSetImages_JobIds
ArrayOf<CAdministration.job>* mGetImages_JobIds
ArrayOf<CAdministration.documents> mSetImages_DocRefIds
ArrayOf<CAdministration.documents>* mGetImages_DocRefIds
ArrayOf<CAdministration.images> mSetImages_ImageRefIds
ArrayOf<CAdministration.images>* mGetImages_ImageRefIds
ArrayOf<CAdministration.audio> mSetImages_AudioRefIds
ArrayOf<CAdministration.audio>* mGetImages_AudioRefIds
ArrayOf<CAdministration.video> mSetImages_VideoRefIds
ArrayOf<CAdministration.video>* mGetImages_VideoRefIds
const String& mSetAudio_AudioRefId
String* mGetAudio_AudioRefId
const String& mSetAudio_AudioHash
String* mGetAudio_AudioHash
CRegister.businessChannelOwner mSetAudio_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAudio_BusinessChannelOwnerId
CAdministration.branch mSetAudio_BranchId
CAdministration.branch* mGetAudio_BranchId
CAdministration.mapOfdepartments mSetAudio_DeptMapId
CAdministration.mapOfdepartments* mGetAudio_DeptMapId
ArrayOf<CFinance.SetRegister> mSetAudio_GenSetIds
ArrayOf<CFinance.SetRegister>* mGetAudio_GenSetIds
ArrayOf<CAdministration.staff> mSetAudio_EmployeeIds
ArrayOf<CAdministration.staff>* mGetAudio_EmployeeIds
ArrayOf<CCustomer.customer> mSetAudio_CustomerIds
ArrayOf<CCustomer.customer>* mGetAudio_CustomerIds
ArrayOf<CSupplier.supplier> mSetAudio_SupplierIds
ArrayOf<CSupplier.supplier>* mGetAudio_SupplierIds
ArrayOf<CSolicitor.solicitor> mSetAudio_SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetAudio_SolicitorIds
ArrayOf<CStakeholder.agent> mSetAudio_AgentIds
ArrayOf<CStakeholder.agent>* mGetAudio_AgentIds
ArrayOf<CStakeholder.nonGovStakeholder> mSetAudio_NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetAudio_NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetAudio_GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetAudio_GovStakeholderIds
CRegulator.nCAT mSetAudio_NCATId
CRegulator.nCAT* mGetAudio_NCATId
CStakeholder.community mSetAudio_CommunityId
CStakeholder.community* mGetAudio_CommunityId
CStakeholder.media mSetAudio_MediaId
CStakeholder.media* mGetAudio_MediaId
CStakeholder.partner mSetAudio_PartnerId
CStakeholder.partner* mGetAudio_PartnerId
CRegulator.nationalRegulator mSetAudio_NatRegId
CRegulator.nationalRegulator* mGetAudio_NatRegId
CRegulator.stateBasedRegulator mSetAudio_StateBasedRegId
CRegulator.stateBasedRegulator* mGetAudio_StateBasedRegId
asCARAPI mSetAudio_SetInspectionCommercId
asCARAPI mGetAudio_SetInspectionCommercId
ArrayOf<CAdministration.service> mSetAudio_ServiceIds
ArrayOf<CAdministration.service>* mGetAudio_ServiceIds
ArrayOf<CAdministration.item> mSetAudio_ItemIds
ArrayOf<CAdministration.item>* mGetAudio_ItemIds
ArrayOf<CAdministration.job> mSetAudio_JobIds
ArrayOf<CAdministration.job>* mGetAudio_JobIds
ArrayOf<CAdministration.documents> mSetAudio_DocRefIds
ArrayOf<CAdministration.documents>* mGetAudio_DocRefIds
ArrayOf<CAdministration.images> mSetAudio_ImageRefIds
ArrayOf<CAdministration.images>* mGetAudio_ImageRefIds
ArrayOf<CAdministration.audio> mSetAudio_AudioRefIds
ArrayOf<CAdministration.audio>* mGetAudio_AudioRefIds
ArrayOf<CAdministration.video> mSetAudio_VideoRefIds
ArrayOf<CAdministration.video>* mGetAudio_VideoRefIds
const String& mSetVideo_VideoRefId
String* mGetVideo_VideoRefId
const String& mSetVideo_VideoHash
String* mGetVideo_VideoHash
CRegister.businessChannelOwner mSetVideo_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetVideo_BusinessChannelOwnerId
CAdministration.branch mSetVideo_BranchId
CAdministration.branch* mGetVideo_BranchId
CAdministration.department mSetVideo_DeptId
CAdministration.department* mGetVideo_DeptId
ArrayOf<CProperty.property> mSetVideo_PropertyIds
ArrayOf<CProperty.property>* mGetVideo_PropertyIds
ArrayOf<CProperty.propertyOwner> mSetVideo_PropOwners
ArrayOf<CProperty.propertyOwner>* mGetVideo_PropOwners
ArrayOf<CAdministration.staff> mSetVideo_EmployeeIds
ArrayOf<CAdministration.staff>* mGetVideo_EmployeeIds
ArrayOf<CProperty.tenant> mSetVideo_TenancyIds
ArrayOf<CProperty.tenant>* mGetVideo_TenancyIds
ArrayOf<CCustomer.customer> mSetVideo_CustomerIds
ArrayOf<CCustomer.customer>* mGetVideo_CustomerIds
ArrayOf<CSupplier.supplier> mSetVideo_SupplierIds
ArrayOf<CSupplier.supplier>* mGetVideo_SupplierIds
ArrayOf<CSolicitor.solicitor> mSetVideo_SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetVideo_SolicitorIds
ArrayOf<CStakeholder.agent> mSetVideo_AgentIds
ArrayOf<CStakeholder.agent>* mGetVideo_AgentIds
ArrayOf<CStakeholder.nonGovStakeholder> mSetVideo_NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetVideo_NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetVideo_GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetVideo_GovStakeholderIds
CStakeholder.stateLAHAuthority mSetVideo_StateLAHCId
CStakeholder.stateLAHAuthority* mGetVideo_StateLAHCId
CStakeholder.statePublicHousingAuthority mSetVideo_StatePublicHousingAuthorityId
CStakeholder.statePublicHousingAuthority* mGetVideo_StatePublicHousingAuthorityId
CRegulator.nCAT mSetVideo_NCATId
CRegulator.nCAT* mGetVideo_NCATId
CRegulator.rentalBondAuthority mSetVideo_RentalBondAuthorityId
CRegulator.rentalBondAuthority* mGetVideo_RentalBondAuthorityId
CRegulator.communityHousingRegulator mSetVideo_CommunityHousingRegulatorId
CRegulator.communityHousingRegulator* mGetVideo_CommunityHousingRegulatorId
CStakeholder.community mSetVideo_CommunityId
CStakeholder.community* mGetVideo_CommunityId
CStakeholder.media mSetVideo_MediaId
CStakeholder.media* mGetVideo_MediaId
CStakeholder.partner mSetVideo_PartnerId
CStakeholder.partner* mGetVideo_PartnerId
CRegulator.nationalRegulator mSetVideo_NatRegId
CRegulator.nationalRegulator* mGetVideo_NatRegId
CRegulator.stateBasedRegulator mSetVideo_StateBasedRegId
CRegulator.stateBasedRegulator* mGetVideo_StateBasedRegId
CProperty.propertyInspectionResidential mSetVideo_PropertyInspectionResId
CProperty.propertyInspectionResidential* mGetVideo_PropertyInspectionResId
CProperty.propertyInspectionCommercial mSetVideo_PropertyInspectionCommercId
CProperty.propertyInspectionCommercial* mGetVideo_PropertyInspectionCommercId
ArrayOf<CAdministration.service> mSetVideo_ServiceIds
ArrayOf<CAdministration.service>* mGetVideo_ServiceIds
ArrayOf<CAdministration.item> mSetVideo_ItemIds
ArrayOf<CAdministration.item>* mGetVideo_ItemIds
ArrayOf<CAdministration.job> mSetVideo_JobIds
ArrayOf<CAdministration.job>* mGetVideo_JobIds
ArrayOf<CAdministration.documents> mSetVideo_DocRefIds
ArrayOf<CAdministration.documents>* mGetVideo_DocRefIds
ArrayOf<CAdministration.images> mSetVideo_ImageRefIds
ArrayOf<CAdministration.images>* mGetVideo_ImageRefIds
ArrayOf<CAdministration.audio> mSetVideo_AudioRefIds
ArrayOf<CAdministration.audio>* mGetVideo_AudioRefIds
ArrayOf<CAdministration.video> mSetVideo_VideoRefIds
ArrayOf<CAdministration.video>* mGetVideo_VideoRefIds
const String& mSetItemType_ItemTypeId
String* mGetItemType_ItemTypeId
const String& mSetItemType_ItemTypeDescription
String* mGetItemType_ItemTypeDescription
const String& mSetItemType_ItemModelNumber
String* mGetItemType_ItemModelNumber
const String& mSetItemType_ItemName
String* mGetItemType_ItemName
Int32 mSetItemType_NumberInInventory
Int32* mGetItemType_NumberInInventory
CRegister.businessChannelOwner mSetItemType_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetItemType_BusinessChannelOwnerId
CFactory.productType mSetItemType_OurProductTypeId
CFactory.productType* mGetItemType_OurProductTypeId
CAdministration.branch mSetItemType_BranchId
CAdministration.branch* mGetItemType_BranchId
CAdministration.department mSetItemType_DeptId
CAdministration.department* mGetItemType_DeptId
ArrayOf<CSupplier.supplier> mSetItemType_Suppliers
ArrayOf<CSupplier.supplier>* mGetItemType_Suppliers
ArrayOf<CAdministration.service> mSetItemType_ServiceIds
ArrayOf<CAdministration.service>* mGetItemType_ServiceIds
ArrayOf<CSupplier.supplierType> mSetItemType_SupplierTypeIds
ArrayOf<CSupplier.supplierType>* mGetItemType_SupplierTypeIds
ArrayOf<CAdministration.documents> mSetItemType_DocRefIds
ArrayOf<CAdministration.documents>* mGetItemType_DocRefIds
ArrayOf<CAdministration.images> mSetItemType_ImageRefIds
ArrayOf<CAdministration.images>* mGetItemType_ImageRefIds
ArrayOf<CAdministration.video> mSetItemType_VideoRefIds
ArrayOf<CAdministration.video>* mGetItemType_VideoRefIds
const String& mSetItem_ItemId
String* mGetItem_ItemId
const String& mSetItem_ItemName
String* mGetItem_ItemName
const String& mSetItem_ItemDescription
String* mGetItem_ItemDescription
Boolean mSetItem_Fragile
Boolean* mGetItem_Fragile
Boolean mSetItem_Toxic
Boolean* mGetItem_Toxic
Boolean mSetItem_Corrosive
Boolean* mGetItem_Corrosive
const String& mSetItem_ItemModelNumber
String* mGetItem_ItemModelNumber
const String& mSetItem_ItemSerialNumber
String* mGetItem_ItemSerialNumber
Boolean mSetItem_ItemQualityDimensionsCheckedPassed
Boolean* mGetItem_ItemQualityDimensionsCheckedPassed
const String& mSetItem_PricePerItem
String* mGetItem_PricePerItem
CRegister.businessChannelOwner mSetItem_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetItem_BusinessChannelOwnerId
CFactory.product mSetItem_OurProductId
CFactory.product* mGetItem_OurProductId
CAdministration.branch mSetItem_BranchId
CAdministration.branch* mGetItem_BranchId
CAdministration.department mSetItem_DeptId
CAdministration.department* mGetItem_DeptId
CSupplier.supplier mSetItem_SupplierId
CSupplier.supplier* mGetItem_SupplierId
CAdministration.itemType mSetItem_ItemTypeId
CAdministration.itemType* mGetItem_ItemTypeId
ArrayOf<CAdministration.jobType> mSetItem_JobTypeIds
ArrayOf<CAdministration.jobType>* mGetItem_JobTypeIds
ArrayOf<CAdministration.documents> mSetItem_DocRefIds
ArrayOf<CAdministration.documents>* mGetItem_DocRefIds
ArrayOf<CAdministration.images> mSetItem_ImageRefIds
ArrayOf<CAdministration.images>* mGetItem_ImageRefIds
ArrayOf<CAdministration.video> mSetItem_VideoRefIds
ArrayOf<CAdministration.video>* mGetItem_VideoRefIds
const String& mSetJobType_JobTypeId
String* mGetJobType_JobTypeId
const String& mSetJobType_JobDescription
String* mGetJobType_JobDescription
const String& mSetJobType_JobCode
String* mGetJobType_JobCode
const String& mSetJobType_JobName
String* mGetJobType_JobName
ArrayOf<const String&> mSetJobType_TaskSequence
ArrayOf<String>* mGetJobType_TaskSequence
ArrayOf<const String&> mSetJobType_NatRegId
ArrayOf<String>* mGetJobType_NatRegId
ArrayOf<const String&> mSetJobType_StateBasedRegId
ArrayOf<String>* mGetJobType_StateBasedRegId
CRegister.businessChannelOwner mSetJobType_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetJobType_BusinessChannelOwnerId
CAdministration.branch mSetJobType_BranchId
CAdministration.branch* mGetJobType_BranchId
CAdministration.department mSetJobType_DeptId
CAdministration.department* mGetJobType_DeptId
ArrayOf<CSupplier.supplier> mSetJobType_Suppliers
ArrayOf<CSupplier.supplier>* mGetJobType_Suppliers
ArrayOf<CAdministration.itemType> mSetJobType_ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetJobType_ItemTypeIds
ArrayOf<CAdministration.documents> mSetJobType_DocRefIds
ArrayOf<CAdministration.documents>* mGetJobType_DocRefIds
ArrayOf<CAdministration.images> mSetJobType_ImageRefIds
ArrayOf<CAdministration.images>* mGetJobType_ImageRefIds
ArrayOf<CAdministration.video> mSetJobType_VideoRefIds
ArrayOf<CAdministration.video>* mGetJobType_VideoRefIds
const String& mSetJob_JobId
String* mGetJob_JobId
const String& mSetJob_JobDescription
String* mGetJob_JobDescription
ArrayOf<const String&> mSetJob_TaskDescriptionSequence
ArrayOf<String>* mGetJob_TaskDescriptionSequence
const String& mSetJob_JobCode
String* mGetJob_JobCode
const String& mSetJob_JobName
String* mGetJob_JobName
Int32 mSetJob_JobNum
Int32* mGetJob_JobNum
Boolean mSetJob_ResponsiveMaintenance
Boolean* mGetJob_ResponsiveMaintenance
Boolean mSetJob_PlannedMaintenance
Boolean* mGetJob_PlannedMaintenance
ArrayOf<Int32> mSetJob_ImmediatePrevJobNums
ArrayOf<Int32>* mGetJob_ImmediatePrevJobNums
ArrayOf<Boolean> mSetJob_ImmediatePrevJobsQCPass
ArrayOf<Boolean>* mGetJob_ImmediatePrevJobsQCPass
ArrayOf<const String&> mSetJob_DateTimeTaskStartSequence
ArrayOf<String>* mGetJob_DateTimeTaskStartSequence
ArrayOf<const String&> mSetJob_DateTimeTaskEndSequence
ArrayOf<String>* mGetJob_DateTimeTaskEndSequence
ArrayOf<const String&> mSetJob_ActualTaskStartTime
ArrayOf<String>* mGetJob_ActualTaskStartTime
ArrayOf<const String&> mSetJob_ActualTaskCompleteTime
ArrayOf<String>* mGetJob_ActualTaskCompleteTime
ArrayOf<Boolean> mSetJob_TaskCompletionQCPasses
ArrayOf<Boolean>* mGetJob_TaskCompletionQCPasses
Boolean mSetJob_JobCompletionQCPass
Boolean* mGetJob_JobCompletionQCPass
const String& mSetJob_NextJobTypeId
String* mGetJob_NextJobTypeId
ArrayOf<Boolean> mSetJob_TenantDamages
ArrayOf<Boolean>* mGetJob_TenantDamages
ArrayOf<Boolean> mSetJob_LesseeCustomerDamage
ArrayOf<Boolean>* mGetJob_LesseeCustomerDamage
CRegister.businessChannelOwner mSetJob_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetJob_BusinessChannelOwnerId
CAdministration.branch mSetJob_BranchId
CAdministration.branch* mGetJob_BranchId
CAdministration.department mSetJob_DeptId
CAdministration.department* mGetJob_DeptId
ArrayOf<CAdministration.documents> mSetJob_DocRefIds
ArrayOf<CAdministration.documents>* mGetJob_DocRefIds
ArrayOf<CAdministration.images> mSetJob_ImageRefIds
ArrayOf<CAdministration.images>* mGetJob_ImageRefIds
ArrayOf<CProperty.property> mSetJob_PropertyIds
ArrayOf<CProperty.property>* mGetJob_PropertyIds
CFinance.SetRegister mSetJob_MasterLedgerSetId
CFinance.SetRegister* mGetJob_MasterLedgerSetId
ArrayOf<CCustomer.customer> mSetJob_CustomerIds
ArrayOf<CCustomer.customer>* mGetJob_CustomerIds
ArrayOf<CAdministration.staff> mSetJob_EmployeeIds
ArrayOf<CAdministration.staff>* mGetJob_EmployeeIds
ArrayOf<CSupplier.supplier> mSetJob_SupplierIds
ArrayOf<CSupplier.supplier>* mGetJob_SupplierIds
CAdministration.jobType mSetJob_JobTypeId
CAdministration.jobType* mGetJob_JobTypeId
ArrayOf<CAdministration.itemType> mSetJob_ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetJob_ItemTypeIds
ArrayOf<CAdministration.item> mSetJob_ItemIds
ArrayOf<CAdministration.item>* mGetJob_ItemIds
ArrayOf<CAdministration.serviceType> mSetJob_ServiceTypeIds
ArrayOf<CAdministration.serviceType>* mGetJob_ServiceTypeIds
ArrayOf<CAdministration.service> mSetJob_ServiceIds
ArrayOf<CAdministration.service>* mGetJob_ServiceIds
ArrayOf<CFactory.materialType> mSetJob_MaterialTypeIds
ArrayOf<CFactory.materialType>* mGetJob_MaterialTypeIds
ArrayOf<CFactory.material> mSetJob_MaterialIds
ArrayOf<CFactory.material>* mGetJob_MaterialIds
ArrayOf<CFactory.partType> mSetJob_PartTypeIds
ArrayOf<CFactory.partType>* mGetJob_PartTypeIds
ArrayOf<CFactory.part> mSetJob_PartIds
ArrayOf<CFactory.part>* mGetJob_PartIds
ArrayOf<CFactory.minorsubassemblyType> mSetJob_MinorSubAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType>* mGetJob_MinorSubAssemblyTypeIds
ArrayOf<CFactory.minorsubassembly> mSetJob_MinorSubAssemblyIds
ArrayOf<CFactory.minorsubassembly>* mGetJob_MinorSubAssemblyIds
ArrayOf<CFactory.subassemblyType> mSetJob_SubAssemblyTypeIds
ArrayOf<CFactory.subassemblyType>* mGetJob_SubAssemblyTypeIds
ArrayOf<CFactory.subassembly> mSetJob_SubAssemblyIds
ArrayOf<CFactory.subassembly>* mGetJob_SubAssemblyIds
ArrayOf<CFactory.majorsubassemblyType> mSetJob_MajorSubAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType>* mGetJob_MajorSubAssemblyTypeIds
ArrayOf<CFactory.majorsubassembly> mSetJob_MajorSubAssemblyIds
ArrayOf<CFactory.majorsubassembly>* mGetJob_MajorSubAssemblyIds
ArrayOf<CFactory.lesserassemblyType> mSetJob_LesserAssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType>* mGetJob_LesserAssemblyTypeIds
ArrayOf<CFactory.lesserassembly> mSetJob_LesserAssemblyIds
ArrayOf<CFactory.lesserassembly>* mGetJob_LesserAssemblyIds
ArrayOf<CFactory.assemblyType> mSetJob_AssemblyTypeIds
ArrayOf<CFactory.assemblyType>* mGetJob_AssemblyTypeIds
ArrayOf<CFactory.assembly> mSetJob_AssemblyIds
ArrayOf<CFactory.assembly>* mGetJob_AssemblyIds
ArrayOf<CFactory.greaterassemblyType> mSetJob_GreaterAssemblyTypeIds
ArrayOf<CFactory.greaterassemblyType>* mGetJob_GreaterAssemblyTypeIds
ArrayOf<CFactory.greaterassembly> mSetJob_GreaterAssemblyIds
ArrayOf<CFactory.greaterassembly>* mGetJob_GreaterAssemblyIds
ArrayOf<CFactory.productType> mSetJob_ProductTypeIds
ArrayOf<CFactory.productType>* mGetJob_ProductTypeIds
ArrayOf<CFactory.product> mSetJob_ProductIds
ArrayOf<CFactory.product>* mGetJob_ProductIds
CFinance.masterSalesOrder mSetJob_MasterSalesOrderId
CFinance.masterSalesOrder* mGetJob_MasterSalesOrderId
realEstatePurchOrders mSetJob_PurchOrderId
realEstatePurchOrders* mGetJob_PurchOrderId
CRegulator.nationalRegulator mSetJob_NatRegId
CRegulator.nationalRegulator* mGetJob_NatRegId
CRegulator.stateBasedRegulator mSetJob_StateBasedRegId
CRegulator.stateBasedRegulator* mGetJob_StateBasedRegId
const String& mSetLeaveTypesCodes_LeaveId
String* mGetLeaveTypesCodes_LeaveId
const String& mSetLeaveTypesCodes_LeaveCode
String* mGetLeaveTypesCodes_LeaveCode
const String& mSetLeaveTypesCodes_LeaveDescription
String* mGetLeaveTypesCodes_LeaveDescription
const String& mSetLeaveTypesCodes_AwardName
String* mGetLeaveTypesCodes_AwardName
const String& mSetLeaveTypesCodes_Notes
String* mGetLeaveTypesCodes_Notes
CRegister.businessChannelOwner mSetLeaveTypesCodes_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLeaveTypesCodes_BusinessChannelOwnerId
CAdministration.branch mSetLeaveTypesCodes_BranchId
CAdministration.branch* mGetLeaveTypesCodes_BranchId
CAdministration.department mSetLeaveTypesCodes_DeptId
CAdministration.department* mGetLeaveTypesCodes_DeptId
ArrayOf<CAdministration.documents> mSetLeaveTypesCodes_DocRefIds
ArrayOf<CAdministration.documents>* mGetLeaveTypesCodes_DocRefIds
const String& mSetQuoteIn_QuoteInId
String* mGetQuoteIn_QuoteInId
ArrayOf<const String&> mSetQuoteIn_JobDescription
ArrayOf<String>* mGetQuoteIn_JobDescription
ArrayOf<const String&> mSetQuoteIn_JobTypeId
ArrayOf<String>* mGetQuoteIn_JobTypeId
ArrayOf<const String&> mSetQuoteIn_JobName
ArrayOf<String>* mGetQuoteIn_JobName
ArrayOf<const String&> mSetQuoteIn_ItemId
ArrayOf<String>* mGetQuoteIn_ItemId
ArrayOf<const String&> mSetQuoteIn_ConditionsUponCustomer
ArrayOf<String>* mGetQuoteIn_ConditionsUponCustomer
ArrayOf<Double> mSetQuoteIn_QuoteAmountEachJob
ArrayOf<Double>* mGetQuoteIn_QuoteAmountEachJob
Double mSetQuoteIn_QuoteTotalForOrder
Double* mGetQuoteIn_QuoteTotalForOrder
CRegister.businessChannelOwner mSetQuoteIn_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetQuoteIn_BusinessChannelOwnerId
CAdministration.branch mSetQuoteIn_BranchId
CAdministration.branch* mGetQuoteIn_BranchId
CAdministration.department mSetQuoteIn_DeptId
CAdministration.department* mGetQuoteIn_DeptId
CSupplier.supplier mSetQuoteIn_SupplierId
CSupplier.supplier* mGetQuoteIn_SupplierId
ArrayOf<CAdministration.documents> mSetQuoteIn_DocRefIds
ArrayOf<CAdministration.documents>* mGetQuoteIn_DocRefIds
ArrayOf<CAdministration.images> mSetQuoteIn_ImageRefIds
ArrayOf<CAdministration.images>* mGetQuoteIn_ImageRefIds
ArrayOf<CAdministration.video> mSetQuoteIn_VideoRefIds
ArrayOf<CAdministration.video>* mGetQuoteIn_VideoRefIds
realEstatePurchOrders mSetQuoteIn_PurchOrderId
realEstatePurchOrders* mGetQuoteIn_PurchOrderId
const String& mSetQuoteOut_QuoteOutId
String* mGetQuoteOut_QuoteOutId
ArrayOf<const String&> mSetQuoteOut_JobDescription
ArrayOf<String>* mGetQuoteOut_JobDescription
ArrayOf<const String&> mSetQuoteOut_JobTypeId
ArrayOf<String>* mGetQuoteOut_JobTypeId
ArrayOf<const String&> mSetQuoteOut_JobName
ArrayOf<String>* mGetQuoteOut_JobName
ArrayOf<const String&> mSetQuoteOut_ItemId
ArrayOf<String>* mGetQuoteOut_ItemId
ArrayOf<const String&> mSetQuoteOut_ConditionsUponCustomer
ArrayOf<String>* mGetQuoteOut_ConditionsUponCustomer
ArrayOf<Double> mSetQuoteOut_QuoteAmountEachJobItem
ArrayOf<Double>* mGetQuoteOut_QuoteAmountEachJobItem
Double mSetQuoteOut_QuoteTotalForOrder
Double* mGetQuoteOut_QuoteTotalForOrder
CRegister.businessChannelOwner mSetQuoteOut_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetQuoteOut_BusinessChannelOwnerId
CAdministration.branch mSetQuoteOut_BranchId
CAdministration.branch* mGetQuoteOut_BranchId
CAdministration.department mSetQuoteOut_DeptId
CAdministration.department* mGetQuoteOut_DeptId
ArrayOf<CAdministration.documents> mSetQuoteOut_DocRefIds
ArrayOf<CAdministration.documents>* mGetQuoteOut_DocRefIds
ArrayOf<CAdministration.images> mSetQuoteOut_ImageRefIds
ArrayOf<CAdministration.images>* mGetQuoteOut_ImageRefIds
ArrayOf<CAdministration.video> mSetQuoteOut_VideoRefIds
ArrayOf<CAdministration.video>* mGetQuoteOut_VideoRefIds
ArrayOf<CCustomer.customer> mSetQuoteOut_Customers
ArrayOf<CCustomer.customer>* mGetQuoteOut_Customers
CFinance.masterSalesOrder mSetQuoteOut_MasterSalesOrderId
CFinance.masterSalesOrder* mGetQuoteOut_MasterSalesOrderId
const String& mSetRiskRegister_RiskId
String* mGetRiskRegister_RiskId
CHelper.propertyType mSetRiskRegister_PropertyType
CHelper.propertyType* mGetRiskRegister_PropertyType
ArrayOf<const String&> mSetRiskRegister_RiskDescriptionSequence
ArrayOf<String>* mGetRiskRegister_RiskDescriptionSequence
ArrayOf<const String&> mSetRiskRegister_RiskMitigationSequence
ArrayOf<String>* mGetRiskRegister_RiskMitigationSequence
ArrayOf<const String&> mSetRiskRegister_StatementsOfRisksAssociated
ArrayOf<String>* mGetRiskRegister_StatementsOfRisksAssociated
CHelper.riskLikelihoodOfOccurrenceRating mSetRiskRegister_RiskLikelihoodRating
CHelper.riskLikelihoodOfOccurrenceRating* mGetRiskRegister_RiskLikelihoodRating
CHelper.riskConsequence mSetRiskRegister_RiskConsequenceRating
CHelper.riskConsequence* mGetRiskRegister_RiskConsequenceRating
CHelper.residualRiskLevel mSetRiskRegister_ResidualRiskLevel
CHelper.residualRiskLevel* mGetRiskRegister_ResidualRiskLevel
CRegister.businessChannelOwner mSetRiskRegister_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetRiskRegister_BusinessChannelOwnerId
CAdministration.branch mSetRiskRegister_BranchId
CAdministration.branch* mGetRiskRegister_BranchId
CAdministration.department mSetRiskRegister_DeptId
CAdministration.department* mGetRiskRegister_DeptId
CAdministration.role mSetRiskRegister_RoleId
CAdministration.role* mGetRiskRegister_RoleId
CProperty.property mSetRiskRegister_PropertyId
CProperty.property* mGetRiskRegister_PropertyId
CProperty.propertyConstructionType mSetRiskRegister_PropertyConstructionTypeId
CProperty.propertyConstructionType* mGetRiskRegister_PropertyConstructionTypeId
CFinance.SetType mSetRiskRegister_SetTypeId
CFinance.SetType* mGetRiskRegister_SetTypeId
CFinance.SetRegister mSetRiskRegister_SetId
CFinance.SetRegister* mGetRiskRegister_SetId
CProperty.program mSetRiskRegister_ProgramId
CProperty.program* mGetRiskRegister_ProgramId
CProperty.project mSetRiskRegister_ProjectId
CProperty.project* mGetRiskRegister_ProjectId
CAdministration.jobType mSetRiskRegister_JobTypeId
CAdministration.jobType* mGetRiskRegister_JobTypeId
CAdministration.job mSetRiskRegister_JobId
CAdministration.job* mGetRiskRegister_JobId
realEstatePurchOrders mSetRiskRegister_PurchaseOrderId
realEstatePurchOrders* mGetRiskRegister_PurchaseOrderId
CFinance.masterSalesOrder mSetRiskRegister_MasterSalesOrderId
CFinance.masterSalesOrder* mGetRiskRegister_MasterSalesOrderId
CProperty.allocation mSetRiskRegister_AllocationId
CProperty.allocation* mGetRiskRegister_AllocationId
CCustomer.complaint mSetRiskRegister_ComplaintId
CCustomer.complaint* mGetRiskRegister_ComplaintId
CAdministration.serviceType mSetRiskRegister_ServiceTypeId
CAdministration.serviceType* mGetRiskRegister_ServiceTypeId
CAdministration.itemType mSetRiskRegister_ItemTypeId
CAdministration.itemType* mGetRiskRegister_ItemTypeId
CAdministration.item mSetRiskRegister_ItemId
CAdministration.item* mGetRiskRegister_ItemId
CFactory.materialType mSetRiskRegister_MaterialTypeId
CFactory.materialType* mGetRiskRegister_MaterialTypeId
CFactory.material mSetRiskRegister_MaterialId
CFactory.material* mGetRiskRegister_MaterialId
CFactory.partType mSetRiskRegister_PartTypeId
CFactory.partType* mGetRiskRegister_PartTypeId
CFactory.part mSetRiskRegister_PartId
CFactory.part* mGetRiskRegister_PartId
CFactory.minorsubassemblyType mSetRiskRegister_MinorSubAssemblyTypeId
CFactory.minorsubassemblyType* mGetRiskRegister_MinorSubAssemblyTypeId
CFactory.minorsubassembly mSetRiskRegister_MinorSubAssemblyId
CFactory.minorsubassembly* mGetRiskRegister_MinorSubAssemblyId
CFactory.subassemblyType mSetRiskRegister_SubAssemblyTypeId
CFactory.subassemblyType* mGetRiskRegister_SubAssemblyTypeId
CFactory.subassembly mSetRiskRegister_SubAssemblyId
CFactory.subassembly* mGetRiskRegister_SubAssemblyId
CFactory.majorsubassemblyType mSetRiskRegister_MajorSubAssemblyTypeId
CFactory.majorsubassemblyType* mGetRiskRegister_MajorSubAssemblyTypeId
CFactory.majorsubassembly mSetRiskRegister_MajorSubAssemblyId
CFactory.majorsubassembly* mGetRiskRegister_MajorSubAssemblyId
CFactory.lesserassemblyType mSetRiskRegister_LesserAssemblyTypeId
CFactory.lesserassemblyType* mGetRiskRegister_LesserAssemblyTypeId
CFactory.lesserassembly mSetRiskRegister_LesserAssemblyId
CFactory.lesserassembly* mGetRiskRegister_LesserAssemblyId
CFactory.assemblyType mSetRiskRegister_AssemblyTypeId
CFactory.assemblyType* mGetRiskRegister_AssemblyTypeId
CFactory.assembly mSetRiskRegister_AssemblyId
CFactory.assembly* mGetRiskRegister_AssemblyId
CFactory.greaterassemblyType mSetRiskRegister_GreaterAssemblyTypeId
CFactory.greaterassemblyType* mGetRiskRegister_GreaterAssemblyTypeId
CFactory.greaterassembly mSetRiskRegister_GreaterAssemblyId
CFactory.greaterassembly* mGetRiskRegister_GreaterAssemblyId
CFactory.productType mSetRiskRegister_ProductTypeId
CFactory.productType* mGetRiskRegister_ProductTypeId
CFactory.product mSetRiskRegister_ProductId
CFactory.product* mGetRiskRegister_ProductId
CCustomer.customer mSetRiskRegister_CustomerId
CCustomer.customer* mGetRiskRegister_CustomerId
CCustomer.customerType mSetRiskRegister_CustomerTypeId
CCustomer.customerType* mGetRiskRegister_CustomerTypeId
CSupplier.supplier mSetRiskRegister_SupplierId
CSupplier.supplier* mGetRiskRegister_SupplierId
CSupplier.supplierType mSetRiskRegister_SupplierTypeId
CSupplier.supplierType* mGetRiskRegister_SupplierTypeId
CStakeholder.partner mSetRiskRegister_PartnerId
CStakeholder.partner* mGetRiskRegister_PartnerId
CStakeholder.media mSetRiskRegister_MediaId
CStakeholder.media* mGetRiskRegister_MediaId
CStakeholder.community mSetRiskRegister_CommunityId
CStakeholder.community* mGetRiskRegister_CommunityId
CFinance.bank mSetRiskRegister_BankId
CFinance.bank* mGetRiskRegister_BankId
CProperty.propertyOwner mSetRiskRegister_PropertyOwnerId
CProperty.propertyOwner* mGetRiskRegister_PropertyOwnerId
CCustomer.applicant mSetRiskRegister_ApplicantId
CCustomer.applicant* mGetRiskRegister_ApplicantId
CProperty.tenant mSetRiskRegister_TenancyId
CProperty.tenant* mGetRiskRegister_TenancyId
CAdministration.staff mSetRiskRegister_EmployeeId
CAdministration.staff* mGetRiskRegister_EmployeeId
CSupplier.superannuationFund mSetRiskRegister_SuperFundId
CSupplier.superannuationFund* mGetRiskRegister_SuperFundId
ArrayOf<CSolicitor.solicitor> mSetRiskRegister_SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetRiskRegister_SolicitorIds
ArrayOf<CStakeholder.agentType> mSetRiskRegister_AgentTypeIds
ArrayOf<CStakeholder.agentType>* mGetRiskRegister_AgentTypeIds
ArrayOf<CStakeholder.agent> mSetRiskRegister_AgentIds
ArrayOf<CStakeholder.agent>* mGetRiskRegister_AgentIds
ArrayOf<CStakeholder.nonGovStakeholder>* mSetRiskRegister_NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetRiskRegister_NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetRiskRegister_GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetRiskRegister_GovStakeholderIds
CFinance.centrelink mSetRiskRegister_CentrelinkId
CFinance.centrelink* mGetRiskRegister_CentrelinkId
CStakeholder.stateLAHAuthority mSetRiskRegister_StateLAHAuthorityId
CStakeholder.stateLAHAuthority* mGetRiskRegister_StateLAHAuthorityId
CStakeholder.statePublicHousingAuthority mSetRiskRegister_StatePublicHousingAuthorityId
CStakeholder.statePublicHousingAuthority* mGetRiskRegister_StatePublicHousingAuthorityId
CRegulator.communityHousingRegulator mSetRiskRegister_CommunityHousingRegulatorId
CRegulator.communityHousingRegulator* mGetRiskRegister_CommunityHousingRegulatorId
CRegulator.aTO mSetRiskRegister_ATOId
CRegulator.aTO* mGetRiskRegister_ATOId
CRegulator.nationalRegulator mSetRiskRegister_NatRegId
CRegulator.nationalRegulator* mGetRiskRegister_NatRegId
CRegulator.nCAT mSetRiskRegister_TribunalId
CRegulator.nCAT* mGetRiskRegister_TribunalId
CCustomer.application mSetRiskRegister_ApplicationId
CCustomer.application* mGetRiskRegister_ApplicationId
CRegulator.stateBasedRegulator mSetRiskRegister_StateBasedRegId
CRegulator.stateBasedRegulator* mGetRiskRegister_StateBasedRegId
itemTrader mSetRiskRegister_ItemTraderId
itemTrader* mGetRiskRegister_ItemTraderId
CProperty.tenancyCaseManagement mSetRiskRegister_TenancyCaseMngmntId
CProperty.tenancyCaseManagement* mGetRiskRegister_TenancyCaseMngmntId
ArrayOf<CAdministration.documents> mSetRiskRegister_DocRefIds
ArrayOf<CAdministration.documents>* mGetRiskRegister_DocRefIds
ArrayOf<CAdministration.images> mSetRiskRegister_ImageRefIds
ArrayOf<CAdministration.images>* mGetRiskRegister_ImageRefIds
const String& mSetRole_RoleId
String* mGetRole_RoleId
const String& mSetRole_RoleTitle
String* mGetRole_RoleTitle
const String& mSetRole_RoleDescription
String* mGetRole_RoleDescription
ArrayOf<CAdministration.staff> mSetRole_EmployeeIds
ArrayOf<CAdministration.staff>* mGetRole_EmployeeIds
CRegister.businessChannelOwner mSetRole_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetRole_BusinessChannelOwnerId
ArrayOf<CAdministration.branch> mSetRole_BranchIds
ArrayOf<CAdministration.branch>* mGetRole_BranchIds
ArrayOf<CAdministration.department> mSetRole_DeptIds
ArrayOf<CAdministration.department>* mGetRole_DeptIds
ArrayOf<CAdministration.subdepartment> mSetRole_SubDeptIds
ArrayOf<CAdministration.subdepartment>* mGetRole_SubDeptIds
ArrayOf<CAdministration.subdepartmentLevel2> mSetRole_SubDeptLevel2Ids
ArrayOf<CAdministration.subdepartmentLevel2>* mGetRole_SubDeptLevel2Ids
ArrayOf<CAdministration.subdepartmentLevel3> mSetRole_SubDeptLevel3Ids
ArrayOf<CAdministration.subdepartmentLevel3>* mGetRole_SubDeptLevel3Ids
ArrayOf<CAdministration.documents> mSetRole_DocRefIds
ArrayOf<CAdministration.documents>* mGetRole_DocRefIds
ArrayOf<CAdministration.images> mSetRole_ImageRefIds
ArrayOf<CAdministration.images>* mGetRole_ImageRefIds
ArrayOf<CAdministration.video> mSetRole_VideoRefIds
ArrayOf<CAdministration.video>* mGetRole_VideoRefIds
const String& mSetStaffRoleJoins_StaffRoleJoinsId
String* mGetStaffRoleJoins_StaffRoleJoinsId
CAdministration.role mSetStaffRoleJoins_RoleId
CAdministration.role* mGetStaffRoleJoins_RoleId
CAdministration.staff mSetStaffRoleJoins_EmployeeId
CAdministration.staff* mGetStaffRoleJoins_EmployeeId
const String& mSetBusinessDirector_BusinessDirectorId
String* mGetBusinessDirector_BusinessDirectorId
const String& mSetBusinessDirector_FirstName
String* mGetBusinessDirector_FirstName
const String& mSetBusinessDirector_LastName
String* mGetBusinessDirector_LastName
const String& mSetBusinessDirector_ResidentialAddress
String* mGetBusinessDirector_ResidentialAddress
const String& mSetBusinessDirector_PostalAddress
String* mGetBusinessDirector_PostalAddress
const String& mSetBusinessDirector_Email
String* mGetBusinessDirector_Email
Int32 mSetBusinessDirector_HomePhone
Int32* mGetBusinessDirector_HomePhone
Int32 mSetBusinessDirector_MobilePhone
Int32* mGetBusinessDirector_MobilePhone
Int32 mSetBusinessDirector_WorkPhone
Int32* mGetBusinessDirector_WorkPhone
ArrayOf<const String&> mSetBusinessDirector_ContactedWithDetails
ArrayOf<String>* mGetBusinessDirector_ContactedWithDetails
CRegister.businessChannelOwner mSetBusinessDirector_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetBusinessDirector_BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetBusinessDirector_DocRefIds
ArrayOf<CAdministration.documents>* mGetBusinessDirector_DocRefIds
ArrayOf<CAdministration.images> mSetBusinessDirector_ImageRefIds
ArrayOf<CAdministration.images>* mGetBusinessDirector_ImageRefIds
const String& mSetStaff_EmployeeId
String* mGetStaff_EmployeeId
const String& mSetStaff_OurBranchId
String* mGetStaff_OurBranchId
const String& mSetStaff_FirstName
String* mGetStaff_FirstName
const String& mSetStaff_LastName
String* mGetStaff_LastName
const String& mSetStaff_ResidentialAddress
String* mGetStaff_ResidentialAddress
const String& mSetStaff_PostalAddress
String* mGetStaff_PostalAddress
const String& mSetStaff_Email
String* mGetStaff_Email
Int32 mSetStaff_HomePhone
Int32* mGetStaff_HomePhone
Int32 mSetStaff_MobilePhone
Int32* mGetStaff_MobilePhone
Int32 mSetStaff_WorkPhone
Int32* mGetStaff_WorkPhone
Int32 mSetStaff_ATOTFN
Int32* mGetStaff_ATOTFN
Boolean mSetStaff_TaxFreeThreshold
Boolean* mGetStaff_TaxFreeThreshold
ArrayOf<const String&> mSetStaff_DocRefIds
ArrayOf<String>* mGetStaff_DocRefIds
ArrayOf<const String&> mSetStaff_ContactedWithDetails
ArrayOf<String>* mGetStaff_ContactedWithDetails
CAdministration.role mSetStaff_StaffImmedSuperRoleId
CAdministration.role* mGetStaff_StaffImmedSuperRoleId
ArrayOf<CAdministration.documents> mSetStaff_PerformanceAgreementDocRefs
ArrayOf<CAdministration.documents>* mGetStaff_PerformanceAgreementDocRefs
ArrayOf<CAdministration.role> mSetStaff_RoleIds
ArrayOf<CAdministration.role>* mGetStaff_RoleIds
ArrayOf<CAdministration.images> mSetStaff_ImageRefIds
ArrayOf<CAdministration.images>* mGetStaff_ImageRefIds
CRegister.businessChannelOwner mSetStaff_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStaff_BusinessChannelOwnerId
const String& mSetServicePurchaseRequest_ServicePurchRequestId
String* mGetServicePurchaseRequest_ServicePurchRequestId
const String& mSetServicePurchaseRequest_MRQIdIfRentalProperty
String* mGetServicePurchaseRequest_MRQIdIfRentalProperty
Boolean mSetServicePurchaseRequest_DamageCausedByCustomerTenantOthers
Boolean* mGetServicePurchaseRequest_DamageCausedByCustomerTenantOthers
Boolean mSetServicePurchaseRequest_OwnerResponsible
Boolean* mGetServicePurchaseRequest_OwnerResponsible
ArrayOf<const String&> mSetServicePurchaseRequest_SummaryDescriptionOfProblemItemised
ArrayOf<String>* mGetServicePurchaseRequest_SummaryDescriptionOfProblemItemised
ArrayOf<const String&> mSetServicePurchaseRequest_JobTypeSequence
ArrayOf<String>* mGetServicePurchaseRequest_JobTypeSequence
ArrayOf<const String&> mSetServicePurchaseRequest_QuoteIdsIn
ArrayOf<String>* mGetServicePurchaseRequest_QuoteIdsIn
ArrayOf<Double> mSetServicePurchaseRequest_MostAppropriateQuotesReceived
ArrayOf<Double>* mGetServicePurchaseRequest_MostAppropriateQuotesReceived
const String& mSetServicePurchaseRequest_QuotesFinalised
String* mGetServicePurchaseRequest_QuotesFinalised
ArrayOf<const String&> mSetServicePurchaseRequest_RequestsToLandlordDocRefs
ArrayOf<String>* mGetServicePurchaseRequest_RequestsToLandlordDocRefs
ArrayOf<const String&> mSetServicePurchaseRequest_RequestsSentDates
ArrayOf<String>* mGetServicePurchaseRequest_RequestsSentDates
ArrayOf<const String&> mSetServicePurchaseRequest_JobTypeSequenceApproved
ArrayOf<String>* mGetServicePurchaseRequest_JobTypeSequenceApproved
ArrayOf<const String&> mSetServicePurchaseRequest_TribunalIds
ArrayOf<String>* mGetServicePurchaseRequest_TribunalIds
ArrayOf<const String&> mSetServicePurchaseRequest_JobIds
ArrayOf<String>* mGetServicePurchaseRequest_JobIds
ArrayOf<const String&> mSetServicePurchaseRequest_PurchaseOrderIdSequence
ArrayOf<String>* mGetServicePurchaseRequest_PurchaseOrderIdSequence
ArrayOf<const String&> mSetServicePurchaseRequest_PurchaseOrderSupplierIdSequence
ArrayOf<String>* mGetServicePurchaseRequest_PurchaseOrderSupplierIdSequence
const String& mSetServicePurchaseRequest_ExpectedCompletionDate
String* mGetServicePurchaseRequest_ExpectedCompletionDate
ArrayOf<Boolean> mSetServicePurchaseRequest_WorkCheckedPassed
ArrayOf<Boolean>* mGetServicePurchaseRequest_WorkCheckedPassed
Double mSetServicePurchaseRequest_TotalMaintPurchOrderAmount
Double* mGetServicePurchaseRequest_TotalMaintPurchOrderAmount
ArrayOf<Int32> mSetServicePurchaseRequest_MasLedgeFinTxNumsReturned
ArrayOf<Int32>* mGetServicePurchaseRequest_MasLedgeFinTxNumsReturned
CRegister.businessChannelOwner mSetServicePurchaseRequest_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetServicePurchaseRequest_BusinessChannelOwnerId
CProperty.property mSetServicePurchaseRequest_PropertyId
CProperty.property* mGetServicePurchaseRequest_PropertyId
CAdministration.branch mSetServicePurchaseRequest_BranchId
CAdministration.branch* mGetServicePurchaseRequest_BranchId
CAdministration.department mSetServicePurchaseRequest_DeptId
CAdministration.department* mGetServicePurchaseRequest_DeptId
ArrayOf<CSupplier.supplier> mSetServicePurchaseRequest_SupplierIds
ArrayOf<CSupplier.supplier>* mGetServicePurchaseRequest_SupplierIds
ArrayOf<CAdministration.itemType> mSetServicePurchaseRequest_ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetServicePurchaseRequest_ItemTypeIds
ArrayOf<CAdministration.jobType> mSetServicePurchaseRequest_JobTypeIds
ArrayOf<CAdministration.jobType>* mGetServicePurchaseRequest_JobTypeIds
ArrayOf<CAdministration.serviceType> mSetServicePurchaseRequest_ServiceTypeIds
ArrayOf<CAdministration.serviceType>* mGetServicePurchaseRequest_ServiceTypeIds
ArrayOf<CAdministration.staff> mSetServicePurchaseRequest_EmployeesRequestingIds
ArrayOf<CAdministration.staff>* mGetServicePurchaseRequest_EmployeesRequestingIds
ArrayOf<CAdministration.documents> mSetServicePurchaseRequest_DocRefIds
ArrayOf<CAdministration.documents>* mGetServicePurchaseRequest_DocRefIds
ArrayOf<CAdministration.images> mSetServicePurchaseRequest_ImageRefIds
ArrayOf<CAdministration.images>* mGetServicePurchaseRequest_ImageRefIds
ArrayOf<CAdministration.audio> mSetServicePurchaseRequest_AudioRefIds
ArrayOf<CAdministration.audio>* mGetServicePurchaseRequest_AudioRefIds
const String& mSetTimesheet_TimesheetId
String* mGetTimesheet_TimesheetId
ArrayOf<const String&> mSetTimesheet_RosteredStarts
ArrayOf<String>* mGetTimesheet_RosteredStarts
ArrayOf<const String&> mSetTimesheet_RosteredFinishes
ArrayOf<String>* mGetTimesheet_RosteredFinishes
ArrayOf<const String&> mSetTimesheet_ActualStarts
ArrayOf<String>* mGetTimesheet_ActualStarts
ArrayOf<const String&> mSetTimesheet_ActualFinishes
ArrayOf<String>* mGetTimesheet_ActualFinishes
const String& mSetTimesheet_Submitted
String* mGetTimesheet_Submitted
const String& mSetTimesheet_Checked
String* mGetTimesheet_Checked
Boolean mSetTimesheet_Passed
Boolean* mGetTimesheet_Passed
CRegister.businessChannelOwner mSetTimesheet_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTimesheet_BusinessChannelOwnerId
ArrayOf<CAdministration.staff> mSetTimesheet_EmployeeIds
ArrayOf<CAdministration.staff>* mGetTimesheet_EmployeeIds
ArrayOf<CAdministration.documents> mSetTimesheet_DocRefIds
ArrayOf<CAdministration.documents>* mGetTimesheet_DocRefIds
CAdministration.branch mSetTimesheet_BranchId
CAdministration.branch* mGetTimesheet_BranchId
const String& mSetWaitQueue_WaitQueueId
String* mGetWaitQueue_WaitQueueId
const String& mSetWaitQueue_QueueName
String* mGetWaitQueue_QueueName
const String& mSetWaitQueue_QueueCode
String* mGetWaitQueue_QueueCode
const String& mSetWaitQueue_QueueDescription
String* mGetWaitQueue_QueueDescription
const String& mSetWaitQueue_Notes
String* mGetWaitQueue_Notes
CHelper.ausState mSetWaitQueue_AusState
CHelper.ausState* mGetWaitQueue_AusState
CRegister.businessChannelOwner mSetWaitQueue_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetWaitQueue_BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetWaitQueue_DocRefIds
ArrayOf<CAdministration.documents>* mGetWaitQueue_DocRefIds
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

