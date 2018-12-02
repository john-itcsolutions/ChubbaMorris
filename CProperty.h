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


class CProperty
    : public Object
    , public ICH
    , public IComparable
{
public:
    CAR_INTERFACE_DECL()    // The class which implements a CAR interface requires macros CAR_INTERFACE_DECL/CAR_INTERFACE_IMPL.

    CProperty();               // If a member needs to be initialized, the constructor must be explicitly declared 

    virtual ~CProperty();

    CARAPI constructor();   // CAR constructor for subclass inheritance.

     // IComparable interface function
    //
    CARAPI CompareTo(
        /* [in] */ IInterface* another,
        /* [out] */ Int32* result);

    // ICH interface function
    //
   
   CARAPI SetProperty_PropertyId(
  /* [in] */ const String& CProperty.property.propertyId);

    CARAPI GetProperty_PropertyId(
  /* [out] */ String* CProperty.property.propertyId);


   CARAPI SetProperty_PropertyAddressString(
  /* [in] */ const String& CProperty.property.propertyAddressString);

    CARAPI GetProperty_PropertyAddressString(
  /* [out] */ String* CProperty.property.propertyAddressString);


   CARAPI SetProperty_UnitNumber(
  /* [in] */ const String& CProperty.property.unitNumber);

    CARAPI GetProperty_UnitNumber(
  /* [out] */ String* CProperty.property.unitNumber);


   CARAPI SetProperty_StreetNumber(
  /* [in] */ const String& CProperty.property.streetNumber);

    CARAPI GetProperty_StreetNumber(
  /* [out] */ String* CProperty.property.streetNumber);


   CARAPI SetProperty_StreetName(
  /* [in] */ const String& CProperty.property.streetName);

    CARAPI GetProperty_StreetName(
  /* [out] */ String* CProperty.property.streetName);


   CARAPI SetProperty_SuburbTown(
  /* [in] */ const String& CProperty.property.suburbTown);

    CARAPI GetProperty_SuburbTown(
  /* [out] */ String* CProperty.property.suburbTown);


   CARAPI SetProperty_Postcode(
  /* [in] */ Int32 CProperty.property.postcode);

    CARAPI GetProperty_Postcode(
  /* [out] */ Int32* CProperty.property.postcode);


   CARAPI SetProperty_State(
  /* [in] */ CHelper.ausState CProperty.property.state);

    CARAPI GetProperty_State(
  /* [out] */ CHelper.ausState* CProperty.property.state);


   CARAPI SetProperty_EnvelopeGreetings(
  /* [in] */ const String& CProperty.property.envelopeGreetings);

    CARAPI GetProperty_EnvelopeGreetings(
  /* [out] */ String* CProperty.property.envelopeGreetings);


   CARAPI SetProperty_CorrespondenceFolderDocRef(
  /* [in] */ const String& CProperty.property.correspondenceFolderDocRef);

    CARAPI GetProperty_CorrespondenceFolderDocRef(
  /* [out] */ String* CProperty.property.correspondenceFolderDocRef);


   CARAPI SetProperty_StartDateLatestLease(
  /* [in] */ const String& CProperty.property.startDateLatestLease);

    CARAPI GetProperty_StartDateLatestLease(
  /* [out] */ String* CProperty.property.startDateLatestLease);


   CARAPI SetProperty_EndDateLatestLease(
  /* [in] */ const String& CProperty.property.endDateLatestLease);

    CARAPI GetProperty_EndDateLatestLease(
  /* [out] */ String* CProperty.property.endDateLatestLease);


   CARAPI SetProperty_Occupied(
  /* [in] */ Boolean CProperty.property.occupied);

    CARAPI GetProperty_Occupied(
  /* [out] */ Boolean* CProperty.property.occupied);


   CARAPI SetProperty_LocalGovArea(
  /* [in] */ const String& CProperty.property.localGovArea);

    CARAPI GetProperty_LocalGovArea(
  /* [out] */ String* CProperty.property.localGovArea);


   CARAPI SetProperty_Zoning(
  /* [in] */ const String& CProperty.property.zoning);

    CARAPI GetProperty_Zoning(
  /* [out] */ String* CProperty.property.zoning);


   CARAPI SetProperty_Lot(
  /* [in] */ const String& CProperty.property.lot);

    CARAPI GetProperty_Lot(
  /* [out] */ String* CProperty.property.lot);


   CARAPI SetProperty_DP(
  /* [in] */ const String& CProperty.property.dP);

    CARAPI GetProperty_DP(
  /* [out] */ String* CProperty.property.dP);


   CARAPI SetProperty_SP(
  /* [in] */ const String& CProperty.property.sP);

    CARAPI GetProperty_SP(
  /* [out] */ String* CProperty.property.sP);


   CARAPI SetProperty_DCPNum(
  /* [in] */ const String& CProperty.property.dCPNum);

    CARAPI GetProperty_DCPNum(
  /* [out] */ String* CProperty.property.dCPNum);


   CARAPI SetProperty_Parish(
  /* [in] */ const String& CProperty.property.parish);

    CARAPI GetProperty_Parish(
  /* [out] */ String* CProperty.property.parish);


   CARAPI SetProperty_Description(
  /* [in] */ const String& CProperty.property.description);

    CARAPI GetProperty_Description(
  /* [out] */ String* CProperty.property.description);


   CARAPI SetProperty_Lon(
  /* [in] */ Double CProperty.property.lon);

    CARAPI GetProperty_Lon(
  /* [out] */ Double* CProperty.property.lon);


   CARAPI SetProperty_Lat(
  /* [in] */ Double CProperty.property.lat);

    CARAPI GetProperty_Lat(
  /* [out] */ Double* CProperty.property.lat);


   CARAPI SetProperty_Elevation(
  /* [in] */ Double CProperty.property.elevation);

    CARAPI GetProperty_Elevation(
  /* [out] */ Double* CProperty.property.elevation);


   CARAPI SetProperty_Liens(
  /* [in] */ Boolean CProperty.property.liens);

    CARAPI GetProperty_Liens(
  /* [out] */ Boolean* CProperty.property.liens);


   CARAPI SetProperty_NumBedrooms(
  /* [in] */ Int32 CProperty.property.numBedrooms);

    CARAPI GetProperty_NumBedrooms(
  /* [out] */ Int32* CProperty.property.numBedrooms);


   CARAPI SetProperty_NumEnsuites(
  /* [in] */ Int32 CProperty.property.numEnsuites);

    CARAPI GetProperty_NumEnsuites(
  /* [out] */ Int32* CProperty.property.numEnsuites);


   CARAPI SetProperty_NumBathrooms(
  /* [in] */ Int32 CProperty.property.numBathrooms);

    CARAPI GetProperty_NumBathrooms(
  /* [out] */ Int32* CProperty.property.numBathrooms);


   CARAPI SetProperty_NumStoreys(
  /* [in] */ Int32 CProperty.property.numStoreys);

    CARAPI GetProperty_NumStoreys(
  /* [out] */ Int32* CProperty.property.numStoreys);


   CARAPI SetProperty_Furnished(
  /* [in] */ Boolean CProperty.property.furnished);

    CARAPI GetProperty_Furnished(
  /* [out] */ Boolean* CProperty.property.furnished);


   CARAPI SetProperty_ConstructionTypeName(
  /* [in] */ const String& CProperty.property.constructionTypeName);

    CARAPI GetProperty_ConstructionTypeName(
  /* [out] */ String* CProperty.property.constructionTypeName);


   CARAPI SetProperty_FolioCertCopyDocRef(
  /* [in] */ const String& CProperty.property.folioCertCopyDocRef);

    CARAPI GetProperty_FolioCertCopyDocRef(
  /* [out] */ String* CProperty.property.folioCertCopyDocRef);


   CARAPI SetProperty_CopyOfDepositedPlanDocRef(
  /* [in] */ const String& CProperty.property.copyOfDepositedPlanDocRef);

    CARAPI GetProperty_CopyOfDepositedPlanDocRef(
  /* [out] */ String* CProperty.property.copyOfDepositedPlanDocRef);


   CARAPI SetProperty_CopiesOfLiensDocrefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.copiesOfLiensDocrefs);

    CARAPI GetProperty_CopiesOfLiensDocrefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.copiesOfLiensDocrefs);


   CARAPI SetProperty_CopyOfBuildingCertDocRef(
  /* [in] */ const String& CProperty.property.copyOfBuildingCertDocRef);

    CARAPI GetProperty_CopyOfBuildingCertDocRef(
  /* [out] */ String* CProperty.property.copyOfBuildingCertDocRef);


   CARAPI SetProperty_CopyOfInsuranceCertDocRef(
  /* [in] */ const String& CProperty.property.copyOfInsuranceCertDocRef);

    CARAPI GetProperty_CopyOfInsuranceCertDocRef(
  /* [out] */ String* CProperty.property.copyOfInsuranceCertDocRef);


   CARAPI SetProperty_FolderContainingWarrantiesDocRef(
  /* [in] */ const String& CProperty.property.folderContainingWarrantiesDocRef);

    CARAPI GetProperty_FolderContainingWarrantiesDocRef(
  /* [out] */ String* CProperty.property.folderContainingWarrantiesDocRef);


   CARAPI SetProperty_CopyOfPlanningCertSection149DEPADocRef(
  /* [in] */ const String& CProperty.property.copyOfPlanningCertSection149DEPADocRef);

    CARAPI GetProperty_CopyOfPlanningCertSection149DEPADocRef(
  /* [out] */ String* CProperty.property.copyOfPlanningCertSection149DEPADocRef);


   CARAPI SetProperty_CopyOfSection88GCertDocRef(
  /* [in] */ const String& CProperty.property.copyOfSection88GCertDocRef);

    CARAPI GetProperty_CopyOfSection88GCertDocRef(
  /* [out] */ String* CProperty.property.copyOfSection88GCertDocRef);


   CARAPI SetProperty_FolderContainingAdditionalAnnexuresDocRef(
  /* [in] */ const String& CProperty.property.folderContainingAdditionalAnnexuresDocRef);

    CARAPI GetProperty_FolderContainingAdditionalAnnexuresDocRef(
  /* [out] */ String* CProperty.property.folderContainingAdditionalAnnexuresDocRef);


   CARAPI SetProperty_FolderContainingAdditionalDisclosuresDocRef(
  /* [in] */ const String& CProperty.property.folderContainingAdditionalDisclosuresDocRef);

    CARAPI GetProperty_FolderContainingAdditionalDisclosuresDocRef(
  /* [out] */ String* CProperty.property.folderContainingAdditionalDisclosuresDocRef);


   CARAPI SetProperty_CopyOfSurveyReportsDocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.copyOfSurveyReportsDocRefs);

    CARAPI GetProperty_CopyOfSurveyReportsDocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.copyOfSurveyReportsDocRefs);


   CARAPI SetProperty_DrainageDiagsSewerRefSheetsDocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.drainageDiagsSewerRefSheetsDocRefs);

    CARAPI GetProperty_DrainageDiagsSewerRefSheetsDocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.drainageDiagsSewerRefSheetsDocRefs);


   CARAPI SetProperty_BuildingInspectionDocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.buildingInspectionDocRefs);

    CARAPI GetProperty_BuildingInspectionDocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.buildingInspectionDocRefs);


   CARAPI SetProperty_PestInspectionDocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.pestInspectionDocRefs);

    CARAPI GetProperty_PestInspectionDocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.pestInspectionDocRefs);


   CARAPI SetProperty_ProblemsWithPropertyDocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.problemsWithPropertyDocRefs);

    CARAPI GetProperty_ProblemsWithPropertyDocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.problemsWithPropertyDocRefs);


   CARAPI SetProperty_PropertyOwnerSharePercents(
  /* [in] */ ArrayOf<Double> CProperty.property.propertyOwnerSharePercents);

    CARAPI GetProperty_PropertyOwnerSharePercents(
     /* [out, callee] */ ArrayOf<Double>* CProperty.property.propertyOwnerSharePercents);


   CARAPI SetProperty_CapitalValue(
  /* [in] */ Double CProperty.property.capitalValue);

    CARAPI GetProperty_CapitalValue(
  /* [out] */ Double* CProperty.property.capitalValue);


   CARAPI SetProperty_FloorPrice(
  /* [in] */ Double CProperty.property.floorPrice);

    CARAPI GetProperty_FloorPrice(
  /* [out] */ Double* CProperty.property.floorPrice);


   CARAPI SetProperty_LatestBuyOfferPrice(
  /* [in] */ Double CProperty.property.latestBuyOfferPrice);

    CARAPI GetProperty_LatestBuyOfferPrice(
  /* [out] */ Double* CProperty.property.latestBuyOfferPrice);


   CARAPI SetProperty_LatestBuyOfferDateTime(
  /* [in] */ const String& CProperty.property.latestBuyOfferDateTime);

    CARAPI GetProperty_LatestBuyOfferDateTime(
  /* [out] */ String* CProperty.property.latestBuyOfferDateTime);


   CARAPI SetProperty_LatestBuyOfferPriceAccepted(
  /* [in] */ Boolean CProperty.property.latestBuyOfferPriceAccepted);

    CARAPI GetProperty_LatestBuyOfferPriceAccepted(
  /* [out] */ Boolean* CProperty.property.latestBuyOfferPriceAccepted);


   CARAPI SetProperty_LatestBuyOfferNotes(
  /* [in] */ ArrayOf<const String&> CProperty.property.latestBuyOfferNotes);

    CARAPI GetProperty_LatestBuyOfferNotes(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.latestBuyOfferNotes);


   CARAPI SetProperty_RentalValue(
  /* [in] */ Double CProperty.property.rentalValue);

    CARAPI GetProperty_RentalValue(
  /* [out] */ Double* CProperty.property.rentalValue);


   CARAPI SetProperty_LandTotalSquareMetres(
  /* [in] */ Double CProperty.property.landTotalSquareMetres);

    CARAPI GetProperty_LandTotalSquareMetres(
  /* [out] */ Double* CProperty.property.landTotalSquareMetres);


   CARAPI SetProperty_LandTotalHectares(
  /* [in] */ Double CProperty.property.landTotalHectares);

    CARAPI GetProperty_LandTotalHectares(
  /* [out] */ Double* CProperty.property.landTotalHectares);


   CARAPI SetProperty_BuildingTotalSquareMetres(
  /* [in] */ Double CProperty.property.buildingTotalSquareMetres);

    CARAPI GetProperty_BuildingTotalSquareMetres(
  /* [out] */ Double* CProperty.property.buildingTotalSquareMetres);


   CARAPI SetProperty_Amenities(
  /* [in] */ ArrayOf<const String&> CProperty.property.amenities);

    CARAPI GetProperty_Amenities(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.amenities);


   CARAPI SetProperty_PropertyTradingBasis(
  /* [in] */ CHelper.propertyTradingBasis CProperty.property.propertyTradingBasis);

    CARAPI GetProperty_PropertyTradingBasis(
  /* [out] */ CHelper.propertyTradingBasis* CProperty.property.propertyTradingBasis);


   CARAPI SetProperty_PropertyType(
  /* [in] */ CHelper.propertyType CProperty.property.propertyType);

    CARAPI GetProperty_PropertyType(
  /* [out] */ CHelper.propertyType* CProperty.property.propertyType);


   CARAPI SetProperty.LeaCARAPI Setype(
  /* [in] */ CHelper.leaCARAPI Setype CProperty.property.leaCARAPI Setype);

    CARAPI GetProperty.LeaCARAPI Setype(
  /* [out] */ CHelper.leaCARAPI Setype* CProperty.property.leaCARAPI Setype);


   CARAPI SetProperty_LeaseArrangement(
  /* [in] */ CHelper.leaseArrangement CProperty.property.leaseArrangement);

    CARAPI GetProperty_LeaseArrangement(
  /* [out] */ CHelper.leaseArrangement* CProperty.property.leaseArrangement);


   CARAPI SetProperty_LeasingTerm(
  /* [in] */ CHelper.leasingTerm CProperty.property.leasingTerm);

    CARAPI GetProperty_LeasingTerm(
  /* [out] */ CHelper.leasingTerm* CProperty.property.leasingTerm);


   CARAPI SetProperty_RentalPaymentInterval(
  /* [in] */ CHelper.billingInterval CProperty.property.rentalPaymentInterval);

    CARAPI GetProperty_RentalPaymentInterval(
  /* [out] */ CHelper.billingInterval* CProperty.property.rentalPaymentInterval);


   CARAPI SetProperty_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.property.businessChannelOwnerId);

    CARAPI GetProperty_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.property.businessChannelOwnerId);


   CARAPI SetProperty_BranchId(
  /* [in] */ CAdministration.branch CProperty.property.branchId);

    CARAPI GetProperty_BranchId(
  /* [out] */ CAdministration.branch* CProperty.property.branchId);


   CARAPI SetProperty_DeptId(
  /* [in] */ CAdministration.department CProperty.property.deptId);

    CARAPI GetProperty_DeptId(
  /* [out] */ CAdministration.department* CProperty.property.deptId);


   CARAPI SetProperty_PropertyOwnerIds(
  /* [in] */ ArrayOf<CProperty.propertyOwner> CProperty.property.propertyOwnerIds);

    CARAPI GetProperty_PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CProperty.property.propertyOwnerIds);


   CARAPI SetProperty_PropertyConstructionTypeId(
  /* [in] */ CProperty.propertyConstructionType CProperty.property.propertyConstructionTypeId);

    CARAPI GetProperty_PropertyConstructionTypeId(
  /* [out] */ CProperty.propertyConstructionType* CProperty.property.propertyConstructionTypeId);


   CARAPI SetProperty_TenancyId(
  /* [in] */ CProperty.tenant CProperty.property.tenancyId);

    CARAPI GetProperty_TenancyId(
  /* [out] */ CProperty.tenant* CProperty.property.tenancyId);


   CARAPI SetProperty_DocRefs(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.property.docRefs);

    CARAPI GetProperty_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.property.docRefs);


   CARAPI SetProperty_ImageRefs(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.property.imageRefs);

    CARAPI GetProperty_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.property.imageRefs);


   CARAPI SetProperty_AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> CProperty.property.audioRefIds);

    CARAPI GetProperty_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CProperty.property.audioRefIds);


   CARAPI SetProperty_VideoRefs(
  /* [in] */ ArrayOf<CAdministration.video> CProperty.property.videoRefs);

    CARAPI GetProperty_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CProperty.property.videoRefs);





   CARAPI SetPropertyConstructionType_PropertyConstructionTypeId(
  /* [in] */ const String& CProperty.propertyConstructionType.propertyConstructionTypeId);

    CARAPI GetPropertyConstructionType_PropertyConstructionTypeId(
  /* [out] */ String* CProperty.propertyConstructionType.propertyConstructionTypeId);


   CARAPI SetPropertyConstructionType_ConstructionTypeName(
  /* [in] */ const String& CProperty.propertyConstructionType.constructionTypeName);

    CARAPI GetPropertyConstructionType_ConstructionTypeName(
  /* [out] */ String* CProperty.propertyConstructionType.constructionTypeName);


   CARAPI SetPropertyConstructionType_Description(
  /* [in] */ const String& CProperty.propertyConstructionType.description);

    CARAPI GetPropertyConstructionType_Description(
  /* [out] */ String* CProperty.propertyConstructionType.description);


   CARAPI SetPropertyConstructionType_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.propertyConstructionType.docRefIds);

    CARAPI GetPropertyConstructionType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.propertyConstructionType.docRefIds);


   CARAPI SetPropertyConstructionType_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.propertyConstructionType.imageRefIds);

    CARAPI GetPropertyConstructionType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.propertyConstructionType.imageRefIds);


   CARAPI SetPropertyConstructionType_AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> CProperty.propertyConstructionType.audioRefIds);

    CARAPI GetPropertyConstructionType_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CProperty.propertyConstructionType.audioRefIds);


   CARAPI SetPropertyConstructionType_VideoRefIds(
  /* [in] */ ArrayOf<CAdministration.video> CProperty.propertyConstructionType.videoRefIds);

    CARAPI GetPropertyConstructionType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CProperty.propertyConstructionType.videoRefIds);


   CARAPI SetPropertyConstructionType_RiskIds(
  /* [in] */ ArrayOf<CAdministration.riskRegister> CProperty.propertyConstructionType.riskIds);

    CARAPI GetPropertyConstructionType_RiskIds(
     /* [out, callee] */ ArrayOf<CAdministration.riskRegister>* CProperty.propertyConstructionType.riskIds);


   CARAPI SetPropertyConstructionType_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.propertyConstructionType.businessChannelOwnerId);

    CARAPI GetPropertyConstructionType_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.propertyConstructionType.businessChannelOwnerId);





   CARAPI SetPropertyOwner_PropertyOwnerId(
  /* [in] */ const String& CProperty.propertyOwner.propertyOwnerId);

    CARAPI GetPropertyOwner_PropertyOwnerId(
  /* [out] */ String* CProperty.propertyOwner.propertyOwnerId);


   CARAPI SetPropertyOwner_LinkedToThisCustomerId(
  /* [in] */ const String& CProperty.propertyOwner.linkedToThisCustomerId);

    CARAPI GetPropertyOwner_LinkedToThisCustomerId(
  /* [out] */ String* CProperty.propertyOwner.linkedToThisCustomerId);


   CARAPI SetPropertyOwner_LinkedToThisSupplierId(
  /* [in] */ const String& CProperty.propertyOwner.linkedToThisSupplierId);

    CARAPI GetPropertyOwner_LinkedToThisSupplierId(
  /* [out] */ String* CProperty.propertyOwner.linkedToThisSupplierId);


   CARAPI SetPropertyOwner_FirstName(
  /* [in] */ const String& CProperty.propertyOwner.firstName);

    CARAPI GetPropertyOwner_FirstName(
  /* [out] */ String* CProperty.propertyOwner.firstName);


   CARAPI SetPropertyOwner_LastName(
  /* [in] */ const String& CProperty.propertyOwner.lastName);

    CARAPI GetPropertyOwner_LastName(
  /* [out] */ String* CProperty.propertyOwner.lastName);


   CARAPI SetPropertyOwner_ResidentialAddress(
  /* [in] */ const String& CProperty.propertyOwner.residentialAddress);

    CARAPI GetPropertyOwner_ResidentialAddress(
  /* [out] */ String* CProperty.propertyOwner.residentialAddress);


   CARAPI SetPropertyOwner_PostalAddress(
  /* [in] */ const String& CProperty.propertyOwner.postalAddress);

    CARAPI GetPropertyOwner_PostalAddress(
  /* [out] */ String* CProperty.propertyOwner.postalAddress);


   CARAPI SetPropertyOwner_Email(
  /* [in] */ const String& CProperty.propertyOwner.email);

    CARAPI GetPropertyOwner_Email(
  /* [out] */ String* CProperty.propertyOwner.email);


   CARAPI SetPropertyOwner_HomePhone(
  /* [in] */ Int32 CProperty.propertyOwner.homePhone);

    CARAPI GetPropertyOwner_HomePhone(
  /* [out] */ Int32* CProperty.propertyOwner.homePhone);


   CARAPI SetPropertyOwner_MobilePhone(
  /* [in] */ Int32 CProperty.propertyOwner.mobilePhone);

    CARAPI GetPropertyOwner_MobilePhone(
  /* [out] */ Int32* CProperty.propertyOwner.mobilePhone);


   CARAPI SetPropertyOwner_WorkPhone(
  /* [in] */ Int32 CProperty.propertyOwner.workPhone);

    CARAPI GetPropertyOwner_WorkPhone(
  /* [out] */ Int32* CProperty.propertyOwner.workPhone);


   CARAPI SetPropertyOwner_BankName(
  /* [in] */ const String& CProperty.propertyOwner.bankName);

    CARAPI GetPropertyOwner_BankName(
  /* [out] */ String* CProperty.propertyOwner.bankName);


   CARAPI SetPropertyOwner_BankBSB(
  /* [in] */ Int32 CProperty.propertyOwner.bankBSB);

    CARAPI GetPropertyOwner_BankBSB(
  /* [out] */ Int32* CProperty.propertyOwner.bankBSB);


   CARAPI SetPropertyOwner_BankAccountNumber(
  /* [in] */ Int32 CProperty.propertyOwner.bankAccountNumber);

    CARAPI GetPropertyOwner_BankAccountNumber(
  /* [out] */ Int32* CProperty.propertyOwner.bankAccountNumber);


   CARAPI SetPropertyOwner_ContactedWithDetails(
  /* [in] */ ArrayOf<const String&> CProperty.propertyOwner.contactedWithDetails);

    CARAPI GetPropertyOwner_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyOwner.contactedWithDetails);


   CARAPI SetPropertyOwner_SharesPercents(
  /* [in] */ ArrayOf<Double> CProperty.propertyOwner.sharesPercents);

    CARAPI GetPropertyOwner_SharesPercents(
     /* [out, callee] */ ArrayOf<Double>* CProperty.propertyOwner.sharesPercents);


   CARAPI SetPropertyOwner_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.propertyOwner.businessChannelOwnerId);

    CARAPI GetPropertyOwner_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.propertyOwner.businessChannelOwnerId);


   CARAPI SetPropertyOwner_BranchId(
  /* [in] */ CAdministration.branch CProperty.propertyOwner.branchId);

    CARAPI GetPropertyOwner_BranchId(
  /* [out] */ CAdministration.branch* CProperty.propertyOwner.branchId);


   CARAPI SetPropertyOwner_PropertyIds(
  /* [in] */ ArrayOf<CProperty.property> CProperty.propertyOwner.propertyIds);

    CARAPI GetPropertyOwner_PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CProperty.propertyOwner.propertyIds);


   CARAPI SetPropertyOwner_CustomerId(
  /* [in] */ CCustomer.customer CProperty.propertyOwner.customerId);

    CARAPI GetPropertyOwner_CustomerId(
  /* [out] */ CCustomer.customer* CProperty.propertyOwner.customerId);


   CARAPI SetPropertyOwner_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.propertyOwner.docRefIds);

    CARAPI GetPropertyOwner_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.propertyOwner.docRefIds);


   CARAPI SetPropertyOwner_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.propertyOwner.imageRefIds);

    CARAPI GetPropertyOwner_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.propertyOwner.imageRefIds);





   CARAPI SetProgram_ProgramId(
  /* [in] */ const String& CProperty.program.programId);

    CARAPI GetProgram_ProgramId(
  /* [out] */ String* CProperty.program.programId);


   CARAPI SetProgram_ProgramName(
  /* [in] */ const String& CProperty.program.programName);

    CARAPI GetProgram_ProgramName(
  /* [out] */ String* CProperty.program.programName);


   CARAPI SetProgram_Description(
  /* [in] */ const String& CProperty.program.description);

    CARAPI GetProgram_Description(
  /* [out] */ String* CProperty.program.description);


   CARAPI SetProgram_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.program.docRefIds);

    CARAPI GetProgram_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.program.docRefIds);


   CARAPI SetProgram_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.program.imageRefIds);

    CARAPI GetProgram_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.program.imageRefIds);


   CARAPI SetProgram_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.program.businessChannelOwnerId);

    CARAPI GetProgram_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.program.businessChannelOwnerId);


   CARAPI SetProgram_BranchId(
  /* [in] */ CAdministration.branch CProperty.program.branchId);

    CARAPI GetProgram_BranchId(
  /* [out] */ CAdministration.branch* CProperty.program.branchId);


   CARAPI SetProgram_DeptId(
  /* [in] */ CAdministration.department CProperty.program.deptId);

    CARAPI GetProgram_DeptId(
  /* [out] */ CAdministration.department* CProperty.program.deptId);





   CARAPI SetProject_ProjectId(
  /* [in] */ const String& CProperty.project.projectId);

    CARAPI GetProject_ProjectId(
  /* [out] */ String* CProperty.project.projectId);


   CARAPI SetProject_ProjectName(
  /* [in] */ const String& CProperty.project.projectName);

    CARAPI GetProject_ProjectName(
  /* [out] */ String* CProperty.project.projectName);


   CARAPI SetProject_Description(
  /* [in] */ const String& CProperty.project.description);

    CARAPI GetProject_Description(
  /* [out] */ String* CProperty.project.description);


   CARAPI SetProject_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.project.docRefIds);

    CARAPI GetProject_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.project.docRefIds);


   CARAPI SetProject_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.project.imageRefIds);

    CARAPI GetProject_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.project.imageRefIds);


   CARAPI SetProject_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.project.businessChannelOwnerId);

    CARAPI GetProject_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.project.businessChannelOwnerId);


   CARAPI SetProject_BranchId(
  /* [in] */ CAdministration.branch CProperty.project.branchId);

    CARAPI GetProject_BranchId(
  /* [out] */ CAdministration.branch* CProperty.project.branchId);


   CARAPI SetProject_DeptId(
  /* [in] */ CAdministration.department CProperty.project.deptId);

    CARAPI GetProject_DeptId(
  /* [out] */ CAdministration.department* CProperty.project.deptId);





   CARAPI SetAdvertisingBudCARAPI GetSchedule.AdvertScheduleId(
  /* [in] */ const String& CProperty.advertisingBudCARAPI GetSchedule.advertScheduleId);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.AdvertScheduleId(
  /* [out] */ String* CProperty.advertisingBudCARAPI GetSchedule.advertScheduleId);


   CARAPI SetAdvertisingBudCARAPI GetSchedule.AdvertisingMedium(
  /* [in] */ CHelper.advertisingMedium CProperty.advertisingBudCARAPI GetSchedule.AdvertisingMedium);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.AdvertisingMedium(
  /* [out] */ CHelper.advertisingMedium* CProperty.advertisingBudCARAPI GetSchedule.AdvertisingMedium);


   CARAPI SetAdvertisingBudCARAPI GetSchedule.PreviousSchedId(
  /* [in] */ const String& CProperty.advertisingBudCARAPI GetSchedule.previousSchedId);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.PreviousSchedId(
  /* [out] */ String* CProperty.advertisingBudCARAPI GetSchedule.previousSchedId);


   CARAPI SetAdvertisingBudCARAPI GetSchedule.month(
  /* [in] */ CHelper.month CProperty.advertisingBudCARAPI GetSchedule.month);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.month(
  /* [out] */ CHelper.month* CProperty.advertisingBudCARAPI GetSchedule.month);


   CARAPI SetAdvertisingBudCARAPI GetSchedule.BudCARAPI GetedAmount(
  /* [in] */ Double CProperty.advertisingBudCARAPI GetSchedule.budCARAPI GetedAmount);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.BudCARAPI GetedAmount(
  /* [out] */ Double* CProperty.advertisingBudCARAPI GetSchedule.budCARAPI GetedAmount);


   CARAPI SetAdvertisingBudCARAPI GetSchedule.RunDateTimes(
  /* [in] */ ArrayOf<const String&> CProperty.advertisingBudCARAPI GetSchedule.runDateTimes);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.RunDateTimes(
     /* [out, callee] */ ArrayOf<String>* CProperty.advertisingBudCARAPI GetSchedule.runDateTimes);


   CARAPI SetAdvertisingBudCARAPI GetSchedule.PropertyId(
  /* [in] */ CProperty.property CProperty.advertisingBudCARAPI GetSchedule.propertyId);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.PropertyId(
  /* [out] */ CProperty.property* CProperty.advertisingBudCARAPI GetSchedule.propertyId);


   CARAPI SetAdvertisingBudCARAPI GetSchedule.PropertyOwnerIds(
  /* [in] */ ArrayOf<CProperty.propertyOwner> CProperty.advertisingBudCARAPI GetSchedule.propertyOwnerIds);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CProperty.advertisingBudCARAPI GetSchedule.propertyOwnerIds);


   CARAPI SetAdvertisingBudCARAPI GetSchedule.AdvertDesignIds(
  /* [in] */ ArrayOf<CAdministration.advertisingTemplatesPlans> CProperty.advertisingBudCARAPI GetSchedule.advertDesignIds);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.AdvertDesignIds(
     /* [out, callee] */ ArrayOf<CAdministration.advertisingTemplatesPlans>* CProperty.advertisingBudCARAPI GetSchedule.advertDesignIds);


   CARAPI SetAdvertisingBudCARAPI GetSchedule.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.advertisingBudCARAPI GetSchedule.businessChannelOwnerId);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.advertisingBudCARAPI GetSchedule.businessChannelOwnerId);


   CARAPI SetAdvertisingBudCARAPI GetSchedule.BranchId(
  /* [in] */ CAdministration.branch CProperty.advertisingBudCARAPI GetSchedule.branchId);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.BranchId(
  /* [out] */ CAdministration.branch* CProperty.advertisingBudCARAPI GetSchedule.branchId);


   CARAPI SetAdvertisingBudCARAPI GetSchedule.DeptId(
  /* [in] */ CAdministration.department CProperty.advertisingBudCARAPI GetSchedule.deptId);

    CARAPI GetAdvertisingBudCARAPI GetSchedule.DeptId(
  /* [out] */ CAdministration.department* CProperty.advertisingBudCARAPI GetSchedule.deptId);





   CARAPI SetAllocation_AllocationId(
  /* [in] */ const String& CProperty.allocation.allocationId);

    CARAPI GetAllocation_AllocationId(
  /* [out] */ String* CProperty.allocation.allocationId);


   CARAPI SetAllocation_ApplicationIds(
  /* [in] */ ArrayOf<const String&> CProperty.allocation.applicationIds);

    CARAPI GetAllocation_ApplicationIds(
     /* [out, callee] */ ArrayOf<String>* CProperty.allocation.applicationIds);


   CARAPI SetAllocation_DocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.allocation.docRefs);

    CARAPI GetAllocation_DocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.allocation.docRefs);


   CARAPI SetAllocation_Notes(
  /* [in] */ ArrayOf<const String&> CProperty.allocation.notes);

    CARAPI GetAllocation_Notes(
     /* [out, callee] */ ArrayOf<String>* CProperty.allocation.notes);


   CARAPI SetAllocation_DateOfEffect(
  /* [in] */ const String& CProperty.allocation.dateOfEffect);

    CARAPI GetAllocation_DateOfEffect(
  /* [out] */ String* CProperty.allocation.dateOfEffect);


   CARAPI SetAllocation_PropertyId(
  /* [in] */ CProperty.property CProperty.allocation.propertyId);

    CARAPI GetAllocation_PropertyId(
  /* [out] */ CProperty.property* CProperty.allocation.propertyId);


   CARAPI SetAllocation_SuccessfulApplicationId(
  /* [in] */ CCustomer.application CProperty.allocation.successfulApplicationId);

    CARAPI GetAllocation_SuccessfulApplicationId(
  /* [out] */ CCustomer.application* CProperty.allocation.successfulApplicationId);


   CARAPI SetAllocation_SuccessfulTenancyId(
  /* [in] */ CProperty.tenant CProperty.allocation.successfulTenancyId);

    CARAPI GetAllocation_SuccessfulTenancyId(
  /* [out] */ CProperty.tenant* CProperty.allocation.successfulTenancyId);


   CARAPI SetAllocation_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.allocation.businessChannelOwnerId);

    CARAPI GetAllocation_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.allocation.businessChannelOwnerId);


   CARAPI SetAllocation_BranchId(
  /* [in] */ CAdministration.branch CProperty.allocation.branchId);

    CARAPI GetAllocation_BranchId(
  /* [out] */ CAdministration.branch* CProperty.allocation.branchId);


   CARAPI SetAllocation_DeptId(
  /* [in] */ CAdministration.department CProperty.allocation.deptId);

    CARAPI GetAllocation_DeptId(
  /* [out] */ CAdministration.department* CProperty.allocation.deptId);





   CARAPI SetTenant_TenancyId(
  /* [in] */ const String& CProperty.tenant.tenancyId);

    CARAPI GetTenant_TenancyId(
  /* [out] */ String* CProperty.tenant.tenancyId);


   CARAPI SetTenant_ABN(
  /* [in] */ const String& CProperty.tenant.aBN);

    CARAPI GetTenant_ABN(
  /* [out] */ String* CProperty.tenant.aBN);


   CARAPI SetTenant_BusinessName(
  /* [in] */ const String& CProperty.tenant.businessName);

    CARAPI GetTenant_BusinessName(
  /* [out] */ String* CProperty.tenant.businessName);


   CARAPI SetTenant_FirstName(
  /* [in] */ const String& CProperty.tenant.firstName);

    CARAPI GetTenant_FirstName(
  /* [out] */ String* CProperty.tenant.firstName);


   CARAPI SetTenant_LastName(
  /* [in] */ const String& CProperty.tenant.lastName);

    CARAPI GetTenant_LastName(
  /* [out] */ String* CProperty.tenant.lastName);


   CARAPI SetTenant_ResidentialAddress(
  /* [in] */ const String& CProperty.tenant.residentialAddress);

    CARAPI GetTenant_ResidentialAddress(
  /* [out] */ String* CProperty.tenant.residentialAddress);


   CARAPI SetTenant_PostalAddress(
  /* [in] */ const String& CProperty.tenant.postalAddress);

    CARAPI GetTenant_PostalAddress(
  /* [out] */ String* CProperty.tenant.postalAddress);


   CARAPI SetTenant_Email(
  /* [in] */ const String& CProperty.tenant.email);

    CARAPI GetTenant_Email(
  /* [out] */ String* CProperty.tenant.email);


   CARAPI SetTenant_HomePhone(
  /* [in] */ Int32 CProperty.tenant.homePhone);

    CARAPI GetTenant_HomePhone(
  /* [out] */ Int32* CProperty.tenant.homePhone);


   CARAPI SetTenant_MobilePhone(
  /* [in] */ Int32 CProperty.tenant.mobilePhone);

    CARAPI GetTenant_MobilePhone(
  /* [out] */ Int32* CProperty.tenant.mobilePhone);


   CARAPI SetTenant_WorkPhone(
  /* [in] */ Int32 CProperty.tenant.workPhone);

    CARAPI GetTenant_WorkPhone(
  /* [out] */ Int32* CProperty.tenant.workPhone);


   CARAPI SetTenant_ContactedWithDetails(
  /* [in] */ ArrayOf<const String&> CProperty.tenant.contactedWithDetails);

    CARAPI GetTenant_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CProperty.tenant.contactedWithDetails);


   CARAPI SetTenant_AllocationId(
  /* [in] */ CProperty.allocation CProperty.tenant.allocationId);

    CARAPI GetTenant_AllocationId(
  /* [out] */ CProperty.allocation* CProperty.tenant.allocationId);


   CARAPI SetTenant_ApplicantIds(
  /* [in] */ ArrayOf<CCustomer.applicant> CProperty.tenant.applicantIds);

    CARAPI GetTenant_ApplicantIds(
     /* [out, callee] */ ArrayOf<CCustomer.applicant>* CProperty.tenant.applicantIds);


   CARAPI SetTenant_CustomerId(
  /* [in] */ CCustomer.customer CProperty.tenant.customerId);

    CARAPI GetTenant_CustomerId(
  /* [out] */ CCustomer.customer* CProperty.tenant.customerId);


   CARAPI SetTenant_PropertyId(
  /* [in] */ CProperty.property CProperty.tenant.propertyId);

    CARAPI GetTenant_PropertyId(
  /* [out] */ CProperty.property* CProperty.tenant.propertyId);


   CARAPI SetTenant_BranchId(
  /* [in] */ CAdministration.branch CProperty.tenant.branchId);

    CARAPI GetTenant_BranchId(
  /* [out] */ CAdministration.branch* CProperty.tenant.branchId);


   CARAPI SetTenant_ChartOfAccountsId(
  /* [in] */ CFinance.chartOfAccounts CProperty.tenant.chartOfAccountsId);

    CARAPI GetTenant_ChartOfAccountsId(
  /* [out] */ CFinance.chartOfAccounts* CProperty.tenant.chartOfAccountsId);


   CARAPI SetTenant_ChartOfClassesId(
  /* [in] */ CFinance.chartOfClasses CProperty.tenant.chartOfClassesId);

    CARAPI GetTenant_ChartOfClassesId(
  /* [out] */ CFinance.chartOfClasses* CProperty.tenant.chartOfClassesId);


   CARAPI SetTenant_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.tenant.docRefIds);

    CARAPI GetTenant_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.tenant.docRefIds);


   CARAPI SetTenant_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.tenant.imageRefIds);

    CARAPI GetTenant_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.tenant.imageRefIds);


   CARAPI SetTenant_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.tenant.businessChannelOwnerId);

    CARAPI GetTenant_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.tenant.businessChannelOwnerId);





   CARAPI SetPropertyOwnerPropertyJoin_PropOwnerPropJoinId(
  /* [in] */ const String& CProperty.propertyOwnerPropertyJoin.propOwnerPropJoinId);

    CARAPI GetPropertyOwnerPropertyJoin_PropOwnerPropJoinId(
  /* [out] */ String* CProperty.propertyOwnerPropertyJoin.propOwnerPropJoinId);


   CARAPI SetPropertyOwnerPropertyJoin_OwnershipPercentage(
  /* [in] */ Double CProperty.propertyOwnerPropertyJoin.ownershipPercentage);

    CARAPI GetPropertyOwnerPropertyJoin_OwnershipPercentage(
  /* [out] */ Double* CProperty.propertyOwnerPropertyJoin.ownershipPercentage);


   CARAPI SetPropertyOwnerPropertyJoin_PropertyId(
  /* [in] */ CProperty.property CProperty.propertyOwnerPropertyJoin.propertyId);

    CARAPI GetPropertyOwnerPropertyJoin_PropertyId(
  /* [out] */ CProperty.property* CProperty.propertyOwnerPropertyJoin.propertyId);


   CARAPI SetPropertyOwnerPropertyJoin_PropertyOwnerId(
  /* [in] */ CProperty.propertyOwner CProperty.propertyOwnerPropertyJoin.propertyOwnerId);

    CARAPI GetPropertyOwnerPropertyJoin_PropertyOwnerId(
  /* [out] */ CProperty.propertyOwner* CProperty.propertyOwnerPropertyJoin.propertyOwnerId);


   CARAPI SetPropertyOwnerPropertyJoin_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.propertyOwnerPropertyJoin.businessChannelOwnerId);

    CARAPI GetPropertyOwnerPropertyJoin_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.propertyOwnerPropertyJoin.businessChannelOwnerId);





   CARAPI SetCustomerPropertyJoin_CustPropJoinId(
  /* [in] */ const String& CProperty.customerpropertyJoin.custPropJoinId);

    CARAPI GetCustomerPropertyJoin_CustPropJoinId(
  /* [out] */ String* CProperty.customerpropertyJoin.custPropJoinId);


   CARAPI SetCustomerPropertyJoin_Relationship(
  /* [in] */ CHelper.relationship CProperty.customerpropertyJoin.relationship);

    CARAPI GetCustomerPropertyJoin_Relationship(
  /* [out] */ CHelper.relationship* CProperty.customerpropertyJoin.relationship);


   CARAPI SetCustomerPropertyJoin_CustomerId(
  /* [in] */ CCustomer.customer CProperty.customerpropertyJoin.customerId);

    CARAPI GetCustomerPropertyJoin_CustomerId(
  /* [out] */ CCustomer.customer* CProperty.customerpropertyJoin.customerId);


   CARAPI SetCustomerPropertyJoin_PropertyId(
  /* [in] */ CProperty.property CProperty.customerpropertyJoin.propertyId);

    CARAPI GetCustomerPropertyJoin_PropertyId(
  /* [out] */ CProperty.property* CProperty.customerpropertyJoin.propertyId);


   CARAPI SetCustomerPropertyJoin_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.customerpropertyJoin.businessChannelOwnerId);

    CARAPI GetCustomerPropertyJoin_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.customerpropertyJoin.businessChannelOwnerId);





   CARAPI SetCustomerPropertyOwnerJoin_CustPropOwnerJoinId(
  /* [in] */ const String& CProperty.customerPropertyOwnerJoin.custPropOwnerJoinId);

    CARAPI GetCustomerPropertyOwnerJoin_CustPropOwnerJoinId(
  /* [out] */ String* CProperty.customerPropertyOwnerJoin.custPropOwnerJoinId);


   CARAPI SetCustomerPropertyOwnerJoin_CustomerId(
  /* [in] */ CCustomer.customer CProperty.customerPropertyOwnerJoin.customerId);

    CARAPI GetCustomerPropertyOwnerJoin_CustomerId(
  /* [out] */ CCustomer.customer* CProperty.customerPropertyOwnerJoin.customerId);


   CARAPI SetCustomerPropertyOwnerJoin_PropertyOwnerId(
  /* [in] */ CProperty.propertyOwner CProperty.customerPropertyOwnerJoin.propertyOwnerId);

    CARAPI GetCustomerPropertyOwnerJoin_PropertyOwnerId(
  /* [out] */ CProperty.propertyOwner* CProperty.customerPropertyOwnerJoin.propertyOwnerId);


   CARAPI SetCustomerPropertyOwnerJoin_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.customerPropertyOwnerJoin.businessChannelOwnerId);

    CARAPI GetCustomerPropertyOwnerJoin_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.customerPropertyOwnerJoin.businessChannelOwnerId);





   CARAPI SetPropertyInspectionResidential_PropertyInspectionResId(
  /* [in] */ const String& CProperty.propertyInspectionResidential.propertyInspectionResId);

    CARAPI GetPropertyInspectionResidential_PropertyInspectionResId(
  /* [out] */ String* CProperty.propertyInspectionResidential.propertyInspectionResId);


   CARAPI SetPropertyInspectionResidential_InspectionDates(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.inspectionDates);

    CARAPI GetPropertyInspectionResidential_InspectionDates(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.inspectionDates);


   CARAPI SetPropertyInspectionResidential_PropertyAddressString(
  /* [in] */ const String& CProperty.propertyInspectionResidential.propertyAddressString);

    CARAPI GetPropertyInspectionResidential_PropertyAddressString(
  /* [out] */ String* CProperty.propertyInspectionResidential.propertyAddressString);


   CARAPI SetPropertyInspectionResidential_UnitNumber(
  /* [in] */ const String& CProperty.propertyInspectionResidential.unitNumber);

    CARAPI GetPropertyInspectionResidential_UnitNumber(
  /* [out] */ String* CProperty.propertyInspectionResidential.unitNumber);


   CARAPI SetPropertyInspectionResidential_Bathroom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.bathroom);

    CARAPI GetPropertyInspectionResidential_Bathroom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.bathroom);


   CARAPI SetPropertyInspectionResidential_Bedroom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.bedroom);

    CARAPI GetPropertyInspectionResidential_Bedroom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.bedroom);


   CARAPI SetPropertyInspectionResidential_DiningRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.diningRoom);

    CARAPI GetPropertyInspectionResidential_DiningRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.diningRoom);


   CARAPI SetPropertyInspectionResidential_InternalDoorways(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.internalDoorways);

    CARAPI GetPropertyInspectionResidential_InternalDoorways(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.internalDoorways);


   CARAPI SetPropertyInspectionResidential_Driveways(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.driveways);

    CARAPI GetPropertyInspectionResidential_Driveways(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.driveways);


   CARAPI SetPropertyInspectionResidential_Ensuite(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.ensuite);

    CARAPI GetPropertyInspectionResidential_Ensuite(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.ensuite);


   CARAPI SetPropertyInspectionResidential_Entrance(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.entrance);

    CARAPI GetPropertyInspectionResidential_Entrance(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.entrance);


   CARAPI SetPropertyInspectionResidential_ExternalAreas(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.externalAreas);

    CARAPI GetPropertyInspectionResidential_ExternalAreas(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.externalAreas);


   CARAPI SetPropertyInspectionResidential_ExternalDoors(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.externalDoors);

    CARAPI GetPropertyInspectionResidential_ExternalDoors(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.externalDoors);


   CARAPI SetPropertyInspectionResidential_FamilyRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.familyRoom);

    CARAPI GetPropertyInspectionResidential_FamilyRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.familyRoom);


   CARAPI SetPropertyInspectionResidential_Fences(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.fences);

    CARAPI GetPropertyInspectionResidential_Fences(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.fences);


   CARAPI SetPropertyInspectionResidential_GarageCarport(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.garageCarport);

    CARAPI GetPropertyInspectionResidential_GarageCarport(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.garageCarport);


   CARAPI SetPropertyInspectionResidential_Gates(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.gates);

    CARAPI GetPropertyInspectionResidential_Gates(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.gates);


   CARAPI SetPropertyInspectionResidential_Gutterings(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.gutterings);

    CARAPI GetPropertyInspectionResidential_Gutterings(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.gutterings);


   CARAPI SetPropertyInspectionResidential_Hallway(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.hallway);

    CARAPI GetPropertyInspectionResidential_Hallway(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.hallway);


   CARAPI SetPropertyInspectionResidential_HotWater(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.hotWater);

    CARAPI GetPropertyInspectionResidential_HotWater(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.hotWater);


   CARAPI SetPropertyInspectionResidential_Kitchen(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.kitchen);

    CARAPI GetPropertyInspectionResidential_Kitchen(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.kitchen);


   CARAPI SetPropertyInspectionResidential_Laundry(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.laundry);

    CARAPI GetPropertyInspectionResidential_Laundry(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.laundry);


   CARAPI SetPropertyInspectionResidential_LetterBox(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.letterBox);

    CARAPI GetPropertyInspectionResidential_LetterBox(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.letterBox);


   CARAPI SetPropertyInspectionResidential_LivingRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.livingRoom);

    CARAPI GetPropertyInspectionResidential_LivingRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.livingRoom);


   CARAPI SetPropertyInspectionResidential_Notes(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.notes);

    CARAPI GetPropertyInspectionResidential_Notes(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.notes);


   CARAPI SetPropertyInspectionResidential_OtherItems(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.otherItems);

    CARAPI GetPropertyInspectionResidential_OtherItems(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.otherItems);


   CARAPI SetPropertyInspectionResidential_Pests(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.pests);

    CARAPI GetPropertyInspectionResidential_Pests(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.pests);


   CARAPI SetPropertyInspectionResidential_PetIssues(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.petIssues);

    CARAPI GetPropertyInspectionResidential_PetIssues(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.petIssues);


   CARAPI SetPropertyInspectionResidential_Plumbing(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.plumbing);

    CARAPI GetPropertyInspectionResidential_Plumbing(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.plumbing);


   CARAPI SetPropertyInspectionResidential_Pool(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.pool);

    CARAPI GetPropertyInspectionResidential_Pool(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.pool);


   CARAPI SetPropertyInspectionResidential_RecreationRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.recreationRoom);

    CARAPI GetPropertyInspectionResidential_RecreationRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.recreationRoom);


   CARAPI SetPropertyInspectionResidential_Roof(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.roof);

    CARAPI GetPropertyInspectionResidential_Roof(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.roof);


   CARAPI SetPropertyInspectionResidential_ScreenDoors(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.screenDoors);

    CARAPI GetPropertyInspectionResidential_ScreenDoors(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.screenDoors);


   CARAPI SetPropertyInspectionResidential_StructuralIntegrity(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.structuralIntegrity);

    CARAPI GetPropertyInspectionResidential_StructuralIntegrity(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.structuralIntegrity);


   CARAPI SetPropertyInspectionResidential_TennisCourt(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.tennisCourt);

    CARAPI GetPropertyInspectionResidential_TennisCourt(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.tennisCourt);


   CARAPI SetPropertyInspectionResidential_Toilet(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.toilet);

    CARAPI GetPropertyInspectionResidential_Toilet(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.toilet);


   CARAPI SetPropertyInspectionResidential_WiringElectrical(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.wiringElectrical);

    CARAPI GetPropertyInspectionResidential_WiringElectrical(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.wiringElectrical);


   CARAPI SetPropertyInspectionResidential_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.propertyInspectionResidential.businessChannelOwnerId);

    CARAPI GetPropertyInspectionResidential_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.propertyInspectionResidential.businessChannelOwnerId);


   CARAPI SetPropertyInspectionResidential_BranchId(
  /* [in] */ CAdministration.branch CProperty.propertyInspectionResidential.branchId);

    CARAPI GetPropertyInspectionResidential_BranchId(
  /* [out] */ CAdministration.branch* CProperty.propertyInspectionResidential.branchId);


   CARAPI SetPropertyInspectionResidential_DeptId(
  /* [in] */ CAdministration.department CProperty.propertyInspectionResidential.deptId);

    CARAPI GetPropertyInspectionResidential_DeptId(
  /* [out] */ CAdministration.department* CProperty.propertyInspectionResidential.deptId);


   CARAPI SetPropertyInspectionResidential_PropertyId(
  /* [in] */ CProperty.property CProperty.propertyInspectionResidential.propertyId);

    CARAPI GetPropertyInspectionResidential_PropertyId(
  /* [out] */ CProperty.property* CProperty.propertyInspectionResidential.propertyId);


   CARAPI SetPropertyInspectionResidential_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.propertyInspectionResidential.docRefIds);

    CARAPI GetPropertyInspectionResidential_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.propertyInspectionResidential.docRefIds);


   CARAPI SetPropertyInspectionResidential_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.propertyInspectionResidential.imageRefIds);

    CARAPI GetPropertyInspectionResidential_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.propertyInspectionResidential.imageRefIds);


   CARAPI SetPropertyInspectionResidential_AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> CProperty.propertyInspectionResidential.audioRefIds);

    CARAPI GetPropertyInspectionResidential_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CProperty.propertyInspectionResidential.audioRefIds);


   CARAPI SetPropertyInspectionResidential_VideoRefIds(
  /* [in] */ ArrayOf<CAdministration.video> CProperty.propertyInspectionResidential.videoRefIds);

    CARAPI GetPropertyInspectionResidential_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CProperty.propertyInspectionResidential.videoRefIds);


   CARAPI SetPropertyInspectionResidential_TenancyId(
  /* [in] */ CProperty.tenant CProperty.propertyInspectionResidential.tenancyId);

    CARAPI GetPropertyInspectionResidential_TenancyId(
  /* [out] */ CProperty.tenant* CProperty.propertyInspectionResidential.tenancyId);


   CARAPI SetPropertyInspectionResidential_EmployeeIds(
  /* [in] */ ArrayOf<CAdministration.staff> CProperty.propertyInspectionResidential.employeeIds);

    CARAPI GetPropertyInspectionResidential_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CProperty.propertyInspectionResidential.employeeIds);





   CARAPI SetPropertyInspectionCommercial_PropertyInspectionCommercId(
  /* [in] */ const String& CProperty.propertyInspectionCommercial.propertyInspectionCommercId);

    CARAPI GetPropertyInspectionCommercial_PropertyInspectionCommercId(
  /* [out] */ String* CProperty.propertyInspectionCommercial.propertyInspectionCommercId);


   CARAPI SetPropertyInspectionCommercial_InspectionDates(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.inspectionDates);

    CARAPI GetPropertyInspectionCommercial_InspectionDates(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.inspectionDates);


   CARAPI SetPropertyInspectionCommercial_PropertyAddressString(
  /* [in] */ const String& CProperty.propertyInspectionCommercial.propertyAddressString);

    CARAPI GetPropertyInspectionCommercial_PropertyAddressString(
  /* [out] */ String* CProperty.propertyInspectionCommercial.propertyAddressString);


   CARAPI SetPropertyInspectionCommercial_UnitNumber(
  /* [in] */ const String& CProperty.propertyInspectionCommercial.unitNumber);

    CARAPI GetPropertyInspectionCommercial_UnitNumber(
  /* [out] */ String* CProperty.propertyInspectionCommercial.unitNumber);


   CARAPI SetPropertyInspectionCommercial_AirConditioning(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.airConditioning);

    CARAPI GetPropertyInspectionCommercial_AirConditioning(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.airConditioning);


   CARAPI SetPropertyInspectionCommercial_DiningRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.diningRoom);

    CARAPI GetPropertyInspectionCommercial_DiningRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.diningRoom);


   CARAPI SetPropertyInspectionCommercial_InternalDoorways(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.internalDoorways);

    CARAPI GetPropertyInspectionCommercial_InternalDoorways(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.internalDoorways);


   CARAPI SetPropertyInspectionCommercial_Driveways(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.driveways);

    CARAPI GetPropertyInspectionCommercial_Driveways(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.driveways);


   CARAPI SetPropertyInspectionCommercial_Entrance(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.entrance);

    CARAPI GetPropertyInspectionCommercial_Entrance(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.entrance);


   CARAPI SetPropertyInspectionCommercial_ExternalAreas(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.externalAreas);

    CARAPI GetPropertyInspectionCommercial_ExternalAreas(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.externalAreas);


   CARAPI SetPropertyInspectionCommercial_ExternalDoors(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.externalDoors);

    CARAPI GetPropertyInspectionCommercial_ExternalDoors(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.externalDoors);


   CARAPI SetPropertyInspectionCommercial_FactorySpace(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.factorySpace);

    CARAPI GetPropertyInspectionCommercial_FactorySpace(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.factorySpace);


   CARAPI SetPropertyInspectionCommercial_Fences(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.fences);

    CARAPI GetPropertyInspectionCommercial_Fences(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.fences);


   CARAPI SetPropertyInspectionCommercial_GarageCarport(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.garageCarport);

    CARAPI GetPropertyInspectionCommercial_GarageCarport(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.garageCarport);


   CARAPI SetPropertyInspectionCommercial_Gates(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.gates);

    CARAPI GetPropertyInspectionCommercial_Gates(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.gates);


   CARAPI SetPropertyInspectionCommercial_Gutterings(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.gutterings);

    CARAPI GetPropertyInspectionCommercial_Gutterings(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.gutterings);


   CARAPI SetPropertyInspectionCommercial_Hallway(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.hallway);

    CARAPI GetPropertyInspectionCommercial_Hallway(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.hallway);


   CARAPI SetPropertyInspectionCommercial_Heating(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.heating);

    CARAPI GetPropertyInspectionCommercial_Heating(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.heating);


   CARAPI SetPropertyInspectionCommercial_HotWater(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.hotWater);

    CARAPI GetPropertyInspectionCommercial_HotWater(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.hotWater);


   CARAPI SetPropertyInspectionCommercial_Kitchen(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.kitchen);

    CARAPI GetPropertyInspectionCommercial_Kitchen(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.kitchen);


   CARAPI SetPropertyInspectionCommercial_Laundry(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.laundry);

    CARAPI GetPropertyInspectionCommercial_Laundry(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.laundry);


   CARAPI SetPropertyInspectionCommercial_Notes(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.notes);

    CARAPI GetPropertyInspectionCommercial_Notes(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.notes);


   CARAPI SetPropertyInspectionCommercial_OfficeSpace(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.officeSpace);

    CARAPI GetPropertyInspectionCommercial_OfficeSpace(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.officeSpace);


   CARAPI SetPropertyInspectionCommercial_ParkingSpaces(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.parkingSpaces);

    CARAPI GetPropertyInspectionCommercial_ParkingSpaces(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.parkingSpaces);


   CARAPI SetPropertyInspectionCommercial_OtherItems(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.otherItems);

    CARAPI GetPropertyInspectionCommercial_OtherItems(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.otherItems);


   CARAPI SetPropertyInspectionCommercial_Pests(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.pests);

    CARAPI GetPropertyInspectionCommercial_Pests(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.pests);


   CARAPI SetPropertyInspectionCommercial_OtherIssues(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.otherIssues);

    CARAPI GetPropertyInspectionCommercial_OtherIssues(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.otherIssues);


   CARAPI SetPropertyInspectionCommercial_Plumbing(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.plumbing);

    CARAPI GetPropertyInspectionCommercial_Plumbing(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.plumbing);


   CARAPI SetPropertyInspectionCommercial_RecreationRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.recreationRoom);

    CARAPI GetPropertyInspectionCommercial_RecreationRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.recreationRoom);


   CARAPI SetPropertyInspectionCommercial_RetailSpace(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.retailSpace);

    CARAPI GetPropertyInspectionCommercial_RetailSpace(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.retailSpace);


   CARAPI SetPropertyInspectionCommercial_Roof(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.roof);

    CARAPI GetPropertyInspectionCommercial_Roof(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.roof);


   CARAPI SetPropertyInspectionCommercial_ScreenDoors(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.screenDoors);

    CARAPI GetPropertyInspectionCommercial_ScreenDoors(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.screenDoors);


   CARAPI SetPropertyInspectionCommercial_StructuralIntegrity(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.structuralIntegrity);

    CARAPI GetPropertyInspectionCommercial_StructuralIntegrity(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.structuralIntegrity);


   CARAPI SetPropertyInspectionCommercial_Floors(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.floors);

    CARAPI GetPropertyInspectionCommercial_Floors(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.floors);


   CARAPI SetPropertyInspectionCommercial_Toilet(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.toilet);

    CARAPI GetPropertyInspectionCommercial_Toilet(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.toilet);


   CARAPI SetPropertyInspectionCommercial_VentilationIncludingFans(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.ventilationIncludingFans);

    CARAPI GetPropertyInspectionCommercial_VentilationIncludingFans(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.ventilationIncludingFans);


   CARAPI SetPropertyInspectionCommercial_WarehouseSpace(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.warehouseSpace);

    CARAPI GetPropertyInspectionCommercial_WarehouseSpace(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.warehouseSpace);


   CARAPI SetPropertyInspectionCommercial_Washroom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.washroom);

    CARAPI GetPropertyInspectionCommercial_Washroom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.washroom);


   CARAPI SetPropertyInspectionCommercial_WiringElectrical(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.wiringElectrical);

    CARAPI GetPropertyInspectionCommercial_WiringElectrical(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.wiringElectrical);


   CARAPI SetPropertyInspectionCommercial_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.propertyInspectionCommercial.businessChannelOwnerId);

    CARAPI GetPropertyInspectionCommercial_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.propertyInspectionCommercial.businessChannelOwnerId);


   CARAPI SetPropertyInspectionCommercial_BranchId(
  /* [in] */ CAdministration.branch CProperty.propertyInspectionCommercial.branchId);

    CARAPI GetPropertyInspectionCommercial_BranchId(
  /* [out] */ CAdministration.branch* CProperty.propertyInspectionCommercial.branchId);


   CARAPI SetPropertyInspectionCommercial_DeptId(
  /* [in] */ CAdministration.department CProperty.propertyInspectionCommercial.deptId);

    CARAPI GetPropertyInspectionCommercial_DeptId(
  /* [out] */ CAdministration.department* CProperty.propertyInspectionCommercial.deptId);


   CARAPI SetPropertyInspectionCommercial_PropertyId(
  /* [in] */ CProperty.property CProperty.propertyInspectionCommercial.propertyId);

    CARAPI GetPropertyInspectionCommercial_PropertyId(
  /* [out] */ CProperty.property* CProperty.propertyInspectionCommercial.propertyId);


   CARAPI SetPropertyInspectionCommercial_TenancyId(
  /* [in] */ CProperty.tenant CProperty.propertyInspectionCommercial.tenancyId);

    CARAPI GetPropertyInspectionCommercial_TenancyId(
  /* [out] */ CProperty.tenant* CProperty.propertyInspectionCommercial.tenancyId);


   CARAPI SetPropertyInspectionCommercial_EmployeeIds(
  /* [in] */ ArrayOf<CAdministration.staff> CProperty.propertyInspectionCommercial.employeeIds);

    CARAPI GetPropertyInspectionCommercial_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CProperty.propertyInspectionCommercial.employeeIds);


   CARAPI SetPropertyInspectionCommercial_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.propertyInspectionCommercial.docRefIds);

    CARAPI GetPropertyInspectionCommercial_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.propertyInspectionCommercial.docRefIds);


   CARAPI SetPropertyInspectionCommercial_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.propertyInspectionCommercial.imageRefIds);

    CARAPI GetPropertyInspectionCommercial_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.propertyInspectionCommercial.imageRefIds);


   CARAPI SetPropertyInspectionCommercial_AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> CProperty.propertyInspectionCommercial.audioRefIds);

    CARAPI GetPropertyInspectionCommercial_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CProperty.propertyInspectionCommercial.audioRefIds);


   CARAPI SetPropertyInspectionCommercial_VideoRefIds(
  /* [in] */ ArrayOf<CAdministration.video> CProperty.propertyInspectionCommercial.videoRefIds);

    CARAPI GetPropertyInspectionCommercial_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CProperty.propertyInspectionCommercial.videoRefIds);





   CARAPI SetTenancyCaseManagement_TenancyCaseMngmntId(
  /* [in] */ const String& CProperty.tenancyCaseManagement.tenancyCaseMngmntId);

    CARAPI GetTenancyCaseManagement_TenancyCaseMngmntId(
  /* [out] */ String* CProperty.tenancyCaseManagement.tenancyCaseMngmntId);


   CARAPI SetTenancyCaseManagement_SupervisorStaffId(
  /* [in] */ const String& CProperty.tenancyCaseManagement.supervisorStaffId);

    CARAPI GetTenancyCaseManagement_SupervisorStaffId(
  /* [out] */ String* CProperty.tenancyCaseManagement.supervisorStaffId);


   CARAPI SetTenancyCaseManagement_TenantActionsInChronologicalOrder(
  /* [in] */ ArrayOf<const String&> CProperty.tenancyCaseManagement.tenantActionsInChronologicalOrder);

    CARAPI GetTenancyCaseManagement_TenantActionsInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* CProperty.tenancyCaseManagement.tenantActionsInChronologicalOrder);


   CARAPI SetTenancyCaseManagement_DatesTimesOfEvents(
  /* [in] */ ArrayOf<const String&> CProperty.tenancyCaseManagement.datesTimesOfEvents);

    CARAPI GetTenancyCaseManagement_DatesTimesOfEvents(
     /* [out, callee] */ ArrayOf<String>* CProperty.tenancyCaseManagement.datesTimesOfEvents);


   CARAPI SetTenancyCaseManagement_OurResponsesInChronologicalOrder(
  /* [in] */ ArrayOf<const String&> CProperty.tenancyCaseManagement.ourResponsesInChronologicalOrder);

    CARAPI GetTenancyCaseManagement_OurResponsesInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* CProperty.tenancyCaseManagement.ourResponsesInChronologicalOrder);


   CARAPI SetTenancyCaseManagement_DatesTimesOfResponses(
  /* [in] */ ArrayOf<const String&> CProperty.tenancyCaseManagement.datesTimesOfResponses);

    CARAPI GetTenancyCaseManagement_DatesTimesOfResponses(
     /* [out, callee] */ ArrayOf<String>* CProperty.tenancyCaseManagement.datesTimesOfResponses);


   CARAPI SetTenancyCaseManagement_Resolved(
  /* [in] */ Boolean CProperty.tenancyCaseManagement.resolved);

    CARAPI GetTenancyCaseManagement_Resolved(
  /* [out] */ Boolean* CProperty.tenancyCaseManagement.resolved);


   CARAPI SetTenancyCaseManagement_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.tenancyCaseManagement.businessChannelOwnerId);

    CARAPI GetTenancyCaseManagement_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.tenancyCaseManagement.businessChannelOwnerId);


   CARAPI SetTenancyCaseManagement_PropertyId(
  /* [in] */ CProperty.property CProperty.tenancyCaseManagement.propertyId);

    CARAPI GetTenancyCaseManagement_PropertyId(
  /* [out] */ CProperty.property* CProperty.tenancyCaseManagement.propertyId);


   CARAPI SetTenancyCaseManagement_BranchId(
  /* [in] */ CAdministration.branch CProperty.tenancyCaseManagement.branchId);

    CARAPI GetTenancyCaseManagement_BranchId(
  /* [out] */ CAdministration.branch* CProperty.tenancyCaseManagement.branchId);


   CARAPI SetTenancyCaseManagement_TenancyId(
  /* [in] */ CProperty.tenant CProperty.tenancyCaseManagement.tenancyId);

    CARAPI GetTenancyCaseManagement_TenancyId(
  /* [out] */ CProperty.tenant* CProperty.tenancyCaseManagement.tenancyId);


   CARAPI SetTenancyCaseManagement_CustomerIds(
  /* [in] */ ArrayOf<CCustomer.customer> CProperty.tenancyCaseManagement.customerIds);

    CARAPI GetTenancyCaseManagement_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CProperty.tenancyCaseManagement.customerIds);


   CARAPI SetTenancyCaseManagement_EmployeeIds(
  /* [in] */ ArrayOf<CAdministration.staff> CProperty.tenancyCaseManagement.employeeIds);

    CARAPI GetTenancyCaseManagement_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CProperty.tenancyCaseManagement.employeeIds);


   CARAPI SetTenancyCaseManagement_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.tenancyCaseManagement.docRefIds);

    CARAPI GetTenancyCaseManagement_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.tenancyCaseManagement.docRefIds);


   CARAPI SetTenancyCaseManagement_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.tenancyCaseManagement.imageRefIds);

    CARAPI GetTenancyCaseManagement_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.tenancyCaseManagement.imageRefIds);


