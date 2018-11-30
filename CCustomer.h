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
  

   CARAPI SetCustomer.CustomerId(
     /* [in] */ const String& CCustomer.customer.customerId);

    CARAPI GetCustomer.CustomerId(
     /* [out] */ String* CCustomer.customer.customerId);


   CARAPI SetCustomer.LinkedToThisBusinessChannelOwnerId(
     /* [in] */ const String& CCustomer.customer.linkedToThisBusinessChannelOwnerId);

    CARAPI GetCustomer.LinkedToThisBusinessChannelOwnerId(
     /* [out] */ String* CCustomer.customer.linkedToThisBusinessChannelOwnerId);


   CARAPI SetCustomer.Relationship(
     /* [in] */ CHelper.relationship CCustomer.customer.relationship);

    CARAPI GetCustomer.Relationship(
     /* [out] */ CHelper.relationship* CCustomer.customer.relationship);


   CARAPI SetCustomer.CustomerTypesIds(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.customerTypesIds);

    CARAPI GetCustomer.CustomerTypesIds(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.customerTypesIds);


   CARAPI SetCustomer.OurBranchId(
     /* [in] */ const String& CCustomer.customer.ourBranchId);

    CARAPI GetCustomer.OurBranchId(
     /* [out] */ String* CCustomer.customer.ourBranchId);


   CARAPI SetCustomer.FirstName(
     /* [in] */ const String& CCustomer.customer.firstName);

    CARAPI GetCustomer.FirstName(
     /* [out] */ String* CCustomer.customer.firstName);


   CARAPI SetCustomer.LastName(
     /* [in] */ const String& CCustomer.customer.lastName);

    CARAPI GetCustomer.LastName(
     /* [out] */ String* CCustomer.customer.lastName);


   CARAPI SetCustomer.ResidentialAddress(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.residentialAddress);

    CARAPI GetCustomer.ResidentialAddress(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.residentialAddress);


   CARAPI SetCustomer.PostalAddress(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.postalAddress);

    CARAPI GetCustomer.PostalAddress(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.postalAddress);


   CARAPI SetCustomer.DeliveryAddress(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.deliveryAddress);

    CARAPI GetCustomer.DeliveryAddress(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.deliveryAddress);


   CARAPI SetCustomer.BillingAddress(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.billingAddress);

    CARAPI GetCustomer.BillingAddress(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.billingAddress);


   CARAPI SetCustomer.Email(
     /* [in] */ const String& CCustomer.customer.email);

    CARAPI GetCustomer.Email(
     /* [out] */ String* CCustomer.customer.email);


   CARAPI SetCustomer.HomePhone(
     /* [in] */ Int32 CCustomer.customer.homePhone);

    CARAPI GetCustomer.HomePhone(
     /* [out] */ Int32* CCustomer.customer.homePhone);


   CARAPI SetCustomer.MobilePhone(
     /* [in] */ Int32 CCustomer.customer.mobilePhone);

    CARAPI GetCustomer.MobilePhone(
     /* [out] */ Int32* CCustomer.customer.mobilePhone);


   CARAPI SetCustomer.WorkPhone(
     /* [in] */ Int32 CCustomer.customer.workPhone);

    CARAPI GetCustomer.WorkPhone(
     /* [out] */ Int32* CCustomer.customer.workPhone);


   CARAPI SetCustomer.AmenitiesRequired(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.amenitiesRequired);

    CARAPI GetCustomer.AmenitiesRequired(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.amenitiesRequired);


   CARAPI SetCustomer.StreetsDesired(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.streetsDesired);

    CARAPI GetCustomer.StreetsDesired(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.streetsDesired);


   CARAPI SetCustomer.PostcodesDesired(
     /* [in] */ ArrayOf<Int32> CCustomer.customer.postcodesDesired);

    CARAPI GetCustomer.PostcodesDesired(
     /* [out, callee] */ ArrayOf<Int32>* CCustomer.customer.postcodesDesired);


   CARAPI SetCustomer.BedroomsRequired(
     /* [in] */ Int32 CCustomer.customer.bedroomsRequired);

    CARAPI GetCustomer.BedroomsRequired(
     /* [out] */ Int32* CCustomer.customer.bedroomsRequired);


   CARAPI SetCustomer.MaxPriceOffering(
     /* [in] */ Double CCustomer.customer.maxPriceOffering);

    CARAPI GetCustomer.MaxPriceOffering(
     /* [out] */ Double* CCustomer.customer.maxPriceOffering);


   CARAPI SetCustomer.MinPriceOffering(
     /* [in] */ Double CCustomer.customer.minPriceOffering);

    CARAPI GetCustomer.MinPriceOffering(
     /* [out] */ Double* CCustomer.customer.minPriceOffering);


   CARAPI SetCustomer.MaxPriceAsking(
     /* [in] */ ArrayOf<Double> CCustomer.customer.maxPriceAsking);

    CARAPI GetCustomer.MaxPriceAsking(
     /* [out, callee] */ ArrayOf<Double>* CCustomer.customer.maxPriceAsking);


   CARAPI SetCustomer.MinPriceAsking(
     /* [in] */ ArrayOf<Double> CCustomer.customer.minPriceAsking);

    CARAPI GetCustomer.MinPriceAsking(
     /* [out, callee] */ ArrayOf<Double>* CCustomer.customer.minPriceAsking);


   CARAPI SetCustomer.CentrelinkCRN(
     /* [in] */ const String& CCustomer.customer.centrelinkCRN);

    CARAPI GetCustomer.CentrelinkCRN(
     /* [out] */ String* CCustomer.customer.centrelinkCRN);


   CARAPI SetCustomer.ATOTFN(
     /* [in] */ Int32 CCustomer.customer.aTOTFN);

    CARAPI GetCustomer.ATOTFN(
     /* [out] */ Int32* CCustomer.customer.aTOTFN);


   CARAPI SetCustomer.ABN(
     /* [in] */ const String& CCustomer.customer.aBN);

    CARAPI GetCustomer.ABN(
     /* [out] */ String* CCustomer.customer.aBN);


   CARAPI SetCustomer.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CCustomer.customer.contactedWithDetails);

    CARAPI GetCustomer.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CCustomer.customer.contactedWithDetails);


   CARAPI SetCustomer.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.customer.businessChannelOwnerId);

    CARAPI GetCustomer.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.customer.businessChannelOwnerId);


   CARAPI SetCustomer.PropertyOwnerIds(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CCustomer.customer.propertyOwnerIds);

    CARAPI GetCustomer.PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CCustomer.customer.propertyOwnerIds);


   CARAPI SetCustomer.CustPropJoinIds(
     /* [in] */ ArrayOf<CProperty.customerpropertyJoin> CCustomer.customer.custPropJoinIds);

    CARAPI GetCustomer.CustPropJoinIds(
     /* [out, callee] */ ArrayOf<CProperty.customerpropertyJoin>* CCustomer.customer.custPropJoinIds);


   CARAPI SetCustomer.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.customer.docRefIds);

    CARAPI GetCustomer.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.customer.docRefIds);


   CARAPI SetCustomer.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.customer.imageRefIds);

    CARAPI GetCustomer.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.customer.imageRefIds);


   CARAPI SetCustomer.TenancyId(
     /* [in] */ CProperty.tenant CCustomer.customer.tenancyId);

    CARAPI GetCustomer.TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.customer.tenancyId);


   CARAPI SetCustomer.ApplicantId(
     /* [in] */ CCustomer.applicant CCustomer.customer.applicantId);

    CARAPI GetCustomer.ApplicantId(
     /* [out] */ CCustomer.applicant* CCustomer.customer.applicantId);


   CARAPI SetCustomerType.CustomerTypeId(
     /* [in] */ const String& CCustomer.customerType.customerTypeId);

    CARAPI GetCustomerType.CustomerTypeId(
     /* [out] */ String* CCustomer.customerType.customerTypeId);


   CARAPI SetCustomerType.Description(
     /* [in] */ const String& CCustomer.customerType.description);

    CARAPI GetCustomerType.Description(
     /* [out] */ String* CCustomer.customerType.description);


   CARAPI SetCustomerType.CustTypeName(
     /* [in] */ const String& CCustomer.customerType.custTypeName);

    CARAPI GetCustomerType.CustTypeName(
     /* [out] */ String* CCustomer.customerType.custTypeName);


   CARAPI SetCustomerType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.customerType.businessChannelOwnerId);

    CARAPI GetCustomerType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.customerType.businessChannelOwnerId);


   CARAPI SetCustomerType.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.customerType.docRefs);

    CARAPI GetCustomerType.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.customerType.docRefs);


   CARAPI SetCustomerType.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.customerType.imageRefs);

    CARAPI GetCustomerType.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.customerType.imageRefs);


   CARAPI SetCustomerType.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CCustomer.customerType.audioRefIds);

    CARAPI GetCustomerType.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CCustomer.customerType.audioRefIds);


   CARAPI SetCustomerType.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CCustomer.customerType.videoRefs);

    CARAPI GetCustomerType.VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CCustomer.customerType.videoRefs);


   CARAPI SetCustomerCustomerJoin.CustCustomerJoinId(
     /* [in] */ const String& CCustomer.customerCustomerJoin.custCustomerJoinId);

    CARAPI GetCustomerCustomerJoin.CustCustomerJoinId(
     /* [out] */ String* CCustomer.customerCustomerJoin.custCustomerJoinId);


   CARAPI SetCustomerCustomerJoin.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CCustomer.customerCustomerJoin.customerIds);

    CARAPI GetCustomerCustomerJoin.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CCustomer.customerCustomerJoin.customerIds);


   CARAPI SetCustomerCustomerJoin.PercentageShares(
     /* [in] */ ArrayOf<Double> CCustomer.customerCustomerJoin.percentageShares);

    CARAPI GetCustomerCustomerJoin.PercentageShares(
     /* [out, callee] */ ArrayOf<Double>* CCustomer.customerCustomerJoin.percentageShares);


   CARAPI SetCustomerCustomerJoin.PropertyId(
     /* [in] */ ArrayOf<CProperty.property> CCustomer.customerCustomerJoin.propertyIds);

    CARAPI GetCustomerCustomerJoin.PropertyId(
     /* [out, callee] */ ArrayOf<CProperty.property>* CCustomer.customerCustomerJoin.propertyIds);


   CARAPI SetCustomerCustomerJoin.ProjectId(
     /* [in] */ ArrayOf<CProperty.project> CCustomer.customerCustomerJoin.projectIds);

    CARAPI GetCustomerCustomerJoin.ProjectId(
     /* [out, callee] */ ArrayOf<CProperty.project>* CCustomer.customerCustomerJoin.projectIds);


   CARAPI SetCustomerCustomerJoin.ProgramId(
     /* [in] */ ArrayOf<CProperty.program> CCustomer.customerCustomerJoin.programIds);

    CARAPI GetCustomerCustomerJoin.ProgramId(
     /* [out, callee] */ ArrayOf<CProperty.program>* CCustomer.customerCustomerJoin.programIds);


   CARAPI SetCustomerCustomerJoin.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.customerCustomerJoin.businessChannelOwnerId);

    CARAPI GetCustomerCustomerJoin.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.customerCustomerJoin.businessChannelOwnerId);


   CARAPI SetApplicant.ApplicantId(
     /* [in] */ const String& CCustomer.applicant.applicantId);

    CARAPI GetApplicant.ApplicantId(
     /* [out] */ String* CCustomer.applicant.applicantId);


   CARAPI SetApplicant.PostcodesAppliedFor(
     /* [in] */ ArrayOf<Int32> CCustomer.applicant.postcodesAppliedFor);

    CARAPI GetApplicant.PostcodesAppliedFor(
     /* [out, callee] */ ArrayOf<Int32>* CCustomer.applicant.postcodesAppliedFor);


   CARAPI SetApplicant.BedroomsSought(
     /* [in] */ Int32 CCustomer.applicant.bedroomsSought);

    CARAPI GetApplicant.BedroomsSought(
     /* [out] */ Int32* CCustomer.applicant.bedroomsSought);


   CARAPI SetApplicant.AmenitiesRequested(
     /* [in] */ ArrayOf<const String&> CCustomer.applicant.amenitiesRequested);

    CARAPI GetApplicant.AmenitiesRequested(
     /* [out, callee] */ ArrayOf<String>* CCustomer.applicant.amenitiesRequested);


   CARAPI SetApplicant.FirstName(
     /* [in] */ const String& CCustomer.applicant.firstName);

    CARAPI GetApplicant.FirstName(
     /* [out] */ String* CCustomer.applicant.firstName);


   CARAPI SetApplicant.LastName(
     /* [in] */ const String& CCustomer.applicant.lastName);

    CARAPI GetApplicant.LastName(
     /* [out] */ String* CCustomer.applicant.lastName);


   CARAPI SetApplicant.ResidentialAddress(
     /* [in] */ const String& CCustomer.applicant.residentialAddress);

    CARAPI GetApplicant.ResidentialAddress(
     /* [out] */ String* CCustomer.applicant.residentialAddress);


   CARAPI SetApplicant.PostalAddress(
     /* [in] */ const String& CCustomer.applicant.postalAddress);

    CARAPI GetApplicant.PostalAddress(
     /* [out] */ String* CCustomer.applicant.postalAddress);


   CARAPI SetApplicant.Email(
     /* [in] */ const String& CCustomer.applicant.email);

    CARAPI GetApplicant.Email(
     /* [out] */ String* CCustomer.applicant.email);


   CARAPI SetApplicant.HomePhone(
     /* [in] */ Int32 CCustomer.applicant.homePhone);

    CARAPI GetApplicant.HomePhone(
     /* [out] */ Int32* CCustomer.applicant.homePhone);


   CARAPI SetApplicant.MobilePhone(
     /* [in] */ Int32 CCustomer.applicant.mobilePhone);

    CARAPI GetApplicant.MobilePhone(
     /* [out] */ Int32* CCustomer.applicant.mobilePhone);


   CARAPI SetApplicant.WorkPhone(
     /* [in] */ Int32 CCustomer.applicant.workPhone);

    CARAPI GetApplicant.WorkPhone(
     /* [out] */ Int32* CCustomer.applicant.workPhone);


   CARAPI SetApplicant.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CCustomer.applicant.contactedWithDetails);

    CARAPI GetApplicant.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CCustomer.applicant.contactedWithDetails);


   CARAPI SetApplicant.ApplicationId(
     /* [in] */ CCustomer.application CCustomer.applicant.ApplicationId);

    CARAPI GetApplicant.ApplicationId(
     /* [out] */ CCustomer.application* CCustomer.applicant.ApplicationId);


   CARAPI SetApplicant.BranchId(
     /* [in] */ CAdministration.branch CCustomer.applicant.branchId);

    CARAPI GetApplicant.BranchId(
     /* [out] */ CAdministration.branch* CCustomer.applicant.branchId);


   CARAPI SetApplicant.CustomerId(
     /* [in] */ CCustomer.customer CCustomer.applicant.customerId);

    CARAPI GetApplicant.CustomerId(
     /* [out] */ CCustomer.customer* CCustomer.applicant.customerId);


   CARAPI SetApplicant.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CCustomer.applicant.propertyIds);

    CARAPI GetApplicant.PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CCustomer.applicant.propertyIds);


   CARAPI SetApplicant.TenancyId(
     /* [in] */ CProperty.tenant CCustomer.applicant.tenancyId);

    CARAPI GetApplicant.TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.applicant.tenancyId);


   CARAPI SetApplicant.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.applicant.docRefIds);

    CARAPI GetApplicant.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.applicant.docRefIds);


   CARAPI SetApplicant.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.applicant.imageRefIds);

    CARAPI GetApplicant.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.applicant.imageRefIds);


   CARAPI SetApplicant.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.applicant.businessChannelOwnerId);

    CARAPI GetApplicant.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.applicant.businessChannelOwnerId);


   CARAPI SetApplication.ApplicationId(
     /* [in] */ const String& CCustomer.application.applicationId);

    CARAPI GetApplication.ApplicationId(
     /* [out] */ String* CCustomer.application.applicationId);


   CARAPI SetApplication.SocialHousingApplication(
     /* [in] */ Boolean CCustomer.application.socialHousingApplication);

    CARAPI GetApplication.SocialHousingApplication(
     /* [out] */ Boolean* CCustomer.application.socialHousingApplication);


   CARAPI SetApplication.NDIS(
     /* [in] */ Boolean CCustomer.application.nDIS);

    CARAPI GetApplication.NDIS(
     /* [out] */ Boolean* CCustomer.application.nDIS);


   CARAPI SetApplication.AffordableHousingApplication(
     /* [in] */ Boolean CCustomer.application.affordableHousingApplication);

    CARAPI GetApplication.AffordableHousingApplication(
     /* [out] */ Boolean* CCustomer.application.affordableHousingApplication);


   CARAPI SetApplication.SharedEquityHousingApplication(
     /* [in] */ Boolean CCustomer.application.sharedEquityHousingApplication);

    CARAPI GetApplication.SharedEquityHousingApplication(
     /* [out] */ Boolean* CCustomer.application.sharedEquityHousingApplication);


   CARAPI SetApplication.RentToBuyApplication(
     /* [in] */ Boolean CCustomer.application.rentToBuyApplication);

    CARAPI GetApplication.RentToBuyApplication(
     /* [out] */ Boolean* CCustomer.application.rentToBuyApplication);


   CARAPI SetApplication.MarketRateHousingApplication(
     /* [in] */ Boolean CCustomer.application.marketRateHousingApplication);

    CARAPI GetApplication.MarketRateHousingApplication(
     /* [out] */ Boolean* CCustomer.application.marketRateHousingApplication);


   CARAPI SetApplication.HeadApplicantFirstName(
     /* [in] */ const String& CCustomer.application.headApplicantFirstName);

    CARAPI GetApplication.HeadApplicantFirstName(
     /* [out] */ String* CCustomer.application.headApplicantFirstName);


   CARAPI SetApplication.HeadApplicantLastName(
     /* [in] */ const String& CCustomer.application.headApplicantLastName);

    CARAPI GetApplication.HeadApplicantLastName(
     /* [out] */ String* CCustomer.application.headApplicantLastName);


   CARAPI SetApplication.HeadApplicantAddressLine1(
     /* [in] */ const String& CCustomer.application.headApplicantAddressLine1);

    CARAPI GetApplication.HeadApplicantAddressLine1(
     /* [out] */ String* CCustomer.application.headApplicantAddressLine1);


   CARAPI SetApplication.HeadApplicantAddressLine2(
     /* [in] */ const String& CCustomer.application.headApplicantAddressLine2);

    CARAPI GetApplication.HeadApplicantAddressLine2(
     /* [out] */ String* CCustomer.application.headApplicantAddressLine2);


   CARAPI SetApplication.HeadApplicantSuburb(
     /* [in] */ const String& CCustomer.application.headApplicantSuburb);

    CARAPI GetApplication.HeadApplicantSuburb(
     /* [out] */ String* CCustomer.application.headApplicantSuburb);


   CARAPI SetApplication.HeadApplicantPostcode(
     /* [in] */ const String& CCustomer.application.headApplicantPostcode);

    CARAPI GetApplication.HeadApplicantPostcode(
     /* [out] */ String* CCustomer.application.headApplicantPostcode);


   CARAPI SetApplication.HeadApplicantHomePhone(
     /* [in] */ const String& CCustomer.application.headApplicantHomePhone);

    CARAPI GetApplication.HeadApplicantHomePhone(
     /* [out] */ String* CCustomer.application.headApplicantHomePhone);


   CARAPI SetApplication.HeadApplicantWorkPhone(
     /* [in] */ const String& CCustomer.application.headApplicantWorkPhone);

    CARAPI GetApplication.HeadApplicantWorkPhone(
     /* [out] */ String* CCustomer.application.headApplicantWorkPhone);


   CARAPI SetApplication.HeadApplicantMobilePhone(
     /* [in] */ const String& CCustomer.application.headApplicantMobilePhone);

    CARAPI GetApplication.HeadApplicantMobilePhone(
     /* [out] */ String* CCustomer.application.headApplicantMobilePhone);


   CARAPI SetApplication.HeadApplicantEmail(
     /* [in] */ const String& CCustomer.application.headApplicantEmail);

    CARAPI GetApplication.HeadApplicantEmail(
     /* [out] */ String* CCustomer.application.headApplicantEmail);


   CARAPI SetApplication.HeadApplicantDOB(
     /* [in] */ const String& CCustomer.application.headApplicantDOB);

    CARAPI GetApplication.HeadApplicantDOB(
     /* [out] */ String* CCustomer.application.headApplicantDOB);


   CARAPI SetApplication.StreetsSought(
     /* [in] */ ArrayOf<const String&> CCustomer.application.streetsSought);

    CARAPI GetApplication.StreetsSought(
     /* [out, callee] */ ArrayOf<String>* CCustomer.application.streetsSought);


   CARAPI SetApplication.PostcodesSought(
     /* [in] */ ArrayOf<Int32> CCustomer.application.postcodesSought);

    CARAPI GetApplication.PostcodesSought(
     /* [out, callee] */ ArrayOf<Int32>* CCustomer.application.postcodesSought);


   CARAPI SetApplication.BedroomRangeRequired(
     /* [in] */ ArrayOf<Int32> CCustomer.application.bedroomRangeRequired);

    CARAPI GetApplication.BedroomRangeRequired(
     /* [out, callee] */ ArrayOf<Int32>* CCustomer.application.bedroomRangeRequired);


   CARAPI SetApplication.AmenitiesRequested(
     /* [in] */ ArrayOf<const String&> CCustomer.application.amenitiesRequested);

    CARAPI GetApplication.AmenitiesRequested(
     /* [out, callee] */ ArrayOf<String>* CCustomer.application.amenitiesRequested);


   CARAPI SetApplication.RangeForRent(
     /* [in] */ ArrayOf<Double> CCustomer.application.rangeForRent);

    CARAPI GetApplication.RangeForRent(
     /* [out, callee] */ ArrayOf<Double>* CCustomer.application.rangeForRent);


   CARAPI SetApplication.Interval(
     /* [in] */ CHelper.billingInterval CCustomer.application.interval);

    CARAPI GetApplication.Interval(
     /* [out] */ CHelper.billingInterval* CCustomer.application.interval);


   CARAPI SetApplication.SecondaryApplicantFirstNames(
     /* [in] */ ArrayOf<const String&> CCustomer.application.secondaryApplicantFirstNames);

    CARAPI GetApplication.SecondaryApplicantFirstNames(
     /* [out, callee] */ ArrayOf<String>* CCustomer.application.secondaryApplicantFirstNames);


   CARAPI SetApplication.SecondaryApplicantLastNames(
     /* [in] */ ArrayOf<const String&> CCustomer.application.secondaryApplicantLastNames);

    CARAPI GetApplication.SecondaryApplicantLastNames(
     /* [out, callee] */ ArrayOf<String>* CCustomer.application.secondaryApplicantLastNames);


   CARAPI SetApplication.PartnerIds(
     /* [in] */ ArrayOf<const String&> CCustomer.application.partnerIds);

    CARAPI GetApplication.PartnerIds(
     /* [out, callee] */ ArrayOf<String>* CCustomer.application.partnerIds);


   CARAPI SetApplication.ApplicantIds(
     /* [in] */ ArrayOf<CCustomer.applicant> CCustomer.application.applicantIds);

    CARAPI GetApplication.ApplicantIds(
     /* [out, callee] */ ArrayOf<CCustomer.applicant>* CCustomer.application.applicantIds);


   CARAPI SetApplication.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CCustomer.application.customerIds);

    CARAPI GetApplication.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CCustomer.application.customerIds);


   CARAPI SetApplication.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CCustomer.application.propertyIds);

    CARAPI GetApplication.PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CCustomer.application.propertyIds);


   CARAPI SetApplication.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.application.businessChannelOwnerId);

    CARAPI GetApplication.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.application.businessChannelOwnerId);


   CARAPI SetApplication.BranchId(
     /* [in] */ CAdministration.branch CCustomer.application.branchId);

    CARAPI GetApplication.BranchId(
     /* [out] */ CAdministration.branch* CCustomer.application.branchId);


   CARAPI SetApplication.DeptId(
     /* [in] */ CAdministration.department CCustomer.application.deptId);

    CARAPI GetApplication.DeptId(
     /* [out] */ CAdministration.department* CCustomer.application.deptId);


   CARAPI SetApplication.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.application.docRefs);

    CARAPI GetApplication.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.application.docRefs);


   CARAPI SetApplication.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.application.imageRefs);

    CARAPI GetApplication.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.application.imageRefs);


   CARAPI SetApplication.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CCustomer.application.audioRefIds);

    CARAPI GetApplication.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CCustomer.application.audioRefIds);


   CARAPI SetStudentAccommodationBookings.BookingId(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.bookingId);

    CARAPI GetStudentAccommodationBookings.BookingId(
     /* [out] */ String* CCustomer.studentAccommodationBookings.bookingId);


   CARAPI SetStudentAccommodationBookings.PropertyAddressString(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.propertyAddressString);

    CARAPI GetStudentAccommodationBookings.PropertyAddressString(
     /* [out] */ String* CCustomer.studentAccommodationBookings.propertyAddressString);


   CARAPI SetStudentAccommodationBookings.UnitNumber(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.unitNumber);

    CARAPI GetStudentAccommodationBookings.UnitNumber(
     /* [out] */ String* CCustomer.studentAccommodationBookings.unitNumber);


   CARAPI SetStudentAccommodationBookings.PreInspected(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.preInspected);

    CARAPI GetStudentAccommodationBookings.PreInspected(
     /* [out] */ String* CCustomer.studentAccommodationBookings.preInspected);


   CARAPI SetStudentAccommodationBookings.DateLeaseStarts(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.dateLeaseStarts);

    CARAPI GetStudentAccommodationBookings.DateLeaseStarts(
     /* [out] */ String* CCustomer.studentAccommodationBookings.dateLeaseStarts);


   CARAPI SetStudentAccommodationBookings.MidTermInspections(
     /* [in] */ ArrayOf<const String&> CCustomer.studentAccommodationBookings.midTermInspections);

    CARAPI GetStudentAccommodationBookings.MidTermInspections(
     /* [out, callee] */ ArrayOf<String>* CCustomer.studentAccommodationBookings.midTermInspections);


   CARAPI SetStudentAccommodationBookings.DateLeaseEnds(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.dateLeaseEnds);

    CARAPI GetStudentAccommodationBookings.DateLeaseEnds(
     /* [out] */ String* CCustomer.studentAccommodationBookings.dateLeaseEnds);


   CARAPI SetStudentAccommodationBookings.PostInspected(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.postInspected);

    CARAPI GetStudentAccommodationBookings.PostInspected(
     /* [out] */ String* CCustomer.studentAccommodationBookings.postInspected);


   CARAPI SetStudentAccommodationBookings.PaymentInterval(
     /* [in] */ CHelper.billingInterval CCustomer.studentAccommodationBookings.billingInterval);

    CARAPI GetStudentAccommodationBookings.PaymentInterval(
     /* [out] */ CHelper.billingInterval* CCustomer.studentAccommodationBookings.billingInterval);


   CARAPI SetStudentAccommodationBookings.RentalAmountAgreed(
     /* [in] */ Double CCustomer.studentAccommodationBookings.rentalAmountAgreed);

    CARAPI GetStudentAccommodationBookings.RentalAmountAgreed(
     /* [out] */ Double* CCustomer.studentAccommodationBookings.rentalAmountAgreed);


   CARAPI SetStudentAccommodationBookings.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.studentAccommodationBookings.businessChannelOwnerId);

    CARAPI GetStudentAccommodationBookings.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.studentAccommodationBookings.businessChannelOwnerId);


   CARAPI SetStudentAccommodationBookings.BranchId(
     /* [in] */ CAdministration.branch CCustomer.studentAccommodationBookings.branchId);

    CARAPI GetStudentAccommodationBookings.BranchId(
     /* [out] */ CAdministration.branch* CCustomer.studentAccommodationBookings.branchId);


   CARAPI SetStudentAccommodationBookings.DeptId(
     /* [in] */ CAdministration.department CCustomer.studentAccommodationBookings.deptId);

    CARAPI GetStudentAccommodationBookings.DeptId(
     /* [out] */ CAdministration.department* CCustomer.studentAccommodationBookings.deptId);


   CARAPI SetStudentAccommodationBookings.PropertyId(
     /* [in] */ CProperty.property CCustomer.studentAccommodationBookings.propertyId);

    CARAPI GetStudentAccommodationBookings.PropertyId(
     /* [out] */ CProperty.property* CCustomer.studentAccommodationBookings.propertyId);


   CARAPI SetStudentAccommodationBookings.ApplicationId(
     /* [in] */ CCustomer.application CCustomer.studentAccommodationBookings.applicationId);

    CARAPI GetStudentAccommodationBookings.ApplicationId(
     /* [out] */ CCustomer.application* CCustomer.studentAccommodationBookings.applicationId);


   CARAPI SetStudentAccommodationBookings.ApplicantId(
     /* [in] */ CCustomer.applicant CCustomer.studentAccommodationBookings.applicantId);

    CARAPI GetStudentAccommodationBookings.ApplicantId(
     /* [out] */ CCustomer.applicant* CCustomer.studentAccommodationBookings.applicantId);


   CARAPI SetStudentAccommodationBookings.AllocationId(
     /* [in] */ CProperty.allocation CCustomer.studentAccommodationBookings.allocationId);

    CARAPI GetStudentAccommodationBookings.AllocationId(
     /* [out] */ CProperty.allocation* CCustomer.studentAccommodationBookings.allocationId);


   CARAPI SetStudentAccommodationBookings.TenancyId(
     /* [in] */ CProperty.tenant CCustomer.studentAccommodationBookings.tenancyId);

    CARAPI GetStudentAccommodationBookings.TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.studentAccommodationBookings.tenancyId);


   CARAPI SetStudentAccommodationBookings.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.studentAccommodationBookings.docRefIds);

    CARAPI GetStudentAccommodationBookings.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.studentAccommodationBookings.docRefIds);


   CARAPI SetStudentAccommodationBookings.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.studentAccommodationBookings.imageRefIds);

    CARAPI GetStudentAccommodationBookings.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.studentAccommodationBookings.imageRefIds);


   CARAPI SetStudentAccommodationBookings.BookingId(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.bookingId);

    CARAPI GetStudentAccommodationBookings.BookingId(
     /* [out] */ String* CCustomer.studentAccommodationBookings.bookingId);


   CARAPI SetStudentAccommodationBookings.PropertyAddressString(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.propertyAddressString);

    CARAPI GetStudentAccommodationBookings.PropertyAddressString(
     /* [out] */ String* CCustomer.studentAccommodationBookings.propertyAddressString);


   CARAPI SetStudentAccommodationBookings.UnitNumber(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.unitNumber);

    CARAPI GetStudentAccommodationBookings.UnitNumber(
     /* [out] */ String* CCustomer.studentAccommodationBookings.unitNumber);


   CARAPI SetStudentAccommodationBookings.PreInspected(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.preInspected);

    CARAPI GetStudentAccommodationBookings.PreInspected(
     /* [out] */ String* CCustomer.studentAccommodationBookings.preInspected);


   CARAPI SetStudentAccommodationBookings.DateLeaseStarts(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.dateLeaseStarts);

    CARAPI GetStudentAccommodationBookings.DateLeaseStarts(
     /* [out] */ String* CCustomer.studentAccommodationBookings.dateLeaseStarts);


   CARAPI SetStudentAccommodationBookings.MidTermInspections(
     /* [in] */ ArrayOf<const String&> CCustomer.studentAccommodationBookings.midTermInspections);

    CARAPI GetStudentAccommodationBookings.MidTermInspections(
     /* [out, callee] */ ArrayOf<String>* CCustomer.studentAccommodationBookings.midTermInspections);


   CARAPI SetStudentAccommodationBookings.DateLeaseEnds(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.dateLeaseEnds);

    CARAPI GetStudentAccommodationBookings.DateLeaseEnds(
     /* [out] */ String* CCustomer.studentAccommodationBookings.dateLeaseEnds);


   CARAPI SetStudentAccommodationBookings.PostInspected(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.postInspected);

    CARAPI GetStudentAccommodationBookings.PostInspected(
     /* [out] */ String* CCustomer.studentAccommodationBookings.postInspected);


   CARAPI SetStudentAccommodationBookings.PaymentInterval(
     /* [in] */ CHelper.billingInterval CCustomer.studentAccommodationBookings.billingInterval);

    CARAPI GetStudentAccommodationBookings.PaymentInterval(
     /* [out] */ CHelper.billingInterval* CCustomer.studentAccommodationBookings.billingInterval);


   CARAPI SetStudentAccommodationBookings.RentalAmountAgreed(
     /* [in] */ Double CCustomer.studentAccommodationBookings.rentalAmountAgreed);

    CARAPI GetStudentAccommodationBookings.RentalAmountAgreed(
     /* [out] */ Double* CCustomer.studentAccommodationBookings.rentalAmountAgreed);


   CARAPI SetStudentAccommodationBookings.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.studentAccommodationBookings.businessChannelOwnerId);

    CARAPI GetStudentAccommodationBookings.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.studentAccommodationBookings.businessChannelOwnerId);


   CARAPI SetStudentAccommodationBookings.BranchId(
     /* [in] */ CAdministration.branch CCustomer.studentAccommodationBookings.branchId);

    CARAPI GetStudentAccommodationBookings.BranchId(
     /* [out] */ CAdministration.branch* CCustomer.studentAccommodationBookings.branchId);


   CARAPI SetStudentAccommodationBookings.DeptId(
     /* [in] */ CAdministration.department CCustomer.studentAccommodationBookings.deptId);

    CARAPI GetStudentAccommodationBookings.DeptId(
     /* [out] */ CAdministration.department* CCustomer.studentAccommodationBookings.deptId);


   CARAPI SetStudentAccommodationBookings.PropertyId(
     /* [in] */ CProperty.property CCustomer.studentAccommodationBookings.propertyId);

    CARAPI GetStudentAccommodationBookings.PropertyId(
     /* [out] */ CProperty.property* CCustomer.studentAccommodationBookings.propertyId);


   CARAPI SetStudentAccommodationBookings.ApplicationId(
     /* [in] */ CCustomer.application CCustomer.studentAccommodationBookings.applicationId);

    CARAPI GetStudentAccommodationBookings.ApplicationId(
     /* [out] */ CCustomer.application* CCustomer.studentAccommodationBookings.applicationId);


   CARAPI SetStudentAccommodationBookings.ApplicantId(
     /* [in] */ CCustomer.applicant CCustomer.studentAccommodationBookings.applicantId);

    CARAPI GetStudentAccommodationBookings.ApplicantId(
     /* [out] */ CCustomer.applicant* CCustomer.studentAccommodationBookings.applicantId);


   CARAPI SetStudentAccommodationBookings.AllocationId(
     /* [in] */ CProperty.allocation CCustomer.studentAccommodationBookings.allocationId);

    CARAPI GetStudentAccommodationBookings.AllocationId(
     /* [out] */ CProperty.allocation* CCustomer.studentAccommodationBookings.allocationId);


   CARAPI SetStudentAccommodationBookings.TenancyId(
     /* [in] */ CProperty.tenant CCustomer.studentAccommodationBookings.tenancyId);

    CARAPI GetStudentAccommodationBookings.TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.studentAccommodationBookings.tenancyId);


   CARAPI SetStudentAccommodationBookings.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.studentAccommodationBookings.docRefIds);

    CARAPI GetStudentAccommodationBookings.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.studentAccommodationBookings.docRefIds);


   CARAPI SetStudentAccommodationBookings.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.studentAccommodationBookings.imageRefIds);

    CARAPI GetStudentAccommodationBookings.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.studentAccommodationBookings.imageRefIds);


   CARAPI SetStudentAccommodationBookings.CustTenantJoinId(
     /* [in] */ const String& CCustomer.studentAccommodationBookings.custTenantJoinId);

    CARAPI GetStudentAccommodationBookings.CustTenantJoinId(
     /* [out] */ String* CCustomer.studentAccommodationBookings.custTenantJoinId);


   CARAPI SetStudentAccommodationBookings.CustomerId(
     /* [in] */ CCustomer.customer CCustomer.studentAccommodationBookings.customerId);

    CARAPI GetStudentAccommodationBookings.CustomerId(
     /* [out] */ CCustomer.customer* CCustomer.studentAccommodationBookings.customerId);


   CARAPI SetStudentAccommodationBookings.TenancyId(
     /* [in] */ CProperty.tenant CCustomer.studentAccommodationBookings.tenancyId);

    CARAPI GetStudentAccommodationBookings.TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.studentAccommodationBookings.tenancyId);


   CARAPI SetStudentAccommodationBookings.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.studentAccommodationBookings.businessChannelOwnerId);

    CARAPI GetStudentAccommodationBookings.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.studentAccommodationBookings.businessChannelOwnerId);



   CARAPI SetTemporaryAccommodationBookings.BookingId(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.bookingId);

    CARAPI GetTemporaryAccommodationBookings.BookingId(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.bookingId);


   CARAPI SetTemporaryAccommodationBookings.PropertyAddressString(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.propertyAddressString);

    CARAPI GetTemporaryAccommodationBookings.PropertyAddressString(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.propertyAddressString);


   CARAPI SetTemporaryAccommodationBookings.UnitNumber(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.unitNumber);

    CARAPI GetTemporaryAccommodationBookings.UnitNumber(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.unitNumber);


   CARAPI SetTemporaryAccommodationBookings.PreInspected(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.preInspected);

    CARAPI GetTemporaryAccommodationBookings.PreInspected(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.preInspected);


   CARAPI SetTemporaryAccommodationBookings.DateLeaseStarts(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.dateLeaseStarts);

    CARAPI GetTemporaryAccommodationBookings.DateLeaseStarts(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.dateLeaseStarts);


   CARAPI SetTemporaryAccommodationBookings.MidTermInspections(
     /* [in] */ ArrayOf<const String&> CCustomer.temporaryAccommodationBookings.midTermInspections);

    CARAPI GetTemporaryAccommodationBookings.MidTermInspections(
     /* [out, callee] */ ArrayOf<String>* CCustomer.temporaryAccommodationBookings.midTermInspections);


   CARAPI SetTemporaryAccommodationBookings.DateLeaseEnds(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.dateLeaseEnds);

    CARAPI GetTemporaryAccommodationBookings.DateLeaseEnds(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.dateLeaseEnds);


   CARAPI SetTemporaryAccommodationBookings.PostInspected(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.postInspected);

    CARAPI GetTemporaryAccommodationBookings.PostInspected(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.postInspected);


   CARAPI SetTemporaryAccommodationBookings.PaymentInterval(
     /* [in] */ CHelper.billingInterval CCustomer.temporaryAccommodationBookings.billingInterval);

    CARAPI GetTemporaryAccommodationBookings.PaymentInterval(
     /* [out] */ CHelper.billingInterval* CCustomer.temporaryAccommodationBookings.billingInterval);


   CARAPI SetTemporaryAccommodationBookings.RentalAmountAgreed(
     /* [in] */ Double CCustomer.temporaryAccommodationBookings.rentalAmountAgreed);

    CARAPI GetTemporaryAccommodationBookings.RentalAmountAgreed(
     /* [out] */ Double* CCustomer.temporaryAccommodationBookings.rentalAmountAgreed);


   CARAPI SetTemporaryAccommodationBookings.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);

    CARAPI GetTemporaryAccommodationBookings.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);


   CARAPI SetTemporaryAccommodationBookings.BranchId(
     /* [in] */ CAdministration.branch CCustomer.temporaryAccommodationBookings.branchId);

    CARAPI GetTemporaryAccommodationBookings.BranchId(
     /* [out] */ CAdministration.branch* CCustomer.temporaryAccommodationBookings.branchId);


   CARAPI SetTemporaryAccommodationBookings.DeptId(
     /* [in] */ CAdministration.department CCustomer.temporaryAccommodationBookings.deptId);

    CARAPI GetTemporaryAccommodationBookings.DeptId(
     /* [out] */ CAdministration.department* CCustomer.temporaryAccommodationBookings.deptId);


   CARAPI SetTemporaryAccommodationBookings.PropertyId(
     /* [in] */ CProperty.property CCustomer.temporaryAccommodationBookings.propertyId);

    CARAPI GetTemporaryAccommodationBookings.PropertyId(
     /* [out] */ CProperty.property* CCustomer.temporaryAccommodationBookings.propertyId);


   CARAPI SetTemporaryAccommodationBookings.ApplicationId(
     /* [in] */ CCustomer.application CCustomer.temporaryAccommodationBookings.applicationId);

    CARAPI GetTemporaryAccommodationBookings.ApplicationId(
     /* [out] */ CCustomer.application* CCustomer.temporaryAccommodationBookings.applicationId);


   CARAPI SetTemporaryAccommodationBookings.ApplicantId(
     /* [in] */ CCustomer.applicant CCustomer.temporaryAccommodationBookings.applicantId);

    CARAPI GetTemporaryAccommodationBookings.ApplicantId(
     /* [out] */ CCustomer.applicant* CCustomer.temporaryAccommodationBookings.applicantId);


   CARAPI SetTemporaryAccommodationBookings.AllocationId(
     /* [in] */ CProperty.allocation CCustomer.temporaryAccommodationBookings.allocationId);

    CARAPI GetTemporaryAccommodationBookings.AllocationId(
     /* [out] */ CProperty.allocation* CCustomer.temporaryAccommodationBookings.allocationId);


   CARAPI SetTemporaryAccommodationBookings.TenancyId(
     /* [in] */ CProperty.tenant CCustomer.temporaryAccommodationBookings.tenancyId);

    CARAPI GetTemporaryAccommodationBookings.TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.temporaryAccommodationBookings.tenancyId);


   CARAPI SetTemporaryAccommodationBookings.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.temporaryAccommodationBookings.docRefIds);

    CARAPI GetTemporaryAccommodationBookings.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.temporaryAccommodationBookings.docRefIds);


   CARAPI SetTemporaryAccommodationBookings.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.temporaryAccommodationBookings.imageRefIds);

    CARAPI GetTemporaryAccommodationBookings.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.temporaryAccommodationBookings.imageRefIds);


   CARAPI SetTemporaryAccommodationBookings.BookingId(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.bookingId);

    CARAPI GetTemporaryAccommodationBookings.BookingId(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.bookingId);


   CARAPI SetTemporaryAccommodationBookings.PropertyAddressString(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.propertyAddressString);

    CARAPI GetTemporaryAccommodationBookings.PropertyAddressString(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.propertyAddressString);


   CARAPI SetTemporaryAccommodationBookings.UnitNumber(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.unitNumber);

    CARAPI GetTemporaryAccommodationBookings.UnitNumber(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.unitNumber);


   CARAPI SetTemporaryAccommodationBookings.PreInspected(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.preInspected);

    CARAPI GetTemporaryAccommodationBookings.PreInspected(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.preInspected);


   CARAPI SetTemporaryAccommodationBookings.DateLeaseStarts(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.dateLeaseStarts);

    CARAPI GetTemporaryAccommodationBookings.DateLeaseStarts(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.dateLeaseStarts);


   CARAPI SetTemporaryAccommodationBookings.MidTermInspections(
     /* [in] */ ArrayOf<const String&> CCustomer.temporaryAccommodationBookings.midTermInspections);

    CARAPI GetTemporaryAccommodationBookings.MidTermInspections(
     /* [out, callee] */ ArrayOf<String>* CCustomer.temporaryAccommodationBookings.midTermInspections);


   CARAPI SetTemporaryAccommodationBookings.DateLeaseEnds(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.dateLeaseEnds);

    CARAPI GetTemporaryAccommodationBookings.DateLeaseEnds(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.dateLeaseEnds);


   CARAPI SetTemporaryAccommodationBookings.PostInspected(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.postInspected);

    CARAPI GetTemporaryAccommodationBookings.PostInspected(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.postInspected);


   CARAPI SetTemporaryAccommodationBookings.PaymentInterval(
     /* [in] */ CHelper.billingInterval CCustomer.temporaryAccommodationBookings.billingInterval);

    CARAPI GetTemporaryAccommodationBookings.PaymentInterval(
     /* [out] */ CHelper.billingInterval* CCustomer.temporaryAccommodationBookings.billingInterval);


   CARAPI SetTemporaryAccommodationBookings.RentalAmountAgreed(
     /* [in] */ Double CCustomer.temporaryAccommodationBookings.rentalAmountAgreed);

    CARAPI GetTemporaryAccommodationBookings.RentalAmountAgreed(
     /* [out] */ Double* CCustomer.temporaryAccommodationBookings.rentalAmountAgreed);


   CARAPI SetTemporaryAccommodationBookings.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);

    CARAPI GetTemporaryAccommodationBookings.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);


   CARAPI SetTemporaryAccommodationBookings.BranchId(
     /* [in] */ CAdministration.branch CCustomer.temporaryAccommodationBookings.branchId);

    CARAPI GetTemporaryAccommodationBookings.BranchId(
     /* [out] */ CAdministration.branch* CCustomer.temporaryAccommodationBookings.branchId);


   CARAPI SetTemporaryAccommodationBookings.DeptId(
     /* [in] */ CAdministration.department CCustomer.temporaryAccommodationBookings.deptId);

    CARAPI GetTemporaryAccommodationBookings.DeptId(
     /* [out] */ CAdministration.department* CCustomer.temporaryAccommodationBookings.deptId);


   CARAPI SetTemporaryAccommodationBookings.PropertyId(
     /* [in] */ CProperty.property CCustomer.temporaryAccommodationBookings.propertyId);

    CARAPI GetTemporaryAccommodationBookings.PropertyId(
     /* [out] */ CProperty.property* CCustomer.temporaryAccommodationBookings.propertyId);


   CARAPI SetTemporaryAccommodationBookings.ApplicationId(
     /* [in] */ CCustomer.application CCustomer.temporaryAccommodationBookings.applicationId);

    CARAPI GetTemporaryAccommodationBookings.ApplicationId(
     /* [out] */ CCustomer.application* CCustomer.temporaryAccommodationBookings.applicationId);


   CARAPI SetTemporaryAccommodationBookings.ApplicantId(
     /* [in] */ CCustomer.applicant CCustomer.temporaryAccommodationBookings.applicantId);

    CARAPI GetTemporaryAccommodationBookings.ApplicantId(
     /* [out] */ CCustomer.applicant* CCustomer.temporaryAccommodationBookings.applicantId);


   CARAPI SetTemporaryAccommodationBookings.AllocationId(
     /* [in] */ CProperty.allocation CCustomer.temporaryAccommodationBookings.allocationId);

    CARAPI GetTemporaryAccommodationBookings.AllocationId(
     /* [out] */ CProperty.allocation* CCustomer.temporaryAccommodationBookings.allocationId);


   CARAPI SetTemporaryAccommodationBookings.TenancyId(
     /* [in] */ CProperty.tenant CCustomer.temporaryAccommodationBookings.tenancyId);

    CARAPI GetTemporaryAccommodationBookings.TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.temporaryAccommodationBookings.tenancyId);


   CARAPI SetTemporaryAccommodationBookings.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.temporaryAccommodationBookings.docRefIds);

    CARAPI GetTemporaryAccommodationBookings.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.temporaryAccommodationBookings.docRefIds);


   CARAPI SetTemporaryAccommodationBookings.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.temporaryAccommodationBookings.imageRefIds);

    CARAPI GetTemporaryAccommodationBookings.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.temporaryAccommodationBookings.imageRefIds);


   CARAPI SetTemporaryAccommodationBookings.CustTenantJoinId(
     /* [in] */ const String& CCustomer.temporaryAccommodationBookings.custTenantJoinId);

    CARAPI GetTemporaryAccommodationBookings.CustTenantJoinId(
     /* [out] */ String* CCustomer.temporaryAccommodationBookings.custTenantJoinId);


   CARAPI SetTemporaryAccommodationBookings.CustomerId(
     /* [in] */ CCustomer.customer CCustomer.temporaryAccommodationBookings.customerId);

    CARAPI GetTemporaryAccommodationBookings.CustomerId(
     /* [out] */ CCustomer.customer* CCustomer.temporaryAccommodationBookings.customerId);


   CARAPI SetTemporaryAccommodationBookings.TenancyId(
     /* [in] */ CProperty.tenant CCustomer.temporaryAccommodationBookings.tenancyId);

    CARAPI GetTemporaryAccommodationBookings.TenancyId(
     /* [out] */ CProperty.tenant* CCustomer.temporaryAccommodationBookings.tenancyId);


   CARAPI SetTemporaryAccommodationBookings.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);

    CARAPI GetTemporaryAccommodationBookings.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.temporaryAccommodationBookings.businessChannelOwnerId);


   CARAPI SetCustomerTenantJoin.CustTenantJoinId(
     /* [in] */ const String& CCustomer.customerTenantJoin.custTenantJoinId);

    CARAPI GetCustomerTenantJoin.CustTenantJoinId(
     /* [out] */ String* CCustomer.customerTenantJoin.custTenantJoinId);


   CARAPI SetCustomerTenantJoin.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CCustomer.customerTenantJoin.customerIds);

    CARAPI GetCustomerTenantJoin.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CCustomer.customerTenantJoin.customerIds);


   CARAPI SetCustomerTenantJoin.TenancyId(
     /* [in] */ ArrayOf<Double> CCustomer.customerTenantJoin.tenancyId);

    CARAPI GetCustomerTenantJoin.TenancyId(
     /* [out, callee] */ ArrayOf<Double>* CCustomer.customerTenantJoin.tenancyId);


   CARAPI SetCustomerTenantJoin.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.customerTenantJoin.businessChannelOwnerId);

    CARAPI GetCustomerTenantJoin.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.customerTenantJoin.businessChannelOwnerId);



   CARAPI SetComplaint.ComplaintId(
     /* [in] */ const String& CCustomer.complaint.complaintId);

    CARAPI GetComplaint.ComplaintId(
     /* [out] */ String* CCustomer.complaint.complaintId);


   CARAPI SetComplaint.ParticipantNameComplainant(
     /* [in] */ const String& CCustomer.complaint.participantNameComplainant);

    CARAPI GetComplaint.ParticipantNameComplainant(
     /* [out] */ String* CCustomer.complaint.participantNameComplainant);


   CARAPI SetComplaint.ParticipantIdComplainant(
     /* [in] */ const String& CCustomer.complaint.participantIdComplainant);

    CARAPI GetComplaint.ParticipantIdComplainant(
     /* [out] */ String* CCustomer.complaint.participantIdComplainant);


   CARAPI SetComplaint.Description(
     /* [in] */ const String& CCustomer.complaint.description);

    CARAPI GetComplaint.Description(
     /* [out] */ String* CCustomer.complaint.description);


   CARAPI SetComplaint.NonTenantRelated(
     /* [in] */ Boolean CCustomer.complaint.nonTenantRelated);

    CARAPI GetComplaint.NonTenantRelated(
     /* [out] */ Boolean* CCustomer.complaint.nonTenantRelated);


   CARAPI SetComplaint.AgainstTenant(
     /* [in] */ Boolean CCustomer.complaint.againstTenant);

    CARAPI GetComplaint.AgainstTenant(
     /* [out] */ Boolean* CCustomer.complaint.againstTenant);


   CARAPI SetComplaint.ByTenant(
     /* [in] */ Boolean CCustomer.complaint.byTenant);

    CARAPI GetComplaint.ByTenant(
     /* [out] */ Boolean* CCustomer.complaint.byTenant);


   CARAPI SetComplaint.DetailsInChronologicalOrder(
     /* [in] */ ArrayOf<const String&> CCustomer.complaint.detailsInChronologicalOrder);

    CARAPI GetComplaint.DetailsInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* CCustomer.complaint.detailsInChronologicalOrder);


   CARAPI SetComplaint.DatesTimesOfEvents(
     /* [in] */ ArrayOf<const String&> CCustomer.complaint.datesTimesOfEvents);

    CARAPI GetComplaint.DatesTimesOfEvents(
     /* [out, callee] */ ArrayOf<String>* CCustomer.complaint.datesTimesOfEvents);


   CARAPI SetComplaint.RepliedWhen(
     /* [in] */ const String& CCustomer.complaint.repliedWhen);

    CARAPI GetComplaint.RepliedWhen(
     /* [out] */ String* CCustomer.complaint.repliedWhen);


   CARAPI SetComplaint.ResponsibilitiesParticpantsIds(
     /* [in] */ ArrayOf<const String&> CCustomer.complaint.responsibilitiesParticpantsIds);

    CARAPI GetComplaint.ResponsibilitiesParticpantsIds(
     /* [out, callee] */ ArrayOf<String>* CCustomer.complaint.responsibilitiesParticpantsIds);


   CARAPI SetComplaint.ResponsibilitiesParticpantsNames(
     /* [in] */ ArrayOf<const String&> CCustomer.complaint.responsibilitiesParticpantsNames);

    CARAPI GetComplaint.ResponsibilitiesParticpantsNames(
     /* [out, callee] */ ArrayOf<String>* CCustomer.complaint.responsibilitiesParticpantsNames);


   CARAPI SetComplaint.RequiredActions(
     /* [in] */ ArrayOf<const String&> CCustomer.complaint.requiredActions);

    CARAPI GetComplaint.RequiredActions(
     /* [out, callee] */ ArrayOf<String>* CCustomer.complaint.requiredActions);


   CARAPI SetComplaint.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.complaint.businessChannelOwnerId);

    CARAPI GetComplaint.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.complaint.businessChannelOwnerId);


   CARAPI SetComplaint.BranchId(
     /* [in] */ CAdministration.branch CCustomer.complaint.branchId);

    CARAPI GetComplaint.BranchId(
     /* [out] */ CAdministration.branch* CCustomer.complaint.branchId);


   CARAPI SetComplaint.DeptId(
     /* [in] */ CAdministration.department CCustomer.complaint.deptId);

    CARAPI GetComplaint.DeptId(
     /* [out] */ CAdministration.department* CCustomer.complaint.deptId);


   CARAPI SetComplaint.PropertyOwnerIds(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CCustomer.complaint.propertyOwnerIds);

    CARAPI GetComplaint.PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CCustomer.complaint.propertyOwnerIds);


   CARAPI SetComplaint.TenantIds(
     /* [in] */ ArrayOf<CProperty.tenant> CCustomer.complaint.tenantIds);

    CARAPI GetComplaint.TenantIds(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CCustomer.complaint.tenantIds);


   CARAPI SetComplaint.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CCustomer.complaint.customerIds);

    CARAPI GetComplaint.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CCustomer.complaint.customerIds);


   CARAPI SetComplaint.EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CCustomer.complaint.employeeIds);

    CARAPI GetComplaint.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CCustomer.complaint.employeeIds);


   CARAPI SetComplaint.CommunityIds(
     /* [in] */ ArrayOf<CStakeholder.community> CCustomer.complaint.communityIds);

    CARAPI GetComplaint.CommunityIds(
     /* [out, callee] */ ArrayOf<CStakeholder.community>* CCustomer.complaint.communityIds);


   CARAPI SetComplaint.MediaIds(
     /* [in] */ ArrayOf<CStakeholder.media> CCustomer.complaint.mediaIds);

    CARAPI GetComplaint.MediaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.media>* CCustomer.complaint.mediaIds);


   CARAPI SetComplaint.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CCustomer.complaint.supplierIds);

    CARAPI GetComplaint.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CCustomer.complaint.supplierIds);


   CARAPI SetComplaint.PartnerIds(
     /* [in] */ ArrayOf<CStakeholder.partner> CCustomer.complaint.partnerIds);

    CARAPI GetComplaint.PartnerIds(
     /* [out, callee] */ ArrayOf<CStakeholder.partner>* CCustomer.complaint.partnerIds);


   CARAPI SetComplaint.TribunalIds(
     /* [in] */ ArrayOf<CRegulator.nCAT> CCustomer.complaint.tribunalIds);

    CARAPI GetComplaint.TribunalIds(
     /* [out, callee] */ ArrayOf<CRegulator.nCAT>* CCustomer.complaint.tribunalIds);


   CARAPI SetComplaint.TicaIds(
     /* [in] */ ArrayOf<CStakeholder.tICA> CCustomer.complaint.ticaIds);

    CARAPI GetComplaint.TicaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.tICA>* CCustomer.complaint.ticaIds);


   CARAPI SetComplaint.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CCustomer.complaint.propertyIds);

    CARAPI GetComplaint.PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CCustomer.complaint.propertyIds);


   CARAPI SetComplaint.ServiceIdsInvolved(
     /* [in] */ ArrayOf<CAdministration.service> CCustomer.complaint.serviceIdsInvolved);

    CARAPI GetComplaint.ServiceIdsInvolved(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CCustomer.complaint.serviceIdsInvolved);


   CARAPI SetComplaint.ItemiIds(
     /* [in] */ ArrayOf<CAdministration.item> CCustomer.complaint.itemiIds);

    CARAPI GetComplaint.ItemiIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CCustomer.complaint.itemiIds);


   CARAPI SetComplaint.JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CCustomer.complaint.jobIds);

    CARAPI GetComplaint.JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CCustomer.complaint.jobIds);


   CARAPI SetComplaint.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.complaint.docRefs);

    CARAPI GetComplaint.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.complaint.docRefs);


   CARAPI SetComplaint.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.complaint.imageRefs);

    CARAPI GetComplaint.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.complaint.imageRefs);


   CARAPI SetComplaint.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CCustomer.complaint.audioRefIds);

    CARAPI GetComplaint.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CCustomer.complaint.audioRefIds);


   CARAPI SetComplaint.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CCustomer.complaint.videoRefs);

    CARAPI GetComplaint.VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CCustomer.complaint.videoRefs);


   CARAPI SetCompliment.ComplimentId(
     /* [in] */ const String& CCustomer.compliment.complimentId);

    CARAPI GetCompliment.ComplimentId(
     /* [out] */ String* CCustomer.compliment.complimentId);


   CARAPI SetCompliment.ParticipantNameComplimenting(
     /* [in] */ const String& CCustomer.compliment.participantNameComplimenting);

    CARAPI GetCompliment.ParticipantNameComplimenting(
     /* [out] */ String* CCustomer.compliment.participantNameComplimenting);


   CARAPI SetCompliment.ParticipantIdComplimenting(
     /* [in] */ const String& CCustomer.compliment.participantIdComplimenting);

    CARAPI GetCompliment.ParticipantIdComplimenting(
     /* [out] */ String* CCustomer.compliment.participantIdComplimenting);


   CARAPI SetCompliment.Description(
     /* [in] */ const String& CCustomer.compliment.description);

    CARAPI GetCompliment.Description(
     /* [out] */ String* CCustomer.compliment.description);


   CARAPI SetCompliment.NonTenantRelated(
     /* [in] */ Boolean CCustomer.compliment.nonTenantRelated);

    CARAPI GetCompliment.NonTenantRelated(
     /* [out] */ Boolean* CCustomer.compliment.nonTenantRelated);


   CARAPI SetCompliment.ProTenant(
     /* [in] */ Boolean CCustomer.compliment.proTenant);

    CARAPI GetCompliment.ProTenant(
     /* [out] */ Boolean* CCustomer.compliment.proTenant);


   CARAPI SetCompliment.ByTenant(
     /* [in] */ Boolean CCustomer.compliment.byTenant);

    CARAPI GetCompliment.ByTenant(
     /* [out] */ Boolean* CCustomer.compliment.byTenant);


   CARAPI SetCompliment.DetailsInChronologicalOrder(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.detailsInChronologicalOrder);

    CARAPI GetCompliment.DetailsInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.detailsInChronologicalOrder);


   CARAPI SetCompliment.DatesTimesOfEvents(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.datesTimesOfEvents);

    CARAPI GetCompliment.DatesTimesOfEvents(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.datesTimesOfEvents);


   CARAPI SetCompliment.CorroReceived(
     /* [in] */ const String& CCustomer.compliment.corroReceived);

    CARAPI GetCompliment.CorroReceived(
     /* [out] */ String* CCustomer.compliment.corroReceived);


   CARAPI SetCompliment.ResponseDocRefs(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.responseDocRefs);

    CARAPI GetCompliment.ResponseDocRefs(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.responseDocRefs);


   CARAPI SetCompliment.RepliedWhen(
     /* [in] */ const String& CCustomer.compliment.repliedWhen);

    CARAPI GetCompliment.RepliedWhen(
     /* [out] */ String* CCustomer.compliment.repliedWhen);


   CARAPI SetCompliment.ResponsibilitiesParticpantsIds(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.responsibilitiesParticpantsIds);

    CARAPI GetCompliment.ResponsibilitiesParticpantsIds(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.responsibilitiesParticpantsIds);


   CARAPI SetCompliment.ResponsibilitiesParticpantsNames(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.responsibilitiesParticpantsNames);

    CARAPI GetCompliment.ResponsibilitiesParticpantsNames(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.responsibilitiesParticpantsNames);


   CARAPI SetCompliment.RequiredActions(
     /* [in] */ ArrayOf<const String&> CCustomer.compliment.requiredActions);

    CARAPI GetCompliment.RequiredActions(
     /* [out, callee] */ ArrayOf<String>* CCustomer.compliment.requiredActions);


   CARAPI SetCompliment.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CCustomer.compliment.businessChannelOwnerId);

    CARAPI GetCompliment.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CCustomer.compliment.businessChannelOwnerId);


   CARAPI SetCompliment.BranchId(
     /* [in] */ CAdministration.branch CCustomer.compliment.branchId);

    CARAPI GetCompliment.BranchId(
     /* [out] */ CAdministration.branch* CCustomer.compliment.branchId);


   CARAPI SetCompliment.DeptId(
     /* [in] */ CAdministration.department CCustomer.compliment.deptId);

    CARAPI GetCompliment.DeptId(
     /* [out] */ CAdministration.department* CCustomer.compliment.deptId);


   CARAPI SetCompliment.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CCustomer.compliment.propertyIds);

    CARAPI GetCompliment.PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CCustomer.compliment.propertyIds);


   CARAPI SetCompliment.PropertyOwnerIds(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CCustomer.compliment.propertyOwnerIds);

    CARAPI GetCompliment.PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CCustomer.compliment.propertyOwnerIds);


   CARAPI SetCompliment.ServiceIdsInvolved(
     /* [in] */ ArrayOf<CAdministration.service> CCustomer.compliment.serviceIdsInvolved);

    CARAPI GetCompliment.ServiceIdsInvolved(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CCustomer.compliment.serviceIdsInvolved);


   CARAPI SetCompliment.ItemiIds(
     /* [in] */ ArrayOf<CAdministration.item> CCustomer.compliment.itemiIds);

    CARAPI GetCompliment.ItemiIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CCustomer.compliment.itemiIds);


   CARAPI SetCompliment.JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CCustomer.compliment.jobIds);

    CARAPI GetCompliment.JobIds(
     /* [out, callee] */ ArrayOf<CAdministration.job>* CCustomer.compliment.jobIds);


   CARAPI SetCompliment.TenancyId(
     /* [in] */ ArrayOf<CProperty.tenant> CCustomer.compliment.tenancyId);

    CARAPI GetCompliment.TenancyId(
     /* [out, callee] */ ArrayOf<CProperty.tenant>* CCustomer.compliment.tenancyId);


   CARAPI SetCompliment.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CCustomer.compliment.customerIds);

    CARAPI GetCompliment.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CCustomer.compliment.customerIds);


   CARAPI SetCompliment.EmployeeIds(
     /* [in] */ ArrayOf<CAdministration.staff> CCustomer.compliment.employeeIds);

    CARAPI GetCompliment.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CCustomer.compliment.employeeIds);


   CARAPI SetCompliment.CommunityIds(
     /* [in] */ ArrayOf<CStakeholder.community> CCustomer.compliment.communityIds);

    CARAPI GetCompliment.CommunityIds(
     /* [out, callee] */ ArrayOf<CStakeholder.community>* CCustomer.compliment.communityIds);


   CARAPI SetCompliment.MediaIds(
     /* [in] */ ArrayOf<CStakeholder.media> CCustomer.compliment.mediaIds);

    CARAPI GetCompliment.MediaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.media>* CCustomer.compliment.mediaIds);


   CARAPI SetCompliment.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CCustomer.compliment.supplierIds);

    CARAPI GetCompliment.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CCustomer.compliment.supplierIds);


   CARAPI SetCompliment.PartnerIds(
     /* [in] */ ArrayOf<CStakeholder.partner> CCustomer.compliment.partnerIds);

    CARAPI GetCompliment.PartnerIds(
     /* [out, callee] */ ArrayOf<CStakeholder.partner>* CCustomer.compliment.partnerIds);


   CARAPI SetCompliment.TribunalIds(
     /* [in] */ ArrayOf<CRegulator.nCAT> CCustomer.compliment.tribunalIds);

    CARAPI GetCompliment.TribunalIds(
     /* [out, callee] */ ArrayOf<CRegulator.nCAT>* CCustomer.compliment.tribunalIds);


   CARAPI SetCompliment.TicaIds(
     /* [in] */ ArrayOf<CStakeholder.tICA> CCustomer.compliment.ticaIds);

    CARAPI GetCompliment.TicaIds(
     /* [out, callee] */ ArrayOf<CStakeholder.tICA>* CCustomer.compliment.ticaIds);


   CARAPI SetCompliment.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CCustomer.compliment.docRefIds);

    CARAPI GetCompliment.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CCustomer.compliment.docRefIds);


   CARAPI SetCompliment.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CCustomer.compliment.imageRefIds);

    CARAPI GetCompliment.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CCustomer.compliment.imageRefIds);


   CARAPI SetCompliment.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CCustomer.compliment.audioRefIds);

    CARAPI GetCompliment.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CCustomer.compliment.audioRefIds);


   CARAPI SetCompliment.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CCustomer.compliment.videoRefIds);

    CARAPI GetCompliment.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CCustomer.compliment.videoRefIds);



