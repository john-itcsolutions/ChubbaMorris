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


class CStakeholder
    : public Object
    , public ICH
    , public IComparable
{
public:
    CAR_INTERFACE_DECL()    // The class which implements a CAR interface requires macros CAR_INTERFACE_DECL/CAR_INTERFACE_IMPL.

    CStakeholder();               // If a member needs to be initialized, the constructor must be explicitly declared 

    virtual ~CStakeholder();

    CARAPI constructor();   // CAR constructor for subclass inheritance.

     // IComparable interface function
    //
    CARAPI CompareTo(
        /* [in] */ IInterface* another,
        /* [out] */ Int32* result);

    // ICH interface function
    //
    

   CARAPI SetGovernmentalStakeholder_GovStakeholderId(
     /* [in] */ const String& CStakeholder.govStakeholder.govStakeholderId);

    CARAPI GetGovernmentalStakeholder_GovStakeholderId(
     /* [out] */ String* CStakeholder.govStakeholder.govStakeholderId);


   CARAPI SetGovernmentalStakeholder_DepartmentName(
     /* [in] */ const String& CStakeholder.govStakeholder.departmentName);

    CARAPI GetGovernmentalStakeholder_DepartmentName(
     /* [out] */ String* CStakeholder.govStakeholder.departmentName);


   CARAPI SetGovernmentalStakeholder_GovLevel(
     /* [in] */ CHelper.govLevel CStakeholder.govStakeholder.govLevel);

    CARAPI GetGovernmentalStakeholder_GovLevel(
     /* [out] */ CHelper.govLevel* CStakeholder.govStakeholder.govLevel);


   CARAPI SetGovernmentalStakeholder_StakeholderName(
     /* [in] */ const String& CStakeholder.govStakeholder.stakeholderName);

    CARAPI GetGovernmentalStakeholder_StakeholderName(
     /* [out] */ String* CStakeholder.govStakeholder.stakeholderName);


   CARAPI SetGovernmentalStakeholder_StakeholderDetails(
     /* [in] */ const String& CStakeholder.govStakeholder.stakeholderDetails);

    CARAPI GetGovernmentalStakeholder_StakeholderDetails(
     /* [out] */ String* CStakeholder.govStakeholder.stakeholderDetails);


   CARAPI SetGovernmentalStakeholder_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.govStakeholder.contactFirstNameList);

    CARAPI GetGovernmentalStakeholder_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.govStakeholder.contactFirstNameList);


   CARAPI SetGovernmentalStakeholder_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.govStakeholder.contactLastNameList);

    CARAPI GetGovernmentalStakeholder_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.govStakeholder.contactLastNameList);


   CARAPI SetGovernmentalStakeholder_ResidentialAddress(
     /* [in] */ const String& CStakeholder.govStakeholder.residentialAddress);

    CARAPI GetGovernmentalStakeholder_ResidentialAddress(
     /* [out] */ String* CStakeholder.govStakeholder.residentialAddress);


   CARAPI SetGovernmentalStakeholder_PostalAddress(
     /* [in] */ const String& CStakeholder.govStakeholder.postalAddress);

    CARAPI GetGovernmentalStakeholder_PostalAddress(
     /* [out] */ String* CStakeholder.govStakeholder.postalAddress);


   CARAPI SetGovernmentalStakeholder_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.govStakeholder.emailAddresses);

    CARAPI GetGovernmentalStakeholder_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.govStakeholder.emailAddresses);


   CARAPI SetGovernmentalStakeholder_MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.govStakeholder.mobilePhone);

    CARAPI GetGovernmentalStakeholder_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.govStakeholder.mobilePhone);


   CARAPI SetGovernmentalStakeholder_WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.govStakeholder.workPhone);

    CARAPI GetGovernmentalStakeholder_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.govStakeholder.workPhone);


   CARAPI SetGovernmentalStakeholder_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.govStakeholder.contactedWithDetails);

    CARAPI GetGovernmentalStakeholder_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.govStakeholder.contactedWithDetails);


   CARAPI SetGovernmentalStakeholder_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.govStakeholder.docRefIds);

    CARAPI GetGovernmentalStakeholder_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.govStakeholder.docRefIds);


   CARAPI SetGovernmentalStakeholder_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.govStakeholder.imageRefIds);

    CARAPI GetGovernmentalStakeholder_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.govStakeholder.imageRefIds);


   CARAPI SetGovernmentalStakeholder_BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CStakeholder.govStakeholder.businessDirectorIds);

    CARAPI GetGovernmentalStakeholder_BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CStakeholder.govStakeholder.businessDirectorIds);


   CARAPI SetGovernmentalStakeholder_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.govStakeholder.businessChannelOwnerId);

    CARAPI GetGovernmentalStakeholder_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.govStakeholder.businessChannelOwnerId);


   CARAPI SetNonGovernmentalStakeholder_NonGovStakeholderId(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.nonGovStakeholderId);

    CARAPI GetNonGovernmentalStakeholder_NonGovStakeholderId(
     /* [out] */ String* CStakeholder.nonGovStakeholder.nonGovStakeholderId);


   CARAPI SetNonGovernmentalStakeholder_ABN(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.aBN);

    CARAPI GetNonGovernmentalStakeholder_ABN(
     /* [out] */ String* CStakeholder.nonGovStakeholder.aBN);


   CARAPI SetNonGovernmentalStakeholder_StakeholderName(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.stakeholderName);

    CARAPI GetNonGovernmentalStakeholder_StakeholderName(
     /* [out] */ String* CStakeholder.nonGovStakeholder.stakeholderName);


   CARAPI SetNonGovernmentalStakeholder_StakeholderDetails(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.stakeholderDetails);

    CARAPI GetNonGovernmentalStakeholder_StakeholderDetails(
     /* [out] */ String* CStakeholder.nonGovStakeholder.stakeholderDetails);


   CARAPI SetNonGovernmentalStakeholder_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.nonGovStakeholder.contactFirstNameList);

    CARAPI GetNonGovernmentalStakeholder_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.nonGovStakeholder.contactFirstNameList);


   CARAPI SetNonGovernmentalStakeholder_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.nonGovStakeholder.contactLastNameList);

    CARAPI GetNonGovernmentalStakeholder_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.nonGovStakeholder.contactLastNameList);


   CARAPI SetNonGovernmentalStakeholder_ResidentialAddress(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.residentialAddress);

    CARAPI GetNonGovernmentalStakeholder_ResidentialAddress(
     /* [out] */ String* CStakeholder.nonGovStakeholder.residentialAddress);


   CARAPI SetNonGovernmentalStakeholder_PostalAddress(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.postalAddress);

    CARAPI GetNonGovernmentalStakeholder_PostalAddress(
     /* [out] */ String* CStakeholder.nonGovStakeholder.postalAddress);


   CARAPI SetNonGovernmentalStakeholder_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.nonGovStakeholder.emailAddresses);

    CARAPI GetNonGovernmentalStakeholder_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.nonGovStakeholder.emailAddresses);


   CARAPI SetNonGovernmentalStakeholder_MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.nonGovStakeholder.mobilePhone);

    CARAPI GetNonGovernmentalStakeholder_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.nonGovStakeholder.mobilePhone);


   CARAPI SetNonGovernmentalStakeholder_WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.nonGovStakeholder.workPhone);

    CARAPI GetNonGovernmentalStakeholder_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.nonGovStakeholder.workPhone);


   CARAPI SetNonGovernmentalStakeholder_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.nonGovStakeholder.contactedWithDetails);

    CARAPI GetNonGovernmentalStakeholder_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.nonGovStakeholder.contactedWithDetails);


   CARAPI SetNonGovernmentalStakeholder_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.nonGovStakeholder.docRefIds);

    CARAPI GetNonGovernmentalStakeholder_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.nonGovStakeholder.docRefIds);


   CARAPI SetNonGovernmentalStakeholder_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.nonGovStakeholder.imageRefIds);

    CARAPI GetNonGovernmentalStakeholder_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.nonGovStakeholder.imageRefIds);


   CARAPI SetNonGovernmentalStakeholder_BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CStakeholder.nonGovStakeholder.businessDirectorIds);

    CARAPI GetNonGovernmentalStakeholder_BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CStakeholder.nonGovStakeholder.businessDirectorIds);


   CARAPI SetNonGovernmentalStakeholder_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.nonGovStakeholder.businessChannelOwnerId);

    CARAPI GetNonGovernmentalStakeholder_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.nonGovStakeholder.businessChannelOwnerId);


   CARAPI SetPartner_PartnerId(
     /* [in] */ const String& CStakeholder.partner.partnerId);

    CARAPI GetPartner_PartnerId(
     /* [out] */ String* CStakeholder.partner.partnerId);


   CARAPI SetPartner_ABN(
     /* [in] */ const String& CStakeholder.partner.aBN);

    CARAPI GetPartner_ABN(
     /* [out] */ String* CStakeholder.partner.aBN);


   CARAPI SetPartner_PartnerName(
     /* [in] */ const String& CStakeholder.partner.partnerName);

    CARAPI GetPartner_PartnerName(
     /* [out] */ String* CStakeholder.partner.partnerName);


   CARAPI SetPartner_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.partner.contactFirstNameList);

    CARAPI GetPartner_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.partner.contactFirstNameList);


   CARAPI SetPartner_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.partner.contactLastNameList);

    CARAPI GetPartner_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.partner.contactLastNameList);


   CARAPI SetPartner_ResidentialAddress(
     /* [in] */ const String& CStakeholder.partner.residentialAddress);

    CARAPI GetPartner_ResidentialAddress(
     /* [out] */ String* CStakeholder.partner.residentialAddress);


   CARAPI SetPartner_PostalAddress(
     /* [in] */ const String& CStakeholder.partner.postalAddress);

    CARAPI GetPartner_PostalAddress(
     /* [out] */ String* CStakeholder.partner.postalAddress);


   CARAPI SetPartner_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.partner.emailAddresses);

    CARAPI GetPartner_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.partner.emailAddresses);


   CARAPI SetPartner_MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.partner.mobilePhone);

    CARAPI GetPartner_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.partner.mobilePhone);


   CARAPI SetPartner_WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.partner.workPhone);

    CARAPI GetPartner_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.partner.workPhone);


   CARAPI SetPartner_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.partner.contactedWithDetails);

    CARAPI GetPartner_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.partner.contactedWithDetails);


   CARAPI SetPartner_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.partner.businessChannelOwnerId);

    CARAPI GetPartner_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.partner.businessChannelOwnerId);


   CARAPI SetPartner_BranchId(
     /* [in] */ CAdministration.branch CStakeholder.partner.branchId);

    CARAPI GetPartner_BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.partner.branchId);


   CARAPI SetPartner_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.partner.docRefIds);

    CARAPI GetPartner_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.partner.docRefIds);


   CARAPI SetPartner_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.partner.imageRefIds);

    CARAPI GetPartner_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.partner.imageRefIds);


   CARAPI SetCommunity_CommunityId(
     /* [in] */ const String& CStakeholder.community.communityId);

    CARAPI GetCommunity_CommunityId(
     /* [out] */ String* CStakeholder.community.communityId);


   CARAPI SetCommunity_GroupName(
     /* [in] */ const String& CStakeholder.community.groupName);

    CARAPI GetCommunity_GroupName(
     /* [out] */ String* CStakeholder.community.groupName);


   CARAPI SetCommunity_FirstName(
     /* [in] */ const String& CStakeholder.community.firstName);

    CARAPI GetCommunity_FirstName(
     /* [out] */ String* CStakeholder.community.firstName);


   CARAPI SetCommunity_LastName(
     /* [in] */ const String& CStakeholder.community.lastName);

    CARAPI GetCommunity_LastName(
     /* [out] */ String* CStakeholder.community.lastName);


   CARAPI SetCommunity_ResidentialAddress(
     /* [in] */ const String& CStakeholder.community.residentialAddress);

    CARAPI GetCommunity_ResidentialAddress(
     /* [out] */ String* CStakeholder.community.residentialAddress);


   CARAPI SetCommunity_PostalAddress(
     /* [in] */ const String& CStakeholder.community.postalAddress);

    CARAPI GetCommunity_PostalAddress(
     /* [out] */ String* CStakeholder.community.postalAddress);


   CARAPI SetCommunity_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.community.emailAddresses);

    CARAPI GetCommunity_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.community.emailAddresses);


   CARAPI SetCommunity_MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.community.mobilePhone);

    CARAPI GetCommunity_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.community.mobilePhone);


   CARAPI SetCommunity_HomePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.community.homePhone);

    CARAPI GetCommunity_HomePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.community.homePhone);


   CARAPI SetCommunity_WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.community.workPhone);

    CARAPI GetCommunity_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.community.workPhone);


   CARAPI SetCommunity_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.community.contactedWithDetails);

    CARAPI GetCommunity_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.community.contactedWithDetails);


   CARAPI SetCommunity_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.community.businessChannelOwnerId);

    CARAPI GetCommunity_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.community.businessChannelOwnerId);


   CARAPI SetCommunity_BranchId(
     /* [in] */ CAdministration.branch CStakeholder.community.branchId);

    CARAPI GetCommunity_BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.community.branchId);


   CARAPI SetCommunity_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.community.docRefIds);

    CARAPI GetCommunity_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.community.docRefIds);


   CARAPI SetCommunity_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.community.imageRefIds);

    CARAPI GetCommunity_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.community.imageRefIds);


   CARAPI SetMedia_MediaId(
     /* [in] */ const String& CStakeholder.media.mediaId);

    CARAPI GetMedia_MediaId(
     /* [out] */ String* CStakeholder.media.mediaId);


   CARAPI SetMedia_ABN(
     /* [in] */ const String& CStakeholder.media.aBN);

    CARAPI GetMedia_ABN(
     /* [out] */ String* CStakeholder.media.aBN);


   CARAPI SetMedia_CompanyName(
     /* [in] */ const String& CStakeholder.media.companyName);

    CARAPI GetMedia_CompanyName(
     /* [out] */ String* CStakeholder.media.companyName);


   CARAPI SetMedia_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.media.contactFirstNameList);

    CARAPI GetMedia_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.media.contactFirstNameList);


   CARAPI SetMedia_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.media.contactLastNameList);

    CARAPI GetMedia_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.media.contactLastNameList);


   CARAPI SetMedia_ResidentialAddress(
     /* [in] */ const String& CStakeholder.media.residentialAddress);

    CARAPI GetMedia_ResidentialAddress(
     /* [out] */ String* CStakeholder.media.residentialAddress);


   CARAPI SetMedia_PostalAddress(
     /* [in] */ const String& CStakeholder.media.postalAddress);

    CARAPI GetMedia_PostalAddress(
     /* [out] */ String* CStakeholder.media.postalAddress);


   CARAPI SetMedia_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.media.emailAddresses);

    CARAPI GetMedia_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.media.emailAddresses);


   CARAPI SetMedia_MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.media.mobilePhone);

    CARAPI GetMedia_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.media.mobilePhone);


   CARAPI SetMedia_WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.media.workPhone);

    CARAPI GetMedia_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.media.workPhone);


   CARAPI SetMedia_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.media.contactedWithDetails);

    CARAPI GetMedia_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.media.contactedWithDetails);


   CARAPI SetMedia_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.media.businessChannelOwnerId);

    CARAPI GetMedia_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.media.businessChannelOwnerId);


   CARAPI SetMedia_BranchId(
     /* [in] */ CAdministration.branch CStakeholder.media.branchId);

    CARAPI GetMedia_BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.media.branchId);


   CARAPI SetMedia_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.media.docRefIds);

    CARAPI GetMedia_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.media.docRefIds);


   CARAPI SetMedia_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.media.imageRefIds);

    CARAPI GetMedia_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.media.imageRefIds);


   CARAPI SetTICA_TicaId(
     /* [in] */ const String& CStakeholder.tICA.ticaId);

    CARAPI GetTICA_TicaId(
     /* [out] */ String* CStakeholder.tICA.ticaId);


   CARAPI SetTICA_TicaUserName(
     /* [in] */ const String& CStakeholder.tICA.ticaUserName);

    CARAPI GetTICA_TicaUserName(
     /* [out] */ String* CStakeholder.tICA.ticaUserName);


   CARAPI SetTICA_TICAPassword(
     /* [in] */ const String& CStakeholder.tICA.tICAPassword);

    CARAPI GetTICA_TICAPassword(
     /* [out] */ String* CStakeholder.tICA.tICAPassword);


   CARAPI SetTICA_TenantFirstName(
     /* [in] */ const String& CStakeholder.tICA.tenantFirstName);

    CARAPI GetTICA_TenantFirstName(
     /* [out] */ String* CStakeholder.tICA.tenantFirstName);


   CARAPI SetTICA_TenantMiddleInitialOrName(
     /* [in] */ const String& CStakeholder.tICA.tenantMiddleInitialOrName);

    CARAPI GetTICA_TenantMiddleInitialOrName(
     /* [out] */ String* CStakeholder.tICA.tenantMiddleInitialOrName);


   CARAPI SetTICA_TenantLastName(
     /* [in] */ const String& CStakeholder.tICA.tenantLastName);

    CARAPI GetTICA_TenantLastName(
     /* [out] */ String* CStakeholder.tICA.tenantLastName);


   CARAPI SetTICA_TenantDateOfBirth(
     /* [in] */ const String& CStakeholder.tICA.tenantDateOfBirth);

    CARAPI GetTICA_TenantDateOfBirth(
     /* [out] */ String* CStakeholder.tICA.tenantDateOfBirth);


   CARAPI SetTICA_ApplicantFirstName(
     /* [in] */ const String& CStakeholder.tICA.applicantFirstName);

    CARAPI GetTICA_ApplicantFirstName(
     /* [out] */ String* CStakeholder.tICA.applicantFirstName);


   CARAPI SetTICA_ApplicantMiddleInitialOrName(
     /* [in] */ const String& CStakeholder.tICA.applicantMiddleInitialOrName);

    CARAPI GetTICA_ApplicantMiddleInitialOrName(
     /* [out] */ String* CStakeholder.tICA.applicantMiddleInitialOrName);


   CARAPI SetTICA_ApplicantLastName(
     /* [in] */ const String& CStakeholder.tICA.applicantLastName);

    CARAPI GetTICA_ApplicantLastName(
     /* [out] */ String* CStakeholder.tICA.applicantLastName);


   CARAPI SetTICA_ApplicantDateOfBirth(
     /* [in] */ const String& CStakeholder.tICA.applicantDateOfBirth);

    CARAPI GetTICA_ApplicantDateOfBirth(
     /* [out] */ String* CStakeholder.tICA.applicantDateOfBirth);


   CARAPI SetTICA_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.tICA.businessChannelOwnerId);

    CARAPI GetTICA_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.tICA.businessChannelOwnerId);


   CARAPI SetTICA_BranchId(
     /* [in] */ CAdministration.branch CStakeholder.tICA.branchId);

    CARAPI GetTICA_BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.tICA.branchId);


   CARAPI SetTICA_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.tICA.docRefIds);

    CARAPI GetTICA_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.tICA.docRefIds);


   CARAPI SetTICA_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.tICA.imageRefIds);

    CARAPI GetTICA_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.tICA.imageRefIds);


   CARAPI SetTICA_ApplicantId(
     /* [in] */ CCustomer.applicant CStakeholder.tICA.applicantId);

    CARAPI GetTICA_ApplicantId(
     /* [out] */ CCustomer.applicant* CStakeholder.tICA.applicantId);


   CARAPI SetTICA_TenancyId(
     /* [in] */ CProperty.tenant CStakeholder.tICA.tenancyId);

    CARAPI GetTICA_TenancyId(
     /* [out] */ CProperty.tenant* CStakeholder.tICA.tenancyId);


   CARAPI SetAgent_AgentId(
     /* [in] */ const String& CStakeholder.agent.agentId);

    CARAPI GetAgent_AgentId(
     /* [out] */ String* CStakeholder.agent.agentId);


   CARAPI SetAgent_ABN(
     /* [in] */ const String& CStakeholder.agent.aBN);

    CARAPI GetAgent_ABN(
     /* [out] */ String* CStakeholder.agent.aBN);


   CARAPI SetAgent_AgencyName(
     /* [in] */ const String& CStakeholder.agent.agencyName);

    CARAPI GetAgent_AgencyName(
     /* [out] */ String* CStakeholder.agent.agencyName);


   CARAPI SetAgent_AgentType(
     /* [in] */ const String& CStakeholder.agent.agentType);

    CARAPI GetAgent_AgentType(
     /* [out] */ String* CStakeholder.agent.agentType);


   CARAPI SetAgent_DescriptionOfAgency(
     /* [in] */ const String& CStakeholder.agent.descriptionOfAgency);

    CARAPI GetAgent_DescriptionOfAgency(
     /* [out] */ String* CStakeholder.agent.descriptionOfAgency);


   CARAPI SetAgent_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.agent.contactFirstNameList);

    CARAPI GetAgent_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.agent.contactFirstNameList);


   CARAPI SetAgent_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.agent.contactLastNameList);

    CARAPI GetAgent_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.agent.contactLastNameList);


   CARAPI SetAgent_ResidentialAddress(
     /* [in] */ const String& CStakeholder.agent.residentialAddress);

    CARAPI GetAgent_ResidentialAddress(
     /* [out] */ String* CStakeholder.agent.residentialAddress);


   CARAPI SetAgent_PostalAddress(
     /* [in] */ const String& CStakeholder.agent.postalAddress);

    CARAPI GetAgent_PostalAddress(
     /* [out] */ String* CStakeholder.agent.postalAddress);


   CARAPI SetAgent_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.agent.emailAddresses);

    CARAPI GetAgent_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.agent.emailAddresses);


   CARAPI SetAgent_MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.agent.mobilePhone);

    CARAPI GetAgent_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.agent.mobilePhone);


   CARAPI SetAgent_WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.agent.workPhone);

    CARAPI GetAgent_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.agent.workPhone);


   CARAPI SetAgent_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.agent.contactedWithDetails);

    CARAPI GetAgent_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.agent.contactedWithDetails);


   CARAPI SetAgent_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.agent.docRefIds);

    CARAPI GetAgent_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.agent.docRefIds);


   CARAPI SetAgent_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.agent.imageRefIds);

    CARAPI GetAgent_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.agent.imageRefIds);


   CARAPI SetAgent_AgentTypeId(
     /* [in] */ CStakeholder.agentType CStakeholder.agent.agentTypeId);

    CARAPI GetAgent_AgentTypeId(
     /* [out] */ CStakeholder.agentType* CStakeholder.agent.agentTypeId);


   CARAPI SetAgent_BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CStakeholder.agent.businessDirectorIds);

    CARAPI GetAgent_BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CStakeholder.agent.businessDirectorIds);


   CARAPI SetAgent_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.agent.businessChannelOwnerId);

    CARAPI GetAgent_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.agent.businessChannelOwnerId);


   CARAPI SetAgentType_AgentTypeId(
     /* [in] */ const String& CStakeholder.agentType.agentTypeId);

    CARAPI GetAgentType_AgentTypeId(
     /* [out] */ String* CStakeholder.agentType.agentTypeId);


   CARAPI SetAgentType_AgentType(
     /* [in] */ const String& CStakeholder.agentType.agentType);

    CARAPI GetAgentType_AgentType(
     /* [out] */ String* CStakeholder.agentType.agentType);


   CARAPI SetAgentType_AgentTypeDescription(
     /* [in] */ const String& CStakeholder.agentType.agentTypeDescription);

    CARAPI GetAgentType_AgentTypeDescription(
     /* [out] */ String* CStakeholder.agentType.agentTypeDescription);


   CARAPI SetAgentType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.agentType.businessChannelOwnerId);

    CARAPI GetAgentType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.agentType.businessChannelOwnerId);


   CARAPI SetAgentType_BranchId(
     /* [in] */ CAdministration.branch CStakeholder.agentType.branchId);

    CARAPI GetAgentType_BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.agentType.branchId);


   CARAPI SetAgentType_DeptId(
     /* [in] */ CAdministration.department CStakeholder.agentType.deptId);

    CARAPI GetAgentType_DeptId(
     /* [out] */ CAdministration.department* CStakeholder.agentType.deptId);


   CARAPI SetAgentType_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CStakeholder.agentType.serviceIds);

    CARAPI GetAgentType_ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CStakeholder.agentType.serviceIds);


   CARAPI SetAgentType_SupplierTypeIds(
     /* [in] */ ArrayOf<CSupplier.supplierType> CStakeholder.agentType.supplierTypeIds);

    CARAPI GetAgentType_SupplierTypeIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplierType>* CStakeholder.agentType.supplierTypeIds);


   CARAPI SetAgentType_StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CStakeholder.agentType.stateBasedRegId);

    CARAPI GetAgentType_StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CStakeholder.agentType.stateBasedRegId);


   CARAPI SetAgentType_NatRegId(
     /* [in] */ CRegulator.nationalRegulator CStakeholder.agentType.natRegId);

    CARAPI GetAgentType_NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CStakeholder.agentType.natRegId);


   CARAPI SetAgentType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.agentType.docRefIds);

    CARAPI GetAgentType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.agentType.docRefIds);


   CARAPI SetAgentType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.agentType.imageRefIds);

    CARAPI GetAgentType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.agentType.imageRefIds);


   CARAPI SetAgentType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CStakeholder.agentType.videoRefIds);

    CARAPI GetAgentType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CStakeholder.agentType.videoRefIds);


   CARAPI SetStateLAHAuthority_StateLAHAuthorityId(
     /* [in] */ const String& CStakeholder.stateLAHAuthority.stateLAHAuthorityId);

    CARAPI GetStateLAHAuthority_StateLAHAuthorityId(
     /* [out] */ String* CStakeholder.stateLAHAuthority.stateLAHAuthorityId);


   CARAPI SetStateLAHAuthority_AuthorityName(
     /* [in] */ const String& CStakeholder.stateLAHAuthority.authorityName);

    CARAPI GetStateLAHAuthority_AuthorityName(
     /* [out] */ String* CStakeholder.stateLAHAuthority.authorityName);


   CARAPI SetStateLAHAuthority_AusState(
     /* [in] */ CHelper.ausState CStakeholder.stateLAHAuthority.ausState);

    CARAPI GetStateLAHAuthority_AusState(
     /* [out] */ CHelper.ausState* CStakeholder.stateLAHAuthority.ausState);


   CARAPI SetStateLAHAuthority_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.stateLAHAuthority.contactFirstNameList);

    CARAPI GetStateLAHAuthority_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.stateLAHAuthority.contactFirstNameList);


   CARAPI SetStateLAHAuthority_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.stateLAHAuthority.contactLastNameList);

    CARAPI GetStateLAHAuthority_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.stateLAHAuthority.contactLastNameList);


   CARAPI SetStateLAHAuthority_StreetAddress(
     /* [in] */ const String& CStakeholder.stateLAHAuthority.streetAddress);

    CARAPI GetStateLAHAuthority_StreetAddress(
     /* [out] */ String* CStakeholder.stateLAHAuthority.streetAddress);


   CARAPI SetStateLAHAuthority_PostalAddress(
     /* [in] */ const String& CStakeholder.stateLAHAuthority.postalAddress);

    CARAPI GetStateLAHAuthority_PostalAddress(
     /* [out] */ String* CStakeholder.stateLAHAuthority.postalAddress);


   CARAPI SetStateLAHAuthority_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.stateLAHAuthority.emailAddresses);

    CARAPI GetStateLAHAuthority_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.stateLAHAuthority.emailAddresses);


   CARAPI SetStateLAHAuthority_MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.stateLAHAuthority.mobilePhone);

    CARAPI GetStateLAHAuthority_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.stateLAHAuthority.mobilePhone);


   CARAPI SetStateLAHAuthority_WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.stateLAHAuthority.workPhone);

    CARAPI GetStateLAHAuthority_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.stateLAHAuthority.workPhone);


   CARAPI SetStateLAHAuthority_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.stateLAHAuthority.contactedWithDetails);

    CARAPI GetStateLAHAuthority_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.stateLAHAuthority.contactedWithDetails);


   CARAPI SetStateLAHAuthority_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.stateLAHAuthority.businessChannelOwnerId);

    CARAPI GetStateLAHAuthority_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.stateLAHAuthority.businessChannelOwnerId);


   CARAPI SetStateLAHAuthority_BranchId(
     /* [in] */ CAdministration.branch CStakeholder.stateLAHAuthority.branchId);

    CARAPI GetStateLAHAuthority_BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.stateLAHAuthority.branchId);


   CARAPI SetStateLAHAuthority_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.stateLAHAuthority.docRefIds);

    CARAPI GetStateLAHAuthority_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.stateLAHAuthority.docRefIds);


   CARAPI SetStateLAHAuthority_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.stateLAHAuthority.imageRefIds);

    CARAPI GetStateLAHAuthority_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.stateLAHAuthority.imageRefIds);


   CARAPI SetStateLAHAuthority_PropertyOwnerId(
     /* [in] */ CProperty.propertyOwner CStakeholder.stateLAHAuthority.propertyOwnerId);

    CARAPI GetStateLAHAuthority_PropertyOwnerId(
     /* [out] */ CProperty.propertyOwner* CStakeholder.stateLAHAuthority.propertyOwnerId);


   CARAPI SetStatePublicHousingAuthority_StatePublicHousingAuthorityId(
     /* [in] */ const String& CStakeholder.statePublicHousingAuthority.statePublicHousingAuthorityId);

    CARAPI GetStatePublicHousingAuthority_StatePublicHousingAuthorityId(
     /* [out] */ String* CStakeholder.statePublicHousingAuthority.statePublicHousingAuthorityId);


   CARAPI SetStatePublicHousingAuthority_AuthorityName(
     /* [in] */ const String& CStakeholder.statePublicHousingAuthority.authorityName);

    CARAPI GetStatePublicHousingAuthority_AuthorityName(
     /* [out] */ String* CStakeholder.statePublicHousingAuthority.authorityName);


   CARAPI SetStatePublicHousingAuthority_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.statePublicHousingAuthority.contactFirstNameList);

    CARAPI GetStatePublicHousingAuthority_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.statePublicHousingAuthority.contactFirstNameList);


   CARAPI SetStatePublicHousingAuthority_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.statePublicHousingAuthority.contactLastNameList);

    CARAPI GetStatePublicHousingAuthority_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.statePublicHousingAuthority.contactLastNameList);


   CARAPI SetStatePublicHousingAuthority_StreetAddress(
     /* [in] */ const String& CStakeholder.statePublicHousingAuthority.streetAddress);

    CARAPI GetStatePublicHousingAuthority_StreetAddress(
     /* [out] */ String* CStakeholder.statePublicHousingAuthority.streetAddress);


   CARAPI SetStatePublicHousingAuthority_PostalAddress(
     /* [in] */ const String& CStakeholder.statePublicHousingAuthority.postalAddress);

    CARAPI GetStatePublicHousingAuthority_PostalAddress(
     /* [out] */ String* CStakeholder.statePublicHousingAuthority.postalAddress);


   CARAPI SetStatePublicHousingAuthority_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.statePublicHousingAuthority.emailAddresses);

    CARAPI GetStatePublicHousingAuthority_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.statePublicHousingAuthority.emailAddresses);


   CARAPI SetStatePublicHousingAuthority_MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.statePublicHousingAuthority.mobilePhone);

    CARAPI GetStatePublicHousingAuthority_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.statePublicHousingAuthority.mobilePhone);


   CARAPI SetStatePublicHousingAuthority_WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.statePublicHousingAuthority.workPhone);

    CARAPI GetStatePublicHousingAuthority_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.statePublicHousingAuthority.workPhone);


   CARAPI SetStatePublicHousingAuthority_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.statePublicHousingAuthority.contactedWithDetails);

    CARAPI GetStatePublicHousingAuthority_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.statePublicHousingAuthority.contactedWithDetails);


   CARAPI SetStatePublicHousingAuthority_AusState(
     /* [in] */ CHelper.ausState CStakeholder.statePublicHousingAuthority.ausState);

    CARAPI GetStatePublicHousingAuthority_AusState(
     /* [out] */ CHelper.ausState* CStakeholder.statePublicHousingAuthority.ausState);


   CARAPI SetStatePublicHousingAuthority_BranchId(
     /* [in] */ CAdministration.branch CStakeholder.statePublicHousingAuthority.branchId);

    CARAPI GetStatePublicHousingAuthority_BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.statePublicHousingAuthority.branchId);


   CARAPI SetStatePublicHousingAuthority_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.statePublicHousingAuthority.docRefIds);

    CARAPI GetStatePublicHousingAuthority_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.statePublicHousingAuthority.docRefIds);


   CARAPI SetStatePublicHousingAuthority_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.statePublicHousingAuthority.imageRefIds);

    CARAPI GetStatePublicHousingAuthority_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.statePublicHousingAuthority.imageRefIds);


   CARAPI SetStatePublicHousingAuthority_PropertyOwnerId(
     /* [in] */ CProperty.propertyOwner CStakeholder.statePublicHousingAuthority.propertyOwnerId);

    CARAPI GetStatePublicHousingAuthority_PropertyOwnerId(
     /* [out] */ CProperty.propertyOwner* CStakeholder.statePublicHousingAuthority.propertyOwnerId);


   CARAPI SetStatePublicHousingAuthority_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.statePublicHousingAuthority.businessChannelOwnerId);

    CARAPI GetStatePublicHousingAuthority_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.statePublicHousingAuthority.businessChannelOwnerId);



