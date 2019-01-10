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


class CCustomer
    : public Object
    , public ICH
    , public IComparable
{
public:
    CAR_INTERFACE_DECL()    // The class which implements a CAR interface requires macros CAR_INTERFACE_DECL/CAR_INTERFACE_IMPL.

    CCustomer();               // If a member needs to be initialized, the constructor must be explicitly declared 

    virtual ~CCustomer();

    CARAPI constructor();   // CAR constructor for subclass inheritance.

     // IComparable interface function
    //
    CARAPI CompareTo(
        /* [in] */ IInterface* another,
        /* [out] */ Int32* result);

    // ICH interface function
    //
  

   CARAPI SetCustomer_CustomerId(
     /* [in] */ const String& CCustomer.customer.customerId);

    CARAPI GetCustomer_CustomerId(
     /* [out] */ String* CCustomer.customer.customerId);


   CARAPI SetCustomer_LinkedToThisBusinessChannelOwnerId(
     /* [in] */ const String& CCustomer.customer.linkedToThisBusinessChannelOwnerId);

    CARAPI GetCustomer_LinkedToThisBusinessChannelOwnerId(
     /* [out] */ String* CCustomer.customer.linkedToThisBusinessChannelOwnerId);


   CARAPI SetCustomer_Relationship(
     /* [in] */ CHelper.relationship CCustomer.customer.relationship);

    CARAPI GetCustomer_Relationship(
     /* [out] */ CHelper.relationship* CCustomer.customer.relationship);


   CARAPI SetCustomer_CustomerTypesIds(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.customerTypesIds);

    CARAPI GetCustomer_CustomerTypesIds(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.customerTypesIds);


   CARAPI SetCustomer_OurBranchId(
     /* [in] */ const String& CCustomer.customer.ourBranchId);

    CARAPI GetCustomer_OurBranchId(
     /* [out] */ String* CCustomer.customer.ourBranchId);


   CARAPI SetCustomer_FirstName(
     /* [in] */ const String& CCustomer.customer.firstName);

    CARAPI GetCustomer_FirstName(
     /* [out] */ String* CCustomer.customer.firstName);


   CARAPI SetCustomer_LastName(
     /* [in] */ const String& CCustomer.customer.lastName);

    CARAPI GetCustomer_LastName(
     /* [out] */ String* CCustomer.customer.lastName);


   CARAPI SetCustomer_ResidentialAddress(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.residentialAddress);

    CARAPI GetCustomer_ResidentialAddress(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.residentialAddress);


   CARAPI SetCustomer_PostalAddress(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.postalAddress);

    CARAPI GetCustomer_PostalAddress(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.postalAddress);


   CARAPI SetCustomer_DeliveryAddress(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.deliveryAddress);

    CARAPI GetCustomer_DeliveryAddress(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.deliveryAddress);


   CARAPI SetCustomer_BillingAddress(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.billingAddress);

    CARAPI GetCustomer_BillingAddress(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.billingAddress);


   CARAPI SetCustomer_Email(
     /* [in] */ const String& CCustomer.customer.email);

    CARAPI GetCustomer_Email(
     /* [out] */ String* CCustomer.customer.email);


   CARAPI SetCustomer_HomePhone(
     /* [in] */ Int32 CCustomer.customer.homePhone);

    CARAPI GetCustomer_HomePhone(
     /* [out] */ Int32* CCustomer.customer.homePhone);


   CARAPI SetCustomer_MobilePhone(
     /* [in] */ Int32 CCustomer.customer.mobilePhone);

    CARAPI GetCustomer_MobilePhone(
     /* [out] */ Int32* CCustomer.customer.mobilePhone);


   CARAPI SetCustomer_WorkPhone(
     /* [in] */ Int32 CCustomer.customer.workPhone);

    CARAPI GetCustomer_WorkPhone(
     /* [out] */ Int32* CCustomer.customer.workPhone);


   CARAPI SetCustomer_AmenitiesRequired(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.amenitiesRequired);

    CARAPI GetCustomer_AmenitiesRequired(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.amenitiesRequired);


   CARAPI SetCustomer_StreetsDesired(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.streetsDesired);

    CARAPI GetCustomer_StreetsDesired(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.streetsDesired);


   CARAPI SetCustomer_PostcodesDesired(
     /* [in] */ ArrayOf<Int32> CCustomer.customer.postcodesDesired);

    CARAPI GetCustomer_PostcodesDesired(
     /* [out, callee] */ ArrayOf<Int32>* CCustomer.customer.postcodesDesired);


   CARAPI SetCustomer_BedroomsRequired(
     /* [in] */ Int32 CCustomer.customer.bedroomsRequired);

    CARAPI GetCustomer_BedroomsRequired(
     /* [out] */ Int32* CCustomer.customer.bedroomsRequired);


   CARAPI SetCustomer_MaxPriceOffering(
     /* [in] */ Double CCustomer.customer.maxPriceOffering);

    CARAPI GetCustomer_MaxPriceOffering(
     /* [out] */ Double* CCustomer.customer.maxPriceOffering);


   CARAPI SetCustomer_MinPriceOffering(
     /* [in] */ Double CCustomer.customer.minPriceOffering);

    CARAPI GetCustomer_MinPriceOffering(
     /* [out] */ Double* CCustomer.customer.minPriceOffering);


   CARAPI SetCustomer_MaxPriceAsking(
     /* [in] */ ArrayOf<Double> CCustomer.customer.maxPriceAsking);

    CARAPI GetCustomer_MaxPriceAsking(
     /* [out, callee] */ ArrayOf<Double>* CCustomer.customer.maxPriceAsking);


   CARAPI SetCustomer_MinPriceAsking(
     /* [in] */ ArrayOf<Double> CCustomer.customer.minPriceAsking);

    CARAPI GetCustomer_MinPriceAsking(
     /* [out, callee] */ ArrayOf<Double>* CCustomer.customer.minPriceAsking);


   CARAPI SetCustomer_CentrelinkCRN(
     /* [in] */ const String& CCustomer.customer.centrelinkCRN);

    CARAPI GetCustomer_CentrelinkCRN(
     /* [out] */ String* CCustomer.customer.centrelinkCRN);


   CARAPI SetCustomer_ATOTFN(
     /* [in] */ Int32 CCustomer.customer.aTOTFN);

    CARAPI GetCustomer_ATOTFN(
     /* [out] */ Int32* CCustomer.customer.aTOTFN);


   CARAPI SetCustomer_ABN(
     /* [in] */ const String& CCustomer.customer.aBN);

    CARAPI GetCustomer_ABN(
     /* [out] */ String* CCustomer.customer.aBN);


   CARAPI SetCustomer_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.contactedWithDetails);

    CARAPI GetCustomer_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.contactedWithDetails);


   CARAPI SetCustomer_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.customer.businessChannelOwnerId);

    CARAPI GetCustomer_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.customer.businessChannelOwnerId);


   CARAPI SetCustomer_PropertyOwnerIds(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CCustomer.customer.propertyOwnerIds);

    CARAPI GetCustomer_PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CCustomer.customer.propertyOwnerIds);


   CARAPI SetCustomer_CustPropJoinIds(
     /* [in] */ ArrayOf<CProperty.customerpropertyJoin> CCustomer.customer.custPropJoinIds);

    CARAPI GetCustomer_CustPropJoinIds(
     /* [out, callee] */ ArrayOf<CProperty.customerpropertyJoin>* CCustomer.customer.custPropJoinIds);


   CARAPI SetCustomer_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.customer.docRefIds);

    CARAPI GetCustomer_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.customer.docRefIds);


   CARAPI SetCustomer_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.customer.imageRefIds);

    CARAPI GetCustomer_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.customer.imageRefIds);


   CARAPI SetCustomer_TenancyId(
     /* [in] */ CProperty.tenant CCustomer.customer.tenancyId);

    CARAPI GetCustomer_TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.customer.tenancyId);


   CARAPI SetCustomer_ApplicantId(
     /* [in] */ CCustomer.applicant CCustomer.customer.applicantId);

    CARAPI GetCustomer_ApplicantId(
     /* [out] */ CCustomer.applicant* CCustomer.customer.applicantId);


   CARAPI SetCustomerType_CustomerTypeId(
     /* [in] */ const String& CCustomer.customerType.customerTypeId);

    CARAPI GetCustomerType_CustomerTypeId(
     /* [out] */ String* CCustomer.customerType.customerTypeId);


   CARAPI SetCustomerType_Description(
     /* [in] */ const String& CCustomer.customerType.description);

    CARAPI GetCustomerType_Description(
     /* [out] */ String* CCustomer.customerType.description);


   CARAPI SetCustomerType_CustTypeName(
     /* [in] */ const String& CCustomer.customerType.custTypeName);

    CARAPI GetCustomerType_CustTypeName(
     /* [out] */ String* CCustomer.customerType.custTypeName);


   CARAPI SetCustomerType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.customerType.businessChannelOwnerId);

    CARAPI GetCustomerType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.customerType.businessChannelOwnerId);


   CARAPI SetCustomerType_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.customerType.docRefs);

    CARAPI GetCustomerType_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.customerType.docRefs);


   CARAPI SetCustomerType_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.customerType.imageRefs);

    CARAPI GetCustomerType_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.customerType.imageRefs);


   CARAPI SetCustomerType_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CCustomer.customerType.audioRefIds);

    CARAPI GetCustomerType_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CCustomer.customerType.audioRefIds);


   CARAPI SetCustomerType_VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CCustomer.customerType.videoRefs);

    CARAPI GetCustomerType_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CCustomer.customerType.videoRefs);


   CARAPI SetCustomerCustomerJoin_CustCustomerJoinId(
     /* [in] */ const String& CCustomer.customerCustomerJoin.custCustomerJoinId);

    CARAPI GetCustomerCustomerJoin_CustCustomerJoinId(
     /* [out] */ String* CCustomer.customerCustomerJoin.custCustomerJoinId);


   CARAPI SetCustomerCustomerJoin_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CCustomer.customerCustomerJoin.customerIds);

    CARAPI GetCustomerCustomerJoin_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CCustomer.customerCustomerJoin.customerIds);


   CARAPI SetCustomerCustomerJoin_PercentageShares(
     /* [in] */ ArrayOf<Double> CCustomer.customerCustomerJoin.percentageShares);

    CARAPI GetCustomerCustomerJoin_PercentageShares(
     /* [out, callee] */ ArrayOf<Double>* CCustomer.customerCustomerJoin.percentageShares);


   CARAPI SetCustomerCustomerJoin_PropertyId(
     /* [in] */ ArrayOf<CProperty.property> CCustomer.customerCustomerJoin.propertyIds);

    CARAPI GetCustomerCustomerJoin_PropertyId(
     /* [out, callee] */ ArrayOf<CProperty.property>* CCustomer.customerCustomerJoin.propertyIds);


   CARAPI SetCustomerCustomerJoin_ProjectId(
     /* [in] */ ArrayOf<CProperty.project> CCustomer.customerCustomerJoin.projectIds);

    CARAPI GetCustomerCustomerJoin_ProjectId(
     /* [out, callee] */ ArrayOf<CProperty.project>* CCustomer.customerCustomerJoin.projectIds);


   CARAPI SetCustomerCustomerJoin_ProgramId(
     /* [in] */ ArrayOf<CProperty.program> CCustomer.customerCustomerJoin.programIds);

    CARAPI GetCustomerCustomerJoin_ProgramId(
     /* [out, callee] */ ArrayOf<CProperty.program>* CCustomer.customerCustomerJoin.programIds);


   CARAPI SetCustomerCustomerJoin_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.customerCustomerJoin.businessChannelOwnerId);

    CARAPI GetCustomerCustomerJoin_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.customerCustomerJoin.businessChannelOwnerId);


   CARAPI SetApplicant_ApplicantId(
     /* [in] */ const String& CCustomer.applicant.applicantId);

    CARAPI GetApplicant_ApplicantId(
     /* [out] */ String* CCustomer.applicant.applicantId);


   CARAPI SetApplicant_PostcodesAppliedFor(
     /* [in] */ ArrayOf<Int32> CCustomer.applicant.postcodesAppliedFor);

    CARAPI GetApplicant_PostcodesAppliedFor(
     /* [out, callee] */ ArrayOf<Int32>* CCustomer.applicant.postcodesAppliedFor);


   CARAPI SetApplicant_BedroomsSought(
     /* [in] */ Int32 CCustomer.applicant.bedroomsSought);

    CARAPI GetApplicant_BedroomsSought(
     /* [out] */ Int32* CCustomer.applicant.bedroomsSought);


   CARAPI SetApplicant_AmenitiesRequested(
     /* [in] */ ArrayOf<const String&> CCustomer.applicant.amenitiesRequested);

    CARAPI GetApplicant_AmenitiesRequested(
     /* [out, callee] */ ArrayOf<String>* CCustomer.applicant.amenitiesRequested);


   CARAPI SetApplicant_FirstName(
     /* [in] */ const String& CCustomer.applicant.firstName);

    CARAPI GetApplicant_FirstName(
     /* [out] */ String* CCustomer.applicant.firstName);


   CARAPI SetApplicant_LastName(
     /* [in] */ const String& CCustomer.applicant.lastName);

    CARAPI GetApplicant_LastName(
     /* [out] */ String* CCustomer.applicant.lastName);


   CARAPI SetApplicant_ResidentialAddress(
     /* [in] */ const String& CCustomer.applicant.residentialAddress);

    CARAPI GetApplicant_ResidentialAddress(
     /* [out] */ String* CCustomer.applicant.residentialAddress);


   CARAPI SetApplicant_PostalAddress(
     /* [in] */ const String& CCustomer.applicant.postalAddress);

    CARAPI GetApplicant_PostalAddress(
     /* [out] */ String* CCustomer.applicant.postalAddress);


   CARAPI SetApplicant_Email(
     /* [in] */ const String& CCustomer.applicant.email);

    CARAPI GetApplicant_Email(
     /* [out] */ String* CCustomer.applicant.email);


   CARAPI SetApplicant_HomePhone(
     /* [in] */ Int32 CCustomer.applicant.homePhone);

    CARAPI GetApplicant_HomePhone(
     /* [out] */ Int32* CCustomer.applicant.homePhone);


   CARAPI SetApplicant_MobilePhone(
     /* [in] */ Int32 CCustomer.applicant.mobilePhone);

    CARAPI GetApplicant_MobilePhone(
     /* [out] */ Int32* CCustomer.applicant.mobilePhone);


   CARAPI SetApplicant_WorkPhone(
     /* [in] */ Int32 CCustomer.applicant.workPhone);

    CARAPI GetApplicant_WorkPhone(
     /* [out] */ Int32* CCustomer.applicant.workPhone);


   CARAPI SetApplicant_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CCustomer.applicant.contactedWithDetails);

    CARAPI GetApplicant_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CCustomer.applicant.contactedWithDetails);


   CARAPI SetApplicant_ApplicationId(
     /* [in] */ CCustomer.application CCustomer.applicant.ApplicationId);

    CARAPI GetApplicant_ApplicationId(
     /* [out] */ CCustomer.application* CCustomer.applicant.ApplicationId);


   CARAPI SetApplicant_BranchId(
     /* [in] */ CAdministration.branch CCustomer.applicant.branchId);

    CARAPI GetApplicant_BranchId(
     /* [out] */ CAdministration.branch* CCustomer.applicant.branchId);


   CARAPI SetApplicant_CustomerId(
     /* [in] */ CCustomer.customer CCustomer.applicant.customerId);

    CARAPI GetApplicant_CustomerId(
     /* [out] */ CCustomer.customer* CCustomer.applicant.customerId);


   CARAPI SetApplicant_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CCustomer.applicant.propertyIds);

    CARAPI GetApplicant_PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CCustomer.applicant.propertyIds);


   CARAPI SetApplicant_TenancyId(
     /* [in] */ CProperty.tenant CCustomer.applicant.tenancyId);

    CARAPI GetApplicant_TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.applicant.tenancyId);


   CARAPI SetApplicant_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.applicant.docRefIds);

    CARAPI GetApplicant_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.applicant.docRefIds);


   CARAPI SetApplicant_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.applicant.imageRefIds);

    CARAPI GetApplicant_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.applicant.imageRefIds);


   CARAPI SetApplicant_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.applicant.businessChannelOwnerId);

    CARAPI GetApplicant_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.applicant.businessChannelOwnerId);


   CARAPI SetApplication_ApplicationId(
     /* [in] */ const String& CCustomer.application.applicationId);

    CARAPI GetApplication_ApplicationId(
     /* [out] */ String* CCustomer.application.applicationId);


   CARAPI SetApplication_SocialHousingApplication(
     /* [in] */ Boolean CCustomer.application.socialHousingApplication);

    CARAPI GetApplication_SocialHousingApplication(
     /* [out] */ Boolean* CCustomer.application.socialHousingApplication);


   CARAPI SetApplication_NDIS(
     /* [in] */ Boolean CCustomer.application.nDIS);

    CARAPI GetApplication_NDIS(
     /* [out] */ Boolean* CCustomer.application.nDIS);


   CARAPI SetApplication_AffordableHousingApplication(
     /* [in] */ Boolean CCustomer.application.affordableHousingApplication);

    CARAPI GetApplication_AffordableHousingApplication(
     /* [out] */ Boolean* CCustomer.application.affordableHousingApplication);


   CARAPI SetApplication_SharedEquityHousingApplication(
     /* [in] */ Boolean CCustomer.application.sharedEquityHousingApplication);

    CARAPI GetApplication_SharedEquityHousingApplication(
     /* [out] */ Boolean* CCustomer.application.sharedEquityHousingApplication);


   CARAPI SetApplication_RentToBuyApplication(
     /* [in] */ Boolean CCustomer.application.rentToBuyApplication);

    CARAPI GetApplication_RentToBuyApplication(
     /* [out] */ Boolean* CCustomer.application.rentToBuyApplication);


   CARAPI SetApplication_MarketRateHousingApplication(
     /* [in] */ Boolean CCustomer.application.marketRateHousingApplication);

    CARAPI GetApplication_MarketRateHousingApplication(
     /* [out] */ Boolean* CCustomer.application.marketRateHousingApplication);


   CARAPI SetApplication_HeadApplicantFirstName(
     /* [in] */ const String& CCustomer.application.headApplicantFirstName);

    CARAPI GetApplication_HeadApplicantFirstName(
     /* [out] */ String* CCustomer.application.headApplicantFirstName);


   CARAPI SetApplication_HeadApplicantLastName(
     /* [in] */ const String& CCustomer.application.headApplicantLastName);

    CARAPI GetApplication_HeadApplicantLastName(
     /* [out] */ String* CCustomer.application.headApplicantLastName);


   CARAPI SetApplication_HeadApplicantAddressLine1(
     /* [in] */ const String& CCustomer.application.headApplicantAddressLine1);

    CARAPI GetApplication_HeadApplicantAddressLine1(
     /* [out] */ String* CCustomer.application.headApplicantAddressLine1);


   CARAPI SetApplication_HeadApplicantAddressLine2(
     /* [in] */ const String& CCustomer.application.headApplicantAddressLine2);

    CARAPI GetApplication_HeadApplicantAddressLine2(
     /* [out] */ String* CCustomer.application.headApplicantAddressLine2);


   CARAPI SetApplication_HeadApplicantSuburb(
     /* [in] */ const String& CCustomer.application.headApplicantSuburb);

    CARAPI GetApplication_HeadApplicantSuburb(
     /* [out] */ String* CCustomer.application.headApplicantSuburb);


   CARAPI SetApplication_HeadApplicantPostcode(
     /* [in] */ const String& CCustomer.application.headApplicantPostcode);

    CARAPI GetApplication_HeadApplicantPostcode(
     /* [out] */ String* CCustomer.application.headApplicantPostcode);


   CARAPI SetApplication_HeadApplicantHomePhone(
     /* [in] */ const String& CCustomer.application.headApplicantHomePhone);

    CARAPI GetApplication_HeadApplicantHomePhone(
     /* [out] */ String* CCustomer.application.headApplicantHomePhone);


   CARAPI SetApplication_HeadApplicantWorkPhone(
     /* [in] */ const String& CCustomer.application.headApplicantWorkPhone);

    CARAPI GetApplication_HeadApplicantWorkPhone(
     /* [out] */ String* CCustomer.application.headApplicantWorkPhone);


   CARAPI SetApplication_HeadApplicantMobilePhone(
     /* [in] */ const String& CCustomer.application.headApplicantMobilePhone);

    CARAPI GetApplication_HeadApplicantMobilePhone(
     /* [out] */ String* CCustomer.application.headApplicantMobilePhone);


   CARAPI SetApplication_HeadApplicantEmail(
     /* [in] */ const String& CCustomer.application.headApplicantEmail);

    CARAPI GetApplication_HeadApplicantEmail(
     /* [out] */ String* CCustomer.application.headApplicantEmail);


   CARAPI SetApplication_HeadApplicantDOB(
     /* [in] */ const String& CCustomer.application.headApplicantDOB);

    CARAPI GetApplication_HeadApplicantDOB(
     /* [out] */ String* CCustomer.application.headApplicantDOB);


   CARAPI SetApplication_StreetsSought(
     /* [in] */ ArrayOf<const String&> CCustomer.application.streetsSought);

    CARAPI GetApplication_StreetsSought(
     /* [out, callee] */ ArrayOf<String>* CCustomer.application.streetsSought);


   CARAPI SetApplication_PostcodesSought(
     /* [in] */ ArrayOf<Int32> CCustomer.application.postcodesSought);

    CARAPI GetApplication_PostcodesSought(
     /* [out, callee] */ ArrayOf<Int32>* CCustomer.application.postcodesSought);


   CARAPI SetApplication_BedroomRangeRequired(
     /* [in] */ ArrayOf<Int32> CCustomer.application.bedroomRangeRequired);

    CARAPI GetApplication_BedroomRangeRequired(
     /* [out, callee] */ ArrayOf<Int32>* CCustomer.application.bedroomRangeRequired);


   CARAPI SetApplication_AmenitiesRequested(
     /* [in] */ ArrayOf<const String&> CCustomer.application.amenitiesRequested);

    CARAPI GetApplication_AmenitiesRequested(
     /* [out, callee] */ ArrayOf<String>* CCustomer.application.amenitiesRequested);


   CARAPI SetApplication_RangeForRent(
     /* [in] */ ArrayOf<Double> CCustomer.application.rangeForRent);

    CARAPI GetApplication_RangeForRent(
     /* [out, callee] */ ArrayOf<Double>* CCustomer.application.rangeForRent);


   CARAPI SetApplication_Interval(
     /* [in] */ CHelper.billingInterval CCustomer.application.interval);

    CARAPI GetApplication_Interval(
     /* [out] */ CHelper.billingInterval* CCustomer.application.interval);


   CARAPI SetApplication_SecondaryApplicantFirstNames(
     /* [in] */ ArrayOf<const String&> CCustomer.application.secondaryApplicantFirstNames);

    CARAPI GetApplication_SecondaryApplicantFirstNames(
     /* [out, callee] */ ArrayOf<String>* CCustomer.application.secondaryApplicantFirstNames);


   CARAPI SetApplication_SecondaryApplicantLastNames(
     /* [in] */ ArrayOf<const String&> CCustomer.application.secondaryApplicantLastNames);

    CARAPI GetApplication_SecondaryApplicantLastNames(
     /* [out, callee] */ ArrayOf<String>* CCustomer.application.secondaryApplicantLastNames);


   CARAPI SetApplication_PartnerIds(
     /* [in] */ ArrayOf<const String&> CCustomer.application.partnerIds);

    CARAPI GetApplication_PartnerIds(
     /* [out, callee] */ ArrayOf<String>* CCustomer.application.partnerIds);


   CARAPI SetApplication_ApplicantIds(
     /* [in] */ ArrayOf<CCustomer.applicant> CCustomer.application.applicantIds);

    CARAPI GetApplication_ApplicantIds(
     /* [out, callee] */ ArrayOf<CCustomer.applicant>* CCustomer.application.applicantIds);


   CARAPI SetApplication_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CCustomer.application.customerIds);

    CARAPI GetApplication_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CCustomer.application.customerIds);


   CARAPI SetApplication_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CCustomer.application.propertyIds);

    CARAPI GetApplication_PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CCustomer.application.propertyIds);


   CARAPI SetApplication_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.application.businessChannelOwnerId);

    CARAPI GetApplication_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.application.businessChannelOwnerId);


   CARAPI SetApplication_BranchId(
     /* [in] */ CAdministration.branch CCustomer.application.branchId);

    CARAPI GetApplication_BranchId(
     /* [out] */ CAdministration.branch* CCustomer.application.branchId);


   CARAPI SetApplication_DeptId(
     /* [in] */ CAdministration.department CCustomer.application.deptId);

    CARAPI GetApplication_DeptId(
     /* [out] */ CAdministration.department* CCustomer.application.deptId);


   CARAPI SetApplication_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.application.docRefs);

    CARAPI GetApplication_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.application.docRefs);


   CARAPI SetApplication_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.application.imageRefs);

    CARAPI GetApplication_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.application.imageRefs);


   CARAPI SetApplication_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CCustomer.application.audioRefIds);

    CARAPI GetApplication_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CCustomer.application.audioRefIds);


   CARAPI SetStudentAccommodationBookings_BookingId(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.bookingId);

    CARAPI GetStudentAccommodationBookings_BookingId(
     /* [out] */ String* CCustomer.studentAccommodationBookings.bookingId);


   CARAPI SetStudentAccommodationBookings_PropertyAddressString(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.propertyAddressString);

    CARAPI GetStudentAccommodationBookings_PropertyAddressString(
     /* [out] */ String* CCustomer.studentAccommodationBookings.propertyAddressString);


   CARAPI SetStudentAccommodationBookings_UnitNumber(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.unitNumber);

    CARAPI GetStudentAccommodationBookings_UnitNumber(
     /* [out] */ String* CCustomer.studentAccommodationBookings.unitNumber);


   CARAPI SetStudentAccommodationBookings_PreInspected(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.preInspected);

    CARAPI GetStudentAccommodationBookings_PreInspected(
     /* [out] */ String* CCustomer.studentAccommodationBookings.preInspected);


   CARAPI SetStudentAccommodationBookings_DateLeaseStarts(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.dateLeaseStarts);

    CARAPI GetStudentAccommodationBookings_DateLeaseStarts(
     /* [out] */ String* CCustomer.studentAccommodationBookings.dateLeaseStarts);


   CARAPI SetStudentAccommodationBookings_MidTermInspections(
     /* [in] */ ArrayOf<const String&> CCustomer.studentAccommodationBookings.midTermInspections);

    CARAPI GetStudentAccommodationBookings_MidTermInspections(
     /* [out, callee] */ ArrayOf<String>* CCustomer.studentAccommodationBookings.midTermInspections);


   CARAPI SetStudentAccommodationBookings_DateLeaseEnds(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.dateLeaseEnds);

    CARAPI GetStudentAccommodationBookings_DateLeaseEnds(
     /* [out] */ String* CCustomer.studentAccommodationBookings.dateLeaseEnds);


   CARAPI SetStudentAccommodationBookings_PostInspected(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.postInspected);

    CARAPI GetStudentAccommodationBookings_PostInspected(
     /* [out] */ String* CCustomer.studentAccommodationBookings.postInspected);


   CARAPI SetStudentAccommodationBookings_PaymentInterval(
     /* [in] */ CHelper.billingInterval CCustomer.studentAccommodationBookings.billingInterval);

    CARAPI GetStudentAccommodationBookings_PaymentInterval(
     /* [out] */ CHelper.billingInterval* CCustomer.studentAccommodationBookings.billingInterval);


   CARAPI SetStudentAccommodationBookings_RentalAmountAgreed(
     /* [in] */ Double CCustomer.studentAccommodationBookings.rentalAmountAgreed);

    CARAPI GetStudentAccommodationBookings_RentalAmountAgreed(
     /* [out] */ Double* CCustomer.studentAccommodationBookings.rentalAmountAgreed);


   CARAPI SetStudentAccommodationBookings_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.studentAccommodationBookings.businessChannelOwnerId);

    CARAPI GetStudentAccommodationBookings_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.studentAccommodationBookings.businessChannelOwnerId);


   CARAPI SetStudentAccommodationBookings_BranchId(
     /* [in] */ CAdministration.branch CCustomer.studentAccommodationBookings.branchId);

    CARAPI GetStudentAccommodationBookings_BranchId(
     /* [out] */ CAdministration.branch* CCustomer.studentAccommodationBookings.branchId);


   CARAPI SetStudentAccommodationBookings_DeptId(
     /* [in] */ CAdministration.department CCustomer.studentAccommodationBookings.deptId);

    CARAPI GetStudentAccommodationBookings_DeptId(
     /* [out] */ CAdministration.department* CCustomer.studentAccommodationBookings.deptId);


   CARAPI SetStudentAccommodationBookings_PropertyId(
     /* [in] */ CProperty.property CCustomer.studentAccommodationBookings.propertyId);

    CARAPI GetStudentAccommodationBookings_PropertyId(
     /* [out] */ CProperty.property* CCustomer.studentAccommodationBookings.propertyId);


   CARAPI SetStudentAccommodationBookings_ApplicationId(
     /* [in] */ CCustomer.application CCustomer.studentAccommodationBookings.applicationId);

    CARAPI GetStudentAccommodationBookings_ApplicationId(
     /* [out] */ CCustomer.application* CCustomer.studentAccommodationBookings.applicationId);


   CARAPI SetStudentAccommodationBookings_ApplicantId(
     /* [in] */ CCustomer.applicant CCustomer.studentAccommodationBookings.applicantId);

    CARAPI GetStudentAccommodationBookings_ApplicantId(
     /* [out] */ CCustomer.applicant* CCustomer.studentAccommodationBookings.applicantId);


   CARAPI SetStudentAccommodationBookings_AllocationId(
     /* [in] */ CProperty.allocation CCustomer.studentAccommodationBookings.allocationId);

    CARAPI GetStudentAccommodationBookings_AllocationId(
     /* [out] */ CProperty.allocation* CCustomer.studentAccommodationBookings.allocationId);


   CARAPI SetStudentAccommodationBookings_TenancyId(
     /* [in] */ CProperty.tenant CCustomer.studentAccommodationBookings.tenancyId);

    CARAPI GetStudentAccommodationBookings_TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.studentAccommodationBookings.tenancyId);


   CARAPI SetStudentAccommodationBookings_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.studentAccommodationBookings.docRefIds);

    CARAPI GetStudentAccommodationBookings_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.studentAccommodationBookings.docRefIds);


   CARAPI SetStudentAccommodationBookings_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.studentAccommodationBookings.imageRefIds);

    CARAPI GetStudentAccommodationBookings_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.studentAccommodationBookings.imageRefIds);


   CARAPI SetStudentAccommodationBookings_BookingId(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.bookingId);

    CARAPI GetStudentAccommodationBookings_BookingId(
     /* [out] */ String* CCustomer.studentAccommodationBookings.bookingId);


   CARAPI SetStudentAccommodationBookings_PropertyAddressString(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.propertyAddressString);

    CARAPI GetStudentAccommodationBookings_PropertyAddressString(
     /* [out] */ String* CCustomer.studentAccommodationBookings.propertyAddressString);


   CARAPI SetStudentAccommodationBookings_UnitNumber(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.unitNumber);

    CARAPI GetStudentAccommodationBookings_UnitNumber(
     /* [out] */ String* CCustomer.studentAccommodationBookings.unitNumber);


   CARAPI SetStudentAccommodationBookings_PreInspected(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.preInspected);

    CARAPI GetStudentAccommodationBookings_PreInspected(
     /* [out] */ String* CCustomer.studentAccommodationBookings.preInspected);


   CARAPI SetStudentAccommodationBookings_DateLeaseStarts(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.dateLeaseStarts);

    CARAPI GetStudentAccommodationBookings_DateLeaseStarts(
     /* [out] */ String* CCustomer.studentAccommodationBookings.dateLeaseStarts);


   CARAPI SetStudentAccommodationBookings_MidTermInspections(
     /* [in] */ ArrayOf<const String&> CCustomer.studentAccommodationBookings.midTermInspections);

    CARAPI GetStudentAccommodationBookings_MidTermInspections(
     /* [out, callee] */ ArrayOf<String>* CCustomer.studentAccommodationBookings.midTermInspections);


   CARAPI SetStudentAccommodationBookings_DateLeaseEnds(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.dateLeaseEnds);

    CARAPI GetStudentAccommodationBookings_DateLeaseEnds(
     /* [out] */ String* CCustomer.studentAccommodationBookings.dateLeaseEnds);


   CARAPI SetStudentAccommodationBookings_PostInspected(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.postInspected);

    CARAPI GetStudentAccommodationBookings_PostInspected(
     /* [out] */ String* CCustomer.studentAccommodationBookings.postInspected);


   CARAPI SetStudentAccommodationBookings_PaymentInterval(
     /* [in] */ CHelper.billingInterval CCustomer.studentAccommodationBookings.billingInterval);

    CARAPI GetStudentAccommodationBookings_PaymentInterval(
     /* [out] */ CHelper.billingInterval* CCustomer.studentAccommodationBookings.billingInterval);


   CARAPI SetStudentAccommodationBookings_RentalAmountAgreed(
     /* [in] */ Double CCustomer.studentAccommodationBookings.rentalAmountAgreed);

    CARAPI GetStudentAccommodationBookings_RentalAmountAgreed(
     /* [out] */ Double* CCustomer.studentAccommodationBookings.rentalAmountAgreed);


   CARAPI SetStudentAccommodationBookings_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.studentAccommodationBookings.businessChannelOwnerId);

    CARAPI GetStudentAccommodationBookings_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.studentAccommodationBookings.businessChannelOwnerId);


   CARAPI SetStudentAccommodationBookings_BranchId(
     /* [in] */ CAdministration.branch CCustomer.studentAccommodationBookings.branchId);

    CARAPI GetStudentAccommodationBookings_BranchId(
     /* [out] */ CAdministration.branch* CCustomer.studentAccommodationBookings.branchId);


   CARAPI SetStudentAccommodationBookings_DeptId(
     /* [in] */ CAdministration.department CCustomer.studentAccommodationBookings.deptId);

    CARAPI GetStudentAccommodationBookings_DeptId(
     /* [out] */ CAdministration.department* CCustomer.studentAccommodationBookings.deptId);


   CARAPI SetStudentAccommodationBookings_PropertyId(
     /* [in] */ CProperty.property CCustomer.studentAccommodationBookings.propertyId);

    CARAPI GetStudentAccommodationBookings_PropertyId(
     /* [out] */ CProperty.property* CCustomer.studentAccommodationBookings.propertyId);


   CARAPI SetStudentAccommodationBookings_ApplicationId(
     /* [in] */ CCustomer.application CCustomer.studentAccommodationBookings.applicationId);

    CARAPI GetStudentAccommodationBookings_ApplicationId(
     /* [out] */ CCustomer.application* CCustomer.studentAccommodationBookings.applicationId);


   CARAPI SetStudentAccommodationBookings_ApplicantId(
     /* [in] */ CCustomer.applicant CCustomer.studentAccommodationBookings.applicantId);

    CARAPI GetStudentAccommodationBookings_ApplicantId(
     /* [out] */ CCustomer.applicant* CCustomer.studentAccommodationBookings.applicantId);


   CARAPI SetStudentAccommodationBookings_AllocationId(
     /* [in] */ CProperty.allocation CCustomer.studentAccommodationBookings.allocationId);

    CARAPI GetStudentAccommodationBookings_AllocationId(
     /* [out] */ CProperty.allocation* CCustomer.studentAccommodationBookings.allocationId);


   CARAPI SetStudentAccommodationBookings_TenancyId(
     /* [in] */ CProperty.tenant CCustomer.studentAccommodationBookings.tenancyId);

    CARAPI GetStudentAccommodationBookings_TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.studentAccommodationBookings.tenancyId);


   CARAPI SetStudentAccommodationBookings_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.studentAccommodationBookings.docRefIds);

    CARAPI GetStudentAccommodationBookings_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.studentAccommodationBookings.docRefIds);


   CARAPI SetStudentAccommodationBookings_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.studentAccommodationBookings.imageRefIds);

    CARAPI GetStudentAccommodationBookings_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.studentAccommodationBookings.imageRefIds);


   CARAPI SetStudentAccommodationBookings_CustTenantJoinId(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.custTenantJoinId);

    CARAPI GetStudentAccommodationBookings_CustTenantJoinId(
     /* [out] */ String* CCustomer.studentAccommodationBookings.custTenantJoinId);


   CARAPI SetStudentAccommodationBookings_CustomerId(
     /* [in] */ CCustomer.customer CCustomer.studentAccommodationBookings.customerId);

    CARAPI GetStudentAccommodationBookings_CustomerId(
     /* [out] */ CCustomer.customer* CCustomer.studentAccommodationBookings.customerId);


   CARAPI SetStudentAccommodationBookings_TenancyId(
     /* [in] */ CProperty.tenant CCustomer.studentAccommodationBookings.tenancyId);

    CARAPI GetStudentAccommodationBookings_TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.studentAccommodationBookings.tenancyId);


   CARAPI SetStudentAccommodationBookings_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.studentAccommodationBookings.businessChannelOwnerId);

    CARAPI GetStudentAccommodationBookings_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.studentAccommodationBookings.businessChannelOwnerId);



   CARAPI SetTemporaryAccommodationBookings_BookingId(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.bookingId);

    CARAPI GetTemporaryAccommodationBookings_BookingId(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.bookingId);


   CARAPI SetTemporaryAccommodationBookings_PropertyAddressString(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.propertyAddressString);

    CARAPI GetTemporaryAccommodationBookings_PropertyAddressString(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.propertyAddressString);


   CARAPI SetTemporaryAccommodationBookings_UnitNumber(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.unitNumber);

    CARAPI GetTemporaryAccommodationBookings_UnitNumber(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.unitNumber);


   CARAPI SetTemporaryAccommodationBookings_PreInspected(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.preInspected);

    CARAPI GetTemporaryAccommodationBookings_PreInspected(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.preInspected);


   CARAPI SetTemporaryAccommodationBookings_DateLeaseStarts(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.dateLeaseStarts);

    CARAPI GetTemporaryAccommodationBookings_DateLeaseStarts(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.dateLeaseStarts);


   CARAPI SetTemporaryAccommodationBookings_MidTermInspections(
     /* [in] */ ArrayOf<const String&> CCustomer.temporaryAccommodationBookings.midTermInspections);

    CARAPI GetTemporaryAccommodationBookings_MidTermInspections(
     /* [out, callee] */ ArrayOf<String>* CCustomer.temporaryAccommodationBookings.midTermInspections);


   CARAPI SetTemporaryAccommodationBookings_DateLeaseEnds(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.dateLeaseEnds);

    CARAPI GetTemporaryAccommodationBookings_DateLeaseEnds(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.dateLeaseEnds);


   CARAPI SetTemporaryAccommodationBookings_PostInspected(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.postInspected);

    CARAPI GetTemporaryAccommodationBookings_PostInspected(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.postInspected);


   CARAPI SetTemporaryAccommodationBookings_PaymentInterval(
     /* [in] */ CHelper.billingInterval CCustomer.temporaryAccommodationBookings.billingInterval);

    CARAPI GetTemporaryAccommodationBookings_PaymentInterval(
     /* [out] */ CHelper.billingInterval* CCustomer.temporaryAccommodationBookings.billingInterval);


   CARAPI SetTemporaryAccommodationBookings_RentalAmountAgreed(
     /* [in] */ Double CCustomer.temporaryAccommodationBookings.rentalAmountAgreed);

    CARAPI GetTemporaryAccommodationBookings_RentalAmountAgreed(
     /* [out] */ Double* CCustomer.temporaryAccommodationBookings.rentalAmountAgreed);


   CARAPI SetTemporaryAccommodationBookings_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);

    CARAPI GetTemporaryAccommodationBookings_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);


   CARAPI SetTemporaryAccommodationBookings_BranchId(
     /* [in] */ CAdministration.branch CCustomer.temporaryAccommodationBookings.branchId);

    CARAPI GetTemporaryAccommodationBookings_BranchId(
     /* [out] */ CAdministration.branch* CCustomer.temporaryAccommodationBookings.branchId);


   CARAPI SetTemporaryAccommodationBookings_DeptId(
     /* [in] */ CAdministration.department CCustomer.temporaryAccommodationBookings.deptId);

    CARAPI GetTemporaryAccommodationBookings_DeptId(
     /* [out] */ CAdministration.department* CCustomer.temporaryAccommodationBookings.deptId);


   CARAPI SetTemporaryAccommodationBookings_PropertyId(
     /* [in] */ CProperty.property CCustomer.temporaryAccommodationBookings.propertyId);

    CARAPI GetTemporaryAccommodationBookings_PropertyId(
     /* [out] */ CProperty.property* CCustomer.temporaryAccommodationBookings.propertyId);


   CARAPI SetTemporaryAccommodationBookings_ApplicationId(
     /* [in] */ CCustomer.application CCustomer.temporaryAccommodationBookings.applicationId);

    CARAPI GetTemporaryAccommodationBookings_ApplicationId(
     /* [out] */ CCustomer.application* CCustomer.temporaryAccommodationBookings.applicationId);


   CARAPI SetTemporaryAccommodationBookings_ApplicantId(
     /* [in] */ CCustomer.applicant CCustomer.temporaryAccommodationBookings.applicantId);

    CARAPI GetTemporaryAccommodationBookings_ApplicantId(
     /* [out] */ CCustomer.applicant* CCustomer.temporaryAccommodationBookings.applicantId);


   CARAPI SetTemporaryAccommodationBookings_AllocationId(
     /* [in] */ CProperty.allocation CCustomer.temporaryAccommodationBookings.allocationId);

    CARAPI GetTemporaryAccommodationBookings_AllocationId(
     /* [out] */ CProperty.allocation* CCustomer.temporaryAccommodationBookings.allocationId);


   CARAPI SetTemporaryAccommodationBookings_TenancyId(
     /* [in] */ CProperty.tenant CCustomer.temporaryAccommodationBookings.tenancyId);

    CARAPI GetTemporaryAccommodationBookings_TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.temporaryAccommodationBookings.tenancyId);


   CARAPI SetTemporaryAccommodationBookings_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.temporaryAccommodationBookings.docRefIds);

    CARAPI GetTemporaryAccommodationBookings_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.temporaryAccommodationBookings.docRefIds);


   CARAPI SetTemporaryAccommodationBookings_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.temporaryAccommodationBookings.imageRefIds);

    CARAPI GetTemporaryAccommodationBookings_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.temporaryAccommodationBookings.imageRefIds);


   CARAPI SetTemporaryAccommodationBookings_BookingId(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.bookingId);

    CARAPI GetTemporaryAccommodationBookings_BookingId(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.bookingId);


   CARAPI SetTemporaryAccommodationBookings_PropertyAddressString(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.propertyAddressString);

    CARAPI GetTemporaryAccommodationBookings_PropertyAddressString(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.propertyAddressString);


   CARAPI SetTemporaryAccommodationBookings_UnitNumber(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.unitNumber);

    CARAPI GetTemporaryAccommodationBookings_UnitNumber(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.unitNumber);


   CARAPI SetTemporaryAccommodationBookings_PreInspected(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.preInspected);

    CARAPI GetTemporaryAccommodationBookings_PreInspected(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.preInspected);


   CARAPI SetTemporaryAccommodationBookings_DateLeaseStarts(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.dateLeaseStarts);

    CARAPI GetTemporaryAccommodationBookings_DateLeaseStarts(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.dateLeaseStarts);


   CARAPI SetTemporaryAccommodationBookings_MidTermInspections(
     /* [in] */ ArrayOf<const String&> CCustomer.temporaryAccommodationBookings.midTermInspections);

    CARAPI GetTemporaryAccommodationBookings_MidTermInspections(
     /* [out, callee] */ ArrayOf<String>* CCustomer.temporaryAccommodationBookings.midTermInspections);


   CARAPI SetTemporaryAccommodationBookings_DateLeaseEnds(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.dateLeaseEnds);

    CARAPI GetTemporaryAccommodationBookings_DateLeaseEnds(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.dateLeaseEnds);


   CARAPI SetTemporaryAccommodationBookings_PostInspected(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.postInspected);

    CARAPI GetTemporaryAccommodationBookings_PostInspected(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.postInspected);


   CARAPI SetTemporaryAccommodationBookings_PaymentInterval(
     /* [in] */ CHelper.billingInterval CCustomer.temporaryAccommodationBookings.billingInterval);

    CARAPI GetTemporaryAccommodationBookings_PaymentInterval(
     /* [out] */ CHelper.billingInterval* CCustomer.temporaryAccommodationBookings.billingInterval);


   CARAPI SetTemporaryAccommodationBookings_RentalAmountAgreed(
     /* [in] */ Double CCustomer.temporaryAccommodationBookings.rentalAmountAgreed);

    CARAPI GetTemporaryAccommodationBookings_RentalAmountAgreed(
     /* [out] */ Double* CCustomer.temporaryAccommodationBookings.rentalAmountAgreed);


   CARAPI SetTemporaryAccommodationBookings_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);

    CARAPI GetTemporaryAccommodationBookings_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);


   CARAPI SetTemporaryAccommodationBookings_BranchId(
     /* [in] */ CAdministration.branch CCustomer.temporaryAccommodationBookings.branchId);

    CARAPI GetTemporaryAccommodationBookings_BranchId(
     /* [out] */ CAdministration.branch* CCustomer.temporaryAccommodationBookings.branchId);


   CARAPI SetTemporaryAccommodationBookings_DeptId(
     /* [in] */ CAdministration.department CCustomer.temporaryAccommodationBookings.deptId);

    CARAPI GetTemporaryAccommodationBookings_DeptId(
     /* [out] */ CAdministration.department* CCustomer.temporaryAccommodationBookings.deptId);


   CARAPI SetTemporaryAccommodationBookings_PropertyId(
     /* [in] */ CProperty.property CCustomer.temporaryAccommodationBookings.propertyId);

    CARAPI GetTemporaryAccommodationBookings_PropertyId(
     /* [out] */ CProperty.property* CCustomer.temporaryAccommodationBookings.propertyId);


   CARAPI SetTemporaryAccommodationBookings_ApplicationId(
     /* [in] */ CCustomer.application CCustomer.temporaryAccommodationBookings.applicationId);

    CARAPI GetTemporaryAccommodationBookings_ApplicationId(
     /* [out] */ CCustomer.application* CCustomer.temporaryAccommodationBookings.applicationId);


   CARAPI SetTemporaryAccommodationBookings_ApplicantId(
     /* [in] */ CCustomer.applicant CCustomer.temporaryAccommodationBookings.applicantId);

    CARAPI GetTemporaryAccommodationBookings_ApplicantId(
     /* [out] */ CCustomer.applicant* CCustomer.temporaryAccommodationBookings.applicantId);


   CARAPI SetTemporaryAccommodationBookings_AllocationId(
     /* [in] */ CProperty.allocation CCustomer.temporaryAccommodationBookings.allocationId);

    CARAPI GetTemporaryAccommodationBookings_AllocationId(
     /* [out] */ CProperty.allocation* CCustomer.temporaryAccommodationBookings.allocationId);


   CARAPI SetTemporaryAccommodationBookings_TenancyId(
     /* [in] */ CProperty.tenant CCustomer.temporaryAccommodationBookings.tenancyId);

    CARAPI GetTemporaryAccommodationBookings_TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.temporaryAccommodationBookings.tenancyId);


   CARAPI SetTemporaryAccommodationBookings_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.temporaryAccommodationBookings.docRefIds);

    CARAPI GetTemporaryAccommodationBookings_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.temporaryAccommodationBookings.docRefIds);


   CARAPI SetTemporaryAccommodationBookings_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.temporaryAccommodationBookings.imageRefIds);

    CARAPI GetTemporaryAccommodationBookings_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.temporaryAccommodationBookings.imageRefIds);


   CARAPI SetTemporaryAccommodationBookings_CustTenantJoinId(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.custTenantJoinId);

    CARAPI GetTemporaryAccommodationBookings_CustTenantJoinId(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.custTenantJoinId);


   CARAPI SetTemporaryAccommodationBookings_CustomerId(
     /* [in] */ CCustomer.customer CCustomer.temporaryAccommodationBookings.customerId);

    CARAPI GetTemporaryAccommodationBookings_CustomerId(
     /* [out] */ CCustomer.customer* CCustomer.temporaryAccommodationBookings.customerId);


   CARAPI SetTemporaryAccommodationBookings_TenancyId(
     /* [in] */ CProperty.tenant CCustomer.temporaryAccommodationBookings.tenancyId);

    CARAPI GetTemporaryAccommodationBookings_TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.temporaryAccommodationBookings.tenancyId);


   CARAPI SetTemporaryAccommodationBookings_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);

    CARAPI GetTemporaryAccommodationBookings_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);


   CARAPI SetCustomerTenantJoin_CustTenantJoinId(
     /* [in] */ const String& CCustomer.customerTenantJoin.custTenantJoinId);

    CARAPI GetCustomerTenantJoin_CustTenantJoinId(
     /* [out] */ String* CCustomer.customerTenantJoin.custTenantJoinId);


   CARAPI SetCustomerTenantJoin_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CCustomer.customerTenantJoin.customerIds);

    CARAPI GetCustomerTenantJoin_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CCustomer.customerTenantJoin.customerIds);


   CARAPI SetCustomerTenantJoin_TenancyId(
     /* [in] */ ArrayOf<Double> CCustomer.customerTenantJoin.tenancyId);

    CARAPI GetCustomerTenantJoin_TenancyId(
     /* [out, callee] */ ArrayOf<Double>* CCustomer.customerTenantJoin.tenancyId);


   CARAPI SetCustomerTenantJoin_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.customerTenantJoin.businessChannelOwnerId);

    CARAPI GetCustomerTenantJoin_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.customerTenantJoin.businessChannelOwnerId);



   CARAPI SetComplaint_ComplaintId(
     /* [in] */ const String& CCustomer.complaint.complaintId);

    CARAPI GetComplaint_ComplaintId(
     /* [out] */ String* CCustomer.complaint.complaintId);


   CARAPI SetComplaint_ParticipantNameComplainant(
     /* [in] */ const String& CCustomer.complaint.participantNameComplainant);

    CARAPI GetComplaint_ParticipantNameComplainant(
     /* [out] */ String* CCustomer.complaint.participantNameComplainant);


   CARAPI SetComplaint_ParticipantIdComplainant(
     /* [in] */ const String& CCustomer.complaint.participantIdComplainant);

    CARAPI GetComplaint_ParticipantIdComplainant(
     /* [out] */ String* CCustomer.complaint.participantIdComplainant);


   CARAPI SetComplaint_Description(
     /* [in] */ const String& CCustomer.complaint.description);

    CARAPI GetComplaint_Description(
     /* [out] */ String* CCustomer.complaint.description);


   CARAPI SetComplaint_NonTenantRelated(
     /* [in] */ Boolean CCustomer.complaint.nonTenantRelated);

    CARAPI GetComplaint_NonTenantRelated(
     /* [out] */ Boolean* CCustomer.complaint.nonTenantRelated);


   CARAPI SetComplaint_AgainstTenant(
     /* [in] */ Boolean CCustomer.complaint.againstTenant);

    CARAPI GetComplaint_AgainstTenant(
     /* [out] */ Boolean* CCustomer.complaint.againstTenant);


   CARAPI SetComplaint_ByTenant(
     /* [in] */ Boolean CCustomer.complaint.byTenant);

    CARAPI GetComplaint_ByTenant(
     /* [out] */ Boolean* CCustomer.complaint.byTenant);


   CARAPI SetComplaint_DetailsInChronologicalOrder(
     /* [in] */ ArrayOf<const String&> CCustomer.complaint.detailsInChronologicalOrder);

    CARAPI GetComplaint_DetailsInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* CCustomer.complaint.detailsInChronologicalOrder);


   CARAPI SetComplaint_DatesTimesOfEvents(
     /* [in] */ ArrayOf<const String&> CCustomer.complaint.datesTimesOfEvents);

    CARAPI GetComplaint_DatesTimesOfEvents(
     /* [out, callee] */ ArrayOf<String>* CCustomer.complaint.datesTimesOfEvents);


   CARAPI SetComplaint_RepliedWhen(
     /* [in] */ const String& CCustomer.complaint.repliedWhen);

    CARAPI GetComplaint_RepliedWhen(
     /* [out] */ String* CCustomer.complaint.repliedWhen);


   CARAPI SetComplaint_ResponsibilitiesParticpantsIds(
     /* [in] */ ArrayOf<const String&> CCustomer.complaint.responsibilitiesParticpantsIds);

    CARAPI GetComplaint_ResponsibilitiesParticpantsIds(
     /* [out, callee] */ ArrayOf<String>* CCustomer.complaint.responsibilitiesParticpantsIds);


   CARAPI SetComplaint_ResponsibilitiesParticpantsNames(
     /* [in] */ ArrayOf<const String&> CCustomer.complaint.responsibilitiesParticpantsNames);

    CARAPI GetComplaint_ResponsibilitiesParticpantsNames(
     /* [out, callee] */ ArrayOf<String>* CCustomer.complaint.responsibilitiesParticpantsNames);


   CARAPI SetComplaint_RequiredActions(
     /* [in] */ ArrayOf<const String&> CCustomer.complaint.requiredActions);

    CARAPI GetComplaint_RequiredActions(
     /* [out, callee] */ ArrayOf<String>* CCustomer.complaint.requiredActions);


   CARAPI SetComplaint_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.complaint.businessChannelOwnerId);

    CARAPI GetComplaint_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.complaint.businessChannelOwnerId);


   CARAPI SetComplaint_BranchId(
     /* [in] */ CAdministration.branch CCustomer.complaint.branchId);

    CARAPI GetComplaint_BranchId(
     /* [out] */ CAdministration.branch* CCustomer.complaint.branchId);


   CARAPI SetComplaint_DeptId(
     /* [in] */ CAdministration.department CCustomer.complaint.deptId);

    CARAPI GetComplaint_DeptId(
     /* [out] */ CAdministration.department* CCustomer.complaint.deptId);


   CARAPI SetComplaint_PropertyOwnerIds(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CCustomer.complaint.propertyOwnerIds);

    CARAPI GetComplaint_PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CCustomer.complaint.propertyOwnerIds);


   CARAPI SetComplaint_TenantIds(
     /* [in] */ ArrayOf<CProperty.tenant> CCustomer.complaint.tenantIds);

    CARAPI GetComplaint_TenantIds(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CCustomer.complaint.tenantIds);


   CARAPI SetComplaint_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CCustomer.complaint.customerIds);

    CARAPI GetComplaint_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CCustomer.complaint.customerIds);


   CARAPI SetComplaint_EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CCustomer.complaint.employeeIds);

    CARAPI GetComplaint_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CCustomer.complaint.employeeIds);


   CARAPI SetComplaint_CommunityIds(
     /* [in] */ ArrayOf<CStakeholder.community> CCustomer.complaint.communityIds);

    CARAPI GetComplaint_CommunityIds(
     /* [out, callee] */ ArrayOf<CStakeholder.community>* CCustomer.complaint.communityIds);


   CARAPI SetComplaint_MediaIds(
     /* [in] */ ArrayOf<CStakeholder.media> CCustomer.complaint.mediaIds);

    CARAPI GetComplaint_MediaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.media>* CCustomer.complaint.mediaIds);


   CARAPI SetComplaint_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CCustomer.complaint.supplierIds);

    CARAPI GetComplaint_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CCustomer.complaint.supplierIds);


   CARAPI SetComplaint_PartnerIds(
     /* [in] */ ArrayOf<CStakeholder.partner> CCustomer.complaint.partnerIds);

    CARAPI GetComplaint_PartnerIds(
     /* [out, callee] */ ArrayOf<CStakeholder.partner>* CCustomer.complaint.partnerIds);


   CARAPI SetComplaint_TribunalIds(
     /* [in] */ ArrayOf<CRegulator.nCAT> CCustomer.complaint.tribunalIds);

    CARAPI GetComplaint_TribunalIds(
     /* [out, callee] */ ArrayOf<CRegulator.nCAT>* CCustomer.complaint.tribunalIds);


   CARAPI SetComplaint_TicaIds(
     /* [in] */ ArrayOf<CStakeholder.tICA> CCustomer.complaint.ticaIds);

    CARAPI GetComplaint_TicaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.tICA>* CCustomer.complaint.ticaIds);


   CARAPI SetComplaint_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CCustomer.complaint.propertyIds);

    CARAPI GetComplaint_PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CCustomer.complaint.propertyIds);


   CARAPI SetComplaint_ServiceIdsInvolved(
     /* [in] */ ArrayOf<CAdministration.service> CCustomer.complaint.serviceIdsInvolved);

    CARAPI GetComplaint_ServiceIdsInvolved(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CCustomer.complaint.serviceIdsInvolved);


   CARAPI SetComplaint_ItemiIds(
     /* [in] */ ArrayOf<CAdministration.item> CCustomer.complaint.itemiIds);

    CARAPI GetComplaint_ItemiIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CCustomer.complaint.itemiIds);


   CARAPI SetComplaint_JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CCustomer.complaint.jobIds);

    CARAPI GetComplaint_JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CCustomer.complaint.jobIds);


   CARAPI SetComplaint_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.complaint.docRefs);

    CARAPI GetComplaint_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.complaint.docRefs);


   CARAPI SetComplaint_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.complaint.imageRefs);

    CARAPI GetComplaint_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.complaint.imageRefs);


   CARAPI SetComplaint_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CCustomer.complaint.audioRefIds);

    CARAPI GetComplaint_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CCustomer.complaint.audioRefIds);


   CARAPI SetComplaint_VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CCustomer.complaint.videoRefs);

    CARAPI GetComplaint_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CCustomer.complaint.videoRefs);


   CARAPI SetCompliment_ComplimentId(
     /* [in] */ const String& CCustomer.compliment.complimentId);

    CARAPI GetCompliment_ComplimentId(
     /* [out] */ String* CCustomer.compliment.complimentId);


   CARAPI SetCompliment_ParticipantNameComplimenting(
     /* [in] */ const String& CCustomer.compliment.participantNameComplimenting);

    CARAPI GetCompliment_ParticipantNameComplimenting(
     /* [out] */ String* CCustomer.compliment.participantNameComplimenting);


   CARAPI SetCompliment_ParticipantIdComplimenting(
     /* [in] */ const String& CCustomer.compliment.participantIdComplimenting);

    CARAPI GetCompliment_ParticipantIdComplimenting(
     /* [out] */ String* CCustomer.compliment.participantIdComplimenting);


   CARAPI SetCompliment_Description(
     /* [in] */ const String& CCustomer.compliment.description);

    CARAPI GetCompliment_Description(
     /* [out] */ String* CCustomer.compliment.description);


   CARAPI SetCompliment_NonTenantRelated(
     /* [in] */ Boolean CCustomer.compliment.nonTenantRelated);

    CARAPI GetCompliment_NonTenantRelated(
     /* [out] */ Boolean* CCustomer.compliment.nonTenantRelated);


   CARAPI SetCompliment_ProTenant(
     /* [in] */ Boolean CCustomer.compliment.proTenant);

    CARAPI GetCompliment_ProTenant(
     /* [out] */ Boolean* CCustomer.compliment.proTenant);


   CARAPI SetCompliment_ByTenant(
     /* [in] */ Boolean CCustomer.compliment.byTenant);

    CARAPI GetCompliment_ByTenant(
     /* [out] */ Boolean* CCustomer.compliment.byTenant);


   CARAPI SetCompliment_DetailsInChronologicalOrder(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.detailsInChronologicalOrder);

    CARAPI GetCompliment_DetailsInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.detailsInChronologicalOrder);


   CARAPI SetCompliment_DatesTimesOfEvents(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.datesTimesOfEvents);

    CARAPI GetCompliment_DatesTimesOfEvents(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.datesTimesOfEvents);


   CARAPI SetCompliment_CorroReceived(
     /* [in] */ const String& CCustomer.compliment.corroReceived);

    CARAPI GetCompliment_CorroReceived(
     /* [out] */ String* CCustomer.compliment.corroReceived);


   CARAPI SetCompliment_ResponseDocRefs(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.responseDocRefs);

    CARAPI GetCompliment_ResponseDocRefs(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.responseDocRefs);


   CARAPI SetCompliment_RepliedWhen(
     /* [in] */ const String& CCustomer.compliment.repliedWhen);

    CARAPI GetCompliment_RepliedWhen(
     /* [out] */ String* CCustomer.compliment.repliedWhen);


   CARAPI SetCompliment_ResponsibilitiesParticpantsIds(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.responsibilitiesParticpantsIds);

    CARAPI GetCompliment_ResponsibilitiesParticpantsIds(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.responsibilitiesParticpantsIds);


   CARAPI SetCompliment_ResponsibilitiesParticpantsNames(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.responsibilitiesParticpantsNames);

    CARAPI GetCompliment_ResponsibilitiesParticpantsNames(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.responsibilitiesParticpantsNames);


   CARAPI SetCompliment_RequiredActions(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.requiredActions);

    CARAPI GetCompliment_RequiredActions(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.requiredActions);


   CARAPI SetCompliment_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.compliment.businessChannelOwnerId);

    CARAPI GetCompliment_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.compliment.businessChannelOwnerId);


   CARAPI SetCompliment_BranchId(
     /* [in] */ CAdministration.branch CCustomer.compliment.branchId);

    CARAPI GetCompliment_BranchId(
     /* [out] */ CAdministration.branch* CCustomer.compliment.branchId);


   CARAPI SetCompliment_DeptId(
     /* [in] */ CAdministration.department CCustomer.compliment.deptId);

    CARAPI GetCompliment_DeptId(
     /* [out] */ CAdministration.department* CCustomer.compliment.deptId);


   CARAPI SetCompliment_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CCustomer.compliment.propertyIds);

    CARAPI GetCompliment_PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CCustomer.compliment.propertyIds);


   CARAPI SetCompliment_PropertyOwnerIds(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CCustomer.compliment.propertyOwnerIds);

    CARAPI GetCompliment_PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CCustomer.compliment.propertyOwnerIds);


   CARAPI SetCompliment_ServiceIdsInvolved(
     /* [in] */ ArrayOf<CAdministration.service> CCustomer.compliment.serviceIdsInvolved);

    CARAPI GetCompliment_ServiceIdsInvolved(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CCustomer.compliment.serviceIdsInvolved);


   CARAPI SetCompliment_ItemiIds(
     /* [in] */ ArrayOf<CAdministration.item> CCustomer.compliment.itemiIds);

    CARAPI GetCompliment_ItemiIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CCustomer.compliment.itemiIds);


   CARAPI SetCompliment_JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CCustomer.compliment.jobIds);

    CARAPI GetCompliment_JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CCustomer.compliment.jobIds);


   CARAPI SetCompliment_TenancyId(
     /* [in] */ ArrayOf<CProperty.tenant> CCustomer.compliment.tenancyId);

    CARAPI GetCompliment_TenancyId(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CCustomer.compliment.tenancyId);


   CARAPI SetCompliment_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CCustomer.compliment.customerIds);

    CARAPI GetCompliment_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CCustomer.compliment.customerIds);


   CARAPI SetCompliment_EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CCustomer.compliment.employeeIds);

    CARAPI GetCompliment_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CCustomer.compliment.employeeIds);


   CARAPI SetCompliment_CommunityIds(
     /* [in] */ ArrayOf<CStakeholder.community> CCustomer.compliment.communityIds);

    CARAPI GetCompliment_CommunityIds(
     /* [out, callee] */ ArrayOf<CStakeholder.community>* CCustomer.compliment.communityIds);


   CARAPI SetCompliment_MediaIds(
     /* [in] */ ArrayOf<CStakeholder.media> CCustomer.compliment.mediaIds);

    CARAPI GetCompliment_MediaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.media>* CCustomer.compliment.mediaIds);


   CARAPI SetCompliment_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CCustomer.compliment.supplierIds);

    CARAPI GetCompliment_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CCustomer.compliment.supplierIds);


   CARAPI SetCompliment_PartnerIds(
     /* [in] */ ArrayOf<CStakeholder.partner> CCustomer.compliment.partnerIds);

    CARAPI GetCompliment_PartnerIds(
     /* [out, callee] */ ArrayOf<CStakeholder.partner>* CCustomer.compliment.partnerIds);


   CARAPI SetCompliment_TribunalIds(
     /* [in] */ ArrayOf<CRegulator.nCAT> CCustomer.compliment.tribunalIds);

    CARAPI GetCompliment_TribunalIds(
     /* [out, callee] */ ArrayOf<CRegulator.nCAT>* CCustomer.compliment.tribunalIds);


   CARAPI SetCompliment_TicaIds(
     /* [in] */ ArrayOf<CStakeholder.tICA> CCustomer.compliment.ticaIds);

    CARAPI GetCompliment_TicaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.tICA>* CCustomer.compliment.ticaIds);


   CARAPI SetCompliment_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.compliment.docRefIds);

    CARAPI GetCompliment_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.compliment.docRefIds);


   CARAPI SetCompliment_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.compliment.imageRefIds);

    CARAPI GetCompliment_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.compliment.imageRefIds);


   CARAPI SetCompliment_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CCustomer.compliment.audioRefIds);

    CARAPI GetCompliment_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CCustomer.compliment.audioRefIds);


   CARAPI SetCompliment_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CCustomer.compliment.videoRefIds);

    CARAPI GetCompliment_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CCustomer.compliment.videoRefIds);



