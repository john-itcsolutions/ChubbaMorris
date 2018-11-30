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
   CARAPI SetAuditorFinancial.AuditorFinancialId(
     /* [in] */ const String& CRegulator.auditorFinancial.auditorFinancialId);

    CARAPI GetAuditorFinancial.AuditorFinancialId(
     /* [out] */ String* CRegulator.auditorFinancial.auditorFinancialId);

   CARAPI SetAuditorFinancial.Name(
     /* [in] */ const String& CRegulator.auditorFinancial.name);

    CARAPI GetAuditorFinancial.AuditorFinancialId(
     /* [out] */ String* CRegulator.auditorFinancial.auditorFinancialId);

   CARAPI SetAuditorFinancial.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.auditorFinancial.contactFirstNameList);

    CARAPI GetAuditorFinancial.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.auditorFinancial.contactFirstNameList);


   CARAPI SetAuditorFinancial.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.auditorFinancial.contactLastNameList);

    CARAPI GetAuditorFinancial.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.auditorFinancial.contactLastNameList);


   CARAPI SetAuditorFinancial.StreetAddress(
     /* [in] */ const String& CRegulator.auditorFinancial.streetAddress);

    CARAPI GetAuditorFinancial.StreetAddress(
     /* [out] */ String* CRegulator.auditorFinancial.streetAddress);


   CARAPI SetAuditorFinancial.PostalAddress(
     /* [in] */ const String& CRegulator.auditorFinancial.postalAddress);

    CARAPI GetAuditorFinancial.PostalAddress(
     /* [out] */ String* CRegulator.auditorFinancial.postalAddress);


   CARAPI SetAuditorFinancial.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.auditorFinancial.emailAddresses);

    CARAPI GetAuditorFinancial.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.auditorFinancial.emailAddresses);


   CARAPI SetAuditorFinancial.MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.auditorFinancial.mobilePhone);

    CARAPI GetAuditorFinancial.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.auditorFinancial.mobilePhone);


   CARAPI SetAuditorFinancial.WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.auditorFinancial.workPhone);

    CARAPI GetAuditorFinancial.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.auditorFinancial.workPhone);


   CARAPI SetAuditorFinancial.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.auditorFinancial.contactedWithDetails);

    CARAPI GetAuditorFinancial.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.auditorFinancial.contactedWithDetails);


   CARAPI SetAuditorFinancial.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.auditorFinancial.docRefIds);

    CARAPI GetAuditorFinancial.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.auditorFinancial.docRefIds);


   CARAPI SetAuditorFinancial.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.auditorFinancial.businessChannelOwnerId);

    CARAPI GetAuditorFinancial.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.auditorFinancial.businessChannelOwnerId);


   CARAPI SetSecurityAuditor.SecurityAuditorId(
     /* [in] */ const String& CRegulator.securityAuditor.securityAuditorId);

    CARAPI GetSecurityAuditor.SecurityAuditorId(
     /* [out] */ String* CRegulator.securityAuditor.securityAuditorId);


   CARAPI SetSecurityAuditor.Name(
     /* [in] */ const String& CRegulator.securityAuditor.name);


   CARAPI SetSecurityAuditor.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.securityAuditor.contactFirstNameList);

    CARAPI GetSecurityAuditor.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.securityAuditor.contactFirstNameList);


   CARAPI SetSecurityAuditor.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.securityAuditor.contactLastNameList);

    CARAPI GetSecurityAuditor.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.securityAuditor.contactLastNameList);


   CARAPI SetSecurityAuditor.StreetAddress(
     /* [in] */ const String& CRegulator.securityAuditor.streetAddress);

    CARAPI GetSecurityAuditor.StreetAddress(
     /* [out] */ String* CRegulator.securityAuditor.streetAddress);


   CARAPI SetSecurityAuditor.PostalAddress(
     /* [in] */ const String& CRegulator.securityAuditor.postalAddress);

    CARAPI GetSecurityAuditor.PostalAddress(
     /* [out] */ String* CRegulator.securityAuditor.postalAddress);


   CARAPI SetSecurityAuditor.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.securityAuditor.emailAddresses);

    CARAPI GetSecurityAuditor.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.securityAuditor.emailAddresses);


   CARAPI SetSecurityAuditor.MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.securityAuditor.mobilePhone);

    CARAPI GetSecurityAuditor.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.securityAuditor.mobilePhone);


   CARAPI SetSecurityAuditor.WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.securityAuditor.workPhone);

    CARAPI GetSecurityAuditor.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.securityAuditor.workPhone);


   CARAPI SetSecurityAuditor.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.securityAuditor.contactedWithDetails);

    CARAPI GetSecurityAuditor.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.securityAuditor.contactedWithDetails);


   CARAPI SetSecurityAuditor.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.securityAuditor.docRefIds);

    CARAPI GetSecurityAuditor.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.securityAuditor.docRefIds);


   CARAPI SetSecurityAuditor.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.securityAuditor.businessChannelOwnerId);

    CARAPI GetSecurityAuditor.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.securityAuditor.businessChannelOwnerId);


   CARAPI SetCommunityHousingRegulator.CommunityHousingRegulatorId(
     /* [in] */ const String& CRegulator.communityHousingRegulator.communityHousingRegulatorId);

    CARAPI GetCommunityHousingRegulator.CommunityHousingRegulatorId(
     /* [out] */ String* CRegulator.communityHousingRegulator.communityHousingRegulatorId);


   CARAPI SetCommunityHousingRegulator.AuthorityName(
     /* [in] */ const String& CRegulator.communityHousingRegulator.authorityName);

    CARAPI GetCommunityHousingRegulator.AuthorityName(
     /* [out] */ String* CRegulator.communityHousingRegulator.authorityName);


   CARAPI SetCommunityHousingRegulator.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.communityHousingRegulator.contactFirstNameList);

    CARAPI GetCommunityHousingRegulator.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.communityHousingRegulator.contactFirstNameList);


   CARAPI SetCommunityHousingRegulator.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.communityHousingRegulator.contactLastNameList);

    CARAPI GetCommunityHousingRegulator.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.communityHousingRegulator.contactLastNameList);


   CARAPI SetCommunityHousingRegulator.StreetAddress(
     /* [in] */ const String& CRegulator.communityHousingRegulator.streetAddress);

    CARAPI GetCommunityHousingRegulator.StreetAddress(
     /* [out] */ String* CRegulator.communityHousingRegulator.streetAddress);


   CARAPI SetCommunityHousingRegulator.PostalAddress(
     /* [in] */ const String& CRegulator.communityHousingRegulator.postalAddress);

    CARAPI GetCommunityHousingRegulator.PostalAddress(
     /* [out] */ String* CRegulator.communityHousingRegulator.postalAddress);


   CARAPI SetCommunityHousingRegulator.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.communityHousingRegulator.emailAddresses);

    CARAPI GetCommunityHousingRegulator.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.communityHousingRegulator.emailAddresses);


   CARAPI SetCommunityHousingRegulator.MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.communityHousingRegulator.mobilePhone);

    CARAPI GetCommunityHousingRegulator.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.communityHousingRegulator.mobilePhone);


   CARAPI SetCommunityHousingRegulator.WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.communityHousingRegulator.workPhone);

    CARAPI GetCommunityHousingRegulator.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.communityHousingRegulator.workPhone);


   CARAPI SetCommunityHousingRegulator.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.communityHousingRegulator.contactedWithDetails);

    CARAPI GetCommunityHousingRegulator.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.communityHousingRegulator.contactedWithDetails);


   CARAPI SetCommunityHousingRegulator.AusStates(
     /* [in] */ ArrayOf<CHelper.ausState> CRegulator.communityHousingRegulator.ausStates);

    CARAPI GetCommunityHousingRegulator.AusStates(
     /* [out, callee] */ ArrayOf<CHelper.ausState>* CRegulator.communityHousingRegulator.ausStates);


   CARAPI SetCommunityHousingRegulator.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.communityHousingRegulator.docRefIds);

    CARAPI GetCommunityHousingRegulator.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.communityHousingRegulator.docRefIds);


   CARAPI SetCommunityHousingRegulator.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.communityHousingRegulator.imageRefIds);

    CARAPI GetCommunityHousingRegulator.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.communityHousingRegulator.imageRefIds);


   CARAPI SetCommunityHousingRegulator.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.communityHousingRegulator.businessChannelOwnerId);

    CARAPI GetCommunityHousingRegulator.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.communityHousingRegulator.businessChannelOwnerId);





   CARAPI SetRentalBondAuthority.RentalBondAuthorityId(
     /* [in] */ const String& CRegulator.rentalBondAuthority.rentalBondAuthorityId);

    CARAPI GetRentalBondAuthority.RentalBondAuthorityId(
     /* [out] */ String* CRegulator.rentalBondAuthority.rentalBondAuthorityId);


   CARAPI SetRentalBondAuthority.AuthorityName(
     /* [in] */ const String& CRegulator.rentalBondAuthority.authorityName);

    CARAPI GetRentalBondAuthority.AuthorityName(
     /* [out] */ String* CRegulator.rentalBondAuthority.authorityName);


   CARAPI SetRentalBondAuthority.AusState(
     /* [in] */ CHelper.ausState CRegulator.rentalBondAuthority.ausState);

    CARAPI GetRentalBondAuthority.AusState(
     /* [out] */ CHelper.ausState* CRegulator.rentalBondAuthority.ausState);


   CARAPI SetRentalBondAuthority.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.rentalBondAuthority.contactFirstNameList);

    CARAPI GetRentalBondAuthority.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.rentalBondAuthority.contactFirstNameList);


   CARAPI SetRentalBondAuthority.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.rentalBondAuthority.contactLastNameList);

    CARAPI GetRentalBondAuthority.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.rentalBondAuthority.contactLastNameList);


   CARAPI SetRentalBondAuthority.StreetAddress(
     /* [in] */ const String& CRegulator.rentalBondAuthority.streetAddress);

    CARAPI GetRentalBondAuthority.StreetAddress(
     /* [out] */ String* CRegulator.rentalBondAuthority.streetAddress);


   CARAPI SetRentalBondAuthority.PostalAddress(
     /* [in] */ const String& CRegulator.rentalBondAuthority.postalAddress);

    CARAPI GetRentalBondAuthority.PostalAddress(
     /* [out] */ String* CRegulator.rentalBondAuthority.postalAddress);


   CARAPI SetRentalBondAuthority.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.rentalBondAuthority.emailAddresses);

    CARAPI GetRentalBondAuthority.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.rentalBondAuthority.emailAddresses);


   CARAPI SetRentalBondAuthority.MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.rentalBondAuthority.mobilePhone);

    CARAPI GetRentalBondAuthority.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.rentalBondAuthority.mobilePhone);


   CARAPI SetRentalBondAuthority.WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.rentalBondAuthority.workPhone);

    CARAPI GetRentalBondAuthority.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.rentalBondAuthority.workPhone);


   CARAPI SetRentalBondAuthority.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.rentalBondAuthority.contactedWithDetails);

    CARAPI GetRentalBondAuthority.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.rentalBondAuthority.contactedWithDetails);


   CARAPI SetRentalBondAuthority.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.rentalBondAuthority.businessChannelOwnerId);

    CARAPI GetRentalBondAuthority.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.rentalBondAuthority.businessChannelOwnerId);


   CARAPI SetRentalBondAuthority.PropertyId(
     /* [in] */ CProperty.property CRegulator.rentalBondAuthority.propertyId);

    CARAPI GetRentalBondAuthority.PropertyId(
     /* [out] */ CProperty.property* CRegulator.rentalBondAuthority.propertyId);


   CARAPI SetRentalBondAuthority.TenancyId(
     /* [in] */ CProperty.tenant CRegulator.rentalBondAuthority.tenancyId);

    CARAPI GetRentalBondAuthority.TenancyId(
     /* [out] */ CProperty.tenant* CRegulator.rentalBondAuthority.tenancyId);


   CARAPI SetRentalBondAuthority.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.rentalBondAuthority.docRefIds);

    CARAPI GetRentalBondAuthority.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.rentalBondAuthority.docRefIds);


   CARAPI SetRentalBondAuthority.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.rentalBondAuthority.imageRefIds);

    CARAPI GetRentalBondAuthority.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.rentalBondAuthority.imageRefIds);


   CARAPI SetATO.ATOId(
     /* [in] */ const String& CRegulator.aTO.ATOId);

    CARAPI GetATO.ATOId(
     /* [out] */ String* CRegulator.aTO.ATOId);


   CARAPI SetATO.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aTO.contactFirstNameList);

    CARAPI GetATO.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aTO.contactFirstNameList);


   CARAPI SetATO.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aTO.contactLastNameList);

    CARAPI GetATO.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aTO.contactLastNameList);


   CARAPI SetATO.StreetAddress(
     /* [in] */ const String& CRegulator.aTO.streetAddress);

    CARAPI GetATO.StreetAddress(
     /* [out] */ String* CRegulator.aTO.streetAddress);


   CARAPI SetATO.PostalAddress(
     /* [in] */ const String& CRegulator.aTO.postalAddress);

    CARAPI GetATO.PostalAddress(
     /* [out] */ String* CRegulator.aTO.postalAddress);


   CARAPI SetATO.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.aTO.emailAddresses);

    CARAPI GetATO.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aTO.emailAddresses);


   CARAPI SetATO.MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aTO.mobilePhone);

    CARAPI GetATO.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aTO.mobilePhone);


   CARAPI SetATO.WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aTO.workPhone);

    CARAPI GetATO.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aTO.workPhone);


   CARAPI SetATO.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.aTO.contactedWithDetails);

    CARAPI GetATO.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aTO.contactedWithDetails);


   CARAPI SetATO.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.aTO.docRefIds);

    CARAPI GetATO.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.aTO.docRefIds);


   CARAPI SetATO.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.aTO.businessChannelOwnerId);

    CARAPI GetATO.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.aTO.businessChannelOwnerId);


   CARAPI SetASIC.ASICId(
     /* [in] */ const String& CRegulator.aSIC.aSICId);

    CARAPI GetASIC.ASICId(
     /* [out] */ String* CRegulator.aSIC.aSICId);


   CARAPI SetASIC.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aSIC.contactFirstNameList);

    CARAPI GetASIC.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aSIC.contactFirstNameList);


   CARAPI SetASIC.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aSIC.contactLastNameList);

    CARAPI GetASIC.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aSIC.contactLastNameList);


   CARAPI SetASIC.StreetAddress(
     /* [in] */ const String& CRegulator.aSIC.streetAddress);

    CARAPI GetASIC.StreetAddress(
     /* [out] */ String* CRegulator.aSIC.streetAddress);


   CARAPI SetASIC.PostalAddress(
     /* [in] */ const String& CRegulator.aSIC.postalAddress);

    CARAPI GetASIC.PostalAddress(
     /* [out] */ String* CRegulator.aSIC.postalAddress);


   CARAPI SetASIC.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.aSIC.emailAddresses);

    CARAPI GetASIC.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aSIC.emailAddresses);


   CARAPI SetASIC.MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aSIC.mobilePhone);

    CARAPI GetASIC.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aSIC.mobilePhone);


   CARAPI SetASIC.WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aSIC.workPhone);

    CARAPI GetASIC.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aSIC.workPhone);


   CARAPI SetASIC.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.aSIC.contactedWithDetails);

    CARAPI GetASIC.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aSIC.contactedWithDetails);


   CARAPI SetASIC.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.aSIC.docRefIds);

    CARAPI GetASIC.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.aSIC.docRefIds);


   CARAPI SetASIC.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.aSIC.imageRefIds);

    CARAPI GetASIC.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.aSIC.imageRefIds);


   CARAPI SetASIC.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.aSIC.businessChannelOwnerId);

    CARAPI GetASIC.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.aSIC.businessChannelOwnerId);


   CARAPI SetACNC.ACNCId(
     /* [in] */ const String& CRegulator.aCNC.aCNCId);

    CARAPI GetACNC.ACNCId(
     /* [out] */ String* CRegulator.aCNC.aCNCId);


   CARAPI SetACNC.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aCNC.contactFirstNameList);

    CARAPI GetACNC.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aCNC.contactFirstNameList);


   CARAPI SetACNC.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.aCNC.contactLastNameList);

    CARAPI GetACNC.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aCNC.contactLastNameList);


   CARAPI SetACNC.StreetAddress(
     /* [in] */ const String& CRegulator.aCNC.streetAddress);

    CARAPI GetACNC.StreetAddress(
     /* [out] */ String* CRegulator.aCNC.streetAddress);


   CARAPI SetACNC.PostalAddress(
     /* [in] */ const String& CRegulator.aCNC.postalAddress);

    CARAPI GetACNC.PostalAddress(
     /* [out] */ String* CRegulator.aCNC.postalAddress);


   CARAPI SetACNC.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.aCNC.emailAddresses);

    CARAPI GetACNC.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aCNC.emailAddresses);


   CARAPI SetACNC.MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aCNC.mobilePhone);

    CARAPI GetACNC.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aCNC.mobilePhone);


   CARAPI SetACNC.WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.aCNC.workPhone);

    CARAPI GetACNC.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.aCNC.workPhone);


   CARAPI SetACNC.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.aCNC.contactedWithDetails);

    CARAPI GetACNC.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.aCNC.contactedWithDetails);


   CARAPI SetACNC.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.aCNC.docRefIds);

    CARAPI GetACNC.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.aCNC.docRefIds);


   CARAPI SetACNC.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.aCNC.imageRefIds);

    CARAPI GetACNC.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.aCNC.imageRefIds);


   CARAPI SetACNC.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.aCNC.businessChannelOwnerId);

    CARAPI GetACNC.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.aCNC.businessChannelOwnerId);


   CARAPI SetNationalRegulator.NatRegId(
     /* [in] */ const String& CRegulator.nationalRegulator.natRegId);

    CARAPI GetNationalRegulator.NatRegId(
     /* [out] */ String* CRegulator.nationalRegulator.natRegId);


   CARAPI SetNationalRegulator.NatRegName(
     /* [in] */ const String& CRegulator.nationalRegulator.natRegName);

    CARAPI GetNationalRegulator.NatRegName(
     /* [out] */ String* CRegulator.nationalRegulator.natRegName);


   CARAPI SetNationalRegulator.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.nationalRegulator.contactFirstNameList);

    CARAPI GetNationalRegulator.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nationalRegulator.contactFirstNameList);


   CARAPI SetNationalRegulator.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.nationalRegulator.contactLastNameList);

    CARAPI GetNationalRegulator.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nationalRegulator.contactLastNameList);


   CARAPI SetNationalRegulator.StreetAddress(
     /* [in] */ const String& CRegulator.nationalRegulator.streetAddress);

    CARAPI GetNationalRegulator.StreetAddress(
     /* [out] */ String* CRegulator.nationalRegulator.streetAddress);


   CARAPI SetNationalRegulator.PostalAddress(
     /* [in] */ const String& CRegulator.nationalRegulator.postalAddress);

    CARAPI GetNationalRegulator.PostalAddress(
     /* [out] */ String* CRegulator.nationalRegulator.postalAddress);


   CARAPI SetNationalRegulator.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.nationalRegulator.emailAddresses);

    CARAPI GetNationalRegulator.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nationalRegulator.emailAddresses);


   CARAPI SetNationalRegulator.MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.nationalRegulator.mobilePhone);

    CARAPI GetNationalRegulator.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.nationalRegulator.mobilePhone);


   CARAPI SetNationalRegulator.WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.nationalRegulator.workPhone);

    CARAPI GetNationalRegulator.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.nationalRegulator.workPhone);


   CARAPI SetNationalRegulator.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.nationalRegulator.contactedWithDetails);

    CARAPI GetNationalRegulator.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nationalRegulator.contactedWithDetails);


   CARAPI SetNationalRegulator.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.nationalRegulator.docRefIds);

    CARAPI GetNationalRegulator.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.nationalRegulator.docRefIds);


   CARAPI SetNationalRegulator.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.nationalRegulator.imageRefIds);

    CARAPI GetNationalRegulator.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.nationalRegulator.imageRefIds);


   CARAPI SetNationalRegulator.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.nationalRegulator.businessChannelOwnerId);

    CARAPI GetNationalRegulator.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.nationalRegulator.businessChannelOwnerId);


   CARAPI SetStateBasedRegulator.StateBasedRegId(
     /* [in] */ const String& CRegulator.stateBasedRegulator.stateBasedRegId);

    CARAPI GetStateBasedRegulator.StateBasedRegId(
     /* [out] */ String* CRegulator.stateBasedRegulator.stateBasedRegId);


   CARAPI SetStateBasedRegulator.StateBasedRegName(
     /* [in] */ const String& CRegulator.stateBasedRegulator.stateBasedRegName);

    CARAPI GetStateBasedRegulator.StateBasedRegName(
     /* [out] */ String* CRegulator.stateBasedRegulator.stateBasedRegName);


   CARAPI SetStateBasedRegulator.AusState(
     /* [in] */ CHelper.ausState CRegulator.stateBasedRegulator.ausState);

    CARAPI GetStateBasedRegulator.AusState(
     /* [out] */ CHelper.ausState* CRegulator.stateBasedRegulator.ausState);


   CARAPI SetStateBasedRegulator.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.stateBasedRegulator.contactFirstNameList);

    CARAPI GetStateBasedRegulator.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateBasedRegulator.contactFirstNameList);


   CARAPI SetStateBasedRegulator.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.stateBasedRegulator.contactLastNameList);

    CARAPI GetStateBasedRegulator.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateBasedRegulator.contactLastNameList);


   CARAPI SetStateBasedRegulator.StreetAddress(
     /* [in] */ const String& CRegulator.stateBasedRegulator.streetAddress);

    CARAPI GetStateBasedRegulator.StreetAddress(
     /* [out] */ String* CRegulator.stateBasedRegulator.streetAddress);


   CARAPI SetStateBasedRegulator.PostalAddress(
     /* [in] */ const String& CRegulator.stateBasedRegulator.postalAddress);

    CARAPI GetStateBasedRegulator.PostalAddress(
     /* [out] */ String* CRegulator.stateBasedRegulator.postalAddress);


   CARAPI SetStateBasedRegulator.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CRegulator.stateBasedRegulator.emailAddresses);

    CARAPI GetStateBasedRegulator.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateBasedRegulator.emailAddresses);


   CARAPI SetStateBasedRegulator.MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegulator.stateBasedRegulator.mobilePhone);

    CARAPI GetStateBasedRegulator.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.stateBasedRegulator.mobilePhone);


   CARAPI SetStateBasedRegulator.WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegulator.stateBasedRegulator.workPhone);

    CARAPI GetStateBasedRegulator.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegulator.stateBasedRegulator.workPhone);


   CARAPI SetStateBasedRegulator.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.stateBasedRegulator.contactedWithDetails);

    CARAPI GetStateBasedRegulator.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateBasedRegulator.contactedWithDetails);


   CARAPI SetStateBasedRegulator.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.stateBasedRegulator.docRefIds);

    CARAPI GetStateBasedRegulator.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.stateBasedRegulator.docRefIds);


   CARAPI SetStateBasedRegulator.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.stateBasedRegulator.imageRefIds);

    CARAPI GetStateBasedRegulator.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.stateBasedRegulator.imageRefIds);


   CARAPI SetStateBasedRegulator.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.stateBasedRegulator.businessChannelOwnerId);

    CARAPI GetStateBasedRegulator.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.stateBasedRegulator.businessChannelOwnerId);


   CARAPI SetStateLandTitleRegistry.LandTitleRegistryId(
     /* [in] */ const String& CRegulator.stateLandTitleRegistry.landTitleRegistryId);

    CARAPI GetStateLandTitleRegistry.LandTitleRegistryId(
     /* [out] */ String* CRegulator.stateLandTitleRegistry.landTitleRegistryId);


   CARAPI SetStateLandTitleRegistry.AuthorityName(
     /* [in] */ const String& CRegulator.stateLandTitleRegistry.authorityName);

    CARAPI GetStateLandTitleRegistry.AuthorityName(
     /* [out] */ String* CRegulator.stateLandTitleRegistry.authorityName);


   CARAPI SetStateLandTitleRegistry.AusState(
     /* [in] */ CHelper.ausState CRegulator.stateLandTitleRegistry.ausState);

    CARAPI GetStateLandTitleRegistry.AusState(
     /* [out] */ CHelper.ausState* CRegulator.stateLandTitleRegistry.ausState);


   CARAPI SetStateLandTitleRegistry.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.stateLandTitleRegistry.contactFirstNameList);

    CARAPI GetStateLandTitleRegistry.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateLandTitleRegistry.contactFirstNameList);


   CARAPI SetStateLandTitleRegistry.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.stateLandTitleRegistry.contactLastNameList);

    CARAPI GetStateLandTitleRegistry.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateLandTitleRegistry.contactLastNameList);


   CARAPI SetStateLandTitleRegistry.StreetAddress(
     /* [in] */ const String& CRegulator.stateLandTitleRegistry.streetAddress);

    CARAPI GetStateLandTitleRegistry.StreetAddress(
     /* [out] */ String* CRegulator.stateLandTitleRegistry.streetAddress);


   CARAPI SetStateLandTitleRegistry.PostalAddress(
     /* [in] */ const String& CRegulator.stateLandTitleRegistry.postalAddress);

    CARAPI GetStateLandTitleRegistry.PostalAddress(
     /* [out] */ String* CRegulator.stateLandTitleRegistry.postalAddress);


   CARAPI SetStateLandTitleRegistry.Email(
     /* [in] */ const String& CRegulator.stateLandTitleRegistry.email);

    CARAPI GetStateLandTitleRegistry.Email(
     /* [out] */ String* CRegulator.stateLandTitleRegistry.email);


   CARAPI SetStateLandTitleRegistry.MobilePhone(
     /* [in] */ Int32 CRegulator.stateLandTitleRegistry.mobilePhone);

    CARAPI GetStateLandTitleRegistry.MobilePhone(
     /* [out] */ Int32* CRegulator.stateLandTitleRegistry.mobilePhone);


   CARAPI SetStateLandTitleRegistry.WorkPhone(
     /* [in] */ Int32 CRegulator.stateLandTitleRegistry.workPhone);

    CARAPI GetStateLandTitleRegistry.WorkPhone(
     /* [out] */ Int32* CRegulator.stateLandTitleRegistry.workPhone);


   CARAPI SetStateLandTitleRegistry.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.stateLandTitleRegistry.contactedWithDetails);

    CARAPI GetStateLandTitleRegistry.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.stateLandTitleRegistry.contactedWithDetails);


   CARAPI SetStateLandTitleRegistry.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.stateLandTitleRegistry.businessChannelOwnerId);

    CARAPI GetStateLandTitleRegistry.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.stateLandTitleRegistry.businessChannelOwnerId);


   CARAPI SetStateLandTitleRegistry.PropertyId(
     /* [in] */ CProperty.property CRegulator.stateLandTitleRegistry.propertyId);

    CARAPI GetStateLandTitleRegistry.PropertyId(
     /* [out] */ CProperty.property* CRegulator.stateLandTitleRegistry.propertyId);


   CARAPI SetStateLandTitleRegistry.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.stateLandTitleRegistry.docRefIds);

    CARAPI GetStateLandTitleRegistry.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.stateLandTitleRegistry.docRefIds);


   CARAPI SetStateLandTitleRegistry.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.stateLandTitleRegistry.imageRefIds);

    CARAPI GetStateLandTitleRegistry.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.stateLandTitleRegistry.imageRefIds);


   CARAPI SetNCAT.TribunalId(
     /* [in] */ const String& CRegulator.nCAT.tribunalId);

    CARAPI GetNCAT.TribunalId(
     /* [out] */ String* CRegulator.nCAT.tribunalId);


   CARAPI SetNCAT.AuthorityName(
     /* [in] */ const String& CRegulator.nCAT.authorityName);

    CARAPI GetNCAT.AuthorityName(
     /* [out] */ String* CRegulator.nCAT.authorityName);


   CARAPI SetNCAT.AusState(
     /* [in] */ CHelper.ausState CRegulator.nCAT.ausState);

    CARAPI GetNCAT.AusState(
     /* [out] */ CHelper.ausState* CRegulator.nCAT.ausState);


   CARAPI SetNCAT.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.contactFirstNameList);

    CARAPI GetNCAT.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.contactFirstNameList);


   CARAPI SetNCAT.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.contactLastNameList);

    CARAPI GetNCAT.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.contactLastNameList);


   CARAPI SetNCAT.StreetAddress(
     /* [in] */ const String& CRegulator.nCAT.streetAddress);

    CARAPI GetNCAT.StreetAddress(
     /* [out] */ String* CRegulator.nCAT.streetAddress);


   CARAPI SetNCAT.PostalAddress(
     /* [in] */ const String& CRegulator.nCAT.postalAddress);

    CARAPI GetNCAT.PostalAddress(
     /* [out] */ String* CRegulator.nCAT.postalAddress);


   CARAPI SetNCAT.Email(
     /* [in] */ const String& CRegulator.nCAT.email);

    CARAPI GetNCAT.Email(
     /* [out] */ String* CRegulator.nCAT.email);


   CARAPI SetNCAT.MobilePhone(
     /* [in] */ Int32 CRegulator.nCAT.mobilePhone);

    CARAPI GetNCAT.MobilePhone(
     /* [out] */ Int32* CRegulator.nCAT.mobilePhone);


   CARAPI SetNCAT.WorkPhone(
     /* [in] */ Int32 CRegulator.nCAT.workPhone);

    CARAPI GetNCAT.WorkPhone(
     /* [out] */ Int32* CRegulator.nCAT.workPhone);


   CARAPI SetNCAT.CaseDetailsActsResponsesAllegationsRebuttals(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.caseDetailsActsResponsesAllegationsRebuttals);

    CARAPI GetNCAT.CaseDetailsActsResponsesAllegationsRebuttals(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.caseDetailsActsResponsesAllegationsRebuttals);


   CARAPI SetNCAT.DateTimeDetailsInChronologicalOrder(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.dateTimeDetailsInChronologicalOrder);

    CARAPI GetNCAT.DateTimeDetailsInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.dateTimeDetailsInChronologicalOrder);


   CARAPI SetNCAT.AdjournedOn(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.adjournedOn);

    CARAPI GetNCAT.AdjournedOn(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.adjournedOn);


   CARAPI SetNCAT.AdjournedUntil(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.adjournedUntil);

    CARAPI GetNCAT.AdjournedUntil(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.adjournedUntil);


   CARAPI SetNCAT.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegulator.nCAT.contactedWithDetails);

    CARAPI GetNCAT.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegulator.nCAT.contactedWithDetails);


   CARAPI SetNCAT.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CRegulator.nCAT.businessChannelOwnerId);

    CARAPI GetNCAT.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CRegulator.nCAT.businessChannelOwnerId);


   CARAPI SetNCAT.PropertyId(
     /* [in] */ CProperty.property CRegulator.nCAT.propertyId);

    CARAPI GetNCAT.PropertyId(
     /* [out] */ CProperty.property* CRegulator.nCAT.propertyId);


   CARAPI SetNCAT.TenancyId(
     /* [in] */ CProperty.tenant CRegulator.nCAT.tenancyId);

    CARAPI GetNCAT.TenancyId(
     /* [out] */ CProperty.tenant* CRegulator.nCAT.tenancyId);


   CARAPI SetNCAT.BranchId(
     /* [in] */ CAdministration.branch CRegulator.nCAT.branchId);

    CARAPI GetNCAT.BranchId(
     /* [out] */ CAdministration.branch* CRegulator.nCAT.branchId);


   CARAPI SetNCAT.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegulator.nCAT.docRefIds);

    CARAPI GetNCAT.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegulator.nCAT.docRefIds);


   CARAPI SetNCAT.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegulator.nCAT.imageRefIds);

    CARAPI GetNCAT.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegulator.nCAT.imageRefIds);
 
 