protected:
    // Member variables
const String& mSetGovernmentalStakeholder_GovStakeholderId
String* mGetGovernmentalStakeholder_GovStakeholderId
const String& mSetGovernmentalStakeholder_DepartmentName
String* mGetGovernmentalStakeholder_DepartmentName
CHelper.govLevel mSetGovernmentalStakeholder_GovLevel
CHelper.govLevel* mGetGovernmentalStakeholder_GovLevel
const String& mSetGovernmentalStakeholder_StakeholderName
String* mGetGovernmentalStakeholder_StakeholderName
const String& mSetGovernmentalStakeholder_StakeholderDetails
String* mGetGovernmentalStakeholder_StakeholderDetails
ArrayOf<const String&> mSetGovernmentalStakeholder_ContactFirstNameList
ArrayOf<String>* mGetGovernmentalStakeholder_ContactFirstNameList
ArrayOf<const String&> mSetGovernmentalStakeholder_ContactLastNameList
ArrayOf<String>* mGetGovernmentalStakeholder_ContactLastNameList
const String& mSetGovernmentalStakeholder_ResidentialAddress
String* mGetGovernmentalStakeholder_ResidentialAddress
const String& mSetGovernmentalStakeholder_PostalAddress
String* mGetGovernmentalStakeholder_PostalAddress
ArrayOf<const String&> mSetGovernmentalStakeholder_EmailAddresses
ArrayOf<String>* mGetGovernmentalStakeholder_EmailAddresses
ArrayOf<Int32> mSetGovernmentalStakeholder_MobilePhone
ArrayOf<Int32>* mGetGovernmentalStakeholder_MobilePhone
ArrayOf<Int32> mSetGovernmentalStakeholder_WorkPhone
ArrayOf<Int32>* mGetGovernmentalStakeholder_WorkPhone
ArrayOf<const String&> mSetGovernmentalStakeholder_ContactedWithDetails
ArrayOf<String>* mGetGovernmentalStakeholder_ContactedWithDetails
ArrayOf<CAdministration.documents> mSetGovernmentalStakeholder_DocRefIds
ArrayOf<CAdministration.documents>* mGetGovernmentalStakeholder_DocRefIds
ArrayOf<CAdministration.images> mSetGovernmentalStakeholder_ImageRefIds
ArrayOf<CAdministration.images>* mGetGovernmentalStakeholder_ImageRefIds
ArrayOf<CAdministration.businessDirector> mSetGovernmentalStakeholder_BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetGovernmentalStakeholder_BusinessDirectorIds
CRegister.businessChannelOwner mSetGovernmentalStakeholder_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetGovernmentalStakeholder_BusinessChannelOwnerId
const String& mSetNonGovernmentalStakeholder_NonGovStakeholderId
String* mGetNonGovernmentalStakeholder_NonGovStakeholderId
const String& mSetNonGovernmentalStakeholder_ABN
String* mGetNonGovernmentalStakeholder_ABN
const String& mSetNonGovernmentalStakeholder_StakeholderName
String* mGetNonGovernmentalStakeholder_StakeholderName
const String& mSetNonGovernmentalStakeholder_StakeholderDetails
String* mGetNonGovernmentalStakeholder_StakeholderDetails
ArrayOf<const String&> mSetNonGovernmentalStakeholder_ContactFirstNameList
ArrayOf<String>* mGetNonGovernmentalStakeholder_ContactFirstNameList
ArrayOf<const String&> mSetNonGovernmentalStakeholder_ContactLastNameList
ArrayOf<String>* mGetNonGovernmentalStakeholder_ContactLastNameList
const String& mSetNonGovernmentalStakeholder_ResidentialAddress
String* mGetNonGovernmentalStakeholder_ResidentialAddress
const String& mSetNonGovernmentalStakeholder_PostalAddress
String* mGetNonGovernmentalStakeholder_PostalAddress
ArrayOf<const String&> mSetNonGovernmentalStakeholder_EmailAddresses
ArrayOf<String>* mGetNonGovernmentalStakeholder_EmailAddresses
ArrayOf<Int32> mSetNonGovernmentalStakeholder_MobilePhone
ArrayOf<Int32>* mGetNonGovernmentalStakeholder_MobilePhone
ArrayOf<Int32> mSetNonGovernmentalStakeholder_WorkPhone
ArrayOf<Int32>* mGetNonGovernmentalStakeholder_WorkPhone
ArrayOf<const String&> mSetNonGovernmentalStakeholder_ContactedWithDetails
ArrayOf<String>* mGetNonGovernmentalStakeholder_ContactedWithDetails
ArrayOf<CAdministration.documents> mSetNonGovernmentalStakeholder_DocRefIds
ArrayOf<CAdministration.documents>* mGetNonGovernmentalStakeholder_DocRefIds
ArrayOf<CAdministration.images> mSetNonGovernmentalStakeholder_ImageRefIds
ArrayOf<CAdministration.images>* mGetNonGovernmentalStakeholder_ImageRefIds
ArrayOf<CAdministration.businessDirector> mSetNonGovernmentalStakeholder_BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetNonGovernmentalStakeholder_BusinessDirectorIds
CRegister.businessChannelOwner mSetNonGovernmentalStakeholder_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetNonGovernmentalStakeholder_BusinessChannelOwnerId
const String& mSetPartner_PartnerId
String* mGetPartner_PartnerId
const String& mSetPartner_ABN
String* mGetPartner_ABN
const String& mSetPartner_PartnerName
String* mGetPartner_PartnerName
ArrayOf<const String&> mSetPartner_ContactFirstNameList
ArrayOf<String>* mGetPartner_ContactFirstNameList
ArrayOf<const String&> mSetPartner_ContactLastNameList
ArrayOf<String>* mGetPartner_ContactLastNameList
const String& mSetPartner_ResidentialAddress
String* mGetPartner_ResidentialAddress
const String& mSetPartner_PostalAddress
String* mGetPartner_PostalAddress
ArrayOf<const String&> mSetPartner_EmailAddresses
ArrayOf<String>* mGetPartner_EmailAddresses
ArrayOf<Int32> mSetPartner_MobilePhone
ArrayOf<Int32>* mGetPartner_MobilePhone
ArrayOf<Int32> mSetPartner_WorkPhone
ArrayOf<Int32>* mGetPartner_WorkPhone
ArrayOf<const String&> mSetPartner_ContactedWithDetails
ArrayOf<String>* mGetPartner_ContactedWithDetails
CRegister.businessChannelOwner mSetPartner_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPartner_BusinessChannelOwnerId
CAdministration.branch mSetPartner_BranchId
CAdministration.branch* mGetPartner_BranchId
ArrayOf<CAdministration.documents> mSetPartner_DocRefIds
ArrayOf<CAdministration.documents>* mGetPartner_DocRefIds
ArrayOf<CAdministration.images> mSetPartner_ImageRefIds
ArrayOf<CAdministration.images>* mGetPartner_ImageRefIds
const String& mSetCommunity_CommunityId
String* mGetCommunity_CommunityId
const String& mSetCommunity_GroupName
String* mGetCommunity_GroupName
const String& mSetCommunity_FirstName
String* mGetCommunity_FirstName
const String& mSetCommunity_LastName
String* mGetCommunity_LastName
const String& mSetCommunity_ResidentialAddress
String* mGetCommunity_ResidentialAddress
const String& mSetCommunity_PostalAddress
String* mGetCommunity_PostalAddress
ArrayOf<const String&> mSetCommunity_EmailAddresses
ArrayOf<String>* mGetCommunity_EmailAddresses
ArrayOf<Int32> mSetCommunity_MobilePhone
ArrayOf<Int32>* mGetCommunity_MobilePhone
ArrayOf<Int32> mSetCommunity_HomePhone
ArrayOf<Int32>* mGetCommunity_HomePhone
ArrayOf<Int32> mSetCommunity_WorkPhone
ArrayOf<Int32>* mGetCommunity_WorkPhone
ArrayOf<const String&> mSetCommunity_ContactedWithDetails
ArrayOf<String>* mGetCommunity_ContactedWithDetails
CRegister.businessChannelOwner mSetCommunity_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCommunity_BusinessChannelOwnerId
CAdministration.branch mSetCommunity_BranchId
CAdministration.branch* mGetCommunity_BranchId
ArrayOf<CAdministration.documents> mSetCommunity_DocRefIds
ArrayOf<CAdministration.documents>* mGetCommunity_DocRefIds
ArrayOf<CAdministration.images> mSetCommunity_ImageRefIds
ArrayOf<CAdministration.images>* mGetCommunity_ImageRefIds
const String& mSetMedia_MediaId
String* mGetMedia_MediaId
const String& mSetMedia_ABN
String* mGetMedia_ABN
const String& mSetMedia_CompanyName
String* mGetMedia_CompanyName
ArrayOf<const String&> mSetMedia_ContactFirstNameList
ArrayOf<String>* mGetMedia_ContactFirstNameList
ArrayOf<const String&> mSetMedia_ContactLastNameList
ArrayOf<String>* mGetMedia_ContactLastNameList
const String& mSetMedia_ResidentialAddress
String* mGetMedia_ResidentialAddress
const String& mSetMedia_PostalAddress
String* mGetMedia_PostalAddress
ArrayOf<const String&> mSetMedia_EmailAddresses
ArrayOf<String>* mGetMedia_EmailAddresses
ArrayOf<Int32> mSetMedia_MobilePhone
ArrayOf<Int32>* mGetMedia_MobilePhone
ArrayOf<Int32> mSetMedia_WorkPhone
ArrayOf<Int32>* mGetMedia_WorkPhone
ArrayOf<const String&> mSetMedia_ContactedWithDetails
ArrayOf<String>* mGetMedia_ContactedWithDetails
CRegister.businessChannelOwner mSetMedia_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMedia_BusinessChannelOwnerId
CAdministration.branch mSetMedia_BranchId
CAdministration.branch* mGetMedia_BranchId
ArrayOf<CAdministration.documents> mSetMedia_DocRefIds
ArrayOf<CAdministration.documents>* mGetMedia_DocRefIds
ArrayOf<CAdministration.images> mSetMedia_ImageRefIds
ArrayOf<CAdministration.images>* mGetMedia_ImageRefIds
const String& mSetTICA_TicaId
String* mGetTICA_TicaId
const String& mSetTICA_TicaUserName
String* mGetTICA_TicaUserName
const String& mSetTICA_TICAPassword
String* mGetTICA_TICAPassword
const String& mSetTICA_TenantFirstName
String* mGetTICA_TenantFirstName
const String& mSetTICA_TenantMiddleInitialOrName
String* mGetTICA_TenantMiddleInitialOrName
const String& mSetTICA_TenantLastName
String* mGetTICA_TenantLastName
const String& mSetTICA_TenantDateOfBirth
String* mGetTICA_TenantDateOfBirth
const String& mSetTICA_ApplicantFirstName
String* mGetTICA_ApplicantFirstName
const String& mSetTICA_ApplicantMiddleInitialOrName
String* mGetTICA_ApplicantMiddleInitialOrName
const String& mSetTICA_ApplicantLastName
String* mGetTICA_ApplicantLastName
const String& mSetTICA_ApplicantDateOfBirth
String* mGetTICA_ApplicantDateOfBirth
CRegister.businessChannelOwner mSetTICA_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTICA_BusinessChannelOwnerId
CAdministration.branch mSetTICA_BranchId
CAdministration.branch* mGetTICA_BranchId
ArrayOf<CAdministration.documents> mSetTICA_DocRefIds
ArrayOf<CAdministration.documents>* mGetTICA_DocRefIds
ArrayOf<CAdministration.images> mSetTICA_ImageRefIds
ArrayOf<CAdministration.images>* mGetTICA_ImageRefIds
CCustomer.applicant mSetTICA_ApplicantId
CCustomer.applicant* mGetTICA_ApplicantId
CProperty.tenant mSetTICA_TenancyId
CProperty.tenant* mGetTICA_TenancyId
const String& mSetAgent_AgentId
String* mGetAgent_AgentId
const String& mSetAgent_ABN
String* mGetAgent_ABN
const String& mSetAgent_AgencyName
String* mGetAgent_AgencyName
const String& mSetAgent_AgentType
String* mGetAgent_AgentType
const String& mSetAgent_DescriptionOfAgency
String* mGetAgent_DescriptionOfAgency
ArrayOf<const String&> mSetAgent_ContactFirstNameList
ArrayOf<String>* mGetAgent_ContactFirstNameList
ArrayOf<const String&> mSetAgent_ContactLastNameList
ArrayOf<String>* mGetAgent_ContactLastNameList
const String& mSetAgent_ResidentialAddress
String* mGetAgent_ResidentialAddress
const String& mSetAgent_PostalAddress
String* mGetAgent_PostalAddress
ArrayOf<const String&> mSetAgent_EmailAddresses
ArrayOf<String>* mGetAgent_EmailAddresses
ArrayOf<Int32> mSetAgent_MobilePhone
ArrayOf<Int32>* mGetAgent_MobilePhone
ArrayOf<Int32> mSetAgent_WorkPhone
ArrayOf<Int32>* mGetAgent_WorkPhone
ArrayOf<const String&> mSetAgent_ContactedWithDetails
ArrayOf<String>* mGetAgent_ContactedWithDetails
ArrayOf<CAdministration.documents> mSetAgent_DocRefIds
ArrayOf<CAdministration.documents>* mGetAgent_DocRefIds
ArrayOf<CAdministration.images> mSetAgent_ImageRefIds
ArrayOf<CAdministration.images>* mGetAgent_ImageRefIds
CStakeholder.agentType mSetAgent_AgentTypeId
CStakeholder.agentType* mGetAgent_AgentTypeId
ArrayOf<CAdministration.businessDirector> mSetAgent_BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetAgent_BusinessDirectorIds
CRegister.businessChannelOwner mSetAgent_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAgent_BusinessChannelOwnerId
const String& mSetAgentType_AgentTypeId
String* mGetAgentType_AgentTypeId
const String& mSetAgentType_AgentType
String* mGetAgentType_AgentType
const String& mSetAgentType_AgentTypeDescription
String* mGetAgentType_AgentTypeDescription
CRegister.businessChannelOwner mSetAgentType_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAgentType_BusinessChannelOwnerId
CAdministration.branch mSetAgentType_BranchId
CAdministration.branch* mGetAgentType_BranchId
CAdministration.department mSetAgentType_DeptId
CAdministration.department* mGetAgentType_DeptId
ArrayOf<CAdministration.service> mSetAgentType_ServiceIds
ArrayOf<CAdministration.service>* mGetAgentType_ServiceIds
ArrayOf<CSupplier.supplierType> mSetAgentType_SupplierTypeIds
ArrayOf<CSupplier.supplierType>* mGetAgentType_SupplierTypeIds
CRegulator.stateBasedRegulator mSetAgentType_StateBasedRegId
CRegulator.stateBasedRegulator* mGetAgentType_StateBasedRegId
CRegulator.nationalRegulator mSetAgentType_NatRegId
CRegulator.nationalRegulator* mGetAgentType_NatRegId
ArrayOf<CAdministration.documents> mSetAgentType_DocRefIds
ArrayOf<CAdministration.documents>* mGetAgentType_DocRefIds
ArrayOf<CAdministration.images> mSetAgentType_ImageRefIds
ArrayOf<CAdministration.images>* mGetAgentType_ImageRefIds
ArrayOf<CAdministration.video> mSetAgentType_VideoRefIds
ArrayOf<CAdministration.video>* mGetAgentType_VideoRefIds
const String& mSetStateLAHAuthority_StateLAHAuthorityId
String* mGetStateLAHAuthority_StateLAHAuthorityId
const String& mSetStateLAHAuthority_AuthorityName
String* mGetStateLAHAuthority_AuthorityName
CHelper.ausState mSetStateLAHAuthority_AusState
CHelper.ausState* mGetStateLAHAuthority_AusState
ArrayOf<const String&> mSetStateLAHAuthority_ContactFirstNameList
ArrayOf<String>* mGetStateLAHAuthority_ContactFirstNameList
ArrayOf<const String&> mSetStateLAHAuthority_ContactLastNameList
ArrayOf<String>* mGetStateLAHAuthority_ContactLastNameList
const String& mSetStateLAHAuthority_StreetAddress
String* mGetStateLAHAuthority_StreetAddress
const String& mSetStateLAHAuthority_PostalAddress
String* mGetStateLAHAuthority_PostalAddress
ArrayOf<const String&> mSetStateLAHAuthority_EmailAddresses
ArrayOf<String>* mGetStateLAHAuthority_EmailAddresses
ArrayOf<Int32> mSetStateLAHAuthority_MobilePhone
ArrayOf<Int32>* mGetStateLAHAuthority_MobilePhone
ArrayOf<Int32> mSetStateLAHAuthority_WorkPhone
ArrayOf<Int32>* mGetStateLAHAuthority_WorkPhone
ArrayOf<const String&> mSetStateLAHAuthority_ContactedWithDetails
ArrayOf<String>* mGetStateLAHAuthority_ContactedWithDetails
CRegister.businessChannelOwner mSetStateLAHAuthority_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStateLAHAuthority_BusinessChannelOwnerId
CAdministration.branch mSetStateLAHAuthority_BranchId
CAdministration.branch* mGetStateLAHAuthority_BranchId
ArrayOf<CAdministration.documents> mSetStateLAHAuthority_DocRefIds
ArrayOf<CAdministration.documents>* mGetStateLAHAuthority_DocRefIds
ArrayOf<CAdministration.images> mSetStateLAHAuthority_ImageRefIds
ArrayOf<CAdministration.images>* mGetStateLAHAuthority_ImageRefIds
CProperty.propertyOwner mSetStateLAHAuthority_PropertyOwnerId
CProperty.propertyOwner* mGetStateLAHAuthority_PropertyOwnerId
const String& mSetStatePublicHousingAuthority_StatePublicHousingAuthorityId
String* mGetStatePublicHousingAuthority_StatePublicHousingAuthorityId
const String& mSetStatePublicHousingAuthority_AuthorityName
String* mGetStatePublicHousingAuthority_AuthorityName
ArrayOf<const String&> mSetStatePublicHousingAuthority_ContactFirstNameList
ArrayOf<String>* mGetStatePublicHousingAuthority_ContactFirstNameList
ArrayOf<const String&> mSetStatePublicHousingAuthority_ContactLastNameList
ArrayOf<String>* mGetStatePublicHousingAuthority_ContactLastNameList
const String& mSetStatePublicHousingAuthority_StreetAddress
String* mGetStatePublicHousingAuthority_StreetAddress
const String& mSetStatePublicHousingAuthority_PostalAddress
String* mGetStatePublicHousingAuthority_PostalAddress
ArrayOf<const String&> mSetStatePublicHousingAuthority_EmailAddresses
ArrayOf<String>* mGetStatePublicHousingAuthority_EmailAddresses
ArrayOf<Int32> mSetStatePublicHousingAuthority_MobilePhone
ArrayOf<Int32>* mGetStatePublicHousingAuthority_MobilePhone
ArrayOf<Int32> mSetStatePublicHousingAuthority_WorkPhone
ArrayOf<Int32>* mGetStatePublicHousingAuthority_WorkPhone
ArrayOf<const String&> mSetStatePublicHousingAuthority_ContactedWithDetails
ArrayOf<String>* mGetStatePublicHousingAuthority_ContactedWithDetails
CHelper.ausState mSetStatePublicHousingAuthority_AusState
CHelper.ausState* mGetStatePublicHousingAuthority_AusState
CAdministration.branch mSetStatePublicHousingAuthority_BranchId
CAdministration.branch* mGetStatePublicHousingAuthority_BranchId
ArrayOf<CAdministration.documents> mSetStatePublicHousingAuthority_DocRefIds
ArrayOf<CAdministration.documents>* mGetStatePublicHousingAuthority_DocRefIds
ArrayOf<CAdministration.images> mSetStatePublicHousingAuthority_ImageRefIds
ArrayOf<CAdministration.images>* mGetStatePublicHousingAuthority_ImageRefIds
CProperty.propertyOwner mSetStatePublicHousingAuthority_PropertyOwnerId
CProperty.propertyOwner* mGetStatePublicHousingAuthority_PropertyOwnerId
CRegister.businessChannelOwner mSetStatePublicHousingAuthority_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStatePublicHousingAuthority_BusinessChannelOwnerId
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