protected:
    // Member variables
const String& mSetCustomer_CustomerId
String* mGetCustomer_CustomerId
const String& mSetCustomer_LinkedToThisBusinessChannelOwnerId
String* mGetCustomer_LinkedToThisBusinessChannelOwnerId
CHelper.relationship mSetCustomer_Relationship
CHelper.relationship* mGetCustomer_Relationship
ArrayOf<const String&> mSetCustomer_CustomerTypesIds
ArrayOf<String>* mGetCustomer_CustomerTypesIds
const String& mSetCustomer_OurBranchId
String* mGetCustomer_OurBranchId
const String& mSetCustomer_FirstName
String* mGetCustomer_FirstName
const String& mSetCustomer_LastName
String* mGetCustomer_LastName
ArrayOf<const String&> mSetCustomer_ResidentialAddress
ArrayOf<String>* mGetCustomer_ResidentialAddress
ArrayOf<const String&> mSetCustomer_PostalAddress
ArrayOf<String>* mGetCustomer_PostalAddress
ArrayOf<const String&> mSetCustomer_DeliveryAddress
ArrayOf<String>* mGetCustomer_DeliveryAddress
ArrayOf<const String&> mSetCustomer_BillingAddress
ArrayOf<String>* mGetCustomer_BillingAddress
const String& mSetCustomer_Email
String* mGetCustomer_Email
Int32 mSetCustomer_HomePhone
Int32* mGetCustomer_HomePhone
Int32 mSetCustomer_MobilePhone
Int32* mGetCustomer_MobilePhone
Int32 mSetCustomer_WorkPhone
Int32* mGetCustomer_WorkPhone
ArrayOf<const String&> mSetCustomer_AmenitiesRequired
ArrayOf<String>* mGetCustomer_AmenitiesRequired
ArrayOf<const String&> mSetCustomer_StreetsDesired
ArrayOf<String>* mGetCustomer_StreetsDesired
ArrayOf<Int32> mSetCustomer_PostcodesDesired
ArrayOf<Int32>* mGetCustomer_PostcodesDesired
Int32 mSetCustomer_BedroomsRequired
Int32* mGetCustomer_BedroomsRequired
Double mSetCustomer_MaxPriceOffering
Double* mGetCustomer_MaxPriceOffering
Double mSetCustomer_MinPriceOffering
Double* mGetCustomer_MinPriceOffering
ArrayOf<Double> mSetCustomer_MaxPriceAsking
ArrayOf<Double>* mGetCustomer_MaxPriceAsking
ArrayOf<Double> mSetCustomer_MinPriceAsking
ArrayOf<Double>* mGetCustomer_MinPriceAsking
const String& mSetCustomer_CentrelinkCRN
String* mGetCustomer_CentrelinkCRN
Int32 mSetCustomer_ATOTFN
Int32* mGetCustomer_ATOTFN
const String& mSetCustomer_ABN
String* mGetCustomer_ABN
ArrayOf<const String&> mSetCustomer_ContactedWithDetails
ArrayOf<String>* mGetCustomer_ContactedWithDetails
CRegister.businessChannelOwner mSetCustomer_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomer_BusinessChannelOwnerId
ArrayOf<CProperty.propertyOwner> mSetCustomer_PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetCustomer_PropertyOwnerIds
ArrayOf<CProperty.customerpropertyJoin> mSetCustomer_CustPropJoinIds
ArrayOf<CProperty.customerpropertyJoin>* mGetCustomer_CustPropJoinIds
ArrayOf<CAdministration.documents> mSetCustomer_DocRefIds
ArrayOf<CAdministration.documents>* mGetCustomer_DocRefIds
ArrayOf<CAdministration.images> mSetCustomer_ImageRefIds
ArrayOf<CAdministration.images>* mGetCustomer_ImageRefIds
CProperty.tenant mSetCustomer_TenancyId
CProperty.tenant* mGetCustomer_TenancyId
CCustomer.applicant mSetCustomer_ApplicantId
CCustomer.applicant* mGetCustomer_ApplicantId
const String& mSetCustomerType_CustomerTypeId
String* mGetCustomerType_CustomerTypeId
const String& mSetCustomerType_Description
String* mGetCustomerType_Description
const String& mSetCustomerType_CustTypeName
String* mGetCustomerType_CustTypeName
CRegister.businessChannelOwner mSetCustomerType_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomerType_BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetCustomerType_DocRefs
ArrayOf<CAdministration.documents>* mGetCustomerType_DocRefs
ArrayOf<CAdministration.images> mSetCustomerType_ImageRefs
ArrayOf<CAdministration.images>* mGetCustomerType_ImageRefs
ArrayOf<CAdministration.audio> mSetCustomerType_AudioRefIds
ArrayOf<CAdministration.audio>* mGetCustomerType_AudioRefIds
ArrayOf<CAdministration.video> mSetCustomerType_VideoRefs
ArrayOf<CAdministration.video>* mGetCustomerType_VideoRefs
const String& mSetCustomerCustomerJoin_CustCustomerJoinId
String* mGetCustomerCustomerJoin_CustCustomerJoinId
ArrayOf<CCustomer.customer> mSetCustomerCustomerJoin_CustomerIds
ArrayOf<CCustomer.customer>* mGetCustomerCustomerJoin_CustomerIds
ArrayOf<Double> mSetCustomerCustomerJoin_PercentageShares
ArrayOf<Double>* mGetCustomerCustomerJoin_PercentageShares
ArrayOf<CProperty.property> mSetCustomerCustomerJoin_PropertyId
ArrayOf<CProperty.property>* mGetCustomerCustomerJoin_PropertyId
ArrayOf<CProperty.project> mSetCustomerCustomerJoin_ProjectId
ArrayOf<CProperty.project>* mGetCustomerCustomerJoin_ProjectId
ArrayOf<CProperty.program> mSetCustomerCustomerJoin_ProgramId
ArrayOf<CProperty.program>* mGetCustomerCustomerJoin_ProgramId
CRegister.businessChannelOwner mSetCustomerCustomerJoin_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomerCustomerJoin_BusinessChannelOwnerId
const String& mSetApplicant_ApplicantId
String* mGetApplicant_ApplicantId
ArrayOf<Int32> mSetApplicant_PostcodesAppliedFor
ArrayOf<Int32>* mGetApplicant_PostcodesAppliedFor
Int32 mSetApplicant_BedroomsSought
Int32* mGetApplicant_BedroomsSought
ArrayOf<const String&> mSetApplicant_AmenitiesRequested
ArrayOf<String>* mGetApplicant_AmenitiesRequested
const String& mSetApplicant_FirstName
String* mGetApplicant_FirstName
const String& mSetApplicant_LastName
String* mGetApplicant_LastName
const String& mSetApplicant_ResidentialAddress
String* mGetApplicant_ResidentialAddress
const String& mSetApplicant_PostalAddress
String* mGetApplicant_PostalAddress
const String& mSetApplicant_Email
String* mGetApplicant_Email
Int32 mSetApplicant_HomePhone
Int32* mGetApplicant_HomePhone
Int32 mSetApplicant_MobilePhone
Int32* mGetApplicant_MobilePhone
Int32 mSetApplicant_WorkPhone
Int32* mGetApplicant_WorkPhone
ArrayOf<const String&> mSetApplicant_ContactedWithDetails
ArrayOf<String>* mGetApplicant_ContactedWithDetails
CCustomer.application mSetApplicant_ApplicationId
CCustomer.application* mGetApplicant_ApplicationId
CAdministration.branch mSetApplicant_BranchId
CAdministration.branch* mGetApplicant_BranchId
CCustomer.customer mSetApplicant_CustomerId
CCustomer.customer* mGetApplicant_CustomerId
ArrayOf<CProperty.property> mSetApplicant_PropertyIds
ArrayOf<CProperty.property>* mGetApplicant_PropertyIds
CProperty.tenant mSetApplicant_TenancyId
CProperty.tenant* mGetApplicant_TenancyId
ArrayOf<CAdministration.documents> mSetApplicant_DocRefIds
ArrayOf<CAdministration.documents>* mGetApplicant_DocRefIds
ArrayOf<CAdministration.images> mSetApplicant_ImageRefIds
ArrayOf<CAdministration.images>* mGetApplicant_ImageRefIds
CRegister.businessChannelOwner mSetApplicant_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetApplicant_BusinessChannelOwnerId
const String& mSetApplication_ApplicationId
String* mGetApplication_ApplicationId
Boolean mSetApplication_SocialHousingApplication
Boolean* mGetApplication_SocialHousingApplication
Boolean mSetApplication_NDIS
Boolean* mGetApplication_NDIS
Boolean mSetApplication_AffordableHousingApplication
Boolean* mGetApplication_AffordableHousingApplication
Boolean mSetApplication_SharedEquityHousingApplication
Boolean* mGetApplication_SharedEquityHousingApplication
Boolean mSetApplication_RentToBuyApplication
Boolean* mGetApplication_RentToBuyApplication
Boolean mSetApplication_MarketRateHousingApplication
Boolean* mGetApplication_MarketRateHousingApplication
const String& mSetApplication_HeadApplicantFirstName
String* mGetApplication_HeadApplicantFirstName
const String& mSetApplication_HeadApplicantLastName
String* mGetApplication_HeadApplicantLastName
const String& mSetApplication_HeadApplicantAddressLine1
String* mGetApplication_HeadApplicantAddressLine1
const String& mSetApplication_HeadApplicantAddressLine2
String* mGetApplication_HeadApplicantAddressLine2
const String& mSetApplication_HeadApplicantSuburb
String* mGetApplication_HeadApplicantSuburb
const String& mSetApplication_HeadApplicantPostcode
String* mGetApplication_HeadApplicantPostcode
const String& mSetApplication_HeadApplicantHomePhone
String* mGetApplication_HeadApplicantHomePhone
const String& mSetApplication_HeadApplicantWorkPhone
String* mGetApplication_HeadApplicantWorkPhone
const String& mSetApplication_HeadApplicantMobilePhone
String* mGetApplication_HeadApplicantMobilePhone
const String& mSetApplication_HeadApplicantEmail
String* mGetApplication_HeadApplicantEmail
const String& mSetApplication_HeadApplicantDOB
String* mGetApplication_HeadApplicantDOB
ArrayOf<const String&> mSetApplication_StreetsSought
ArrayOf<String>* mGetApplication_StreetsSought
ArrayOf<Int32> mSetApplication_PostcodesSought
ArrayOf<Int32>* mGetApplication_PostcodesSought
ArrayOf<Int32> mSetApplication_BedroomRangeRequired
ArrayOf<Int32>* mGetApplication_BedroomRangeRequired
ArrayOf<const String&> mSetApplication_AmenitiesRequested
ArrayOf<String>* mGetApplication_AmenitiesRequested
ArrayOf<Double> mSetApplication_RangeForRent
ArrayOf<Double>* mGetApplication_RangeForRent
CHelper.billingInterval mSetApplication_Interval
CHelper.billingInterval* mGetApplication_Interval
ArrayOf<const String&> mSetApplication_SecondaryApplicantFirstNames
ArrayOf<String>* mGetApplication_SecondaryApplicantFirstNames
ArrayOf<const String&> mSetApplication_SecondaryApplicantLastNames
ArrayOf<String>* mGetApplication_SecondaryApplicantLastNames
ArrayOf<const String&> mSetApplication_PartnerIds
ArrayOf<String>* mGetApplication_PartnerIds
ArrayOf<CCustomer.applicant> mSetApplication_ApplicantIds
ArrayOf<CCustomer.applicant>* mGetApplication_ApplicantIds
ArrayOf<CCustomer.customer> mSetApplication_CustomerIds
ArrayOf<CCustomer.customer>* mGetApplication_CustomerIds
ArrayOf<CProperty.property> mSetApplication_PropertyIds
ArrayOf<CProperty.property>* mGetApplication_PropertyIds
CRegister.businessChannelOwner mSetApplication_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetApplication_BusinessChannelOwnerId
CAdministration.branch mSetApplication_BranchId
CAdministration.branch* mGetApplication_BranchId
CAdministration.department mSetApplication_DeptId
CAdministration.department* mGetApplication_DeptId
ArrayOf<CAdministration.documents> mSetApplication_DocRefs
ArrayOf<CAdministration.documents>* mGetApplication_DocRefs
ArrayOf<CAdministration.images> mSetApplication_ImageRefs
ArrayOf<CAdministration.images>* mGetApplication_ImageRefs
ArrayOf<CAdministration.audio> mSetApplication_AudioRefIds
ArrayOf<CAdministration.audio>* mGetApplication_AudioRefIds
const String& mSetStudentAccommodationBookings_BookingId
String* mGetStudentAccommodationBookings_BookingId
const String& mSetStudentAccommodationBookings_PropertyAddressString
String* mGetStudentAccommodationBookings_PropertyAddressString
const String& mSetStudentAccommodationBookings_UnitNumber
String* mGetStudentAccommodationBookings_UnitNumber
const String& mSetStudentAccommodationBookings_PreInspected
String* mGetStudentAccommodationBookings_PreInspected
const String& mSetStudentAccommodationBookings_DateLeaseStarts
String* mGetStudentAccommodationBookings_DateLeaseStarts
ArrayOf<const String&> mSetStudentAccommodationBookings_MidTermInspections
ArrayOf<String>* mGetStudentAccommodationBookings_MidTermInspections
const String& mSetStudentAccommodationBookings_DateLeaseEnds
String* mGetStudentAccommodationBookings_DateLeaseEnds
const String& mSetStudentAccommodationBookings_PostInspected
String* mGetStudentAccommodationBookings_PostInspected
CHelper.billingInterval mSetStudentAccommodationBookings_PaymentInterval
CHelper.billingInterval* mGetStudentAccommodationBookings_PaymentInterval
Double mSetStudentAccommodationBookings_RentalAmountAgreed
Double* mGetStudentAccommodationBookings_RentalAmountAgreed
CRegister.businessChannelOwner mSetStudentAccommodationBookings_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStudentAccommodationBookings_BusinessChannelOwnerId
CAdministration.branch mSetStudentAccommodationBookings_BranchId
CAdministration.branch* mGetStudentAccommodationBookings_BranchId
CAdministration.department mSetStudentAccommodationBookings_DeptId
CAdministration.department* mGetStudentAccommodationBookings_DeptId
CProperty.property mSetStudentAccommodationBookings_PropertyId
CProperty.property* mGetStudentAccommodationBookings_PropertyId
CCustomer.application mSetStudentAccommodationBookings_ApplicationId
CCustomer.application* mGetStudentAccommodationBookings_ApplicationId
CCustomer.applicant mSetStudentAccommodationBookings_ApplicantId
CCustomer.applicant* mGetStudentAccommodationBookings_ApplicantId
CProperty.allocation mSetStudentAccommodationBookings_AllocationId
CProperty.allocation* mGetStudentAccommodationBookings_AllocationId
CProperty.tenant mSetStudentAccommodationBookings_TenancyId
CProperty.tenant* mGetStudentAccommodationBookings_TenancyId
ArrayOf<CAdministration.documents> mSetStudentAccommodationBookings_DocRefIds
ArrayOf<CAdministration.documents>* mGetStudentAccommodationBookings_DocRefIds
ArrayOf<CAdministration.images> mSetStudentAccommodationBookings_ImageRefIds
ArrayOf<CAdministration.images>* mGetStudentAccommodationBookings_ImageRefIds
const String& mSetStudentAccommodationBookings_BookingId
String* mGetStudentAccommodationBookings_BookingId
const String& mSetStudentAccommodationBookings_PropertyAddressString
String* mGetStudentAccommodationBookings_PropertyAddressString
const String& mSetStudentAccommodationBookings_UnitNumber
String* mGetStudentAccommodationBookings_UnitNumber
const String& mSetStudentAccommodationBookings_PreInspected
String* mGetStudentAccommodationBookings_PreInspected
const String& mSetStudentAccommodationBookings_DateLeaseStarts
String* mGetStudentAccommodationBookings_DateLeaseStarts
ArrayOf<const String&> mSetStudentAccommodationBookings_MidTermInspections
ArrayOf<String>* mGetStudentAccommodationBookings_MidTermInspections
const String& mSetStudentAccommodationBookings_DateLeaseEnds
String* mGetStudentAccommodationBookings_DateLeaseEnds
const String& mSetStudentAccommodationBookings_PostInspected
String* mGetStudentAccommodationBookings_PostInspected
CHelper.billingInterval mSetStudentAccommodationBookings_PaymentInterval
CHelper.billingInterval* mGetStudentAccommodationBookings_PaymentInterval
Double mSetStudentAccommodationBookings_RentalAmountAgreed
Double* mGetStudentAccommodationBookings_RentalAmountAgreed
CRegister.businessChannelOwner mSetStudentAccommodationBookings_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStudentAccommodationBookings_BusinessChannelOwnerId
CAdministration.branch mSetStudentAccommodationBookings_BranchId
CAdministration.branch* mGetStudentAccommodationBookings_BranchId
CAdministration.department mSetStudentAccommodationBookings_DeptId
CAdministration.department* mGetStudentAccommodationBookings_DeptId
CProperty.property mSetStudentAccommodationBookings_PropertyId
CProperty.property* mGetStudentAccommodationBookings_PropertyId
CCustomer.application mSetStudentAccommodationBookings_ApplicationId
CCustomer.application* mGetStudentAccommodationBookings_ApplicationId
CCustomer.applicant mSetStudentAccommodationBookings_ApplicantId
CCustomer.applicant* mGetStudentAccommodationBookings_ApplicantId
CProperty.allocation mSetStudentAccommodationBookings_AllocationId
CProperty.allocation* mGetStudentAccommodationBookings_AllocationId
CProperty.tenant mSetStudentAccommodationBookings_TenancyId
CProperty.tenant* mGetStudentAccommodationBookings_TenancyId
ArrayOf<CAdministration.documents> mSetStudentAccommodationBookings_DocRefIds
ArrayOf<CAdministration.documents>* mGetStudentAccommodationBookings_DocRefIds
ArrayOf<CAdministration.images> mSetStudentAccommodationBookings_ImageRefIds
ArrayOf<CAdministration.images>* mGetStudentAccommodationBookings_ImageRefIds
const String& mSetStudentAccommodationBookings_CustTenantJoinId
String* mGetStudentAccommodationBookings_CustTenantJoinId
CCustomer.customer mSetStudentAccommodationBookings_CustomerId
CCustomer.customer* mGetStudentAccommodationBookings_CustomerId
CProperty.tenant mSetStudentAccommodationBookings_TenancyId
CProperty.tenant* mGetStudentAccommodationBookings_TenancyId
CRegister.businessChannelOwner mSetStudentAccommodationBookings_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStudentAccommodationBookings_BusinessChannelOwnerId
const String& mSetTemporaryAccommodationBookings_BookingId
String* mGetTemporaryAccommodationBookings_BookingId
const String& mSetTemporaryAccommodationBookings_PropertyAddressString
String* mGetTemporaryAccommodationBookings_PropertyAddressString
const String& mSetTemporaryAccommodationBookings_UnitNumber
String* mGetTemporaryAccommodationBookings_UnitNumber
const String& mSetTemporaryAccommodationBookings_PreInspected
String* mGetTemporaryAccommodationBookings_PreInspected
const String& mSetTemporaryAccommodationBookings_DateLeaseStarts
String* mGetTemporaryAccommodationBookings_DateLeaseStarts
ArrayOf<const String&> mSetTemporaryAccommodationBookings_MidTermInspections
ArrayOf<String>* mGetTemporaryAccommodationBookings_MidTermInspections
const String& mSetTemporaryAccommodationBookings_DateLeaseEnds
String* mGetTemporaryAccommodationBookings_DateLeaseEnds
const String& mSetTemporaryAccommodationBookings_PostInspected
String* mGetTemporaryAccommodationBookings_PostInspected
CHelper.billingInterval mSetTemporaryAccommodationBookings_PaymentInterval
CHelper.billingInterval* mGetTemporaryAccommodationBookings_PaymentInterval
Double mSetTemporaryAccommodationBookings_RentalAmountAgreed
Double* mGetTemporaryAccommodationBookings_RentalAmountAgreed
CRegister.businessChannelOwner mSetTemporaryAccommodationBookings_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTemporaryAccommodationBookings_BusinessChannelOwnerId
CAdministration.branch mSetTemporaryAccommodationBookings_BranchId
CAdministration.branch* mGetTemporaryAccommodationBookings_BranchId
CAdministration.department mSetTemporaryAccommodationBookings_DeptId
CAdministration.department* mGetTemporaryAccommodationBookings_DeptId
CProperty.property mSetTemporaryAccommodationBookings_PropertyId
CProperty.property* mGetTemporaryAccommodationBookings_PropertyId
CCustomer.application mSetTemporaryAccommodationBookings_ApplicationId
CCustomer.application* mGetTemporaryAccommodationBookings_ApplicationId
CCustomer.applicant mSetTemporaryAccommodationBookings_ApplicantId
CCustomer.applicant* mGetTemporaryAccommodationBookings_ApplicantId
CProperty.allocation mSetTemporaryAccommodationBookings_AllocationId
CProperty.allocation* mGetTemporaryAccommodationBookings_AllocationId
CProperty.tenant mSetTemporaryAccommodationBookings_TenancyId
CProperty.tenant* mGetTemporaryAccommodationBookings_TenancyId
ArrayOf<CAdministration.documents> mSetTemporaryAccommodationBookings_DocRefIds
ArrayOf<CAdministration.documents>* mGetTemporaryAccommodationBookings_DocRefIds
ArrayOf<CAdministration.images> mSetTemporaryAccommodationBookings_ImageRefIds
ArrayOf<CAdministration.images>* mGetTemporaryAccommodationBookings_ImageRefIds
const String& mSetTemporaryAccommodationBookings_BookingId
String* mGetTemporaryAccommodationBookings_BookingId
const String& mSetTemporaryAccommodationBookings_PropertyAddressString
String* mGetTemporaryAccommodationBookings_PropertyAddressString
const String& mSetTemporaryAccommodationBookings_UnitNumber
String* mGetTemporaryAccommodationBookings_UnitNumber
const String& mSetTemporaryAccommodationBookings_PreInspected
String* mGetTemporaryAccommodationBookings_PreInspected
const String& mSetTemporaryAccommodationBookings_DateLeaseStarts
String* mGetTemporaryAccommodationBookings_DateLeaseStarts
ArrayOf<const String&> mSetTemporaryAccommodationBookings_MidTermInspections
ArrayOf<String>* mGetTemporaryAccommodationBookings_MidTermInspections
const String& mSetTemporaryAccommodationBookings_DateLeaseEnds
String* mGetTemporaryAccommodationBookings_DateLeaseEnds
const String& mSetTemporaryAccommodationBookings_PostInspected
String* mGetTemporaryAccommodationBookings_PostInspected
CHelper.billingInterval mSetTemporaryAccommodationBookings_PaymentInterval
CHelper.billingInterval* mGetTemporaryAccommodationBookings_PaymentInterval
Double mSetTemporaryAccommodationBookings_RentalAmountAgreed
Double* mGetTemporaryAccommodationBookings_RentalAmountAgreed
CRegister.businessChannelOwner mSetTemporaryAccommodationBookings_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTemporaryAccommodationBookings_BusinessChannelOwnerId
CAdministration.branch mSetTemporaryAccommodationBookings_BranchId
CAdministration.branch* mGetTemporaryAccommodationBookings_BranchId
CAdministration.department mSetTemporaryAccommodationBookings_DeptId
CAdministration.department* mGetTemporaryAccommodationBookings_DeptId
CProperty.property mSetTemporaryAccommodationBookings_PropertyId
CProperty.property* mGetTemporaryAccommodationBookings_PropertyId
CCustomer.application mSetTemporaryAccommodationBookings_ApplicationId
CCustomer.application* mGetTemporaryAccommodationBookings_ApplicationId
CCustomer.applicant mSetTemporaryAccommodationBookings_ApplicantId
CCustomer.applicant* mGetTemporaryAccommodationBookings_ApplicantId
CProperty.allocation mSetTemporaryAccommodationBookings_AllocationId
CProperty.allocation* mGetTemporaryAccommodationBookings_AllocationId
CProperty.tenant mSetTemporaryAccommodationBookings_TenancyId
CProperty.tenant* mGetTemporaryAccommodationBookings_TenancyId
ArrayOf<CAdministration.documents> mSetTemporaryAccommodationBookings_DocRefIds
ArrayOf<CAdministration.documents>* mGetTemporaryAccommodationBookings_DocRefIds
ArrayOf<CAdministration.images> mSetTemporaryAccommodationBookings_ImageRefIds
ArrayOf<CAdministration.images>* mGetTemporaryAccommodationBookings_ImageRefIds
const String& mSetTemporaryAccommodationBookings_CustTenantJoinId
String* mGetTemporaryAccommodationBookings_CustTenantJoinId
CCustomer.customer mSetTemporaryAccommodationBookings_CustomerId
CCustomer.customer* mGetTemporaryAccommodationBookings_CustomerId
CProperty.tenant mSetTemporaryAccommodationBookings_TenancyId
CProperty.tenant* mGetTemporaryAccommodationBookings_TenancyId
CRegister.businessChannelOwner mSetTemporaryAccommodationBookings_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTemporaryAccommodationBookings_BusinessChannelOwnerId
const String& mSetCustomerTenantJoin_CustTenantJoinId
String* mGetCustomerTenantJoin_CustTenantJoinId
ArrayOf<CCustomer.customer> mSetCustomerTenantJoin_CustomerIds
ArrayOf<CCustomer.customer>* mGetCustomerTenantJoin_CustomerIds
ArrayOf<Double> mSetCustomerTenantJoin_TenancyId
ArrayOf<Double>* mGetCustomerTenantJoin_TenancyId
CRegister.businessChannelOwner mSetCustomerTenantJoin_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomerTenantJoin_BusinessChannelOwnerId
const String& mSetComplaint_ComplaintId
String* mGetComplaint_ComplaintId
const String& mSetComplaint_ParticipantNameComplainant
String* mGetComplaint_ParticipantNameComplainant
const String& mSetComplaint_ParticipantIdComplainant
String* mGetComplaint_ParticipantIdComplainant
const String& mSetComplaint_Description
String* mGetComplaint_Description
Boolean mSetComplaint_NonTenantRelated
Boolean* mGetComplaint_NonTenantRelated
Boolean mSetComplaint_AgainstTenant
Boolean* mGetComplaint_AgainstTenant
Boolean mSetComplaint_ByTenant
Boolean* mGetComplaint_ByTenant
ArrayOf<const String&> mSetComplaint_DetailsInChronologicalOrder
ArrayOf<String>* mGetComplaint_DetailsInChronologicalOrder
ArrayOf<const String&> mSetComplaint_DatesTimesOfEvents
ArrayOf<String>* mGetComplaint_DatesTimesOfEvents
const String& mSetComplaint_RepliedWhen
String* mGetComplaint_RepliedWhen
ArrayOf<const String&> mSetComplaint_ResponsibilitiesParticpantsIds
ArrayOf<String>* mGetComplaint_ResponsibilitiesParticpantsIds
ArrayOf<const String&> mSetComplaint_ResponsibilitiesParticpantsNames
ArrayOf<String>* mGetComplaint_ResponsibilitiesParticpantsNames
ArrayOf<const String&> mSetComplaint_RequiredActions
ArrayOf<String>* mGetComplaint_RequiredActions
CRegister.businessChannelOwner mSetComplaint_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetComplaint_BusinessChannelOwnerId
CAdministration.branch mSetComplaint_BranchId
CAdministration.branch* mGetComplaint_BranchId
CAdministration.department mSetComplaint_DeptId
CAdministration.department* mGetComplaint_DeptId
ArrayOf<CProperty.propertyOwner> mSetComplaint_PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetComplaint_PropertyOwnerIds
ArrayOf<CProperty.tenant> mSetComplaint_TenantIds
ArrayOf<CProperty.tenant>* mGetComplaint_TenantIds
ArrayOf<CCustomer.customer> mSetComplaint_CustomerIds
ArrayOf<CCustomer.customer>* mGetComplaint_CustomerIds
ArrayOf<CAdministration.staff> mSetComplaint_EmployeeIds
ArrayOf<CAdministration.staff>* mGetComplaint_EmployeeIds
ArrayOf<CStakeholder.community> mSetComplaint_CommunityIds
ArrayOf<CStakeholder.community>* mGetComplaint_CommunityIds
ArrayOf<CStakeholder.media> mSetComplaint_MediaIds
ArrayOf<CStakeholder.media>* mGetComplaint_MediaIds
ArrayOf<CSupplier.supplier> mSetComplaint_SupplierIds
ArrayOf<CSupplier.supplier>* mGetComplaint_SupplierIds
ArrayOf<CStakeholder.partner> mSetComplaint_PartnerIds
ArrayOf<CStakeholder.partner>* mGetComplaint_PartnerIds
ArrayOf<CRegulator.nCAT> mSetComplaint_TribunalIds
ArrayOf<CRegulator.nCAT>* mGetComplaint_TribunalIds
ArrayOf<CStakeholder.tICA> mSetComplaint_TicaIds
ArrayOf<CStakeholder.tICA>* mGetComplaint_TicaIds
ArrayOf<CProperty.property> mSetComplaint_PropertyIds
ArrayOf<CProperty.property>* mGetComplaint_PropertyIds
ArrayOf<CAdministration.service> mSetComplaint_ServiceIdsInvolved
ArrayOf<CAdministration.service>* mGetComplaint_ServiceIdsInvolved
ArrayOf<CAdministration.item> mSetComplaint_ItemiIds
ArrayOf<CAdministration.item>* mGetComplaint_ItemiIds
ArrayOf<CAdministration.job> mSetComplaint_JobIds
ArrayOf<CAdministration.job>* mGetComplaint_JobIds
ArrayOf<CAdministration.documents> mSetComplaint_DocRefs
ArrayOf<CAdministration.documents>* mGetComplaint_DocRefs
ArrayOf<CAdministration.images> mSetComplaint_ImageRefs
ArrayOf<CAdministration.images>* mGetComplaint_ImageRefs
ArrayOf<CAdministration.audio> mSetComplaint_AudioRefIds
ArrayOf<CAdministration.audio>* mGetComplaint_AudioRefIds
ArrayOf<CAdministration.video> mSetComplaint_VideoRefs
ArrayOf<CAdministration.video>* mGetComplaint_VideoRefs
const String& mSetCompliment_ComplimentId
String* mGetCompliment_ComplimentId
const String& mSetCompliment_ParticipantNameComplimenting
String* mGetCompliment_ParticipantNameComplimenting
const String& mSetCompliment_ParticipantIdComplimenting
String* mGetCompliment_ParticipantIdComplimenting
const String& mSetCompliment_Description
String* mGetCompliment_Description
Boolean mSetCompliment_NonTenantRelated
Boolean* mGetCompliment_NonTenantRelated
Boolean mSetCompliment_ProTenant
Boolean* mGetCompliment_ProTenant
Boolean mSetCompliment_ByTenant
Boolean* mGetCompliment_ByTenant
ArrayOf<const String&> mSetCompliment_DetailsInChronologicalOrder
ArrayOf<String>* mGetCompliment_DetailsInChronologicalOrder
ArrayOf<const String&> mSetCompliment_DatesTimesOfEvents
ArrayOf<String>* mGetCompliment_DatesTimesOfEvents
const String& mSetCompliment_CorroReceived
String* mGetCompliment_CorroReceived
ArrayOf<const String&> mSetCompliment_ResponseDocRefs
ArrayOf<String>* mGetCompliment_ResponseDocRefs
const String& mSetCompliment_RepliedWhen
String* mGetCompliment_RepliedWhen
ArrayOf<const String&> mSetCompliment_ResponsibilitiesParticpantsIds
ArrayOf<String>* mGetCompliment_ResponsibilitiesParticpantsIds
ArrayOf<const String&> mSetCompliment_ResponsibilitiesParticpantsNames
ArrayOf<String>* mGetCompliment_ResponsibilitiesParticpantsNames
ArrayOf<const String&> mSetCompliment_RequiredActions
ArrayOf<String>* mGetCompliment_RequiredActions
CRegister.businessChannelOwner mSetCompliment_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCompliment_BusinessChannelOwnerId
CAdministration.branch mSetCompliment_BranchId
CAdministration.branch* mGetCompliment_BranchId
CAdministration.department mSetCompliment_DeptId
CAdministration.department* mGetCompliment_DeptId
ArrayOf<CProperty.property> mSetCompliment_PropertyIds
ArrayOf<CProperty.property>* mGetCompliment_PropertyIds
ArrayOf<CProperty.propertyOwner> mSetCompliment_PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetCompliment_PropertyOwnerIds
ArrayOf<CAdministration.service> mSetCompliment_ServiceIdsInvolved
ArrayOf<CAdministration.service>* mGetCompliment_ServiceIdsInvolved
ArrayOf<CAdministration.item> mSetCompliment_ItemiIds
ArrayOf<CAdministration.item>* mGetCompliment_ItemiIds
ArrayOf<CAdministration.job> mSetCompliment_JobIds
ArrayOf<CAdministration.job>* mGetCompliment_JobIds
ArrayOf<CProperty.tenant> mSetCompliment_TenancyId
ArrayOf<CProperty.tenant>* mGetCompliment_TenancyId
ArrayOf<CCustomer.customer> mSetCompliment_CustomerIds
ArrayOf<CCustomer.customer>* mGetCompliment_CustomerIds
ArrayOf<CAdministration.staff> mSetCompliment_EmployeeIds
ArrayOf<CAdministration.staff>* mGetCompliment_EmployeeIds
ArrayOf<CStakeholder.community> mSetCompliment_CommunityIds
ArrayOf<CStakeholder.community>* mGetCompliment_CommunityIds
ArrayOf<CStakeholder.media> mSetCompliment_MediaIds
ArrayOf<CStakeholder.media>* mGetCompliment_MediaIds
ArrayOf<CSupplier.supplier> mSetCompliment_SupplierIds
ArrayOf<CSupplier.supplier>* mGetCompliment_SupplierIds
ArrayOf<CStakeholder.partner> mSetCompliment_PartnerIds
ArrayOf<CStakeholder.partner>* mGetCompliment_PartnerIds
ArrayOf<CRegulator.nCAT> mSetCompliment_TribunalIds
ArrayOf<CRegulator.nCAT>* mGetCompliment_TribunalIds
ArrayOf<CStakeholder.tICA> mSetCompliment_TicaIds
ArrayOf<CStakeholder.tICA>* mGetCompliment_TicaIds
ArrayOf<CAdministration.documents> mSetCompliment_DocRefIds
ArrayOf<CAdministration.documents>* mGetCompliment_DocRefIds
ArrayOf<CAdministration.images> mSetCompliment_ImageRefIds
ArrayOf<CAdministration.images>* mGetCompliment_ImageRefIds
ArrayOf<CAdministration.audio> mSetCompliment_AudioRefIds
ArrayOf<CAdministration.audio>* mGetCompliment_AudioRefIds
ArrayOf<CAdministration.video> mSetCompliment_VideoRefIds
ArrayOf<CAdministration.video>* mGetCompliment_VideoRefIds
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

