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


class CRegulator
    : public Object
    , public ICH
    , public IComparable
{
public:
    CAR_INTERFACE_DECL()    // The class which implements a CAR interface requires macros CAR_INTERFACE_DECL/CAR_INTERFACE_IMPL.

    CRegulator();               // If a member needs to be initialized, the constructor must be explicitly declared 

    virtual ~CRegulator();

    CARAPI constructor();   // CAR constructor for subclass inheritance.

     // IComparable interface function
    //
    CARAPI CompareTo(
        /* [in] */ IInterface* another,
        /* [out] */ Int32* result);

    // ICH interface function
    //
   CARAPI SetAuditorFinancial_AuditorFinancialId(
     /* [in] */ const String& CRegulator.auditorFinancial.auditorFinancialId);

    CARAPI GetAuditorFinancial_AuditorFinancialId(
     /* [out] */ String* CRegulator.auditorFinancial.auditorFinancialId);

   CARAPI SetAuditorFinancial_Name(
     /* [in] */ const String& CRegulator.auditorFinancial.name);

    CARAPI GetAuditorFinancial_AuditorFinancialId(
     /* [out] */ String* CRegulator.auditorFinancial.auditorFinancialId);

   CARAPI SetAuditorFinancial_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.auditorFinancial.contactFirstNameList);

    CARAPI GetAuditorFinancial_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.auditorFinancial.contactFirstNameList);


   CARAPI SetAuditorFinancial_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.auditorFinancial.contactLastNameList);

    CARAPI GetAuditorFinancial_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.auditorFinancial.contactLastNameList);


   CARAPI SetAuditorFinancial_StreetAddress(
     /* [in] */ const String& CRegulator.auditorFinancial.streetAddress);

    CARAPI GetAuditorFinancial_StreetAddress(
     /* [out] */ String* CRegulator.auditorFinancial.streetAddress);


   CARAPI SetAuditorFinancial_PostalAddress(
     /* [in] */ const String& CRegulator.auditorFinancial.postalAddress);

    CARAPI GetAuditorFinancial_PostalAddress(
     /* [out] */ String* CRegulator.auditorFinancial.postalAddress);


   CARAPI SetAuditorFinancial_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.auditorFinancial.emailAddresses);

    CARAPI GetAuditorFinancial_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.auditorFinancial.emailAddresses);


   CARAPI SetAuditorFinancial_MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.auditorFinancial.mobilePhone);

    CARAPI GetAuditorFinancial_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.auditorFinancial.mobilePhone);


   CARAPI SetAuditorFinancial_WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.auditorFinancial.workPhone);

    CARAPI GetAuditorFinancial_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.auditorFinancial.workPhone);


   CARAPI SetAuditorFinancial_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.auditorFinancial.contactedWithDetails);

    CARAPI GetAuditorFinancial_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.auditorFinancial.contactedWithDetails);


   CARAPI SetAuditorFinancial_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.auditorFinancial.docRefIds);

    CARAPI GetAuditorFinancial_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.auditorFinancial.docRefIds);


   CARAPI SetAuditorFinancial_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.auditorFinancial.businessChannelOwnerId);

    CARAPI GetAuditorFinancial_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.auditorFinancial.businessChannelOwnerId);


   CARAPI SetSecurityAuditor_SecurityAuditorId(
     /* [in] */ const String& CRegulator.securityAuditor.securityAuditorId);

    CARAPI GetSecurityAuditor_SecurityAuditorId(
     /* [out] */ String* CRegulator.securityAuditor.securityAuditorId);


   CARAPI SetSecurityAuditor_Name(
     /* [in] */ const String& CRegulator.securityAuditor.name);


   CARAPI SetSecurityAuditor_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.securityAuditor.contactFirstNameList);

    CARAPI GetSecurityAuditor_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.securityAuditor.contactFirstNameList);


   CARAPI SetSecurityAuditor_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.securityAuditor.contactLastNameList);

    CARAPI GetSecurityAuditor_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.securityAuditor.contactLastNameList);


   CARAPI SetSecurityAuditor_StreetAddress(
     /* [in] */ const String& CRegulator.securityAuditor.streetAddress);

    CARAPI GetSecurityAuditor_StreetAddress(
     /* [out] */ String* CRegulator.securityAuditor.streetAddress);


   CARAPI SetSecurityAuditor_PostalAddress(
     /* [in] */ const String& CRegulator.securityAuditor.postalAddress);

    CARAPI GetSecurityAuditor_PostalAddress(
     /* [out] */ String* CRegulator.securityAuditor.postalAddress);


   CARAPI SetSecurityAuditor_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.securityAuditor.emailAddresses);

    CARAPI GetSecurityAuditor_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.securityAuditor.emailAddresses);


   CARAPI SetSecurityAuditor_MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.securityAuditor.mobilePhone);

    CARAPI GetSecurityAuditor_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.securityAuditor.mobilePhone);


   CARAPI SetSecurityAuditor_WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.securityAuditor.workPhone);

    CARAPI GetSecurityAuditor_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.securityAuditor.workPhone);


   CARAPI SetSecurityAuditor_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.securityAuditor.contactedWithDetails);

    CARAPI GetSecurityAuditor_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.securityAuditor.contactedWithDetails);


   CARAPI SetSecurityAuditor_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.securityAuditor.docRefIds);

    CARAPI GetSecurityAuditor_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.securityAuditor.docRefIds);


   CARAPI SetSecurityAuditor_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.securityAuditor.businessChannelOwnerId);

    CARAPI GetSecurityAuditor_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.securityAuditor.businessChannelOwnerId);


   CARAPI SetCommunityHousingRegulator_CommunityHousingRegulatorId(
     /* [in] */ const String& CRegulator.communityHousingRegulator.communityHousingRegulatorId);

    CARAPI GetCommunityHousingRegulator_CommunityHousingRegulatorId(
     /* [out] */ String* CRegulator.communityHousingRegulator.communityHousingRegulatorId);


   CARAPI SetCommunityHousingRegulator_AuthorityName(
     /* [in] */ const String& CRegulator.communityHousingRegulator.authorityName);

    CARAPI GetCommunityHousingRegulator_AuthorityName(
     /* [out] */ String* CRegulator.communityHousingRegulator.authorityName);


   CARAPI SetCommunityHousingRegulator_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.communityHousingRegulator.contactFirstNameList);

    CARAPI GetCommunityHousingRegulator_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.communityHousingRegulator.contactFirstNameList);


   CARAPI SetCommunityHousingRegulator_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.communityHousingRegulator.contactLastNameList);

    CARAPI GetCommunityHousingRegulator_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.communityHousingRegulator.contactLastNameList);


   CARAPI SetCommunityHousingRegulator_StreetAddress(
     /* [in] */ const String& CRegulator.communityHousingRegulator.streetAddress);

    CARAPI GetCommunityHousingRegulator_StreetAddress(
     /* [out] */ String* CRegulator.communityHousingRegulator.streetAddress);


   CARAPI SetCommunityHousingRegulator_PostalAddress(
     /* [in] */ const String& CRegulator.communityHousingRegulator.postalAddress);

    CARAPI GetCommunityHousingRegulator_PostalAddress(
     /* [out] */ String* CRegulator.communityHousingRegulator.postalAddress);


   CARAPI SetCommunityHousingRegulator_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.communityHousingRegulator.emailAddresses);

    CARAPI GetCommunityHousingRegulator_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.communityHousingRegulator.emailAddresses);


   CARAPI SetCommunityHousingRegulator_MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.communityHousingRegulator.mobilePhone);

    CARAPI GetCommunityHousingRegulator_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.communityHousingRegulator.mobilePhone);


   CARAPI SetCommunityHousingRegulator_WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.communityHousingRegulator.workPhone);

    CARAPI GetCommunityHousingRegulator_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.communityHousingRegulator.workPhone);


   CARAPI SetCommunityHousingRegulator_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.communityHousingRegulator.contactedWithDetails);

    CARAPI GetCommunityHousingRegulator_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.communityHousingRegulator.contactedWithDetails);


   CARAPI SetCommunityHousingRegulator_AusStates(
     /* [in] */ ArrayOf<CHelper.ausState> CRegulator.communityHousingRegulator.ausStates);

    CARAPI GetCommunityHousingRegulator_AusStates(
     /* [out, callee] */ ArrayOf<CHelper.ausState>* CRegulator.communityHousingRegulator.ausStates);


   CARAPI SetCommunityHousingRegulator_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.communityHousingRegulator.docRefIds);

    CARAPI GetCommunityHousingRegulator_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.communityHousingRegulator.docRefIds);


   CARAPI SetCommunityHousingRegulator_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.communityHousingRegulator.imageRefIds);

    CARAPI GetCommunityHousingRegulator_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.communityHousingRegulator.imageRefIds);


   CARAPI SetCommunityHousingRegulator_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.communityHousingRegulator.businessChannelOwnerId);

    CARAPI GetCommunityHousingRegulator_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.communityHousingRegulator.businessChannelOwnerId);





   CARAPI SetRentalBondAuthority_RentalBondAuthorityId(
     /* [in] */ const String& CRegulator.rentalBondAuthority.rentalBondAuthorityId);

    CARAPI GetRentalBondAuthority_RentalBondAuthorityId(
     /* [out] */ String* CRegulator.rentalBondAuthority.rentalBondAuthorityId);


   CARAPI SetRentalBondAuthority_AuthorityName(
     /* [in] */ const String& CRegulator.rentalBondAuthority.authorityName);

    CARAPI GetRentalBondAuthority_AuthorityName(
     /* [out] */ String* CRegulator.rentalBondAuthority.authorityName);


   CARAPI SetRentalBondAuthority_AusState(
     /* [in] */ CHelper.ausState CRegulator.rentalBondAuthority.ausState);

    CARAPI GetRentalBondAuthority_AusState(
     /* [out] */ CHelper.ausState* CRegulator.rentalBondAuthority.ausState);


   CARAPI SetRentalBondAuthority_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.rentalBondAuthority.contactFirstNameList);

    CARAPI GetRentalBondAuthority_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.rentalBondAuthority.contactFirstNameList);


   CARAPI SetRentalBondAuthority_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.rentalBondAuthority.contactLastNameList);

    CARAPI GetRentalBondAuthority_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.rentalBondAuthority.contactLastNameList);


   CARAPI SetRentalBondAuthority_StreetAddress(
     /* [in] */ const String& CRegulator.rentalBondAuthority.streetAddress);

    CARAPI GetRentalBondAuthority_StreetAddress(
     /* [out] */ String* CRegulator.rentalBondAuthority.streetAddress);


   CARAPI SetRentalBondAuthority_PostalAddress(
     /* [in] */ const String& CRegulator.rentalBondAuthority.postalAddress);

    CARAPI GetRentalBondAuthority_PostalAddress(
     /* [out] */ String* CRegulator.rentalBondAuthority.postalAddress);


   CARAPI SetRentalBondAuthority_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.rentalBondAuthority.emailAddresses);

    CARAPI GetRentalBondAuthority_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.rentalBondAuthority.emailAddresses);


   CARAPI SetRentalBondAuthority_MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.rentalBondAuthority.mobilePhone);

    CARAPI GetRentalBondAuthority_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.rentalBondAuthority.mobilePhone);


   CARAPI SetRentalBondAuthority_WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.rentalBondAuthority.workPhone);

    CARAPI GetRentalBondAuthority_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.rentalBondAuthority.workPhone);


   CARAPI SetRentalBondAuthority_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.rentalBondAuthority.contactedWithDetails);

    CARAPI GetRentalBondAuthority_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.rentalBondAuthority.contactedWithDetails);


   CARAPI SetRentalBondAuthority_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.rentalBondAuthority.businessChannelOwnerId);

    CARAPI GetRentalBondAuthority_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.rentalBondAuthority.businessChannelOwnerId);


   CARAPI SetRentalBondAuthority_PropertyId(
     /* [in] */ CProperty.property CRegulator.rentalBondAuthority.propertyId);

    CARAPI GetRentalBondAuthority_PropertyId(
     /* [out] */ CProperty.property* CRegulator.rentalBondAuthority.propertyId);


   CARAPI SetRentalBondAuthority_TenancyId(
     /* [in] */ CProperty.tenant CRegulator.rentalBondAuthority.tenancyId);

    CARAPI GetRentalBondAuthority_TenancyId(
     /* [out] */ CProperty.tenant* CRegulator.rentalBondAuthority.tenancyId);


   CARAPI SetRentalBondAuthority_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.rentalBondAuthority.docRefIds);

    CARAPI GetRentalBondAuthority_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.rentalBondAuthority.docRefIds);


   CARAPI SetRentalBondAuthority_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.rentalBondAuthority.imageRefIds);

    CARAPI GetRentalBondAuthority_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.rentalBondAuthority.imageRefIds);


   CARAPI SetATO_ATOId(
     /* [in] */ const String& CRegulator.aTO.ATOId);

    CARAPI GetATO_ATOId(
     /* [out] */ String* CRegulator.aTO.ATOId);


   CARAPI SetATO_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aTO.contactFirstNameList);

    CARAPI GetATO_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aTO.contactFirstNameList);


   CARAPI SetATO_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aTO.contactLastNameList);

    CARAPI GetATO_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aTO.contactLastNameList);


   CARAPI SetATO_StreetAddress(
     /* [in] */ const String& CRegulator.aTO.streetAddress);

    CARAPI GetATO_StreetAddress(
     /* [out] */ String* CRegulator.aTO.streetAddress);


   CARAPI SetATO_PostalAddress(
     /* [in] */ const String& CRegulator.aTO.postalAddress);

    CARAPI GetATO_PostalAddress(
     /* [out] */ String* CRegulator.aTO.postalAddress);


   CARAPI SetATO_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.aTO.emailAddresses);

    CARAPI GetATO_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aTO.emailAddresses);


   CARAPI SetATO_MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aTO.mobilePhone);

    CARAPI GetATO_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aTO.mobilePhone);


   CARAPI SetATO_WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aTO.workPhone);

    CARAPI GetATO_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aTO.workPhone);


   CARAPI SetATO_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.aTO.contactedWithDetails);

    CARAPI GetATO_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aTO.contactedWithDetails);


   CARAPI SetATO_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.aTO.docRefIds);

    CARAPI GetATO_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.aTO.docRefIds);


   CARAPI SetATO_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.aTO.businessChannelOwnerId);

    CARAPI GetATO_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.aTO.businessChannelOwnerId);


   CARAPI SetASIC_ASICId(
     /* [in] */ const String& CRegulator.aSIC.aSICId);

    CARAPI GetASIC_ASICId(
     /* [out] */ String* CRegulator.aSIC.aSICId);


   CARAPI SetASIC_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aSIC.contactFirstNameList);

    CARAPI GetASIC_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aSIC.contactFirstNameList);


   CARAPI SetASIC_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aSIC.contactLastNameList);

    CARAPI GetASIC_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aSIC.contactLastNameList);


   CARAPI SetASIC_StreetAddress(
     /* [in] */ const String& CRegulator.aSIC.streetAddress);

    CARAPI GetASIC_StreetAddress(
     /* [out] */ String* CRegulator.aSIC.streetAddress);


   CARAPI SetASIC_PostalAddress(
     /* [in] */ const String& CRegulator.aSIC.postalAddress);

    CARAPI GetASIC_PostalAddress(
     /* [out] */ String* CRegulator.aSIC.postalAddress);


   CARAPI SetASIC_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.aSIC.emailAddresses);

    CARAPI GetASIC_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aSIC.emailAddresses);


   CARAPI SetASIC_MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aSIC.mobilePhone);

    CARAPI GetASIC_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aSIC.mobilePhone);


   CARAPI SetASIC_WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aSIC.workPhone);

    CARAPI GetASIC_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aSIC.workPhone);


   CARAPI SetASIC_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.aSIC.contactedWithDetails);

    CARAPI GetASIC_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aSIC.contactedWithDetails);


   CARAPI SetASIC_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.aSIC.docRefIds);

    CARAPI GetASIC_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.aSIC.docRefIds);


   CARAPI SetASIC_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.aSIC.imageRefIds);

    CARAPI GetASIC_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.aSIC.imageRefIds);


   CARAPI SetASIC_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.aSIC.businessChannelOwnerId);

    CARAPI GetASIC_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.aSIC.businessChannelOwnerId);


   CARAPI SetACNC_ACNCId(
     /* [in] */ const String& CRegulator.aCNC.aCNCId);

    CARAPI GetACNC_ACNCId(
     /* [out] */ String* CRegulator.aCNC.aCNCId);


   CARAPI SetACNC_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aCNC.contactFirstNameList);

    CARAPI GetACNC_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aCNC.contactFirstNameList);


   CARAPI SetACNC_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aCNC.contactLastNameList);

    CARAPI GetACNC_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aCNC.contactLastNameList);


   CARAPI SetACNC_StreetAddress(
     /* [in] */ const String& CRegulator.aCNC.streetAddress);

    CARAPI GetACNC_StreetAddress(
     /* [out] */ String* CRegulator.aCNC.streetAddress);


   CARAPI SetACNC_PostalAddress(
     /* [in] */ const String& CRegulator.aCNC.postalAddress);

    CARAPI GetACNC_PostalAddress(
     /* [out] */ String* CRegulator.aCNC.postalAddress);


   CARAPI SetACNC_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.aCNC.emailAddresses);

    CARAPI GetACNC_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aCNC.emailAddresses);


   CARAPI SetACNC_MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aCNC.mobilePhone);

    CARAPI GetACNC_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aCNC.mobilePhone);


   CARAPI SetACNC_WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aCNC.workPhone);

    CARAPI GetACNC_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aCNC.workPhone);


   CARAPI SetACNC_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.aCNC.contactedWithDetails);

    CARAPI GetACNC_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aCNC.contactedWithDetails);


   CARAPI SetACNC_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.aCNC.docRefIds);

    CARAPI GetACNC_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.aCNC.docRefIds);


   CARAPI SetACNC_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.aCNC.imageRefIds);

    CARAPI GetACNC_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.aCNC.imageRefIds);


   CARAPI SetACNC_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.aCNC.businessChannelOwnerId);

    CARAPI GetACNC_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.aCNC.businessChannelOwnerId);


   CARAPI SetNationalRegulator_NatRegId(
     /* [in] */ const String& CRegulator.nationalRegulator.natRegId);

    CARAPI GetNationalRegulator_NatRegId(
     /* [out] */ String* CRegulator.nationalRegulator.natRegId);


   CARAPI SetNationalRegulator_NatRegName(
     /* [in] */ const String& CRegulator.nationalRegulator.natRegName);

    CARAPI GetNationalRegulator_NatRegName(
     /* [out] */ String* CRegulator.nationalRegulator.natRegName);


   CARAPI SetNationalRegulator_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.nationalRegulator.contactFirstNameList);

    CARAPI GetNationalRegulator_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nationalRegulator.contactFirstNameList);


   CARAPI SetNationalRegulator_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.nationalRegulator.contactLastNameList);

    CARAPI GetNationalRegulator_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nationalRegulator.contactLastNameList);


   CARAPI SetNationalRegulator_StreetAddress(
     /* [in] */ const String& CRegulator.nationalRegulator.streetAddress);

    CARAPI GetNationalRegulator_StreetAddress(
     /* [out] */ String* CRegulator.nationalRegulator.streetAddress);


   CARAPI SetNationalRegulator_PostalAddress(
     /* [in] */ const String& CRegulator.nationalRegulator.postalAddress);

    CARAPI GetNationalRegulator_PostalAddress(
     /* [out] */ String* CRegulator.nationalRegulator.postalAddress);


   CARAPI SetNationalRegulator_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.nationalRegulator.emailAddresses);

    CARAPI GetNationalRegulator_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nationalRegulator.emailAddresses);


   CARAPI SetNationalRegulator_MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.nationalRegulator.mobilePhone);

    CARAPI GetNationalRegulator_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.nationalRegulator.mobilePhone);


   CARAPI SetNationalRegulator_WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.nationalRegulator.workPhone);

    CARAPI GetNationalRegulator_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.nationalRegulator.workPhone);


   CARAPI SetNationalRegulator_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.nationalRegulator.contactedWithDetails);

    CARAPI GetNationalRegulator_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nationalRegulator.contactedWithDetails);


   CARAPI SetNationalRegulator_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.nationalRegulator.docRefIds);

    CARAPI GetNationalRegulator_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.nationalRegulator.docRefIds);


   CARAPI SetNationalRegulator_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.nationalRegulator.imageRefIds);

    CARAPI GetNationalRegulator_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.nationalRegulator.imageRefIds);


   CARAPI SetNationalRegulator_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.nationalRegulator.businessChannelOwnerId);

    CARAPI GetNationalRegulator_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.nationalRegulator.businessChannelOwnerId);


   CARAPI SetStateBasedRegulator_StateBasedRegId(
     /* [in] */ const String& CRegulator.stateBasedRegulator.stateBasedRegId);

    CARAPI GetStateBasedRegulator_StateBasedRegId(
     /* [out] */ String* CRegulator.stateBasedRegulator.stateBasedRegId);


   CARAPI SetStateBasedRegulator_StateBasedRegName(
     /* [in] */ const String& CRegulator.stateBasedRegulator.stateBasedRegName);

    CARAPI GetStateBasedRegulator_StateBasedRegName(
     /* [out] */ String* CRegulator.stateBasedRegulator.stateBasedRegName);


   CARAPI SetStateBasedRegulator_AusState(
     /* [in] */ CHelper.ausState CRegulator.stateBasedRegulator.ausState);

    CARAPI GetStateBasedRegulator_AusState(
     /* [out] */ CHelper.ausState* CRegulator.stateBasedRegulator.ausState);


   CARAPI SetStateBasedRegulator_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.stateBasedRegulator.contactFirstNameList);

    CARAPI GetStateBasedRegulator_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateBasedRegulator.contactFirstNameList);


   CARAPI SetStateBasedRegulator_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.stateBasedRegulator.contactLastNameList);

    CARAPI GetStateBasedRegulator_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateBasedRegulator.contactLastNameList);


   CARAPI SetStateBasedRegulator_StreetAddress(
     /* [in] */ const String& CRegulator.stateBasedRegulator.streetAddress);

    CARAPI GetStateBasedRegulator_StreetAddress(
     /* [out] */ String* CRegulator.stateBasedRegulator.streetAddress);


   CARAPI SetStateBasedRegulator_PostalAddress(
     /* [in] */ const String& CRegulator.stateBasedRegulator.postalAddress);

    CARAPI GetStateBasedRegulator_PostalAddress(
     /* [out] */ String* CRegulator.stateBasedRegulator.postalAddress);


   CARAPI SetStateBasedRegulator_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.stateBasedRegulator.emailAddresses);

    CARAPI GetStateBasedRegulator_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateBasedRegulator.emailAddresses);


   CARAPI SetStateBasedRegulator_MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.stateBasedRegulator.mobilePhone);

    CARAPI GetStateBasedRegulator_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.stateBasedRegulator.mobilePhone);


   CARAPI SetStateBasedRegulator_WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.stateBasedRegulator.workPhone);

    CARAPI GetStateBasedRegulator_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.stateBasedRegulator.workPhone);


   CARAPI SetStateBasedRegulator_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.stateBasedRegulator.contactedWithDetails);

    CARAPI GetStateBasedRegulator_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateBasedRegulator.contactedWithDetails);


   CARAPI SetStateBasedRegulator_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.stateBasedRegulator.docRefIds);

    CARAPI GetStateBasedRegulator_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.stateBasedRegulator.docRefIds);


   CARAPI SetStateBasedRegulator_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.stateBasedRegulator.imageRefIds);

    CARAPI GetStateBasedRegulator_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.stateBasedRegulator.imageRefIds);


   CARAPI SetStateBasedRegulator_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.stateBasedRegulator.businessChannelOwnerId);

    CARAPI GetStateBasedRegulator_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.stateBasedRegulator.businessChannelOwnerId);


   CARAPI SetStateLandTitleRegistry_LandTitleRegistryId(
     /* [in] */ const String& CRegulator.stateLandTitleRegistry.landTitleRegistryId);

    CARAPI GetStateLandTitleRegistry_LandTitleRegistryId(
     /* [out] */ String* CRegulator.stateLandTitleRegistry.landTitleRegistryId);


   CARAPI SetStateLandTitleRegistry_AuthorityName(
     /* [in] */ const String& CRegulator.stateLandTitleRegistry.authorityName);

    CARAPI GetStateLandTitleRegistry_AuthorityName(
     /* [out] */ String* CRegulator.stateLandTitleRegistry.authorityName);


   CARAPI SetStateLandTitleRegistry_AusState(
     /* [in] */ CHelper.ausState CRegulator.stateLandTitleRegistry.ausState);

    CARAPI GetStateLandTitleRegistry_AusState(
     /* [out] */ CHelper.ausState* CRegulator.stateLandTitleRegistry.ausState);


   CARAPI SetStateLandTitleRegistry_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.stateLandTitleRegistry.contactFirstNameList);

    CARAPI GetStateLandTitleRegistry_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateLandTitleRegistry.contactFirstNameList);


   CARAPI SetStateLandTitleRegistry_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.stateLandTitleRegistry.contactLastNameList);

    CARAPI GetStateLandTitleRegistry_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateLandTitleRegistry.contactLastNameList);


   CARAPI SetStateLandTitleRegistry_StreetAddress(
     /* [in] */ const String& CRegulator.stateLandTitleRegistry.streetAddress);

    CARAPI GetStateLandTitleRegistry_StreetAddress(
     /* [out] */ String* CRegulator.stateLandTitleRegistry.streetAddress);


   CARAPI SetStateLandTitleRegistry_PostalAddress(
     /* [in] */ const String& CRegulator.stateLandTitleRegistry.postalAddress);

    CARAPI GetStateLandTitleRegistry_PostalAddress(
     /* [out] */ String* CRegulator.stateLandTitleRegistry.postalAddress);


   CARAPI SetStateLandTitleRegistry_Email(
     /* [in] */ const String& CRegulator.stateLandTitleRegistry.email);

    CARAPI GetStateLandTitleRegistry_Email(
     /* [out] */ String* CRegulator.stateLandTitleRegistry.email);


   CARAPI SetStateLandTitleRegistry_MobilePhone(
     /* [in] */ Int32 CRegulator.stateLandTitleRegistry.mobilePhone);

    CARAPI GetStateLandTitleRegistry_MobilePhone(
     /* [out] */ Int32* CRegulator.stateLandTitleRegistry.mobilePhone);


   CARAPI SetStateLandTitleRegistry_WorkPhone(
     /* [in] */ Int32 CRegulator.stateLandTitleRegistry.workPhone);

    CARAPI GetStateLandTitleRegistry_WorkPhone(
     /* [out] */ Int32* CRegulator.stateLandTitleRegistry.workPhone);


   CARAPI SetStateLandTitleRegistry_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.stateLandTitleRegistry.contactedWithDetails);

    CARAPI GetStateLandTitleRegistry_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateLandTitleRegistry.contactedWithDetails);


   CARAPI SetStateLandTitleRegistry_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.stateLandTitleRegistry.businessChannelOwnerId);

    CARAPI GetStateLandTitleRegistry_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.stateLandTitleRegistry.businessChannelOwnerId);


   CARAPI SetStateLandTitleRegistry_PropertyId(
     /* [in] */ CProperty.property CRegulator.stateLandTitleRegistry.propertyId);

    CARAPI GetStateLandTitleRegistry_PropertyId(
     /* [out] */ CProperty.property* CRegulator.stateLandTitleRegistry.propertyId);


   CARAPI SetStateLandTitleRegistry_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.stateLandTitleRegistry.docRefIds);

    CARAPI GetStateLandTitleRegistry_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.stateLandTitleRegistry.docRefIds);


   CARAPI SetStateLandTitleRegistry_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.stateLandTitleRegistry.imageRefIds);

    CARAPI GetStateLandTitleRegistry_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.stateLandTitleRegistry.imageRefIds);


   CARAPI SetNCAT_TribunalId(
     /* [in] */ const String& CRegulator.nCAT.tribunalId);

    CARAPI GetNCAT_TribunalId(
     /* [out] */ String* CRegulator.nCAT.tribunalId);


   CARAPI SetNCAT_AuthorityName(
     /* [in] */ const String& CRegulator.nCAT.authorityName);

    CARAPI GetNCAT_AuthorityName(
     /* [out] */ String* CRegulator.nCAT.authorityName);


   CARAPI SetNCAT_AusState(
     /* [in] */ CHelper.ausState CRegulator.nCAT.ausState);

    CARAPI GetNCAT_AusState(
     /* [out] */ CHelper.ausState* CRegulator.nCAT.ausState);


   CARAPI SetNCAT_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.contactFirstNameList);

    CARAPI GetNCAT_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.contactFirstNameList);


   CARAPI SetNCAT_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.contactLastNameList);

    CARAPI GetNCAT_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.contactLastNameList);


   CARAPI SetNCAT_StreetAddress(
     /* [in] */ const String& CRegulator.nCAT.streetAddress);

    CARAPI GetNCAT_StreetAddress(
     /* [out] */ String* CRegulator.nCAT.streetAddress);


   CARAPI SetNCAT_PostalAddress(
     /* [in] */ const String& CRegulator.nCAT.postalAddress);

    CARAPI GetNCAT_PostalAddress(
     /* [out] */ String* CRegulator.nCAT.postalAddress);


   CARAPI SetNCAT_Email(
     /* [in] */ const String& CRegulator.nCAT.email);

    CARAPI GetNCAT_Email(
     /* [out] */ String* CRegulator.nCAT.email);


   CARAPI SetNCAT_MobilePhone(
     /* [in] */ Int32 CRegulator.nCAT.mobilePhone);

    CARAPI GetNCAT_MobilePhone(
     /* [out] */ Int32* CRegulator.nCAT.mobilePhone);


   CARAPI SetNCAT_WorkPhone(
     /* [in] */ Int32 CRegulator.nCAT.workPhone);

    CARAPI GetNCAT_WorkPhone(
     /* [out] */ Int32* CRegulator.nCAT.workPhone);


   CARAPI SetNCAT_CaseDetailsActsResponsesAllegationsRebuttals(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.caseDetailsActsResponsesAllegationsRebuttals);

    CARAPI GetNCAT_CaseDetailsActsResponsesAllegationsRebuttals(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.caseDetailsActsResponsesAllegationsRebuttals);


   CARAPI SetNCAT_DateTimeDetailsInChronologicalOrder(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.dateTimeDetailsInChronologicalOrder);

    CARAPI GetNCAT_DateTimeDetailsInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.dateTimeDetailsInChronologicalOrder);


   CARAPI SetNCAT_AdjournedOn(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.adjournedOn);

    CARAPI GetNCAT_AdjournedOn(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.adjournedOn);


   CARAPI SetNCAT_AdjournedUntil(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.adjournedUntil);

    CARAPI GetNCAT_AdjournedUntil(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.adjournedUntil);


   CARAPI SetNCAT_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.contactedWithDetails);

    CARAPI GetNCAT_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.contactedWithDetails);


   CARAPI SetNCAT_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.nCAT.businessChannelOwnerId);

    CARAPI GetNCAT_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.nCAT.businessChannelOwnerId);


   CARAPI SetNCAT_PropertyId(
     /* [in] */ CProperty.property CRegulator.nCAT.propertyId);

    CARAPI GetNCAT_PropertyId(
     /* [out] */ CProperty.property* CRegulator.nCAT.propertyId);


   CARAPI SetNCAT_TenancyId(
     /* [in] */ CProperty.tenant CRegulator.nCAT.tenancyId);

    CARAPI GetNCAT_TenancyId(
     /* [out] */ CProperty.tenant* CRegulator.nCAT.tenancyId);


   CARAPI SetNCAT_BranchId(
     /* [in] */ CAdministration.branch CRegulator.nCAT.branchId);

    CARAPI GetNCAT_BranchId(
     /* [out] */ CAdministration.branch* CRegulator.nCAT.branchId);


   CARAPI SetNCAT_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.nCAT.docRefIds);

    CARAPI GetNCAT_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.nCAT.docRefIds);


   CARAPI SetNCAT_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.nCAT.imageRefIds);

    CARAPI GetNCAT_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.nCAT.imageRefIds);
 
 


