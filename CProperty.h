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
   
   CARAPI SetProperty.PropertyId(
  /* [in] */ const String& CProperty.property.propertyId);

    CARAPI GetProperty.PropertyId(
  /* [out] */ String* CProperty.property.propertyId);


   CARAPI SetProperty.PropertyAddressString(
  /* [in] */ const String& CProperty.property.propertyAddressString);

    CARAPI GetProperty.PropertyAddressString(
  /* [out] */ String* CProperty.property.propertyAddressString);


   CARAPI SetProperty.UnitNumber(
  /* [in] */ const String& CProperty.property.unitNumber);

    CARAPI GetProperty.UnitNumber(
  /* [out] */ String* CProperty.property.unitNumber);


   CARAPI SetProperty.StreetNumber(
  /* [in] */ const String& CProperty.property.streetNumber);

    CARAPI GetProperty.StreetNumber(
  /* [out] */ String* CProperty.property.streetNumber);


   CARAPI SetProperty.StreetName(
  /* [in] */ const String& CProperty.property.streetName);

    CARAPI GetProperty.StreetName(
  /* [out] */ String* CProperty.property.streetName);


   CARAPI SetProperty.SuburbTown(
  /* [in] */ const String& CProperty.property.suburbTown);

    CARAPI GetProperty.SuburbTown(
  /* [out] */ String* CProperty.property.suburbTown);


   CARAPI SetProperty.Postcode(
  /* [in] */ Int32 CProperty.property.postcode);

    CARAPI GetProperty.Postcode(
  /* [out] */ Int32* CProperty.property.postcode);


   CARAPI SetProperty.State(
  /* [in] */ CHelper.ausState CProperty.property.state);

    CARAPI GetProperty.State(
  /* [out] */ CHelper.ausState* CProperty.property.state);


   CARAPI SetProperty.EnvelopeGreetings(
  /* [in] */ const String& CProperty.property.envelopeGreetings);

    CARAPI GetProperty.EnvelopeGreetings(
  /* [out] */ String* CProperty.property.envelopeGreetings);


   CARAPI SetProperty.CorrespondenceFolderDocRef(
  /* [in] */ const String& CProperty.property.correspondenceFolderDocRef);

    CARAPI GetProperty.CorrespondenceFolderDocRef(
  /* [out] */ String* CProperty.property.correspondenceFolderDocRef);


   CARAPI SetProperty.StartDateLatestLease(
  /* [in] */ const String& CProperty.property.startDateLatestLease);

    CARAPI GetProperty.StartDateLatestLease(
  /* [out] */ String* CProperty.property.startDateLatestLease);


   CARAPI SetProperty.EndDateLatestLease(
  /* [in] */ const String& CProperty.property.endDateLatestLease);

    CARAPI GetProperty.EndDateLatestLease(
  /* [out] */ String* CProperty.property.endDateLatestLease);


   CARAPI SetProperty.Occupied(
  /* [in] */ Boolean CProperty.property.occupied);

    CARAPI GetProperty.Occupied(
  /* [out] */ Boolean* CProperty.property.occupied);


   CARAPI SetProperty.LocalGovArea(
  /* [in] */ const String& CProperty.property.localGovArea);

    CARAPI GetProperty.LocalGovArea(
  /* [out] */ String* CProperty.property.localGovArea);


   CARAPI SetProperty.Zoning(
  /* [in] */ const String& CProperty.property.zoning);

    CARAPI GetProperty.Zoning(
  /* [out] */ String* CProperty.property.zoning);


   CARAPI SetProperty.Lot(
  /* [in] */ const String& CProperty.property.lot);

    CARAPI GetProperty.Lot(
  /* [out] */ String* CProperty.property.lot);


   CARAPI SetProperty.DP(
  /* [in] */ const String& CProperty.property.dP);

    CARAPI GetProperty.DP(
  /* [out] */ String* CProperty.property.dP);


   CARAPI SetProperty.SP(
  /* [in] */ const String& CProperty.property.sP);

    CARAPI GetProperty.SP(
  /* [out] */ String* CProperty.property.sP);


   CARAPI SetProperty.DCPNum(
  /* [in] */ const String& CProperty.property.dCPNum);

    CARAPI GetProperty.DCPNum(
  /* [out] */ String* CProperty.property.dCPNum);


   CARAPI SetProperty.Parish(
  /* [in] */ const String& CProperty.property.parish);

    CARAPI GetProperty.Parish(
  /* [out] */ String* CProperty.property.parish);


   CARAPI SetProperty.Description(
  /* [in] */ const String& CProperty.property.description);

    CARAPI GetProperty.Description(
  /* [out] */ String* CProperty.property.description);


   CARAPI SetProperty.Lon(
  /* [in] */ Double CProperty.property.lon);

    CARAPI GetProperty.Lon(
  /* [out] */ Double* CProperty.property.lon);


   CARAPI SetProperty.Lat(
  /* [in] */ Double CProperty.property.lat);

    CARAPI GetProperty.Lat(
  /* [out] */ Double* CProperty.property.lat);


   CARAPI SetProperty.Elevation(
  /* [in] */ Double CProperty.property.elevation);

    CARAPI GetProperty.Elevation(
  /* [out] */ Double* CProperty.property.elevation);


   CARAPI SetProperty.Liens(
  /* [in] */ Boolean CProperty.property.liens);

    CARAPI GetProperty.Liens(
  /* [out] */ Boolean* CProperty.property.liens);


   CARAPI SetProperty.NumBedrooms(
  /* [in] */ Int32 CProperty.property.numBedrooms);

    CARAPI GetProperty.NumBedrooms(
  /* [out] */ Int32* CProperty.property.numBedrooms);


   CARAPI SetProperty.NumEnsuites(
  /* [in] */ Int32 CProperty.property.numEnsuites);

    CARAPI GetProperty.NumEnsuites(
  /* [out] */ Int32* CProperty.property.numEnsuites);


   CARAPI SetProperty.NumBathrooms(
  /* [in] */ Int32 CProperty.property.numBathrooms);

    CARAPI GetProperty.NumBathrooms(
  /* [out] */ Int32* CProperty.property.numBathrooms);


   CARAPI SetProperty.NumStoreys(
  /* [in] */ Int32 CProperty.property.numStoreys);

    CARAPI GetProperty.NumStoreys(
  /* [out] */ Int32* CProperty.property.numStoreys);


   CARAPI SetProperty.Furnished(
  /* [in] */ Boolean CProperty.property.furnished);

    CARAPI GetProperty.Furnished(
  /* [out] */ Boolean* CProperty.property.furnished);


   CARAPI SetProperty.ConstructionTypeName(
  /* [in] */ const String& CProperty.property.constructionTypeName);

    CARAPI GetProperty.ConstructionTypeName(
  /* [out] */ String* CProperty.property.constructionTypeName);


   CARAPI SetProperty.FolioCertCopyDocRef(
  /* [in] */ const String& CProperty.property.folioCertCopyDocRef);

    CARAPI GetProperty.FolioCertCopyDocRef(
  /* [out] */ String* CProperty.property.folioCertCopyDocRef);


   CARAPI SetProperty.CopyOfDepositedPlanDocRef(
  /* [in] */ const String& CProperty.property.copyOfDepositedPlanDocRef);

    CARAPI GetProperty.CopyOfDepositedPlanDocRef(
  /* [out] */ String* CProperty.property.copyOfDepositedPlanDocRef);


   CARAPI SetProperty.CopiesOfLiensDocrefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.copiesOfLiensDocrefs);

    CARAPI GetProperty.CopiesOfLiensDocrefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.copiesOfLiensDocrefs);


   CARAPI SetProperty.CopyOfBuildingCertDocRef(
  /* [in] */ const String& CProperty.property.copyOfBuildingCertDocRef);

    CARAPI GetProperty.CopyOfBuildingCertDocRef(
  /* [out] */ String* CProperty.property.copyOfBuildingCertDocRef);


   CARAPI SetProperty.CopyOfInsuranceCertDocRef(
  /* [in] */ const String& CProperty.property.copyOfInsuranceCertDocRef);

    CARAPI GetProperty.CopyOfInsuranceCertDocRef(
  /* [out] */ String* CProperty.property.copyOfInsuranceCertDocRef);


   CARAPI SetProperty.FolderContainingWarrantiesDocRef(
  /* [in] */ const String& CProperty.property.folderContainingWarrantiesDocRef);

    CARAPI GetProperty.FolderContainingWarrantiesDocRef(
  /* [out] */ String* CProperty.property.folderContainingWarrantiesDocRef);


   CARAPI SetProperty.CopyOfPlanningCertSection149DEPADocRef(
  /* [in] */ const String& CProperty.property.copyOfPlanningCertSection149DEPADocRef);

    CARAPI GetProperty.CopyOfPlanningCertSection149DEPADocRef(
  /* [out] */ String* CProperty.property.copyOfPlanningCertSection149DEPADocRef);


   CARAPI SetProperty.CopyOfSection88GCertDocRef(
  /* [in] */ const String& CProperty.property.copyOfSection88GCertDocRef);

    CARAPI GetProperty.CopyOfSection88GCertDocRef(
  /* [out] */ String* CProperty.property.copyOfSection88GCertDocRef);


   CARAPI SetProperty.FolderContainingAdditionalAnnexuresDocRef(
  /* [in] */ const String& CProperty.property.folderContainingAdditionalAnnexuresDocRef);

    CARAPI GetProperty.FolderContainingAdditionalAnnexuresDocRef(
  /* [out] */ String* CProperty.property.folderContainingAdditionalAnnexuresDocRef);


   CARAPI SetProperty.FolderContainingAdditionalDisclosuresDocRef(
  /* [in] */ const String& CProperty.property.folderContainingAdditionalDisclosuresDocRef);

    CARAPI GetProperty.FolderContainingAdditionalDisclosuresDocRef(
  /* [out] */ String* CProperty.property.folderContainingAdditionalDisclosuresDocRef);


   CARAPI SetProperty.CopyOfSurveyReportsDocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.copyOfSurveyReportsDocRefs);

    CARAPI GetProperty.CopyOfSurveyReportsDocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.copyOfSurveyReportsDocRefs);


   CARAPI SetProperty.DrainageDiagsSewerRefSheetsDocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.drainageDiagsSewerRefSheetsDocRefs);

    CARAPI GetProperty.DrainageDiagsSewerRefSheetsDocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.drainageDiagsSewerRefSheetsDocRefs);


   CARAPI SetProperty.BuildingInspectionDocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.buildingInspectionDocRefs);

    CARAPI GetProperty.BuildingInspectionDocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.buildingInspectionDocRefs);


   CARAPI SetProperty.PestInspectionDocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.pestInspectionDocRefs);

    CARAPI GetProperty.PestInspectionDocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.pestInspectionDocRefs);


   CARAPI SetProperty.ProblemsWithPropertyDocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.property.problemsWithPropertyDocRefs);

    CARAPI GetProperty.ProblemsWithPropertyDocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.problemsWithPropertyDocRefs);


   CARAPI SetProperty.PropertyOwnerSharePercents(
  /* [in] */ ArrayOf<Double> CProperty.property.propertyOwnerSharePercents);

    CARAPI GetProperty.PropertyOwnerSharePercents(
     /* [out, callee] */ ArrayOf<Double>* CProperty.property.propertyOwnerSharePercents);


   CARAPI SetProperty.CapitalValue(
  /* [in] */ Double CProperty.property.capitalValue);

    CARAPI GetProperty.CapitalValue(
  /* [out] */ Double* CProperty.property.capitalValue);


   CARAPI SetProperty.FloorPrice(
  /* [in] */ Double CProperty.property.floorPrice);

    CARAPI GetProperty.FloorPrice(
  /* [out] */ Double* CProperty.property.floorPrice);


   CARAPI SetProperty.LatestBuyOfferPrice(
  /* [in] */ Double CProperty.property.latestBuyOfferPrice);

    CARAPI GetProperty.LatestBuyOfferPrice(
  /* [out] */ Double* CProperty.property.latestBuyOfferPrice);


   CARAPI SetProperty.LatestBuyOfferDateTime(
  /* [in] */ const String& CProperty.property.latestBuyOfferDateTime);

    CARAPI GetProperty.LatestBuyOfferDateTime(
  /* [out] */ String* CProperty.property.latestBuyOfferDateTime);


   CARAPI SetProperty.LatestBuyOfferPriceAccepted(
  /* [in] */ Boolean CProperty.property.latestBuyOfferPriceAccepted);

    CARAPI GetProperty.LatestBuyOfferPriceAccepted(
  /* [out] */ Boolean* CProperty.property.latestBuyOfferPriceAccepted);


   CARAPI SetProperty.LatestBuyOfferNotes(
  /* [in] */ ArrayOf<const String&> CProperty.property.latestBuyOfferNotes);

    CARAPI GetProperty.LatestBuyOfferNotes(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.latestBuyOfferNotes);


   CARAPI SetProperty.RentalValue(
  /* [in] */ Double CProperty.property.rentalValue);

    CARAPI GetProperty.RentalValue(
  /* [out] */ Double* CProperty.property.rentalValue);


   CARAPI SetProperty.LandTotalSquareMetres(
  /* [in] */ Double CProperty.property.landTotalSquareMetres);

    CARAPI GetProperty.LandTotalSquareMetres(
  /* [out] */ Double* CProperty.property.landTotalSquareMetres);


   CARAPI SetProperty.LandTotalHectares(
  /* [in] */ Double CProperty.property.landTotalHectares);

    CARAPI GetProperty.LandTotalHectares(
  /* [out] */ Double* CProperty.property.landTotalHectares);


   CARAPI SetProperty.BuildingTotalSquareMetres(
  /* [in] */ Double CProperty.property.buildingTotalSquareMetres);

    CARAPI GetProperty.BuildingTotalSquareMetres(
  /* [out] */ Double* CProperty.property.buildingTotalSquareMetres);


   CARAPI SetProperty.Amenities(
  /* [in] */ ArrayOf<const String&> CProperty.property.amenities);

    CARAPI GetProperty.Amenities(
     /* [out, callee] */ ArrayOf<String>* CProperty.property.amenities);


   CARAPI SetProperty.PropertyTradingBasis(
  /* [in] */ CHelper.propertyTradingBasis CProperty.property.propertyTradingBasis);

    CARAPI GetProperty.PropertyTradingBasis(
  /* [out] */ CHelper.propertyTradingBasis* CProperty.property.propertyTradingBasis);


   CARAPI SetProperty.PropertyType(
  /* [in] */ CHelper.propertyType CProperty.property.propertyType);

    CARAPI GetProperty.PropertyType(
  /* [out] */ CHelper.propertyType* CProperty.property.propertyType);


   CARAPI SetProperty.LeaCARAPI Setype(
  /* [in] */ CHelper.leaCARAPI Setype CProperty.property.leaCARAPI Setype);

    CARAPI GetProperty.LeaCARAPI Setype(
  /* [out] */ CHelper.leaCARAPI Setype* CProperty.property.leaCARAPI Setype);


   CARAPI SetProperty.LeaseArrangement(
  /* [in] */ CHelper.leaseArrangement CProperty.property.leaseArrangement);

    CARAPI GetProperty.LeaseArrangement(
  /* [out] */ CHelper.leaseArrangement* CProperty.property.leaseArrangement);


   CARAPI SetProperty.LeasingTerm(
  /* [in] */ CHelper.leasingTerm CProperty.property.leasingTerm);

    CARAPI GetProperty.LeasingTerm(
  /* [out] */ CHelper.leasingTerm* CProperty.property.leasingTerm);


   CARAPI SetProperty.RentalPaymentInterval(
  /* [in] */ CHelper.billingInterval CProperty.property.rentalPaymentInterval);

    CARAPI GetProperty.RentalPaymentInterval(
  /* [out] */ CHelper.billingInterval* CProperty.property.rentalPaymentInterval);


   CARAPI SetProperty.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.property.businessChannelOwnerId);

    CARAPI GetProperty.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.property.businessChannelOwnerId);


   CARAPI SetProperty.BranchId(
  /* [in] */ CAdministration.branch CProperty.property.branchId);

    CARAPI GetProperty.BranchId(
  /* [out] */ CAdministration.branch* CProperty.property.branchId);


   CARAPI SetProperty.DeptId(
  /* [in] */ CAdministration.department CProperty.property.deptId);

    CARAPI GetProperty.DeptId(
  /* [out] */ CAdministration.department* CProperty.property.deptId);


   CARAPI SetProperty.PropertyOwnerIds(
  /* [in] */ ArrayOf<CProperty.propertyOwner> CProperty.property.propertyOwnerIds);

    CARAPI GetProperty.PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<CProperty.propertyOwner>* CProperty.property.propertyOwnerIds);


   CARAPI SetProperty.PropertyConstructionTypeId(
  /* [in] */ CProperty.propertyConstructionType CProperty.property.propertyConstructionTypeId);

    CARAPI GetProperty.PropertyConstructionTypeId(
  /* [out] */ CProperty.propertyConstructionType* CProperty.property.propertyConstructionTypeId);


   CARAPI SetProperty.TenancyId(
  /* [in] */ CProperty.tenant CProperty.property.tenancyId);

    CARAPI GetProperty.TenancyId(
  /* [out] */ CProperty.tenant* CProperty.property.tenancyId);


   CARAPI SetProperty.DocRefs(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.property.docRefs);

    CARAPI GetProperty.DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.property.docRefs);


   CARAPI SetProperty.ImageRefs(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.property.imageRefs);

    CARAPI GetProperty.ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.property.imageRefs);


   CARAPI SetProperty.AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> CProperty.property.audioRefIds);

    CARAPI GetProperty.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CProperty.property.audioRefIds);


   CARAPI SetProperty.VideoRefs(
  /* [in] */ ArrayOf<CAdministration.video> CProperty.property.videoRefs);

    CARAPI GetProperty.VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CProperty.property.videoRefs);





   CARAPI SetPropertyConstructionType.PropertyConstructionTypeId(
  /* [in] */ const String& CProperty.propertyConstructionType.propertyConstructionTypeId);

    CARAPI GetPropertyConstructionType.PropertyConstructionTypeId(
  /* [out] */ String* CProperty.propertyConstructionType.propertyConstructionTypeId);


   CARAPI SetPropertyConstructionType.ConstructionTypeName(
  /* [in] */ const String& CProperty.propertyConstructionType.constructionTypeName);

    CARAPI GetPropertyConstructionType.ConstructionTypeName(
  /* [out] */ String* CProperty.propertyConstructionType.constructionTypeName);


   CARAPI SetPropertyConstructionType.Description(
  /* [in] */ const String& CProperty.propertyConstructionType.description);

    CARAPI GetPropertyConstructionType.Description(
  /* [out] */ String* CProperty.propertyConstructionType.description);


   CARAPI SetPropertyConstructionType.DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.propertyConstructionType.docRefIds);

    CARAPI GetPropertyConstructionType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.propertyConstructionType.docRefIds);


   CARAPI SetPropertyConstructionType.ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.propertyConstructionType.imageRefIds);

    CARAPI GetPropertyConstructionType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.propertyConstructionType.imageRefIds);


   CARAPI SetPropertyConstructionType.AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> CProperty.propertyConstructionType.audioRefIds);

    CARAPI GetPropertyConstructionType.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CProperty.propertyConstructionType.audioRefIds);


   CARAPI SetPropertyConstructionType.VideoRefIds(
  /* [in] */ ArrayOf<CAdministration.video> CProperty.propertyConstructionType.videoRefIds);

    CARAPI GetPropertyConstructionType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CProperty.propertyConstructionType.videoRefIds);


   CARAPI SetPropertyConstructionType.RiskIds(
  /* [in] */ ArrayOf<CAdministration.riskRegister> CProperty.propertyConstructionType.riskIds);

    CARAPI GetPropertyConstructionType.RiskIds(
     /* [out, callee] */ ArrayOf<CAdministration.riskRegister>* CProperty.propertyConstructionType.riskIds);


   CARAPI SetPropertyConstructionType.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.propertyConstructionType.businessChannelOwnerId);

    CARAPI GetPropertyConstructionType.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.propertyConstructionType.businessChannelOwnerId);





   CARAPI SetPropertyOwner.PropertyOwnerId(
  /* [in] */ const String& CProperty.propertyOwner.propertyOwnerId);

    CARAPI GetPropertyOwner.PropertyOwnerId(
  /* [out] */ String* CProperty.propertyOwner.propertyOwnerId);


   CARAPI SetPropertyOwner.LinkedToThisCustomerId(
  /* [in] */ const String& CProperty.propertyOwner.linkedToThisCustomerId);

    CARAPI GetPropertyOwner.LinkedToThisCustomerId(
  /* [out] */ String* CProperty.propertyOwner.linkedToThisCustomerId);


   CARAPI SetPropertyOwner.LinkedToThisSupplierId(
  /* [in] */ const String& CProperty.propertyOwner.linkedToThisSupplierId);

    CARAPI GetPropertyOwner.LinkedToThisSupplierId(
  /* [out] */ String* CProperty.propertyOwner.linkedToThisSupplierId);


   CARAPI SetPropertyOwner.FirstName(
  /* [in] */ const String& CProperty.propertyOwner.firstName);

    CARAPI GetPropertyOwner.FirstName(
  /* [out] */ String* CProperty.propertyOwner.firstName);


   CARAPI SetPropertyOwner.LastName(
  /* [in] */ const String& CProperty.propertyOwner.lastName);

    CARAPI GetPropertyOwner.LastName(
  /* [out] */ String* CProperty.propertyOwner.lastName);


   CARAPI SetPropertyOwner.ResidentialAddress(
  /* [in] */ const String& CProperty.propertyOwner.residentialAddress);

    CARAPI GetPropertyOwner.ResidentialAddress(
  /* [out] */ String* CProperty.propertyOwner.residentialAddress);


   CARAPI SetPropertyOwner.PostalAddress(
  /* [in] */ const String& CProperty.propertyOwner.postalAddress);

    CARAPI GetPropertyOwner.PostalAddress(
  /* [out] */ String* CProperty.propertyOwner.postalAddress);


   CARAPI SetPropertyOwner.Email(
  /* [in] */ const String& CProperty.propertyOwner.email);

    CARAPI GetPropertyOwner.Email(
  /* [out] */ String* CProperty.propertyOwner.email);


   CARAPI SetPropertyOwner.HomePhone(
  /* [in] */ Int32 CProperty.propertyOwner.homePhone);

    CARAPI GetPropertyOwner.HomePhone(
  /* [out] */ Int32* CProperty.propertyOwner.homePhone);


   CARAPI SetPropertyOwner.MobilePhone(
  /* [in] */ Int32 CProperty.propertyOwner.mobilePhone);

    CARAPI GetPropertyOwner.MobilePhone(
  /* [out] */ Int32* CProperty.propertyOwner.mobilePhone);


   CARAPI SetPropertyOwner.WorkPhone(
  /* [in] */ Int32 CProperty.propertyOwner.workPhone);

    CARAPI GetPropertyOwner.WorkPhone(
  /* [out] */ Int32* CProperty.propertyOwner.workPhone);


   CARAPI SetPropertyOwner.BankName(
  /* [in] */ const String& CProperty.propertyOwner.bankName);

    CARAPI GetPropertyOwner.BankName(
  /* [out] */ String* CProperty.propertyOwner.bankName);


   CARAPI SetPropertyOwner.BankBSB(
  /* [in] */ Int32 CProperty.propertyOwner.bankBSB);

    CARAPI GetPropertyOwner.BankBSB(
  /* [out] */ Int32* CProperty.propertyOwner.bankBSB);


   CARAPI SetPropertyOwner.BankAccountNumber(
  /* [in] */ Int32 CProperty.propertyOwner.bankAccountNumber);

    CARAPI GetPropertyOwner.BankAccountNumber(
  /* [out] */ Int32* CProperty.propertyOwner.bankAccountNumber);


   CARAPI SetPropertyOwner.ContactedWithDetails(
  /* [in] */ ArrayOf<const String&> CProperty.propertyOwner.contactedWithDetails);

    CARAPI GetPropertyOwner.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyOwner.contactedWithDetails);


   CARAPI SetPropertyOwner.SharesPercents(
  /* [in] */ ArrayOf<Double> CProperty.propertyOwner.sharesPercents);

    CARAPI GetPropertyOwner.SharesPercents(
     /* [out, callee] */ ArrayOf<Double>* CProperty.propertyOwner.sharesPercents);


   CARAPI SetPropertyOwner.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.propertyOwner.businessChannelOwnerId);

    CARAPI GetPropertyOwner.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.propertyOwner.businessChannelOwnerId);


   CARAPI SetPropertyOwner.BranchId(
  /* [in] */ CAdministration.branch CProperty.propertyOwner.branchId);

    CARAPI GetPropertyOwner.BranchId(
  /* [out] */ CAdministration.branch* CProperty.propertyOwner.branchId);


   CARAPI SetPropertyOwner.PropertyIds(
  /* [in] */ ArrayOf<CProperty.property> CProperty.propertyOwner.propertyIds);

    CARAPI GetPropertyOwner.PropertyIds(
     /* [out, callee] */ ArrayOf<CProperty.property>* CProperty.propertyOwner.propertyIds);


   CARAPI SetPropertyOwner.CustomerId(
  /* [in] */ CCustomer.customer CProperty.propertyOwner.customerId);

    CARAPI GetPropertyOwner.CustomerId(
  /* [out] */ CCustomer.customer* CProperty.propertyOwner.customerId);


   CARAPI SetPropertyOwner.DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.propertyOwner.docRefIds);

    CARAPI GetPropertyOwner.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.propertyOwner.docRefIds);


   CARAPI SetPropertyOwner.ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.propertyOwner.imageRefIds);

    CARAPI GetPropertyOwner.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.propertyOwner.imageRefIds);





   CARAPI SetProgram.ProgramId(
  /* [in] */ const String& CProperty.program.programId);

    CARAPI GetProgram.ProgramId(
  /* [out] */ String* CProperty.program.programId);


   CARAPI SetProgram.ProgramName(
  /* [in] */ const String& CProperty.program.programName);

    CARAPI GetProgram.ProgramName(
  /* [out] */ String* CProperty.program.programName);


   CARAPI SetProgram.Description(
  /* [in] */ const String& CProperty.program.description);

    CARAPI GetProgram.Description(
  /* [out] */ String* CProperty.program.description);


   CARAPI SetProgram.DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.program.docRefIds);

    CARAPI GetProgram.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.program.docRefIds);


   CARAPI SetProgram.ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.program.imageRefIds);

    CARAPI GetProgram.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.program.imageRefIds);


   CARAPI SetProgram.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.program.businessChannelOwnerId);

    CARAPI GetProgram.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.program.businessChannelOwnerId);


   CARAPI SetProgram.BranchId(
  /* [in] */ CAdministration.branch CProperty.program.branchId);

    CARAPI GetProgram.BranchId(
  /* [out] */ CAdministration.branch* CProperty.program.branchId);


   CARAPI SetProgram.DeptId(
  /* [in] */ CAdministration.department CProperty.program.deptId);

    CARAPI GetProgram.DeptId(
  /* [out] */ CAdministration.department* CProperty.program.deptId);





   CARAPI SetProject.ProjectId(
  /* [in] */ const String& CProperty.project.projectId);

    CARAPI GetProject.ProjectId(
  /* [out] */ String* CProperty.project.projectId);


   CARAPI SetProject.ProjectName(
  /* [in] */ const String& CProperty.project.projectName);

    CARAPI GetProject.ProjectName(
  /* [out] */ String* CProperty.project.projectName);


   CARAPI SetProject.Description(
  /* [in] */ const String& CProperty.project.description);

    CARAPI GetProject.Description(
  /* [out] */ String* CProperty.project.description);


   CARAPI SetProject.DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.project.docRefIds);

    CARAPI GetProject.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.project.docRefIds);


   CARAPI SetProject.ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.project.imageRefIds);

    CARAPI GetProject.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.project.imageRefIds);


   CARAPI SetProject.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.project.businessChannelOwnerId);

    CARAPI GetProject.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.project.businessChannelOwnerId);


   CARAPI SetProject.BranchId(
  /* [in] */ CAdministration.branch CProperty.project.branchId);

    CARAPI GetProject.BranchId(
  /* [out] */ CAdministration.branch* CProperty.project.branchId);


   CARAPI SetProject.DeptId(
  /* [in] */ CAdministration.department CProperty.project.deptId);

    CARAPI GetProject.DeptId(
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





   CARAPI SetAllocation.AllocationId(
  /* [in] */ const String& CProperty.allocation.allocationId);

    CARAPI GetAllocation.AllocationId(
  /* [out] */ String* CProperty.allocation.allocationId);


   CARAPI SetAllocation.ApplicationIds(
  /* [in] */ ArrayOf<const String&> CProperty.allocation.applicationIds);

    CARAPI GetAllocation.ApplicationIds(
     /* [out, callee] */ ArrayOf<String>* CProperty.allocation.applicationIds);


   CARAPI SetAllocation.DocRefs(
  /* [in] */ ArrayOf<const String&> CProperty.allocation.docRefs);

    CARAPI GetAllocation.DocRefs(
     /* [out, callee] */ ArrayOf<String>* CProperty.allocation.docRefs);


   CARAPI SetAllocation.Notes(
  /* [in] */ ArrayOf<const String&> CProperty.allocation.notes);

    CARAPI GetAllocation.Notes(
     /* [out, callee] */ ArrayOf<String>* CProperty.allocation.notes);


   CARAPI SetAllocation.DateOfEffect(
  /* [in] */ const String& CProperty.allocation.dateOfEffect);

    CARAPI GetAllocation.DateOfEffect(
  /* [out] */ String* CProperty.allocation.dateOfEffect);


   CARAPI SetAllocation.PropertyId(
  /* [in] */ CProperty.property CProperty.allocation.propertyId);

    CARAPI GetAllocation.PropertyId(
  /* [out] */ CProperty.property* CProperty.allocation.propertyId);


   CARAPI SetAllocation.SuccessfulApplicationId(
  /* [in] */ CCustomer.application CProperty.allocation.successfulApplicationId);

    CARAPI GetAllocation.SuccessfulApplicationId(
  /* [out] */ CCustomer.application* CProperty.allocation.successfulApplicationId);


   CARAPI SetAllocation.SuccessfulTenancyId(
  /* [in] */ CProperty.tenant CProperty.allocation.successfulTenancyId);

    CARAPI GetAllocation.SuccessfulTenancyId(
  /* [out] */ CProperty.tenant* CProperty.allocation.successfulTenancyId);


   CARAPI SetAllocation.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.allocation.businessChannelOwnerId);

    CARAPI GetAllocation.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.allocation.businessChannelOwnerId);


   CARAPI SetAllocation.BranchId(
  /* [in] */ CAdministration.branch CProperty.allocation.branchId);

    CARAPI GetAllocation.BranchId(
  /* [out] */ CAdministration.branch* CProperty.allocation.branchId);


   CARAPI SetAllocation.DeptId(
  /* [in] */ CAdministration.department CProperty.allocation.deptId);

    CARAPI GetAllocation.DeptId(
  /* [out] */ CAdministration.department* CProperty.allocation.deptId);





   CARAPI SetTenant.TenancyId(
  /* [in] */ const String& CProperty.tenant.tenancyId);

    CARAPI GetTenant.TenancyId(
  /* [out] */ String* CProperty.tenant.tenancyId);


   CARAPI SetTenant.ABN(
  /* [in] */ const String& CProperty.tenant.aBN);

    CARAPI GetTenant.ABN(
  /* [out] */ String* CProperty.tenant.aBN);


   CARAPI SetTenant.BusinessName(
  /* [in] */ const String& CProperty.tenant.businessName);

    CARAPI GetTenant.BusinessName(
  /* [out] */ String* CProperty.tenant.businessName);


   CARAPI SetTenant.FirstName(
  /* [in] */ const String& CProperty.tenant.firstName);

    CARAPI GetTenant.FirstName(
  /* [out] */ String* CProperty.tenant.firstName);


   CARAPI SetTenant.LastName(
  /* [in] */ const String& CProperty.tenant.lastName);

    CARAPI GetTenant.LastName(
  /* [out] */ String* CProperty.tenant.lastName);


   CARAPI SetTenant.ResidentialAddress(
  /* [in] */ const String& CProperty.tenant.residentialAddress);

    CARAPI GetTenant.ResidentialAddress(
  /* [out] */ String* CProperty.tenant.residentialAddress);


   CARAPI SetTenant.PostalAddress(
  /* [in] */ const String& CProperty.tenant.postalAddress);

    CARAPI GetTenant.PostalAddress(
  /* [out] */ String* CProperty.tenant.postalAddress);


   CARAPI SetTenant.Email(
  /* [in] */ const String& CProperty.tenant.email);

    CARAPI GetTenant.Email(
  /* [out] */ String* CProperty.tenant.email);


   CARAPI SetTenant.HomePhone(
  /* [in] */ Int32 CProperty.tenant.homePhone);

    CARAPI GetTenant.HomePhone(
  /* [out] */ Int32* CProperty.tenant.homePhone);


   CARAPI SetTenant.MobilePhone(
  /* [in] */ Int32 CProperty.tenant.mobilePhone);

    CARAPI GetTenant.MobilePhone(
  /* [out] */ Int32* CProperty.tenant.mobilePhone);


   CARAPI SetTenant.WorkPhone(
  /* [in] */ Int32 CProperty.tenant.workPhone);

    CARAPI GetTenant.WorkPhone(
  /* [out] */ Int32* CProperty.tenant.workPhone);


   CARAPI SetTenant.ContactedWithDetails(
  /* [in] */ ArrayOf<const String&> CProperty.tenant.contactedWithDetails);

    CARAPI GetTenant.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CProperty.tenant.contactedWithDetails);


   CARAPI SetTenant.AllocationId(
  /* [in] */ CProperty.allocation CProperty.tenant.allocationId);

    CARAPI GetTenant.AllocationId(
  /* [out] */ CProperty.allocation* CProperty.tenant.allocationId);


   CARAPI SetTenant.ApplicantIds(
  /* [in] */ ArrayOf<CCustomer.applicant> CProperty.tenant.applicantIds);

    CARAPI GetTenant.ApplicantIds(
     /* [out, callee] */ ArrayOf<CCustomer.applicant>* CProperty.tenant.applicantIds);


   CARAPI SetTenant.CustomerId(
  /* [in] */ CCustomer.customer CProperty.tenant.customerId);

    CARAPI GetTenant.CustomerId(
  /* [out] */ CCustomer.customer* CProperty.tenant.customerId);


   CARAPI SetTenant.PropertyId(
  /* [in] */ CProperty.property CProperty.tenant.propertyId);

    CARAPI GetTenant.PropertyId(
  /* [out] */ CProperty.property* CProperty.tenant.propertyId);


   CARAPI SetTenant.BranchId(
  /* [in] */ CAdministration.branch CProperty.tenant.branchId);

    CARAPI GetTenant.BranchId(
  /* [out] */ CAdministration.branch* CProperty.tenant.branchId);


   CARAPI SetTenant.ChartOfAccountsId(
  /* [in] */ CFinance.chartOfAccounts CProperty.tenant.chartOfAccountsId);

    CARAPI GetTenant.ChartOfAccountsId(
  /* [out] */ CFinance.chartOfAccounts* CProperty.tenant.chartOfAccountsId);


   CARAPI SetTenant.ChartOfClassesId(
  /* [in] */ CFinance.chartOfClasses CProperty.tenant.chartOfClassesId);

    CARAPI GetTenant.ChartOfClassesId(
  /* [out] */ CFinance.chartOfClasses* CProperty.tenant.chartOfClassesId);


   CARAPI SetTenant.DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.tenant.docRefIds);

    CARAPI GetTenant.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.tenant.docRefIds);


   CARAPI SetTenant.ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.tenant.imageRefIds);

    CARAPI GetTenant.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.tenant.imageRefIds);


   CARAPI SetTenant.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.tenant.businessChannelOwnerId);

    CARAPI GetTenant.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.tenant.businessChannelOwnerId);





   CARAPI SetPropertyOwnerPropertyJoin.PropOwnerPropJoinId(
  /* [in] */ const String& CProperty.propertyOwnerPropertyJoin.propOwnerPropJoinId);

    CARAPI GetPropertyOwnerPropertyJoin.PropOwnerPropJoinId(
  /* [out] */ String* CProperty.propertyOwnerPropertyJoin.propOwnerPropJoinId);


   CARAPI SetPropertyOwnerPropertyJoin.OwnershipPercentage(
  /* [in] */ Double CProperty.propertyOwnerPropertyJoin.ownershipPercentage);

    CARAPI GetPropertyOwnerPropertyJoin.OwnershipPercentage(
  /* [out] */ Double* CProperty.propertyOwnerPropertyJoin.ownershipPercentage);


   CARAPI SetPropertyOwnerPropertyJoin.PropertyId(
  /* [in] */ CProperty.property CProperty.propertyOwnerPropertyJoin.propertyId);

    CARAPI GetPropertyOwnerPropertyJoin.PropertyId(
  /* [out] */ CProperty.property* CProperty.propertyOwnerPropertyJoin.propertyId);


   CARAPI SetPropertyOwnerPropertyJoin.PropertyOwnerId(
  /* [in] */ CProperty.propertyOwner CProperty.propertyOwnerPropertyJoin.propertyOwnerId);

    CARAPI GetPropertyOwnerPropertyJoin.PropertyOwnerId(
  /* [out] */ CProperty.propertyOwner* CProperty.propertyOwnerPropertyJoin.propertyOwnerId);


   CARAPI SetPropertyOwnerPropertyJoin.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.propertyOwnerPropertyJoin.businessChannelOwnerId);

    CARAPI GetPropertyOwnerPropertyJoin.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.propertyOwnerPropertyJoin.businessChannelOwnerId);





   CARAPI SetCustomerPropertyJoin.CustPropJoinId(
  /* [in] */ const String& CProperty.customerpropertyJoin.custPropJoinId);

    CARAPI GetCustomerPropertyJoin.CustPropJoinId(
  /* [out] */ String* CProperty.customerpropertyJoin.custPropJoinId);


   CARAPI SetCustomerPropertyJoin.Relationship(
  /* [in] */ CHelper.relationship CProperty.customerpropertyJoin.relationship);

    CARAPI GetCustomerPropertyJoin.Relationship(
  /* [out] */ CHelper.relationship* CProperty.customerpropertyJoin.relationship);


   CARAPI SetCustomerPropertyJoin.CustomerId(
  /* [in] */ CCustomer.customer CProperty.customerpropertyJoin.customerId);

    CARAPI GetCustomerPropertyJoin.CustomerId(
  /* [out] */ CCustomer.customer* CProperty.customerpropertyJoin.customerId);


   CARAPI SetCustomerPropertyJoin.PropertyId(
  /* [in] */ CProperty.property CProperty.customerpropertyJoin.propertyId);

    CARAPI GetCustomerPropertyJoin.PropertyId(
  /* [out] */ CProperty.property* CProperty.customerpropertyJoin.propertyId);


   CARAPI SetCustomerPropertyJoin.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.customerpropertyJoin.businessChannelOwnerId);

    CARAPI GetCustomerPropertyJoin.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.customerpropertyJoin.businessChannelOwnerId);





   CARAPI SetCustomerPropertyOwnerJoin.CustPropOwnerJoinId(
  /* [in] */ const String& CProperty.customerPropertyOwnerJoin.custPropOwnerJoinId);

    CARAPI GetCustomerPropertyOwnerJoin.CustPropOwnerJoinId(
  /* [out] */ String* CProperty.customerPropertyOwnerJoin.custPropOwnerJoinId);


   CARAPI SetCustomerPropertyOwnerJoin.CustomerId(
  /* [in] */ CCustomer.customer CProperty.customerPropertyOwnerJoin.customerId);

    CARAPI GetCustomerPropertyOwnerJoin.CustomerId(
  /* [out] */ CCustomer.customer* CProperty.customerPropertyOwnerJoin.customerId);


   CARAPI SetCustomerPropertyOwnerJoin.PropertyOwnerId(
  /* [in] */ CProperty.propertyOwner CProperty.customerPropertyOwnerJoin.propertyOwnerId);

    CARAPI GetCustomerPropertyOwnerJoin.PropertyOwnerId(
  /* [out] */ CProperty.propertyOwner* CProperty.customerPropertyOwnerJoin.propertyOwnerId);


   CARAPI SetCustomerPropertyOwnerJoin.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.customerPropertyOwnerJoin.businessChannelOwnerId);

    CARAPI GetCustomerPropertyOwnerJoin.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.customerPropertyOwnerJoin.businessChannelOwnerId);





   CARAPI SetPropertyInspectionResidential.PropertyInspectionResId(
  /* [in] */ const String& CProperty.propertyInspectionResidential.propertyInspectionResId);

    CARAPI GetPropertyInspectionResidential.PropertyInspectionResId(
  /* [out] */ String* CProperty.propertyInspectionResidential.propertyInspectionResId);


   CARAPI SetPropertyInspectionResidential.InspectionDates(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.inspectionDates);

    CARAPI GetPropertyInspectionResidential.InspectionDates(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.inspectionDates);


   CARAPI SetPropertyInspectionResidential.PropertyAddressString(
  /* [in] */ const String& CProperty.propertyInspectionResidential.propertyAddressString);

    CARAPI GetPropertyInspectionResidential.PropertyAddressString(
  /* [out] */ String* CProperty.propertyInspectionResidential.propertyAddressString);


   CARAPI SetPropertyInspectionResidential.UnitNumber(
  /* [in] */ const String& CProperty.propertyInspectionResidential.unitNumber);

    CARAPI GetPropertyInspectionResidential.UnitNumber(
  /* [out] */ String* CProperty.propertyInspectionResidential.unitNumber);


   CARAPI SetPropertyInspectionResidential.Bathroom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.bathroom);

    CARAPI GetPropertyInspectionResidential.Bathroom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.bathroom);


   CARAPI SetPropertyInspectionResidential.Bedroom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.bedroom);

    CARAPI GetPropertyInspectionResidential.Bedroom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.bedroom);


   CARAPI SetPropertyInspectionResidential.DiningRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.diningRoom);

    CARAPI GetPropertyInspectionResidential.DiningRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.diningRoom);


   CARAPI SetPropertyInspectionResidential.InternalDoorways(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.internalDoorways);

    CARAPI GetPropertyInspectionResidential.InternalDoorways(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.internalDoorways);


   CARAPI SetPropertyInspectionResidential.Driveways(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.driveways);

    CARAPI GetPropertyInspectionResidential.Driveways(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.driveways);


   CARAPI SetPropertyInspectionResidential.Ensuite(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.ensuite);

    CARAPI GetPropertyInspectionResidential.Ensuite(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.ensuite);


   CARAPI SetPropertyInspectionResidential.Entrance(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.entrance);

    CARAPI GetPropertyInspectionResidential.Entrance(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.entrance);


   CARAPI SetPropertyInspectionResidential.ExternalAreas(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.externalAreas);

    CARAPI GetPropertyInspectionResidential.ExternalAreas(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.externalAreas);


   CARAPI SetPropertyInspectionResidential.ExternalDoors(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.externalDoors);

    CARAPI GetPropertyInspectionResidential.ExternalDoors(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.externalDoors);


   CARAPI SetPropertyInspectionResidential.FamilyRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.familyRoom);

    CARAPI GetPropertyInspectionResidential.FamilyRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.familyRoom);


   CARAPI SetPropertyInspectionResidential.Fences(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.fences);

    CARAPI GetPropertyInspectionResidential.Fences(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.fences);


   CARAPI SetPropertyInspectionResidential.GarageCarport(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.garageCarport);

    CARAPI GetPropertyInspectionResidential.GarageCarport(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.garageCarport);


   CARAPI SetPropertyInspectionResidential.Gates(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.gates);

    CARAPI GetPropertyInspectionResidential.Gates(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.gates);


   CARAPI SetPropertyInspectionResidential.Gutterings(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.gutterings);

    CARAPI GetPropertyInspectionResidential.Gutterings(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.gutterings);


   CARAPI SetPropertyInspectionResidential.Hallway(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.hallway);

    CARAPI GetPropertyInspectionResidential.Hallway(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.hallway);


   CARAPI SetPropertyInspectionResidential.HotWater(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.hotWater);

    CARAPI GetPropertyInspectionResidential.HotWater(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.hotWater);


   CARAPI SetPropertyInspectionResidential.Kitchen(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.kitchen);

    CARAPI GetPropertyInspectionResidential.Kitchen(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.kitchen);


   CARAPI SetPropertyInspectionResidential.Laundry(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.laundry);

    CARAPI GetPropertyInspectionResidential.Laundry(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.laundry);


   CARAPI SetPropertyInspectionResidential.LetterBox(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.letterBox);

    CARAPI GetPropertyInspectionResidential.LetterBox(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.letterBox);


   CARAPI SetPropertyInspectionResidential.LivingRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.livingRoom);

    CARAPI GetPropertyInspectionResidential.LivingRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.livingRoom);


   CARAPI SetPropertyInspectionResidential.Notes(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.notes);

    CARAPI GetPropertyInspectionResidential.Notes(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.notes);


   CARAPI SetPropertyInspectionResidential.OtherItems(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.otherItems);

    CARAPI GetPropertyInspectionResidential.OtherItems(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.otherItems);


   CARAPI SetPropertyInspectionResidential.Pests(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.pests);

    CARAPI GetPropertyInspectionResidential.Pests(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.pests);


   CARAPI SetPropertyInspectionResidential.PetIssues(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.petIssues);

    CARAPI GetPropertyInspectionResidential.PetIssues(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.petIssues);


   CARAPI SetPropertyInspectionResidential.Plumbing(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.plumbing);

    CARAPI GetPropertyInspectionResidential.Plumbing(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.plumbing);


   CARAPI SetPropertyInspectionResidential.Pool(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.pool);

    CARAPI GetPropertyInspectionResidential.Pool(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.pool);


   CARAPI SetPropertyInspectionResidential.RecreationRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.recreationRoom);

    CARAPI GetPropertyInspectionResidential.RecreationRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.recreationRoom);


   CARAPI SetPropertyInspectionResidential.Roof(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.roof);

    CARAPI GetPropertyInspectionResidential.Roof(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.roof);


   CARAPI SetPropertyInspectionResidential.ScreenDoors(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.screenDoors);

    CARAPI GetPropertyInspectionResidential.ScreenDoors(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.screenDoors);


   CARAPI SetPropertyInspectionResidential.StructuralIntegrity(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.structuralIntegrity);

    CARAPI GetPropertyInspectionResidential.StructuralIntegrity(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.structuralIntegrity);


   CARAPI SetPropertyInspectionResidential.TennisCourt(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.tennisCourt);

    CARAPI GetPropertyInspectionResidential.TennisCourt(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.tennisCourt);


   CARAPI SetPropertyInspectionResidential.Toilet(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.toilet);

    CARAPI GetPropertyInspectionResidential.Toilet(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.toilet);


   CARAPI SetPropertyInspectionResidential.WiringElectrical(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionResidential.wiringElectrical);

    CARAPI GetPropertyInspectionResidential.WiringElectrical(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionResidential.wiringElectrical);


   CARAPI SetPropertyInspectionResidential.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.propertyInspectionResidential.businessChannelOwnerId);

    CARAPI GetPropertyInspectionResidential.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.propertyInspectionResidential.businessChannelOwnerId);


   CARAPI SetPropertyInspectionResidential.BranchId(
  /* [in] */ CAdministration.branch CProperty.propertyInspectionResidential.branchId);

    CARAPI GetPropertyInspectionResidential.BranchId(
  /* [out] */ CAdministration.branch* CProperty.propertyInspectionResidential.branchId);


   CARAPI SetPropertyInspectionResidential.DeptId(
  /* [in] */ CAdministration.department CProperty.propertyInspectionResidential.deptId);

    CARAPI GetPropertyInspectionResidential.DeptId(
  /* [out] */ CAdministration.department* CProperty.propertyInspectionResidential.deptId);


   CARAPI SetPropertyInspectionResidential.PropertyId(
  /* [in] */ CProperty.property CProperty.propertyInspectionResidential.propertyId);

    CARAPI GetPropertyInspectionResidential.PropertyId(
  /* [out] */ CProperty.property* CProperty.propertyInspectionResidential.propertyId);


   CARAPI SetPropertyInspectionResidential.DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.propertyInspectionResidential.docRefIds);

    CARAPI GetPropertyInspectionResidential.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.propertyInspectionResidential.docRefIds);


   CARAPI SetPropertyInspectionResidential.ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.propertyInspectionResidential.imageRefIds);

    CARAPI GetPropertyInspectionResidential.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.propertyInspectionResidential.imageRefIds);


   CARAPI SetPropertyInspectionResidential.AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> CProperty.propertyInspectionResidential.audioRefIds);

    CARAPI GetPropertyInspectionResidential.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CProperty.propertyInspectionResidential.audioRefIds);


   CARAPI SetPropertyInspectionResidential.VideoRefIds(
  /* [in] */ ArrayOf<CAdministration.video> CProperty.propertyInspectionResidential.videoRefIds);

    CARAPI GetPropertyInspectionResidential.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CProperty.propertyInspectionResidential.videoRefIds);


   CARAPI SetPropertyInspectionResidential.TenancyId(
  /* [in] */ CProperty.tenant CProperty.propertyInspectionResidential.tenancyId);

    CARAPI GetPropertyInspectionResidential.TenancyId(
  /* [out] */ CProperty.tenant* CProperty.propertyInspectionResidential.tenancyId);


   CARAPI SetPropertyInspectionResidential.EmployeeIds(
  /* [in] */ ArrayOf<CAdministration.staff> CProperty.propertyInspectionResidential.employeeIds);

    CARAPI GetPropertyInspectionResidential.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CProperty.propertyInspectionResidential.employeeIds);





   CARAPI SetPropertyInspectionCommercial.PropertyInspectionCommercId(
  /* [in] */ const String& CProperty.propertyInspectionCommercial.propertyInspectionCommercId);

    CARAPI GetPropertyInspectionCommercial.PropertyInspectionCommercId(
  /* [out] */ String* CProperty.propertyInspectionCommercial.propertyInspectionCommercId);


   CARAPI SetPropertyInspectionCommercial.InspectionDates(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.inspectionDates);

    CARAPI GetPropertyInspectionCommercial.InspectionDates(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.inspectionDates);


   CARAPI SetPropertyInspectionCommercial.PropertyAddressString(
  /* [in] */ const String& CProperty.propertyInspectionCommercial.propertyAddressString);

    CARAPI GetPropertyInspectionCommercial.PropertyAddressString(
  /* [out] */ String* CProperty.propertyInspectionCommercial.propertyAddressString);


   CARAPI SetPropertyInspectionCommercial.UnitNumber(
  /* [in] */ const String& CProperty.propertyInspectionCommercial.unitNumber);

    CARAPI GetPropertyInspectionCommercial.UnitNumber(
  /* [out] */ String* CProperty.propertyInspectionCommercial.unitNumber);


   CARAPI SetPropertyInspectionCommercial.AirConditioning(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.airConditioning);

    CARAPI GetPropertyInspectionCommercial.AirConditioning(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.airConditioning);


   CARAPI SetPropertyInspectionCommercial.DiningRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.diningRoom);

    CARAPI GetPropertyInspectionCommercial.DiningRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.diningRoom);


   CARAPI SetPropertyInspectionCommercial.InternalDoorways(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.internalDoorways);

    CARAPI GetPropertyInspectionCommercial.InternalDoorways(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.internalDoorways);


   CARAPI SetPropertyInspectionCommercial.Driveways(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.driveways);

    CARAPI GetPropertyInspectionCommercial.Driveways(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.driveways);


   CARAPI SetPropertyInspectionCommercial.Entrance(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.entrance);

    CARAPI GetPropertyInspectionCommercial.Entrance(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.entrance);


   CARAPI SetPropertyInspectionCommercial.ExternalAreas(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.externalAreas);

    CARAPI GetPropertyInspectionCommercial.ExternalAreas(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.externalAreas);


   CARAPI SetPropertyInspectionCommercial.ExternalDoors(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.externalDoors);

    CARAPI GetPropertyInspectionCommercial.ExternalDoors(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.externalDoors);


   CARAPI SetPropertyInspectionCommercial.FactorySpace(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.factorySpace);

    CARAPI GetPropertyInspectionCommercial.FactorySpace(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.factorySpace);


   CARAPI SetPropertyInspectionCommercial.Fences(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.fences);

    CARAPI GetPropertyInspectionCommercial.Fences(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.fences);


   CARAPI SetPropertyInspectionCommercial.GarageCarport(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.garageCarport);

    CARAPI GetPropertyInspectionCommercial.GarageCarport(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.garageCarport);


   CARAPI SetPropertyInspectionCommercial.Gates(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.gates);

    CARAPI GetPropertyInspectionCommercial.Gates(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.gates);


   CARAPI SetPropertyInspectionCommercial.Gutterings(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.gutterings);

    CARAPI GetPropertyInspectionCommercial.Gutterings(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.gutterings);


   CARAPI SetPropertyInspectionCommercial.Hallway(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.hallway);

    CARAPI GetPropertyInspectionCommercial.Hallway(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.hallway);


   CARAPI SetPropertyInspectionCommercial.Heating(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.heating);

    CARAPI GetPropertyInspectionCommercial.Heating(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.heating);


   CARAPI SetPropertyInspectionCommercial.HotWater(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.hotWater);

    CARAPI GetPropertyInspectionCommercial.HotWater(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.hotWater);


   CARAPI SetPropertyInspectionCommercial.Kitchen(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.kitchen);

    CARAPI GetPropertyInspectionCommercial.Kitchen(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.kitchen);


   CARAPI SetPropertyInspectionCommercial.Laundry(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.laundry);

    CARAPI GetPropertyInspectionCommercial.Laundry(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.laundry);


   CARAPI SetPropertyInspectionCommercial.Notes(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.notes);

    CARAPI GetPropertyInspectionCommercial.Notes(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.notes);


   CARAPI SetPropertyInspectionCommercial.OfficeSpace(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.officeSpace);

    CARAPI GetPropertyInspectionCommercial.OfficeSpace(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.officeSpace);


   CARAPI SetPropertyInspectionCommercial.ParkingSpaces(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.parkingSpaces);

    CARAPI GetPropertyInspectionCommercial.ParkingSpaces(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.parkingSpaces);


   CARAPI SetPropertyInspectionCommercial.OtherItems(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.otherItems);

    CARAPI GetPropertyInspectionCommercial.OtherItems(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.otherItems);


   CARAPI SetPropertyInspectionCommercial.Pests(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.pests);

    CARAPI GetPropertyInspectionCommercial.Pests(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.pests);


   CARAPI SetPropertyInspectionCommercial.OtherIssues(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.otherIssues);

    CARAPI GetPropertyInspectionCommercial.OtherIssues(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.otherIssues);


   CARAPI SetPropertyInspectionCommercial.Plumbing(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.plumbing);

    CARAPI GetPropertyInspectionCommercial.Plumbing(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.plumbing);


   CARAPI SetPropertyInspectionCommercial.RecreationRoom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.recreationRoom);

    CARAPI GetPropertyInspectionCommercial.RecreationRoom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.recreationRoom);


   CARAPI SetPropertyInspectionCommercial.RetailSpace(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.retailSpace);

    CARAPI GetPropertyInspectionCommercial.RetailSpace(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.retailSpace);


   CARAPI SetPropertyInspectionCommercial.Roof(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.roof);

    CARAPI GetPropertyInspectionCommercial.Roof(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.roof);


   CARAPI SetPropertyInspectionCommercial.ScreenDoors(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.screenDoors);

    CARAPI GetPropertyInspectionCommercial.ScreenDoors(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.screenDoors);


   CARAPI SetPropertyInspectionCommercial.StructuralIntegrity(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.structuralIntegrity);

    CARAPI GetPropertyInspectionCommercial.StructuralIntegrity(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.structuralIntegrity);


   CARAPI SetPropertyInspectionCommercial.Floors(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.floors);

    CARAPI GetPropertyInspectionCommercial.Floors(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.floors);


   CARAPI SetPropertyInspectionCommercial.Toilet(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.toilet);

    CARAPI GetPropertyInspectionCommercial.Toilet(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.toilet);


   CARAPI SetPropertyInspectionCommercial.VentilationIncludingFans(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.ventilationIncludingFans);

    CARAPI GetPropertyInspectionCommercial.VentilationIncludingFans(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.ventilationIncludingFans);


   CARAPI SetPropertyInspectionCommercial.WarehouseSpace(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.warehouseSpace);

    CARAPI GetPropertyInspectionCommercial.WarehouseSpace(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.warehouseSpace);


   CARAPI SetPropertyInspectionCommercial.Washroom(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.washroom);

    CARAPI GetPropertyInspectionCommercial.Washroom(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.washroom);


   CARAPI SetPropertyInspectionCommercial.WiringElectrical(
  /* [in] */ ArrayOf<const String&> CProperty.propertyInspectionCommercial.wiringElectrical);

    CARAPI GetPropertyInspectionCommercial.WiringElectrical(
     /* [out, callee] */ ArrayOf<String>* CProperty.propertyInspectionCommercial.wiringElectrical);


   CARAPI SetPropertyInspectionCommercial.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.propertyInspectionCommercial.businessChannelOwnerId);

    CARAPI GetPropertyInspectionCommercial.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.propertyInspectionCommercial.businessChannelOwnerId);


   CARAPI SetPropertyInspectionCommercial.BranchId(
  /* [in] */ CAdministration.branch CProperty.propertyInspectionCommercial.branchId);

    CARAPI GetPropertyInspectionCommercial.BranchId(
  /* [out] */ CAdministration.branch* CProperty.propertyInspectionCommercial.branchId);


   CARAPI SetPropertyInspectionCommercial.DeptId(
  /* [in] */ CAdministration.department CProperty.propertyInspectionCommercial.deptId);

    CARAPI GetPropertyInspectionCommercial.DeptId(
  /* [out] */ CAdministration.department* CProperty.propertyInspectionCommercial.deptId);


   CARAPI SetPropertyInspectionCommercial.PropertyId(
  /* [in] */ CProperty.property CProperty.propertyInspectionCommercial.propertyId);

    CARAPI GetPropertyInspectionCommercial.PropertyId(
  /* [out] */ CProperty.property* CProperty.propertyInspectionCommercial.propertyId);


   CARAPI SetPropertyInspectionCommercial.TenancyId(
  /* [in] */ CProperty.tenant CProperty.propertyInspectionCommercial.tenancyId);

    CARAPI GetPropertyInspectionCommercial.TenancyId(
  /* [out] */ CProperty.tenant* CProperty.propertyInspectionCommercial.tenancyId);


   CARAPI SetPropertyInspectionCommercial.EmployeeIds(
  /* [in] */ ArrayOf<CAdministration.staff> CProperty.propertyInspectionCommercial.employeeIds);

    CARAPI GetPropertyInspectionCommercial.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CProperty.propertyInspectionCommercial.employeeIds);


   CARAPI SetPropertyInspectionCommercial.DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.propertyInspectionCommercial.docRefIds);

    CARAPI GetPropertyInspectionCommercial.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.propertyInspectionCommercial.docRefIds);


   CARAPI SetPropertyInspectionCommercial.ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.propertyInspectionCommercial.imageRefIds);

    CARAPI GetPropertyInspectionCommercial.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.propertyInspectionCommercial.imageRefIds);


   CARAPI SetPropertyInspectionCommercial.AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> CProperty.propertyInspectionCommercial.audioRefIds);

    CARAPI GetPropertyInspectionCommercial.AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* CProperty.propertyInspectionCommercial.audioRefIds);


   CARAPI SetPropertyInspectionCommercial.VideoRefIds(
  /* [in] */ ArrayOf<CAdministration.video> CProperty.propertyInspectionCommercial.videoRefIds);

    CARAPI GetPropertyInspectionCommercial.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CProperty.propertyInspectionCommercial.videoRefIds);





   CARAPI SetTenancyCaseManagement.TenancyCaseMngmntId(
  /* [in] */ const String& CProperty.tenancyCaseManagement.tenancyCaseMngmntId);

    CARAPI GetTenancyCaseManagement.TenancyCaseMngmntId(
  /* [out] */ String* CProperty.tenancyCaseManagement.tenancyCaseMngmntId);


   CARAPI SetTenancyCaseManagement.SupervisorStaffId(
  /* [in] */ const String& CProperty.tenancyCaseManagement.supervisorStaffId);

    CARAPI GetTenancyCaseManagement.SupervisorStaffId(
  /* [out] */ String* CProperty.tenancyCaseManagement.supervisorStaffId);


   CARAPI SetTenancyCaseManagement.TenantActionsInChronologicalOrder(
  /* [in] */ ArrayOf<const String&> CProperty.tenancyCaseManagement.tenantActionsInChronologicalOrder);

    CARAPI GetTenancyCaseManagement.TenantActionsInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* CProperty.tenancyCaseManagement.tenantActionsInChronologicalOrder);


   CARAPI SetTenancyCaseManagement.DatesTimesOfEvents(
  /* [in] */ ArrayOf<const String&> CProperty.tenancyCaseManagement.datesTimesOfEvents);

    CARAPI GetTenancyCaseManagement.DatesTimesOfEvents(
     /* [out, callee] */ ArrayOf<String>* CProperty.tenancyCaseManagement.datesTimesOfEvents);


   CARAPI SetTenancyCaseManagement.OurResponsesInChronologicalOrder(
  /* [in] */ ArrayOf<const String&> CProperty.tenancyCaseManagement.ourResponsesInChronologicalOrder);

    CARAPI GetTenancyCaseManagement.OurResponsesInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* CProperty.tenancyCaseManagement.ourResponsesInChronologicalOrder);


   CARAPI SetTenancyCaseManagement.DatesTimesOfResponses(
  /* [in] */ ArrayOf<const String&> CProperty.tenancyCaseManagement.datesTimesOfResponses);

    CARAPI GetTenancyCaseManagement.DatesTimesOfResponses(
     /* [out, callee] */ ArrayOf<String>* CProperty.tenancyCaseManagement.datesTimesOfResponses);


   CARAPI SetTenancyCaseManagement.Resolved(
  /* [in] */ Boolean CProperty.tenancyCaseManagement.resolved);

    CARAPI GetTenancyCaseManagement.Resolved(
  /* [out] */ Boolean* CProperty.tenancyCaseManagement.resolved);


   CARAPI SetTenancyCaseManagement.BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner CProperty.tenancyCaseManagement.businessChannelOwnerId);

    CARAPI GetTenancyCaseManagement.BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* CProperty.tenancyCaseManagement.businessChannelOwnerId);


   CARAPI SetTenancyCaseManagement.PropertyId(
  /* [in] */ CProperty.property CProperty.tenancyCaseManagement.propertyId);

    CARAPI GetTenancyCaseManagement.PropertyId(
  /* [out] */ CProperty.property* CProperty.tenancyCaseManagement.propertyId);


   CARAPI SetTenancyCaseManagement.BranchId(
  /* [in] */ CAdministration.branch CProperty.tenancyCaseManagement.branchId);

    CARAPI GetTenancyCaseManagement.BranchId(
  /* [out] */ CAdministration.branch* CProperty.tenancyCaseManagement.branchId);


   CARAPI SetTenancyCaseManagement.TenancyId(
  /* [in] */ CProperty.tenant CProperty.tenancyCaseManagement.tenancyId);

    CARAPI GetTenancyCaseManagement.TenancyId(
  /* [out] */ CProperty.tenant* CProperty.tenancyCaseManagement.tenancyId);


   CARAPI SetTenancyCaseManagement.CustomerIds(
  /* [in] */ ArrayOf<CCustomer.customer> CProperty.tenancyCaseManagement.customerIds);

    CARAPI GetTenancyCaseManagement.CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* CProperty.tenancyCaseManagement.customerIds);


   CARAPI SetTenancyCaseManagement.EmployeeIds(
  /* [in] */ ArrayOf<CAdministration.staff> CProperty.tenancyCaseManagement.employeeIds);

    CARAPI GetTenancyCaseManagement.EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* CProperty.tenancyCaseManagement.employeeIds);


   CARAPI SetTenancyCaseManagement.DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> CProperty.tenancyCaseManagement.docRefIds);

    CARAPI GetTenancyCaseManagement.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CProperty.tenancyCaseManagement.docRefIds);


   CARAPI SetTenancyCaseManagement.ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> CProperty.tenancyCaseManagement.imageRefIds);

    CARAPI GetTenancyCaseManagement.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CProperty.tenancyCaseManagement.imageRefIds);