protected:
    // Member variables
const String& mSetCustomer.CustomerId
String* mGetCustomer.CustomerId
const String& mSetCustomer.LinkedToThisBusinessChannelOwnerId
String* mGetCustomer.LinkedToThisBusinessChannelOwnerId
CHelper.relationship mSetCustomer.Relationship
CHelper.relationship* mGetCustomer.Relationship
ArrayOf<const String&> mSetCustomer.CustomerTypesIds
ArrayOf<String>* mGetCustomer.CustomerTypesIds
const String& mSetCustomer.OurBranchId
String* mGetCustomer.OurBranchId
const String& mSetCustomer.FirstName
String* mGetCustomer.FirstName
const String& mSetCustomer.LastName
String* mGetCustomer.LastName
ArrayOf<const String&> mSetCustomer.ResidentialAddress
ArrayOf<String>* mGetCustomer.ResidentialAddress
ArrayOf<const String&> mSetCustomer.PostalAddress
ArrayOf<String>* mGetCustomer.PostalAddress
ArrayOf<const String&> mSetCustomer.DeliveryAddress
ArrayOf<String>* mGetCustomer.DeliveryAddress
ArrayOf<const String&> mSetCustomer.BillingAddress
ArrayOf<String>* mGetCustomer.BillingAddress
const String& mSetCustomer.Email
String* mGetCustomer.Email
Int32 mSetCustomer.HomePhone
Int32* mGetCustomer.HomePhone
Int32 mSetCustomer.MobilePhone
Int32* mGetCustomer.MobilePhone
Int32 mSetCustomer.WorkPhone
Int32* mGetCustomer.WorkPhone
ArrayOf<const String&> mSetCustomer.AmenitiesRequired
ArrayOf<String>* mGetCustomer.AmenitiesRequired
ArrayOf<const String&> mSetCustomer.StreetsDesired
ArrayOf<String>* mGetCustomer.StreetsDesired
ArrayOf<Int32> mSetCustomer.PostcodesDesired
ArrayOf<Int32>* mGetCustomer.PostcodesDesired
Int32 mSetCustomer.BedroomsRequired
Int32* mGetCustomer.BedroomsRequired
Double mSetCustomer.MaxPriceOffering
Double* mGetCustomer.MaxPriceOffering
Double mSetCustomer.MinPriceOffering
Double* mGetCustomer.MinPriceOffering
ArrayOf<Double> mSetCustomer.MaxPriceAsking
ArrayOf<Double>* mGetCustomer.MaxPriceAsking
ArrayOf<Double> mSetCustomer.MinPriceAsking
ArrayOf<Double>* mGetCustomer.MinPriceAsking
const String& mSetCustomer.CentrelinkCRN
String* mGetCustomer.CentrelinkCRN
Int32 mSetCustomer.ATOTFN
Int32* mGetCustomer.ATOTFN
const String& mSetCustomer.ABN
String* mGetCustomer.ABN
ArrayOf<const String&> mSetCustomer.ContactedWithDetails
ArrayOf<String>* mGetCustomer.ContactedWithDetails
CRegister.businessChannelOwner mSetCustomer.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomer.BusinessChannelOwnerId
ArrayOf<CProperty.propertyOwner> mSetCustomer.PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetCustomer.PropertyOwnerIds
ArrayOf<CProperty.customerpropertyJoin> mSetCustomer.CustPropJoinIds
ArrayOf<CProperty.customerpropertyJoin>* mGetCustomer.CustPropJoinIds
ArrayOf<CAdministration.documents> mSetCustomer.DocRefIds
ArrayOf<CAdministration.documents>* mGetCustomer.DocRefIds
ArrayOf<CAdministration.images> mSetCustomer.ImageRefIds
ArrayOf<CAdministration.images>* mGetCustomer.ImageRefIds
CProperty.tenant mSetCustomer.TenancyId
CProperty.tenant* mGetCustomer.TenancyId
CCustomer.applicant mSetCustomer.ApplicantId
CCustomer.applicant* mGetCustomer.ApplicantId
const String& mSetCustomerType.CustomerTypeId
String* mGetCustomerType.CustomerTypeId
const String& mSetCustomerType.Description
String* mGetCustomerType.Description
const String& mSetCustomerType.CustTypeName
String* mGetCustomerType.CustTypeName
CRegister.businessChannelOwner mSetCustomerType.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomerType.BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetCustomerType.DocRefs
ArrayOf<CAdministration.documents>* mGetCustomerType.DocRefs
ArrayOf<CAdministration.images> mSetCustomerType.ImageRefs
ArrayOf<CAdministration.images>* mGetCustomerType.ImageRefs
ArrayOf<CAdministration.audio> mSetCustomerType.AudioRefIds
ArrayOf<CAdministration.audio>* mGetCustomerType.AudioRefIds
ArrayOf<CAdministration.video> mSetCustomerType.VideoRefs
ArrayOf<CAdministration.video>* mGetCustomerType.VideoRefs
const String& mSetCustomerCustomerJoin.CustCustomerJoinId
String* mGetCustomerCustomerJoin.CustCustomerJoinId
ArrayOf<CCustomer.customer> mSetCustomerCustomerJoin.CustomerIds
ArrayOf<CCustomer.customer>* mGetCustomerCustomerJoin.CustomerIds
ArrayOf<Double> mSetCustomerCustomerJoin.PercentageShares
ArrayOf<Double>* mGetCustomerCustomerJoin.PercentageShares
ArrayOf<CProperty.property> mSetCustomerCustomerJoin.PropertyId
ArrayOf<CProperty.property>* mGetCustomerCustomerJoin.PropertyId
ArrayOf<CProperty.project> mSetCustomerCustomerJoin.ProjectId
ArrayOf<CProperty.project>* mGetCustomerCustomerJoin.ProjectId
ArrayOf<CProperty.program> mSetCustomerCustomerJoin.ProgramId
ArrayOf<CProperty.program>* mGetCustomerCustomerJoin.ProgramId
CRegister.businessChannelOwner mSetCustomerCustomerJoin.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomerCustomerJoin.BusinessChannelOwnerId
const String& mSetApplicant.ApplicantId
String* mGetApplicant.ApplicantId
ArrayOf<Int32> mSetApplicant.PostcodesAppliedFor
ArrayOf<Int32>* mGetApplicant.PostcodesAppliedFor
Int32 mSetApplicant.BedroomsSought
Int32* mGetApplicant.BedroomsSought
ArrayOf<const String&> mSetApplicant.AmenitiesRequested
ArrayOf<String>* mGetApplicant.AmenitiesRequested
const String& mSetApplicant.FirstName
String* mGetApplicant.FirstName
const String& mSetApplicant.LastName
String* mGetApplicant.LastName
const String& mSetApplicant.ResidentialAddress
String* mGetApplicant.ResidentialAddress
const String& mSetApplicant.PostalAddress
String* mGetApplicant.PostalAddress
const String& mSetApplicant.Email
String* mGetApplicant.Email
Int32 mSetApplicant.HomePhone
Int32* mGetApplicant.HomePhone
Int32 mSetApplicant.MobilePhone
Int32* mGetApplicant.MobilePhone
Int32 mSetApplicant.WorkPhone
Int32* mGetApplicant.WorkPhone
ArrayOf<const String&> mSetApplicant.ContactedWithDetails
ArrayOf<String>* mGetApplicant.ContactedWithDetails
CCustomer.application mSetApplicant.ApplicationId
CCustomer.application* mGetApplicant.ApplicationId
CAdministration.branch mSetApplicant.BranchId
CAdministration.branch* mGetApplicant.BranchId
CCustomer.customer mSetApplicant.CustomerId
CCustomer.customer* mGetApplicant.CustomerId
ArrayOf<CProperty.property> mSetApplicant.PropertyIds
ArrayOf<CProperty.property>* mGetApplicant.PropertyIds
CProperty.tenant mSetApplicant.TenancyId
CProperty.tenant* mGetApplicant.TenancyId
ArrayOf<CAdministration.documents> mSetApplicant.DocRefIds
ArrayOf<CAdministration.documents>* mGetApplicant.DocRefIds
ArrayOf<CAdministration.images> mSetApplicant.ImageRefIds
ArrayOf<CAdministration.images>* mGetApplicant.ImageRefIds
CRegister.businessChannelOwner mSetApplicant.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetApplicant.BusinessChannelOwnerId
const String& mSetApplication.ApplicationId
String* mGetApplication.ApplicationId
Boolean mSetApplication.SocialHousingApplication
Boolean* mGetApplication.SocialHousingApplication
Boolean mSetApplication.NDIS
Boolean* mGetApplication.NDIS
Boolean mSetApplication.AffordableHousingApplication
Boolean* mGetApplication.AffordableHousingApplication
Boolean mSetApplication.SharedEquityHousingApplication
Boolean* mGetApplication.SharedEquityHousingApplication
Boolean mSetApplication.RentToBuyApplication
Boolean* mGetApplication.RentToBuyApplication
Boolean mSetApplication.MarketRateHousingApplication
Boolean* mGetApplication.MarketRateHousingApplication
const String& mSetApplication.HeadApplicantFirstName
String* mGetApplication.HeadApplicantFirstName
const String& mSetApplication.HeadApplicantLastName
String* mGetApplication.HeadApplicantLastName
const String& mSetApplication.HeadApplicantAddressLine1
String* mGetApplication.HeadApplicantAddressLine1
const String& mSetApplication.HeadApplicantAddressLine2
String* mGetApplication.HeadApplicantAddressLine2
const String& mSetApplication.HeadApplicantSuburb
String* mGetApplication.HeadApplicantSuburb
const String& mSetApplication.HeadApplicantPostcode
String* mGetApplication.HeadApplicantPostcode
const String& mSetApplication.HeadApplicantHomePhone
String* mGetApplication.HeadApplicantHomePhone
const String& mSetApplication.HeadApplicantWorkPhone
String* mGetApplication.HeadApplicantWorkPhone
const String& mSetApplication.HeadApplicantMobilePhone
String* mGetApplication.HeadApplicantMobilePhone
const String& mSetApplication.HeadApplicantEmail
String* mGetApplication.HeadApplicantEmail
const String& mSetApplication.HeadApplicantDOB
String* mGetApplication.HeadApplicantDOB
ArrayOf<const String&> mSetApplication.StreetsSought
ArrayOf<String>* mGetApplication.StreetsSought
ArrayOf<Int32> mSetApplication.PostcodesSought
ArrayOf<Int32>* mGetApplication.PostcodesSought
ArrayOf<Int32> mSetApplication.BedroomRangeRequired
ArrayOf<Int32>* mGetApplication.BedroomRangeRequired
ArrayOf<const String&> mSetApplication.AmenitiesRequested
ArrayOf<String>* mGetApplication.AmenitiesRequested
ArrayOf<Double> mSetApplication.RangeForRent
ArrayOf<Double>* mGetApplication.RangeForRent
CHelper.billingInterval mSetApplication.Interval
CHelper.billingInterval* mGetApplication.Interval
ArrayOf<const String&> mSetApplication.SecondaryApplicantFirstNames
ArrayOf<String>* mGetApplication.SecondaryApplicantFirstNames
ArrayOf<const String&> mSetApplication.SecondaryApplicantLastNames
ArrayOf<String>* mGetApplication.SecondaryApplicantLastNames
ArrayOf<const String&> mSetApplication.PartnerIds
ArrayOf<String>* mGetApplication.PartnerIds
ArrayOf<CCustomer.applicant> mSetApplication.ApplicantIds
ArrayOf<CCustomer.applicant>* mGetApplication.ApplicantIds
ArrayOf<CCustomer.customer> mSetApplication.CustomerIds
ArrayOf<CCustomer.customer>* mGetApplication.CustomerIds
ArrayOf<CProperty.property> mSetApplication.PropertyIds
ArrayOf<CProperty.property>* mGetApplication.PropertyIds
CRegister.businessChannelOwner mSetApplication.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetApplication.BusinessChannelOwnerId
CAdministration.branch mSetApplication.BranchId
CAdministration.branch* mGetApplication.BranchId
CAdministration.department mSetApplication.DeptId
CAdministration.department* mGetApplication.DeptId
ArrayOf<CAdministration.documents> mSetApplication.DocRefs
ArrayOf<CAdministration.documents>* mGetApplication.DocRefs
ArrayOf<CAdministration.images> mSetApplication.ImageRefs
ArrayOf<CAdministration.images>* mGetApplication.ImageRefs
ArrayOf<CAdministration.audio> mSetApplication.AudioRefIds
ArrayOf<CAdministration.audio>* mGetApplication.AudioRefIds
const String& mSetStudentAccommodationBookings.BookingId
String* mGetStudentAccommodationBookings.BookingId
const String& mSetStudentAccommodationBookings.PropertyAddressString
String* mGetStudentAccommodationBookings.PropertyAddressString
const String& mSetStudentAccommodationBookings.UnitNumber
String* mGetStudentAccommodationBookings.UnitNumber
const String& mSetStudentAccommodationBookings.PreInspected
String* mGetStudentAccommodationBookings.PreInspected
const String& mSetStudentAccommodationBookings.DateLeaseStarts
String* mGetStudentAccommodationBookings.DateLeaseStarts
ArrayOf<const String&> mSetStudentAccommodationBookings.MidTermInspections
ArrayOf<String>* mGetStudentAccommodationBookings.MidTermInspections
const String& mSetStudentAccommodationBookings.DateLeaseEnds
String* mGetStudentAccommodationBookings.DateLeaseEnds
const String& mSetStudentAccommodationBookings.PostInspected
String* mGetStudentAccommodationBookings.PostInspected
CHelper.billingInterval mSetStudentAccommodationBookings.PaymentInterval
CHelper.billingInterval* mGetStudentAccommodationBookings.PaymentInterval
Double mSetStudentAccommodationBookings.RentalAmountAgreed
Double* mGetStudentAccommodationBookings.RentalAmountAgreed
CRegister.businessChannelOwner mSetStudentAccommodationBookings.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStudentAccommodationBookings.BusinessChannelOwnerId
CAdministration.branch mSetStudentAccommodationBookings.BranchId
CAdministration.branch* mGetStudentAccommodationBookings.BranchId
CAdministration.department mSetStudentAccommodationBookings.DeptId
CAdministration.department* mGetStudentAccommodationBookings.DeptId
CProperty.property mSetStudentAccommodationBookings.PropertyId
CProperty.property* mGetStudentAccommodationBookings.PropertyId
CCustomer.application mSetStudentAccommodationBookings.ApplicationId
CCustomer.application* mGetStudentAccommodationBookings.ApplicationId
CCustomer.applicant mSetStudentAccommodationBookings.ApplicantId
CCustomer.applicant* mGetStudentAccommodationBookings.ApplicantId
CProperty.allocation mSetStudentAccommodationBookings.AllocationId
CProperty.allocation* mGetStudentAccommodationBookings.AllocationId
CProperty.tenant mSetStudentAccommodationBookings.TenancyId
CProperty.tenant* mGetStudentAccommodationBookings.TenancyId
ArrayOf<CAdministration.documents> mSetStudentAccommodationBookings.DocRefIds
ArrayOf<CAdministration.documents>* mGetStudentAccommodationBookings.DocRefIds
ArrayOf<CAdministration.images> mSetStudentAccommodationBookings.ImageRefIds
ArrayOf<CAdministration.images>* mGetStudentAccommodationBookings.ImageRefIds
const String& mSetStudentAccommodationBookings.BookingId
String* mGetStudentAccommodationBookings.BookingId
const String& mSetStudentAccommodationBookings.PropertyAddressString
String* mGetStudentAccommodationBookings.PropertyAddressString
const String& mSetStudentAccommodationBookings.UnitNumber
String* mGetStudentAccommodationBookings.UnitNumber
const String& mSetStudentAccommodationBookings.PreInspected
String* mGetStudentAccommodationBookings.PreInspected
const String& mSetStudentAccommodationBookings.DateLeaseStarts
String* mGetStudentAccommodationBookings.DateLeaseStarts
ArrayOf<const String&> mSetStudentAccommodationBookings.MidTermInspections
ArrayOf<String>* mGetStudentAccommodationBookings.MidTermInspections
const String& mSetStudentAccommodationBookings.DateLeaseEnds
String* mGetStudentAccommodationBookings.DateLeaseEnds
const String& mSetStudentAccommodationBookings.PostInspected
String* mGetStudentAccommodationBookings.PostInspected
CHelper.billingInterval mSetStudentAccommodationBookings.PaymentInterval
CHelper.billingInterval* mGetStudentAccommodationBookings.PaymentInterval
Double mSetStudentAccommodationBookings.RentalAmountAgreed
Double* mGetStudentAccommodationBookings.RentalAmountAgreed
CRegister.businessChannelOwner mSetStudentAccommodationBookings.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStudentAccommodationBookings.BusinessChannelOwnerId
CAdministration.branch mSetStudentAccommodationBookings.BranchId
CAdministration.branch* mGetStudentAccommodationBookings.BranchId
CAdministration.department mSetStudentAccommodationBookings.DeptId
CAdministration.department* mGetStudentAccommodationBookings.DeptId
CProperty.property mSetStudentAccommodationBookings.PropertyId
CProperty.property* mGetStudentAccommodationBookings.PropertyId
CCustomer.application mSetStudentAccommodationBookings.ApplicationId
CCustomer.application* mGetStudentAccommodationBookings.ApplicationId
CCustomer.applicant mSetStudentAccommodationBookings.ApplicantId
CCustomer.applicant* mGetStudentAccommodationBookings.ApplicantId
CProperty.allocation mSetStudentAccommodationBookings.AllocationId
CProperty.allocation* mGetStudentAccommodationBookings.AllocationId
CProperty.tenant mSetStudentAccommodationBookings.TenancyId
CProperty.tenant* mGetStudentAccommodationBookings.TenancyId
ArrayOf<CAdministration.documents> mSetStudentAccommodationBookings.DocRefIds
ArrayOf<CAdministration.documents>* mGetStudentAccommodationBookings.DocRefIds
ArrayOf<CAdministration.images> mSetStudentAccommodationBookings.ImageRefIds
ArrayOf<CAdministration.images>* mGetStudentAccommodationBookings.ImageRefIds
const String& mSetStudentAccommodationBookings.CustTenantJoinId
String* mGetStudentAccommodationBookings.CustTenantJoinId
CCustomer.customer mSetStudentAccommodationBookings.CustomerId
CCustomer.customer* mGetStudentAccommodationBookings.CustomerId
CProperty.tenant mSetStudentAccommodationBookings.TenancyId
CProperty.tenant* mGetStudentAccommodationBookings.TenancyId
CRegister.businessChannelOwner mSetStudentAccommodationBookings.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStudentAccommodationBookings.BusinessChannelOwnerId
const String& mSetTemporaryAccommodationBookings.BookingId
String* mGetTemporaryAccommodationBookings.BookingId
const String& mSetTemporaryAccommodationBookings.PropertyAddressString
String* mGetTemporaryAccommodationBookings.PropertyAddressString
const String& mSetTemporaryAccommodationBookings.UnitNumber
String* mGetTemporaryAccommodationBookings.UnitNumber
const String& mSetTemporaryAccommodationBookings.PreInspected
String* mGetTemporaryAccommodationBookings.PreInspected
const String& mSetTemporaryAccommodationBookings.DateLeaseStarts
String* mGetTemporaryAccommodationBookings.DateLeaseStarts
ArrayOf<const String&> mSetTemporaryAccommodationBookings.MidTermInspections
ArrayOf<String>* mGetTemporaryAccommodationBookings.MidTermInspections
const String& mSetTemporaryAccommodationBookings.DateLeaseEnds
String* mGetTemporaryAccommodationBookings.DateLeaseEnds
const String& mSetTemporaryAccommodationBookings.PostInspected
String* mGetTemporaryAccommodationBookings.PostInspected
CHelper.billingInterval mSetTemporaryAccommodationBookings.PaymentInterval
CHelper.billingInterval* mGetTemporaryAccommodationBookings.PaymentInterval
Double mSetTemporaryAccommodationBookings.RentalAmountAgreed
Double* mGetTemporaryAccommodationBookings.RentalAmountAgreed
CRegister.businessChannelOwner mSetTemporaryAccommodationBookings.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTemporaryAccommodationBookings.BusinessChannelOwnerId
CAdministration.branch mSetTemporaryAccommodationBookings.BranchId
CAdministration.branch* mGetTemporaryAccommodationBookings.BranchId
CAdministration.department mSetTemporaryAccommodationBookings.DeptId
CAdministration.department* mGetTemporaryAccommodationBookings.DeptId
CProperty.property mSetTemporaryAccommodationBookings.PropertyId
CProperty.property* mGetTemporaryAccommodationBookings.PropertyId
CCustomer.application mSetTemporaryAccommodationBookings.ApplicationId
CCustomer.application* mGetTemporaryAccommodationBookings.ApplicationId
CCustomer.applicant mSetTemporaryAccommodationBookings.ApplicantId
CCustomer.applicant* mGetTemporaryAccommodationBookings.ApplicantId
CProperty.allocation mSetTemporaryAccommodationBookings.AllocationId
CProperty.allocation* mGetTemporaryAccommodationBookings.AllocationId
CProperty.tenant mSetTemporaryAccommodationBookings.TenancyId
CProperty.tenant* mGetTemporaryAccommodationBookings.TenancyId
ArrayOf<CAdministration.documents> mSetTemporaryAccommodationBookings.DocRefIds
ArrayOf<CAdministration.documents>* mGetTemporaryAccommodationBookings.DocRefIds
ArrayOf<CAdministration.images> mSetTemporaryAccommodationBookings.ImageRefIds
ArrayOf<CAdministration.images>* mGetTemporaryAccommodationBookings.ImageRefIds
const String& mSetTemporaryAccommodationBookings.BookingId
String* mGetTemporaryAccommodationBookings.BookingId
const String& mSetTemporaryAccommodationBookings.PropertyAddressString
String* mGetTemporaryAccommodationBookings.PropertyAddressString
const String& mSetTemporaryAccommodationBookings.UnitNumber
String* mGetTemporaryAccommodationBookings.UnitNumber
const String& mSetTemporaryAccommodationBookings.PreInspected
String* mGetTemporaryAccommodationBookings.PreInspected
const String& mSetTemporaryAccommodationBookings.DateLeaseStarts
String* mGetTemporaryAccommodationBookings.DateLeaseStarts
ArrayOf<const String&> mSetTemporaryAccommodationBookings.MidTermInspections
ArrayOf<String>* mGetTemporaryAccommodationBookings.MidTermInspections
const String& mSetTemporaryAccommodationBookings.DateLeaseEnds
String* mGetTemporaryAccommodationBookings.DateLeaseEnds
const String& mSetTemporaryAccommodationBookings.PostInspected
String* mGetTemporaryAccommodationBookings.PostInspected
CHelper.billingInterval mSetTemporaryAccommodationBookings.PaymentInterval
CHelper.billingInterval* mGetTemporaryAccommodationBookings.PaymentInterval
Double mSetTemporaryAccommodationBookings.RentalAmountAgreed
Double* mGetTemporaryAccommodationBookings.RentalAmountAgreed
CRegister.businessChannelOwner mSetTemporaryAccommodationBookings.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTemporaryAccommodationBookings.BusinessChannelOwnerId
CAdministration.branch mSetTemporaryAccommodationBookings.BranchId
CAdministration.branch* mGetTemporaryAccommodationBookings.BranchId
CAdministration.department mSetTemporaryAccommodationBookings.DeptId
CAdministration.department* mGetTemporaryAccommodationBookings.DeptId
CProperty.property mSetTemporaryAccommodationBookings.PropertyId
CProperty.property* mGetTemporaryAccommodationBookings.PropertyId
CCustomer.application mSetTemporaryAccommodationBookings.ApplicationId
CCustomer.application* mGetTemporaryAccommodationBookings.ApplicationId
CCustomer.applicant mSetTemporaryAccommodationBookings.ApplicantId
CCustomer.applicant* mGetTemporaryAccommodationBookings.ApplicantId
CProperty.allocation mSetTemporaryAccommodationBookings.AllocationId
CProperty.allocation* mGetTemporaryAccommodationBookings.AllocationId
CProperty.tenant mSetTemporaryAccommodationBookings.TenancyId
CProperty.tenant* mGetTemporaryAccommodationBookings.TenancyId
ArrayOf<CAdministration.documents> mSetTemporaryAccommodationBookings.DocRefIds
ArrayOf<CAdministration.documents>* mGetTemporaryAccommodationBookings.DocRefIds
ArrayOf<CAdministration.images> mSetTemporaryAccommodationBookings.ImageRefIds
ArrayOf<CAdministration.images>* mGetTemporaryAccommodationBookings.ImageRefIds
const String& mSetTemporaryAccommodationBookings.CustTenantJoinId
String* mGetTemporaryAccommodationBookings.CustTenantJoinId
CCustomer.customer mSetTemporaryAccommodationBookings.CustomerId
CCustomer.customer* mGetTemporaryAccommodationBookings.CustomerId
CProperty.tenant mSetTemporaryAccommodationBookings.TenancyId
CProperty.tenant* mGetTemporaryAccommodationBookings.TenancyId
CRegister.businessChannelOwner mSetTemporaryAccommodationBookings.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTemporaryAccommodationBookings.BusinessChannelOwnerId
const String& mSetCustomerTenantJoin.CustTenantJoinId
String* mGetCustomerTenantJoin.CustTenantJoinId
ArrayOf<CCustomer.customer> mSetCustomerTenantJoin.CustomerIds
ArrayOf<CCustomer.customer>* mGetCustomerTenantJoin.CustomerIds
ArrayOf<Double> mSetCustomerTenantJoin.TenancyId
ArrayOf<Double>* mGetCustomerTenantJoin.TenancyId
CRegister.businessChannelOwner mSetCustomerTenantJoin.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomerTenantJoin.BusinessChannelOwnerId
const String& mSetComplaint.ComplaintId
String* mGetComplaint.ComplaintId
const String& mSetComplaint.ParticipantNameComplainant
String* mGetComplaint.ParticipantNameComplainant
const String& mSetComplaint.ParticipantIdComplainant
String* mGetComplaint.ParticipantIdComplainant
const String& mSetComplaint.Description
String* mGetComplaint.Description
Boolean mSetComplaint.NonTenantRelated
Boolean* mGetComplaint.NonTenantRelated
Boolean mSetComplaint.AgainstTenant
Boolean* mGetComplaint.AgainstTenant
Boolean mSetComplaint.ByTenant
Boolean* mGetComplaint.ByTenant
ArrayOf<const String&> mSetComplaint.DetailsInChronologicalOrder
ArrayOf<String>* mGetComplaint.DetailsInChronologicalOrder
ArrayOf<const String&> mSetComplaint.DatesTimesOfEvents
ArrayOf<String>* mGetComplaint.DatesTimesOfEvents
const String& mSetComplaint.RepliedWhen
String* mGetComplaint.RepliedWhen
ArrayOf<const String&> mSetComplaint.ResponsibilitiesParticpantsIds
ArrayOf<String>* mGetComplaint.ResponsibilitiesParticpantsIds
ArrayOf<const String&> mSetComplaint.ResponsibilitiesParticpantsNames
ArrayOf<String>* mGetComplaint.ResponsibilitiesParticpantsNames
ArrayOf<const String&> mSetComplaint.RequiredActions
ArrayOf<String>* mGetComplaint.RequiredActions
CRegister.businessChannelOwner mSetComplaint.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetComplaint.BusinessChannelOwnerId
CAdministration.branch mSetComplaint.BranchId
CAdministration.branch* mGetComplaint.BranchId
CAdministration.department mSetComplaint.DeptId
CAdministration.department* mGetComplaint.DeptId
ArrayOf<CProperty.propertyOwner> mSetComplaint.PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetComplaint.PropertyOwnerIds
ArrayOf<CProperty.tenant> mSetComplaint.TenantIds
ArrayOf<CProperty.tenant>* mGetComplaint.TenantIds
ArrayOf<CCustomer.customer> mSetComplaint.CustomerIds
ArrayOf<CCustomer.customer>* mGetComplaint.CustomerIds
ArrayOf<CAdministration.staff> mSetComplaint.EmployeeIds
ArrayOf<CAdministration.staff>* mGetComplaint.EmployeeIds
ArrayOf<CStakeholder.community> mSetComplaint.CommunityIds
ArrayOf<CStakeholder.community>* mGetComplaint.CommunityIds
ArrayOf<CStakeholder.media> mSetComplaint.MediaIds
ArrayOf<CStakeholder.media>* mGetComplaint.MediaIds
ArrayOf<CSupplier.supplier> mSetComplaint.SupplierIds
ArrayOf<CSupplier.supplier>* mGetComplaint.SupplierIds
ArrayOf<CStakeholder.partner> mSetComplaint.PartnerIds
ArrayOf<CStakeholder.partner>* mGetComplaint.PartnerIds
ArrayOf<CRegulator.nCAT> mSetComplaint.TribunalIds
ArrayOf<CRegulator.nCAT>* mGetComplaint.TribunalIds
ArrayOf<CStakeholder.tICA> mSetComplaint.TicaIds
ArrayOf<CStakeholder.tICA>* mGetComplaint.TicaIds
ArrayOf<CProperty.property> mSetComplaint.PropertyIds
ArrayOf<CProperty.property>* mGetComplaint.PropertyIds
ArrayOf<CAdministration.service> mSetComplaint.ServiceIdsInvolved
ArrayOf<CAdministration.service>* mGetComplaint.ServiceIdsInvolved
ArrayOf<CAdministration.item> mSetComplaint.ItemiIds
ArrayOf<CAdministration.item>* mGetComplaint.ItemiIds
ArrayOf<CAdministration.job> mSetComplaint.JobIds
ArrayOf<CAdministration.job>* mGetComplaint.JobIds
ArrayOf<CAdministration.documents> mSetComplaint.DocRefs
ArrayOf<CAdministration.documents>* mGetComplaint.DocRefs
ArrayOf<CAdministration.images> mSetComplaint.ImageRefs
ArrayOf<CAdministration.images>* mGetComplaint.ImageRefs
ArrayOf<CAdministration.audio> mSetComplaint.AudioRefIds
ArrayOf<CAdministration.audio>* mGetComplaint.AudioRefIds
ArrayOf<CAdministration.video> mSetComplaint.VideoRefs
ArrayOf<CAdministration.video>* mGetComplaint.VideoRefs
const String& mSetCompliment.ComplimentId
String* mGetCompliment.ComplimentId
const String& mSetCompliment.ParticipantNameComplimenting
String* mGetCompliment.ParticipantNameComplimenting
const String& mSetCompliment.ParticipantIdComplimenting
String* mGetCompliment.ParticipantIdComplimenting
const String& mSetCompliment.Description
String* mGetCompliment.Description
Boolean mSetCompliment.NonTenantRelated
Boolean* mGetCompliment.NonTenantRelated
Boolean mSetCompliment.ProTenant
Boolean* mGetCompliment.ProTenant
Boolean mSetCompliment.ByTenant
Boolean* mGetCompliment.ByTenant
ArrayOf<const String&> mSetCompliment.DetailsInChronologicalOrder
ArrayOf<String>* mGetCompliment.DetailsInChronologicalOrder
ArrayOf<const String&> mSetCompliment.DatesTimesOfEvents
ArrayOf<String>* mGetCompliment.DatesTimesOfEvents
const String& mSetCompliment.CorroReceived
String* mGetCompliment.CorroReceived
ArrayOf<const String&> mSetCompliment.ResponseDocRefs
ArrayOf<String>* mGetCompliment.ResponseDocRefs
const String& mSetCompliment.RepliedWhen
String* mGetCompliment.RepliedWhen
ArrayOf<const String&> mSetCompliment.ResponsibilitiesParticpantsIds
ArrayOf<String>* mGetCompliment.ResponsibilitiesParticpantsIds
ArrayOf<const String&> mSetCompliment.ResponsibilitiesParticpantsNames
ArrayOf<String>* mGetCompliment.ResponsibilitiesParticpantsNames
ArrayOf<const String&> mSetCompliment.RequiredActions
ArrayOf<String>* mGetCompliment.RequiredActions
CRegister.businessChannelOwner mSetCompliment.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCompliment.BusinessChannelOwnerId
CAdministration.branch mSetCompliment.BranchId
CAdministration.branch* mGetCompliment.BranchId
CAdministration.department mSetCompliment.DeptId
CAdministration.department* mGetCompliment.DeptId
ArrayOf<CProperty.property> mSetCompliment.PropertyIds
ArrayOf<CProperty.property>* mGetCompliment.PropertyIds
ArrayOf<CProperty.propertyOwner> mSetCompliment.PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetCompliment.PropertyOwnerIds
ArrayOf<CAdministration.service> mSetCompliment.ServiceIdsInvolved
ArrayOf<CAdministration.service>* mGetCompliment.ServiceIdsInvolved
ArrayOf<CAdministration.item> mSetCompliment.ItemiIds
ArrayOf<CAdministration.item>* mGetCompliment.ItemiIds
ArrayOf<CAdministration.job> mSetCompliment.JobIds
ArrayOf<CAdministration.job>* mGetCompliment.JobIds
ArrayOf<CProperty.tenant> mSetCompliment.TenancyId
ArrayOf<CProperty.tenant>* mGetCompliment.TenancyId
ArrayOf<CCustomer.customer> mSetCompliment.CustomerIds
ArrayOf<CCustomer.customer>* mGetCompliment.CustomerIds
ArrayOf<CAdministration.staff> mSetCompliment.EmployeeIds
ArrayOf<CAdministration.staff>* mGetCompliment.EmployeeIds
ArrayOf<CStakeholder.community> mSetCompliment.CommunityIds
ArrayOf<CStakeholder.community>* mGetCompliment.CommunityIds
ArrayOf<CStakeholder.media> mSetCompliment.MediaIds
ArrayOf<CStakeholder.media>* mGetCompliment.MediaIds
ArrayOf<CSupplier.supplier> mSetCompliment.SupplierIds
ArrayOf<CSupplier.supplier>* mGetCompliment.SupplierIds
ArrayOf<CStakeholder.partner> mSetCompliment.PartnerIds
ArrayOf<CStakeholder.partner>* mGetCompliment.PartnerIds
ArrayOf<CRegulator.nCAT> mSetCompliment.TribunalIds
ArrayOf<CRegulator.nCAT>* mGetCompliment.TribunalIds
ArrayOf<CStakeholder.tICA> mSetCompliment.TicaIds
ArrayOf<CStakeholder.tICA>* mGetCompliment.TicaIds
ArrayOf<CAdministration.documents> mSetCompliment.DocRefIds
ArrayOf<CAdministration.documents>* mGetCompliment.DocRefIds
ArrayOf<CAdministration.images> mSetCompliment.ImageRefIds
ArrayOf<CAdministration.images>* mGetCompliment.ImageRefIds
ArrayOf<CAdministration.audio> mSetCompliment.AudioRefIds
ArrayOf<CAdministration.audio>* mGetCompliment.AudioRefIds
ArrayOf<CAdministration.video> mSetCompliment.VideoRefIds
ArrayOf<CAdministration.video>* mGetCompliment.VideoRefIds
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

