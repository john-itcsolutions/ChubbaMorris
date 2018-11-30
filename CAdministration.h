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
   

   CARAPI SetService.ServiceId(
     /* [in] */ const String& CAdministration.service.serviceId);

    CARAPI GetService.ServiceId(
     /* [out] */ String* CAdministration.service.serviceId);


   CARAPI SetService.ServiceName(
     /* [in] */ const String& CAdministration.service.serviceName);

    CARAPI GetService.ServiceName(
     /* [out] */ String* CAdministration.service.serviceName);


   CARAPI SetService.Description(
     /* [in] */ const String& CAdministration.service.description);

    CARAPI GetService.Description(
     /* [out] */ String* CAdministration.service.description);


   CARAPI SetService.ServiceUnitsSupplied(
     /* [in] */ Double CAdministration.service.serviceUnitsSupplied);

    CARAPI GetService.ServiceUnitsSupplied(
     /* [out] */ Double* CAdministration.service.serviceUnitsSupplied);


   CARAPI SetService.PricingUnits(
     /* [in] */ const String& CAdministration.service.pricingUnits);

    CARAPI GetService.PricingUnits(
     /* [out] */ String* CAdministration.service.pricingUnits);


   CARAPI SetService.PriceRatePerUnit(
     /* [in] */ Double CAdministration.service.priceRatePerUnit);

    CARAPI GetService.PriceRatePerUnit(
     /* [out] */ Double* CAdministration.service.priceRatePerUnit);


   CARAPI SetService.ItemIdsSupplied(
     /* [in] */ ArrayOf<const String&> CAdministration.service.itemIdsSupplied);

    CARAPI GetService.ItemIdsSupplied(
     /* [out, callee] */ ArrayOf<String>* CAdministration.service.itemIdsSupplied);


   CARAPI SetService.ItemQuantities(
     /* [in] */ ArrayOf<Double> CAdministration.service.itemQuantities);

    CARAPI GetService.ItemQuantities(
     /* [out, callee] */ ArrayOf<Double>* CAdministration.service.itemQuantities);


   CARAPI SetService.EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.service.employeeIds);

    CARAPI GetService.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.service.employeeIds);


   CARAPI SetService.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.service.supplierIds);

    CARAPI GetService.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.service.supplierIds);


   CARAPI SetService.ServiceTypeId(
     /* [in] */ CAdministration.serviceType CAdministration.service.serviceTypeId);

    CARAPI GetService.ServiceTypeId(
     /* [out] */ CAdministration.serviceType* CAdministration.service.serviceTypeId);


   CARAPI SetService.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.service.docRefs);

    CARAPI GetService.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.service.docRefs);


   CARAPI SetService.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.service.imageRefs);

    CARAPI GetService.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.service.imageRefs);


   CARAPI SetService.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.service.audioRefIds);

    CARAPI GetService.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.service.audioRefIds);


   CARAPI SetService.CustomerId(
     /* [in] */ CCustomer.customer CAdministration.service.customerId);

    CARAPI GetService.CustomerId(
     /* [out] */ CCustomer.customer* CAdministration.service.customerId);


   CARAPI SetService.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.service.businessChannelOwnerId);

    CARAPI GetService.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.service.businessChannelOwnerId);


   CARAPI SetServiceType.ServiceTypeId(
     /* [in] */ const String& CAdministration.serviceType.serviceTypeId);

    CARAPI GetServiceType.ServiceTypeId(
     /* [out] */ String* CAdministration.serviceType.serviceTypeId);


   CARAPI SetServiceType.ServiceName(
     /* [in] */ const String& CAdministration.serviceType.serviceName);

    CARAPI GetServiceType.ServiceName(
     /* [out] */ String* CAdministration.serviceType.serviceName);


   CARAPI SetServiceType.Description(
     /* [in] */ const String& CAdministration.serviceType.description);

    CARAPI GetServiceType.Description(
     /* [out] */ String* CAdministration.serviceType.description);


   CARAPI SetServiceType.PriceRateUnits(
     /* [in] */ const String& CAdministration.serviceType.priceRateUnits);

    CARAPI GetServiceType.PriceRateUnits(
     /* [out] */ String* CAdministration.serviceType.priceRateUnits);


   CARAPI SetServiceType.PriceRate(
     /* [in] */ Double CAdministration.serviceType.priceRate);

    CARAPI GetServiceType.PriceRate(
     /* [out] */ Double* CAdministration.serviceType.priceRate);


   CARAPI SetServiceType.ProviderRoleIdsWithinEnterprise(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.serviceType.providerRoleIdsWithinEnterprise);

    CARAPI GetServiceType.ProviderRoleIdsWithinEnterprise(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.serviceType.providerRoleIdsWithinEnterprise);


   CARAPI SetServiceType.BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.serviceType.branchIds);

    CARAPI GetServiceType.BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.serviceType.branchIds);


   CARAPI SetServiceType.DeptIds(
     /* [in] */ ArrayOf<CAdministration.department> CAdministration.serviceType.deptIds);

    CARAPI GetServiceType.DeptIds(
     /* [out, callee] */ ArrayOf<CAdministration.department>* CAdministration.serviceType.deptIds);


   CARAPI SetServiceType.ExternalProvidersIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.serviceType.externalProvidersIds);

    CARAPI GetServiceType.ExternalProvidersIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.serviceType.externalProvidersIds);


   CARAPI SetServiceType.SupplierTypeIds(
     /* [in] */ ArrayOf<CSupplier.supplierType> CAdministration.serviceType.supplierTypeIds);

    CARAPI GetServiceType.SupplierTypeIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplierType>* CAdministration.serviceType.supplierTypeIds);


   CARAPI SetServiceType.ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CAdministration.serviceType.itemTypeIds);

    CARAPI GetServiceType.ItemTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CAdministration.serviceType.itemTypeIds);


   CARAPI SetServiceType.JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CAdministration.serviceType.jobTypeIds);

    CARAPI GetServiceType.JobTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.jobType>* CAdministration.serviceType.jobTypeIds);


   CARAPI SetServiceType.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.serviceType.docRefs);

    CARAPI GetServiceType.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.serviceType.docRefs);


   CARAPI SetServiceType.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.serviceType.imageRefs);

    CARAPI GetServiceType.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.serviceType.imageRefs);


   CARAPI SetServiceType.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.serviceType.videoRefs);

    CARAPI GetServiceType.VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.serviceType.videoRefs);


   CARAPI SetServiceType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.serviceType.businessChannelOwnerId);

    CARAPI GetServiceType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.serviceType.businessChannelOwnerId);


   CARAPI SetServiceRequest.SRQId(
     /* [in] */ const String& CAdministration.serviceRequest.sRQId);

    CARAPI GetServiceRequest.SRQId(
     /* [out] */ String* CAdministration.serviceRequest.sRQId);


   CARAPI SetServiceRequest.ServiceSequenceDescription(
     /* [in] */ ArrayOf<const String&> CAdministration.serviceRequest.serviceSequenceDescription);

    CARAPI GetServiceRequest.ServiceSequenceDescription(
     /* [out, callee] */ ArrayOf<String>* CAdministration.serviceRequest.serviceSequenceDescription);


   CARAPI SetServiceRequest.RequestsAccepted(
     /* [in] */ ArrayOf<const String&> CAdministration.serviceRequest.requestsAccepted);

    CARAPI GetServiceRequest.RequestsAccepted(
     /* [out, callee] */ ArrayOf<String>* CAdministration.serviceRequest.requestsAccepted);


   CARAPI SetServiceRequest.ItemQuantities(
     /* [in] */ ArrayOf<Double> CAdministration.serviceRequest.itemQuantities);

    CARAPI GetServiceRequest.ItemQuantities(
     /* [out, callee] */ ArrayOf<Double>* CAdministration.serviceRequest.itemQuantities);


   CARAPI SetServiceRequest.ItemUnits(
     /* [in] */ ArrayOf<const String&> CAdministration.serviceRequest.itemUnits);

    CARAPI GetServiceRequest.ItemUnits(
     /* [out, callee] */ ArrayOf<String>* CAdministration.serviceRequest.itemUnits);


   CARAPI SetServiceRequest.DueDates(
     /* [in] */ ArrayOf<const String&> CAdministration.serviceRequest.dueDates);

    CARAPI GetServiceRequest.DueDates(
     /* [out, callee] */ ArrayOf<String>* CAdministration.serviceRequest.dueDates);


   CARAPI SetServiceRequest.RequestByStaffIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.serviceRequest.requestByStaffIds);

    CARAPI GetServiceRequest.RequestByStaffIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.serviceRequest.requestByStaffIds);


   CARAPI SetServiceRequest.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.serviceRequest.docRefIds);

    CARAPI GetServiceRequest.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.serviceRequest.docRefIds);


   CARAPI SetServiceRequest.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.serviceRequest.imageRefIds);

    CARAPI GetServiceRequest.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.serviceRequest.imageRefIds);


   CARAPI SetServiceRequest.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.serviceRequest.audioRefIds);

    CARAPI GetServiceRequest.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.serviceRequest.audioRefIds);


   CARAPI SetServiceRequest.BranchIdsInvolved(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.serviceRequest.branchIdsInvolved);

    CARAPI GetServiceRequest.BranchIdsInvolved(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.serviceRequest.branchIdsInvolved);


   CARAPI SetServiceRequest.DeptIdsInvolved(
     /* [in] */ ArrayOf<CAdministration.department> CAdministration.serviceRequest.deptIdsInvolved);

    CARAPI GetServiceRequest.DeptIdsInvolved(
     /* [out, callee] */ ArrayOf<CAdministration.department>* CAdministration.serviceRequest.deptIdsInvolved);


   CARAPI SetServiceRequest.ResponsibleRoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.serviceRequest.responsibleRoleIds);

    CARAPI GetServiceRequest.ResponsibleRoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.serviceRequest.responsibleRoleIds);


   CARAPI SetServiceRequest.ResponsibleStaffIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.serviceRequest.responsibleStaffIds);

    CARAPI GetServiceRequest.ResponsibleStaffIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.serviceRequest.responsibleStaffIds);


   CARAPI SetServiceRequest.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.serviceRequest.serviceIds);

    CARAPI GetServiceRequest.ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.serviceRequest.serviceIds);


   CARAPI SetServiceRequest.ServiceTypeIds(
     /* [in] */ ArrayOf<CAdministration.serviceType> CAdministration.serviceRequest.serviceTypeIds);

    CARAPI GetServiceRequest.ServiceTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.serviceType>* CAdministration.serviceRequest.serviceTypeIds);


   CARAPI SetServiceRequest.ItemTypeIdsRequired(
     /* [in] */ ArrayOf<CAdministration.itemType> CAdministration.serviceRequest.itemTypeIdsRequired);

    CARAPI GetServiceRequest.ItemTypeIdsRequired(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CAdministration.serviceRequest.itemTypeIdsRequired);


   CARAPI SetServiceRequest.JobTypeIdsRequired(
     /* [in] */ ArrayOf<CAdministration.jobType> CAdministration.serviceRequest.jobTypeIdsRequired);

    CARAPI GetServiceRequest.JobTypeIdsRequired(
     /* [out, callee] */ ArrayOf<CAdministration.jobType>* CAdministration.serviceRequest.jobTypeIdsRequired);


   CARAPI SetServiceRequest.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CAdministration.serviceRequest.propertyIds);

    CARAPI GetServiceRequest.PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CAdministration.serviceRequest.propertyIds);


   CARAPI SetServiceRequest.MasterAsCARAPI SetIds(
     /* [in] */ ArrayOf<CFinance.masterAsCARAPI SetRegister> CAdministration.serviceRequest.masterAsCARAPI SetIds);

    CARAPI GetServiceRequest.MasterAsCARAPI SetIds(
     /* [out, callee] */ ArrayOf<CFinance.masterAsCARAPI SetRegister>* CAdministration.serviceRequest.masterAsCARAPI SetIds);


   CARAPI SetServiceRequest.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.serviceRequest.customerIds);

    CARAPI GetServiceRequest.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.serviceRequest.customerIds);


   CARAPI SetServiceRequest.CustomerTypesIds(
     /* [in] */ ArrayOf<CCustomer.customerType> CAdministration.serviceRequest.customerTypesIds);

    CARAPI GetServiceRequest.CustomerTypesIds(
     /* [out, callee] */ ArrayOf<CCustomer.customerType>* CAdministration.serviceRequest.customerTypesIds);


   CARAPI SetServiceRequest.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.serviceRequest.businessChannelOwnerId);

    CARAPI GetServiceRequest.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.serviceRequest.businessChannelOwnerId);


   CARAPI SetCorrespondenceLog.CorroId(
     /* [in] */ const String& CAdministration.correspondenceLog.corroId);

    CARAPI GetCorrespondenceLog.CorroId(
     /* [out] */ String* CAdministration.correspondenceLog.corroId);


   CARAPI SetCorrespondenceLog.ParticipantName(
     /* [in] */ const String& CAdministration.correspondenceLog.participantName);

    CARAPI GetCorrespondenceLog.ParticipantName(
     /* [out] */ String* CAdministration.correspondenceLog.participantName);


   CARAPI SetCorrespondenceLog.ParticipantId(
     /* [in] */ const String& CAdministration.correspondenceLog.participantId);

    CARAPI GetCorrespondenceLog.ParticipantId(
     /* [out] */ String* CAdministration.correspondenceLog.participantId);


   CARAPI SetCorrespondenceLog.Description(
     /* [in] */ const String& CAdministration.correspondenceLog.description);

    CARAPI GetCorrespondenceLog.Description(
     /* [out] */ String* CAdministration.correspondenceLog.description);


   CARAPI SetCorrespondenceLog.CorroReceived(
     /* [in] */ const String& CAdministration.correspondenceLog.corroReceived);

    CARAPI GetCorrespondenceLog.CorroReceived(
     /* [out] */ String* CAdministration.correspondenceLog.corroReceived);


   CARAPI SetCorrespondenceLog.PropertyIds(
     /* [in] */ ArrayOf<const String&> CAdministration.correspondenceLog.propertyIds);

    CARAPI GetCorrespondenceLog.PropertyIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.correspondenceLog.propertyIds);


   CARAPI SetCorrespondenceLog.ResponseDocRefs(
     /* [in] */ ArrayOf<const String&> CAdministration.correspondenceLog.responseDocRefs);

    CARAPI GetCorrespondenceLog.ResponseDocRefs(
     /* [out, callee] */ ArrayOf<String>* CAdministration.correspondenceLog.responseDocRefs);


   CARAPI SetCorrespondenceLog.RepliedWhen(
     /* [in] */ const String& CAdministration.correspondenceLog.repliedWhen);

    CARAPI GetCorrespondenceLog.RepliedWhen(
     /* [out] */ String* CAdministration.correspondenceLog.repliedWhen);


   CARAPI SetCorrespondenceLog.ResponsibilitiesParticpantsIds(
     /* [in] */ ArrayOf<const String&> CAdministration.correspondenceLog.responsibilitiesParticpantsIds);

    CARAPI GetCorrespondenceLog.ResponsibilitiesParticpantsIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.correspondenceLog.responsibilitiesParticpantsIds);


   CARAPI SetCorrespondenceLog.ResponsibilitiesParticpantsNames(
     /* [in] */ ArrayOf<const String&> CAdministration.correspondenceLog.responsibilitiesParticpantsNames);

    CARAPI GetCorrespondenceLog.ResponsibilitiesParticpantsNames(
     /* [out, callee] */ ArrayOf<String>* CAdministration.correspondenceLog.responsibilitiesParticpantsNames);


   CARAPI SetCorrespondenceLog.RequiredActions(
     /* [in] */ ArrayOf<const String&> CAdministration.correspondenceLog.requiredActions);

    CARAPI GetCorrespondenceLog.RequiredActions(
     /* [out, callee] */ ArrayOf<String>* CAdministration.correspondenceLog.requiredActions);


   CARAPI SetCorrespondenceLog.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.correspondenceLog.businessChannelOwnerId);

    CARAPI GetCorrespondenceLog.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.correspondenceLog.businessChannelOwnerId);


   CARAPI SetCorrespondenceLog.BranchId(
     /* [in] */ CAdministration.branch CAdministration.correspondenceLog.branchId);

    CARAPI GetCorrespondenceLog.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.correspondenceLog.branchId);


   CARAPI SetCorrespondenceLog.DeptId(
     /* [in] */ CAdministration.department CAdministration.correspondenceLog.deptId);

    CARAPI GetCorrespondenceLog.DeptId(
     /* [out] */ CAdministration.department* CAdministration.correspondenceLog.deptId);


   CARAPI SetCorrespondenceLog.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.correspondenceLog.supplierIds);

    CARAPI GetCorrespondenceLog.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.correspondenceLog.supplierIds);


   CARAPI SetCorrespondenceLog.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.correspondenceLog.customerIds);

    CARAPI GetCorrespondenceLog.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.correspondenceLog.customerIds);


   CARAPI SetCorrespondenceLog.PartnerIds(
     /* [in] */ ArrayOf<CStakeholder.partner> CAdministration.correspondenceLog.partnerIds);

    CARAPI GetCorrespondenceLog.PartnerIds(
     /* [out, callee] */ ArrayOf<CStakeholder.partner>* CAdministration.correspondenceLog.partnerIds);


   CARAPI SetCorrespondenceLog.MediaIds(
     /* [in] */ ArrayOf<CStakeholder.media> CAdministration.correspondenceLog.mediaIds);

    CARAPI GetCorrespondenceLog.MediaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.media>* CAdministration.correspondenceLog.mediaIds);


   CARAPI SetCorrespondenceLog.CommunityIds(
     /* [in] */ ArrayOf<CStakeholder.community> CAdministration.correspondenceLog.communityIds);

    CARAPI GetCorrespondenceLog.CommunityIds(
     /* [out, callee] */ ArrayOf<CStakeholder.community>* CAdministration.correspondenceLog.communityIds);


   CARAPI SetCorrespondenceLog.BankIds(
     /* [in] */ ArrayOf<CFinance.bank> CAdministration.correspondenceLog.bankIds);

    CARAPI GetCorrespondenceLog.BankIds(
     /* [out, callee] */ ArrayOf<CFinance.bank>* CAdministration.correspondenceLog.bankIds);


   CARAPI SetCorrespondenceLog.PropertyOwnerIds(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CAdministration.correspondenceLog.propertyOwnerIds);

    CARAPI GetCorrespondenceLog.PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CAdministration.correspondenceLog.propertyOwnerIds);


   CARAPI SetCorrespondenceLog.ApplicantIds(
     /* [in] */ ArrayOf<CCustomer.applicant> CAdministration.correspondenceLog.applicantIds);

    CARAPI GetCorrespondenceLog.ApplicantIds(
     /* [out, callee] */ ArrayOf<CCustomer.applicant>* CAdministration.correspondenceLog.applicantIds);


   CARAPI SetCorrespondenceLog.TenancyIds(
     /* [in] */ ArrayOf<CProperty.tenant> CAdministration.correspondenceLog.tenancyIds);

    CARAPI GetCorrespondenceLog.TenancyIds(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CAdministration.correspondenceLog.tenancyIds);


   CARAPI SetCorrespondenceLog.EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.correspondenceLog.employeeIds);

    CARAPI GetCorrespondenceLog.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.correspondenceLog.employeeIds);


   CARAPI SetCorrespondenceLog.SuperFundIds(
     /* [in] */ ArrayOf<CSupplier.superannuationFund> CAdministration.correspondenceLog.superFundIds);

    CARAPI GetCorrespondenceLog.SuperFundIds(
     /* [out, callee] */ ArrayOf<CSupplier.superannuationFund>* CAdministration.correspondenceLog.superFundIds);


   CARAPI SetCorrespondenceLog.SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.correspondenceLog.solicitorIds);

    CARAPI GetCorrespondenceLog.SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.correspondenceLog.solicitorIds);


   CARAPI SetCorrespondenceLog.AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.correspondenceLog.agentIds);

    CARAPI GetCorrespondenceLog.AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.correspondenceLog.agentIds);


   CARAPI SetCorrespondenceLog.NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder> CAdministration.correspondenceLog.nonGovStakeholderIds);

    CARAPI GetCorrespondenceLog.NonGovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.correspondenceLog.nonGovStakeholderIds);


   CARAPI SetCorrespondenceLog.GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.correspondenceLog.govStakeholderIds);

    CARAPI GetCorrespondenceLog.GovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.correspondenceLog.govStakeholderIds);


   CARAPI SetCorrespondenceLog.CentrelinkId(
     /* [in] */ CFinance.centrelink CAdministration.correspondenceLog.centrelinkId);

    CARAPI GetCorrespondenceLog.CentrelinkId(
     /* [out] */ CFinance.centrelink* CAdministration.correspondenceLog.centrelinkId);


   CARAPI SetCorrespondenceLog.StateLAHAuthorityId(
     /* [in] */ CStakeholder.stateLAHAuthority CAdministration.correspondenceLog.stateLAHAuthorityId);

    CARAPI GetCorrespondenceLog.StateLAHAuthorityId(
     /* [out] */ CStakeholder.stateLAHAuthority* CAdministration.correspondenceLog.stateLAHAuthorityId);


   CARAPI SetCorrespondenceLog.StatePublicHousingAuthorityId(
     /* [in] */ CStakeholder.statePublicHousingAuthority CAdministration.correspondenceLog.statePublicHousingAuthorityId);

    CARAPI GetCorrespondenceLog.StatePublicHousingAuthorityId(
     /* [out] */ CStakeholder.statePublicHousingAuthority* CAdministration.correspondenceLog.statePublicHousingAuthorityId);


   CARAPI SetCorrespondenceLog.CommunityHousingRegulatorId(
     /* [in] */ CRegulator.communityHousingRegulator CAdministration.correspondenceLog.communityHousingRegulatorId);

    CARAPI GetCorrespondenceLog.CommunityHousingRegulatorId(
     /* [out] */ CRegulator.communityHousingRegulator* CAdministration.correspondenceLog.communityHousingRegulatorId);


   CARAPI SetCorrespondenceLog.ATOId(
     /* [in] */ CRegulator.aTO CAdministration.correspondenceLog.aTOId);

    CARAPI GetCorrespondenceLog.ATOId(
     /* [out] */ CRegulator.aTO* CAdministration.correspondenceLog.aTOId);


   CARAPI SetCorrespondenceLog.NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.correspondenceLog.natRegId);

    CARAPI GetCorrespondenceLog.NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.correspondenceLog.natRegId);


   CARAPI SetCorrespondenceLog.TribunalId(
     /* [in] */ CRegulator.nCAT CAdministration.correspondenceLog.tribunalId);

    CARAPI GetCorrespondenceLog.TribunalId(
     /* [out] */ CRegulator.nCAT* CAdministration.correspondenceLog.tribunalId);


   CARAPI SetCorrespondenceLog.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.correspondenceLog.docRefs);

    CARAPI GetCorrespondenceLog.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.correspondenceLog.docRefs);


   CARAPI SetCorrespondenceLog.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.correspondenceLog.imageRefs);

    CARAPI GetCorrespondenceLog.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.correspondenceLog.imageRefs);


   CARAPI SetCorrespondenceLog.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.correspondenceLog.audioRefIds);

    CARAPI GetCorrespondenceLog.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.correspondenceLog.audioRefIds);


   CARAPI SetCorrespondenceLog.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.correspondenceLog.videoRefs);

    CARAPI GetCorrespondenceLog.VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.correspondenceLog.videoRefs);


   CARAPI SetAdvertisingTemplatesPlans.AdvertDesignId(
     /* [in] */ const String& CAdministration.advertisingTemplatesPlans.advertDesignId);

    CARAPI GetAdvertisingTemplatesPlans.AdvertDesignId(
     /* [out] */ String* CAdministration.advertisingTemplatesPlans.advertDesignId);


   CARAPI SetAdvertisingTemplatesPlans.AdvertDesignName(
     /* [in] */ const String& CAdministration.advertisingTemplatesPlans.advertDesignName);

    CARAPI GetAdvertisingTemplatesPlans.AdvertDesignName(
     /* [out] */ String* CAdministration.advertisingTemplatesPlans.advertDesignName);


   CARAPI SetAdvertisingTemplatesPlans.AdvertisingMedium(
     /* [in] */ CHelper.advertisingMedium CAdministration.advertisingTemplatesPlans.AdvertisingMedium);

    CARAPI GetAdvertisingTemplatesPlans.AdvertisingMedium(
     /* [out] */ CHelper.advertisingMedium* CAdministration.advertisingTemplatesPlans.AdvertisingMedium);


   CARAPI SetAdvertisingTemplatesPlans.AccountsReceivableIds(
     /* [in] */ ArrayOf<const String&> CAdministration.advertisingTemplatesPlans.accountsReceivableIds);

    CARAPI GetAdvertisingTemplatesPlans.AccountsReceivableIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.advertisingTemplatesPlans.accountsReceivableIds);


   CARAPI SetAdvertisingTemplatesPlans.AccountsPayableIds(
     /* [in] */ ArrayOf<const String&> CAdministration.advertisingTemplatesPlans.accountsPayableIds);

    CARAPI GetAdvertisingTemplatesPlans.AccountsPayableIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.advertisingTemplatesPlans.accountsPayableIds);


   CARAPI SetAdvertisingTemplatesPlans.BudCARAPI GetedAmount(
     /* [in] */ Double CAdministration.advertisingTemplatesPlans.budCARAPI GetedAmount);

    CARAPI GetAdvertisingTemplatesPlans.BudCARAPI GetedAmount(
     /* [out] */ Double* CAdministration.advertisingTemplatesPlans.budCARAPI GetedAmount);


   CARAPI SetAdvertisingTemplatesPlans.DocRefsAdvertisingTemplatesPlans(
     /* [in] */ ArrayOf<const String&> CAdministration.advertisingTemplatesPlans.docRefsAdvertisingTemplatesPlans);

    CARAPI GetAdvertisingTemplatesPlans.DocRefsAdvertisingTemplatesPlans(
     /* [out, callee] */ ArrayOf<String>* CAdministration.advertisingTemplatesPlans.docRefsAdvertisingTemplatesPlans);


   CARAPI SetAdvertisingTemplatesPlans.RunDateTimes(
     /* [in] */ ArrayOf<const String&> CAdministration.advertisingTemplatesPlans.runDateTimes);

    CARAPI GetAdvertisingTemplatesPlans.RunDateTimes(
     /* [out, callee] */ ArrayOf<String>* CAdministration.advertisingTemplatesPlans.runDateTimes);


   CARAPI SetAdvertisingTemplatesPlans.PropertyId(
     /* [in] */ CProperty.property CAdministration.advertisingTemplatesPlans.propertyId);

    CARAPI GetAdvertisingTemplatesPlans.PropertyId(
     /* [out] */ CProperty.property* CAdministration.advertisingTemplatesPlans.propertyId);


   CARAPI SetAdvertisingTemplatesPlans.PropertyOwners(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CAdministration.advertisingTemplatesPlans.propertyOwners);

    CARAPI GetAdvertisingTemplatesPlans.PropertyOwners(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CAdministration.advertisingTemplatesPlans.propertyOwners);


   CARAPI SetAdvertisingTemplatesPlans.AdvertScheduleId(
     /* [in] */ CProperty.advertisingBudCARAPI GetSchedule CAdministration.advertisingTemplatesPlans.advertScheduleId);

    CARAPI GetAdvertisingTemplatesPlans.AdvertScheduleId(
     /* [out] */ CProperty.advertisingBudCARAPI GetSchedule* CAdministration.advertisingTemplatesPlans.advertScheduleId);


   CARAPI SetAdvertisingTemplatesPlans.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.advertisingTemplatesPlans.businessChannelOwnerId);

    CARAPI GetAdvertisingTemplatesPlans.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.advertisingTemplatesPlans.businessChannelOwnerId);


   CARAPI SetAdvertisingTemplatesPlans.BranchId(
     /* [in] */ CAdministration.branch CAdministration.advertisingTemplatesPlans.branchId);

    CARAPI GetAdvertisingTemplatesPlans.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.advertisingTemplatesPlans.branchId);


   CARAPI SetAdvertisingTemplatesPlans.DeptId(
     /* [in] */ CAdministration.department CAdministration.advertisingTemplatesPlans.deptId);

    CARAPI GetAdvertisingTemplatesPlans.DeptId(
     /* [out] */ CAdministration.department* CAdministration.advertisingTemplatesPlans.deptId);


   CARAPI SetBranch.BranchId(
     /* [in] */ const String& CAdministration.branch.branchId);

    CARAPI GetBranch.BranchId(
     /* [out] */ String* CAdministration.branch.branchId);


   CARAPI SetBranch.BranchName(
     /* [in] */ const String& CAdministration.branch.branchName);

    CARAPI GetBranch.BranchName(
     /* [out] */ String* CAdministration.branch.branchName);


   CARAPI SetBranch.BranchAddressLine1(
     /* [in] */ const String& CAdministration.branch.branchAddressLine1);

    CARAPI GetBranch.BranchAddressLine1(
     /* [out] */ String* CAdministration.branch.branchAddressLine1);


   CARAPI SetBranch.BranchAddressLine2(
     /* [in] */ const String& CAdministration.branch.branchAddressLine2);

    CARAPI GetBranch.BranchAddressLine2(
     /* [out] */ String* CAdministration.branch.branchAddressLine2);


   CARAPI SetBranch.BranchSuburb(
     /* [in] */ const String& CAdministration.branch.branchSuburb);

    CARAPI GetBranch.BranchSuburb(
     /* [out] */ String* CAdministration.branch.branchSuburb);


   CARAPI SetBranch.BranchPostcode(
     /* [in] */ const String& CAdministration.branch.branchPostcode);

    CARAPI GetBranch.BranchPostcode(
     /* [out] */ String* CAdministration.branch.branchPostcode);


   CARAPI SetBranch.BranchPhone(
     /* [in] */ const String& CAdministration.branch.branchPhone);

    CARAPI GetBranch.BranchPhone(
     /* [out] */ String* CAdministration.branch.branchPhone);


   CARAPI SetBranch.RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.branch.roleIds);

    CARAPI GetBranch.RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.branch.roleIds);


   CARAPI SetBranch.DeptIds(
     /* [in] */ ArrayOf<CAdministration.department> CAdministration.branch.deptIds);

    CARAPI GetBranch.DeptIds(
     /* [out, callee] */ ArrayOf<CAdministration.department>* CAdministration.branch.deptIds);


   CARAPI SetBranch.SubDeptIds(
     /* [in] */ ArrayOf<CAdministration.subdepartment> CAdministration.branch.subDeptIds);

    CARAPI GetBranch.SubDeptIds(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartment>* CAdministration.branch.subDeptIds);


   CARAPI SetBranch.SubDeptLevel2Ids(
     /* [in] */ ArrayOf<CAdministration.subdepartmentLevel2> CAdministration.branch.subDeptLevel2Ids);

    CARAPI GetBranch.SubDeptLevel2Ids(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartmentLevel2>* CAdministration.branch.subDeptLevel2Ids);


   CARAPI SetBranch.SubDeptLevel3Ids(
     /* [in] */ ArrayOf<CAdministration.subdepartmentLevel3> CAdministration.branch.subDeptLevel3Ids);

    CARAPI GetBranch.SubDeptLevel3Ids(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartmentLevel3>* CAdministration.branch.subDeptLevel3Ids);


   CARAPI SetBranch.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.branch.businessChannelOwnerId);

    CARAPI GetBranch.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.branch.businessChannelOwnerId);


   CARAPI SetBranch.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.branch.docRefs);

    CARAPI GetBranch.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.branch.docRefs);


   CARAPI SetBranch.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.branch.imageRefs);

    CARAPI GetBranch.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.branch.imageRefs);


   CARAPI SetBranch.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.branch.audioRefIds);

    CARAPI GetBranch.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.branch.audioRefIds);


   CARAPI SetBranch.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.branch.videoRefs);

    CARAPI GetBranch.VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.branch.videoRefs);





   CARAPI SetDepartmentMap.DeptMapId(
     /* [in] */ const String& CAdministration.departmentMap.deptMapId);

    CARAPI GetDepartmentMap.DeptMapId(
     /* [out] */ String* CAdministration.departmentMap.deptMapId);


   CARAPI SetDepartmentMap.Description(
     /* [in] */ const String& CAdministration.departmentMap.description);

    CARAPI GetDepartmentMap.Description(
     /* [out] */ String* CAdministration.departmentMap.description);


   CARAPI SetDepartmentMap.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.departmentMap.businessChannelOwnerId);

    CARAPI GetDepartmentMap.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.departmentMap.businessChannelOwnerId);


   CARAPI SetDepartmentMap.DepartmentId(
     /* [in] */ CAdministration.department CAdministration.departmentMap.departmentId);

    CARAPI GetDepartmentMap.DepartmentId(
     /* [out] */ CAdministration.department* CAdministration.departmentMap.departmentId);


   CARAPI SetDepartmentMap.SubDeptId(
     /* [in] */ CAdministration.subdepartment CAdministration.departmentMap.subDeptId);

    CARAPI GetDepartmentMap.SubDeptId(
     /* [out] */ CAdministration.subdepartment* CAdministration.departmentMap.subDeptId);


   CARAPI SetDepartmentMap.SubDeptLevel2Id(
     /* [in] */ CAdministration.subdepartmentLevel2 CAdministration.departmentMap.subDeptLevel2Id);

    CARAPI GetDepartmentMap.SubDeptLevel2Id(
     /* [out] */ CAdministration.subdepartmentLevel2* CAdministration.departmentMap.subDeptLevel2Id);


   CARAPI SetDepartmentMap.SubDeptLevel3Id(
     /* [in] */ CAdministration.subdepartmentLevel3 CAdministration.departmentMap.subDeptLevel3Id);

    CARAPI GetDepartmentMap.SubDeptLevel3Id(
     /* [out] */ CAdministration.subdepartmentLevel3* CAdministration.departmentMap.subDeptLevel3Id);


   CARAPI SetDepartmentMap.HeadsDeptsSubDeptsEmployeeIdsDescending(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.departmentMap.headsDeptsSubDeptsEmployeeIdsDescending);

    CARAPI GetDepartmentMap.HeadsDeptsSubDeptsEmployeeIdsDescending(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.departmentMap.headsDeptsSubDeptsEmployeeIdsDescending);


   CARAPI SetDepartmentMap.RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.departmentMap.roleIds);

    CARAPI GetDepartmentMap.RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.departmentMap.roleIds);


   CARAPI SetDepartmentMap.BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.departmentMap.branchIds);

    CARAPI GetDepartmentMap.BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.departmentMap.branchIds);


   CARAPI SetDepartmentMap.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.departmentMap.docRefs);

    CARAPI GetDepartmentMap.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.departmentMap.docRefs);


   CARAPI SetDepartmentMap.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.departmentMap.imageRefs);

    CARAPI GetDepartmentMap.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.departmentMap.imageRefs);


   CARAPI SetDepartmentMap.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.departmentMap.audioRefIds);

    CARAPI GetDepartmentMap.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.departmentMap.audioRefIds);


   CARAPI SetDepartmentMap.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.departmentMap.videoRefs);

    CARAPI GetDepartmentMap.VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.departmentMap.videoRefs);


   CARAPI SetDepartment.DeptId(
     /* [in] */ const String& CAdministration.department.deptId);

    CARAPI GetDepartment.DeptId(
     /* [out] */ String* CAdministration.department.deptId);


   CARAPI SetDepartment.DeptName(
     /* [in] */ const String& CAdministration.department.deptName);

    CARAPI GetDepartment.DeptName(
     /* [out] */ String* CAdministration.department.deptName);


   CARAPI SetDepartment.DeptAddressLine1(
     /* [in] */ ArrayOf<const String&> CAdministration.department.deptAddressLine1);

    CARAPI GetDepartment.DeptAddressLine1(
     /* [out, callee] */ ArrayOf<String>* CAdministration.department.deptAddressLine1);


   CARAPI SetDepartment.DeptAddressLine2(
     /* [in] */ ArrayOf<const String&> CAdministration.department.deptAddressLine2);

    CARAPI GetDepartment.DeptAddressLine2(
     /* [out, callee] */ ArrayOf<String>* CAdministration.department.deptAddressLine2);


   CARAPI SetDepartment.BranchSuburb(
     /* [in] */ ArrayOf<const String&> CAdministration.department.branchSuburb);

    CARAPI GetDepartment.BranchSuburb(
     /* [out, callee] */ ArrayOf<String>* CAdministration.department.branchSuburb);


   CARAPI SetDepartment.BranchPostcode(
     /* [in] */ ArrayOf<const String&> CAdministration.department.branchPostcode);

    CARAPI GetDepartment.BranchPostcode(
     /* [out, callee] */ ArrayOf<String>* CAdministration.department.branchPostcode);


   CARAPI SetDepartment.BranchPhone(
     /* [in] */ ArrayOf<const String&> CAdministration.department.branchPhone);

    CARAPI GetDepartment.BranchPhone(
     /* [out, callee] */ ArrayOf<String>* CAdministration.department.branchPhone);


   CARAPI SetDepartment.HeadDeptEmployeeId(
     /* [in] */ CAdministration.staff CAdministration.department.headDeptEmployeeId);

    CARAPI GetDepartment.HeadDeptEmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.department.headDeptEmployeeId);


   CARAPI SetDepartment.RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.department.roleIds);

    CARAPI GetDepartment.RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.department.roleIds);


   CARAPI SetDepartment.BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.department.branchIds);

    CARAPI GetDepartment.BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.department.branchIds);


   CARAPI SetDepartment.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.department.businessChannelOwnerId);

    CARAPI GetDepartment.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.department.businessChannelOwnerId);


   CARAPI SetDepartment.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.department.docRefs);

    CARAPI GetDepartment.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.department.docRefs);


   CARAPI SetDepartment.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.department.imageRefs);

    CARAPI GetDepartment.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.department.imageRefs);


   CARAPI SetDepartment.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.department.audioRefIds);

    CARAPI GetDepartment.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.department.audioRefIds);


   CARAPI SetDepartment.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.department.videoRefs);

    CARAPI GetDepartment.VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.department.videoRefs);


   CARAPI SetSubDepartment.SubDeptId(
     /* [in] */ const String& CAdministration.subdepartment.subDeptId);

    CARAPI GetSubDepartment.SubDeptId(
     /* [out] */ String* CAdministration.subdepartment.subDeptId);


   CARAPI SetSubDepartment.SubDeptName(
     /* [in] */ const String& CAdministration.subdepartment.subDeptName);

    CARAPI GetSubDepartment.SubDeptName(
     /* [out] */ String* CAdministration.subdepartment.subDeptName);


   CARAPI SetSubDepartment.SubDeptAddressLine1(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartment.subDeptAddressLine1);

    CARAPI GetSubDepartment.SubDeptAddressLine1(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartment.subDeptAddressLine1);


   CARAPI SetSubDepartment.SubDeptAddressLine2(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartment.subDeptAddressLine2);

    CARAPI GetSubDepartment.SubDeptAddressLine2(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartment.subDeptAddressLine2);


   CARAPI SetSubDepartment.BranchSuburb(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartment.branchSuburb);

    CARAPI GetSubDepartment.BranchSuburb(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartment.branchSuburb);


   CARAPI SetSubDepartment.BranchPostcode(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartment.branchPostcode);

    CARAPI GetSubDepartment.BranchPostcode(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartment.branchPostcode);


   CARAPI SetSubDepartment.BranchPhone(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartment.branchPhone);

    CARAPI GetSubDepartment.BranchPhone(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartment.branchPhone);


   CARAPI SetSubDepartment.HeadSubDeptEmployeeId(
     /* [in] */ CAdministration.staff CAdministration.subdepartment.headSubDeptEmployeeId);

    CARAPI GetSubDepartment.HeadSubDeptEmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.subdepartment.headSubDeptEmployeeId);


   CARAPI SetSubDepartment.RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.subdepartment.roleIds);

    CARAPI GetSubDepartment.RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.subdepartment.roleIds);


   CARAPI SetSubDepartment.BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.subdepartment.branchIds);

    CARAPI GetSubDepartment.BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.subdepartment.branchIds);


   CARAPI SetSubDepartment.SupDeptId(
     /* [in] */ CAdministration.department CAdministration.subdepartment.supDeptId);

    CARAPI GetSubDepartment.SupDeptId(
     /* [out] */ CAdministration.department* CAdministration.subdepartment.supDeptId);


   CARAPI SetSubDepartment.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.subdepartment.businessChannelOwnerId);

    CARAPI GetSubDepartment.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.subdepartment.businessChannelOwnerId);


   CARAPI SetSubDepartment.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.subdepartment.docRefs);

    CARAPI GetSubDepartment.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.subdepartment.docRefs);


   CARAPI SetSubDepartment.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.subdepartment.imageRefs);

    CARAPI GetSubDepartment.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.subdepartment.imageRefs);


   CARAPI SetSubDepartment.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.subdepartment.audioRefIds);

    CARAPI GetSubDepartment.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.subdepartment.audioRefIds);


   CARAPI SetSubDepartment.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.subdepartment.videoRefs);

    CARAPI GetSubDepartment.VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.subdepartment.videoRefs);


   CARAPI SetSubDepartmentLevel2.SubDeptLevel2Id(
     /* [in] */ const String& CAdministration.subdepartmentLevel2.subDeptLevel2Id);

    CARAPI GetSubDepartmentLevel2.SubDeptLevel2Id(
     /* [out] */ String* CAdministration.subdepartmentLevel2.subDeptLevel2Id);


   CARAPI SetSubDepartmentLevel2.SubDeptLevel2Name(
     /* [in] */ const String& CAdministration.subdepartmentLevel2.subDeptLevel2Name);

    CARAPI GetSubDepartmentLevel2.SubDeptLevel2Name(
     /* [out] */ String* CAdministration.subdepartmentLevel2.subDeptLevel2Name);


   CARAPI SetSubDepartmentLevel2.SubDeptLevel2AddressLine1(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel2.subDeptLevel2AddressLine1);

    CARAPI GetSubDepartmentLevel2.SubDeptLevel2AddressLine1(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel2.subDeptLevel2AddressLine1);


   CARAPI SetSubDepartmentLevel2.SubDeptLevel2AddressLine2(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel2.subDeptLevel2AddressLine2);

    CARAPI GetSubDepartmentLevel2.SubDeptLevel2AddressLine2(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel2.subDeptLevel2AddressLine2);


   CARAPI SetSubDepartmentLevel2.BranchSuburb(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel2.branchSuburb);

    CARAPI GetSubDepartmentLevel2.BranchSuburb(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel2.branchSuburb);


   CARAPI SetSubDepartmentLevel2.BranchPostcode(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel2.branchPostcode);

    CARAPI GetSubDepartmentLevel2.BranchPostcode(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel2.branchPostcode);


   CARAPI SetSubDepartmentLevel2.BranchPhone(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel2.branchPhone);

    CARAPI GetSubDepartmentLevel2.BranchPhone(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel2.branchPhone);


   CARAPI SetSubDepartmentLevel2.HeadLevel2SubDeptEmployeeId(
     /* [in] */ CAdministration.staff CAdministration.subdepartmentLevel2.headLevel2SubDeptEmployeeId);

    CARAPI GetSubDepartmentLevel2.HeadLevel2SubDeptEmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.subdepartmentLevel2.headLevel2SubDeptEmployeeId);


   CARAPI SetSubDepartmentLevel2.RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.subdepartmentLevel2.roleIds);

    CARAPI GetSubDepartmentLevel2.RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.subdepartmentLevel2.roleIds);


   CARAPI SetSubDepartmentLevel2.BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.subdepartmentLevel2.branchIds);

    CARAPI GetSubDepartmentLevel2.BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.subdepartmentLevel2.branchIds);


   CARAPI SetSubDepartmentLevel2.SupSubDeptId(
     /* [in] */ CAdministration.subdepartment CAdministration.subdepartmentLevel2.supSubDeptId);

    CARAPI GetSubDepartmentLevel2.SupSubDeptId(
     /* [out] */ CAdministration.subdepartment* CAdministration.subdepartmentLevel2.supSubDeptId);


   CARAPI SetSubDepartmentLevel2.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.subdepartmentLevel2.businessChannelOwnerId);

    CARAPI GetSubDepartmentLevel2.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.subdepartmentLevel2.businessChannelOwnerId);


   CARAPI SetSubDepartmentLevel2.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.subdepartmentLevel2.docRefs);

    CARAPI GetSubDepartmentLevel2.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.subdepartmentLevel2.docRefs);


   CARAPI SetSubDepartmentLevel2.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.subdepartmentLevel2.imageRefs);

    CARAPI GetSubDepartmentLevel2.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.subdepartmentLevel2.imageRefs);


   CARAPI SetSubDepartmentLevel2.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.subdepartmentLevel2.audioRefIds);

    CARAPI GetSubDepartmentLevel2.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.subdepartmentLevel2.audioRefIds);


   CARAPI SetSubDepartmentLevel2.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.subdepartmentLevel2.videoRefs);

    CARAPI GetSubDepartmentLevel2.VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.subdepartmentLevel2.videoRefs);


   CARAPI SetSubDepartmentLevel3.SubDeptLevel3Id(
     /* [in] */ const String& CAdministration.subdepartmentLevel3.subDeptLevel3Id);

    CARAPI GetSubDepartmentLevel3.SubDeptLevel3Id(
     /* [out] */ String* CAdministration.subdepartmentLevel3.subDeptLevel3Id);


   CARAPI SetSubDepartmentLevel3.SubDeptLevel3Name(
     /* [in] */ const String& CAdministration.subdepartmentLevel3.subDeptLevel3Name);

    CARAPI GetSubDepartmentLevel3.SubDeptLevel3Name(
     /* [out] */ String* CAdministration.subdepartmentLevel3.subDeptLevel3Name);


   CARAPI SetSubDepartmentLevel3.SubDeptLevel3AddressLine1(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel3.subDeptLevel3AddressLine1);

    CARAPI GetSubDepartmentLevel3.SubDeptLevel3AddressLine1(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel3.subDeptLevel3AddressLine1);


   CARAPI SetSubDepartmentLevel3.SubDeptLevel3AddressLine2(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel3.subDeptLevel3AddressLine2);

    CARAPI GetSubDepartmentLevel3.SubDeptLevel3AddressLine2(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel3.subDeptLevel3AddressLine2);


   CARAPI SetSubDepartmentLevel3.BranchSuburb(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel3.branchSuburb);

    CARAPI GetSubDepartmentLevel3.BranchSuburb(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel3.branchSuburb);


   CARAPI SetSubDepartmentLevel3.BranchPostcode(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel3.branchPostcode);

    CARAPI GetSubDepartmentLevel3.BranchPostcode(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel3.branchPostcode);


   CARAPI SetSubDepartmentLevel3.BranchPhone(
     /* [in] */ ArrayOf<const String&> CAdministration.subdepartmentLevel3.branchPhone);

    CARAPI GetSubDepartmentLevel3.BranchPhone(
     /* [out, callee] */ ArrayOf<String>* CAdministration.subdepartmentLevel3.branchPhone);


   CARAPI SetSubDepartmentLevel3.HeadLevel2SubDeptEmployeeId(
     /* [in] */ CAdministration.staff CAdministration.subdepartmentLevel3.headLevel2SubDeptEmployeeId);

    CARAPI GetSubDepartmentLevel3.HeadLevel2SubDeptEmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.subdepartmentLevel3.headLevel2SubDeptEmployeeId);


   CARAPI SetSubDepartmentLevel3.RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.subdepartmentLevel3.roleIds);

    CARAPI GetSubDepartmentLevel3.RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.subdepartmentLevel3.roleIds);


   CARAPI SetSubDepartmentLevel3.BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.subdepartmentLevel3.branchIds);

    CARAPI GetSubDepartmentLevel3.BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.subdepartmentLevel3.branchIds);


   CARAPI SetSubDepartmentLevel3.SupSubDeptLevel2Id(
     /* [in] */ CAdministration.subdepartmentLevel2 CAdministration.subdepartmentLevel3.supSubDeptLevel2Id);

    CARAPI GetSubDepartmentLevel3.SupSubDeptLevel2Id(
     /* [out] */ CAdministration.subdepartmentLevel2* CAdministration.subdepartmentLevel3.supSubDeptLevel2Id);


   CARAPI SetSubDepartmentLevel3.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.subdepartmentLevel3.businessChannelOwnerId);

    CARAPI GetSubDepartmentLevel3.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.subdepartmentLevel3.businessChannelOwnerId);


   CARAPI SetSubDepartmentLevel3.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.subdepartmentLevel3.docRefs);

    CARAPI GetSubDepartmentLevel3.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.subdepartmentLevel3.docRefs);


   CARAPI SetSubDepartmentLevel3.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.subdepartmentLevel3.imageRefs);

    CARAPI GetSubDepartmentLevel3.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.subdepartmentLevel3.imageRefs);


   CARAPI SetSubDepartmentLevel3.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.subdepartmentLevel3.audioRefIds);

    CARAPI GetSubDepartmentLevel3.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.subdepartmentLevel3.audioRefIds);


   CARAPI SetSubDepartmentLevel3.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.subdepartmentLevel3.videoRefs);

    CARAPI GetSubDepartmentLevel3.VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.subdepartmentLevel3.videoRefs);


   CARAPI SetDocuments.DocRefId(
     /* [in] */ const String& CAdministration.documents.docRefId);

    CARAPI GetDocuments.DocRefId(
     /* [out] */ String* CAdministration.documents.docRefId);


   CARAPI SetDocuments.DocHash(
     /* [in] */ const String& CAdministration.documents.docHash);

    CARAPI GetDocuments.DocHash(
     /* [out] */ String* CAdministration.documents.docHash);


   CARAPI SetDocuments.MasLedgeFinTxId(
     /* [in] */ const String& CAdministration.documents.masLedgeFinTxId);

    CARAPI GetDocuments.MasLedgeFinTxId(
     /* [out] */ String* CAdministration.documents.masLedgeFinTxId);


   CARAPI SetDocuments.GenLedgeFinTxId(
     /* [in] */ const String& CAdministration.documents.genLedgeFinTxId);

    CARAPI GetDocuments.GenLedgeFinTxId(
     /* [out] */ String* CAdministration.documents.genLedgeFinTxId);


   CARAPI SetDocuments.MasLedgeFinTxNum(
     /* [in] */ Int32 CAdministration.documents.masLedgeFinTxNum);

    CARAPI GetDocuments.MasLedgeFinTxNum(
     /* [out] */ Int32* CAdministration.documents.masLedgeFinTxNum);


   CARAPI SetDocuments.GenLedgeFinTxNum(
     /* [in] */ Int32 CAdministration.documents.genLedgeFinTxNum);

    CARAPI GetDocuments.GenLedgeFinTxNum(
     /* [out] */ Int32* CAdministration.documents.genLedgeFinTxNum);


   CARAPI SetDocuments.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.documents.businessChannelOwnerId);

    CARAPI GetDocuments.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.documents.businessChannelOwnerId);


   CARAPI SetDocuments.BranchId(
     /* [in] */ CAdministration.branch CAdministration.documents.branchId);

    CARAPI GetDocuments.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.documents.branchId);


   CARAPI SetDocuments.DeptId(
     /* [in] */ CAdministration.department CAdministration.documents.deptId);

    CARAPI GetDocuments.DeptId(
     /* [out] */ CAdministration.department* CAdministration.documents.deptId);


   CARAPI SetDocuments.PropertyId(
     /* [in] */ CProperty.property CAdministration.documents.propertyId);

    CARAPI GetDocuments.PropertyId(
     /* [out] */ CProperty.property* CAdministration.documents.propertyId);


   CARAPI SetDocuments.PropOwners(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CAdministration.documents.propOwners);

    CARAPI GetDocuments.PropOwners(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CAdministration.documents.propOwners);


   CARAPI SetDocuments.MasterLedgerAsCARAPI SetIds(
     /* [in] */ ArrayOf<CFinance.masterAsCARAPI SetRegister> CAdministration.documents.masterLedgerAsCARAPI SetIds);

    CARAPI GetDocuments.MasterLedgerAsCARAPI SetIds(
     /* [out, callee] */ ArrayOf<CFinance.masterAsCARAPI SetRegister>* CAdministration.documents.masterLedgerAsCARAPI SetIds);


   CARAPI SetDocuments.EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.documents.employeeIds);

    CARAPI GetDocuments.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.documents.employeeIds);


   CARAPI SetDocuments.TenancyIds(
     /* [in] */ ArrayOf<CProperty.tenant> CAdministration.documents.tenancyIds);

    CARAPI GetDocuments.TenancyIds(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CAdministration.documents.tenancyIds);


   CARAPI SetDocuments.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.documents.customerIds);

    CARAPI GetDocuments.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.documents.customerIds);


   CARAPI SetDocuments.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.documents.supplierIds);

    CARAPI GetDocuments.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.documents.supplierIds);


   CARAPI SetDocuments.SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.documents.solicitorIds);

    CARAPI GetDocuments.SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.documents.solicitorIds);


   CARAPI SetDocuments.AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.documents.agentIds);

    CARAPI GetDocuments.AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.documents.agentIds);


   CARAPI SetDocuments.NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder> CAdministration.documents.nonGovStakeholderIds);

    CARAPI GetDocuments.NonGovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.documents.nonGovStakeholderIds);


   CARAPI SetDocuments.GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.documents.govStakeholderIds);

    CARAPI GetDocuments.GovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.documents.govStakeholderIds);


   CARAPI SetDocuments.StateLAHCId(
     /* [in] */ CStakeholder.stateLAHAuthority CAdministration.documents.stateLAHCId);

    CARAPI GetDocuments.StateLAHCId(
     /* [out] */ CStakeholder.stateLAHAuthority* CAdministration.documents.stateLAHCId);


   CARAPI SetDocuments.StatePublicHousingAuthorityId(
     /* [in] */ CStakeholder.statePublicHousingAuthority CAdministration.documents.statePublicHousingAuthorityId);

    CARAPI GetDocuments.StatePublicHousingAuthorityId(
     /* [out] */ CStakeholder.statePublicHousingAuthority* CAdministration.documents.statePublicHousingAuthorityId);


   CARAPI SetDocuments.NCATId(
     /* [in] */ CRegulator.nCAT CAdministration.documents.nCATId);

    CARAPI GetDocuments.NCATId(
     /* [out] */ CRegulator.nCAT* CAdministration.documents.nCATId);


   CARAPI SetDocuments.RentalBondAuthorityId(
     /* [in] */ CRegulator.rentalBondAuthority CAdministration.documents.rentalBondAuthorityId);

    CARAPI GetDocuments.RentalBondAuthorityId(
     /* [out] */ CRegulator.rentalBondAuthority* CAdministration.documents.rentalBondAuthorityId);


   CARAPI SetDocuments.CommunityHousingRegulatorId(
     /* [in] */ CRegulator.communityHousingRegulator CAdministration.documents.communityHousingRegulatorId);

    CARAPI GetDocuments.CommunityHousingRegulatorId(
     /* [out] */ CRegulator.communityHousingRegulator* CAdministration.documents.communityHousingRegulatorId);


   CARAPI SetDocuments.CommunityIds(
     /* [in] */ ArrayOf<CStakeholder.community> CAdministration.documents.communityIds);

    CARAPI GetDocuments.CommunityIds(
     /* [out, callee] */ ArrayOf<CStakeholder.community>* CAdministration.documents.communityIds);


   CARAPI SetDocuments.MediaIds(
     /* [in] */ ArrayOf<CStakeholder.media> CAdministration.documents.mediaIds);

    CARAPI GetDocuments.MediaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.media>* CAdministration.documents.mediaIds);


   CARAPI SetDocuments.PartnerIds(
     /* [in] */ ArrayOf<CStakeholder.partner> CAdministration.documents.partnerIds);

    CARAPI GetDocuments.PartnerIds(
     /* [out, callee] */ ArrayOf<CStakeholder.partner>* CAdministration.documents.partnerIds);


   CARAPI SetDocuments.NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.documents.natRegId);

    CARAPI GetDocuments.NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.documents.natRegId);


   CARAPI SetDocuments.StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.documents.stateBasedRegId);

    CARAPI GetDocuments.StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.documents.stateBasedRegId);


   CARAPI SetDocuments.PropertyInspectionResId(
     /* [in] */ CProperty.propertyInspectionResidential CAdministration.documents.propertyInspectionResId);

    CARAPI GetDocuments.PropertyInspectionResId(
     /* [out] */ CProperty.propertyInspectionResidential* CAdministration.documents.propertyInspectionResId);


   CARAPI SetDocuments.PropertyInspectionCommercId(
     /* [in] */ CProperty.propertyInspectionCommercial CAdministration.documents.propertyInspectionCommercId);

    CARAPI GetDocuments.PropertyInspectionCommercId(
     /* [out] */ CProperty.propertyInspectionCommercial* CAdministration.documents.propertyInspectionCommercId);


   CARAPI SetDocuments.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.documents.serviceIds);

    CARAPI GetDocuments.ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.documents.serviceIds);


   CARAPI SetDocuments.ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CAdministration.documents.itemIds);

    CARAPI GetDocuments.ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CAdministration.documents.itemIds);


   CARAPI SetDocuments.JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CAdministration.documents.jobIds);

    CARAPI GetDocuments.JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CAdministration.documents.jobIds);


   CARAPI SetDocuments.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.documents.docRefIds);

    CARAPI GetDocuments.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.documents.docRefIds);


   CARAPI SetDocuments.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.documents.imageRefIds);

    CARAPI GetDocuments.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.documents.imageRefIds);


   CARAPI SetDocuments.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.documents.audioRefIds);

    CARAPI GetDocuments.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.documents.audioRefIds);


   CARAPI SetDocuments.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.documents.videoRefIds);

    CARAPI GetDocuments.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.documents.videoRefIds);


   CARAPI SetImages.ImageRefId(
     /* [in] */ const String& CAdministration.images.imageRefId);

    CARAPI GetImages.ImageRefId(
     /* [out] */ String* CAdministration.images.imageRefId);


   CARAPI SetImages.ImageHash(
     /* [in] */ const String& CAdministration.images.imageHash);

    CARAPI GetImages.ImageHash(
     /* [out] */ String* CAdministration.images.imageHash);


   CARAPI SetImages.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.images.businessChannelOwnerId);

    CARAPI GetImages.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.images.businessChannelOwnerId);


   CARAPI SetImages.BranchId(
     /* [in] */ CAdministration.branch CAdministration.images.branchId);

    CARAPI GetImages.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.images.branchId);


   CARAPI SetImages.DeptId(
     /* [in] */ CAdministration.department CAdministration.images.deptId);

    CARAPI GetImages.DeptId(
     /* [out] */ CAdministration.department* CAdministration.images.deptId);


   CARAPI SetImages.PropertyId(
     /* [in] */ CProperty.property CAdministration.images.propertyId);

    CARAPI GetImages.PropertyId(
     /* [out] */ CProperty.property* CAdministration.images.propertyId);


   CARAPI SetImages.PropOwners(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CAdministration.images.propOwners);

    CARAPI GetImages.PropOwners(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CAdministration.images.propOwners);


   CARAPI SetImages.MasterLedgerAsCARAPI SetIds(
     /* [in] */ ArrayOf<CFinance.masterAsCARAPI SetRegister> CAdministration.images.masterLedgerAsCARAPI SetIds);

    CARAPI GetImages.MasterLedgerAsCARAPI SetIds(
     /* [out, callee] */ ArrayOf<CFinance.masterAsCARAPI SetRegister>* CAdministration.images.masterLedgerAsCARAPI SetIds);


   CARAPI SetImages.EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.images.employeeIds);

    CARAPI GetImages.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.images.employeeIds);


   CARAPI SetImages.TenancyIds(
     /* [in] */ ArrayOf<CProperty.tenant> CAdministration.images.tenancyIds);

    CARAPI GetImages.TenancyIds(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CAdministration.images.tenancyIds);


   CARAPI SetImages.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.images.customerIds);

    CARAPI GetImages.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.images.customerIds);


   CARAPI SetImages.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.images.supplierIds);

    CARAPI GetImages.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.images.supplierIds);


   CARAPI SetImages.SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.images.solicitorIds);

    CARAPI GetImages.SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.images.solicitorIds);


   CARAPI SetImages.AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.images.agentIds);

    CARAPI GetImages.AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.images.agentIds);


   CARAPI SetImages.NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder> CAdministration.images.nonGovStakeholderIds);

    CARAPI GetImages.NonGovStakeholderIds(
     /* [out, callee] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.images.nonGovStakeholderIds);


   CARAPI SetImages.GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.images.govStakeholderIds);

    CARAPI GetImages.GovStakeholderIds(
     /* [out, callee] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.images.govStakeholderIds);


   CARAPI SetImages.StateLAHCId(
     /* [in] */ CStakeholder.stateLAHAuthority CAdministration.images.stateLAHCId);

    CARAPI GetImages.StateLAHCId(
     /* [out] */ CStakeholder.stateLAHAuthority* CAdministration.images.stateLAHCId);


   CARAPI SetImages.StatePublicHousingAuthorityId(
     /* [in] */ CStakeholder.statePublicHousingAuthority CAdministration.images.statePublicHousingAuthorityId);

    CARAPI GetImages.StatePublicHousingAuthorityId(
     /* [out] */ CStakeholder.statePublicHousingAuthority* CAdministration.images.statePublicHousingAuthorityId);


   CARAPI SetImages.NCATId(
     /* [in] */ CRegulator.nCAT CAdministration.images.nCATId);

    CARAPI GetImages.NCATId(
     /* [out] */ CRegulator.nCAT* CAdministration.images.nCATId);


   CARAPI SetImages.RentalBondAuthorityId(
     /* [in] */ CRegulator.rentalBondAuthority CAdministration.images.rentalBondAuthorityId);

    CARAPI GetImages.RentalBondAuthorityId(
     /* [out] */ CRegulator.rentalBondAuthority* CAdministration.images.rentalBondAuthorityId);


   CARAPI SetImages.CommunityHousingRegulatorId(
     /* [in] */ CRegulator.communityHousingRegulator CAdministration.images.communityHousingRegulatorId);

    CARAPI GetImages.CommunityHousingRegulatorId(
     /* [out] */ CRegulator.communityHousingRegulator* CAdministration.images.communityHousingRegulatorId);


   CARAPI SetImages.CommunityId(
     /* [in] */ CStakeholder.community CAdministration.images.communityId);

    CARAPI GetImages.CommunityId(
     /* [out] */ CStakeholder.community* CAdministration.images.communityId);


   CARAPI SetImages.MediaId(
     /* [in] */ CStakeholder.media CAdministration.images.mediaId);

    CARAPI GetImages.MediaId(
     /* [out] */ CStakeholder.media* CAdministration.images.mediaId);


   CARAPI SetImages.PartnerId(
     /* [in] */ CStakeholder.partner CAdministration.images.partnerId);

    CARAPI GetImages.PartnerId(
     /* [out] */ CStakeholder.partner* CAdministration.images.partnerId);


   CARAPI SetImages.NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.images.natRegId);

    CARAPI GetImages.NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.images.natRegId);


   CARAPI SetImages.StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.images.stateBasedRegId);

    CARAPI GetImages.StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.images.stateBasedRegId);


   CARAPI SetImages.PropertyInspectionResId(
     /* [in] */ CProperty.propertyInspectionResidential CAdministration.images.propertyInspectionResId);

    CARAPI GetImages.PropertyInspectionResId(
     /* [out] */ CProperty.propertyInspectionResidential* CAdministration.images.propertyInspectionResId);


   CARAPI SetImages.PropertyInspectionCommercId(
     /* [in] */ CProperty.propertyInspectionCommercial CAdministration.images.propertyInspectionCommercId);

    CARAPI GetImages.PropertyInspectionCommercId(
     /* [out] */ CProperty.propertyInspectionCommercial* CAdministration.images.propertyInspectionCommercId);


   CARAPI SetImages.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.images.serviceIds);

    CARAPI GetImages.ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.images.serviceIds);


   CARAPI SetImages.ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CAdministration.images.itemIds);

    CARAPI GetImages.ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CAdministration.images.itemIds);


   CARAPI SetImages.JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CAdministration.images.jobIds);

    CARAPI GetImages.JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CAdministration.images.jobIds);


   CARAPI SetImages.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.images.docRefIds);

    CARAPI GetImages.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.images.docRefIds);


   CARAPI SetImages.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.images.imageRefIds);

    CARAPI GetImages.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.images.imageRefIds);


   CARAPI SetImages.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.images.audioRefIds);

    CARAPI GetImages.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.images.audioRefIds);


   CARAPI SetImages.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.images.videoRefIds);

    CARAPI GetImages.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.images.videoRefIds);


   CARAPI SetAudio.AudioRefId(
     /* [in] */ const String& CAdministration.audio.audioRefId);

    CARAPI GetAudio.AudioRefId(
     /* [out] */ String* CAdministration.audio.audioRefId);


   CARAPI SetAudio.AudioHash(
     /* [in] */ const String& CAdministration.audio.audioHash);

    CARAPI GetAudio.AudioHash(
     /* [out] */ String* CAdministration.audio.audioHash);


   CARAPI SetAudio.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.audio.businessChannelOwnerId);

    CARAPI GetAudio.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.audio.businessChannelOwnerId);


   CARAPI SetAudio.BranchId(
     /* [in] */ CAdministration.branch CAdministration.audio.branchId);

    CARAPI GetAudio.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.audio.branchId);


   CARAPI SetAudio.DeptMapId(
     /* [in] */ CAdministration.mapOfdepartments CAdministration.audio.deptMapId);

    CARAPI GetAudio.DeptMapId(
     /* [out] */ CAdministration.mapOfdepartments* CAdministration.audio.deptMapId);


   CARAPI SetAudio.GenAsCARAPI SetIds(
     /* [in] */ ArrayOf<CFinance.masterAsCARAPI SetRegister> CAdministration.audio.genAsCARAPI SetIds);

    CARAPI GetAudio.GenAsCARAPI SetIds(
     /* [out, callee] */ ArrayOf<CFinance.masterAsCARAPI SetRegister>* CAdministration.audio.genAsCARAPI SetIds);


   CARAPI SetAudio.EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.audio.employeeIds);

    CARAPI GetAudio.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.audio.employeeIds);


   CARAPI SetAudio.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.audio.customerIds);

    CARAPI GetAudio.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.audio.customerIds);


   CARAPI SetAudio.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.audio.supplierIds);

    CARAPI GetAudio.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.audio.supplierIds);


   CARAPI SetAudio.SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.audio.solicitorIds);

    CARAPI GetAudio.SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.audio.solicitorIds);


   CARAPI SetAudio.AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.audio.agentIds);

    CARAPI GetAudio.AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.audio.agentIds);


   CARAPI SetAudio.NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder> CAdministration.audio.nonGovStakeholderIds);

    CARAPI GetAudio.NonGovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.audio.nonGovStakeholderIds);


   CARAPI SetAudio.GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.audio.govStakeholderIds);

    CARAPI GetAudio.GovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.audio.govStakeholderIds);


   CARAPI SetAudio.NCATId(
     /* [in] */ CRegulator.nCAT CAdministration.audio.nCATId);

    CARAPI GetAudio.NCATId(
     /* [out] */ CRegulator.nCAT* CAdministration.audio.nCATId);


   CARAPI SetAudio.CommunityId(
     /* [in] */ CStakeholder.community CAdministration.audio.communityId);

    CARAPI GetAudio.CommunityId(
     /* [out] */ CStakeholder.community* CAdministration.audio.communityId);


   CARAPI SetAudio.MediaId(
     /* [in] */ CStakeholder.media CAdministration.audio.mediaId);

    CARAPI GetAudio.MediaId(
     /* [out] */ CStakeholder.media* CAdministration.audio.mediaId);


   CARAPI SetAudio.PartnerId(
     /* [in] */ CStakeholder.partner CAdministration.audio.partnerId);

    CARAPI GetAudio.PartnerId(
     /* [out] */ CStakeholder.partner* CAdministration.audio.partnerId);


   CARAPI SetAudio.NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.audio.natRegId);

    CARAPI GetAudio.NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.audio.natRegId);


   CARAPI SetAudio.StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.audio.stateBasedRegId);

    CARAPI GetAudio.StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.audio.stateBasedRegId);


   CARAPI SetAudio.AsCARAPI SetInspectionCommercId(
     /* [in] */ asCARAPI SetInspectionCommercial CAdministration.audio.asCARAPI SetInspectionCommercId);

    CARAPI GetAudio.AsCARAPI SetInspectionCommercId(
     /* [out] */ asCARAPI SetInspectionCommercial* CAdministration.audio.asCARAPI SetInspectionCommercId);


   CARAPI SetAudio.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.audio.serviceIds);

    CARAPI GetAudio.ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.audio.serviceIds);


   CARAPI SetAudio.ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CAdministration.audio.itemIds);

    CARAPI GetAudio.ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CAdministration.audio.itemIds);


   CARAPI SetAudio.JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CAdministration.audio.jobIds);

    CARAPI GetAudio.JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CAdministration.audio.jobIds);


   CARAPI SetAudio.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.audio.docRefIds);

    CARAPI GetAudio.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.audio.docRefIds);


   CARAPI SetAudio.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.audio.imageRefIds);

    CARAPI GetAudio.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.audio.imageRefIds);


   CARAPI SetAudio.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.audio.audioRefIds);

    CARAPI GetAudio.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.audio.audioRefIds);


   CARAPI SetAudio.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.audio.videoRefIds);

    CARAPI GetAudio.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.audio.videoRefIds);





   CARAPI SetVideo.VideoRefId(
     /* [in] */ const String& CAdministration.video.videoRefId);

    CARAPI GetVideo.VideoRefId(
     /* [out] */ String* CAdministration.video.videoRefId);


   CARAPI SetVideo.VideoHash(
     /* [in] */ const String& CAdministration.video.videoHash);

    CARAPI GetVideo.VideoHash(
     /* [out] */ String* CAdministration.video.videoHash);


   CARAPI SetVideo.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.video.businessChannelOwnerId);

    CARAPI GetVideo.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.video.businessChannelOwnerId);


   CARAPI SetVideo.BranchId(
     /* [in] */ CAdministration.branch CAdministration.video.branchId);

    CARAPI GetVideo.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.video.branchId);


   CARAPI SetVideo.DeptId(
     /* [in] */ CAdministration.department CAdministration.video.deptId);

    CARAPI GetVideo.DeptId(
     /* [out] */ CAdministration.department* CAdministration.video.deptId);


   CARAPI SetVideo.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CAdministration.video.propertyIds);

    CARAPI GetVideo.PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CAdministration.video.propertyIds);


   CARAPI SetVideo.PropOwners(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CAdministration.video.propOwners);

    CARAPI GetVideo.PropOwners(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CAdministration.video.propOwners);


   CARAPI SetVideo.EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.video.employeeIds);

    CARAPI GetVideo.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.video.employeeIds);


   CARAPI SetVideo.TenancyIds(
     /* [in] */ ArrayOf<CProperty.tenant> CAdministration.video.tenancyIds);

    CARAPI GetVideo.TenancyIds(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CAdministration.video.tenancyIds);


   CARAPI SetVideo.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.video.customerIds);

    CARAPI GetVideo.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.video.customerIds);


   CARAPI SetVideo.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.video.supplierIds);

    CARAPI GetVideo.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.video.supplierIds);


   CARAPI SetVideo.SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.video.solicitorIds);

    CARAPI GetVideo.SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.video.solicitorIds);


   CARAPI SetVideo.AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.video.agentIds);

    CARAPI GetVideo.AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.video.agentIds);


   CARAPI SetVideo.NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder> CAdministration.video.nonGovStakeholderIds);

    CARAPI GetVideo.NonGovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.video.nonGovStakeholderIds);


   CARAPI SetVideo.GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.video.govStakeholderIds);

    CARAPI GetVideo.GovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.video.govStakeholderIds);


   CARAPI SetVideo.StateLAHCId(
     /* [in] */ CStakeholder.stateLAHAuthority CAdministration.video.stateLAHCId);

    CARAPI GetVideo.StateLAHCId(
     /* [out] */ CStakeholder.stateLAHAuthority* CAdministration.video.stateLAHCId);


   CARAPI SetVideo.StatePublicHousingAuthorityId(
     /* [in] */ CStakeholder.statePublicHousingAuthority CAdministration.video.statePublicHousingAuthorityId);

    CARAPI GetVideo.StatePublicHousingAuthorityId(
     /* [out] */ CStakeholder.statePublicHousingAuthority* CAdministration.video.statePublicHousingAuthorityId);


   CARAPI SetVideo.NCATId(
     /* [in] */ CRegulator.nCAT CAdministration.video.nCATId);

    CARAPI GetVideo.NCATId(
     /* [out] */ CRegulator.nCAT* CAdministration.video.nCATId);


   CARAPI SetVideo.RentalBondAuthorityId(
     /* [in] */ CRegulator.rentalBondAuthority CAdministration.video.rentalBondAuthorityId);

    CARAPI GetVideo.RentalBondAuthorityId(
     /* [out] */ CRegulator.rentalBondAuthority* CAdministration.video.rentalBondAuthorityId);


   CARAPI SetVideo.CommunityHousingRegulatorId(
     /* [in] */ CRegulator.communityHousingRegulator CAdministration.video.communityHousingRegulatorId);

    CARAPI GetVideo.CommunityHousingRegulatorId(
     /* [out] */ CRegulator.communityHousingRegulator* CAdministration.video.communityHousingRegulatorId);


   CARAPI SetVideo.CommunityId(
     /* [in] */ CStakeholder.community CAdministration.video.communityId);

    CARAPI GetVideo.CommunityId(
     /* [out] */ CStakeholder.community* CAdministration.video.communityId);


   CARAPI SetVideo.MediaId(
     /* [in] */ CStakeholder.media CAdministration.video.mediaId);

    CARAPI GetVideo.MediaId(
     /* [out] */ CStakeholder.media* CAdministration.video.mediaId);


   CARAPI SetVideo.PartnerId(
     /* [in] */ CStakeholder.partner CAdministration.video.partnerId);

    CARAPI GetVideo.PartnerId(
     /* [out] */ CStakeholder.partner* CAdministration.video.partnerId);


   CARAPI SetVideo.NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.video.natRegId);

    CARAPI GetVideo.NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.video.natRegId);


   CARAPI SetVideo.StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.video.stateBasedRegId);

    CARAPI GetVideo.StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.video.stateBasedRegId);


   CARAPI SetVideo.PropertyInspectionResId(
     /* [in] */ CProperty.propertyInspectionResidential CAdministration.video.propertyInspectionResId);

    CARAPI GetVideo.PropertyInspectionResId(
     /* [out] */ CProperty.propertyInspectionResidential* CAdministration.video.propertyInspectionResId);


   CARAPI SetVideo.PropertyInspectionCommercId(
     /* [in] */ CProperty.propertyInspectionCommercial CAdministration.video.propertyInspectionCommercId);

    CARAPI GetVideo.PropertyInspectionCommercId(
     /* [out] */ CProperty.propertyInspectionCommercial* CAdministration.video.propertyInspectionCommercId);


   CARAPI SetVideo.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.video.serviceIds);

    CARAPI GetVideo.ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.video.serviceIds);


   CARAPI SetVideo.ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CAdministration.video.itemIds);

    CARAPI GetVideo.ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CAdministration.video.itemIds);


   CARAPI SetVideo.JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CAdministration.video.jobIds);

    CARAPI GetVideo.JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CAdministration.video.jobIds);


   CARAPI SetVideo.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.video.docRefIds);

    CARAPI GetVideo.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.video.docRefIds);


   CARAPI SetVideo.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.video.imageRefIds);

    CARAPI GetVideo.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.video.imageRefIds);


   CARAPI SetVideo.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.video.audioRefIds);

    CARAPI GetVideo.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.video.audioRefIds);


   CARAPI SetVideo.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.video.videoRefIds);

    CARAPI GetVideo.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.video.videoRefIds);


   CARAPI SetItemType.ItemTypeId(
     /* [in] */ const String& CAdministration.itemType.itemTypeId);

    CARAPI GetItemType.ItemTypeId(
     /* [out] */ String* CAdministration.itemType.itemTypeId);


   CARAPI SetItemType.ItemTypeDescription(
     /* [in] */ const String& CAdministration.itemType.itemTypeDescription);

    CARAPI GetItemType.ItemTypeDescription(
     /* [out] */ String* CAdministration.itemType.itemTypeDescription);


   CARAPI SetItemType.ItemModelNumber(
     /* [in] */ const String& CAdministration.itemType.itemModelNumber);

    CARAPI GetItemType.ItemModelNumber(
     /* [out] */ String* CAdministration.itemType.itemModelNumber);


   CARAPI SetItemType.ItemName(
     /* [in] */ const String& CAdministration.itemType.itemName);

    CARAPI GetItemType.ItemName(
     /* [out] */ String* CAdministration.itemType.itemName);


   CARAPI SetItemType.NumberInInventory(
     /* [in] */ Int32 CAdministration.itemType.numberInInventory);

    CARAPI GetItemType.NumberInInventory(
     /* [out] */ Int32* CAdministration.itemType.numberInInventory);


   CARAPI SetItemType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.itemType.businessChannelOwnerId);

    CARAPI GetItemType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.itemType.businessChannelOwnerId);


   CARAPI SetItemType.OurProductTypeId(
     /* [in] */ CFactory.productType CAdministration.itemType.ourProductTypeId);

    CARAPI GetItemType.OurProductTypeId(
     /* [out] */ CFactory.productType* CAdministration.itemType.ourProductTypeId);


   CARAPI SetItemType.BranchId(
     /* [in] */ CAdministration.branch CAdministration.itemType.branchId);

    CARAPI GetItemType.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.itemType.branchId);


   CARAPI SetItemType.DeptId(
     /* [in] */ CAdministration.department CAdministration.itemType.deptId);

    CARAPI GetItemType.DeptId(
     /* [out] */ CAdministration.department* CAdministration.itemType.deptId);


   CARAPI SetItemType.Suppliers(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.itemType.suppliers);

    CARAPI GetItemType.Suppliers(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.itemType.suppliers);


   CARAPI SetItemType.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.itemType.serviceIds);

    CARAPI GetItemType.ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.itemType.serviceIds);


   CARAPI SetItemType.SupplierTypeIds(
     /* [in] */ ArrayOf<CSupplier.supplierType> CAdministration.itemType.supplierTypeIds);

    CARAPI GetItemType.SupplierTypeIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplierType>* CAdministration.itemType.supplierTypeIds);


   CARAPI SetItemType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.itemType.docRefIds);

    CARAPI GetItemType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.itemType.docRefIds);


   CARAPI SetItemType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.itemType.imageRefIds);

    CARAPI GetItemType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.itemType.imageRefIds);


   CARAPI SetItemType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.itemType.videoRefIds);

    CARAPI GetItemType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.itemType.videoRefIds);


   CARAPI SetItem.ItemId(
     /* [in] */ const String& CAdministration.item.itemId);

    CARAPI GetItem.ItemId(
     /* [out] */ String* CAdministration.item.itemId);


   CARAPI SetItem.ItemName(
     /* [in] */ const String& CAdministration.item.itemName);

    CARAPI GetItem.ItemName(
     /* [out] */ String* CAdministration.item.itemName);


   CARAPI SetItem.ItemDescription(
     /* [in] */ const String& CAdministration.item.itemDescription);

    CARAPI GetItem.ItemDescription(
     /* [out] */ String* CAdministration.item.itemDescription);


   CARAPI SetItem.Fragile(
     /* [in] */ Boolean CAdministration.item.fragile);

    CARAPI GetItem.Fragile(
     /* [out] */ Boolean* CAdministration.item.fragile);


   CARAPI SetItem.Toxic(
     /* [in] */ Boolean CAdministration.item.toxic);

    CARAPI GetItem.Toxic(
     /* [out] */ Boolean* CAdministration.item.toxic);


   CARAPI SetItem.Corrosive(
     /* [in] */ Boolean CAdministration.item.corrosive);

    CARAPI GetItem.Corrosive(
     /* [out] */ Boolean* CAdministration.item.corrosive);


   CARAPI SetItem.ItemModelNumber(
     /* [in] */ const String& CAdministration.item.itemModelNumber);

    CARAPI GetItem.ItemModelNumber(
     /* [out] */ String* CAdministration.item.itemModelNumber);


   CARAPI SetItem.ItemSerialNumber(
     /* [in] */ const String& CAdministration.item.itemSerialNumber);

    CARAPI GetItem.ItemSerialNumber(
     /* [out] */ String* CAdministration.item.itemSerialNumber);


   CARAPI SetItem.ItemQualityDimensionsCheckedPassed(
     /* [in] */ Boolean CAdministration.item.itemQualityDimensionsCheckedPassed);

    CARAPI GetItem.ItemQualityDimensionsCheckedPassed(
     /* [out] */ Boolean* CAdministration.item.itemQualityDimensionsCheckedPassed);


   CARAPI SetItem.PricePerItem(
     /* [in] */ const String& CAdministration.item.pricePerItem);

    CARAPI GetItem.PricePerItem(
     /* [out] */ String* CAdministration.item.pricePerItem);


   CARAPI SetItem.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.item.businessChannelOwnerId);

    CARAPI GetItem.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.item.businessChannelOwnerId);


   CARAPI SetItem.OurProductId(
     /* [in] */ CFactory.product CAdministration.item.ourProductId);

    CARAPI GetItem.OurProductId(
     /* [out] */ CFactory.product* CAdministration.item.ourProductId);


   CARAPI SetItem.BranchId(
     /* [in] */ CAdministration.branch CAdministration.item.branchId);

    CARAPI GetItem.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.item.branchId);


   CARAPI SetItem.DeptId(
     /* [in] */ CAdministration.department CAdministration.item.deptId);

    CARAPI GetItem.DeptId(
     /* [out] */ CAdministration.department* CAdministration.item.deptId);


   CARAPI SetItem.SupplierId(
     /* [in] */ CSupplier.supplier CAdministration.item.supplierId);

    CARAPI GetItem.SupplierId(
     /* [out] */ CSupplier.supplier* CAdministration.item.supplierId);


   CARAPI SetItem.ItemTypeId(
     /* [in] */ CAdministration.itemType CAdministration.item.itemTypeId);

    CARAPI GetItem.ItemTypeId(
     /* [out] */ CAdministration.itemType* CAdministration.item.itemTypeId);


   CARAPI SetItem.JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CAdministration.item.jobTypeIds);

    CARAPI GetItem.JobTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.jobType>* CAdministration.item.jobTypeIds);


   CARAPI SetItem.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.item.docRefIds);

    CARAPI GetItem.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.item.docRefIds);


   CARAPI SetItem.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.item.imageRefIds);

    CARAPI GetItem.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.item.imageRefIds);


   CARAPI SetItem.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.item.videoRefIds);

    CARAPI GetItem.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.item.videoRefIds);


   CARAPI SetJobType.JobTypeId(
     /* [in] */ const String& CAdministration.jobType.jobTypeId);

    CARAPI GetJobType.JobTypeId(
     /* [out] */ String* CAdministration.jobType.jobTypeId);


   CARAPI SetJobType.JobDescription(
     /* [in] */ const String& CAdministration.jobType.jobDescription);

    CARAPI GetJobType.JobDescription(
     /* [out] */ String* CAdministration.jobType.jobDescription);


   CARAPI SetJobType.JobCode(
     /* [in] */ const String& CAdministration.jobType.jobCode);

    CARAPI GetJobType.JobCode(
     /* [out] */ String* CAdministration.jobType.jobCode);


   CARAPI SetJobType.JobName(
     /* [in] */ const String& CAdministration.jobType.jobName);

    CARAPI GetJobType.JobName(
     /* [out] */ String* CAdministration.jobType.jobName);


   CARAPI SetJobType.TaskSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.jobType.taskSequence);

    CARAPI GetJobType.TaskSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.jobType.taskSequence);


   CARAPI SetJobType.NatRegId(
     /* [in] */ ArrayOf<const String&> CAdministration.jobType.natRegId);

    CARAPI GetJobType.NatRegId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.jobType.natRegId);


   CARAPI SetJobType.StateBasedRegId(
     /* [in] */ ArrayOf<const String&> CAdministration.jobType.stateBasedRegId);

    CARAPI GetJobType.StateBasedRegId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.jobType.stateBasedRegId);


   CARAPI SetJobType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.jobType.businessChannelOwnerId);

    CARAPI GetJobType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.jobType.businessChannelOwnerId);


   CARAPI SetJobType.BranchId(
     /* [in] */ CAdministration.branch CAdministration.jobType.branchId);

    CARAPI GetJobType.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.jobType.branchId);


   CARAPI SetJobType.DeptId(
     /* [in] */ CAdministration.department CAdministration.jobType.deptId);

    CARAPI GetJobType.DeptId(
     /* [out] */ CAdministration.department* CAdministration.jobType.deptId);


   CARAPI SetJobType.Suppliers(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.jobType.suppliers);

    CARAPI GetJobType.Suppliers(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.jobType.suppliers);


   CARAPI SetJobType.ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CAdministration.jobType.itemTypeIds);

    CARAPI GetJobType.ItemTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CAdministration.jobType.itemTypeIds);


   CARAPI SetJobType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.jobType.docRefIds);

    CARAPI GetJobType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.jobType.docRefIds);


   CARAPI SetJobType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.jobType.imageRefIds);

    CARAPI GetJobType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.jobType.imageRefIds);


   CARAPI SetJobType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.jobType.videoRefIds);

    CARAPI GetJobType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.jobType.videoRefIds);


   CARAPI SetJob.JobId(
     /* [in] */ const String& CAdministration.job.jobId);

    CARAPI GetJob.JobId(
     /* [out] */ String* CAdministration.job.jobId);


   CARAPI SetJob.JobDescription(
     /* [in] */ const String& CAdministration.job.jobDescription);

    CARAPI GetJob.JobDescription(
     /* [out] */ String* CAdministration.job.jobDescription);


   CARAPI SetJob.TaskDescriptionSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.job.taskDescriptionSequence);

    CARAPI GetJob.TaskDescriptionSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.job.taskDescriptionSequence);


   CARAPI SetJob.JobCode(
     /* [in] */ const String& CAdministration.job.jobCode);

    CARAPI GetJob.JobCode(
     /* [out] */ String* CAdministration.job.jobCode);


   CARAPI SetJob.JobName(
     /* [in] */ const String& CAdministration.job.jobName);

    CARAPI GetJob.JobName(
     /* [out] */ String* CAdministration.job.jobName);


   CARAPI SetJob.JobNum(
     /* [in] */ Int32 CAdministration.job.jobNum);

    CARAPI GetJob.JobNum(
     /* [out] */ Int32* CAdministration.job.jobNum);


   CARAPI SetJob.ResponsiveMaintenance(
     /* [in] */ Boolean CAdministration.job.responsiveMaintenance);

    CARAPI GetJob.ResponsiveMaintenance(
     /* [out] */ Boolean* CAdministration.job.responsiveMaintenance);


   CARAPI SetJob.PlannedMaintenance(
     /* [in] */ Boolean CAdministration.job.plannedMaintenance);

    CARAPI GetJob.PlannedMaintenance(
     /* [out] */ Boolean* CAdministration.job.plannedMaintenance);


   CARAPI SetJob.ImmediatePrevJobNums(
     /* [in] */ ArrayOf<Int32> CAdministration.job.immediatePrevJobNums);

    CARAPI GetJob.ImmediatePrevJobNums(
     /* [out, callee] */ ArrayOf<Int32>* CAdministration.job.immediatePrevJobNums);


   CARAPI SetJob.ImmediatePrevJobsQCPass(
     /* [in] */ ArrayOf<Boolean> CAdministration.job.immediatePrevJobsQCPass);

    CARAPI GetJob.ImmediatePrevJobsQCPass(
     /* [out, callee] */ ArrayOf<Boolean>* CAdministration.job.immediatePrevJobsQCPass);


   CARAPI SetJob.DateTimeTaskStartSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.job.dateTimeTaskStartSequence);

    CARAPI GetJob.DateTimeTaskStartSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.job.dateTimeTaskStartSequence);


   CARAPI SetJob.DateTimeTaskEndSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.job.dateTimeTaskEndSequence);

    CARAPI GetJob.DateTimeTaskEndSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.job.dateTimeTaskEndSequence);


   CARAPI SetJob.ActualTaskStartTime(
     /* [in] */ ArrayOf<const String&> CAdministration.job.actualTaskStartTime);

    CARAPI GetJob.ActualTaskStartTime(
     /* [out, callee] */ ArrayOf<String>* CAdministration.job.actualTaskStartTime);


   CARAPI SetJob.ActualTaskCompleteTime(
     /* [in] */ ArrayOf<const String&> CAdministration.job.actualTaskCompleteTime);

    CARAPI GetJob.ActualTaskCompleteTime(
     /* [out, callee] */ ArrayOf<String>* CAdministration.job.actualTaskCompleteTime);


   CARAPI SetJob.TaskCompletionQCPasses(
     /* [in] */ ArrayOf<Boolean> CAdministration.job.taskCompletionQCPasses);

    CARAPI GetJob.TaskCompletionQCPasses(
     /* [out, callee] */ ArrayOf<Boolean>* CAdministration.job.taskCompletionQCPasses);


   CARAPI SetJob.JobCompletionQCPass(
     /* [in] */ Boolean CAdministration.job.jobCompletionQCPass);

    CARAPI GetJob.JobCompletionQCPass(
     /* [out] */ Boolean* CAdministration.job.jobCompletionQCPass);


   CARAPI SetJob.NextJobTypeId(
     /* [in] */ const String& CAdministration.job.nextJobTypeId);

    CARAPI GetJob.NextJobTypeId(
     /* [out] */ String* CAdministration.job.nextJobTypeId);


   CARAPI SetJob.TenantDamages(
     /* [in] */ ArrayOf<Boolean> CAdministration.job.tenantDamages);

    CARAPI GetJob.TenantDamages(
     /* [out, callee] */ ArrayOf<Boolean>* CAdministration.job.tenantDamages);


   CARAPI SetJob.LesseeCustomerDamage(
     /* [in] */ ArrayOf<Boolean> CAdministration.job.lesseeCustomerDamage);

    CARAPI GetJob.LesseeCustomerDamage(
     /* [out, callee] */ ArrayOf<Boolean>* CAdministration.job.lesseeCustomerDamage);


   CARAPI SetJob.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.job.businessChannelOwnerId);

    CARAPI GetJob.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.job.businessChannelOwnerId);


   CARAPI SetJob.BranchId(
     /* [in] */ CAdministration.branch CAdministration.job.branchId);

    CARAPI GetJob.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.job.branchId);


   CARAPI SetJob.DeptId(
     /* [in] */ CAdministration.department CAdministration.job.deptId);

    CARAPI GetJob.DeptId(
     /* [out] */ CAdministration.department* CAdministration.job.deptId);


   CARAPI SetJob.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.job.docRefIds);

    CARAPI GetJob.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.job.docRefIds);


   CARAPI SetJob.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.job.imageRefIds);

    CARAPI GetJob.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.job.imageRefIds);


   CARAPI SetJob.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CAdministration.job.propertyIds);

    CARAPI GetJob.PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CAdministration.job.propertyIds);


   CARAPI SetJob.MasterLedgerAsCARAPI SetId(
     /* [in] */ CFinance.masterAsCARAPI SetRegister CAdministration.job.masterLedgerAsCARAPI SetId);

    CARAPI GetJob.MasterLedgerAsCARAPI SetId(
     /* [out] */ CFinance.masterAsCARAPI SetRegister* CAdministration.job.masterLedgerAsCARAPI SetId);


   CARAPI SetJob.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.job.customerIds);

    CARAPI GetJob.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.job.customerIds);


   CARAPI SetJob.EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.job.employeeIds);

    CARAPI GetJob.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.job.employeeIds);


   CARAPI SetJob.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.job.supplierIds);

    CARAPI GetJob.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.job.supplierIds);


   CARAPI SetJob.JobTypeId(
     /* [in] */ CAdministration.jobType CAdministration.job.jobTypeId);

    CARAPI GetJob.JobTypeId(
     /* [out] */ CAdministration.jobType* CAdministration.job.jobTypeId);


   CARAPI SetJob.ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CAdministration.job.itemTypeIds);

    CARAPI GetJob.ItemTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CAdministration.job.itemTypeIds);


   CARAPI SetJob.ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CAdministration.job.itemIds);

    CARAPI GetJob.ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CAdministration.job.itemIds);


   CARAPI SetJob.ServiceTypeIds(
     /* [in] */ ArrayOf<CAdministration.serviceType> CAdministration.job.serviceTypeIds);

    CARAPI GetJob.ServiceTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.serviceType>* CAdministration.job.serviceTypeIds);


   CARAPI SetJob.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CAdministration.job.serviceIds);

    CARAPI GetJob.ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CAdministration.job.serviceIds);


   CARAPI SetJob.MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CAdministration.job.materialTypeIds);

    CARAPI GetJob.MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CAdministration.job.materialTypeIds);


   CARAPI SetJob.MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CAdministration.job.materialIds);

    CARAPI GetJob.MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CAdministration.job.materialIds);


   CARAPI SetJob.PartTypeIds(
     /* [in] */ ArrayOf<CFactory.partType> CAdministration.job.partTypeIds);

    CARAPI GetJob.PartTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CAdministration.job.partTypeIds);


   CARAPI SetJob.PartIds(
     /* [in] */ ArrayOf<CFactory.part> CAdministration.job.partIds);

    CARAPI GetJob.PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CAdministration.job.partIds);


   CARAPI SetJob.MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CAdministration.job.minorsubassemblyTypeIds);

    CARAPI GetJob.MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CAdministration.job.minorsubassemblyTypeIds);


   CARAPI SetJob.MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CAdministration.job.minorsubassemblyIds);

    CARAPI GetJob.MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CAdministration.job.minorsubassemblyIds);


   CARAPI SetJob.SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CAdministration.job.subassemblyTypeIds);

    CARAPI GetJob.SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CAdministration.job.subassemblyTypeIds);


   CARAPI SetJob.SubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.subassembly> CAdministration.job.subassemblyIds);

    CARAPI GetJob.SubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.subassembly>* CAdministration.job.subassemblyIds);


   CARAPI SetJob.MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CAdministration.job.majorsubassemblyTypeIds);

    CARAPI GetJob.MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CAdministration.job.majorsubassemblyTypeIds);


   CARAPI SetJob.MajorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.majorsubassembly> CAdministration.job.majorsubassemblyIds);

    CARAPI GetJob.MajorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassembly>* CAdministration.job.majorsubassemblyIds);


   CARAPI SetJob.LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CAdministration.job.lesserassemblyTypeIds);

    CARAPI GetJob.LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CAdministration.job.lesserassemblyTypeIds);


   CARAPI SetJob.LesserAssemblyIds(
     /* [in] */ ArrayOf<CFactory.lesserassembly> CAdministration.job.lesserassemblyIds);

    CARAPI GetJob.LesserAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassembly>* CAdministration.job.lesserassemblyIds);


   CARAPI SetJob.AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CAdministration.job.assemblyTypeIds);

    CARAPI GetJob.AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CAdministration.job.assemblyTypeIds);


   CARAPI SetJob.AssemblyIds(
     /* [in] */ ArrayOf<CFactory.assembly> CAdministration.job.assemblyIds);

    CARAPI GetJob.AssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.assembly>* CAdministration.job.assemblyIds);


   CARAPI SetJob.GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CAdministration.job.greaterassemblyTypeIds);

    CARAPI GetJob.GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CAdministration.job.greaterassemblyTypeIds);


   CARAPI SetJob.GreaterAssemblyIds(
     /* [in] */ ArrayOf<CFactory.greaterassembly> CAdministration.job.greaterassemblyIds);

    CARAPI GetJob.GreaterAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassembly>* CAdministration.job.greaterassemblyIds);


   CARAPI SetJob.ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CAdministration.job.productTypeIds);

    CARAPI GetJob.ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CAdministration.job.productTypeIds);


   CARAPI SetJob.ProductIds(
     /* [in] */ ArrayOf<CFactory.product> CAdministration.job.productIds);

    CARAPI GetJob.ProductIds(
     /* [out, callee] */ ArrayOf<CFactory.product>* CAdministration.job.productIds);


   CARAPI SetJob.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CAdministration.job.masterSalesOrderId);

    CARAPI GetJob.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CAdministration.job.masterSalesOrderId);


   CARAPI SetJob.PurchOrderId(
     /* [in] */ realEstatePurchOrders CAdministration.job.purchOrderId);

    CARAPI GetJob.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CAdministration.job.purchOrderId);


   CARAPI SetJob.NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.job.natRegId);

    CARAPI GetJob.NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.job.natRegId);


   CARAPI SetJob.StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.job.stateBasedRegId);

    CARAPI GetJob.StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.job.stateBasedRegId);


   CARAPI SetLeaveTypesCodes.LeaveId(
     /* [in] */ const String& CAdministration.leaveTypesCodes.leaveId);

    CARAPI GetLeaveTypesCodes.LeaveId(
     /* [out] */ String* CAdministration.leaveTypesCodes.leaveId);


   CARAPI SetLeaveTypesCodes.LeaveCode(
     /* [in] */ const String& CAdministration.leaveTypesCodes.leaveCode);

    CARAPI GetLeaveTypesCodes.LeaveCode(
     /* [out] */ String* CAdministration.leaveTypesCodes.leaveCode);


   CARAPI SetLeaveTypesCodes.LeaveDescription(
     /* [in] */ const String& CAdministration.leaveTypesCodes.leaveDescription);

    CARAPI GetLeaveTypesCodes.LeaveDescription(
     /* [out] */ String* CAdministration.leaveTypesCodes.leaveDescription);


   CARAPI SetLeaveTypesCodes.AwardName(
     /* [in] */ const String& CAdministration.leaveTypesCodes.awardName);

    CARAPI GetLeaveTypesCodes.AwardName(
     /* [out] */ String* CAdministration.leaveTypesCodes.awardName);


   CARAPI SetLeaveTypesCodes.Notes(
     /* [in] */ const String& CAdministration.leaveTypesCodes.notes);

    CARAPI GetLeaveTypesCodes.Notes(
     /* [out] */ String* CAdministration.leaveTypesCodes.notes);


   CARAPI SetLeaveTypesCodes.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.leaveTypesCodes.businessChannelOwnerId);

    CARAPI GetLeaveTypesCodes.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.leaveTypesCodes.businessChannelOwnerId);


   CARAPI SetLeaveTypesCodes.BranchId(
     /* [in] */ CAdministration.branch CAdministration.leaveTypesCodes.branchId);

    CARAPI GetLeaveTypesCodes.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.leaveTypesCodes.branchId);


   CARAPI SetLeaveTypesCodes.DeptId(
     /* [in] */ CAdministration.department CAdministration.leaveTypesCodes.deptId);

    CARAPI GetLeaveTypesCodes.DeptId(
     /* [out] */ CAdministration.department* CAdministration.leaveTypesCodes.deptId);


   CARAPI SetLeaveTypesCodes.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.leaveTypesCodes.docRefIds);

    CARAPI GetLeaveTypesCodes.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.leaveTypesCodes.docRefIds);


   CARAPI SetQuoteIn.QuoteInId(
     /* [in] */ const String& CAdministration.quoteIn.quoteInId);

    CARAPI GetQuoteIn.QuoteInId(
     /* [out] */ String* CAdministration.quoteIn.quoteInId);


   CARAPI SetQuoteIn.JobDescription(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteIn.jobDescription);

    CARAPI GetQuoteIn.JobDescription(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteIn.jobDescription);


   CARAPI SetQuoteIn.JobTypeId(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteIn.jobTypeId);

    CARAPI GetQuoteIn.JobTypeId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteIn.jobTypeId);


   CARAPI SetQuoteIn.JobName(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteIn.jobName);

    CARAPI GetQuoteIn.JobName(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteIn.jobName);


   CARAPI SetQuoteIn.ItemId(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteIn.itemId);

    CARAPI GetQuoteIn.ItemId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteIn.itemId);


   CARAPI SetQuoteIn.ConditionsUponCustomer(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteIn.conditionsUponCustomer);

    CARAPI GetQuoteIn.ConditionsUponCustomer(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteIn.conditionsUponCustomer);


   CARAPI SetQuoteIn.QuoteAmountEachJob(
     /* [in] */ ArrayOf<Double> CAdministration.quoteIn.quoteAmountEachJob);

    CARAPI GetQuoteIn.QuoteAmountEachJob(
     /* [out, callee] */ ArrayOf<Double>* CAdministration.quoteIn.quoteAmountEachJob);


   CARAPI SetQuoteIn.QuoteTotalForOrder(
     /* [in] */ Double CAdministration.quoteIn.quoteTotalForOrder);

    CARAPI GetQuoteIn.QuoteTotalForOrder(
     /* [out] */ Double* CAdministration.quoteIn.quoteTotalForOrder);


   CARAPI SetQuoteIn.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.quoteIn.businessChannelOwnerId);

    CARAPI GetQuoteIn.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.quoteIn.businessChannelOwnerId);


   CARAPI SetQuoteIn.BranchId(
     /* [in] */ CAdministration.branch CAdministration.quoteIn.branchId);

    CARAPI GetQuoteIn.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.quoteIn.branchId);


   CARAPI SetQuoteIn.DeptId(
     /* [in] */ CAdministration.department CAdministration.quoteIn.deptId);

    CARAPI GetQuoteIn.DeptId(
     /* [out] */ CAdministration.department* CAdministration.quoteIn.deptId);


   CARAPI SetQuoteIn.SupplierId(
     /* [in] */ CSupplier.supplier CAdministration.quoteIn.supplierId);

    CARAPI GetQuoteIn.SupplierId(
     /* [out] */ CSupplier.supplier* CAdministration.quoteIn.supplierId);


   CARAPI SetQuoteIn.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.quoteIn.docRefIds);

    CARAPI GetQuoteIn.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.quoteIn.docRefIds);


   CARAPI SetQuoteIn.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.quoteIn.imageRefIds);

    CARAPI GetQuoteIn.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.quoteIn.imageRefIds);


   CARAPI SetQuoteIn.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.quoteIn.videoRefIds);

    CARAPI GetQuoteIn.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.quoteIn.videoRefIds);


   CARAPI SetQuoteIn.PurchOrderId(
     /* [in] */ realEstatePurchOrders CAdministration.quoteIn.purchOrderId);

    CARAPI GetQuoteIn.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CAdministration.quoteIn.purchOrderId);


   CARAPI SetQuoteOut.QuoteOutId(
     /* [in] */ const String& CAdministration.quoteOut.quoteOutId);

    CARAPI GetQuoteOut.QuoteOutId(
     /* [out] */ String* CAdministration.quoteOut.quoteOutId);


   CARAPI SetQuoteOut.JobDescription(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteOut.jobDescription);

    CARAPI GetQuoteOut.JobDescription(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteOut.jobDescription);


   CARAPI SetQuoteOut.JobTypeId(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteOut.jobTypeId);

    CARAPI GetQuoteOut.JobTypeId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteOut.jobTypeId);


   CARAPI SetQuoteOut.JobName(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteOut.jobName);

    CARAPI GetQuoteOut.JobName(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteOut.jobName);


   CARAPI SetQuoteOut.ItemId(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteOut.itemId);

    CARAPI GetQuoteOut.ItemId(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteOut.itemId);


   CARAPI SetQuoteOut.ConditionsUponCustomer(
     /* [in] */ ArrayOf<const String&> CAdministration.quoteOut.conditionsUponCustomer);

    CARAPI GetQuoteOut.ConditionsUponCustomer(
     /* [out, callee] */ ArrayOf<String>* CAdministration.quoteOut.conditionsUponCustomer);


   CARAPI SetQuoteOut.QuoteAmountEachJobItem(
     /* [in] */ ArrayOf<Double> CAdministration.quoteOut.quoteAmountEachJobItem);

    CARAPI GetQuoteOut.QuoteAmountEachJobItem(
     /* [out, callee] */ ArrayOf<Double>* CAdministration.quoteOut.quoteAmountEachJobItem);


   CARAPI SetQuoteOut.QuoteTotalForOrder(
     /* [in] */ Double CAdministration.quoteOut.quoteTotalForOrder);

    CARAPI GetQuoteOut.QuoteTotalForOrder(
     /* [out] */ Double* CAdministration.quoteOut.quoteTotalForOrder);


   CARAPI SetQuoteOut.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.quoteOut.businessChannelOwnerId);

    CARAPI GetQuoteOut.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.quoteOut.businessChannelOwnerId);


   CARAPI SetQuoteOut.BranchId(
     /* [in] */ CAdministration.branch CAdministration.quoteOut.branchId);

    CARAPI GetQuoteOut.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.quoteOut.branchId);


   CARAPI SetQuoteOut.DeptId(
     /* [in] */ CAdministration.department CAdministration.quoteOut.deptId);

    CARAPI GetQuoteOut.DeptId(
     /* [out] */ CAdministration.department* CAdministration.quoteOut.deptId);


   CARAPI SetQuoteOut.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.quoteOut.docRefIds);

    CARAPI GetQuoteOut.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.quoteOut.docRefIds);


   CARAPI SetQuoteOut.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.quoteOut.imageRefIds);

    CARAPI GetQuoteOut.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.quoteOut.imageRefIds);


   CARAPI SetQuoteOut.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.quoteOut.videoRefIds);

    CARAPI GetQuoteOut.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.quoteOut.videoRefIds);


   CARAPI SetQuoteOut.Customers(
     /* [in] */ ArrayOf<CCustomer.customer> CAdministration.quoteOut.customers);

    CARAPI GetQuoteOut.Customers(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CAdministration.quoteOut.customers);


   CARAPI SetQuoteOut.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CAdministration.quoteOut.masterSalesOrderId);

    CARAPI GetQuoteOut.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CAdministration.quoteOut.masterSalesOrderId);


   CARAPI SetRiskRegister.RiskId(
     /* [in] */ const String& CAdministration.riskRegister.riskId);

    CARAPI GetRiskRegister.RiskId(
     /* [out] */ String* CAdministration.riskRegister.riskId);


   CARAPI SetRiskRegister.PropertyType(
     /* [in] */ CHelper.propertyType CAdministration.riskRegister.propertyType);

    CARAPI GetRiskRegister.PropertyType(
     /* [out] */ CHelper.propertyType* CAdministration.riskRegister.propertyType);


   CARAPI SetRiskRegister.RiskDescriptionSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.riskRegister.riskDescriptionSequence);

    CARAPI GetRiskRegister.RiskDescriptionSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.riskRegister.riskDescriptionSequence);


   CARAPI SetRiskRegister.RiskMitigationSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.riskRegister.riskMitigationSequence);

    CARAPI GetRiskRegister.RiskMitigationSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.riskRegister.riskMitigationSequence);


   CARAPI SetRiskRegister.StatementsOfRisksAssociated(
     /* [in] */ ArrayOf<const String&> CAdministration.riskRegister.statementsOfRisksAssociated);

    CARAPI GetRiskRegister.StatementsOfRisksAssociated(
     /* [out, callee] */ ArrayOf<String>* CAdministration.riskRegister.statementsOfRisksAssociated);


   CARAPI SetRiskRegister.RiskLikelihoodRating(
     /* [in] */ CHelper.riskLikelihoodOfOccurrenceRating CAdministration.riskRegister.riskLikelihoodRating);

    CARAPI GetRiskRegister.RiskLikelihoodRating(
     /* [out] */ CHelper.riskLikelihoodOfOccurrenceRating* CAdministration.riskRegister.riskLikelihoodRating);


   CARAPI SetRiskRegister.RiskConsequenceRating(
     /* [in] */ CHelper.riskConsequence CAdministration.riskRegister.riskConsequenceRating);

    CARAPI GetRiskRegister.RiskConsequenceRating(
     /* [out] */ CHelper.riskConsequence* CAdministration.riskRegister.riskConsequenceRating);


   CARAPI SetRiskRegister.ResidualRiskLevel(
     /* [in] */ CHelper.residualRiskLevel CAdministration.riskRegister.residualRiskLevel);

    CARAPI GetRiskRegister.ResidualRiskLevel(
     /* [out] */ CHelper.residualRiskLevel* CAdministration.riskRegister.residualRiskLevel);


   CARAPI SetRiskRegister.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.riskRegister.businessChannelOwnerId);

    CARAPI GetRiskRegister.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.riskRegister.businessChannelOwnerId);


   CARAPI SetRiskRegister.BranchId(
     /* [in] */ CAdministration.branch CAdministration.riskRegister.branchId);

    CARAPI GetRiskRegister.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.riskRegister.branchId);


   CARAPI SetRiskRegister.DeptId(
     /* [in] */ CAdministration.department CAdministration.riskRegister.deptId);

    CARAPI GetRiskRegister.DeptId(
     /* [out] */ CAdministration.department* CAdministration.riskRegister.deptId);


   CARAPI SetRiskRegister.RoleId(
     /* [in] */ CAdministration.role CAdministration.riskRegister.roleId);

    CARAPI GetRiskRegister.RoleId(
     /* [out] */ CAdministration.role* CAdministration.riskRegister.roleId);


   CARAPI SetRiskRegister.PropertyId(
     /* [in] */ CProperty.property CAdministration.riskRegister.propertyId);

    CARAPI GetRiskRegister.PropertyId(
     /* [out] */ CProperty.property* CAdministration.riskRegister.propertyId);


   CARAPI SetRiskRegister.PropertyConstructionTypeId(
     /* [in] */ CProperty.propertyConstructionType CAdministration.riskRegister.propertyConstructionTypeId);

    CARAPI GetRiskRegister.PropertyConstructionTypeId(
     /* [out] */ CProperty.propertyConstructionType* CAdministration.riskRegister.propertyConstructionTypeId);


   CARAPI SetRiskRegister.MasterAsCARAPI SetTypeId(
     /* [in] */ CFinance.masterAsCARAPI SetType CAdministration.riskRegister.masterAsCARAPI SetTypeId);

    CARAPI GetRiskRegister.MasterAsCARAPI SetTypeId(
     /* [out] */ CFinance.masterAsCARAPI SetType* CAdministration.riskRegister.masterAsCARAPI SetTypeId);


   CARAPI SetRiskRegister.MasterAsCARAPI SetId(
     /* [in] */ CFinance.masterAsCARAPI SetRegister CAdministration.riskRegister.masterAsCARAPI SetId);

    CARAPI GetRiskRegister.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAsCARAPI SetRegister* CAdministration.riskRegister.masterAsCARAPI SetId);


   CARAPI SetRiskRegister.ProgramId(
     /* [in] */ CProperty.program CAdministration.riskRegister.programId);

    CARAPI GetRiskRegister.ProgramId(
     /* [out] */ CProperty.program* CAdministration.riskRegister.programId);


   CARAPI SetRiskRegister.ProjectId(
     /* [in] */ CProperty.project CAdministration.riskRegister.projectId);

    CARAPI GetRiskRegister.ProjectId(
     /* [out] */ CProperty.project* CAdministration.riskRegister.projectId);


   CARAPI SetRiskRegister.JobTypeId(
     /* [in] */ CAdministration.jobType CAdministration.riskRegister.jobTypeId);

    CARAPI GetRiskRegister.JobTypeId(
     /* [out] */ CAdministration.jobType* CAdministration.riskRegister.jobTypeId);


   CARAPI SetRiskRegister.JobId(
     /* [in] */ CAdministration.job CAdministration.riskRegister.jobId);

    CARAPI GetRiskRegister.JobId(
     /* [out] */ CAdministration.job* CAdministration.riskRegister.jobId);


   CARAPI SetRiskRegister.PurchaseOrderId(
     /* [in] */ realEstatePurchOrders CAdministration.riskRegister.purchaseOrderId);

    CARAPI GetRiskRegister.PurchaseOrderId(
     /* [out] */ realEstatePurchOrders* CAdministration.riskRegister.purchaseOrderId);


   CARAPI SetRiskRegister.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CAdministration.riskRegister.masterSalesOrderId);

    CARAPI GetRiskRegister.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CAdministration.riskRegister.masterSalesOrderId);


   CARAPI SetRiskRegister.AllocationId(
     /* [in] */ CProperty.allocation CAdministration.riskRegister.allocationId);

    CARAPI GetRiskRegister.AllocationId(
     /* [out] */ CProperty.allocation* CAdministration.riskRegister.allocationId);


   CARAPI SetRiskRegister.ComplaintId(
     /* [in] */ CCustomer.complaint CAdministration.riskRegister.complaintId);

    CARAPI GetRiskRegister.ComplaintId(
     /* [out] */ CCustomer.complaint* CAdministration.riskRegister.complaintId);


   CARAPI SetRiskRegister.ServiceTypeId(
     /* [in] */ CAdministration.serviceType CAdministration.riskRegister.serviceTypeId);

    CARAPI GetRiskRegister.ServiceTypeId(
     /* [out] */ CAdministration.serviceType* CAdministration.riskRegister.serviceTypeId);


   CARAPI SetRiskRegister.ItemTypeId(
     /* [in] */ CAdministration.itemType CAdministration.riskRegister.itemTypeId);

    CARAPI GetRiskRegister.ItemTypeId(
     /* [out] */ CAdministration.itemType* CAdministration.riskRegister.itemTypeId);


   CARAPI SetRiskRegister.ItemId(
     /* [in] */ CAdministration.item CAdministration.riskRegister.itemId);

    CARAPI GetRiskRegister.ItemId(
     /* [out] */ CAdministration.item* CAdministration.riskRegister.itemId);


   CARAPI SetRiskRegister.MaterialTypeId(
     /* [in] */ CFactory.materialType CAdministration.riskRegister.materialTypeId);

    CARAPI GetRiskRegister.MaterialTypeId(
     /* [out] */ CFactory.materialType* CAdministration.riskRegister.materialTypeId);


   CARAPI SetRiskRegister.MaterialId(
     /* [in] */ CFactory.material CAdministration.riskRegister.materialId);

    CARAPI GetRiskRegister.MaterialId(
     /* [out] */ CFactory.material* CAdministration.riskRegister.materialId);


   CARAPI SetRiskRegister.PartTypeId(
     /* [in] */ CFactory.partType CAdministration.riskRegister.partTypeId);

    CARAPI GetRiskRegister.PartTypeId(
     /* [out] */ CFactory.partType* CAdministration.riskRegister.partTypeId);


   CARAPI SetRiskRegister.PartId(
     /* [in] */ CFactory.part CAdministration.riskRegister.partId);

    CARAPI GetRiskRegister.PartId(
     /* [out] */ CFactory.part* CAdministration.riskRegister.partId);


   CARAPI SetRiskRegister.MinorSubAssemblyTypeId(
     /* [in] */ CFactory.minorsubassemblyType CAdministration.riskRegister.minorsubassemblyTypeId);

    CARAPI GetRiskRegister.MinorSubAssemblyTypeId(
     /* [out] */ CFactory.minorsubassemblyType* CAdministration.riskRegister.minorsubassemblyTypeId);


   CARAPI SetRiskRegister.MinorSubAssemblyId(
     /* [in] */ CFactory.minorsubassembly CAdministration.riskRegister.minorsubassemblyId);

    CARAPI GetRiskRegister.MinorSubAssemblyId(
     /* [out] */ CFactory.minorsubassembly* CAdministration.riskRegister.minorsubassemblyId);


   CARAPI SetRiskRegister.SubAssemblyTypeId(
     /* [in] */ CFactory.subassemblyType CAdministration.riskRegister.subassemblyTypeId);

    CARAPI GetRiskRegister.SubAssemblyTypeId(
     /* [out] */ CFactory.subassemblyType* CAdministration.riskRegister.subassemblyTypeId);


   CARAPI SetRiskRegister.SubAssemblyId(
     /* [in] */ CFactory.subassembly CAdministration.riskRegister.subassemblyId);

    CARAPI GetRiskRegister.SubAssemblyId(
     /* [out] */ CFactory.subassembly* CAdministration.riskRegister.subassemblyId);


   CARAPI SetRiskRegister.MajorSubAssemblyTypeId(
     /* [in] */ CFactory.majorsubassemblyType CAdministration.riskRegister.majorsubassemblyTypeId);

    CARAPI GetRiskRegister.MajorSubAssemblyTypeId(
     /* [out] */ CFactory.majorsubassemblyType* CAdministration.riskRegister.majorsubassemblyTypeId);


   CARAPI SetRiskRegister.MajorSubAssemblyId(
     /* [in] */ CFactory.majorsubassembly CAdministration.riskRegister.majorsubassemblyId);

    CARAPI GetRiskRegister.MajorSubAssemblyId(
     /* [out] */ CFactory.majorsubassembly* CAdministration.riskRegister.majorsubassemblyId);


   CARAPI SetRiskRegister.LesserAssemblyTypeId(
     /* [in] */ CFactory.lesserassemblyType CAdministration.riskRegister.lesserassemblyTypeId);

    CARAPI GetRiskRegister.LesserAssemblyTypeId(
     /* [out] */ CFactory.lesserassemblyType* CAdministration.riskRegister.lesserassemblyTypeId);


   CARAPI SetRiskRegister.LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CAdministration.riskRegister.lesserassemblyId);

    CARAPI GetRiskRegister.LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CAdministration.riskRegister.lesserassemblyId);


   CARAPI SetRiskRegister.AssemblyTypeId(
     /* [in] */ CFactory.assemblyType CAdministration.riskRegister.assemblyTypeId);

    CARAPI GetRiskRegister.AssemblyTypeId(
     /* [out] */ CFactory.assemblyType* CAdministration.riskRegister.assemblyTypeId);


   CARAPI SetRiskRegister.AssemblyId(
     /* [in] */ CFactory.assembly CAdministration.riskRegister.assemblyId);

    CARAPI GetRiskRegister.AssemblyId(
     /* [out] */ CFactory.assembly* CAdministration.riskRegister.assemblyId);


   CARAPI SetRiskRegister.GreaterAssemblyTypeId(
     /* [in] */ CFactory.greaterassemblyType CAdministration.riskRegister.greaterassemblyTypeId);

    CARAPI GetRiskRegister.GreaterAssemblyTypeId(
     /* [out] */ CFactory.greaterassemblyType* CAdministration.riskRegister.greaterassemblyTypeId);


   CARAPI SetRiskRegister.GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CAdministration.riskRegister.greaterassemblyId);

    CARAPI GetRiskRegister.GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CAdministration.riskRegister.greaterassemblyId);


   CARAPI SetRiskRegister.ProductTypeId(
     /* [in] */ CFactory.productType CAdministration.riskRegister.productTypeId);

    CARAPI GetRiskRegister.ProductTypeId(
     /* [out] */ CFactory.productType* CAdministration.riskRegister.productTypeId);


   CARAPI SetRiskRegister.ProductId(
     /* [in] */ CFactory.product CAdministration.riskRegister.productId);

    CARAPI GetRiskRegister.ProductId(
     /* [out] */ CFactory.product* CAdministration.riskRegister.productId);


   CARAPI SetRiskRegister.CustomerId(
     /* [in] */ CCustomer.customer CAdministration.riskRegister.customerId);

    CARAPI GetRiskRegister.CustomerId(
     /* [out] */ CCustomer.customer* CAdministration.riskRegister.customerId);


   CARAPI SetRiskRegister.CustomerTypeId(
     /* [in] */ CCustomer.customerType CAdministration.riskRegister.customerTypeId);

    CARAPI GetRiskRegister.CustomerTypeId(
     /* [out] */ CCustomer.customerType* CAdministration.riskRegister.customerTypeId);


   CARAPI SetRiskRegister.SupplierId(
     /* [in] */ CSupplier.supplier CAdministration.riskRegister.supplierId);

    CARAPI GetRiskRegister.SupplierId(
     /* [out] */ CSupplier.supplier* CAdministration.riskRegister.supplierId);


   CARAPI SetRiskRegister.SupplierTypeId(
     /* [in] */ CSupplier.supplierType CAdministration.riskRegister.supplierTypeId);

    CARAPI GetRiskRegister.SupplierTypeId(
     /* [out] */ CSupplier.supplierType* CAdministration.riskRegister.supplierTypeId);


   CARAPI SetRiskRegister.PartnerId(
     /* [in] */ CStakeholder.partner CAdministration.riskRegister.partnerId);

    CARAPI GetRiskRegister.PartnerId(
     /* [out] */ CStakeholder.partner* CAdministration.riskRegister.partnerId);


   CARAPI SetRiskRegister.MediaId(
     /* [in] */ CStakeholder.media CAdministration.riskRegister.mediaId);

    CARAPI GetRiskRegister.MediaId(
     /* [out] */ CStakeholder.media* CAdministration.riskRegister.mediaId);


   CARAPI SetRiskRegister.CommunityId(
     /* [in] */ CStakeholder.community CAdministration.riskRegister.communityId);

    CARAPI GetRiskRegister.CommunityId(
     /* [out] */ CStakeholder.community* CAdministration.riskRegister.communityId);


   CARAPI SetRiskRegister.BankId(
     /* [in] */ CFinance.bank CAdministration.riskRegister.bankId);

    CARAPI GetRiskRegister.BankId(
     /* [out] */ CFinance.bank* CAdministration.riskRegister.bankId);


   CARAPI SetRiskRegister.PropertyOwnerId(
     /* [in] */ CProperty.propertyOwner CAdministration.riskRegister.propertyOwnerId);

    CARAPI GetRiskRegister.PropertyOwnerId(
     /* [out] */ CProperty.propertyOwner* CAdministration.riskRegister.propertyOwnerId);


   CARAPI SetRiskRegister.ApplicantId(
     /* [in] */ CCustomer.applicant CAdministration.riskRegister.applicantId);

    CARAPI GetRiskRegister.ApplicantId(
     /* [out] */ CCustomer.applicant* CAdministration.riskRegister.applicantId);


   CARAPI SetRiskRegister.TenancyId(
     /* [in] */ CProperty.tenant CAdministration.riskRegister.tenancyId);

    CARAPI GetRiskRegister.TenancyId(
     /* [out] */ CProperty.tenant* CAdministration.riskRegister.tenancyId);


   CARAPI SetRiskRegister.EmployeeId(
     /* [in] */ CAdministration.staff CAdministration.riskRegister.employeeId);

    CARAPI GetRiskRegister.EmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.riskRegister.employeeId);


   CARAPI SetRiskRegister.SuperFundId(
     /* [in] */ CSupplier.superannuationFund CAdministration.riskRegister.superFundId);

    CARAPI GetRiskRegister.SuperFundId(
     /* [out] */ CSupplier.superannuationFund* CAdministration.riskRegister.superFundId);


   CARAPI SetRiskRegister.SolicitorIds(
     /* [in] */ ArrayOf<CSolicitor.solicitor> CAdministration.riskRegister.solicitorIds);

    CARAPI GetRiskRegister.SolicitorIds(
     /* [out, callee] */ ArrayOf<CSolicitor.solicitor>* CAdministration.riskRegister.solicitorIds);


   CARAPI SetRiskRegister.AgentTypeIds(
     /* [in] */ ArrayOf<CStakeholder.agentType> CAdministration.riskRegister.agentTypeIds);

    CARAPI GetRiskRegister.AgentTypeIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agentType>* CAdministration.riskRegister.agentTypeIds);


   CARAPI SetRiskRegister.AgentIds(
     /* [in] */ ArrayOf<CStakeholder.agent> CAdministration.riskRegister.agentIds);

    CARAPI GetRiskRegister.AgentIds(
     /* [out, callee] */ ArrayOf<CStakeholder.agent>* CAdministration.riskRegister.agentIds);


   CARAPI SetRiskRegister.NonGovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.riskRegister.nonGovStakeholderIds);

    CARAPI GetRiskRegister.NonGovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.nonGovStakeholder>* CAdministration.riskRegister.nonGovStakeholderIds);


   CARAPI SetRiskRegister.GovStakeholderIds(
     /* [in] */ ArrayOf<CStakeholder.govStakeholder> CAdministration.riskRegister.govStakeholderIds);

    CARAPI GetRiskRegister.GovStakeholderIds(
     /* [out] */ ArrayOf<CStakeholder.govStakeholder>* CAdministration.riskRegister.govStakeholderIds);


   CARAPI SetRiskRegister.CentrelinkId(
     /* [in] */ CFinance.centrelink CAdministration.riskRegister.centrelinkId);

    CARAPI GetRiskRegister.CentrelinkId(
     /* [out] */ CFinance.centrelink* CAdministration.riskRegister.centrelinkId);


   CARAPI SetRiskRegister.StateLAHAuthorityId(
     /* [in] */ CStakeholder.stateLAHAuthority CAdministration.riskRegister.stateLAHAuthorityId);

    CARAPI GetRiskRegister.StateLAHAuthorityId(
     /* [out] */ CStakeholder.stateLAHAuthority* CAdministration.riskRegister.stateLAHAuthorityId);


   CARAPI SetRiskRegister.StatePublicHousingAuthorityId(
     /* [in] */ CStakeholder.statePublicHousingAuthority CAdministration.riskRegister.statePublicHousingAuthorityId);

    CARAPI GetRiskRegister.StatePublicHousingAuthorityId(
     /* [out] */ CStakeholder.statePublicHousingAuthority* CAdministration.riskRegister.statePublicHousingAuthorityId);


   CARAPI SetRiskRegister.CommunityHousingRegulatorId(
     /* [in] */ CRegulator.communityHousingRegulator CAdministration.riskRegister.communityHousingRegulatorId);

    CARAPI GetRiskRegister.CommunityHousingRegulatorId(
     /* [out] */ CRegulator.communityHousingRegulator* CAdministration.riskRegister.communityHousingRegulatorId);


   CARAPI SetRiskRegister.ATOId(
     /* [in] */ CRegulator.aTO CAdministration.riskRegister.aTOId);

    CARAPI GetRiskRegister.ATOId(
     /* [out] */ CRegulator.aTO* CAdministration.riskRegister.aTOId);


   CARAPI SetRiskRegister.NatRegId(
     /* [in] */ CRegulator.nationalRegulator CAdministration.riskRegister.natRegId);

    CARAPI GetRiskRegister.NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CAdministration.riskRegister.natRegId);


   CARAPI SetRiskRegister.TribunalId(
     /* [in] */ CRegulator.nCAT CAdministration.riskRegister.tribunalId);

    CARAPI GetRiskRegister.TribunalId(
     /* [out] */ CRegulator.nCAT* CAdministration.riskRegister.tribunalId);


   CARAPI SetRiskRegister.ApplicationId(
     /* [in] */ CCustomer.application CAdministration.riskRegister.applicationId);

    CARAPI GetRiskRegister.ApplicationId(
     /* [out] */ CCustomer.application* CAdministration.riskRegister.applicationId);


   CARAPI SetRiskRegister.StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CAdministration.riskRegister.stateBasedRegId);

    CARAPI GetRiskRegister.StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CAdministration.riskRegister.stateBasedRegId);


   CARAPI SetRiskRegister.ItemTraderId(
     /* [in] */ itemTrader CAdministration.riskRegister.itemTraderId);

    CARAPI GetRiskRegister.ItemTraderId(
     /* [out] */ itemTrader* CAdministration.riskRegister.itemTraderId);


   CARAPI SetRiskRegister.TenancyCaseMngmntId(
     /* [in] */ CProperty.tenancyCaseManagement CAdministration.riskRegister.tenancyCaseMngmntId);

    CARAPI GetRiskRegister.TenancyCaseMngmntId(
     /* [out] */ CProperty.tenancyCaseManagement* CAdministration.riskRegister.tenancyCaseMngmntId);


   CARAPI SetRiskRegister.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.riskRegister.docRefIds);

    CARAPI GetRiskRegister.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.riskRegister.docRefIds);


   CARAPI SetRiskRegister.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.riskRegister.imageRefIds);

    CARAPI GetRiskRegister.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.riskRegister.imageRefIds);


   CARAPI SetRole.RoleId(
     /* [in] */ const String& CAdministration.role.roleId);

    CARAPI GetRole.RoleId(
     /* [out] */ String* CAdministration.role.roleId);


   CARAPI SetRole.RoleTitle(
     /* [in] */ const String& CAdministration.role.roleTitle);

    CARAPI GetRole.RoleTitle(
     /* [out] */ String* CAdministration.role.roleTitle);


   CARAPI SetRole.RoleDescription(
     /* [in] */ const String& CAdministration.role.roleDescription);

    CARAPI GetRole.RoleDescription(
     /* [out] */ String* CAdministration.role.roleDescription);


   CARAPI SetRole.EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.role.employeeIds);

    CARAPI GetRole.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.role.employeeIds);


   CARAPI SetRole.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.role.businessChannelOwnerId);

    CARAPI GetRole.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.role.businessChannelOwnerId);


   CARAPI SetRole.BranchIds(
     /* [in] */ ArrayOf<CAdministration.branch> CAdministration.role.branchIds);

    CARAPI GetRole.BranchIds(
     /* [out, callee] */ ArrayOf<CAdministration.branch>* CAdministration.role.branchIds);


   CARAPI SetRole.DeptIds(
     /* [in] */ ArrayOf<CAdministration.department> CAdministration.role.deptIds);

    CARAPI GetRole.DeptIds(
     /* [out, callee] */ ArrayOf<CAdministration.department>* CAdministration.role.deptIds);


   CARAPI SetRole.SubDeptIds(
     /* [in] */ ArrayOf<CAdministration.subdepartment> CAdministration.role.subDeptIds);

    CARAPI GetRole.SubDeptIds(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartment>* CAdministration.role.subDeptIds);


   CARAPI SetRole.SubDeptLevel2Ids(
     /* [in] */ ArrayOf<CAdministration.subdepartmentLevel2> CAdministration.role.subDeptLevel2Ids);

    CARAPI GetRole.SubDeptLevel2Ids(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartmentLevel2>* CAdministration.role.subDeptLevel2Ids);


   CARAPI SetRole.SubDeptLevel3Ids(
     /* [in] */ ArrayOf<CAdministration.subdepartmentLevel3> CAdministration.role.subDeptLevel3Ids);

    CARAPI GetRole.SubDeptLevel3Ids(
     /* [out, callee] */ ArrayOf<CAdministration.subdepartmentLevel3>* CAdministration.role.subDeptLevel3Ids);


   CARAPI SetRole.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.role.docRefIds);

    CARAPI GetRole.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.role.docRefIds);


   CARAPI SetRole.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.role.imageRefIds);

    CARAPI GetRole.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.role.imageRefIds);


   CARAPI SetRole.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CAdministration.role.videoRefIds);

    CARAPI GetRole.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CAdministration.role.videoRefIds);


   CARAPI SetStaffRoleJoins.StaffRoleJoinsId(
     /* [in] */ const String& CAdministration.staffRoleJoins.staffRoleJoinsId);

    CARAPI GetStaffRoleJoins.StaffRoleJoinsId(
     /* [out] */ String* CAdministration.staffRoleJoins.staffRoleJoinsId);


   CARAPI SetStaffRoleJoins.RoleId(
     /* [in] */ CAdministration.role CAdministration.staffRoleJoins.roleId);

    CARAPI GetStaffRoleJoins.RoleId(
     /* [out] */ CAdministration.role* CAdministration.staffRoleJoins.roleId);


   CARAPI SetStaffRoleJoins.EmployeeId(
     /* [in] */ CAdministration.staff CAdministration.staffRoleJoins.employeeId);

    CARAPI GetStaffRoleJoins.EmployeeId(
     /* [out] */ CAdministration.staff* CAdministration.staffRoleJoins.employeeId);


   CARAPI SetBusinessDirector.BusinessDirectorId(
     /* [in] */ const String& CAdministration.businessDirector.businessDirectorId);

    CARAPI GetBusinessDirector.BusinessDirectorId(
     /* [out] */ String* CAdministration.businessDirector.businessDirectorId);


   CARAPI SetBusinessDirector.FirstName(
     /* [in] */ const String& CAdministration.businessDirector.firstName);

    CARAPI GetBusinessDirector.FirstName(
     /* [out] */ String* CAdministration.businessDirector.firstName);


   CARAPI SetBusinessDirector.LastName(
     /* [in] */ const String& CAdministration.businessDirector.lastName);

    CARAPI GetBusinessDirector.LastName(
     /* [out] */ String* CAdministration.businessDirector.lastName);


   CARAPI SetBusinessDirector.ResidentialAddress(
     /* [in] */ const String& CAdministration.businessDirector.residentialAddress);

    CARAPI GetBusinessDirector.ResidentialAddress(
     /* [out] */ String* CAdministration.businessDirector.residentialAddress);


   CARAPI SetBusinessDirector.PostalAddress(
     /* [in] */ const String& CAdministration.businessDirector.postalAddress);

    CARAPI GetBusinessDirector.PostalAddress(
     /* [out] */ String* CAdministration.businessDirector.postalAddress);


   CARAPI SetBusinessDirector.Email(
     /* [in] */ const String& CAdministration.businessDirector.email);

    CARAPI GetBusinessDirector.Email(
     /* [out] */ String* CAdministration.businessDirector.email);


   CARAPI SetBusinessDirector.HomePhone(
     /* [in] */ Int32 CAdministration.businessDirector.homePhone);

    CARAPI GetBusinessDirector.HomePhone(
     /* [out] */ Int32* CAdministration.businessDirector.homePhone);


   CARAPI SetBusinessDirector.MobilePhone(
     /* [in] */ Int32 CAdministration.businessDirector.mobilePhone);

    CARAPI GetBusinessDirector.MobilePhone(
     /* [out] */ Int32* CAdministration.businessDirector.mobilePhone);


   CARAPI SetBusinessDirector.WorkPhone(
     /* [in] */ Int32 CAdministration.businessDirector.workPhone);

    CARAPI GetBusinessDirector.WorkPhone(
     /* [out] */ Int32* CAdministration.businessDirector.workPhone);


   CARAPI SetBusinessDirector.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CAdministration.businessDirector.contactedWithDetails);

    CARAPI GetBusinessDirector.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CAdministration.businessDirector.contactedWithDetails);


   CARAPI SetBusinessDirector.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.businessDirector.businessChannelOwnerId);

    CARAPI GetBusinessDirector.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.businessDirector.businessChannelOwnerId);


   CARAPI SetBusinessDirector.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.businessDirector.docRefIds);

    CARAPI GetBusinessDirector.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.businessDirector.docRefIds);


   CARAPI SetBusinessDirector.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.businessDirector.imageRefIds);

    CARAPI GetBusinessDirector.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.businessDirector.imageRefIds);


   CARAPI SetStaff.EmployeeId(
     /* [in] */ const String& CAdministration.staff.employeeId);

    CARAPI GetStaff.EmployeeId(
     /* [out] */ String* CAdministration.staff.employeeId);


   CARAPI SetStaff.OurBranchId(
     /* [in] */ const String& CAdministration.staff.ourBranchId);

    CARAPI GetStaff.OurBranchId(
     /* [out] */ String* CAdministration.staff.ourBranchId);


   CARAPI SetStaff.FirstName(
     /* [in] */ const String& CAdministration.staff.firstName);

    CARAPI GetStaff.FirstName(
     /* [out] */ String* CAdministration.staff.firstName);


   CARAPI SetStaff.LastName(
     /* [in] */ const String& CAdministration.staff.lastName);

    CARAPI GetStaff.LastName(
     /* [out] */ String* CAdministration.staff.lastName);


   CARAPI SetStaff.ResidentialAddress(
     /* [in] */ const String& CAdministration.staff.residentialAddress);

    CARAPI GetStaff.ResidentialAddress(
     /* [out] */ String* CAdministration.staff.residentialAddress);


   CARAPI SetStaff.PostalAddress(
     /* [in] */ const String& CAdministration.staff.postalAddress);

    CARAPI GetStaff.PostalAddress(
     /* [out] */ String* CAdministration.staff.postalAddress);


   CARAPI SetStaff.Email(
     /* [in] */ const String& CAdministration.staff.email);

    CARAPI GetStaff.Email(
     /* [out] */ String* CAdministration.staff.email);


   CARAPI SetStaff.HomePhone(
     /* [in] */ Int32 CAdministration.staff.homePhone);

    CARAPI GetStaff.HomePhone(
     /* [out] */ Int32* CAdministration.staff.homePhone);


   CARAPI SetStaff.MobilePhone(
     /* [in] */ Int32 CAdministration.staff.mobilePhone);

    CARAPI GetStaff.MobilePhone(
     /* [out] */ Int32* CAdministration.staff.mobilePhone);


   CARAPI SetStaff.WorkPhone(
     /* [in] */ Int32 CAdministration.staff.workPhone);

    CARAPI GetStaff.WorkPhone(
     /* [out] */ Int32* CAdministration.staff.workPhone);


   CARAPI SetStaff.ATOTFN(
     /* [in] */ Int32 CAdministration.staff.aTOTFN);

    CARAPI GetStaff.ATOTFN(
     /* [out] */ Int32* CAdministration.staff.aTOTFN);


   CARAPI SetStaff.TaxFreeThreshold(
     /* [in] */ Boolean CAdministration.staff.taxFreeThreshold);

    CARAPI GetStaff.TaxFreeThreshold(
     /* [out] */ Boolean* CAdministration.staff.taxFreeThreshold);


   CARAPI SetStaff.DocRefIds(
     /* [in] */ ArrayOf<const String&> CAdministration.staff.docRefIds);

    CARAPI GetStaff.DocRefIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.staff.docRefIds);


   CARAPI SetStaff.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CAdministration.staff.contactedWithDetails);

    CARAPI GetStaff.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CAdministration.staff.contactedWithDetails);


   CARAPI SetStaff.StaffImmedSuperRoleId(
     /* [in] */ CAdministration.role CAdministration.staff.staffImmedSuperRoleId);

    CARAPI GetStaff.StaffImmedSuperRoleId(
     /* [out] */ CAdministration.role* CAdministration.staff.staffImmedSuperRoleId);


   CARAPI SetStaff.PerformanceAgreementDocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.staff.performanceAgreementDocRefs);

    CARAPI GetStaff.PerformanceAgreementDocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.staff.performanceAgreementDocRefs);


   CARAPI SetStaff.RoleIds(
     /* [in] */ ArrayOf<CAdministration.role> CAdministration.staff.roleIds);

    CARAPI GetStaff.RoleIds(
     /* [out, callee] */ ArrayOf<CAdministration.role>* CAdministration.staff.roleIds);


   CARAPI SetStaff.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.staff.imageRefIds);

    CARAPI GetStaff.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.staff.imageRefIds);


   CARAPI SetStaff.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.staff.businessChannelOwnerId);

    CARAPI GetStaff.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.staff.businessChannelOwnerId);


   CARAPI SetServicePurchaseRequest.ServicePurchRequestId(
     /* [in] */ const String& CAdministration.servicePurchaseRequest.servicePurchRequestId);

    CARAPI GetServicePurchaseRequest.ServicePurchRequestId(
     /* [out] */ String* CAdministration.servicePurchaseRequest.servicePurchRequestId);


   CARAPI SetServicePurchaseRequest.MRQIdIfRentalProperty(
     /* [in] */ const String& CAdministration.servicePurchaseRequest.mRQIdIfRentalProperty);

    CARAPI GetServicePurchaseRequest.MRQIdIfRentalProperty(
     /* [out] */ String* CAdministration.servicePurchaseRequest.mRQIdIfRentalProperty);


   CARAPI SetServicePurchaseRequest.DamageCausedByCustomerTenantOthers(
     /* [in] */ Boolean CAdministration.servicePurchaseRequest.damageCausedByCustomerTenantOthers);

    CARAPI GetServicePurchaseRequest.DamageCausedByCustomerTenantOthers(
     /* [out] */ Boolean* CAdministration.servicePurchaseRequest.damageCausedByCustomerTenantOthers);


   CARAPI SetServicePurchaseRequest.OwnerResponsible(
     /* [in] */ Boolean CAdministration.servicePurchaseRequest.ownerResponsible);

    CARAPI GetServicePurchaseRequest.OwnerResponsible(
     /* [out] */ Boolean* CAdministration.servicePurchaseRequest.ownerResponsible);


   CARAPI SetServicePurchaseRequest.SummaryDescriptionOfProblemItemised(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.summaryDescriptionOfProblemItemised);

    CARAPI GetServicePurchaseRequest.SummaryDescriptionOfProblemItemised(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.summaryDescriptionOfProblemItemised);


   CARAPI SetServicePurchaseRequest.JobTypeSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.jobTypeSequence);

    CARAPI GetServicePurchaseRequest.JobTypeSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.jobTypeSequence);


   CARAPI SetServicePurchaseRequest.QuoteIdsIn(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.quoteIdsIn);

    CARAPI GetServicePurchaseRequest.QuoteIdsIn(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.quoteIdsIn);


   CARAPI SetServicePurchaseRequest.MostAppropriateQuotesReceived(
     /* [in] */ ArrayOf<Double> CAdministration.servicePurchaseRequest.mostAppropriateQuotesReceived);

    CARAPI GetServicePurchaseRequest.MostAppropriateQuotesReceived(
     /* [out, callee] */ ArrayOf<Double>* CAdministration.servicePurchaseRequest.mostAppropriateQuotesReceived);


   CARAPI SetServicePurchaseRequest.QuotesFinalised(
     /* [in] */ const String& CAdministration.servicePurchaseRequest.quotesFinalised);

    CARAPI GetServicePurchaseRequest.QuotesFinalised(
     /* [out] */ String* CAdministration.servicePurchaseRequest.quotesFinalised);


   CARAPI SetServicePurchaseRequest.RequestsToLandlordDocRefs(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.requestsToLandlordDocRefs);

    CARAPI GetServicePurchaseRequest.RequestsToLandlordDocRefs(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.requestsToLandlordDocRefs);


   CARAPI SetServicePurchaseRequest.RequestsSentDates(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.requestsSentDates);

    CARAPI GetServicePurchaseRequest.RequestsSentDates(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.requestsSentDates);


   CARAPI SetServicePurchaseRequest.JobTypeSequenceApproved(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.jobTypeSequenceApproved);

    CARAPI GetServicePurchaseRequest.JobTypeSequenceApproved(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.jobTypeSequenceApproved);


   CARAPI SetServicePurchaseRequest.TribunalIds(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.tribunalIds);

    CARAPI GetServicePurchaseRequest.TribunalIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.tribunalIds);


   CARAPI SetServicePurchaseRequest.JobIds(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.jobIds);

    CARAPI GetServicePurchaseRequest.JobIds(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.jobIds);


   CARAPI SetServicePurchaseRequest.PurchaseOrderIdSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.purchaseOrderIdSequence);

    CARAPI GetServicePurchaseRequest.PurchaseOrderIdSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.purchaseOrderIdSequence);


   CARAPI SetServicePurchaseRequest.PurchaseOrderSupplierIdSequence(
     /* [in] */ ArrayOf<const String&> CAdministration.servicePurchaseRequest.purchaseOrderSupplierIdSequence);

    CARAPI GetServicePurchaseRequest.PurchaseOrderSupplierIdSequence(
     /* [out, callee] */ ArrayOf<String>* CAdministration.servicePurchaseRequest.purchaseOrderSupplierIdSequence);


   CARAPI SetServicePurchaseRequest.ExpectedCompletionDate(
     /* [in] */ const String& CAdministration.servicePurchaseRequest.expectedCompletionDate);

    CARAPI GetServicePurchaseRequest.ExpectedCompletionDate(
     /* [out] */ String* CAdministration.servicePurchaseRequest.expectedCompletionDate);


   CARAPI SetServicePurchaseRequest.WorkCheckedPassed(
     /* [in] */ ArrayOf<Boolean> CAdministration.servicePurchaseRequest.workCheckedPassed);

    CARAPI GetServicePurchaseRequest.WorkCheckedPassed(
     /* [out, callee] */ ArrayOf<Boolean>* CAdministration.servicePurchaseRequest.workCheckedPassed);


   CARAPI SetServicePurchaseRequest.TotalMaintPurchOrderAmount(
     /* [in] */ Double CAdministration.servicePurchaseRequest.totalMaintPurchOrderAmount);

    CARAPI GetServicePurchaseRequest.TotalMaintPurchOrderAmount(
     /* [out] */ Double* CAdministration.servicePurchaseRequest.totalMaintPurchOrderAmount);


   CARAPI SetServicePurchaseRequest.MasLedgeFinTxNumsReturned(
     /* [in] */ ArrayOf<Int32> CAdministration.servicePurchaseRequest.masLedgeFinTxNumsReturned);

    CARAPI GetServicePurchaseRequest.MasLedgeFinTxNumsReturned(
     /* [out, callee] */ ArrayOf<Int32>* CAdministration.servicePurchaseRequest.masLedgeFinTxNumsReturned);


   CARAPI SetServicePurchaseRequest.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.servicePurchaseRequest.businessChannelOwnerId);

    CARAPI GetServicePurchaseRequest.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.servicePurchaseRequest.businessChannelOwnerId);


   CARAPI SetServicePurchaseRequest.PropertyId(
     /* [in] */ CProperty.property CAdministration.servicePurchaseRequest.propertyId);

    CARAPI GetServicePurchaseRequest.PropertyId(
     /* [out] */ CProperty.property* CAdministration.servicePurchaseRequest.propertyId);


   CARAPI SetServicePurchaseRequest.BranchId(
     /* [in] */ CAdministration.branch CAdministration.servicePurchaseRequest.branchId);

    CARAPI GetServicePurchaseRequest.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.servicePurchaseRequest.branchId);


   CARAPI SetServicePurchaseRequest.DeptId(
     /* [in] */ CAdministration.department CAdministration.servicePurchaseRequest.deptId);

    CARAPI GetServicePurchaseRequest.DeptId(
     /* [out] */ CAdministration.department* CAdministration.servicePurchaseRequest.deptId);


   CARAPI SetServicePurchaseRequest.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CAdministration.servicePurchaseRequest.supplierIds);

    CARAPI GetServicePurchaseRequest.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CAdministration.servicePurchaseRequest.supplierIds);


   CARAPI SetServicePurchaseRequest.ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CAdministration.servicePurchaseRequest.itemTypeIds);

    CARAPI GetServicePurchaseRequest.ItemTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CAdministration.servicePurchaseRequest.itemTypeIds);


   CARAPI SetServicePurchaseRequest.JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CAdministration.servicePurchaseRequest.jobTypeIds);

    CARAPI GetServicePurchaseRequest.JobTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.jobType>* CAdministration.servicePurchaseRequest.jobTypeIds);


   CARAPI SetServicePurchaseRequest.ServiceTypeIds(
     /* [in] */ ArrayOf<CAdministration.serviceType> CAdministration.servicePurchaseRequest.serviceTypeIds);

    CARAPI GetServicePurchaseRequest.ServiceTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.serviceType>* CAdministration.servicePurchaseRequest.serviceTypeIds);


   CARAPI SetServicePurchaseRequest.EmployeesRequestingIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.servicePurchaseRequest.employeesRequestingIds);

    CARAPI GetServicePurchaseRequest.EmployeesRequestingIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.servicePurchaseRequest.employeesRequestingIds);


   CARAPI SetServicePurchaseRequest.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.servicePurchaseRequest.docRefIds);

    CARAPI GetServicePurchaseRequest.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.servicePurchaseRequest.docRefIds);


   CARAPI SetServicePurchaseRequest.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CAdministration.servicePurchaseRequest.imageRefIds);

    CARAPI GetServicePurchaseRequest.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CAdministration.servicePurchaseRequest.imageRefIds);


   CARAPI SetServicePurchaseRequest.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CAdministration.servicePurchaseRequest.audioRefIds);

    CARAPI GetServicePurchaseRequest.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CAdministration.servicePurchaseRequest.audioRefIds);

   CARAPI SetTimesheet.TimesheetId(
     /* [in] */ const String& CAdministration.timesheet.timesheetId);

    CARAPI GetTimesheet.TimesheetId(
     /* [out] */ String* CAdministration.timesheet.timesheetId);


   CARAPI SetTimesheet.RosteredStarts(
     /* [in] */ ArrayOf<const String&> CAdministration.timesheet.rosteredStarts);

    CARAPI GetTimesheet.RosteredStarts(
     /* [out, callee] */ ArrayOf<String>* CAdministration.timesheet.rosteredStarts);


   CARAPI SetTimesheet.RosteredFinishes(
     /* [in] */ ArrayOf<const String&> CAdministration.timesheet.rosteredFinishes);

    CARAPI GetTimesheet.RosteredFinishes(
     /* [out, callee] */ ArrayOf<String>* CAdministration.timesheet.rosteredFinishes);


   CARAPI SetTimesheet.ActualStarts(
     /* [in] */ ArrayOf<const String&> CAdministration.timesheet.actualStarts);

    CARAPI GetTimesheet.ActualStarts(
     /* [out, callee] */ ArrayOf<String>* CAdministration.timesheet.actualStarts);


   CARAPI SetTimesheet.ActualFinishes(
     /* [in] */ ArrayOf<const String&> CAdministration.timesheet.actualFinishes);

    CARAPI GetTimesheet.ActualFinishes(
     /* [out, callee] */ ArrayOf<String>* CAdministration.timesheet.actualFinishes);


   CARAPI SetTimesheet.Submitted(
     /* [in] */ const String& CAdministration.timesheet.submitted);

    CARAPI GetTimesheet.Submitted(
     /* [out] */ String* CAdministration.timesheet.submitted);


   CARAPI SetTimesheet.Checked(
     /* [in] */ const String& CAdministration.timesheet.checked);

    CARAPI GetTimesheet.Checked(
     /* [out] */ String* CAdministration.timesheet.checked);


   CARAPI SetTimesheet.Passed(
     /* [in] */ Boolean CAdministration.timesheet.passed);

    CARAPI GetTimesheet.Passed(
     /* [out] */ Boolean* CAdministration.timesheet.passed);


   CARAPI SetTimesheet.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.timesheet.businessChannelOwnerId);

    CARAPI GetTimesheet.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.timesheet.businessChannelOwnerId);


   CARAPI SetTimesheet.EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CAdministration.timesheet.employeeIds);

    CARAPI GetTimesheet.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CAdministration.timesheet.employeeIds);


   CARAPI SetTimesheet.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.timesheet.docRefIds);

    CARAPI GetTimesheet.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.timesheet.docRefIds);


   CARAPI SetTimesheet.BranchId(
     /* [in] */ CAdministration.branch CAdministration.timesheet.branchId);

    CARAPI GetTimesheet.BranchId(
     /* [out] */ CAdministration.branch* CAdministration.timesheet.branchId);


   CARAPI SetWaitQueue.WaitQueueId(
     /* [in] */ const String& CAdministration.waitQueue.waitQueueId);

    CARAPI GetWaitQueue.WaitQueueId(
     /* [out] */ String* CAdministration.waitQueue.waitQueueId);


   CARAPI SetWaitQueue.QueueName(
     /* [in] */ const String& CAdministration.waitQueue.queueName);

    CARAPI GetWaitQueue.QueueName(
     /* [out] */ String* CAdministration.waitQueue.queueName);


   CARAPI SetWaitQueue.QueueCode(
     /* [in] */ const String& CAdministration.waitQueue.queueCode);

    CARAPI GetWaitQueue.QueueCode(
     /* [out] */ String* CAdministration.waitQueue.queueCode);


   CARAPI SetWaitQueue.QueueDescription(
     /* [in] */ const String& CAdministration.waitQueue.queueDescription);

    CARAPI GetWaitQueue.QueueDescription(
     /* [out] */ String* CAdministration.waitQueue.queueDescription);


   CARAPI SetWaitQueue.Notes(
     /* [in] */ const String& CAdministration.waitQueue.notes);

    CARAPI GetWaitQueue.Notes(
     /* [out] */ String* CAdministration.waitQueue.notes);


   CARAPI SetWaitQueue.AusState(
     /* [in] */ CHelper.ausState CAdministration.waitQueue.ausState);

    CARAPI GetWaitQueue.AusState(
     /* [out] */ CHelper.ausState* CAdministration.waitQueue.ausState);


   CARAPI SetWaitQueue.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CAdministration.waitQueue.businessChannelOwnerId);

    CARAPI GetWaitQueue.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CAdministration.waitQueue.businessChannelOwnerId);


   CARAPI SetWaitQueue.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CAdministration.waitQueue.docRefIds);

    CARAPI GetWaitQueue.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CAdministration.waitQueue.docRefIds);