protected:
    // Member variables
const String& mSetAuditorFinancial_AuditorFinancialId
String* mGetAuditorFinancial_AuditorFinancialId
const String& mSetAuditorFinancial_Name
String* mGetAuditorFinancial_AuditorFinancialId
ArrayOf<const String&> mSetAuditorFinancial_ContactFirstNameList
ArrayOf<String>* mGetAuditorFinancial_ContactFirstNameList
ArrayOf<const String&> mSetAuditorFinancial_ContactLastNameList
ArrayOf<String>* mGetAuditorFinancial_ContactLastNameList
const String& mSetAuditorFinancial_StreetAddress
String* mGetAuditorFinancial_StreetAddress
const String& mSetAuditorFinancial_PostalAddress
String* mGetAuditorFinancial_PostalAddress
ArrayOf<const String&> mSetAuditorFinancial_EmailAddresses
ArrayOf<String>* mGetAuditorFinancial_EmailAddresses
ArrayOf<Int32> mSetAuditorFinancial_MobilePhone
ArrayOf<Int32>* mGetAuditorFinancial_MobilePhone
ArrayOf<Int32> mSetAuditorFinancial_WorkPhone
ArrayOf<Int32>* mGetAuditorFinancial_WorkPhone
ArrayOf<const String&> mSetAuditorFinancial_ContactedWithDetails
ArrayOf<String>* mGetAuditorFinancial_ContactedWithDetails
ArrayOf<CAdministration.documents> mSetAuditorFinancial_DocRefIds
ArrayOf<CAdministration.documents>* mGetAuditorFinancial_DocRefIds
CRegister.businessChannelOwner mSetAuditorFinancial_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAuditorFinancial_BusinessChannelOwnerId
const String& mSetSecurityAuditor_SecurityAuditorId
String* mGetSecurityAuditor_SecurityAuditorId
const String& mSetSecurityAuditor_Name
ArrayOf<const String&> mSetSecurityAuditor_ContactFirstNameList
ArrayOf<String>* mGetSecurityAuditor_ContactFirstNameList
ArrayOf<const String&> mSetSecurityAuditor_ContactLastNameList
ArrayOf<String>* mGetSecurityAuditor_ContactLastNameList
const String& mSetSecurityAuditor_StreetAddress
String* mGetSecurityAuditor_StreetAddress
const String& mSetSecurityAuditor_PostalAddress
String* mGetSecurityAuditor_PostalAddress
ArrayOf<const String&> mSetSecurityAuditor_EmailAddresses
ArrayOf<String>* mGetSecurityAuditor_EmailAddresses
ArrayOf<Int32> mSetSecurityAuditor_MobilePhone
ArrayOf<Int32>* mGetSecurityAuditor_MobilePhone
ArrayOf<Int32> mSetSecurityAuditor_WorkPhone
ArrayOf<Int32>* mGetSecurityAuditor_WorkPhone
ArrayOf<const String&> mSetSecurityAuditor_ContactedWithDetails
ArrayOf<String>* mGetSecurityAuditor_ContactedWithDetails
ArrayOf<CAdministration.documents> mSetSecurityAuditor_DocRefIds
ArrayOf<CAdministration.documents>* mGetSecurityAuditor_DocRefIds
CRegister.businessChannelOwner mSetSecurityAuditor_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSecurityAuditor_BusinessChannelOwnerId
const String& mSetCommunityHousingRegulator_CommunityHousingRegulatorId
String* mGetCommunityHousingRegulator_CommunityHousingRegulatorId
const String& mSetCommunityHousingRegulator_AuthorityName
String* mGetCommunityHousingRegulator_AuthorityName
ArrayOf<const String&> mSetCommunityHousingRegulator_ContactFirstNameList
ArrayOf<String>* mGetCommunityHousingRegulator_ContactFirstNameList
ArrayOf<const String&> mSetCommunityHousingRegulator_ContactLastNameList
ArrayOf<String>* mGetCommunityHousingRegulator_ContactLastNameList
const String& mSetCommunityHousingRegulator_StreetAddress
String* mGetCommunityHousingRegulator_StreetAddress
const String& mSetCommunityHousingRegulator_PostalAddress
String* mGetCommunityHousingRegulator_PostalAddress
ArrayOf<const String&> mSetCommunityHousingRegulator_EmailAddresses
ArrayOf<String>* mGetCommunityHousingRegulator_EmailAddresses
ArrayOf<Int32> mSetCommunityHousingRegulator_MobilePhone
ArrayOf<Int32>* mGetCommunityHousingRegulator_MobilePhone
ArrayOf<Int32> mSetCommunityHousingRegulator_WorkPhone
ArrayOf<Int32>* mGetCommunityHousingRegulator_WorkPhone
ArrayOf<const String&> mSetCommunityHousingRegulator_ContactedWithDetails
ArrayOf<String>* mGetCommunityHousingRegulator_ContactedWithDetails
ArrayOf<CHelper.ausState> mSetCommunityHousingRegulator_AusStates
ArrayOf<CHelper.ausState>* mGetCommunityHousingRegulator_AusStates
ArrayOf<CAdministration.documents> mSetCommunityHousingRegulator_DocRefIds
ArrayOf<CAdministration.documents>* mGetCommunityHousingRegulator_DocRefIds
ArrayOf<CAdministration.images> mSetCommunityHousingRegulator_ImageRefIds
ArrayOf<CAdministration.images>* mGetCommunityHousingRegulator_ImageRefIds
CRegister.businessChannelOwner mSetCommunityHousingRegulator_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCommunityHousingRegulator_BusinessChannelOwnerId
const String& mSetRentalBondAuthority_RentalBondAuthorityId
String* mGetRentalBondAuthority_RentalBondAuthorityId
const String& mSetRentalBondAuthority_AuthorityName
String* mGetRentalBondAuthority_AuthorityName
CHelper.ausState mSetRentalBondAuthority_AusState
CHelper.ausState* mGetRentalBondAuthority_AusState
ArrayOf<const String&> mSetRentalBondAuthority_ContactFirstNameList
ArrayOf<String>* mGetRentalBondAuthority_ContactFirstNameList
ArrayOf<const String&> mSetRentalBondAuthority_ContactLastNameList
ArrayOf<String>* mGetRentalBondAuthority_ContactLastNameList
const String& mSetRentalBondAuthority_StreetAddress
String* mGetRentalBondAuthority_StreetAddress
const String& mSetRentalBondAuthority_PostalAddress
String* mGetRentalBondAuthority_PostalAddress
ArrayOf<const String&> mSetRentalBondAuthority_EmailAddresses
ArrayOf<String>* mGetRentalBondAuthority_EmailAddresses
ArrayOf<Int32> mSetRentalBondAuthority_MobilePhone
ArrayOf<Int32>* mGetRentalBondAuthority_MobilePhone
ArrayOf<Int32> mSetRentalBondAuthority_WorkPhone
ArrayOf<Int32>* mGetRentalBondAuthority_WorkPhone
ArrayOf<const String&> mSetRentalBondAuthority_ContactedWithDetails
ArrayOf<String>* mGetRentalBondAuthority_ContactedWithDetails
CRegister.businessChannelOwner mSetRentalBondAuthority_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetRentalBondAuthority_BusinessChannelOwnerId
CProperty.property mSetRentalBondAuthority_PropertyId
CProperty.property* mGetRentalBondAuthority_PropertyId
CProperty.tenant mSetRentalBondAuthority_TenancyId
CProperty.tenant* mGetRentalBondAuthority_TenancyId
ArrayOf<CAdministration.documents> mSetRentalBondAuthority_DocRefIds
ArrayOf<CAdministration.documents>* mGetRentalBondAuthority_DocRefIds
ArrayOf<CAdministration.images> mSetRentalBondAuthority_ImageRefIds
ArrayOf<CAdministration.images>* mGetRentalBondAuthority_ImageRefIds
const String& mSetATO_ATOId
String* mGetATO_ATOId
ArrayOf<const String&> mSetATO_ContactFirstNameList
ArrayOf<String>* mGetATO_ContactFirstNameList
ArrayOf<const String&> mSetATO_ContactLastNameList
ArrayOf<String>* mGetATO_ContactLastNameList
const String& mSetATO_StreetAddress
String* mGetATO_StreetAddress
const String& mSetATO_PostalAddress
String* mGetATO_PostalAddress
ArrayOf<const String&> mSetATO_EmailAddresses
ArrayOf<String>* mGetATO_EmailAddresses
ArrayOf<Int32> mSetATO_MobilePhone
ArrayOf<Int32>* mGetATO_MobilePhone
ArrayOf<Int32> mSetATO_WorkPhone
ArrayOf<Int32>* mGetATO_WorkPhone
ArrayOf<const String&> mSetATO_ContactedWithDetails
ArrayOf<String>* mGetATO_ContactedWithDetails
ArrayOf<CAdministration.documents> mSetATO_DocRefIds
ArrayOf<CAdministration.documents>* mGetATO_DocRefIds
CRegister.businessChannelOwner mSetATO_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetATO_BusinessChannelOwnerId
const String& mSetASIC_ASICId
String* mGetASIC_ASICId
ArrayOf<const String&> mSetASIC_ContactFirstNameList
ArrayOf<String>* mGetASIC_ContactFirstNameList
ArrayOf<const String&> mSetASIC_ContactLastNameList
ArrayOf<String>* mGetASIC_ContactLastNameList
const String& mSetASIC_StreetAddress
String* mGetASIC_StreetAddress
const String& mSetASIC_PostalAddress
String* mGetASIC_PostalAddress
ArrayOf<const String&> mSetASIC_EmailAddresses
ArrayOf<String>* mGetASIC_EmailAddresses
ArrayOf<Int32> mSetASIC_MobilePhone
ArrayOf<Int32>* mGetASIC_MobilePhone
ArrayOf<Int32> mSetASIC_WorkPhone
ArrayOf<Int32>* mGetASIC_WorkPhone
ArrayOf<const String&> mSetASIC_ContactedWithDetails
ArrayOf<String>* mGetASIC_ContactedWithDetails
ArrayOf<CAdministration.documents> mSetASIC_DocRefIds
ArrayOf<CAdministration.documents>* mGetASIC_DocRefIds
ArrayOf<CAdministration.images> mSetASIC_ImageRefIds
ArrayOf<CAdministration.images>* mGetASIC_ImageRefIds
CRegister.businessChannelOwner mSetASIC_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetASIC_BusinessChannelOwnerId
const String& mSetACNC_ACNCId
String* mGetACNC_ACNCId
ArrayOf<const String&> mSetACNC_ContactFirstNameList
ArrayOf<String>* mGetACNC_ContactFirstNameList
ArrayOf<const String&> mSetACNC_ContactLastNameList
ArrayOf<String>* mGetACNC_ContactLastNameList
const String& mSetACNC_StreetAddress
String* mGetACNC_StreetAddress
const String& mSetACNC_PostalAddress
String* mGetACNC_PostalAddress
ArrayOf<const String&> mSetACNC_EmailAddresses
ArrayOf<String>* mGetACNC_EmailAddresses
ArrayOf<Int32> mSetACNC_MobilePhone
ArrayOf<Int32>* mGetACNC_MobilePhone
ArrayOf<Int32> mSetACNC_WorkPhone
ArrayOf<Int32>* mGetACNC_WorkPhone
ArrayOf<const String&> mSetACNC_ContactedWithDetails
ArrayOf<String>* mGetACNC_ContactedWithDetails
ArrayOf<CAdministration.documents> mSetACNC_DocRefIds
ArrayOf<CAdministration.documents>* mGetACNC_DocRefIds
ArrayOf<CAdministration.images> mSetACNC_ImageRefIds
ArrayOf<CAdministration.images>* mGetACNC_ImageRefIds
CRegister.businessChannelOwner mSetACNC_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetACNC_BusinessChannelOwnerId
const String& mSetNationalRegulator_NatRegId
String* mGetNationalRegulator_NatRegId
const String& mSetNationalRegulator_NatRegName
String* mGetNationalRegulator_NatRegName
ArrayOf<const String&> mSetNationalRegulator_ContactFirstNameList
ArrayOf<String>* mGetNationalRegulator_ContactFirstNameList
ArrayOf<const String&> mSetNationalRegulator_ContactLastNameList
ArrayOf<String>* mGetNationalRegulator_ContactLastNameList
const String& mSetNationalRegulator_StreetAddress
String* mGetNationalRegulator_StreetAddress
const String& mSetNationalRegulator_PostalAddress
String* mGetNationalRegulator_PostalAddress
ArrayOf<const String&> mSetNationalRegulator_EmailAddresses
ArrayOf<String>* mGetNationalRegulator_EmailAddresses
ArrayOf<Int32> mSetNationalRegulator_MobilePhone
ArrayOf<Int32>* mGetNationalRegulator_MobilePhone
ArrayOf<Int32> mSetNationalRegulator_WorkPhone
ArrayOf<Int32>* mGetNationalRegulator_WorkPhone
ArrayOf<const String&> mSetNationalRegulator_ContactedWithDetails
ArrayOf<String>* mGetNationalRegulator_ContactedWithDetails
ArrayOf<CAdministration.documents> mSetNationalRegulator_DocRefIds
ArrayOf<CAdministration.documents>* mGetNationalRegulator_DocRefIds
ArrayOf<CAdministration.images> mSetNationalRegulator_ImageRefIds
ArrayOf<CAdministration.images>* mGetNationalRegulator_ImageRefIds
CRegister.businessChannelOwner mSetNationalRegulator_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetNationalRegulator_BusinessChannelOwnerId
const String& mSetStateBasedRegulator_StateBasedRegId
String* mGetStateBasedRegulator_StateBasedRegId
const String& mSetStateBasedRegulator_StateBasedRegName
String* mGetStateBasedRegulator_StateBasedRegName
CHelper.ausState mSetStateBasedRegulator_AusState
CHelper.ausState* mGetStateBasedRegulator_AusState
ArrayOf<const String&> mSetStateBasedRegulator_ContactFirstNameList
ArrayOf<String>* mGetStateBasedRegulator_ContactFirstNameList
ArrayOf<const String&> mSetStateBasedRegulator_ContactLastNameList
ArrayOf<String>* mGetStateBasedRegulator_ContactLastNameList
const String& mSetStateBasedRegulator_StreetAddress
String* mGetStateBasedRegulator_StreetAddress
const String& mSetStateBasedRegulator_PostalAddress
String* mGetStateBasedRegulator_PostalAddress
ArrayOf<const String&> mSetStateBasedRegulator_EmailAddresses
ArrayOf<String>* mGetStateBasedRegulator_EmailAddresses
ArrayOf<Int32> mSetStateBasedRegulator_MobilePhone
ArrayOf<Int32>* mGetStateBasedRegulator_MobilePhone
ArrayOf<Int32> mSetStateBasedRegulator_WorkPhone
ArrayOf<Int32>* mGetStateBasedRegulator_WorkPhone
ArrayOf<const String&> mSetStateBasedRegulator_ContactedWithDetails
ArrayOf<String>* mGetStateBasedRegulator_ContactedWithDetails
ArrayOf<CAdministration.documents> mSetStateBasedRegulator_DocRefIds
ArrayOf<CAdministration.documents>* mGetStateBasedRegulator_DocRefIds
ArrayOf<CAdministration.images> mSetStateBasedRegulator_ImageRefIds
ArrayOf<CAdministration.images>* mGetStateBasedRegulator_ImageRefIds
CRegister.businessChannelOwner mSetStateBasedRegulator_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStateBasedRegulator_BusinessChannelOwnerId
const String& mSetStateLandTitleRegistry_LandTitleRegistryId
String* mGetStateLandTitleRegistry_LandTitleRegistryId
const String& mSetStateLandTitleRegistry_AuthorityName
String* mGetStateLandTitleRegistry_AuthorityName
CHelper.ausState mSetStateLandTitleRegistry_AusState
CHelper.ausState* mGetStateLandTitleRegistry_AusState
ArrayOf<const String&> mSetStateLandTitleRegistry_ContactFirstNameList
ArrayOf<String>* mGetStateLandTitleRegistry_ContactFirstNameList
ArrayOf<const String&> mSetStateLandTitleRegistry_ContactLastNameList
ArrayOf<String>* mGetStateLandTitleRegistry_ContactLastNameList
const String& mSetStateLandTitleRegistry_StreetAddress
String* mGetStateLandTitleRegistry_StreetAddress
const String& mSetStateLandTitleRegistry_PostalAddress
String* mGetStateLandTitleRegistry_PostalAddress
const String& mSetStateLandTitleRegistry_Email
String* mGetStateLandTitleRegistry_Email
Int32 mSetStateLandTitleRegistry_MobilePhone
Int32* mGetStateLandTitleRegistry_MobilePhone
Int32 mSetStateLandTitleRegistry_WorkPhone
Int32* mGetStateLandTitleRegistry_WorkPhone
ArrayOf<const String&> mSetStateLandTitleRegistry_ContactedWithDetails
ArrayOf<String>* mGetStateLandTitleRegistry_ContactedWithDetails
CRegister.businessChannelOwner mSetStateLandTitleRegistry_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStateLandTitleRegistry_BusinessChannelOwnerId
CProperty.property mSetStateLandTitleRegistry_PropertyId
CProperty.property* mGetStateLandTitleRegistry_PropertyId
ArrayOf<CAdministration.documents> mSetStateLandTitleRegistry_DocRefIds
ArrayOf<CAdministration.documents>* mGetStateLandTitleRegistry_DocRefIds
ArrayOf<CAdministration.images> mSetStateLandTitleRegistry_ImageRefIds
ArrayOf<CAdministration.images>* mGetStateLandTitleRegistry_ImageRefIds
const String& mSetNCAT_TribunalId
String* mGetNCAT_TribunalId
const String& mSetNCAT_AuthorityName
String* mGetNCAT_AuthorityName
CHelper.ausState mSetNCAT_AusState
CHelper.ausState* mGetNCAT_AusState
ArrayOf<const String&> mSetNCAT_ContactFirstNameList
ArrayOf<String>* mGetNCAT_ContactFirstNameList
ArrayOf<const String&> mSetNCAT_ContactLastNameList
ArrayOf<String>* mGetNCAT_ContactLastNameList
const String& mSetNCAT_StreetAddress
String* mGetNCAT_StreetAddress
const String& mSetNCAT_PostalAddress
String* mGetNCAT_PostalAddress
const String& mSetNCAT_Email
String* mGetNCAT_Email
Int32 mSetNCAT_MobilePhone
Int32* mGetNCAT_MobilePhone
Int32 mSetNCAT_WorkPhone
Int32* mGetNCAT_WorkPhone
ArrayOf<const String&> mSetNCAT_CaseDetailsActsResponsesAllegationsRebuttals
ArrayOf<String>* mGetNCAT_CaseDetailsActsResponsesAllegationsRebuttals
ArrayOf<const String&> mSetNCAT_DateTimeDetailsInChronologicalOrder
ArrayOf<String>* mGetNCAT_DateTimeDetailsInChronologicalOrder
ArrayOf<const String&> mSetNCAT_AdjournedOn
ArrayOf<String>* mGetNCAT_AdjournedOn
ArrayOf<const String&> mSetNCAT_AdjournedUntil
ArrayOf<String>* mGetNCAT_AdjournedUntil
ArrayOf<const String&> mSetNCAT_ContactedWithDetails
ArrayOf<String>* mGetNCAT_ContactedWithDetails
CRegister.businessChannelOwner mSetNCAT_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetNCAT_BusinessChannelOwnerId
CProperty.property mSetNCAT_PropertyId
CProperty.property* mGetNCAT_PropertyId
CProperty.tenant mSetNCAT_TenancyId
CProperty.tenant* mGetNCAT_TenancyId
CAdministration.branch mSetNCAT_BranchId
CAdministration.branch* mGetNCAT_BranchId
ArrayOf<CAdministration.documents> mSetNCAT_DocRefIds
ArrayOf<CAdministration.documents>* mGetNCAT_DocRefIds
ArrayOf<CAdministration.images> mSetNCAT_ImageRefIds
ArrayOf<CAdministration.images>* mGetNCAT_ImageRefIds
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