protected:
    // Member variables
const String& mSetAuditorFinancial.AuditorFinancialId
String* mGetAuditorFinancial.AuditorFinancialId
const String& mSetAuditorFinancial.Name
String* mGetAuditorFinancial.AuditorFinancialId
ArrayOf<const String&> mSetAuditorFinancial.ContactFirstNameList
ArrayOf<String>* mGetAuditorFinancial.ContactFirstNameList
ArrayOf<const String&> mSetAuditorFinancial.ContactLastNameList
ArrayOf<String>* mGetAuditorFinancial.ContactLastNameList
const String& mSetAuditorFinancial.StreetAddress
String* mGetAuditorFinancial.StreetAddress
const String& mSetAuditorFinancial.PostalAddress
String* mGetAuditorFinancial.PostalAddress
ArrayOf<const String&> mSetAuditorFinancial.EmailAddresses
ArrayOf<String>* mGetAuditorFinancial.EmailAddresses
ArrayOf<Int32> mSetAuditorFinancial.MobilePhone
ArrayOf<Int32>* mGetAuditorFinancial.MobilePhone
ArrayOf<Int32> mSetAuditorFinancial.WorkPhone
ArrayOf<Int32>* mGetAuditorFinancial.WorkPhone
ArrayOf<const String&> mSetAuditorFinancial.ContactedWithDetails
ArrayOf<String>* mGetAuditorFinancial.ContactedWithDetails
ArrayOf<CAdministration.documents> mSetAuditorFinancial.DocRefIds
ArrayOf<CAdministration.documents>* mGetAuditorFinancial.DocRefIds
CRegister.businessChannelOwner mSetAuditorFinancial.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAuditorFinancial.BusinessChannelOwnerId
const String& mSetSecurityAuditor.SecurityAuditorId
String* mGetSecurityAuditor.SecurityAuditorId
const String& mSetSecurityAuditor.Name
ArrayOf<const String&> mSetSecurityAuditor.ContactFirstNameList
ArrayOf<String>* mGetSecurityAuditor.ContactFirstNameList
ArrayOf<const String&> mSetSecurityAuditor.ContactLastNameList
ArrayOf<String>* mGetSecurityAuditor.ContactLastNameList
const String& mSetSecurityAuditor.StreetAddress
String* mGetSecurityAuditor.StreetAddress
const String& mSetSecurityAuditor.PostalAddress
String* mGetSecurityAuditor.PostalAddress
ArrayOf<const String&> mSetSecurityAuditor.EmailAddresses
ArrayOf<String>* mGetSecurityAuditor.EmailAddresses
ArrayOf<Int32> mSetSecurityAuditor.MobilePhone
ArrayOf<Int32>* mGetSecurityAuditor.MobilePhone
ArrayOf<Int32> mSetSecurityAuditor.WorkPhone
ArrayOf<Int32>* mGetSecurityAuditor.WorkPhone
ArrayOf<const String&> mSetSecurityAuditor.ContactedWithDetails
ArrayOf<String>* mGetSecurityAuditor.ContactedWithDetails
ArrayOf<CAdministration.documents> mSetSecurityAuditor.DocRefIds
ArrayOf<CAdministration.documents>* mGetSecurityAuditor.DocRefIds
CRegister.businessChannelOwner mSetSecurityAuditor.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSecurityAuditor.BusinessChannelOwnerId
const String& mSetCommunityHousingRegulator.CommunityHousingRegulatorId
String* mGetCommunityHousingRegulator.CommunityHousingRegulatorId
const String& mSetCommunityHousingRegulator.AuthorityName
String* mGetCommunityHousingRegulator.AuthorityName
ArrayOf<const String&> mSetCommunityHousingRegulator.ContactFirstNameList
ArrayOf<String>* mGetCommunityHousingRegulator.ContactFirstNameList
ArrayOf<const String&> mSetCommunityHousingRegulator.ContactLastNameList
ArrayOf<String>* mGetCommunityHousingRegulator.ContactLastNameList
const String& mSetCommunityHousingRegulator.StreetAddress
String* mGetCommunityHousingRegulator.StreetAddress
const String& mSetCommunityHousingRegulator.PostalAddress
String* mGetCommunityHousingRegulator.PostalAddress
ArrayOf<const String&> mSetCommunityHousingRegulator.EmailAddresses
ArrayOf<String>* mGetCommunityHousingRegulator.EmailAddresses
ArrayOf<Int32> mSetCommunityHousingRegulator.MobilePhone
ArrayOf<Int32>* mGetCommunityHousingRegulator.MobilePhone
ArrayOf<Int32> mSetCommunityHousingRegulator.WorkPhone
ArrayOf<Int32>* mGetCommunityHousingRegulator.WorkPhone
ArrayOf<const String&> mSetCommunityHousingRegulator.ContactedWithDetails
ArrayOf<String>* mGetCommunityHousingRegulator.ContactedWithDetails
ArrayOf<CHelper.ausState> mSetCommunityHousingRegulator.AusStates
ArrayOf<CHelper.ausState>* mGetCommunityHousingRegulator.AusStates
ArrayOf<CAdministration.documents> mSetCommunityHousingRegulator.DocRefIds
ArrayOf<CAdministration.documents>* mGetCommunityHousingRegulator.DocRefIds
ArrayOf<CAdministration.images> mSetCommunityHousingRegulator.ImageRefIds
ArrayOf<CAdministration.images>* mGetCommunityHousingRegulator.ImageRefIds
CRegister.businessChannelOwner mSetCommunityHousingRegulator.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCommunityHousingRegulator.BusinessChannelOwnerId
const String& mSetRentalBondAuthority.RentalBondAuthorityId
String* mGetRentalBondAuthority.RentalBondAuthorityId
const String& mSetRentalBondAuthority.AuthorityName
String* mGetRentalBondAuthority.AuthorityName
CHelper.ausState mSetRentalBondAuthority.AusState
CHelper.ausState* mGetRentalBondAuthority.AusState
ArrayOf<const String&> mSetRentalBondAuthority.ContactFirstNameList
ArrayOf<String>* mGetRentalBondAuthority.ContactFirstNameList
ArrayOf<const String&> mSetRentalBondAuthority.ContactLastNameList
ArrayOf<String>* mGetRentalBondAuthority.ContactLastNameList
const String& mSetRentalBondAuthority.StreetAddress
String* mGetRentalBondAuthority.StreetAddress
const String& mSetRentalBondAuthority.PostalAddress
String* mGetRentalBondAuthority.PostalAddress
ArrayOf<const String&> mSetRentalBondAuthority.EmailAddresses
ArrayOf<String>* mGetRentalBondAuthority.EmailAddresses
ArrayOf<Int32> mSetRentalBondAuthority.MobilePhone
ArrayOf<Int32>* mGetRentalBondAuthority.MobilePhone
ArrayOf<Int32> mSetRentalBondAuthority.WorkPhone
ArrayOf<Int32>* mGetRentalBondAuthority.WorkPhone
ArrayOf<const String&> mSetRentalBondAuthority.ContactedWithDetails
ArrayOf<String>* mGetRentalBondAuthority.ContactedWithDetails
CRegister.businessChannelOwner mSetRentalBondAuthority.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetRentalBondAuthority.BusinessChannelOwnerId
CProperty.property mSetRentalBondAuthority.PropertyId
CProperty.property* mGetRentalBondAuthority.PropertyId
CProperty.tenant mSetRentalBondAuthority.TenancyId
CProperty.tenant* mGetRentalBondAuthority.TenancyId
ArrayOf<CAdministration.documents> mSetRentalBondAuthority.DocRefIds
ArrayOf<CAdministration.documents>* mGetRentalBondAuthority.DocRefIds
ArrayOf<CAdministration.images> mSetRentalBondAuthority.ImageRefIds
ArrayOf<CAdministration.images>* mGetRentalBondAuthority.ImageRefIds
const String& mSetATO.ATOId
String* mGetATO.ATOId
ArrayOf<const String&> mSetATO.ContactFirstNameList
ArrayOf<String>* mGetATO.ContactFirstNameList
ArrayOf<const String&> mSetATO.ContactLastNameList
ArrayOf<String>* mGetATO.ContactLastNameList
const String& mSetATO.StreetAddress
String* mGetATO.StreetAddress
const String& mSetATO.PostalAddress
String* mGetATO.PostalAddress
ArrayOf<const String&> mSetATO.EmailAddresses
ArrayOf<String>* mGetATO.EmailAddresses
ArrayOf<Int32> mSetATO.MobilePhone
ArrayOf<Int32>* mGetATO.MobilePhone
ArrayOf<Int32> mSetATO.WorkPhone
ArrayOf<Int32>* mGetATO.WorkPhone
ArrayOf<const String&> mSetATO.ContactedWithDetails
ArrayOf<String>* mGetATO.ContactedWithDetails
ArrayOf<CAdministration.documents> mSetATO.DocRefIds
ArrayOf<CAdministration.documents>* mGetATO.DocRefIds
CRegister.businessChannelOwner mSetATO.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetATO.BusinessChannelOwnerId
const String& mSetASIC.ASICId
String* mGetASIC.ASICId
ArrayOf<const String&> mSetASIC.ContactFirstNameList
ArrayOf<String>* mGetASIC.ContactFirstNameList
ArrayOf<const String&> mSetASIC.ContactLastNameList
ArrayOf<String>* mGetASIC.ContactLastNameList
const String& mSetASIC.StreetAddress
String* mGetASIC.StreetAddress
const String& mSetASIC.PostalAddress
String* mGetASIC.PostalAddress
ArrayOf<const String&> mSetASIC.EmailAddresses
ArrayOf<String>* mGetASIC.EmailAddresses
ArrayOf<Int32> mSetASIC.MobilePhone
ArrayOf<Int32>* mGetASIC.MobilePhone
ArrayOf<Int32> mSetASIC.WorkPhone
ArrayOf<Int32>* mGetASIC.WorkPhone
ArrayOf<const String&> mSetASIC.ContactedWithDetails
ArrayOf<String>* mGetASIC.ContactedWithDetails
ArrayOf<CAdministration.documents> mSetASIC.DocRefIds
ArrayOf<CAdministration.documents>* mGetASIC.DocRefIds
ArrayOf<CAdministration.images> mSetASIC.ImageRefIds
ArrayOf<CAdministration.images>* mGetASIC.ImageRefIds
CRegister.businessChannelOwner mSetASIC.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetASIC.BusinessChannelOwnerId
const String& mSetACNC.ACNCId
String* mGetACNC.ACNCId
ArrayOf<const String&> mSetACNC.ContactFirstNameList
ArrayOf<String>* mGetACNC.ContactFirstNameList
ArrayOf<const String&> mSetACNC.ContactLastNameList
ArrayOf<String>* mGetACNC.ContactLastNameList
const String& mSetACNC.StreetAddress
String* mGetACNC.StreetAddress
const String& mSetACNC.PostalAddress
String* mGetACNC.PostalAddress
ArrayOf<const String&> mSetACNC.EmailAddresses
ArrayOf<String>* mGetACNC.EmailAddresses
ArrayOf<Int32> mSetACNC.MobilePhone
ArrayOf<Int32>* mGetACNC.MobilePhone
ArrayOf<Int32> mSetACNC.WorkPhone
ArrayOf<Int32>* mGetACNC.WorkPhone
ArrayOf<const String&> mSetACNC.ContactedWithDetails
ArrayOf<String>* mGetACNC.ContactedWithDetails
ArrayOf<CAdministration.documents> mSetACNC.DocRefIds
ArrayOf<CAdministration.documents>* mGetACNC.DocRefIds
ArrayOf<CAdministration.images> mSetACNC.ImageRefIds
ArrayOf<CAdministration.images>* mGetACNC.ImageRefIds
CRegister.businessChannelOwner mSetACNC.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetACNC.BusinessChannelOwnerId
const String& mSetNationalRegulator.NatRegId
String* mGetNationalRegulator.NatRegId
const String& mSetNationalRegulator.NatRegName
String* mGetNationalRegulator.NatRegName
ArrayOf<const String&> mSetNationalRegulator.ContactFirstNameList
ArrayOf<String>* mGetNationalRegulator.ContactFirstNameList
ArrayOf<const String&> mSetNationalRegulator.ContactLastNameList
ArrayOf<String>* mGetNationalRegulator.ContactLastNameList
const String& mSetNationalRegulator.StreetAddress
String* mGetNationalRegulator.StreetAddress
const String& mSetNationalRegulator.PostalAddress
String* mGetNationalRegulator.PostalAddress
ArrayOf<const String&> mSetNationalRegulator.EmailAddresses
ArrayOf<String>* mGetNationalRegulator.EmailAddresses
ArrayOf<Int32> mSetNationalRegulator.MobilePhone
ArrayOf<Int32>* mGetNationalRegulator.MobilePhone
ArrayOf<Int32> mSetNationalRegulator.WorkPhone
ArrayOf<Int32>* mGetNationalRegulator.WorkPhone
ArrayOf<const String&> mSetNationalRegulator.ContactedWithDetails
ArrayOf<String>* mGetNationalRegulator.ContactedWithDetails
ArrayOf<CAdministration.documents> mSetNationalRegulator.DocRefIds
ArrayOf<CAdministration.documents>* mGetNationalRegulator.DocRefIds
ArrayOf<CAdministration.images> mSetNationalRegulator.ImageRefIds
ArrayOf<CAdministration.images>* mGetNationalRegulator.ImageRefIds
CRegister.businessChannelOwner mSetNationalRegulator.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetNationalRegulator.BusinessChannelOwnerId
const String& mSetStateBasedRegulator.StateBasedRegId
String* mGetStateBasedRegulator.StateBasedRegId
const String& mSetStateBasedRegulator.StateBasedRegName
String* mGetStateBasedRegulator.StateBasedRegName
CHelper.ausState mSetStateBasedRegulator.AusState
CHelper.ausState* mGetStateBasedRegulator.AusState
ArrayOf<const String&> mSetStateBasedRegulator.ContactFirstNameList
ArrayOf<String>* mGetStateBasedRegulator.ContactFirstNameList
ArrayOf<const String&> mSetStateBasedRegulator.ContactLastNameList
ArrayOf<String>* mGetStateBasedRegulator.ContactLastNameList
const String& mSetStateBasedRegulator.StreetAddress
String* mGetStateBasedRegulator.StreetAddress
const String& mSetStateBasedRegulator.PostalAddress
String* mGetStateBasedRegulator.PostalAddress
ArrayOf<const String&> mSetStateBasedRegulator.EmailAddresses
ArrayOf<String>* mGetStateBasedRegulator.EmailAddresses
ArrayOf<Int32> mSetStateBasedRegulator.MobilePhone
ArrayOf<Int32>* mGetStateBasedRegulator.MobilePhone
ArrayOf<Int32> mSetStateBasedRegulator.WorkPhone
ArrayOf<Int32>* mGetStateBasedRegulator.WorkPhone
ArrayOf<const String&> mSetStateBasedRegulator.ContactedWithDetails
ArrayOf<String>* mGetStateBasedRegulator.ContactedWithDetails
ArrayOf<CAdministration.documents> mSetStateBasedRegulator.DocRefIds
ArrayOf<CAdministration.documents>* mGetStateBasedRegulator.DocRefIds
ArrayOf<CAdministration.images> mSetStateBasedRegulator.ImageRefIds
ArrayOf<CAdministration.images>* mGetStateBasedRegulator.ImageRefIds
CRegister.businessChannelOwner mSetStateBasedRegulator.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStateBasedRegulator.BusinessChannelOwnerId
const String& mSetStateLandTitleRegistry.LandTitleRegistryId
String* mGetStateLandTitleRegistry.LandTitleRegistryId
const String& mSetStateLandTitleRegistry.AuthorityName
String* mGetStateLandTitleRegistry.AuthorityName
CHelper.ausState mSetStateLandTitleRegistry.AusState
CHelper.ausState* mGetStateLandTitleRegistry.AusState
ArrayOf<const String&> mSetStateLandTitleRegistry.ContactFirstNameList
ArrayOf<String>* mGetStateLandTitleRegistry.ContactFirstNameList
ArrayOf<const String&> mSetStateLandTitleRegistry.ContactLastNameList
ArrayOf<String>* mGetStateLandTitleRegistry.ContactLastNameList
const String& mSetStateLandTitleRegistry.StreetAddress
String* mGetStateLandTitleRegistry.StreetAddress
const String& mSetStateLandTitleRegistry.PostalAddress
String* mGetStateLandTitleRegistry.PostalAddress
const String& mSetStateLandTitleRegistry.Email
String* mGetStateLandTitleRegistry.Email
Int32 mSetStateLandTitleRegistry.MobilePhone
Int32* mGetStateLandTitleRegistry.MobilePhone
Int32 mSetStateLandTitleRegistry.WorkPhone
Int32* mGetStateLandTitleRegistry.WorkPhone
ArrayOf<const String&> mSetStateLandTitleRegistry.ContactedWithDetails
ArrayOf<String>* mGetStateLandTitleRegistry.ContactedWithDetails
CRegister.businessChannelOwner mSetStateLandTitleRegistry.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStateLandTitleRegistry.BusinessChannelOwnerId
CProperty.property mSetStateLandTitleRegistry.PropertyId
CProperty.property* mGetStateLandTitleRegistry.PropertyId
ArrayOf<CAdministration.documents> mSetStateLandTitleRegistry.DocRefIds
ArrayOf<CAdministration.documents>* mGetStateLandTitleRegistry.DocRefIds
ArrayOf<CAdministration.images> mSetStateLandTitleRegistry.ImageRefIds
ArrayOf<CAdministration.images>* mGetStateLandTitleRegistry.ImageRefIds
const String& mSetNCAT.TribunalId
String* mGetNCAT.TribunalId
const String& mSetNCAT.AuthorityName
String* mGetNCAT.AuthorityName
CHelper.ausState mSetNCAT.AusState
CHelper.ausState* mGetNCAT.AusState
ArrayOf<const String&> mSetNCAT.ContactFirstNameList
ArrayOf<String>* mGetNCAT.ContactFirstNameList
ArrayOf<const String&> mSetNCAT.ContactLastNameList
ArrayOf<String>* mGetNCAT.ContactLastNameList
const String& mSetNCAT.StreetAddress
String* mGetNCAT.StreetAddress
const String& mSetNCAT.PostalAddress
String* mGetNCAT.PostalAddress
const String& mSetNCAT.Email
String* mGetNCAT.Email
Int32 mSetNCAT.MobilePhone
Int32* mGetNCAT.MobilePhone
Int32 mSetNCAT.WorkPhone
Int32* mGetNCAT.WorkPhone
ArrayOf<const String&> mSetNCAT.CaseDetailsActsResponsesAllegationsRebuttals
ArrayOf<String>* mGetNCAT.CaseDetailsActsResponsesAllegationsRebuttals
ArrayOf<const String&> mSetNCAT.DateTimeDetailsInChronologicalOrder
ArrayOf<String>* mGetNCAT.DateTimeDetailsInChronologicalOrder
ArrayOf<const String&> mSetNCAT.AdjournedOn
ArrayOf<String>* mGetNCAT.AdjournedOn
ArrayOf<const String&> mSetNCAT.AdjournedUntil
ArrayOf<String>* mGetNCAT.AdjournedUntil
ArrayOf<const String&> mSetNCAT.ContactedWithDetails
ArrayOf<String>* mGetNCAT.ContactedWithDetails
CRegister.businessChannelOwner mSetNCAT.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetNCAT.BusinessChannelOwnerId
CProperty.property mSetNCAT.PropertyId
CProperty.property* mGetNCAT.PropertyId
CProperty.tenant mSetNCAT.TenancyId
CProperty.tenant* mGetNCAT.TenancyId
CAdministration.branch mSetNCAT.BranchId
CAdministration.branch* mGetNCAT.BranchId
ArrayOf<CAdministration.documents> mSetNCAT.DocRefIds
ArrayOf<CAdministration.documents>* mGetNCAT.DocRefIds
ArrayOf<CAdministration.images> mSetNCAT.ImageRefIds
ArrayOf<CAdministration.images>* mGetNCAT.ImageRefIds
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