protected:
    // Member variables
const String& mSetService.ServiceId
String* mGetService.ServiceId
const String& mSetService.ServiceName
String* mGetService.ServiceName
const String& mSetService.Description
String* mGetService.Description
Double mSetService.ServiceUnitsSupplied
Double* mGetService.ServiceUnitsSupplied
const String& mSetService.PricingUnits
String* mGetService.PricingUnits
Double mSetService.PriceRatePerUnit
Double* mGetService.PriceRatePerUnit
ArrayOf<const String&> mSetService.ItemIdsSupplied
ArrayOf<String>* mGetService.ItemIdsSupplied
ArrayOf<Double> mSetService.ItemQuantities
ArrayOf<Double>* mGetService.ItemQuantities
ArrayOf<CAdministration.staff> mSetService.EmployeeIds
ArrayOf<CAdministration.staff>* mGetService.EmployeeIds
ArrayOf<CSupplier.supplier> mSetService.SupplierIds
ArrayOf<CSupplier.supplier>* mGetService.SupplierIds
CAdministration.serviceType mSetService.ServiceTypeId
CAdministration.serviceType* mGetService.ServiceTypeId
ArrayOf<CAdministration.documents> mSetService.DocRefs
ArrayOf<CAdministration.documents>* mGetService.DocRefs
ArrayOf<CAdministration.images> mSetService.ImageRefs
ArrayOf<CAdministration.images>* mGetService.ImageRefs
ArrayOf<CAdministration.audio> mSetService.AudioRefIds
ArrayOf<CAdministration.audio>* mGetService.AudioRefIds
CCustomer.customer mSetService.CustomerId
CCustomer.customer* mGetService.CustomerId
CRegister.businessChannelOwner mSetService.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetService.BusinessChannelOwnerId
const String& mSetServiceType.ServiceTypeId
String* mGetServiceType.ServiceTypeId
const String& mSetServiceType.ServiceName
String* mGetServiceType.ServiceName
const String& mSetServiceType.Description
String* mGetServiceType.Description
const String& mSetServiceType.PriceRateUnits
String* mGetServiceType.PriceRateUnits
Double mSetServiceType.PriceRate
Double* mGetServiceType.PriceRate
ArrayOf<CAdministration.role> mSetServiceType.ProviderRoleIdsWithinEnterprise
ArrayOf<CAdministration.role>* mGetServiceType.ProviderRoleIdsWithinEnterprise
ArrayOf<CAdministration.branch> mSetServiceType.BranchIds
ArrayOf<CAdministration.branch>* mGetServiceType.BranchIds
ArrayOf<CAdministration.department> mSetServiceType.DeptIds
ArrayOf<CAdministration.department>* mGetServiceType.DeptIds
ArrayOf<CSupplier.supplier> mSetServiceType.ExternalProvidersIds
ArrayOf<CSupplier.supplier>* mGetServiceType.ExternalProvidersIds
ArrayOf<CSupplier.supplierType> mSetServiceType.SupplierTypeIds
ArrayOf<CSupplier.supplierType>* mGetServiceType.SupplierTypeIds
ArrayOf<CAdministration.itemType> mSetServiceType.ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetServiceType.ItemTypeIds
ArrayOf<CAdministration.jobType> mSetServiceType.JobTypeIds
ArrayOf<CAdministration.jobType>* mGetServiceType.JobTypeIds
ArrayOf<CAdministration.documents> mSetServiceType.DocRefs
ArrayOf<CAdministration.documents>* mGetServiceType.DocRefs
ArrayOf<CAdministration.images> mSetServiceType.ImageRefs
ArrayOf<CAdministration.images>* mGetServiceType.ImageRefs
ArrayOf<CAdministration.video> mSetServiceType.VideoRefs
ArrayOf<CAdministration.video>* mGetServiceType.VideoRefs
CRegister.businessChannelOwner mSetServiceType.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetServiceType.BusinessChannelOwnerId
const String& mSetServiceRequest.SRQId
String* mGetServiceRequest.SRQId
ArrayOf<const String&> mSetServiceRequest.ServiceSequenceDescription
ArrayOf<String>* mGetServiceRequest.ServiceSequenceDescription
ArrayOf<const String&> mSetServiceRequest.RequestsAccepted
ArrayOf<String>* mGetServiceRequest.RequestsAccepted
ArrayOf<Double> mSetServiceRequest.ItemQuantities
ArrayOf<Double>* mGetServiceRequest.ItemQuantities
ArrayOf<const String&> mSetServiceRequest.ItemUnits
ArrayOf<String>* mGetServiceRequest.ItemUnits
ArrayOf<const String&> mSetServiceRequest.DueDates
ArrayOf<String>* mGetServiceRequest.DueDates
ArrayOf<CAdministration.staff> mSetServiceRequest.RequestByStaffIds
ArrayOf<CAdministration.staff>* mGetServiceRequest.RequestByStaffIds
ArrayOf<CAdministration.documents> mSetServiceRequest.DocRefIds
ArrayOf<CAdministration.documents>* mGetServiceRequest.DocRefIds
ArrayOf<CAdministration.images> mSetServiceRequest.ImageRefIds
ArrayOf<CAdministration.images>* mGetServiceRequest.ImageRefIds
ArrayOf<CAdministration.audio> mSetServiceRequest.AudioRefIds
ArrayOf<CAdministration.audio>* mGetServiceRequest.AudioRefIds
ArrayOf<CAdministration.branch> mSetServiceRequest.BranchIdsInvolved
ArrayOf<CAdministration.branch>* mGetServiceRequest.BranchIdsInvolved
ArrayOf<CAdministration.department> mSetServiceRequest.DeptIdsInvolved
ArrayOf<CAdministration.department>* mGetServiceRequest.DeptIdsInvolved
ArrayOf<CAdministration.role> mSetServiceRequest.ResponsibleRoleIds
ArrayOf<CAdministration.role>* mGetServiceRequest.ResponsibleRoleIds
ArrayOf<CAdministration.staff> mSetServiceRequest.ResponsibleStaffIds
ArrayOf<CAdministration.staff>* mGetServiceRequest.ResponsibleStaffIds
ArrayOf<CAdministration.service> mSetServiceRequest.ServiceIds
ArrayOf<CAdministration.service>* mGetServiceRequest.ServiceIds
ArrayOf<CAdministration.serviceType> mSetServiceRequest.ServiceTypeIds
ArrayOf<CAdministration.serviceType>* mGetServiceRequest.ServiceTypeIds
ArrayOf<CAdministration.itemType> mSetServiceRequest.ItemTypeIdsRequired
ArrayOf<CAdministration.itemType>* mGetServiceRequest.ItemTypeIdsRequired
ArrayOf<CAdministration.jobType> mSetServiceRequest.JobTypeIdsRequired
ArrayOf<CAdministration.jobType>* mGetServiceRequest.JobTypeIdsRequired
ArrayOf<CProperty.property> mSetServiceRequest.PropertyIds
ArrayOf<CProperty.property>* mGetServiceRequest.PropertyIds
ArrayOf<CFinance.SetRegister> mSetServiceRequest.SetIds
ArrayOf<CFinance.SetRegister>* mGetServiceRequest.SetIds
ArrayOf<CCustomer.customer> mSetServiceRequest.CustomerIds
ArrayOf<CCustomer.customer>* mGetServiceRequest.CustomerIds
ArrayOf<CCustomer.customerType> mSetServiceRequest.CustomerTypesIds
ArrayOf<CCustomer.customerType>* mGetServiceRequest.CustomerTypesIds
CRegister.businessChannelOwner mSetServiceRequest.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetServiceRequest.BusinessChannelOwnerId
const String& mSetCorrespondenceLog.CorroId
String* mGetCorrespondenceLog.CorroId
const String& mSetCorrespondenceLog.ParticipantName
String* mGetCorrespondenceLog.ParticipantName
const String& mSetCorrespondenceLog.ParticipantId
String* mGetCorrespondenceLog.ParticipantId
const String& mSetCorrespondenceLog.Description
String* mGetCorrespondenceLog.Description
const String& mSetCorrespondenceLog.CorroReceived
String* mGetCorrespondenceLog.CorroReceived
ArrayOf<const String&> mSetCorrespondenceLog.PropertyIds
ArrayOf<String>* mGetCorrespondenceLog.PropertyIds
ArrayOf<const String&> mSetCorrespondenceLog.ResponseDocRefs
ArrayOf<String>* mGetCorrespondenceLog.ResponseDocRefs
const String& mSetCorrespondenceLog.RepliedWhen
String* mGetCorrespondenceLog.RepliedWhen
ArrayOf<const String&> mSetCorrespondenceLog.ResponsibilitiesParticpantsIds
ArrayOf<String>* mGetCorrespondenceLog.ResponsibilitiesParticpantsIds
ArrayOf<const String&> mSetCorrespondenceLog.ResponsibilitiesParticpantsNames
ArrayOf<String>* mGetCorrespondenceLog.ResponsibilitiesParticpantsNames
ArrayOf<const String&> mSetCorrespondenceLog.RequiredActions
ArrayOf<String>* mGetCorrespondenceLog.RequiredActions
CRegister.businessChannelOwner mSetCorrespondenceLog.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCorrespondenceLog.BusinessChannelOwnerId
CAdministration.branch mSetCorrespondenceLog.BranchId
CAdministration.branch* mGetCorrespondenceLog.BranchId
CAdministration.department mSetCorrespondenceLog.DeptId
CAdministration.department* mGetCorrespondenceLog.DeptId
ArrayOf<CSupplier.supplier> mSetCorrespondenceLog.SupplierIds
ArrayOf<CSupplier.supplier>* mGetCorrespondenceLog.SupplierIds
ArrayOf<CCustomer.customer> mSetCorrespondenceLog.CustomerIds
ArrayOf<CCustomer.customer>* mGetCorrespondenceLog.CustomerIds
ArrayOf<CStakeholder.partner> mSetCorrespondenceLog.PartnerIds
ArrayOf<CStakeholder.partner>* mGetCorrespondenceLog.PartnerIds
ArrayOf<CStakeholder.media> mSetCorrespondenceLog.MediaIds
ArrayOf<CStakeholder.media>* mGetCorrespondenceLog.MediaIds
ArrayOf<CStakeholder.community> mSetCorrespondenceLog.CommunityIds
ArrayOf<CStakeholder.community>* mGetCorrespondenceLog.CommunityIds
ArrayOf<CFinance.bank> mSetCorrespondenceLog.BankIds
ArrayOf<CFinance.bank>* mGetCorrespondenceLog.BankIds
ArrayOf<CProperty.propertyOwner> mSetCorrespondenceLog.PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetCorrespondenceLog.PropertyOwnerIds
ArrayOf<CCustomer.applicant> mSetCorrespondenceLog.ApplicantIds
ArrayOf<CCustomer.applicant>* mGetCorrespondenceLog.ApplicantIds
ArrayOf<CProperty.tenant> mSetCorrespondenceLog.TenancyIds
ArrayOf<CProperty.tenant>* mGetCorrespondenceLog.TenancyIds
ArrayOf<CAdministration.staff> mSetCorrespondenceLog.EmployeeIds
ArrayOf<CAdministration.staff>* mGetCorrespondenceLog.EmployeeIds
ArrayOf<CSupplier.superannuationFund> mSetCorrespondenceLog.SuperFundIds
ArrayOf<CSupplier.superannuationFund>* mGetCorrespondenceLog.SuperFundIds
ArrayOf<CSolicitor.solicitor> mSetCorrespondenceLog.SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetCorrespondenceLog.SolicitorIds
ArrayOf<CStakeholder.agent> mSetCorrespondenceLog.AgentIds
ArrayOf<CStakeholder.agent>* mGetCorrespondenceLog.AgentIds
ArrayOf<CStakeholder.nonGovStakeholder> mSetCorrespondenceLog.NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetCorrespondenceLog.NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetCorrespondenceLog.GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetCorrespondenceLog.GovStakeholderIds
CFinance.centrelink mSetCorrespondenceLog.CentrelinkId
CFinance.centrelink* mGetCorrespondenceLog.CentrelinkId
CStakeholder.stateLAHAuthority mSetCorrespondenceLog.StateLAHAuthorityId
CStakeholder.stateLAHAuthority* mGetCorrespondenceLog.StateLAHAuthorityId
CStakeholder.statePublicHousingAuthority mSetCorrespondenceLog.StatePublicHousingAuthorityId
CStakeholder.statePublicHousingAuthority* mGetCorrespondenceLog.StatePublicHousingAuthorityId
CRegulator.communityHousingRegulator mSetCorrespondenceLog.CommunityHousingRegulatorId
CRegulator.communityHousingRegulator* mGetCorrespondenceLog.CommunityHousingRegulatorId
CRegulator.aTO mSetCorrespondenceLog.ATOId
CRegulator.aTO* mGetCorrespondenceLog.ATOId
CRegulator.nationalRegulator mSetCorrespondenceLog.NatRegId
CRegulator.nationalRegulator* mGetCorrespondenceLog.NatRegId
CRegulator.nCAT mSetCorrespondenceLog.TribunalId
CRegulator.nCAT* mGetCorrespondenceLog.TribunalId
ArrayOf<CAdministration.documents> mSetCorrespondenceLog.DocRefs
ArrayOf<CAdministration.documents>* mGetCorrespondenceLog.DocRefs
ArrayOf<CAdministration.images> mSetCorrespondenceLog.ImageRefs
ArrayOf<CAdministration.images>* mGetCorrespondenceLog.ImageRefs
ArrayOf<CAdministration.audio> mSetCorrespondenceLog.AudioRefIds
ArrayOf<CAdministration.audio>* mGetCorrespondenceLog.AudioRefIds
ArrayOf<CAdministration.video> mSetCorrespondenceLog.VideoRefs
ArrayOf<CAdministration.video>* mGetCorrespondenceLog.VideoRefs
const String& mSetAdvertisingTemplatesPlans.AdvertDesignId
String* mGetAdvertisingTemplatesPlans.AdvertDesignId
const String& mSetAdvertisingTemplatesPlans.AdvertDesignName
String* mGetAdvertisingTemplatesPlans.AdvertDesignName
CHelper.advertisingMedium mSetAdvertisingTemplatesPlans.AdvertisingMedium
CHelper.advertisingMedium* mGetAdvertisingTemplatesPlans.AdvertisingMedium
ArrayOf<const String&> mSetAdvertisingTemplatesPlans.AccountsReceivableIds
ArrayOf<String>* mGetAdvertisingTemplatesPlans.AccountsReceivableIds
ArrayOf<const String&> mSetAdvertisingTemplatesPlans.AccountsPayableIds
ArrayOf<String>* mGetAdvertisingTemplatesPlans.AccountsPayableIds
Double mSetAdvertisingTemplatesPlans.BudgetedAmount
Double* mGetAdvertisingTemplatesPlans.BudgetedAmount
ArrayOf<const String&> mSetAdvertisingTemplatesPlans.DocRefsAdvertisingTemplatesPlans
ArrayOf<String>* mGetAdvertisingTemplatesPlans.DocRefsAdvertisingTemplatesPlans
ArrayOf<const String&> mSetAdvertisingTemplatesPlans.RunDateTimes
ArrayOf<String>* mGetAdvertisingTemplatesPlans.RunDateTimes
CProperty.property mSetAdvertisingTemplatesPlans.PropertyId
CProperty.property* mGetAdvertisingTemplatesPlans.PropertyId
ArrayOf<CProperty.propertyOwner> mSetAdvertisingTemplatesPlans.PropertyOwners
ArrayOf<CProperty.propertyOwner>* mGetAdvertisingTemplatesPlans.PropertyOwners
CProperty.advertisingBudgetSchedule mSetAdvertisingTemplatesPlans.AdvertScheduleId
CProperty.advertisingBudgetSchedule* mGetAdvertisingTemplatesPlans.AdvertScheduleId
CRegister.businessChannelOwner mSetAdvertisingTemplatesPlans.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAdvertisingTemplatesPlans.BusinessChannelOwnerId
CAdministration.branch mSetAdvertisingTemplatesPlans.BranchId
CAdministration.branch* mGetAdvertisingTemplatesPlans.BranchId
CAdministration.department mSetAdvertisingTemplatesPlans.DeptId
CAdministration.department* mGetAdvertisingTemplatesPlans.DeptId
const String& mSetBranch.BranchId
String* mGetBranch.BranchId
const String& mSetBranch.BranchName
String* mGetBranch.BranchName
const String& mSetBranch.BranchAddressLine1
String* mGetBranch.BranchAddressLine1
const String& mSetBranch.BranchAddressLine2
String* mGetBranch.BranchAddressLine2
const String& mSetBranch.BranchSuburb
String* mGetBranch.BranchSuburb
const String& mSetBranch.BranchPostcode
String* mGetBranch.BranchPostcode
const String& mSetBranch.BranchPhone
String* mGetBranch.BranchPhone
ArrayOf<CAdministration.role> mSetBranch.RoleIds
ArrayOf<CAdministration.role>* mGetBranch.RoleIds
ArrayOf<CAdministration.department> mSetBranch.DeptIds
ArrayOf<CAdministration.department>* mGetBranch.DeptIds
ArrayOf<CAdministration.subdepartment> mSetBranch.SubDeptIds
ArrayOf<CAdministration.subdepartment>* mGetBranch.SubDeptIds
ArrayOf<CAdministration.subdepartmentLevel2> mSetBranch.SubDeptLevel2Ids
ArrayOf<CAdministration.subdepartmentLevel2>* mGetBranch.SubDeptLevel2Ids
ArrayOf<CAdministration.subdepartmentLevel3> mSetBranch.SubDeptLevel3Ids
ArrayOf<CAdministration.subdepartmentLevel3>* mGetBranch.SubDeptLevel3Ids
CRegister.businessChannelOwner mSetBranch.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetBranch.BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetBranch.DocRefs
ArrayOf<CAdministration.documents>* mGetBranch.DocRefs
ArrayOf<CAdministration.images> mSetBranch.ImageRefs
ArrayOf<CAdministration.images>* mGetBranch.ImageRefs
ArrayOf<CAdministration.audio> mSetBranch.AudioRefIds
ArrayOf<CAdministration.audio>* mGetBranch.AudioRefIds
ArrayOf<CAdministration.video> mSetBranch.VideoRefs
ArrayOf<CAdministration.video>* mGetBranch.VideoRefs
const String& mSetDepartmentMap.DeptMapId
String* mGetDepartmentMap.DeptMapId
const String& mSetDepartmentMap.Description
String* mGetDepartmentMap.Description
CRegister.businessChannelOwner mSetDepartmentMap.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetDepartmentMap.BusinessChannelOwnerId
CAdministration.department mSetDepartmentMap.DepartmentId
CAdministration.department* mGetDepartmentMap.DepartmentId
CAdministration.subdepartment mSetDepartmentMap.SubDeptId
CAdministration.subdepartment* mGetDepartmentMap.SubDeptId
CAdministration.subdepartmentLevel2 mSetDepartmentMap.SubDeptLevel2Id
CAdministration.subdepartmentLevel2* mGetDepartmentMap.SubDeptLevel2Id
CAdministration.subdepartmentLevel3 mSetDepartmentMap.SubDeptLevel3Id
CAdministration.subdepartmentLevel3* mGetDepartmentMap.SubDeptLevel3Id
ArrayOf<CAdministration.staff> mSetDepartmentMap.HeadsDeptsSubDeptsEmployeeIdsDescending
ArrayOf<CAdministration.staff>* mGetDepartmentMap.HeadsDeptsSubDeptsEmployeeIdsDescending
ArrayOf<CAdministration.role> mSetDepartmentMap.RoleIds
ArrayOf<CAdministration.role>* mGetDepartmentMap.RoleIds
ArrayOf<CAdministration.branch> mSetDepartmentMap.BranchIds
ArrayOf<CAdministration.branch>* mGetDepartmentMap.BranchIds
ArrayOf<CAdministration.documents> mSetDepartmentMap.DocRefs
ArrayOf<CAdministration.documents>* mGetDepartmentMap.DocRefs
ArrayOf<CAdministration.images> mSetDepartmentMap.ImageRefs
ArrayOf<CAdministration.images>* mGetDepartmentMap.ImageRefs
ArrayOf<CAdministration.audio> mSetDepartmentMap.AudioRefIds
ArrayOf<CAdministration.audio>* mGetDepartmentMap.AudioRefIds
ArrayOf<CAdministration.video> mSetDepartmentMap.VideoRefs
ArrayOf<CAdministration.video>* mGetDepartmentMap.VideoRefs
const String& mSetDepartment.DeptId
String* mGetDepartment.DeptId
const String& mSetDepartment.DeptName
String* mGetDepartment.DeptName
ArrayOf<const String&> mSetDepartment.DeptAddressLine1
ArrayOf<String>* mGetDepartment.DeptAddressLine1
ArrayOf<const String&> mSetDepartment.DeptAddressLine2
ArrayOf<String>* mGetDepartment.DeptAddressLine2
ArrayOf<const String&> mSetDepartment.BranchSuburb
ArrayOf<String>* mGetDepartment.BranchSuburb
ArrayOf<const String&> mSetDepartment.BranchPostcode
ArrayOf<String>* mGetDepartment.BranchPostcode
ArrayOf<const String&> mSetDepartment.BranchPhone
ArrayOf<String>* mGetDepartment.BranchPhone
CAdministration.staff mSetDepartment.HeadDeptEmployeeId
CAdministration.staff* mGetDepartment.HeadDeptEmployeeId
ArrayOf<CAdministration.role> mSetDepartment.RoleIds
ArrayOf<CAdministration.role>* mGetDepartment.RoleIds
ArrayOf<CAdministration.branch> mSetDepartment.BranchIds
ArrayOf<CAdministration.branch>* mGetDepartment.BranchIds
CRegister.businessChannelOwner mSetDepartment.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetDepartment.BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetDepartment.DocRefs
ArrayOf<CAdministration.documents>* mGetDepartment.DocRefs
ArrayOf<CAdministration.images> mSetDepartment.ImageRefs
ArrayOf<CAdministration.images>* mGetDepartment.ImageRefs
ArrayOf<CAdministration.audio> mSetDepartment.AudioRefIds
ArrayOf<CAdministration.audio>* mGetDepartment.AudioRefIds
ArrayOf<CAdministration.video> mSetDepartment.VideoRefs
ArrayOf<CAdministration.video>* mGetDepartment.VideoRefs
const String& mSetSubDepartment.SubDeptId
String* mGetSubDepartment.SubDeptId
const String& mSetSubDepartment.SubDeptName
String* mGetSubDepartment.SubDeptName
ArrayOf<const String&> mSetSubDepartment.SubDeptAddressLine1
ArrayOf<String>* mGetSubDepartment.SubDeptAddressLine1
ArrayOf<const String&> mSetSubDepartment.SubDeptAddressLine2
ArrayOf<String>* mGetSubDepartment.SubDeptAddressLine2
ArrayOf<const String&> mSetSubDepartment.BranchSuburb
ArrayOf<String>* mGetSubDepartment.BranchSuburb
ArrayOf<const String&> mSetSubDepartment.BranchPostcode
ArrayOf<String>* mGetSubDepartment.BranchPostcode
ArrayOf<const String&> mSetSubDepartment.BranchPhone
ArrayOf<String>* mGetSubDepartment.BranchPhone
CAdministration.staff mSetSubDepartment.HeadSubDeptEmployeeId
CAdministration.staff* mGetSubDepartment.HeadSubDeptEmployeeId
ArrayOf<CAdministration.role> mSetSubDepartment.RoleIds
ArrayOf<CAdministration.role>* mGetSubDepartment.RoleIds
ArrayOf<CAdministration.branch> mSetSubDepartment.BranchIds
ArrayOf<CAdministration.branch>* mGetSubDepartment.BranchIds
CAdministration.department mSetSubDepartment.SupDeptId
CAdministration.department* mGetSubDepartment.SupDeptId
CRegister.businessChannelOwner mSetSubDepartment.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSubDepartment.BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetSubDepartment.DocRefs
ArrayOf<CAdministration.documents>* mGetSubDepartment.DocRefs
ArrayOf<CAdministration.images> mSetSubDepartment.ImageRefs
ArrayOf<CAdministration.images>* mGetSubDepartment.ImageRefs
ArrayOf<CAdministration.audio> mSetSubDepartment.AudioRefIds
ArrayOf<CAdministration.audio>* mGetSubDepartment.AudioRefIds
ArrayOf<CAdministration.video> mSetSubDepartment.VideoRefs
ArrayOf<CAdministration.video>* mGetSubDepartment.VideoRefs
const String& mSetSubDepartmentLevel2.SubDeptLevel2Id
String* mGetSubDepartmentLevel2.SubDeptLevel2Id
const String& mSetSubDepartmentLevel2.SubDeptLevel2Name
String* mGetSubDepartmentLevel2.SubDeptLevel2Name
ArrayOf<const String&> mSetSubDepartmentLevel2.SubDeptLevel2AddressLine1
ArrayOf<String>* mGetSubDepartmentLevel2.SubDeptLevel2AddressLine1
ArrayOf<const String&> mSetSubDepartmentLevel2.SubDeptLevel2AddressLine2
ArrayOf<String>* mGetSubDepartmentLevel2.SubDeptLevel2AddressLine2
ArrayOf<const String&> mSetSubDepartmentLevel2.BranchSuburb
ArrayOf<String>* mGetSubDepartmentLevel2.BranchSuburb
ArrayOf<const String&> mSetSubDepartmentLevel2.BranchPostcode
ArrayOf<String>* mGetSubDepartmentLevel2.BranchPostcode
ArrayOf<const String&> mSetSubDepartmentLevel2.BranchPhone
ArrayOf<String>* mGetSubDepartmentLevel2.BranchPhone
CAdministration.staff mSetSubDepartmentLevel2.HeadLevel2SubDeptEmployeeId
CAdministration.staff* mGetSubDepartmentLevel2.HeadLevel2SubDeptEmployeeId
ArrayOf<CAdministration.role> mSetSubDepartmentLevel2.RoleIds
ArrayOf<CAdministration.role>* mGetSubDepartmentLevel2.RoleIds
ArrayOf<CAdministration.branch> mSetSubDepartmentLevel2.BranchIds
ArrayOf<CAdministration.branch>* mGetSubDepartmentLevel2.BranchIds
CAdministration.subdepartment mSetSubDepartmentLevel2.SupSubDeptId
CAdministration.subdepartment* mGetSubDepartmentLevel2.SupSubDeptId
CRegister.businessChannelOwner mSetSubDepartmentLevel2.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSubDepartmentLevel2.BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetSubDepartmentLevel2.DocRefs
ArrayOf<CAdministration.documents>* mGetSubDepartmentLevel2.DocRefs
ArrayOf<CAdministration.images> mSetSubDepartmentLevel2.ImageRefs
ArrayOf<CAdministration.images>* mGetSubDepartmentLevel2.ImageRefs
ArrayOf<CAdministration.audio> mSetSubDepartmentLevel2.AudioRefIds
ArrayOf<CAdministration.audio>* mGetSubDepartmentLevel2.AudioRefIds
ArrayOf<CAdministration.video> mSetSubDepartmentLevel2.VideoRefs
ArrayOf<CAdministration.video>* mGetSubDepartmentLevel2.VideoRefs
const String& mSetSubDepartmentLevel3.SubDeptLevel3Id
String* mGetSubDepartmentLevel3.SubDeptLevel3Id
const String& mSetSubDepartmentLevel3.SubDeptLevel3Name
String* mGetSubDepartmentLevel3.SubDeptLevel3Name
ArrayOf<const String&> mSetSubDepartmentLevel3.SubDeptLevel3AddressLine1
ArrayOf<String>* mGetSubDepartmentLevel3.SubDeptLevel3AddressLine1
ArrayOf<const String&> mSetSubDepartmentLevel3.SubDeptLevel3AddressLine2
ArrayOf<String>* mGetSubDepartmentLevel3.SubDeptLevel3AddressLine2
ArrayOf<const String&> mSetSubDepartmentLevel3.BranchSuburb
ArrayOf<String>* mGetSubDepartmentLevel3.BranchSuburb
ArrayOf<const String&> mSetSubDepartmentLevel3.BranchPostcode
ArrayOf<String>* mGetSubDepartmentLevel3.BranchPostcode
ArrayOf<const String&> mSetSubDepartmentLevel3.BranchPhone
ArrayOf<String>* mGetSubDepartmentLevel3.BranchPhone
CAdministration.staff mSetSubDepartmentLevel3.HeadLevel2SubDeptEmployeeId
CAdministration.staff* mGetSubDepartmentLevel3.HeadLevel2SubDeptEmployeeId
ArrayOf<CAdministration.role> mSetSubDepartmentLevel3.RoleIds
ArrayOf<CAdministration.role>* mGetSubDepartmentLevel3.RoleIds
ArrayOf<CAdministration.branch> mSetSubDepartmentLevel3.BranchIds
ArrayOf<CAdministration.branch>* mGetSubDepartmentLevel3.BranchIds
CAdministration.subdepartmentLevel2 mSetSubDepartmentLevel3.SupSubDeptLevel2Id
CAdministration.subdepartmentLevel2* mGetSubDepartmentLevel3.SupSubDeptLevel2Id
CRegister.businessChannelOwner mSetSubDepartmentLevel3.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSubDepartmentLevel3.BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetSubDepartmentLevel3.DocRefs
ArrayOf<CAdministration.documents>* mGetSubDepartmentLevel3.DocRefs
ArrayOf<CAdministration.images> mSetSubDepartmentLevel3.ImageRefs
ArrayOf<CAdministration.images>* mGetSubDepartmentLevel3.ImageRefs
ArrayOf<CAdministration.audio> mSetSubDepartmentLevel3.AudioRefIds
ArrayOf<CAdministration.audio>* mGetSubDepartmentLevel3.AudioRefIds
ArrayOf<CAdministration.video> mSetSubDepartmentLevel3.VideoRefs
ArrayOf<CAdministration.video>* mGetSubDepartmentLevel3.VideoRefs
const String& mSetDocuments.DocRefId
String* mGetDocuments.DocRefId
const String& mSetDocuments.DocHash
String* mGetDocuments.DocHash
const String& mSetDocuments.MasLedgeFinTxId
String* mGetDocuments.MasLedgeFinTxId
const String& mSetDocuments.GenLedgeFinTxId
String* mGetDocuments.GenLedgeFinTxId
Int32 mSetDocuments.MasLedgeFinTxNum
Int32* mGetDocuments.MasLedgeFinTxNum
Int32 mSetDocuments.GenLedgeFinTxNum
Int32* mGetDocuments.GenLedgeFinTxNum
CRegister.businessChannelOwner mSetDocuments.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetDocuments.BusinessChannelOwnerId
CAdministration.branch mSetDocuments.BranchId
CAdministration.branch* mGetDocuments.BranchId
CAdministration.department mSetDocuments.DeptId
CAdministration.department* mGetDocuments.DeptId
CProperty.property mSetDocuments.PropertyId
CProperty.property* mGetDocuments.PropertyId
ArrayOf<CProperty.propertyOwner> mSetDocuments.PropOwners
ArrayOf<CProperty.propertyOwner>* mGetDocuments.PropOwners
ArrayOf<CFinance.SetRegister> mSetDocuments.MasterLedgerSetIds
ArrayOf<CFinance.SetRegister>* mGetDocuments.MasterLedgerSetIds
ArrayOf<CAdministration.staff> mSetDocuments.EmployeeIds
ArrayOf<CAdministration.staff>* mGetDocuments.EmployeeIds
ArrayOf<CProperty.tenant> mSetDocuments.TenancyIds
ArrayOf<CProperty.tenant>* mGetDocuments.TenancyIds
ArrayOf<CCustomer.customer> mSetDocuments.CustomerIds
ArrayOf<CCustomer.customer>* mGetDocuments.CustomerIds
ArrayOf<CSupplier.supplier> mSetDocuments.SupplierIds
ArrayOf<CSupplier.supplier>* mGetDocuments.SupplierIds
ArrayOf<CSolicitor.solicitor> mSetDocuments.SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetDocuments.SolicitorIds
ArrayOf<CStakeholder.agent> mSetDocuments.AgentIds
ArrayOf<CStakeholder.agent>* mGetDocuments.AgentIds
ArrayOf<CStakeholder.nonGovStakeholder> mSetDocuments.NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetDocuments.NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetDocuments.GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetDocuments.GovStakeholderIds
CStakeholder.stateLAHAuthority mSetDocuments.StateLAHCId
CStakeholder.stateLAHAuthority* mGetDocuments.StateLAHCId
CStakeholder.statePublicHousingAuthority mSetDocuments.StatePublicHousingAuthorityId
CStakeholder.statePublicHousingAuthority* mGetDocuments.StatePublicHousingAuthorityId
CRegulator.nCAT mSetDocuments.NCATId
CRegulator.nCAT* mGetDocuments.NCATId
CRegulator.rentalBondAuthority mSetDocuments.RentalBondAuthorityId
CRegulator.rentalBondAuthority* mGetDocuments.RentalBondAuthorityId
CRegulator.communityHousingRegulator mSetDocuments.CommunityHousingRegulatorId
CRegulator.communityHousingRegulator* mGetDocuments.CommunityHousingRegulatorId
ArrayOf<CStakeholder.community> mSetDocuments.CommunityIds
ArrayOf<CStakeholder.community>* mGetDocuments.CommunityIds
ArrayOf<CStakeholder.media> mSetDocuments.MediaIds
ArrayOf<CStakeholder.media>* mGetDocuments.MediaIds
ArrayOf<CStakeholder.partner> mSetDocuments.PartnerIds
ArrayOf<CStakeholder.partner>* mGetDocuments.PartnerIds
CRegulator.nationalRegulator mSetDocuments.NatRegId
CRegulator.nationalRegulator* mGetDocuments.NatRegId
CRegulator.stateBasedRegulator mSetDocuments.StateBasedRegId
CRegulator.stateBasedRegulator* mGetDocuments.StateBasedRegId
CProperty.propertyInspectionResidential mSetDocuments.PropertyInspectionResId
CProperty.propertyInspectionResidential* mGetDocuments.PropertyInspectionResId
CProperty.propertyInspectionCommercial mSetDocuments.PropertyInspectionCommercId
CProperty.propertyInspectionCommercial* mGetDocuments.PropertyInspectionCommercId
ArrayOf<CAdministration.service> mSetDocuments.ServiceIds
ArrayOf<CAdministration.service>* mGetDocuments.ServiceIds
ArrayOf<CAdministration.item> mSetDocuments.ItemIds
ArrayOf<CAdministration.item>* mGetDocuments.ItemIds
ArrayOf<CAdministration.job> mSetDocuments.JobIds
ArrayOf<CAdministration.job>* mGetDocuments.JobIds
ArrayOf<CAdministration.documents> mSetDocuments.DocRefIds
ArrayOf<CAdministration.documents>* mGetDocuments.DocRefIds
ArrayOf<CAdministration.images> mSetDocuments.ImageRefIds
ArrayOf<CAdministration.images>* mGetDocuments.ImageRefIds
ArrayOf<CAdministration.audio> mSetDocuments.AudioRefIds
ArrayOf<CAdministration.audio>* mGetDocuments.AudioRefIds
ArrayOf<CAdministration.video> mSetDocuments.VideoRefIds
ArrayOf<CAdministration.video>* mGetDocuments.VideoRefIds
const String& mSetImages.ImageRefId
String* mGetImages.ImageRefId
const String& mSetImages.ImageHash
String* mGetImages.ImageHash
CRegister.businessChannelOwner mSetImages.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetImages.BusinessChannelOwnerId
CAdministration.branch mSetImages.BranchId
CAdministration.branch* mGetImages.BranchId
CAdministration.department mSetImages.DeptId
CAdministration.department* mGetImages.DeptId
CProperty.property mSetImages.PropertyId
CProperty.property* mGetImages.PropertyId
ArrayOf<CProperty.propertyOwner> mSetImages.PropOwners
ArrayOf<CProperty.propertyOwner>* mGetImages.PropOwners
ArrayOf<CFinance.SetRegister> mSetImages.MasterLedgerSetIds
ArrayOf<CFinance.SetRegister>* mGetImages.MasterLedgerSetIds
ArrayOf<CAdministration.staff> mSetImages.EmployeeIds
ArrayOf<CAdministration.staff>* mGetImages.EmployeeIds
ArrayOf<CProperty.tenant> mSetImages.TenancyIds
ArrayOf<CProperty.tenant>* mGetImages.TenancyIds
ArrayOf<CCustomer.customer> mSetImages.CustomerIds
ArrayOf<CCustomer.customer>* mGetImages.CustomerIds
ArrayOf<CSupplier.supplier> mSetImages.SupplierIds
ArrayOf<CSupplier.supplier>* mGetImages.SupplierIds
ArrayOf<CSolicitor.solicitor> mSetImages.SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetImages.SolicitorIds
ArrayOf<CStakeholder.agent> mSetImages.AgentIds
ArrayOf<CStakeholder.agent>* mGetImages.AgentIds
ArrayOf<CStakeholder.nonGovStakeholder> mSetImages.NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetImages.NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetImages.GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetImages.GovStakeholderIds
CStakeholder.stateLAHAuthority mSetImages.StateLAHCId
CStakeholder.stateLAHAuthority* mGetImages.StateLAHCId
CStakeholder.statePublicHousingAuthority mSetImages.StatePublicHousingAuthorityId
CStakeholder.statePublicHousingAuthority* mGetImages.StatePublicHousingAuthorityId
CRegulator.nCAT mSetImages.NCATId
CRegulator.nCAT* mGetImages.NCATId
CRegulator.rentalBondAuthority mSetImages.RentalBondAuthorityId
CRegulator.rentalBondAuthority* mGetImages.RentalBondAuthorityId
CRegulator.communityHousingRegulator mSetImages.CommunityHousingRegulatorId
CRegulator.communityHousingRegulator* mGetImages.CommunityHousingRegulatorId
CStakeholder.community mSetImages.CommunityId
CStakeholder.community* mGetImages.CommunityId
CStakeholder.media mSetImages.MediaId
CStakeholder.media* mGetImages.MediaId
CStakeholder.partner mSetImages.PartnerId
CStakeholder.partner* mGetImages.PartnerId
CRegulator.nationalRegulator mSetImages.NatRegId
CRegulator.nationalRegulator* mGetImages.NatRegId
CRegulator.stateBasedRegulator mSetImages.StateBasedRegId
CRegulator.stateBasedRegulator* mGetImages.StateBasedRegId
CProperty.propertyInspectionResidential mSetImages.PropertyInspectionResId
CProperty.propertyInspectionResidential* mGetImages.PropertyInspectionResId
CProperty.propertyInspectionCommercial mSetImages.PropertyInspectionCommercId
CProperty.propertyInspectionCommercial* mGetImages.PropertyInspectionCommercId
ArrayOf<CAdministration.service> mSetImages.ServiceIds
ArrayOf<CAdministration.service>* mGetImages.ServiceIds
ArrayOf<CAdministration.item> mSetImages.ItemIds
ArrayOf<CAdministration.item>* mGetImages.ItemIds
ArrayOf<CAdministration.job> mSetImages.JobIds
ArrayOf<CAdministration.job>* mGetImages.JobIds
ArrayOf<CAdministration.documents> mSetImages.DocRefIds
ArrayOf<CAdministration.documents>* mGetImages.DocRefIds
ArrayOf<CAdministration.images> mSetImages.ImageRefIds
ArrayOf<CAdministration.images>* mGetImages.ImageRefIds
ArrayOf<CAdministration.audio> mSetImages.AudioRefIds
ArrayOf<CAdministration.audio>* mGetImages.AudioRefIds
ArrayOf<CAdministration.video> mSetImages.VideoRefIds
ArrayOf<CAdministration.video>* mGetImages.VideoRefIds
const String& mSetAudio.AudioRefId
String* mGetAudio.AudioRefId
const String& mSetAudio.AudioHash
String* mGetAudio.AudioHash
CRegister.businessChannelOwner mSetAudio.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAudio.BusinessChannelOwnerId
CAdministration.branch mSetAudio.BranchId
CAdministration.branch* mGetAudio.BranchId
CAdministration.mapOfdepartments mSetAudio.DeptMapId
CAdministration.mapOfdepartments* mGetAudio.DeptMapId
ArrayOf<CFinance.SetRegister> mSetAudio.GenSetIds
ArrayOf<CFinance.SetRegister>* mGetAudio.GenSetIds
ArrayOf<CAdministration.staff> mSetAudio.EmployeeIds
ArrayOf<CAdministration.staff>* mGetAudio.EmployeeIds
ArrayOf<CCustomer.customer> mSetAudio.CustomerIds
ArrayOf<CCustomer.customer>* mGetAudio.CustomerIds
ArrayOf<CSupplier.supplier> mSetAudio.SupplierIds
ArrayOf<CSupplier.supplier>* mGetAudio.SupplierIds
ArrayOf<CSolicitor.solicitor> mSetAudio.SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetAudio.SolicitorIds
ArrayOf<CStakeholder.agent> mSetAudio.AgentIds
ArrayOf<CStakeholder.agent>* mGetAudio.AgentIds
ArrayOf<CStakeholder.nonGovStakeholder> mSetAudio.NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetAudio.NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetAudio.GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetAudio.GovStakeholderIds
CRegulator.nCAT mSetAudio.NCATId
CRegulator.nCAT* mGetAudio.NCATId
CStakeholder.community mSetAudio.CommunityId
CStakeholder.community* mGetAudio.CommunityId
CStakeholder.media mSetAudio.MediaId
CStakeholder.media* mGetAudio.MediaId
CStakeholder.partner mSetAudio.PartnerId
CStakeholder.partner* mGetAudio.PartnerId
CRegulator.nationalRegulator mSetAudio.NatRegId
CRegulator.nationalRegulator* mGetAudio.NatRegId
CRegulator.stateBasedRegulator mSetAudio.StateBasedRegId
CRegulator.stateBasedRegulator* mGetAudio.StateBasedRegId
asCARAPI mSetAudio.SetInspectionCommercId
asCARAPI mGetAudio.SetInspectionCommercId
ArrayOf<CAdministration.service> mSetAudio.ServiceIds
ArrayOf<CAdministration.service>* mGetAudio.ServiceIds
ArrayOf<CAdministration.item> mSetAudio.ItemIds
ArrayOf<CAdministration.item>* mGetAudio.ItemIds
ArrayOf<CAdministration.job> mSetAudio.JobIds
ArrayOf<CAdministration.job>* mGetAudio.JobIds
ArrayOf<CAdministration.documents> mSetAudio.DocRefIds
ArrayOf<CAdministration.documents>* mGetAudio.DocRefIds
ArrayOf<CAdministration.images> mSetAudio.ImageRefIds
ArrayOf<CAdministration.images>* mGetAudio.ImageRefIds
ArrayOf<CAdministration.audio> mSetAudio.AudioRefIds
ArrayOf<CAdministration.audio>* mGetAudio.AudioRefIds
ArrayOf<CAdministration.video> mSetAudio.VideoRefIds
ArrayOf<CAdministration.video>* mGetAudio.VideoRefIds
const String& mSetVideo.VideoRefId
String* mGetVideo.VideoRefId
const String& mSetVideo.VideoHash
String* mGetVideo.VideoHash
CRegister.businessChannelOwner mSetVideo.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetVideo.BusinessChannelOwnerId
CAdministration.branch mSetVideo.BranchId
CAdministration.branch* mGetVideo.BranchId
CAdministration.department mSetVideo.DeptId
CAdministration.department* mGetVideo.DeptId
ArrayOf<CProperty.property> mSetVideo.PropertyIds
ArrayOf<CProperty.property>* mGetVideo.PropertyIds
ArrayOf<CProperty.propertyOwner> mSetVideo.PropOwners
ArrayOf<CProperty.propertyOwner>* mGetVideo.PropOwners
ArrayOf<CAdministration.staff> mSetVideo.EmployeeIds
ArrayOf<CAdministration.staff>* mGetVideo.EmployeeIds
ArrayOf<CProperty.tenant> mSetVideo.TenancyIds
ArrayOf<CProperty.tenant>* mGetVideo.TenancyIds
ArrayOf<CCustomer.customer> mSetVideo.CustomerIds
ArrayOf<CCustomer.customer>* mGetVideo.CustomerIds
ArrayOf<CSupplier.supplier> mSetVideo.SupplierIds
ArrayOf<CSupplier.supplier>* mGetVideo.SupplierIds
ArrayOf<CSolicitor.solicitor> mSetVideo.SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetVideo.SolicitorIds
ArrayOf<CStakeholder.agent> mSetVideo.AgentIds
ArrayOf<CStakeholder.agent>* mGetVideo.AgentIds
ArrayOf<CStakeholder.nonGovStakeholder> mSetVideo.NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetVideo.NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetVideo.GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetVideo.GovStakeholderIds
CStakeholder.stateLAHAuthority mSetVideo.StateLAHCId
CStakeholder.stateLAHAuthority* mGetVideo.StateLAHCId
CStakeholder.statePublicHousingAuthority mSetVideo.StatePublicHousingAuthorityId
CStakeholder.statePublicHousingAuthority* mGetVideo.StatePublicHousingAuthorityId
CRegulator.nCAT mSetVideo.NCATId
CRegulator.nCAT* mGetVideo.NCATId
CRegulator.rentalBondAuthority mSetVideo.RentalBondAuthorityId
CRegulator.rentalBondAuthority* mGetVideo.RentalBondAuthorityId
CRegulator.communityHousingRegulator mSetVideo.CommunityHousingRegulatorId
CRegulator.communityHousingRegulator* mGetVideo.CommunityHousingRegulatorId
CStakeholder.community mSetVideo.CommunityId
CStakeholder.community* mGetVideo.CommunityId
CStakeholder.media mSetVideo.MediaId
CStakeholder.media* mGetVideo.MediaId
CStakeholder.partner mSetVideo.PartnerId
CStakeholder.partner* mGetVideo.PartnerId
CRegulator.nationalRegulator mSetVideo.NatRegId
CRegulator.nationalRegulator* mGetVideo.NatRegId
CRegulator.stateBasedRegulator mSetVideo.StateBasedRegId
CRegulator.stateBasedRegulator* mGetVideo.StateBasedRegId
CProperty.propertyInspectionResidential mSetVideo.PropertyInspectionResId
CProperty.propertyInspectionResidential* mGetVideo.PropertyInspectionResId
CProperty.propertyInspectionCommercial mSetVideo.PropertyInspectionCommercId
CProperty.propertyInspectionCommercial* mGetVideo.PropertyInspectionCommercId
ArrayOf<CAdministration.service> mSetVideo.ServiceIds
ArrayOf<CAdministration.service>* mGetVideo.ServiceIds
ArrayOf<CAdministration.item> mSetVideo.ItemIds
ArrayOf<CAdministration.item>* mGetVideo.ItemIds
ArrayOf<CAdministration.job> mSetVideo.JobIds
ArrayOf<CAdministration.job>* mGetVideo.JobIds
ArrayOf<CAdministration.documents> mSetVideo.DocRefIds
ArrayOf<CAdministration.documents>* mGetVideo.DocRefIds
ArrayOf<CAdministration.images> mSetVideo.ImageRefIds
ArrayOf<CAdministration.images>* mGetVideo.ImageRefIds
ArrayOf<CAdministration.audio> mSetVideo.AudioRefIds
ArrayOf<CAdministration.audio>* mGetVideo.AudioRefIds
ArrayOf<CAdministration.video> mSetVideo.VideoRefIds
ArrayOf<CAdministration.video>* mGetVideo.VideoRefIds
const String& mSetItemType.ItemTypeId
String* mGetItemType.ItemTypeId
const String& mSetItemType.ItemTypeDescription
String* mGetItemType.ItemTypeDescription
const String& mSetItemType.ItemModelNumber
String* mGetItemType.ItemModelNumber
const String& mSetItemType.ItemName
String* mGetItemType.ItemName
Int32 mSetItemType.NumberInInventory
Int32* mGetItemType.NumberInInventory
CRegister.businessChannelOwner mSetItemType.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetItemType.BusinessChannelOwnerId
CFactory.productType mSetItemType.OurProductTypeId
CFactory.productType* mGetItemType.OurProductTypeId
CAdministration.branch mSetItemType.BranchId
CAdministration.branch* mGetItemType.BranchId
CAdministration.department mSetItemType.DeptId
CAdministration.department* mGetItemType.DeptId
ArrayOf<CSupplier.supplier> mSetItemType.Suppliers
ArrayOf<CSupplier.supplier>* mGetItemType.Suppliers
ArrayOf<CAdministration.service> mSetItemType.ServiceIds
ArrayOf<CAdministration.service>* mGetItemType.ServiceIds
ArrayOf<CSupplier.supplierType> mSetItemType.SupplierTypeIds
ArrayOf<CSupplier.supplierType>* mGetItemType.SupplierTypeIds
ArrayOf<CAdministration.documents> mSetItemType.DocRefIds
ArrayOf<CAdministration.documents>* mGetItemType.DocRefIds
ArrayOf<CAdministration.images> mSetItemType.ImageRefIds
ArrayOf<CAdministration.images>* mGetItemType.ImageRefIds
ArrayOf<CAdministration.video> mSetItemType.VideoRefIds
ArrayOf<CAdministration.video>* mGetItemType.VideoRefIds
const String& mSetItem.ItemId
String* mGetItem.ItemId
const String& mSetItem.ItemName
String* mGetItem.ItemName
const String& mSetItem.ItemDescription
String* mGetItem.ItemDescription
Boolean mSetItem.Fragile
Boolean* mGetItem.Fragile
Boolean mSetItem.Toxic
Boolean* mGetItem.Toxic
Boolean mSetItem.Corrosive
Boolean* mGetItem.Corrosive
const String& mSetItem.ItemModelNumber
String* mGetItem.ItemModelNumber
const String& mSetItem.ItemSerialNumber
String* mGetItem.ItemSerialNumber
Boolean mSetItem.ItemQualityDimensionsCheckedPassed
Boolean* mGetItem.ItemQualityDimensionsCheckedPassed
const String& mSetItem.PricePerItem
String* mGetItem.PricePerItem
CRegister.businessChannelOwner mSetItem.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetItem.BusinessChannelOwnerId
CFactory.product mSetItem.OurProductId
CFactory.product* mGetItem.OurProductId
CAdministration.branch mSetItem.BranchId
CAdministration.branch* mGetItem.BranchId
CAdministration.department mSetItem.DeptId
CAdministration.department* mGetItem.DeptId
CSupplier.supplier mSetItem.SupplierId
CSupplier.supplier* mGetItem.SupplierId
CAdministration.itemType mSetItem.ItemTypeId
CAdministration.itemType* mGetItem.ItemTypeId
ArrayOf<CAdministration.jobType> mSetItem.JobTypeIds
ArrayOf<CAdministration.jobType>* mGetItem.JobTypeIds
ArrayOf<CAdministration.documents> mSetItem.DocRefIds
ArrayOf<CAdministration.documents>* mGetItem.DocRefIds
ArrayOf<CAdministration.images> mSetItem.ImageRefIds
ArrayOf<CAdministration.images>* mGetItem.ImageRefIds
ArrayOf<CAdministration.video> mSetItem.VideoRefIds
ArrayOf<CAdministration.video>* mGetItem.VideoRefIds
const String& mSetJobType.JobTypeId
String* mGetJobType.JobTypeId
const String& mSetJobType.JobDescription
String* mGetJobType.JobDescription
const String& mSetJobType.JobCode
String* mGetJobType.JobCode
const String& mSetJobType.JobName
String* mGetJobType.JobName
ArrayOf<const String&> mSetJobType.TaskSequence
ArrayOf<String>* mGetJobType.TaskSequence
ArrayOf<const String&> mSetJobType.NatRegId
ArrayOf<String>* mGetJobType.NatRegId
ArrayOf<const String&> mSetJobType.StateBasedRegId
ArrayOf<String>* mGetJobType.StateBasedRegId
CRegister.businessChannelOwner mSetJobType.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetJobType.BusinessChannelOwnerId
CAdministration.branch mSetJobType.BranchId
CAdministration.branch* mGetJobType.BranchId
CAdministration.department mSetJobType.DeptId
CAdministration.department* mGetJobType.DeptId
ArrayOf<CSupplier.supplier> mSetJobType.Suppliers
ArrayOf<CSupplier.supplier>* mGetJobType.Suppliers
ArrayOf<CAdministration.itemType> mSetJobType.ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetJobType.ItemTypeIds
ArrayOf<CAdministration.documents> mSetJobType.DocRefIds
ArrayOf<CAdministration.documents>* mGetJobType.DocRefIds
ArrayOf<CAdministration.images> mSetJobType.ImageRefIds
ArrayOf<CAdministration.images>* mGetJobType.ImageRefIds
ArrayOf<CAdministration.video> mSetJobType.VideoRefIds
ArrayOf<CAdministration.video>* mGetJobType.VideoRefIds
const String& mSetJob.JobId
String* mGetJob.JobId
const String& mSetJob.JobDescription
String* mGetJob.JobDescription
ArrayOf<const String&> mSetJob.TaskDescriptionSequence
ArrayOf<String>* mGetJob.TaskDescriptionSequence
const String& mSetJob.JobCode
String* mGetJob.JobCode
const String& mSetJob.JobName
String* mGetJob.JobName
Int32 mSetJob.JobNum
Int32* mGetJob.JobNum
Boolean mSetJob.ResponsiveMaintenance
Boolean* mGetJob.ResponsiveMaintenance
Boolean mSetJob.PlannedMaintenance
Boolean* mGetJob.PlannedMaintenance
ArrayOf<Int32> mSetJob.ImmediatePrevJobNums
ArrayOf<Int32>* mGetJob.ImmediatePrevJobNums
ArrayOf<Boolean> mSetJob.ImmediatePrevJobsQCPass
ArrayOf<Boolean>* mGetJob.ImmediatePrevJobsQCPass
ArrayOf<const String&> mSetJob.DateTimeTaskStartSequence
ArrayOf<String>* mGetJob.DateTimeTaskStartSequence
ArrayOf<const String&> mSetJob.DateTimeTaskEndSequence
ArrayOf<String>* mGetJob.DateTimeTaskEndSequence
ArrayOf<const String&> mSetJob.ActualTaskStartTime
ArrayOf<String>* mGetJob.ActualTaskStartTime
ArrayOf<const String&> mSetJob.ActualTaskCompleteTime
ArrayOf<String>* mGetJob.ActualTaskCompleteTime
ArrayOf<Boolean> mSetJob.TaskCompletionQCPasses
ArrayOf<Boolean>* mGetJob.TaskCompletionQCPasses
Boolean mSetJob.JobCompletionQCPass
Boolean* mGetJob.JobCompletionQCPass
const String& mSetJob.NextJobTypeId
String* mGetJob.NextJobTypeId
ArrayOf<Boolean> mSetJob.TenantDamages
ArrayOf<Boolean>* mGetJob.TenantDamages
ArrayOf<Boolean> mSetJob.LesseeCustomerDamage
ArrayOf<Boolean>* mGetJob.LesseeCustomerDamage
CRegister.businessChannelOwner mSetJob.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetJob.BusinessChannelOwnerId
CAdministration.branch mSetJob.BranchId
CAdministration.branch* mGetJob.BranchId
CAdministration.department mSetJob.DeptId
CAdministration.department* mGetJob.DeptId
ArrayOf<CAdministration.documents> mSetJob.DocRefIds
ArrayOf<CAdministration.documents>* mGetJob.DocRefIds
ArrayOf<CAdministration.images> mSetJob.ImageRefIds
ArrayOf<CAdministration.images>* mGetJob.ImageRefIds
ArrayOf<CProperty.property> mSetJob.PropertyIds
ArrayOf<CProperty.property>* mGetJob.PropertyIds
CFinance.SetRegister mSetJob.MasterLedgerSetId
CFinance.SetRegister* mGetJob.MasterLedgerSetId
ArrayOf<CCustomer.customer> mSetJob.CustomerIds
ArrayOf<CCustomer.customer>* mGetJob.CustomerIds
ArrayOf<CAdministration.staff> mSetJob.EmployeeIds
ArrayOf<CAdministration.staff>* mGetJob.EmployeeIds
ArrayOf<CSupplier.supplier> mSetJob.SupplierIds
ArrayOf<CSupplier.supplier>* mGetJob.SupplierIds
CAdministration.jobType mSetJob.JobTypeId
CAdministration.jobType* mGetJob.JobTypeId
ArrayOf<CAdministration.itemType> mSetJob.ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetJob.ItemTypeIds
ArrayOf<CAdministration.item> mSetJob.ItemIds
ArrayOf<CAdministration.item>* mGetJob.ItemIds
ArrayOf<CAdministration.serviceType> mSetJob.ServiceTypeIds
ArrayOf<CAdministration.serviceType>* mGetJob.ServiceTypeIds
ArrayOf<CAdministration.service> mSetJob.ServiceIds
ArrayOf<CAdministration.service>* mGetJob.ServiceIds
ArrayOf<CFactory.materialType> mSetJob.MaterialTypeIds
ArrayOf<CFactory.materialType>* mGetJob.MaterialTypeIds
ArrayOf<CFactory.material> mSetJob.MaterialIds
ArrayOf<CFactory.material>* mGetJob.MaterialIds
ArrayOf<CFactory.partType> mSetJob.PartTypeIds
ArrayOf<CFactory.partType>* mGetJob.PartTypeIds
ArrayOf<CFactory.part> mSetJob.PartIds
ArrayOf<CFactory.part>* mGetJob.PartIds
ArrayOf<CFactory.minorsubassemblyType> mSetJob.MinorSubAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType>* mGetJob.MinorSubAssemblyTypeIds
ArrayOf<CFactory.minorsubassembly> mSetJob.MinorSubAssemblyIds
ArrayOf<CFactory.minorsubassembly>* mGetJob.MinorSubAssemblyIds
ArrayOf<CFactory.subassemblyType> mSetJob.SubAssemblyTypeIds
ArrayOf<CFactory.subassemblyType>* mGetJob.SubAssemblyTypeIds
ArrayOf<CFactory.subassembly> mSetJob.SubAssemblyIds
ArrayOf<CFactory.subassembly>* mGetJob.SubAssemblyIds
ArrayOf<CFactory.majorsubassemblyType> mSetJob.MajorSubAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType>* mGetJob.MajorSubAssemblyTypeIds
ArrayOf<CFactory.majorsubassembly> mSetJob.MajorSubAssemblyIds
ArrayOf<CFactory.majorsubassembly>* mGetJob.MajorSubAssemblyIds
ArrayOf<CFactory.lesserassemblyType> mSetJob.LesserAssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType>* mGetJob.LesserAssemblyTypeIds
ArrayOf<CFactory.lesserassembly> mSetJob.LesserAssemblyIds
ArrayOf<CFactory.lesserassembly>* mGetJob.LesserAssemblyIds
ArrayOf<CFactory.assemblyType> mSetJob.AssemblyTypeIds
ArrayOf<CFactory.assemblyType>* mGetJob.AssemblyTypeIds
ArrayOf<CFactory.assembly> mSetJob.AssemblyIds
ArrayOf<CFactory.assembly>* mGetJob.AssemblyIds
ArrayOf<CFactory.greaterassemblyType> mSetJob.GreaterAssemblyTypeIds
ArrayOf<CFactory.greaterassemblyType>* mGetJob.GreaterAssemblyTypeIds
ArrayOf<CFactory.greaterassembly> mSetJob.GreaterAssemblyIds
ArrayOf<CFactory.greaterassembly>* mGetJob.GreaterAssemblyIds
ArrayOf<CFactory.productType> mSetJob.ProductTypeIds
ArrayOf<CFactory.productType>* mGetJob.ProductTypeIds
ArrayOf<CFactory.product> mSetJob.ProductIds
ArrayOf<CFactory.product>* mGetJob.ProductIds
CFinance.masterSalesOrder mSetJob.MasterSalesOrderId
CFinance.masterSalesOrder* mGetJob.MasterSalesOrderId
realEstatePurchOrders mSetJob.PurchOrderId
realEstatePurchOrders* mGetJob.PurchOrderId
CRegulator.nationalRegulator mSetJob.NatRegId
CRegulator.nationalRegulator* mGetJob.NatRegId
CRegulator.stateBasedRegulator mSetJob.StateBasedRegId
CRegulator.stateBasedRegulator* mGetJob.StateBasedRegId
const String& mSetLeaveTypesCodes.LeaveId
String* mGetLeaveTypesCodes.LeaveId
const String& mSetLeaveTypesCodes.LeaveCode
String* mGetLeaveTypesCodes.LeaveCode
const String& mSetLeaveTypesCodes.LeaveDescription
String* mGetLeaveTypesCodes.LeaveDescription
const String& mSetLeaveTypesCodes.AwardName
String* mGetLeaveTypesCodes.AwardName
const String& mSetLeaveTypesCodes.Notes
String* mGetLeaveTypesCodes.Notes
CRegister.businessChannelOwner mSetLeaveTypesCodes.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLeaveTypesCodes.BusinessChannelOwnerId
CAdministration.branch mSetLeaveTypesCodes.BranchId
CAdministration.branch* mGetLeaveTypesCodes.BranchId
CAdministration.department mSetLeaveTypesCodes.DeptId
CAdministration.department* mGetLeaveTypesCodes.DeptId
ArrayOf<CAdministration.documents> mSetLeaveTypesCodes.DocRefIds
ArrayOf<CAdministration.documents>* mGetLeaveTypesCodes.DocRefIds
const String& mSetQuoteIn.QuoteInId
String* mGetQuoteIn.QuoteInId
ArrayOf<const String&> mSetQuoteIn.JobDescription
ArrayOf<String>* mGetQuoteIn.JobDescription
ArrayOf<const String&> mSetQuoteIn.JobTypeId
ArrayOf<String>* mGetQuoteIn.JobTypeId
ArrayOf<const String&> mSetQuoteIn.JobName
ArrayOf<String>* mGetQuoteIn.JobName
ArrayOf<const String&> mSetQuoteIn.ItemId
ArrayOf<String>* mGetQuoteIn.ItemId
ArrayOf<const String&> mSetQuoteIn.ConditionsUponCustomer
ArrayOf<String>* mGetQuoteIn.ConditionsUponCustomer
ArrayOf<Double> mSetQuoteIn.QuoteAmountEachJob
ArrayOf<Double>* mGetQuoteIn.QuoteAmountEachJob
Double mSetQuoteIn.QuoteTotalForOrder
Double* mGetQuoteIn.QuoteTotalForOrder
CRegister.businessChannelOwner mSetQuoteIn.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetQuoteIn.BusinessChannelOwnerId
CAdministration.branch mSetQuoteIn.BranchId
CAdministration.branch* mGetQuoteIn.BranchId
CAdministration.department mSetQuoteIn.DeptId
CAdministration.department* mGetQuoteIn.DeptId
CSupplier.supplier mSetQuoteIn.SupplierId
CSupplier.supplier* mGetQuoteIn.SupplierId
ArrayOf<CAdministration.documents> mSetQuoteIn.DocRefIds
ArrayOf<CAdministration.documents>* mGetQuoteIn.DocRefIds
ArrayOf<CAdministration.images> mSetQuoteIn.ImageRefIds
ArrayOf<CAdministration.images>* mGetQuoteIn.ImageRefIds
ArrayOf<CAdministration.video> mSetQuoteIn.VideoRefIds
ArrayOf<CAdministration.video>* mGetQuoteIn.VideoRefIds
realEstatePurchOrders mSetQuoteIn.PurchOrderId
realEstatePurchOrders* mGetQuoteIn.PurchOrderId
const String& mSetQuoteOut.QuoteOutId
String* mGetQuoteOut.QuoteOutId
ArrayOf<const String&> mSetQuoteOut.JobDescription
ArrayOf<String>* mGetQuoteOut.JobDescription
ArrayOf<const String&> mSetQuoteOut.JobTypeId
ArrayOf<String>* mGetQuoteOut.JobTypeId
ArrayOf<const String&> mSetQuoteOut.JobName
ArrayOf<String>* mGetQuoteOut.JobName
ArrayOf<const String&> mSetQuoteOut.ItemId
ArrayOf<String>* mGetQuoteOut.ItemId
ArrayOf<const String&> mSetQuoteOut.ConditionsUponCustomer
ArrayOf<String>* mGetQuoteOut.ConditionsUponCustomer
ArrayOf<Double> mSetQuoteOut.QuoteAmountEachJobItem
ArrayOf<Double>* mGetQuoteOut.QuoteAmountEachJobItem
Double mSetQuoteOut.QuoteTotalForOrder
Double* mGetQuoteOut.QuoteTotalForOrder
CRegister.businessChannelOwner mSetQuoteOut.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetQuoteOut.BusinessChannelOwnerId
CAdministration.branch mSetQuoteOut.BranchId
CAdministration.branch* mGetQuoteOut.BranchId
CAdministration.department mSetQuoteOut.DeptId
CAdministration.department* mGetQuoteOut.DeptId
ArrayOf<CAdministration.documents> mSetQuoteOut.DocRefIds
ArrayOf<CAdministration.documents>* mGetQuoteOut.DocRefIds
ArrayOf<CAdministration.images> mSetQuoteOut.ImageRefIds
ArrayOf<CAdministration.images>* mGetQuoteOut.ImageRefIds
ArrayOf<CAdministration.video> mSetQuoteOut.VideoRefIds
ArrayOf<CAdministration.video>* mGetQuoteOut.VideoRefIds
ArrayOf<CCustomer.customer> mSetQuoteOut.Customers
ArrayOf<CCustomer.customer>* mGetQuoteOut.Customers
CFinance.masterSalesOrder mSetQuoteOut.MasterSalesOrderId
CFinance.masterSalesOrder* mGetQuoteOut.MasterSalesOrderId
const String& mSetRiskRegister.RiskId
String* mGetRiskRegister.RiskId
CHelper.propertyType mSetRiskRegister.PropertyType
CHelper.propertyType* mGetRiskRegister.PropertyType
ArrayOf<const String&> mSetRiskRegister.RiskDescriptionSequence
ArrayOf<String>* mGetRiskRegister.RiskDescriptionSequence
ArrayOf<const String&> mSetRiskRegister.RiskMitigationSequence
ArrayOf<String>* mGetRiskRegister.RiskMitigationSequence
ArrayOf<const String&> mSetRiskRegister.StatementsOfRisksAssociated
ArrayOf<String>* mGetRiskRegister.StatementsOfRisksAssociated
CHelper.riskLikelihoodOfOccurrenceRating mSetRiskRegister.RiskLikelihoodRating
CHelper.riskLikelihoodOfOccurrenceRating* mGetRiskRegister.RiskLikelihoodRating
CHelper.riskConsequence mSetRiskRegister.RiskConsequenceRating
CHelper.riskConsequence* mGetRiskRegister.RiskConsequenceRating
CHelper.residualRiskLevel mSetRiskRegister.ResidualRiskLevel
CHelper.residualRiskLevel* mGetRiskRegister.ResidualRiskLevel
CRegister.businessChannelOwner mSetRiskRegister.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetRiskRegister.BusinessChannelOwnerId
CAdministration.branch mSetRiskRegister.BranchId
CAdministration.branch* mGetRiskRegister.BranchId
CAdministration.department mSetRiskRegister.DeptId
CAdministration.department* mGetRiskRegister.DeptId
CAdministration.role mSetRiskRegister.RoleId
CAdministration.role* mGetRiskRegister.RoleId
CProperty.property mSetRiskRegister.PropertyId
CProperty.property* mGetRiskRegister.PropertyId
CProperty.propertyConstructionType mSetRiskRegister.PropertyConstructionTypeId
CProperty.propertyConstructionType* mGetRiskRegister.PropertyConstructionTypeId
CFinance.SetType mSetRiskRegister.SetTypeId
CFinance.SetType* mGetRiskRegister.SetTypeId
CFinance.SetRegister mSetRiskRegister.SetId
CFinance.SetRegister* mGetRiskRegister.SetId
CProperty.program mSetRiskRegister.ProgramId
CProperty.program* mGetRiskRegister.ProgramId
CProperty.project mSetRiskRegister.ProjectId
CProperty.project* mGetRiskRegister.ProjectId
CAdministration.jobType mSetRiskRegister.JobTypeId
CAdministration.jobType* mGetRiskRegister.JobTypeId
CAdministration.job mSetRiskRegister.JobId
CAdministration.job* mGetRiskRegister.JobId
realEstatePurchOrders mSetRiskRegister.PurchaseOrderId
realEstatePurchOrders* mGetRiskRegister.PurchaseOrderId
CFinance.masterSalesOrder mSetRiskRegister.MasterSalesOrderId
CFinance.masterSalesOrder* mGetRiskRegister.MasterSalesOrderId
CProperty.allocation mSetRiskRegister.AllocationId
CProperty.allocation* mGetRiskRegister.AllocationId
CCustomer.complaint mSetRiskRegister.ComplaintId
CCustomer.complaint* mGetRiskRegister.ComplaintId
CAdministration.serviceType mSetRiskRegister.ServiceTypeId
CAdministration.serviceType* mGetRiskRegister.ServiceTypeId
CAdministration.itemType mSetRiskRegister.ItemTypeId
CAdministration.itemType* mGetRiskRegister.ItemTypeId
CAdministration.item mSetRiskRegister.ItemId
CAdministration.item* mGetRiskRegister.ItemId
CFactory.materialType mSetRiskRegister.MaterialTypeId
CFactory.materialType* mGetRiskRegister.MaterialTypeId
CFactory.material mSetRiskRegister.MaterialId
CFactory.material* mGetRiskRegister.MaterialId
CFactory.partType mSetRiskRegister.PartTypeId
CFactory.partType* mGetRiskRegister.PartTypeId
CFactory.part mSetRiskRegister.PartId
CFactory.part* mGetRiskRegister.PartId
CFactory.minorsubassemblyType mSetRiskRegister.MinorSubAssemblyTypeId
CFactory.minorsubassemblyType* mGetRiskRegister.MinorSubAssemblyTypeId
CFactory.minorsubassembly mSetRiskRegister.MinorSubAssemblyId
CFactory.minorsubassembly* mGetRiskRegister.MinorSubAssemblyId
CFactory.subassemblyType mSetRiskRegister.SubAssemblyTypeId
CFactory.subassemblyType* mGetRiskRegister.SubAssemblyTypeId
CFactory.subassembly mSetRiskRegister.SubAssemblyId
CFactory.subassembly* mGetRiskRegister.SubAssemblyId
CFactory.majorsubassemblyType mSetRiskRegister.MajorSubAssemblyTypeId
CFactory.majorsubassemblyType* mGetRiskRegister.MajorSubAssemblyTypeId
CFactory.majorsubassembly mSetRiskRegister.MajorSubAssemblyId
CFactory.majorsubassembly* mGetRiskRegister.MajorSubAssemblyId
CFactory.lesserassemblyType mSetRiskRegister.LesserAssemblyTypeId
CFactory.lesserassemblyType* mGetRiskRegister.LesserAssemblyTypeId
CFactory.lesserassembly mSetRiskRegister.LesserAssemblyId
CFactory.lesserassembly* mGetRiskRegister.LesserAssemblyId
CFactory.assemblyType mSetRiskRegister.AssemblyTypeId
CFactory.assemblyType* mGetRiskRegister.AssemblyTypeId
CFactory.assembly mSetRiskRegister.AssemblyId
CFactory.assembly* mGetRiskRegister.AssemblyId
CFactory.greaterassemblyType mSetRiskRegister.GreaterAssemblyTypeId
CFactory.greaterassemblyType* mGetRiskRegister.GreaterAssemblyTypeId
CFactory.greaterassembly mSetRiskRegister.GreaterAssemblyId
CFactory.greaterassembly* mGetRiskRegister.GreaterAssemblyId
CFactory.productType mSetRiskRegister.ProductTypeId
CFactory.productType* mGetRiskRegister.ProductTypeId
CFactory.product mSetRiskRegister.ProductId
CFactory.product* mGetRiskRegister.ProductId
CCustomer.customer mSetRiskRegister.CustomerId
CCustomer.customer* mGetRiskRegister.CustomerId
CCustomer.customerType mSetRiskRegister.CustomerTypeId
CCustomer.customerType* mGetRiskRegister.CustomerTypeId
CSupplier.supplier mSetRiskRegister.SupplierId
CSupplier.supplier* mGetRiskRegister.SupplierId
CSupplier.supplierType mSetRiskRegister.SupplierTypeId
CSupplier.supplierType* mGetRiskRegister.SupplierTypeId
CStakeholder.partner mSetRiskRegister.PartnerId
CStakeholder.partner* mGetRiskRegister.PartnerId
CStakeholder.media mSetRiskRegister.MediaId
CStakeholder.media* mGetRiskRegister.MediaId
CStakeholder.community mSetRiskRegister.CommunityId
CStakeholder.community* mGetRiskRegister.CommunityId
CFinance.bank mSetRiskRegister.BankId
CFinance.bank* mGetRiskRegister.BankId
CProperty.propertyOwner mSetRiskRegister.PropertyOwnerId
CProperty.propertyOwner* mGetRiskRegister.PropertyOwnerId
CCustomer.applicant mSetRiskRegister.ApplicantId
CCustomer.applicant* mGetRiskRegister.ApplicantId
CProperty.tenant mSetRiskRegister.TenancyId
CProperty.tenant* mGetRiskRegister.TenancyId
CAdministration.staff mSetRiskRegister.EmployeeId
CAdministration.staff* mGetRiskRegister.EmployeeId
CSupplier.superannuationFund mSetRiskRegister.SuperFundId
CSupplier.superannuationFund* mGetRiskRegister.SuperFundId
ArrayOf<CSolicitor.solicitor> mSetRiskRegister.SolicitorIds
ArrayOf<CSolicitor.solicitor>* mGetRiskRegister.SolicitorIds
ArrayOf<CStakeholder.agentType> mSetRiskRegister.AgentTypeIds
ArrayOf<CStakeholder.agentType>* mGetRiskRegister.AgentTypeIds
ArrayOf<CStakeholder.agent> mSetRiskRegister.AgentIds
ArrayOf<CStakeholder.agent>* mGetRiskRegister.AgentIds
ArrayOf<CStakeholder.nonGovStakeholder>* mSetRiskRegister.NonGovStakeholderIds
ArrayOf<CStakeholder.nonGovStakeholder>* mGetRiskRegister.NonGovStakeholderIds
ArrayOf<CStakeholder.govStakeholder> mSetRiskRegister.GovStakeholderIds
ArrayOf<CStakeholder.govStakeholder>* mGetRiskRegister.GovStakeholderIds
CFinance.centrelink mSetRiskRegister.CentrelinkId
CFinance.centrelink* mGetRiskRegister.CentrelinkId
CStakeholder.stateLAHAuthority mSetRiskRegister.StateLAHAuthorityId
CStakeholder.stateLAHAuthority* mGetRiskRegister.StateLAHAuthorityId
CStakeholder.statePublicHousingAuthority mSetRiskRegister.StatePublicHousingAuthorityId
CStakeholder.statePublicHousingAuthority* mGetRiskRegister.StatePublicHousingAuthorityId
CRegulator.communityHousingRegulator mSetRiskRegister.CommunityHousingRegulatorId
CRegulator.communityHousingRegulator* mGetRiskRegister.CommunityHousingRegulatorId
CRegulator.aTO mSetRiskRegister.ATOId
CRegulator.aTO* mGetRiskRegister.ATOId
CRegulator.nationalRegulator mSetRiskRegister.NatRegId
CRegulator.nationalRegulator* mGetRiskRegister.NatRegId
CRegulator.nCAT mSetRiskRegister.TribunalId
CRegulator.nCAT* mGetRiskRegister.TribunalId
CCustomer.application mSetRiskRegister.ApplicationId
CCustomer.application* mGetRiskRegister.ApplicationId
CRegulator.stateBasedRegulator mSetRiskRegister.StateBasedRegId
CRegulator.stateBasedRegulator* mGetRiskRegister.StateBasedRegId
itemTrader mSetRiskRegister.ItemTraderId
itemTrader* mGetRiskRegister.ItemTraderId
CProperty.tenancyCaseManagement mSetRiskRegister.TenancyCaseMngmntId
CProperty.tenancyCaseManagement* mGetRiskRegister.TenancyCaseMngmntId
ArrayOf<CAdministration.documents> mSetRiskRegister.DocRefIds
ArrayOf<CAdministration.documents>* mGetRiskRegister.DocRefIds
ArrayOf<CAdministration.images> mSetRiskRegister.ImageRefIds
ArrayOf<CAdministration.images>* mGetRiskRegister.ImageRefIds
const String& mSetRole.RoleId
String* mGetRole.RoleId
const String& mSetRole.RoleTitle
String* mGetRole.RoleTitle
const String& mSetRole.RoleDescription
String* mGetRole.RoleDescription
ArrayOf<CAdministration.staff> mSetRole.EmployeeIds
ArrayOf<CAdministration.staff>* mGetRole.EmployeeIds
CRegister.businessChannelOwner mSetRole.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetRole.BusinessChannelOwnerId
ArrayOf<CAdministration.branch> mSetRole.BranchIds
ArrayOf<CAdministration.branch>* mGetRole.BranchIds
ArrayOf<CAdministration.department> mSetRole.DeptIds
ArrayOf<CAdministration.department>* mGetRole.DeptIds
ArrayOf<CAdministration.subdepartment> mSetRole.SubDeptIds
ArrayOf<CAdministration.subdepartment>* mGetRole.SubDeptIds
ArrayOf<CAdministration.subdepartmentLevel2> mSetRole.SubDeptLevel2Ids
ArrayOf<CAdministration.subdepartmentLevel2>* mGetRole.SubDeptLevel2Ids
ArrayOf<CAdministration.subdepartmentLevel3> mSetRole.SubDeptLevel3Ids
ArrayOf<CAdministration.subdepartmentLevel3>* mGetRole.SubDeptLevel3Ids
ArrayOf<CAdministration.documents> mSetRole.DocRefIds
ArrayOf<CAdministration.documents>* mGetRole.DocRefIds
ArrayOf<CAdministration.images> mSetRole.ImageRefIds
ArrayOf<CAdministration.images>* mGetRole.ImageRefIds
ArrayOf<CAdministration.video> mSetRole.VideoRefIds
ArrayOf<CAdministration.video>* mGetRole.VideoRefIds
const String& mSetStaffRoleJoins.StaffRoleJoinsId
String* mGetStaffRoleJoins.StaffRoleJoinsId
CAdministration.role mSetStaffRoleJoins.RoleId
CAdministration.role* mGetStaffRoleJoins.RoleId
CAdministration.staff mSetStaffRoleJoins.EmployeeId
CAdministration.staff* mGetStaffRoleJoins.EmployeeId
const String& mSetBusinessDirector.BusinessDirectorId
String* mGetBusinessDirector.BusinessDirectorId
const String& mSetBusinessDirector.FirstName
String* mGetBusinessDirector.FirstName
const String& mSetBusinessDirector.LastName
String* mGetBusinessDirector.LastName
const String& mSetBusinessDirector.ResidentialAddress
String* mGetBusinessDirector.ResidentialAddress
const String& mSetBusinessDirector.PostalAddress
String* mGetBusinessDirector.PostalAddress
const String& mSetBusinessDirector.Email
String* mGetBusinessDirector.Email
Int32 mSetBusinessDirector.HomePhone
Int32* mGetBusinessDirector.HomePhone
Int32 mSetBusinessDirector.MobilePhone
Int32* mGetBusinessDirector.MobilePhone
Int32 mSetBusinessDirector.WorkPhone
Int32* mGetBusinessDirector.WorkPhone
ArrayOf<const String&> mSetBusinessDirector.ContactedWithDetails
ArrayOf<String>* mGetBusinessDirector.ContactedWithDetails
CRegister.businessChannelOwner mSetBusinessDirector.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetBusinessDirector.BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetBusinessDirector.DocRefIds
ArrayOf<CAdministration.documents>* mGetBusinessDirector.DocRefIds
ArrayOf<CAdministration.images> mSetBusinessDirector.ImageRefIds
ArrayOf<CAdministration.images>* mGetBusinessDirector.ImageRefIds
const String& mSetStaff.EmployeeId
String* mGetStaff.EmployeeId
const String& mSetStaff.OurBranchId
String* mGetStaff.OurBranchId
const String& mSetStaff.FirstName
String* mGetStaff.FirstName
const String& mSetStaff.LastName
String* mGetStaff.LastName
const String& mSetStaff.ResidentialAddress
String* mGetStaff.ResidentialAddress
const String& mSetStaff.PostalAddress
String* mGetStaff.PostalAddress
const String& mSetStaff.Email
String* mGetStaff.Email
Int32 mSetStaff.HomePhone
Int32* mGetStaff.HomePhone
Int32 mSetStaff.MobilePhone
Int32* mGetStaff.MobilePhone
Int32 mSetStaff.WorkPhone
Int32* mGetStaff.WorkPhone
Int32 mSetStaff.ATOTFN
Int32* mGetStaff.ATOTFN
Boolean mSetStaff.TaxFreeThreshold
Boolean* mGetStaff.TaxFreeThreshold
ArrayOf<const String&> mSetStaff.DocRefIds
ArrayOf<String>* mGetStaff.DocRefIds
ArrayOf<const String&> mSetStaff.ContactedWithDetails
ArrayOf<String>* mGetStaff.ContactedWithDetails
CAdministration.role mSetStaff.StaffImmedSuperRoleId
CAdministration.role* mGetStaff.StaffImmedSuperRoleId
ArrayOf<CAdministration.documents> mSetStaff.PerformanceAgreementDocRefs
ArrayOf<CAdministration.documents>* mGetStaff.PerformanceAgreementDocRefs
ArrayOf<CAdministration.role> mSetStaff.RoleIds
ArrayOf<CAdministration.role>* mGetStaff.RoleIds
ArrayOf<CAdministration.images> mSetStaff.ImageRefIds
ArrayOf<CAdministration.images>* mGetStaff.ImageRefIds
CRegister.businessChannelOwner mSetStaff.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStaff.BusinessChannelOwnerId
const String& mSetServicePurchaseRequest.ServicePurchRequestId
String* mGetServicePurchaseRequest.ServicePurchRequestId
const String& mSetServicePurchaseRequest.MRQIdIfRentalProperty
String* mGetServicePurchaseRequest.MRQIdIfRentalProperty
Boolean mSetServicePurchaseRequest.DamageCausedByCustomerTenantOthers
Boolean* mGetServicePurchaseRequest.DamageCausedByCustomerTenantOthers
Boolean mSetServicePurchaseRequest.OwnerResponsible
Boolean* mGetServicePurchaseRequest.OwnerResponsible
ArrayOf<const String&> mSetServicePurchaseRequest.SummaryDescriptionOfProblemItemised
ArrayOf<String>* mGetServicePurchaseRequest.SummaryDescriptionOfProblemItemised
ArrayOf<const String&> mSetServicePurchaseRequest.JobTypeSequence
ArrayOf<String>* mGetServicePurchaseRequest.JobTypeSequence
ArrayOf<const String&> mSetServicePurchaseRequest.QuoteIdsIn
ArrayOf<String>* mGetServicePurchaseRequest.QuoteIdsIn
ArrayOf<Double> mSetServicePurchaseRequest.MostAppropriateQuotesReceived
ArrayOf<Double>* mGetServicePurchaseRequest.MostAppropriateQuotesReceived
const String& mSetServicePurchaseRequest.QuotesFinalised
String* mGetServicePurchaseRequest.QuotesFinalised
ArrayOf<const String&> mSetServicePurchaseRequest.RequestsToLandlordDocRefs
ArrayOf<String>* mGetServicePurchaseRequest.RequestsToLandlordDocRefs
ArrayOf<const String&> mSetServicePurchaseRequest.RequestsSentDates
ArrayOf<String>* mGetServicePurchaseRequest.RequestsSentDates
ArrayOf<const String&> mSetServicePurchaseRequest.JobTypeSequenceApproved
ArrayOf<String>* mGetServicePurchaseRequest.JobTypeSequenceApproved
ArrayOf<const String&> mSetServicePurchaseRequest.TribunalIds
ArrayOf<String>* mGetServicePurchaseRequest.TribunalIds
ArrayOf<const String&> mSetServicePurchaseRequest.JobIds
ArrayOf<String>* mGetServicePurchaseRequest.JobIds
ArrayOf<const String&> mSetServicePurchaseRequest.PurchaseOrderIdSequence
ArrayOf<String>* mGetServicePurchaseRequest.PurchaseOrderIdSequence
ArrayOf<const String&> mSetServicePurchaseRequest.PurchaseOrderSupplierIdSequence
ArrayOf<String>* mGetServicePurchaseRequest.PurchaseOrderSupplierIdSequence
const String& mSetServicePurchaseRequest.ExpectedCompletionDate
String* mGetServicePurchaseRequest.ExpectedCompletionDate
ArrayOf<Boolean> mSetServicePurchaseRequest.WorkCheckedPassed
ArrayOf<Boolean>* mGetServicePurchaseRequest.WorkCheckedPassed
Double mSetServicePurchaseRequest.TotalMaintPurchOrderAmount
Double* mGetServicePurchaseRequest.TotalMaintPurchOrderAmount
ArrayOf<Int32> mSetServicePurchaseRequest.MasLedgeFinTxNumsReturned
ArrayOf<Int32>* mGetServicePurchaseRequest.MasLedgeFinTxNumsReturned
CRegister.businessChannelOwner mSetServicePurchaseRequest.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetServicePurchaseRequest.BusinessChannelOwnerId
CProperty.property mSetServicePurchaseRequest.PropertyId
CProperty.property* mGetServicePurchaseRequest.PropertyId
CAdministration.branch mSetServicePurchaseRequest.BranchId
CAdministration.branch* mGetServicePurchaseRequest.BranchId
CAdministration.department mSetServicePurchaseRequest.DeptId
CAdministration.department* mGetServicePurchaseRequest.DeptId
ArrayOf<CSupplier.supplier> mSetServicePurchaseRequest.SupplierIds
ArrayOf<CSupplier.supplier>* mGetServicePurchaseRequest.SupplierIds
ArrayOf<CAdministration.itemType> mSetServicePurchaseRequest.ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetServicePurchaseRequest.ItemTypeIds
ArrayOf<CAdministration.jobType> mSetServicePurchaseRequest.JobTypeIds
ArrayOf<CAdministration.jobType>* mGetServicePurchaseRequest.JobTypeIds
ArrayOf<CAdministration.serviceType> mSetServicePurchaseRequest.ServiceTypeIds
ArrayOf<CAdministration.serviceType>* mGetServicePurchaseRequest.ServiceTypeIds
ArrayOf<CAdministration.staff> mSetServicePurchaseRequest.EmployeesRequestingIds
ArrayOf<CAdministration.staff>* mGetServicePurchaseRequest.EmployeesRequestingIds
ArrayOf<CAdministration.documents> mSetServicePurchaseRequest.DocRefIds
ArrayOf<CAdministration.documents>* mGetServicePurchaseRequest.DocRefIds
ArrayOf<CAdministration.images> mSetServicePurchaseRequest.ImageRefIds
ArrayOf<CAdministration.images>* mGetServicePurchaseRequest.ImageRefIds
ArrayOf<CAdministration.audio> mSetServicePurchaseRequest.AudioRefIds
ArrayOf<CAdministration.audio>* mGetServicePurchaseRequest.AudioRefIds
const String& mSetTimesheet.TimesheetId
String* mGetTimesheet.TimesheetId
ArrayOf<const String&> mSetTimesheet.RosteredStarts
ArrayOf<String>* mGetTimesheet.RosteredStarts
ArrayOf<const String&> mSetTimesheet.RosteredFinishes
ArrayOf<String>* mGetTimesheet.RosteredFinishes
ArrayOf<const String&> mSetTimesheet.ActualStarts
ArrayOf<String>* mGetTimesheet.ActualStarts
ArrayOf<const String&> mSetTimesheet.ActualFinishes
ArrayOf<String>* mGetTimesheet.ActualFinishes
const String& mSetTimesheet.Submitted
String* mGetTimesheet.Submitted
const String& mSetTimesheet.Checked
String* mGetTimesheet.Checked
Boolean mSetTimesheet.Passed
Boolean* mGetTimesheet.Passed
CRegister.businessChannelOwner mSetTimesheet.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTimesheet.BusinessChannelOwnerId
ArrayOf<CAdministration.staff> mSetTimesheet.EmployeeIds
ArrayOf<CAdministration.staff>* mGetTimesheet.EmployeeIds
ArrayOf<CAdministration.documents> mSetTimesheet.DocRefIds
ArrayOf<CAdministration.documents>* mGetTimesheet.DocRefIds
CAdministration.branch mSetTimesheet.BranchId
CAdministration.branch* mGetTimesheet.BranchId
const String& mSetWaitQueue.WaitQueueId
String* mGetWaitQueue.WaitQueueId
const String& mSetWaitQueue.QueueName
String* mGetWaitQueue.QueueName
const String& mSetWaitQueue.QueueCode
String* mGetWaitQueue.QueueCode
const String& mSetWaitQueue.QueueDescription
String* mGetWaitQueue.QueueDescription
const String& mSetWaitQueue.Notes
String* mGetWaitQueue.Notes
CHelper.ausState mSetWaitQueue.AusState
CHelper.ausState* mGetWaitQueue.AusState
CRegister.businessChannelOwner mSetWaitQueue.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetWaitQueue.BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetWaitQueue.DocRefIds
ArrayOf<CAdministration.documents>* mGetWaitQueue.DocRefIds
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