protected:
    // Member variables
const String& mSetProperty_PropertyId
String* mGetProperty_PropertyId
const String& mSetProperty_PropertyAddressString
String* mGetProperty_PropertyAddressString
const String& mSetProperty_UnitNumber
String* mGetProperty_UnitNumber
const String& mSetProperty_StreetNumber
String* mGetProperty_StreetNumber
const String& mSetProperty_StreetName
String* mGetProperty_StreetName
const String& mSetProperty_SuburbTown
String* mGetProperty_SuburbTown
Int32 mSetProperty.Postcode
Int32* mGetProperty.Postcode
CHelper.ausState mSetProperty_State
CHelper.ausState* mGetProperty_State
const String& mSetProperty_EnvelopeGreetings
String* mGetProperty_EnvelopeGreetings
const String& mSetProperty_CorrespondenceFolderDocRef
String* mGetProperty_CorrespondenceFolderDocRef
const String& mSetProperty_StartDateLatestLease
String* mGetProperty_StartDateLatestLease
const String& mSetProperty_EndDateLatestLease
String* mGetProperty_EndDateLatestLease
Boolean mSetProperty.Occupied
Boolean* mGetProperty.Occupied
const String& mSetProperty_LocalGovArea
String* mGetProperty_LocalGovArea
const String& mSetProperty_Zoning
String* mGetProperty_Zoning
const String& mSetProperty_Lot
String* mGetProperty_Lot
const String& mSetProperty_DP
String* mGetProperty_DP
const String& mSetProperty_SP
String* mGetProperty_SP
const String& mSetProperty_DCPNum
String* mGetProperty_DCPNum
const String& mSetProperty_Parish
String* mGetProperty_Parish
const String& mSetProperty_Description
String* mGetProperty_Description
Double mSetProperty.Lon
Double* mGetProperty_Lon
Double mSetProperty.Lat
Double* mGetProperty_Lat
Double mSetProperty.Elevation
Double* mGetProperty_Elevation
Boolean mSetProperty.Liens
Boolean* mGetProperty.Liens
Int32 mSetProperty.NumBedrooms
Int32* mGetProperty.NumBedrooms
Int32 mSetProperty.NumEnsuites
Int32* mGetProperty.NumEnsuites
Int32 mSetProperty.NumBathrooms
Int32* mGetProperty.NumBathrooms
Int32 mSetProperty.NumStoreys
Int32* mGetProperty.NumStoreys
Boolean mSetProperty.Furnished
Boolean* mGetProperty.Furnished
const String& mSetProperty_ConstructionTypeName
String* mGetProperty_ConstructionTypeName
const String& mSetProperty_FolioCertCopyDocRef
String* mGetProperty_FolioCertCopyDocRef
const String& mSetProperty_CopyOfDepositedPlanDocRef
String* mGetProperty_CopyOfDepositedPlanDocRef
ArrayOf<const String&> mSetProperty_CopiesOfLiensDocrefs
ArrayOf<String>* mGetProperty_CopiesOfLiensDocrefs
const String& mSetProperty_CopyOfBuildingCertDocRef
String* mGetProperty_CopyOfBuildingCertDocRef
const String& mSetProperty_CopyOfInsuranceCertDocRef
String* mGetProperty_CopyOfInsuranceCertDocRef
const String& mSetProperty_FolderContainingWarrantiesDocRef
String* mGetProperty_FolderContainingWarrantiesDocRef
const String& mSetProperty_CopyOfPlanningCertSection149DEPADocRef
String* mGetProperty_CopyOfPlanningCertSection149DEPADocRef
const String& mSetProperty_CopyOfSection88GCertDocRef
String* mGetProperty_CopyOfSection88GCertDocRef
const String& mSetProperty_FolderContainingAdditionalAnnexuresDocRef
String* mGetProperty_FolderContainingAdditionalAnnexuresDocRef
const String& mSetProperty_FolderContainingAdditionalDisclosuresDocRef
String* mGetProperty_FolderContainingAdditionalDisclosuresDocRef
ArrayOf<const String&> mSetProperty_CopyOfSurveyReportsDocRefs
ArrayOf<String>* mGetProperty_CopyOfSurveyReportsDocRefs
ArrayOf<const String&> mSetProperty_DrainageDiagsSewerRefSheetsDocRefs
ArrayOf<String>* mGetProperty_DrainageDiagsSewerRefSheetsDocRefs
ArrayOf<const String&> mSetProperty_BuildingInspectionDocRefs
ArrayOf<String>* mGetProperty_BuildingInspectionDocRefs
ArrayOf<const String&> mSetProperty_PestInspectionDocRefs
ArrayOf<String>* mGetProperty_PestInspectionDocRefs
ArrayOf<const String&> mSetProperty_ProblemsWithPropertyDocRefs
ArrayOf<String>* mGetProperty_ProblemsWithPropertyDocRefs
ArrayOf<Double> mSetProperty_PropertyOwnerSharePercents
ArrayOf<Double>* mGetProperty_PropertyOwnerSharePercents
Double mSetProperty.CapitalValue
Double* mGetProperty_CapitalValue
Double mSetProperty.FloorPrice
Double* mGetProperty_FloorPrice
Double mSetProperty.LatestBuyOfferPrice
Double* mGetProperty_LatestBuyOfferPrice
const String& mSetProperty_LatestBuyOfferDateTime
String* mGetProperty_LatestBuyOfferDateTime
Boolean mSetProperty.LatestBuyOfferPriceAccepted
Boolean* mGetProperty.LatestBuyOfferPriceAccepted
ArrayOf<const String&> mSetProperty_LatestBuyOfferNotes
ArrayOf<String>* mGetProperty_LatestBuyOfferNotes
Double mSetProperty.RentalValue
Double* mGetProperty_RentalValue
Double mSetProperty.LandTotalSquareMetres
Double* mGetProperty_LandTotalSquareMetres
Double mSetProperty.LandTotalHectares
Double* mGetProperty_LandTotalHectares
Double mSetProperty.BuildingTotalSquareMetres
Double* mGetProperty_BuildingTotalSquareMetres
ArrayOf<const String&> mSetProperty_Amenities
ArrayOf<String>* mGetProperty_Amenities
CHelper.propertyTradingBasis mSetProperty_PropertyTradingBasis
CHelper.propertyTradingBasis* mGetProperty_PropertyTradingBasis
CHelper.propertyType mSetProperty_PropertyType
CHelper.propertyType* mGetProperty_PropertyType
CHelper.leaseType mSetProperty_LeaseType
CHelper.leaseType* mGetProperty_LeaseType
CHelper.leaseArrangement mSetProperty_LeaseArrangement
CHelper.leaseArrangement* mGetProperty_LeaseArrangement
CHelper.leasingTerm mSetProperty_LeasingTerm
CHelper.leasingTerm* mGetProperty_LeasingTerm
CHelper.billingInterval mSetProperty_RentalPaymentInterval
CHelper.billingInterval* mGetProperty_RentalPaymentInterval
CRegister.businessChannelOwner mSetProperty_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetProperty_BusinessChannelOwnerId
CAdministration.branch mSetProperty_BranchId
CAdministration.branch* mGetProperty_BranchId
CAdministration.department mSetProperty_DeptId
CAdministration.department* mGetProperty_DeptId
ArrayOf<CProperty.propertyOwner> mSetProperty_PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetProperty_PropertyOwnerIds
CProperty.propertyConstructionType mSetProperty_PropertyConstructionTypeId
CProperty.propertyConstructionType* mGetProperty_PropertyConstructionTypeId
CProperty.tenant mSetProperty_TenancyId
CProperty.tenant* mGetProperty_TenancyId
ArrayOf<CAdministration.documents> mSetProperty_DocRefs
ArrayOf<CAdministration.documents>* mGetProperty_DocRefs
ArrayOf<CAdministration.images> mSetProperty_ImageRefs
ArrayOf<CAdministration.images>* mGetProperty_ImageRefs
ArrayOf<CAdministration.audio> mSetProperty_AudioRefIds
ArrayOf<CAdministration.audio>* mGetProperty_AudioRefIds
ArrayOf<CAdministration.video> mSetProperty_VideoRefs
ArrayOf<CAdministration.video>* mGetProperty_VideoRefs
const String& mSetPropertyConstructionType_PropertyConstructionTypeId
String* mGetPropertyConstructionType_PropertyConstructionTypeId
const String& mSetPropertyConstructionType_ConstructionTypeName
String* mGetPropertyConstructionType_ConstructionTypeName
const String& mSetPropertyConstructionType_Description
String* mGetPropertyConstructionType_Description
ArrayOf<CAdministration.documents> mSetPropertyConstructionType_DocRefIds
ArrayOf<CAdministration.documents>* mGetPropertyConstructionType_DocRefIds
ArrayOf<CAdministration.images> mSetPropertyConstructionType_ImageRefIds
ArrayOf<CAdministration.images>* mGetPropertyConstructionType_ImageRefIds
ArrayOf<CAdministration.audio> mSetPropertyConstructionType_AudioRefIds
ArrayOf<CAdministration.audio>* mGetPropertyConstructionType_AudioRefIds
ArrayOf<CAdministration.video> mSetPropertyConstructionType_VideoRefIds
ArrayOf<CAdministration.video>* mGetPropertyConstructionType_VideoRefIds
ArrayOf<CAdministration.riskRegister> mSetPropertyConstructionType_RiskIds
ArrayOf<CAdministration.riskRegister>* mGetPropertyConstructionType_RiskIds
CRegister.businessChannelOwner mSetPropertyConstructionType_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPropertyConstructionType_BusinessChannelOwnerId
const String& mSetPropertyOwner_PropertyOwnerId
String* mGetPropertyOwner_PropertyOwnerId
const String& mSetPropertyOwner_LinkedToThisCustomerId
String* mGetPropertyOwner_LinkedToThisCustomerId
const String& mSetPropertyOwner_LinkedToThisSupplierId
String* mGetPropertyOwner_LinkedToThisSupplierId
const String& mSetPropertyOwner_FirstName
String* mGetPropertyOwner_FirstName
const String& mSetPropertyOwner_LastName
String* mGetPropertyOwner_LastName
const String& mSetPropertyOwner_ResidentialAddress
String* mGetPropertyOwner_ResidentialAddress
const String& mSetPropertyOwner_PostalAddress
String* mGetPropertyOwner_PostalAddress
const String& mSetPropertyOwner_Email
String* mGetPropertyOwner_Email
Int32 mSetPropertyOwner.HomePhone
Int32* mGetPropertyOwner.HomePhone
Int32 mSetPropertyOwner.MobilePhone
Int32* mGetPropertyOwner.MobilePhone
Int32 mSetPropertyOwner.WorkPhone
Int32* mGetPropertyOwner.WorkPhone
const String& mSetPropertyOwner_BankName
String* mGetPropertyOwner_BankName
Int32 mSetPropertyOwner.BankBSB
Int32* mGetPropertyOwner.BankBSB
Int32 mSetPropertyOwner.BankAccountNumber
Int32* mGetPropertyOwner.BankAccountNumber
ArrayOf<const String&> mSetPropertyOwner_ContactedWithDetails
ArrayOf<String>* mGetPropertyOwner_ContactedWithDetails
ArrayOf<Double> mSetPropertyOwner_SharesPercents
ArrayOf<Double>* mGetPropertyOwner_SharesPercents
CRegister.businessChannelOwner mSetPropertyOwner_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPropertyOwner_BusinessChannelOwnerId
CAdministration.branch mSetPropertyOwner_BranchId
CAdministration.branch* mGetPropertyOwner_BranchId
ArrayOf<CProperty.property> mSetPropertyOwner_PropertyIds
ArrayOf<CProperty.property>* mGetPropertyOwner_PropertyIds
CCustomer.customer mSetPropertyOwner_CustomerId
CCustomer.customer* mGetPropertyOwner_CustomerId
ArrayOf<CAdministration.documents> mSetPropertyOwner_DocRefIds
ArrayOf<CAdministration.documents>* mGetPropertyOwner_DocRefIds
ArrayOf<CAdministration.images> mSetPropertyOwner_ImageRefIds
ArrayOf<CAdministration.images>* mGetPropertyOwner_ImageRefIds
const String& mSetProgram_ProgramId
String* mGetProgram_ProgramId
const String& mSetProgram_ProgramName
String* mGetProgram_ProgramName
const String& mSetProgram_Description
String* mGetProgram_Description
ArrayOf<CAdministration.documents> mSetProgram_DocRefIds
ArrayOf<CAdministration.documents>* mGetProgram_DocRefIds
ArrayOf<CAdministration.images> mSetProgram_ImageRefIds
ArrayOf<CAdministration.images>* mGetProgram_ImageRefIds
CRegister.businessChannelOwner mSetProgram_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetProgram_BusinessChannelOwnerId
CAdministration.branch mSetProgram_BranchId
CAdministration.branch* mGetProgram_BranchId
CAdministration.department mSetProgram_DeptId
CAdministration.department* mGetProgram_DeptId
const String& mSetProject_ProjectId
String* mGetProject_ProjectId
const String& mSetProject_ProjectName
String* mGetProject_ProjectName
const String& mSetProject_Description
String* mGetProject_Description
ArrayOf<CAdministration.documents> mSetProject_DocRefIds
ArrayOf<CAdministration.documents>* mGetProject_DocRefIds
ArrayOf<CAdministration.images> mSetProject_ImageRefIds
ArrayOf<CAdministration.images>* mGetProject_ImageRefIds
CRegister.businessChannelOwner mSetProject_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetProject_BusinessChannelOwnerId
CAdministration.branch mSetProject_BranchId
CAdministration.branch* mGetProject_BranchId
CAdministration.department mSetProject_DeptId
CAdministration.department* mGetProject_DeptId
const String& mSetAdvertisingBudgetSchedule_AdvertScheduleId
String* mGetAdvertisingBudgetSchedule_AdvertScheduleId
CHelper.advertisingMedium mSetAdvertisingBudgetSchedule_AdvertisingMedium
CHelper.advertisingMedium* mGetAdvertisingBudgetSchedule_AdvertisingMedium
const String& mSetAdvertisingBudgetSchedule_PreviousSchedId
String* mGetAdvertisingBudgetSchedule_PreviousSchedId
CHelper.month mSetAdvertisingBudgetSchedule_month
CHelper.month* mGetAdvertisingBudgetSchedule_month
Double mSetAdvertisingBudgetSchedule.BudgetedAmount
Double* mGetAdvertisingBudgetSchedule_BudgetedAmount
ArrayOf<const String&> mSetAdvertisingBudgetSchedule_RunDateTimes
ArrayOf<String>* mGetAdvertisingBudgetSchedule_RunDateTimes
CProperty.property mSetAdvertisingBudgetSchedule_PropertyId
CProperty.property* mGetAdvertisingBudgetSchedule_PropertyId
ArrayOf<CProperty.propertyOwner> mSetAdvertisingBudgetSchedule_PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetAdvertisingBudgetSchedule_PropertyOwnerIds
ArrayOf<CAdministration.advertisingTemplatesPlans> mSetAdvertisingBudgetSchedule_AdvertDesignIds
ArrayOf<CAdministration.advertisingTemplatesPlans>* mGetAdvertisingBudgetSchedule_AdvertDesignIds
CRegister.businessChannelOwner mSetAdvertisingBudgetSchedule_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAdvertisingBudgetSchedule_BusinessChannelOwnerId
CAdministration.branch mSetAdvertisingBudgetSchedule_BranchId
CAdministration.branch* mGetAdvertisingBudgetSchedule_BranchId
CAdministration.department mSetAdvertisingBudgetSchedule_DeptId
CAdministration.department* mGetAdvertisingBudgetSchedule_DeptId
const String& mSetAllocation_AllocationId
String* mGetAllocation_AllocationId
ArrayOf<const String&> mSetAllocation_ApplicationIds
ArrayOf<String>* mGetAllocation_ApplicationIds
ArrayOf<const String&> mSetAllocation_DocRefs
ArrayOf<String>* mGetAllocation_DocRefs
ArrayOf<const String&> mSetAllocation_Notes
ArrayOf<String>* mGetAllocation_Notes
const String& mSetAllocation_DateOfEffect
String* mGetAllocation_DateOfEffect
CProperty.property mSetAllocation_PropertyId
CProperty.property* mGetAllocation_PropertyId
CCustomer.application mSetAllocation_SuccessfulApplicationId
CCustomer.application* mGetAllocation_SuccessfulApplicationId
CProperty.tenant mSetAllocation_SuccessfulTenancyId
CProperty.tenant* mGetAllocation_SuccessfulTenancyId
CRegister.businessChannelOwner mSetAllocation_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAllocation_BusinessChannelOwnerId
CAdministration.branch mSetAllocation_BranchId
CAdministration.branch* mGetAllocation_BranchId
CAdministration.department mSetAllocation_DeptId
CAdministration.department* mGetAllocation_DeptId
const String& mSetTenant_TenancyId
String* mGetTenant_TenancyId
const String& mSetTenant_ABN
String* mGetTenant_ABN
const String& mSetTenant_BusinessName
String* mGetTenant_BusinessName
const String& mSetTenant_FirstName
String* mGetTenant_FirstName
const String& mSetTenant_LastName
String* mGetTenant_LastName
const String& mSetTenant_ResidentialAddress
String* mGetTenant_ResidentialAddress
const String& mSetTenant_PostalAddress
String* mGetTenant_PostalAddress
const String& mSetTenant_Email
String* mGetTenant_Email
Int32 mSetTenant.HomePhone
Int32* mGetTenant.HomePhone
Int32 mSetTenant.MobilePhone
Int32* mGetTenant.MobilePhone
Int32 mSetTenant.WorkPhone
Int32* mGetTenant.WorkPhone
ArrayOf<const String&> mSetTenant_ContactedWithDetails
ArrayOf<String>* mGetTenant_ContactedWithDetails
CProperty.allocation mSetTenant_AllocationId
CProperty.allocation* mGetTenant_AllocationId
ArrayOf<CCustomer.applicant> mSetTenant_ApplicantIds
ArrayOf<CCustomer.applicant>* mGetTenant_ApplicantIds
CCustomer.customer mSetTenant_CustomerId
CCustomer.customer* mGetTenant_CustomerId
CProperty.property mSetTenant_PropertyId
CProperty.property* mGetTenant_PropertyId
CAdministration.branch mSetTenant_BranchId
CAdministration.branch* mGetTenant_BranchId
CFinance.chartOfAccounts mSetTenant_ChartOfAccountsId
CFinance.chartOfAccounts* mGetTenant_ChartOfAccountsId
CFinance.chartOfClasses mSetTenant_ChartOfClassesId
CFinance.chartOfClasses* mGetTenant_ChartOfClassesId
ArrayOf<CAdministration.documents> mSetTenant_DocRefIds
ArrayOf<CAdministration.documents>* mGetTenant_DocRefIds
ArrayOf<CAdministration.images> mSetTenant_ImageRefIds
ArrayOf<CAdministration.images>* mGetTenant_ImageRefIds
CRegister.businessChannelOwner mSetTenant_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTenant_BusinessChannelOwnerId
const String& mSetPropertyOwnerPropertyJoin_PropOwnerPropJoinId
String* mGetPropertyOwnerPropertyJoin_PropOwnerPropJoinId
Double mSetPropertyOwnerPropertyJoin.OwnershipPercentage
Double* mGetPropertyOwnerPropertyJoin_OwnershipPercentage
CProperty.property mSetPropertyOwnerPropertyJoin_PropertyId
CProperty.property* mGetPropertyOwnerPropertyJoin_PropertyId
CProperty.propertyOwner mSetPropertyOwnerPropertyJoin_PropertyOwnerId
CProperty.propertyOwner* mGetPropertyOwnerPropertyJoin_PropertyOwnerId
CRegister.businessChannelOwner mSetPropertyOwnerPropertyJoin_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPropertyOwnerPropertyJoin_BusinessChannelOwnerId
const String& mSetCustomerPropertyJoin_CustPropJoinId
String* mGetCustomerPropertyJoin_CustPropJoinId
CHelper.relationship mSetCustomerPropertyJoin_Relationship
CHelper.relationship* mGetCustomerPropertyJoin_Relationship
CCustomer.customer mSetCustomerPropertyJoin_CustomerId
CCustomer.customer* mGetCustomerPropertyJoin_CustomerId
CProperty.property mSetCustomerPropertyJoin_PropertyId
CProperty.property* mGetCustomerPropertyJoin_PropertyId
CRegister.businessChannelOwner mSetCustomerPropertyJoin_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomerPropertyJoin_BusinessChannelOwnerId
const String& mSetCustomerPropertyOwnerJoin_CustPropOwnerJoinId
String* mGetCustomerPropertyOwnerJoin_CustPropOwnerJoinId
CCustomer.customer mSetCustomerPropertyOwnerJoin_CustomerId
CCustomer.customer* mGetCustomerPropertyOwnerJoin_CustomerId
CProperty.propertyOwner mSetCustomerPropertyOwnerJoin_PropertyOwnerId
CProperty.propertyOwner* mGetCustomerPropertyOwnerJoin_PropertyOwnerId
CRegister.businessChannelOwner mSetCustomerPropertyOwnerJoin_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomerPropertyOwnerJoin_BusinessChannelOwnerId
const String& mSetPropertyInspectionResidential_PropertyInspectionResId
String* mGetPropertyInspectionResidential_PropertyInspectionResId
ArrayOf<const String&> mSetPropertyInspectionResidential_InspectionDates
ArrayOf<String>* mGetPropertyInspectionResidential_InspectionDates
const String& mSetPropertyInspectionResidential_PropertyAddressString
String* mGetPropertyInspectionResidential_PropertyAddressString
const String& mSetPropertyInspectionResidential_UnitNumber
String* mGetPropertyInspectionResidential_UnitNumber
ArrayOf<const String&> mSetPropertyInspectionResidential_Bathroom
ArrayOf<String>* mGetPropertyInspectionResidential_Bathroom
ArrayOf<const String&> mSetPropertyInspectionResidential_Bedroom
ArrayOf<String>* mGetPropertyInspectionResidential_Bedroom
ArrayOf<const String&> mSetPropertyInspectionResidential_DiningRoom
ArrayOf<String>* mGetPropertyInspectionResidential_DiningRoom
ArrayOf<const String&> mSetPropertyInspectionResidential_InternalDoorways
ArrayOf<String>* mGetPropertyInspectionResidential_InternalDoorways
ArrayOf<const String&> mSetPropertyInspectionResidential_Driveways
ArrayOf<String>* mGetPropertyInspectionResidential_Driveways
ArrayOf<const String&> mSetPropertyInspectionResidential_Ensuite
ArrayOf<String>* mGetPropertyInspectionResidential_Ensuite
ArrayOf<const String&> mSetPropertyInspectionResidential_Entrance
ArrayOf<String>* mGetPropertyInspectionResidential_Entrance
ArrayOf<const String&> mSetPropertyInspectionResidential_ExternalAreas
ArrayOf<String>* mGetPropertyInspectionResidential_ExternalAreas
ArrayOf<const String&> mSetPropertyInspectionResidential_ExternalDoors
ArrayOf<String>* mGetPropertyInspectionResidential_ExternalDoors
ArrayOf<const String&> mSetPropertyInspectionResidential_FamilyRoom
ArrayOf<String>* mGetPropertyInspectionResidential_FamilyRoom
ArrayOf<const String&> mSetPropertyInspectionResidential_Fences
ArrayOf<String>* mGetPropertyInspectionResidential_Fences
ArrayOf<const String&> mSetPropertyInspectionResidential_GarageCarport
ArrayOf<String>* mGetPropertyInspectionResidential_GarageCarport
ArrayOf<const String&> mSetPropertyInspectionResidential_Gates
ArrayOf<String>* mGetPropertyInspectionResidential_Gates
ArrayOf<const String&> mSetPropertyInspectionResidential_Gutterings
ArrayOf<String>* mGetPropertyInspectionResidential_Gutterings
ArrayOf<const String&> mSetPropertyInspectionResidential_Hallway
ArrayOf<String>* mGetPropertyInspectionResidential_Hallway
ArrayOf<const String&> mSetPropertyInspectionResidential_HotWater
ArrayOf<String>* mGetPropertyInspectionResidential_HotWater
ArrayOf<const String&> mSetPropertyInspectionResidential_Kitchen
ArrayOf<String>* mGetPropertyInspectionResidential_Kitchen
ArrayOf<const String&> mSetPropertyInspectionResidential_Laundry
ArrayOf<String>* mGetPropertyInspectionResidential_Laundry
ArrayOf<const String&> mSetPropertyInspectionResidential_LetterBox
ArrayOf<String>* mGetPropertyInspectionResidential_LetterBox
ArrayOf<const String&> mSetPropertyInspectionResidential_LivingRoom
ArrayOf<String>* mGetPropertyInspectionResidential_LivingRoom
ArrayOf<const String&> mSetPropertyInspectionResidential_Notes
ArrayOf<String>* mGetPropertyInspectionResidential_Notes
ArrayOf<const String&> mSetPropertyInspectionResidential_OtherItems
ArrayOf<String>* mGetPropertyInspectionResidential_OtherItems
ArrayOf<const String&> mSetPropertyInspectionResidential_Pests
ArrayOf<String>* mGetPropertyInspectionResidential_Pests
ArrayOf<const String&> mSetPropertyInspectionResidential_PetIssues
ArrayOf<String>* mGetPropertyInspectionResidential_PetIssues
ArrayOf<const String&> mSetPropertyInspectionResidential_Plumbing
ArrayOf<String>* mGetPropertyInspectionResidential_Plumbing
ArrayOf<const String&> mSetPropertyInspectionResidential_Pool
ArrayOf<String>* mGetPropertyInspectionResidential_Pool
ArrayOf<const String&> mSetPropertyInspectionResidential_RecreationRoom
ArrayOf<String>* mGetPropertyInspectionResidential_RecreationRoom
ArrayOf<const String&> mSetPropertyInspectionResidential_Roof
ArrayOf<String>* mGetPropertyInspectionResidential_Roof
ArrayOf<const String&> mSetPropertyInspectionResidential_ScreenDoors
ArrayOf<String>* mGetPropertyInspectionResidential_ScreenDoors
ArrayOf<const String&> mSetPropertyInspectionResidential_StructuralIntegrity
ArrayOf<String>* mGetPropertyInspectionResidential_StructuralIntegrity
ArrayOf<const String&> mSetPropertyInspectionResidential_TennisCourt
ArrayOf<String>* mGetPropertyInspectionResidential_TennisCourt
ArrayOf<const String&> mSetPropertyInspectionResidential_Toilet
ArrayOf<String>* mGetPropertyInspectionResidential_Toilet
ArrayOf<const String&> mSetPropertyInspectionResidential_WiringElectrical
ArrayOf<String>* mGetPropertyInspectionResidential_WiringElectrical
CRegister.businessChannelOwner mSetPropertyInspectionResidential_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPropertyInspectionResidential_BusinessChannelOwnerId
CAdministration.branch mSetPropertyInspectionResidential_BranchId
CAdministration.branch* mGetPropertyInspectionResidential_BranchId
CAdministration.department mSetPropertyInspectionResidential_DeptId
CAdministration.department* mGetPropertyInspectionResidential_DeptId
CProperty.property mSetPropertyInspectionResidential_PropertyId
CProperty.property* mGetPropertyInspectionResidential_PropertyId
ArrayOf<CAdministration.documents> mSetPropertyInspectionResidential_DocRefIds
ArrayOf<CAdministration.documents>* mGetPropertyInspectionResidential_DocRefIds
ArrayOf<CAdministration.images> mSetPropertyInspectionResidential_ImageRefIds
ArrayOf<CAdministration.images>* mGetPropertyInspectionResidential_ImageRefIds
ArrayOf<CAdministration.audio> mSetPropertyInspectionResidential_AudioRefIds
ArrayOf<CAdministration.audio>* mGetPropertyInspectionResidential_AudioRefIds
ArrayOf<CAdministration.video> mSetPropertyInspectionResidential_VideoRefIds
ArrayOf<CAdministration.video>* mGetPropertyInspectionResidential_VideoRefIds
CProperty.tenant mSetPropertyInspectionResidential_TenancyId
CProperty.tenant* mGetPropertyInspectionResidential_TenancyId
ArrayOf<CAdministration.staff> mSetPropertyInspectionResidential_EmployeeIds
ArrayOf<CAdministration.staff>* mGetPropertyInspectionResidential_EmployeeIds
const String& mSetPropertyInspectionCommercial_PropertyInspectionCommercId
String* mGetPropertyInspectionCommercial_PropertyInspectionCommercId
ArrayOf<const String&> mSetPropertyInspectionCommercial_InspectionDates
ArrayOf<String>* mGetPropertyInspectionCommercial_InspectionDates
const String& mSetPropertyInspectionCommercial_PropertyAddressString
String* mGetPropertyInspectionCommercial_PropertyAddressString
const String& mSetPropertyInspectionCommercial_UnitNumber
String* mGetPropertyInspectionCommercial_UnitNumber
ArrayOf<const String&> mSetPropertyInspectionCommercial_AirConditioning
ArrayOf<String>* mGetPropertyInspectionCommercial_AirConditioning
ArrayOf<const String&> mSetPropertyInspectionCommercial_DiningRoom
ArrayOf<String>* mGetPropertyInspectionCommercial_DiningRoom
ArrayOf<const String&> mSetPropertyInspectionCommercial_InternalDoorways
ArrayOf<String>* mGetPropertyInspectionCommercial_InternalDoorways
ArrayOf<const String&> mSetPropertyInspectionCommercial_Driveways
ArrayOf<String>* mGetPropertyInspectionCommercial_Driveways
ArrayOf<const String&> mSetPropertyInspectionCommercial_Entrance
ArrayOf<String>* mGetPropertyInspectionCommercial_Entrance
ArrayOf<const String&> mSetPropertyInspectionCommercial_ExternalAreas
ArrayOf<String>* mGetPropertyInspectionCommercial_ExternalAreas
ArrayOf<const String&> mSetPropertyInspectionCommercial_ExternalDoors
ArrayOf<String>* mGetPropertyInspectionCommercial_ExternalDoors
ArrayOf<const String&> mSetPropertyInspectionCommercial_FactorySpace
ArrayOf<String>* mGetPropertyInspectionCommercial_FactorySpace
ArrayOf<const String&> mSetPropertyInspectionCommercial_Fences
ArrayOf<String>* mGetPropertyInspectionCommercial_Fences
ArrayOf<const String&> mSetPropertyInspectionCommercial_GarageCarport
ArrayOf<String>* mGetPropertyInspectionCommercial_GarageCarport
ArrayOf<const String&> mSetPropertyInspectionCommercial_Gates
ArrayOf<String>* mGetPropertyInspectionCommercial_Gates
ArrayOf<const String&> mSetPropertyInspectionCommercial_Gutterings
ArrayOf<String>* mGetPropertyInspectionCommercial_Gutterings
ArrayOf<const String&> mSetPropertyInspectionCommercial_Hallway
ArrayOf<String>* mGetPropertyInspectionCommercial_Hallway
ArrayOf<const String&> mSetPropertyInspectionCommercial_Heating
ArrayOf<String>* mGetPropertyInspectionCommercial_Heating
ArrayOf<const String&> mSetPropertyInspectionCommercial_HotWater
ArrayOf<String>* mGetPropertyInspectionCommercial_HotWater
ArrayOf<const String&> mSetPropertyInspectionCommercial_Kitchen
ArrayOf<String>* mGetPropertyInspectionCommercial_Kitchen
ArrayOf<const String&> mSetPropertyInspectionCommercial_Laundry
ArrayOf<String>* mGetPropertyInspectionCommercial_Laundry
ArrayOf<const String&> mSetPropertyInspectionCommercial_Notes
ArrayOf<String>* mGetPropertyInspectionCommercial_Notes
ArrayOf<const String&> mSetPropertyInspectionCommercial_OfficeSpace
ArrayOf<String>* mGetPropertyInspectionCommercial_OfficeSpace
ArrayOf<const String&> mSetPropertyInspectionCommercial_ParkingSpaces
ArrayOf<String>* mGetPropertyInspectionCommercial_ParkingSpaces
ArrayOf<const String&> mSetPropertyInspectionCommercial_OtherItems
ArrayOf<String>* mGetPropertyInspectionCommercial_OtherItems
ArrayOf<const String&> mSetPropertyInspectionCommercial_Pests
ArrayOf<String>* mGetPropertyInspectionCommercial_Pests
ArrayOf<const String&> mSetPropertyInspectionCommercial_OtherIssues
ArrayOf<String>* mGetPropertyInspectionCommercial_OtherIssues
ArrayOf<const String&> mSetPropertyInspectionCommercial_Plumbing
ArrayOf<String>* mGetPropertyInspectionCommercial_Plumbing
ArrayOf<const String&> mSetPropertyInspectionCommercial_RecreationRoom
ArrayOf<String>* mGetPropertyInspectionCommercial_RecreationRoom
ArrayOf<const String&> mSetPropertyInspectionCommercial_RetailSpace
ArrayOf<String>* mGetPropertyInspectionCommercial_RetailSpace
ArrayOf<const String&> mSetPropertyInspectionCommercial_Roof
ArrayOf<String>* mGetPropertyInspectionCommercial_Roof
ArrayOf<const String&> mSetPropertyInspectionCommercial_ScreenDoors
ArrayOf<String>* mGetPropertyInspectionCommercial_ScreenDoors
ArrayOf<const String&> mSetPropertyInspectionCommercial_StructuralIntegrity
ArrayOf<String>* mGetPropertyInspectionCommercial_StructuralIntegrity
ArrayOf<const String&> mSetPropertyInspectionCommercial_Floors
ArrayOf<String>* mGetPropertyInspectionCommercial_Floors
ArrayOf<const String&> mSetPropertyInspectionCommercial_Toilet
ArrayOf<String>* mGetPropertyInspectionCommercial_Toilet
ArrayOf<const String&> mSetPropertyInspectionCommercial_VentilationIncludingFans
ArrayOf<String>* mGetPropertyInspectionCommercial_VentilationIncludingFans
ArrayOf<const String&> mSetPropertyInspectionCommercial_WarehouseSpace
ArrayOf<String>* mGetPropertyInspectionCommercial_WarehouseSpace
ArrayOf<const String&> mSetPropertyInspectionCommercial_Washroom
ArrayOf<String>* mGetPropertyInspectionCommercial_Washroom
ArrayOf<const String&> mSetPropertyInspectionCommercial_WiringElectrical
ArrayOf<String>* mGetPropertyInspectionCommercial_WiringElectrical
CRegister.businessChannelOwner mSetPropertyInspectionCommercial_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPropertyInspectionCommercial_BusinessChannelOwnerId
CAdministration.branch mSetPropertyInspectionCommercial_BranchId
CAdministration.branch* mGetPropertyInspectionCommercial_BranchId
CAdministration.department mSetPropertyInspectionCommercial_DeptId
CAdministration.department* mGetPropertyInspectionCommercial_DeptId
CProperty.property mSetPropertyInspectionCommercial_PropertyId
CProperty.property* mGetPropertyInspectionCommercial_PropertyId
CProperty.tenant mSetPropertyInspectionCommercial_TenancyId
CProperty.tenant* mGetPropertyInspectionCommercial_TenancyId
ArrayOf<CAdministration.staff> mSetPropertyInspectionCommercial_EmployeeIds
ArrayOf<CAdministration.staff>* mGetPropertyInspectionCommercial_EmployeeIds
ArrayOf<CAdministration.documents> mSetPropertyInspectionCommercial_DocRefIds
ArrayOf<CAdministration.documents>* mGetPropertyInspectionCommercial_DocRefIds
ArrayOf<CAdministration.images> mSetPropertyInspectionCommercial_ImageRefIds
ArrayOf<CAdministration.images>* mGetPropertyInspectionCommercial_ImageRefIds
ArrayOf<CAdministration.audio> mSetPropertyInspectionCommercial_AudioRefIds
ArrayOf<CAdministration.audio>* mGetPropertyInspectionCommercial_AudioRefIds
ArrayOf<CAdministration.video> mSetPropertyInspectionCommercial_VideoRefIds
ArrayOf<CAdministration.video>* mGetPropertyInspectionCommercial_VideoRefIds
const String& mSetTenancyCaseManagement_TenancyCaseMngmntId
String* mGetTenancyCaseManagement_TenancyCaseMngmntId
const String& mSetTenancyCaseManagement_SupervisorStaffId
String* mGetTenancyCaseManagement_SupervisorStaffId
ArrayOf<const String&> mSetTenancyCaseManagement_TenantActionsInChronologicalOrder
ArrayOf<String>* mGetTenancyCaseManagement_TenantActionsInChronologicalOrder
ArrayOf<const String&> mSetTenancyCaseManagement_DatesTimesOfEvents
ArrayOf<String>* mGetTenancyCaseManagement_DatesTimesOfEvents
ArrayOf<const String&> mSetTenancyCaseManagement_OurResponsesInChronologicalOrder
ArrayOf<String>* mGetTenancyCaseManagement_OurResponsesInChronologicalOrder
ArrayOf<const String&> mSetTenancyCaseManagement_DatesTimesOfResponses
ArrayOf<String>* mGetTenancyCaseManagement_DatesTimesOfResponses
Boolean mSetTenancyCaseManagement.Resolved
Boolean* mGetTenancyCaseManagement.Resolved
CRegister.businessChannelOwner mSetTenancyCaseManagement_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTenancyCaseManagement_BusinessChannelOwnerId
CProperty.property mSetTenancyCaseManagement_PropertyId
CProperty.property* mGetTenancyCaseManagement_PropertyId
CAdministration.branch mSetTenancyCaseManagement_BranchId
CAdministration.branch* mGetTenancyCaseManagement_BranchId
CProperty.tenant mSetTenancyCaseManagement_TenancyId
CProperty.tenant* mGetTenancyCaseManagement_TenancyId
ArrayOf<CCustomer.customer> mSetTenancyCaseManagement_CustomerIds
ArrayOf<CCustomer.customer>* mGetTenancyCaseManagement_CustomerIds
ArrayOf<CAdministration.staff> mSetTenancyCaseManagement_EmployeeIds
ArrayOf<CAdministration.staff>* mGetTenancyCaseManagement_EmployeeIds
ArrayOf<CAdministration.documents> mSetTenancyCaseManagement_DocRefIds
ArrayOf<CAdministration.documents>* mGetTenancyCaseManagement_DocRefIds
ArrayOf<CAdministration.images> mSetTenancyCaseManagement_ImageRefIds
ArrayOf<CAdministration.images>* mGetTenancyCaseManagement_ImageRefIds
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