protected:
    // Member variables
const String& mSetProperty.PropertyId
String* mGetProperty.PropertyId
const String& mSetProperty.PropertyAddressString
String* mGetProperty.PropertyAddressString
const String& mSetProperty.UnitNumber
String* mGetProperty.UnitNumber
const String& mSetProperty.StreetNumber
String* mGetProperty.StreetNumber
const String& mSetProperty.StreetName
String* mGetProperty.StreetName
const String& mSetProperty.SuburbTown
String* mGetProperty.SuburbTown
Int32 mSetProperty.Postcode
Int32* mGetProperty.Postcode
CHelper.ausState mSetProperty.State
CHelper.ausState* mGetProperty.State
const String& mSetProperty.EnvelopeGreetings
String* mGetProperty.EnvelopeGreetings
const String& mSetProperty.CorrespondenceFolderDocRef
String* mGetProperty.CorrespondenceFolderDocRef
const String& mSetProperty.StartDateLatestLease
String* mGetProperty.StartDateLatestLease
const String& mSetProperty.EndDateLatestLease
String* mGetProperty.EndDateLatestLease
Boolean mSetProperty.Occupied
Boolean* mGetProperty.Occupied
const String& mSetProperty.LocalGovArea
String* mGetProperty.LocalGovArea
const String& mSetProperty.Zoning
String* mGetProperty.Zoning
const String& mSetProperty.Lot
String* mGetProperty.Lot
const String& mSetProperty.DP
String* mGetProperty.DP
const String& mSetProperty.SP
String* mGetProperty.SP
const String& mSetProperty.DCPNum
String* mGetProperty.DCPNum
const String& mSetProperty.Parish
String* mGetProperty.Parish
const String& mSetProperty.Description
String* mGetProperty.Description
Double mSetProperty.Lon
Double* mGetProperty.Lon
Double mSetProperty.Lat
Double* mGetProperty.Lat
Double mSetProperty.Elevation
Double* mGetProperty.Elevation
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
const String& mSetProperty.ConstructionTypeName
String* mGetProperty.ConstructionTypeName
const String& mSetProperty.FolioCertCopyDocRef
String* mGetProperty.FolioCertCopyDocRef
const String& mSetProperty.CopyOfDepositedPlanDocRef
String* mGetProperty.CopyOfDepositedPlanDocRef
ArrayOf<const String&> mSetProperty.CopiesOfLiensDocrefs
ArrayOf<String>* mGetProperty.CopiesOfLiensDocrefs
const String& mSetProperty.CopyOfBuildingCertDocRef
String* mGetProperty.CopyOfBuildingCertDocRef
const String& mSetProperty.CopyOfInsuranceCertDocRef
String* mGetProperty.CopyOfInsuranceCertDocRef
const String& mSetProperty.FolderContainingWarrantiesDocRef
String* mGetProperty.FolderContainingWarrantiesDocRef
const String& mSetProperty.CopyOfPlanningCertSection149DEPADocRef
String* mGetProperty.CopyOfPlanningCertSection149DEPADocRef
const String& mSetProperty.CopyOfSection88GCertDocRef
String* mGetProperty.CopyOfSection88GCertDocRef
const String& mSetProperty.FolderContainingAdditionalAnnexuresDocRef
String* mGetProperty.FolderContainingAdditionalAnnexuresDocRef
const String& mSetProperty.FolderContainingAdditionalDisclosuresDocRef
String* mGetProperty.FolderContainingAdditionalDisclosuresDocRef
ArrayOf<const String&> mSetProperty.CopyOfSurveyReportsDocRefs
ArrayOf<String>* mGetProperty.CopyOfSurveyReportsDocRefs
ArrayOf<const String&> mSetProperty.DrainageDiagsSewerRefSheetsDocRefs
ArrayOf<String>* mGetProperty.DrainageDiagsSewerRefSheetsDocRefs
ArrayOf<const String&> mSetProperty.BuildingInspectionDocRefs
ArrayOf<String>* mGetProperty.BuildingInspectionDocRefs
ArrayOf<const String&> mSetProperty.PestInspectionDocRefs
ArrayOf<String>* mGetProperty.PestInspectionDocRefs
ArrayOf<const String&> mSetProperty.ProblemsWithPropertyDocRefs
ArrayOf<String>* mGetProperty.ProblemsWithPropertyDocRefs
ArrayOf<Double> mSetProperty.PropertyOwnerSharePercents
ArrayOf<Double>* mGetProperty.PropertyOwnerSharePercents
Double mSetProperty.CapitalValue
Double* mGetProperty.CapitalValue
Double mSetProperty.FloorPrice
Double* mGetProperty.FloorPrice
Double mSetProperty.LatestBuyOfferPrice
Double* mGetProperty.LatestBuyOfferPrice
const String& mSetProperty.LatestBuyOfferDateTime
String* mGetProperty.LatestBuyOfferDateTime
Boolean mSetProperty.LatestBuyOfferPriceAccepted
Boolean* mGetProperty.LatestBuyOfferPriceAccepted
ArrayOf<const String&> mSetProperty.LatestBuyOfferNotes
ArrayOf<String>* mGetProperty.LatestBuyOfferNotes
Double mSetProperty.RentalValue
Double* mGetProperty.RentalValue
Double mSetProperty.LandTotalSquareMetres
Double* mGetProperty.LandTotalSquareMetres
Double mSetProperty.LandTotalHectares
Double* mGetProperty.LandTotalHectares
Double mSetProperty.BuildingTotalSquareMetres
Double* mGetProperty.BuildingTotalSquareMetres
ArrayOf<const String&> mSetProperty.Amenities
ArrayOf<String>* mGetProperty.Amenities
CHelper.propertyTradingBasis mSetProperty.PropertyTradingBasis
CHelper.propertyTradingBasis* mGetProperty.PropertyTradingBasis
CHelper.propertyType mSetProperty.PropertyType
CHelper.propertyType* mGetProperty.PropertyType
CHelper.leaseType mSetProperty.LeaseType
CHelper.leaseType* mGetProperty.LeaseType
CHelper.leaseArrangement mSetProperty.LeaseArrangement
CHelper.leaseArrangement* mGetProperty.LeaseArrangement
CHelper.leasingTerm mSetProperty.LeasingTerm
CHelper.leasingTerm* mGetProperty.LeasingTerm
CHelper.billingInterval mSetProperty.RentalPaymentInterval
CHelper.billingInterval* mGetProperty.RentalPaymentInterval
CRegister.businessChannelOwner mSetProperty.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetProperty.BusinessChannelOwnerId
CAdministration.branch mSetProperty.BranchId
CAdministration.branch* mGetProperty.BranchId
CAdministration.department mSetProperty.DeptId
CAdministration.department* mGetProperty.DeptId
ArrayOf<CProperty.propertyOwner> mSetProperty.PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetProperty.PropertyOwnerIds
CProperty.propertyConstructionType mSetProperty.PropertyConstructionTypeId
CProperty.propertyConstructionType* mGetProperty.PropertyConstructionTypeId
CProperty.tenant mSetProperty.TenancyId
CProperty.tenant* mGetProperty.TenancyId
ArrayOf<CAdministration.documents> mSetProperty.DocRefs
ArrayOf<CAdministration.documents>* mGetProperty.DocRefs
ArrayOf<CAdministration.images> mSetProperty.ImageRefs
ArrayOf<CAdministration.images>* mGetProperty.ImageRefs
ArrayOf<CAdministration.audio> mSetProperty.AudioRefIds
ArrayOf<CAdministration.audio>* mGetProperty.AudioRefIds
ArrayOf<CAdministration.video> mSetProperty.VideoRefs
ArrayOf<CAdministration.video>* mGetProperty.VideoRefs
const String& mSetPropertyConstructionType.PropertyConstructionTypeId
String* mGetPropertyConstructionType.PropertyConstructionTypeId
const String& mSetPropertyConstructionType.ConstructionTypeName
String* mGetPropertyConstructionType.ConstructionTypeName
const String& mSetPropertyConstructionType.Description
String* mGetPropertyConstructionType.Description
ArrayOf<CAdministration.documents> mSetPropertyConstructionType.DocRefIds
ArrayOf<CAdministration.documents>* mGetPropertyConstructionType.DocRefIds
ArrayOf<CAdministration.images> mSetPropertyConstructionType.ImageRefIds
ArrayOf<CAdministration.images>* mGetPropertyConstructionType.ImageRefIds
ArrayOf<CAdministration.audio> mSetPropertyConstructionType.AudioRefIds
ArrayOf<CAdministration.audio>* mGetPropertyConstructionType.AudioRefIds
ArrayOf<CAdministration.video> mSetPropertyConstructionType.VideoRefIds
ArrayOf<CAdministration.video>* mGetPropertyConstructionType.VideoRefIds
ArrayOf<CAdministration.riskRegister> mSetPropertyConstructionType.RiskIds
ArrayOf<CAdministration.riskRegister>* mGetPropertyConstructionType.RiskIds
CRegister.businessChannelOwner mSetPropertyConstructionType.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPropertyConstructionType.BusinessChannelOwnerId
const String& mSetPropertyOwner.PropertyOwnerId
String* mGetPropertyOwner.PropertyOwnerId
const String& mSetPropertyOwner.LinkedToThisCustomerId
String* mGetPropertyOwner.LinkedToThisCustomerId
const String& mSetPropertyOwner.LinkedToThisSupplierId
String* mGetPropertyOwner.LinkedToThisSupplierId
const String& mSetPropertyOwner.FirstName
String* mGetPropertyOwner.FirstName
const String& mSetPropertyOwner.LastName
String* mGetPropertyOwner.LastName
const String& mSetPropertyOwner.ResidentialAddress
String* mGetPropertyOwner.ResidentialAddress
const String& mSetPropertyOwner.PostalAddress
String* mGetPropertyOwner.PostalAddress
const String& mSetPropertyOwner.Email
String* mGetPropertyOwner.Email
Int32 mSetPropertyOwner.HomePhone
Int32* mGetPropertyOwner.HomePhone
Int32 mSetPropertyOwner.MobilePhone
Int32* mGetPropertyOwner.MobilePhone
Int32 mSetPropertyOwner.WorkPhone
Int32* mGetPropertyOwner.WorkPhone
const String& mSetPropertyOwner.BankName
String* mGetPropertyOwner.BankName
Int32 mSetPropertyOwner.BankBSB
Int32* mGetPropertyOwner.BankBSB
Int32 mSetPropertyOwner.BankAccountNumber
Int32* mGetPropertyOwner.BankAccountNumber
ArrayOf<const String&> mSetPropertyOwner.ContactedWithDetails
ArrayOf<String>* mGetPropertyOwner.ContactedWithDetails
ArrayOf<Double> mSetPropertyOwner.SharesPercents
ArrayOf<Double>* mGetPropertyOwner.SharesPercents
CRegister.businessChannelOwner mSetPropertyOwner.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPropertyOwner.BusinessChannelOwnerId
CAdministration.branch mSetPropertyOwner.BranchId
CAdministration.branch* mGetPropertyOwner.BranchId
ArrayOf<CProperty.property> mSetPropertyOwner.PropertyIds
ArrayOf<CProperty.property>* mGetPropertyOwner.PropertyIds
CCustomer.customer mSetPropertyOwner.CustomerId
CCustomer.customer* mGetPropertyOwner.CustomerId
ArrayOf<CAdministration.documents> mSetPropertyOwner.DocRefIds
ArrayOf<CAdministration.documents>* mGetPropertyOwner.DocRefIds
ArrayOf<CAdministration.images> mSetPropertyOwner.ImageRefIds
ArrayOf<CAdministration.images>* mGetPropertyOwner.ImageRefIds
const String& mSetProgram.ProgramId
String* mGetProgram.ProgramId
const String& mSetProgram.ProgramName
String* mGetProgram.ProgramName
const String& mSetProgram.Description
String* mGetProgram.Description
ArrayOf<CAdministration.documents> mSetProgram.DocRefIds
ArrayOf<CAdministration.documents>* mGetProgram.DocRefIds
ArrayOf<CAdministration.images> mSetProgram.ImageRefIds
ArrayOf<CAdministration.images>* mGetProgram.ImageRefIds
CRegister.businessChannelOwner mSetProgram.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetProgram.BusinessChannelOwnerId
CAdministration.branch mSetProgram.BranchId
CAdministration.branch* mGetProgram.BranchId
CAdministration.department mSetProgram.DeptId
CAdministration.department* mGetProgram.DeptId
const String& mSetProject.ProjectId
String* mGetProject.ProjectId
const String& mSetProject.ProjectName
String* mGetProject.ProjectName
const String& mSetProject.Description
String* mGetProject.Description
ArrayOf<CAdministration.documents> mSetProject.DocRefIds
ArrayOf<CAdministration.documents>* mGetProject.DocRefIds
ArrayOf<CAdministration.images> mSetProject.ImageRefIds
ArrayOf<CAdministration.images>* mGetProject.ImageRefIds
CRegister.businessChannelOwner mSetProject.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetProject.BusinessChannelOwnerId
CAdministration.branch mSetProject.BranchId
CAdministration.branch* mGetProject.BranchId
CAdministration.department mSetProject.DeptId
CAdministration.department* mGetProject.DeptId
const String& mSetAdvertisingBudgetSchedule.AdvertScheduleId
String* mGetAdvertisingBudgetSchedule.AdvertScheduleId
CHelper.advertisingMedium mSetAdvertisingBudgetSchedule.AdvertisingMedium
CHelper.advertisingMedium* mGetAdvertisingBudgetSchedule.AdvertisingMedium
const String& mSetAdvertisingBudgetSchedule.PreviousSchedId
String* mGetAdvertisingBudgetSchedule.PreviousSchedId
CHelper.month mSetAdvertisingBudgetSchedule.month
CHelper.month* mGetAdvertisingBudgetSchedule.month
Double mSetAdvertisingBudgetSchedule.BudgetedAmount
Double* mGetAdvertisingBudgetSchedule.BudgetedAmount
ArrayOf<const String&> mSetAdvertisingBudgetSchedule.RunDateTimes
ArrayOf<String>* mGetAdvertisingBudgetSchedule.RunDateTimes
CProperty.property mSetAdvertisingBudgetSchedule.PropertyId
CProperty.property* mGetAdvertisingBudgetSchedule.PropertyId
ArrayOf<CProperty.propertyOwner> mSetAdvertisingBudgetSchedule.PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetAdvertisingBudgetSchedule.PropertyOwnerIds
ArrayOf<CAdministration.advertisingTemplatesPlans> mSetAdvertisingBudgetSchedule.AdvertDesignIds
ArrayOf<CAdministration.advertisingTemplatesPlans>* mGetAdvertisingBudgetSchedule.AdvertDesignIds
CRegister.businessChannelOwner mSetAdvertisingBudgetSchedule.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAdvertisingBudgetSchedule.BusinessChannelOwnerId
CAdministration.branch mSetAdvertisingBudgetSchedule.BranchId
CAdministration.branch* mGetAdvertisingBudgetSchedule.BranchId
CAdministration.department mSetAdvertisingBudgetSchedule.DeptId
CAdministration.department* mGetAdvertisingBudgetSchedule.DeptId
const String& mSetAllocation.AllocationId
String* mGetAllocation.AllocationId
ArrayOf<const String&> mSetAllocation.ApplicationIds
ArrayOf<String>* mGetAllocation.ApplicationIds
ArrayOf<const String&> mSetAllocation.DocRefs
ArrayOf<String>* mGetAllocation.DocRefs
ArrayOf<const String&> mSetAllocation.Notes
ArrayOf<String>* mGetAllocation.Notes
const String& mSetAllocation.DateOfEffect
String* mGetAllocation.DateOfEffect
CProperty.property mSetAllocation.PropertyId
CProperty.property* mGetAllocation.PropertyId
CCustomer.application mSetAllocation.SuccessfulApplicationId
CCustomer.application* mGetAllocation.SuccessfulApplicationId
CProperty.tenant mSetAllocation.SuccessfulTenancyId
CProperty.tenant* mGetAllocation.SuccessfulTenancyId
CRegister.businessChannelOwner mSetAllocation.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAllocation.BusinessChannelOwnerId
CAdministration.branch mSetAllocation.BranchId
CAdministration.branch* mGetAllocation.BranchId
CAdministration.department mSetAllocation.DeptId
CAdministration.department* mGetAllocation.DeptId
const String& mSetTenant.TenancyId
String* mGetTenant.TenancyId
const String& mSetTenant.ABN
String* mGetTenant.ABN
const String& mSetTenant.BusinessName
String* mGetTenant.BusinessName
const String& mSetTenant.FirstName
String* mGetTenant.FirstName
const String& mSetTenant.LastName
String* mGetTenant.LastName
const String& mSetTenant.ResidentialAddress
String* mGetTenant.ResidentialAddress
const String& mSetTenant.PostalAddress
String* mGetTenant.PostalAddress
const String& mSetTenant.Email
String* mGetTenant.Email
Int32 mSetTenant.HomePhone
Int32* mGetTenant.HomePhone
Int32 mSetTenant.MobilePhone
Int32* mGetTenant.MobilePhone
Int32 mSetTenant.WorkPhone
Int32* mGetTenant.WorkPhone
ArrayOf<const String&> mSetTenant.ContactedWithDetails
ArrayOf<String>* mGetTenant.ContactedWithDetails
CProperty.allocation mSetTenant.AllocationId
CProperty.allocation* mGetTenant.AllocationId
ArrayOf<CCustomer.applicant> mSetTenant.ApplicantIds
ArrayOf<CCustomer.applicant>* mGetTenant.ApplicantIds
CCustomer.customer mSetTenant.CustomerId
CCustomer.customer* mGetTenant.CustomerId
CProperty.property mSetTenant.PropertyId
CProperty.property* mGetTenant.PropertyId
CAdministration.branch mSetTenant.BranchId
CAdministration.branch* mGetTenant.BranchId
CFinance.chartOfAccounts mSetTenant.ChartOfAccountsId
CFinance.chartOfAccounts* mGetTenant.ChartOfAccountsId
CFinance.chartOfClasses mSetTenant.ChartOfClassesId
CFinance.chartOfClasses* mGetTenant.ChartOfClassesId
ArrayOf<CAdministration.documents> mSetTenant.DocRefIds
ArrayOf<CAdministration.documents>* mGetTenant.DocRefIds
ArrayOf<CAdministration.images> mSetTenant.ImageRefIds
ArrayOf<CAdministration.images>* mGetTenant.ImageRefIds
CRegister.businessChannelOwner mSetTenant.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTenant.BusinessChannelOwnerId
const String& mSetPropertyOwnerPropertyJoin.PropOwnerPropJoinId
String* mGetPropertyOwnerPropertyJoin.PropOwnerPropJoinId
Double mSetPropertyOwnerPropertyJoin.OwnershipPercentage
Double* mGetPropertyOwnerPropertyJoin.OwnershipPercentage
CProperty.property mSetPropertyOwnerPropertyJoin.PropertyId
CProperty.property* mGetPropertyOwnerPropertyJoin.PropertyId
CProperty.propertyOwner mSetPropertyOwnerPropertyJoin.PropertyOwnerId
CProperty.propertyOwner* mGetPropertyOwnerPropertyJoin.PropertyOwnerId
CRegister.businessChannelOwner mSetPropertyOwnerPropertyJoin.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPropertyOwnerPropertyJoin.BusinessChannelOwnerId
const String& mSetCustomerPropertyJoin.CustPropJoinId
String* mGetCustomerPropertyJoin.CustPropJoinId
CHelper.relationship mSetCustomerPropertyJoin.Relationship
CHelper.relationship* mGetCustomerPropertyJoin.Relationship
CCustomer.customer mSetCustomerPropertyJoin.CustomerId
CCustomer.customer* mGetCustomerPropertyJoin.CustomerId
CProperty.property mSetCustomerPropertyJoin.PropertyId
CProperty.property* mGetCustomerPropertyJoin.PropertyId
CRegister.businessChannelOwner mSetCustomerPropertyJoin.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomerPropertyJoin.BusinessChannelOwnerId
const String& mSetCustomerPropertyOwnerJoin.CustPropOwnerJoinId
String* mGetCustomerPropertyOwnerJoin.CustPropOwnerJoinId
CCustomer.customer mSetCustomerPropertyOwnerJoin.CustomerId
CCustomer.customer* mGetCustomerPropertyOwnerJoin.CustomerId
CProperty.propertyOwner mSetCustomerPropertyOwnerJoin.PropertyOwnerId
CProperty.propertyOwner* mGetCustomerPropertyOwnerJoin.PropertyOwnerId
CRegister.businessChannelOwner mSetCustomerPropertyOwnerJoin.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCustomerPropertyOwnerJoin.BusinessChannelOwnerId
const String& mSetPropertyInspectionResidential.PropertyInspectionResId
String* mGetPropertyInspectionResidential.PropertyInspectionResId
ArrayOf<const String&> mSetPropertyInspectionResidential.InspectionDates
ArrayOf<String>* mGetPropertyInspectionResidential.InspectionDates
const String& mSetPropertyInspectionResidential.PropertyAddressString
String* mGetPropertyInspectionResidential.PropertyAddressString
const String& mSetPropertyInspectionResidential.UnitNumber
String* mGetPropertyInspectionResidential.UnitNumber
ArrayOf<const String&> mSetPropertyInspectionResidential.Bathroom
ArrayOf<String>* mGetPropertyInspectionResidential.Bathroom
ArrayOf<const String&> mSetPropertyInspectionResidential.Bedroom
ArrayOf<String>* mGetPropertyInspectionResidential.Bedroom
ArrayOf<const String&> mSetPropertyInspectionResidential.DiningRoom
ArrayOf<String>* mGetPropertyInspectionResidential.DiningRoom
ArrayOf<const String&> mSetPropertyInspectionResidential.InternalDoorways
ArrayOf<String>* mGetPropertyInspectionResidential.InternalDoorways
ArrayOf<const String&> mSetPropertyInspectionResidential.Driveways
ArrayOf<String>* mGetPropertyInspectionResidential.Driveways
ArrayOf<const String&> mSetPropertyInspectionResidential.Ensuite
ArrayOf<String>* mGetPropertyInspectionResidential.Ensuite
ArrayOf<const String&> mSetPropertyInspectionResidential.Entrance
ArrayOf<String>* mGetPropertyInspectionResidential.Entrance
ArrayOf<const String&> mSetPropertyInspectionResidential.ExternalAreas
ArrayOf<String>* mGetPropertyInspectionResidential.ExternalAreas
ArrayOf<const String&> mSetPropertyInspectionResidential.ExternalDoors
ArrayOf<String>* mGetPropertyInspectionResidential.ExternalDoors
ArrayOf<const String&> mSetPropertyInspectionResidential.FamilyRoom
ArrayOf<String>* mGetPropertyInspectionResidential.FamilyRoom
ArrayOf<const String&> mSetPropertyInspectionResidential.Fences
ArrayOf<String>* mGetPropertyInspectionResidential.Fences
ArrayOf<const String&> mSetPropertyInspectionResidential.GarageCarport
ArrayOf<String>* mGetPropertyInspectionResidential.GarageCarport
ArrayOf<const String&> mSetPropertyInspectionResidential.Gates
ArrayOf<String>* mGetPropertyInspectionResidential.Gates
ArrayOf<const String&> mSetPropertyInspectionResidential.Gutterings
ArrayOf<String>* mGetPropertyInspectionResidential.Gutterings
ArrayOf<const String&> mSetPropertyInspectionResidential.Hallway
ArrayOf<String>* mGetPropertyInspectionResidential.Hallway
ArrayOf<const String&> mSetPropertyInspectionResidential.HotWater
ArrayOf<String>* mGetPropertyInspectionResidential.HotWater
ArrayOf<const String&> mSetPropertyInspectionResidential.Kitchen
ArrayOf<String>* mGetPropertyInspectionResidential.Kitchen
ArrayOf<const String&> mSetPropertyInspectionResidential.Laundry
ArrayOf<String>* mGetPropertyInspectionResidential.Laundry
ArrayOf<const String&> mSetPropertyInspectionResidential.LetterBox
ArrayOf<String>* mGetPropertyInspectionResidential.LetterBox
ArrayOf<const String&> mSetPropertyInspectionResidential.LivingRoom
ArrayOf<String>* mGetPropertyInspectionResidential.LivingRoom
ArrayOf<const String&> mSetPropertyInspectionResidential.Notes
ArrayOf<String>* mGetPropertyInspectionResidential.Notes
ArrayOf<const String&> mSetPropertyInspectionResidential.OtherItems
ArrayOf<String>* mGetPropertyInspectionResidential.OtherItems
ArrayOf<const String&> mSetPropertyInspectionResidential.Pests
ArrayOf<String>* mGetPropertyInspectionResidential.Pests
ArrayOf<const String&> mSetPropertyInspectionResidential.PetIssues
ArrayOf<String>* mGetPropertyInspectionResidential.PetIssues
ArrayOf<const String&> mSetPropertyInspectionResidential.Plumbing
ArrayOf<String>* mGetPropertyInspectionResidential.Plumbing
ArrayOf<const String&> mSetPropertyInspectionResidential.Pool
ArrayOf<String>* mGetPropertyInspectionResidential.Pool
ArrayOf<const String&> mSetPropertyInspectionResidential.RecreationRoom
ArrayOf<String>* mGetPropertyInspectionResidential.RecreationRoom
ArrayOf<const String&> mSetPropertyInspectionResidential.Roof
ArrayOf<String>* mGetPropertyInspectionResidential.Roof
ArrayOf<const String&> mSetPropertyInspectionResidential.ScreenDoors
ArrayOf<String>* mGetPropertyInspectionResidential.ScreenDoors
ArrayOf<const String&> mSetPropertyInspectionResidential.StructuralIntegrity
ArrayOf<String>* mGetPropertyInspectionResidential.StructuralIntegrity
ArrayOf<const String&> mSetPropertyInspectionResidential.TennisCourt
ArrayOf<String>* mGetPropertyInspectionResidential.TennisCourt
ArrayOf<const String&> mSetPropertyInspectionResidential.Toilet
ArrayOf<String>* mGetPropertyInspectionResidential.Toilet
ArrayOf<const String&> mSetPropertyInspectionResidential.WiringElectrical
ArrayOf<String>* mGetPropertyInspectionResidential.WiringElectrical
CRegister.businessChannelOwner mSetPropertyInspectionResidential.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPropertyInspectionResidential.BusinessChannelOwnerId
CAdministration.branch mSetPropertyInspectionResidential.BranchId
CAdministration.branch* mGetPropertyInspectionResidential.BranchId
CAdministration.department mSetPropertyInspectionResidential.DeptId
CAdministration.department* mGetPropertyInspectionResidential.DeptId
CProperty.property mSetPropertyInspectionResidential.PropertyId
CProperty.property* mGetPropertyInspectionResidential.PropertyId
ArrayOf<CAdministration.documents> mSetPropertyInspectionResidential.DocRefIds
ArrayOf<CAdministration.documents>* mGetPropertyInspectionResidential.DocRefIds
ArrayOf<CAdministration.images> mSetPropertyInspectionResidential.ImageRefIds
ArrayOf<CAdministration.images>* mGetPropertyInspectionResidential.ImageRefIds
ArrayOf<CAdministration.audio> mSetPropertyInspectionResidential.AudioRefIds
ArrayOf<CAdministration.audio>* mGetPropertyInspectionResidential.AudioRefIds
ArrayOf<CAdministration.video> mSetPropertyInspectionResidential.VideoRefIds
ArrayOf<CAdministration.video>* mGetPropertyInspectionResidential.VideoRefIds
CProperty.tenant mSetPropertyInspectionResidential.TenancyId
CProperty.tenant* mGetPropertyInspectionResidential.TenancyId
ArrayOf<CAdministration.staff> mSetPropertyInspectionResidential.EmployeeIds
ArrayOf<CAdministration.staff>* mGetPropertyInspectionResidential.EmployeeIds
const String& mSetPropertyInspectionCommercial.PropertyInspectionCommercId
String* mGetPropertyInspectionCommercial.PropertyInspectionCommercId
ArrayOf<const String&> mSetPropertyInspectionCommercial.InspectionDates
ArrayOf<String>* mGetPropertyInspectionCommercial.InspectionDates
const String& mSetPropertyInspectionCommercial.PropertyAddressString
String* mGetPropertyInspectionCommercial.PropertyAddressString
const String& mSetPropertyInspectionCommercial.UnitNumber
String* mGetPropertyInspectionCommercial.UnitNumber
ArrayOf<const String&> mSetPropertyInspectionCommercial.AirConditioning
ArrayOf<String>* mGetPropertyInspectionCommercial.AirConditioning
ArrayOf<const String&> mSetPropertyInspectionCommercial.DiningRoom
ArrayOf<String>* mGetPropertyInspectionCommercial.DiningRoom
ArrayOf<const String&> mSetPropertyInspectionCommercial.InternalDoorways
ArrayOf<String>* mGetPropertyInspectionCommercial.InternalDoorways
ArrayOf<const String&> mSetPropertyInspectionCommercial.Driveways
ArrayOf<String>* mGetPropertyInspectionCommercial.Driveways
ArrayOf<const String&> mSetPropertyInspectionCommercial.Entrance
ArrayOf<String>* mGetPropertyInspectionCommercial.Entrance
ArrayOf<const String&> mSetPropertyInspectionCommercial.ExternalAreas
ArrayOf<String>* mGetPropertyInspectionCommercial.ExternalAreas
ArrayOf<const String&> mSetPropertyInspectionCommercial.ExternalDoors
ArrayOf<String>* mGetPropertyInspectionCommercial.ExternalDoors
ArrayOf<const String&> mSetPropertyInspectionCommercial.FactorySpace
ArrayOf<String>* mGetPropertyInspectionCommercial.FactorySpace
ArrayOf<const String&> mSetPropertyInspectionCommercial.Fences
ArrayOf<String>* mGetPropertyInspectionCommercial.Fences
ArrayOf<const String&> mSetPropertyInspectionCommercial.GarageCarport
ArrayOf<String>* mGetPropertyInspectionCommercial.GarageCarport
ArrayOf<const String&> mSetPropertyInspectionCommercial.Gates
ArrayOf<String>* mGetPropertyInspectionCommercial.Gates
ArrayOf<const String&> mSetPropertyInspectionCommercial.Gutterings
ArrayOf<String>* mGetPropertyInspectionCommercial.Gutterings
ArrayOf<const String&> mSetPropertyInspectionCommercial.Hallway
ArrayOf<String>* mGetPropertyInspectionCommercial.Hallway
ArrayOf<const String&> mSetPropertyInspectionCommercial.Heating
ArrayOf<String>* mGetPropertyInspectionCommercial.Heating
ArrayOf<const String&> mSetPropertyInspectionCommercial.HotWater
ArrayOf<String>* mGetPropertyInspectionCommercial.HotWater
ArrayOf<const String&> mSetPropertyInspectionCommercial.Kitchen
ArrayOf<String>* mGetPropertyInspectionCommercial.Kitchen
ArrayOf<const String&> mSetPropertyInspectionCommercial.Laundry
ArrayOf<String>* mGetPropertyInspectionCommercial.Laundry
ArrayOf<const String&> mSetPropertyInspectionCommercial.Notes
ArrayOf<String>* mGetPropertyInspectionCommercial.Notes
ArrayOf<const String&> mSetPropertyInspectionCommercial.OfficeSpace
ArrayOf<String>* mGetPropertyInspectionCommercial.OfficeSpace
ArrayOf<const String&> mSetPropertyInspectionCommercial.ParkingSpaces
ArrayOf<String>* mGetPropertyInspectionCommercial.ParkingSpaces
ArrayOf<const String&> mSetPropertyInspectionCommercial.OtherItems
ArrayOf<String>* mGetPropertyInspectionCommercial.OtherItems
ArrayOf<const String&> mSetPropertyInspectionCommercial.Pests
ArrayOf<String>* mGetPropertyInspectionCommercial.Pests
ArrayOf<const String&> mSetPropertyInspectionCommercial.OtherIssues
ArrayOf<String>* mGetPropertyInspectionCommercial.OtherIssues
ArrayOf<const String&> mSetPropertyInspectionCommercial.Plumbing
ArrayOf<String>* mGetPropertyInspectionCommercial.Plumbing
ArrayOf<const String&> mSetPropertyInspectionCommercial.RecreationRoom
ArrayOf<String>* mGetPropertyInspectionCommercial.RecreationRoom
ArrayOf<const String&> mSetPropertyInspectionCommercial.RetailSpace
ArrayOf<String>* mGetPropertyInspectionCommercial.RetailSpace
ArrayOf<const String&> mSetPropertyInspectionCommercial.Roof
ArrayOf<String>* mGetPropertyInspectionCommercial.Roof
ArrayOf<const String&> mSetPropertyInspectionCommercial.ScreenDoors
ArrayOf<String>* mGetPropertyInspectionCommercial.ScreenDoors
ArrayOf<const String&> mSetPropertyInspectionCommercial.StructuralIntegrity
ArrayOf<String>* mGetPropertyInspectionCommercial.StructuralIntegrity
ArrayOf<const String&> mSetPropertyInspectionCommercial.Floors
ArrayOf<String>* mGetPropertyInspectionCommercial.Floors
ArrayOf<const String&> mSetPropertyInspectionCommercial.Toilet
ArrayOf<String>* mGetPropertyInspectionCommercial.Toilet
ArrayOf<const String&> mSetPropertyInspectionCommercial.VentilationIncludingFans
ArrayOf<String>* mGetPropertyInspectionCommercial.VentilationIncludingFans
ArrayOf<const String&> mSetPropertyInspectionCommercial.WarehouseSpace
ArrayOf<String>* mGetPropertyInspectionCommercial.WarehouseSpace
ArrayOf<const String&> mSetPropertyInspectionCommercial.Washroom
ArrayOf<String>* mGetPropertyInspectionCommercial.Washroom
ArrayOf<const String&> mSetPropertyInspectionCommercial.WiringElectrical
ArrayOf<String>* mGetPropertyInspectionCommercial.WiringElectrical
CRegister.businessChannelOwner mSetPropertyInspectionCommercial.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPropertyInspectionCommercial.BusinessChannelOwnerId
CAdministration.branch mSetPropertyInspectionCommercial.BranchId
CAdministration.branch* mGetPropertyInspectionCommercial.BranchId
CAdministration.department mSetPropertyInspectionCommercial.DeptId
CAdministration.department* mGetPropertyInspectionCommercial.DeptId
CProperty.property mSetPropertyInspectionCommercial.PropertyId
CProperty.property* mGetPropertyInspectionCommercial.PropertyId
CProperty.tenant mSetPropertyInspectionCommercial.TenancyId
CProperty.tenant* mGetPropertyInspectionCommercial.TenancyId
ArrayOf<CAdministration.staff> mSetPropertyInspectionCommercial.EmployeeIds
ArrayOf<CAdministration.staff>* mGetPropertyInspectionCommercial.EmployeeIds
ArrayOf<CAdministration.documents> mSetPropertyInspectionCommercial.DocRefIds
ArrayOf<CAdministration.documents>* mGetPropertyInspectionCommercial.DocRefIds
ArrayOf<CAdministration.images> mSetPropertyInspectionCommercial.ImageRefIds
ArrayOf<CAdministration.images>* mGetPropertyInspectionCommercial.ImageRefIds
ArrayOf<CAdministration.audio> mSetPropertyInspectionCommercial.AudioRefIds
ArrayOf<CAdministration.audio>* mGetPropertyInspectionCommercial.AudioRefIds
ArrayOf<CAdministration.video> mSetPropertyInspectionCommercial.VideoRefIds
ArrayOf<CAdministration.video>* mGetPropertyInspectionCommercial.VideoRefIds
const String& mSetTenancyCaseManagement.TenancyCaseMngmntId
String* mGetTenancyCaseManagement.TenancyCaseMngmntId
const String& mSetTenancyCaseManagement.SupervisorStaffId
String* mGetTenancyCaseManagement.SupervisorStaffId
ArrayOf<const String&> mSetTenancyCaseManagement.TenantActionsInChronologicalOrder
ArrayOf<String>* mGetTenancyCaseManagement.TenantActionsInChronologicalOrder
ArrayOf<const String&> mSetTenancyCaseManagement.DatesTimesOfEvents
ArrayOf<String>* mGetTenancyCaseManagement.DatesTimesOfEvents
ArrayOf<const String&> mSetTenancyCaseManagement.OurResponsesInChronologicalOrder
ArrayOf<String>* mGetTenancyCaseManagement.OurResponsesInChronologicalOrder
ArrayOf<const String&> mSetTenancyCaseManagement.DatesTimesOfResponses
ArrayOf<String>* mGetTenancyCaseManagement.DatesTimesOfResponses
Boolean mSetTenancyCaseManagement.Resolved
Boolean* mGetTenancyCaseManagement.Resolved
CRegister.businessChannelOwner mSetTenancyCaseManagement.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTenancyCaseManagement.BusinessChannelOwnerId
CProperty.property mSetTenancyCaseManagement.PropertyId
CProperty.property* mGetTenancyCaseManagement.PropertyId
CAdministration.branch mSetTenancyCaseManagement.BranchId
CAdministration.branch* mGetTenancyCaseManagement.BranchId
CProperty.tenant mSetTenancyCaseManagement.TenancyId
CProperty.tenant* mGetTenancyCaseManagement.TenancyId
ArrayOf<CCustomer.customer> mSetTenancyCaseManagement.CustomerIds
ArrayOf<CCustomer.customer>* mGetTenancyCaseManagement.CustomerIds
ArrayOf<CAdministration.staff> mSetTenancyCaseManagement.EmployeeIds
ArrayOf<CAdministration.staff>* mGetTenancyCaseManagement.EmployeeIds
ArrayOf<CAdministration.documents> mSetTenancyCaseManagement.DocRefIds
ArrayOf<CAdministration.documents>* mGetTenancyCaseManagement.DocRefIds
ArrayOf<CAdministration.images> mSetTenancyCaseManagement.ImageRefIds
ArrayOf<CAdministration.images>* mGetTenancyCaseManagement.ImageRefIds 
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

