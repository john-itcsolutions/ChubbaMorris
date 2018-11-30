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
    

   CARAPI SetGovernmentalStakeholder.GovStakeholderId(
     /* [in] */ const String& CStakeholder.govStakeholder.govStakeholderId);

    CARAPI GetGovernmentalStakeholder.GovStakeholderId(
     /* [out] */ String* CStakeholder.govStakeholder.govStakeholderId);


   CARAPI SetGovernmentalStakeholder.DepartmentName(
     /* [in] */ const String& CStakeholder.govStakeholder.departmentName);

    CARAPI GetGovernmentalStakeholder.DepartmentName(
     /* [out] */ String* CStakeholder.govStakeholder.departmentName);


   CARAPI SetGovernmentalStakeholder.GovLevel(
     /* [in] */ CHelper.govLevel CStakeholder.govStakeholder.govLevel);

    CARAPI GetGovernmentalStakeholder.GovLevel(
     /* [out] */ CHelper.govLevel* CStakeholder.govStakeholder.govLevel);


   CARAPI SetGovernmentalStakeholder.StakeholderName(
     /* [in] */ const String& CStakeholder.govStakeholder.stakeholderName);

    CARAPI GetGovernmentalStakeholder.StakeholderName(
     /* [out] */ String* CStakeholder.govStakeholder.stakeholderName);


   CARAPI SetGovernmentalStakeholder.StakeholderDetails(
     /* [in] */ const String& CStakeholder.govStakeholder.stakeholderDetails);

    CARAPI GetGovernmentalStakeholder.StakeholderDetails(
     /* [out] */ String* CStakeholder.govStakeholder.stakeholderDetails);


   CARAPI SetGovernmentalStakeholder.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.govStakeholder.contactFirstNameList);

    CARAPI GetGovernmentalStakeholder.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.govStakeholder.contactFirstNameList);


   CARAPI SetGovernmentalStakeholder.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.govStakeholder.contactLastNameList);

    CARAPI GetGovernmentalStakeholder.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.govStakeholder.contactLastNameList);


   CARAPI SetGovernmentalStakeholder.ResidentialAddress(
     /* [in] */ const String& CStakeholder.govStakeholder.residentialAddress);

    CARAPI GetGovernmentalStakeholder.ResidentialAddress(
     /* [out] */ String* CStakeholder.govStakeholder.residentialAddress);


   CARAPI SetGovernmentalStakeholder.PostalAddress(
     /* [in] */ const String& CStakeholder.govStakeholder.postalAddress);

    CARAPI GetGovernmentalStakeholder.PostalAddress(
     /* [out] */ String* CStakeholder.govStakeholder.postalAddress);


   CARAPI SetGovernmentalStakeholder.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.govStakeholder.emailAddresses);

    CARAPI GetGovernmentalStakeholder.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.govStakeholder.emailAddresses);


   CARAPI SetGovernmentalStakeholder.MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.govStakeholder.mobilePhone);

    CARAPI GetGovernmentalStakeholder.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.govStakeholder.mobilePhone);


   CARAPI SetGovernmentalStakeholder.WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.govStakeholder.workPhone);

    CARAPI GetGovernmentalStakeholder.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.govStakeholder.workPhone);


   CARAPI SetGovernmentalStakeholder.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.govStakeholder.contactedWithDetails);

    CARAPI GetGovernmentalStakeholder.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.govStakeholder.contactedWithDetails);


   CARAPI SetGovernmentalStakeholder.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.govStakeholder.docRefIds);

    CARAPI GetGovernmentalStakeholder.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.govStakeholder.docRefIds);


   CARAPI SetGovernmentalStakeholder.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.govStakeholder.imageRefIds);

    CARAPI GetGovernmentalStakeholder.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.govStakeholder.imageRefIds);


   CARAPI SetGovernmentalStakeholder.BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CStakeholder.govStakeholder.businessDirectorIds);

    CARAPI GetGovernmentalStakeholder.BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CStakeholder.govStakeholder.businessDirectorIds);


   CARAPI SetGovernmentalStakeholder.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.govStakeholder.businessChannelOwnerId);

    CARAPI GetGovernmentalStakeholder.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.govStakeholder.businessChannelOwnerId);


   CARAPI SetNonGovernmentalStakeholder.NonGovStakeholderId(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.nonGovStakeholderId);

    CARAPI GetNonGovernmentalStakeholder.NonGovStakeholderId(
     /* [out] */ String* CStakeholder.nonGovStakeholder.nonGovStakeholderId);


   CARAPI SetNonGovernmentalStakeholder.ABN(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.aBN);

    CARAPI GetNonGovernmentalStakeholder.ABN(
     /* [out] */ String* CStakeholder.nonGovStakeholder.aBN);


   CARAPI SetNonGovernmentalStakeholder.StakeholderName(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.stakeholderName);

    CARAPI GetNonGovernmentalStakeholder.StakeholderName(
     /* [out] */ String* CStakeholder.nonGovStakeholder.stakeholderName);


   CARAPI SetNonGovernmentalStakeholder.StakeholderDetails(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.stakeholderDetails);

    CARAPI GetNonGovernmentalStakeholder.StakeholderDetails(
     /* [out] */ String* CStakeholder.nonGovStakeholder.stakeholderDetails);


   CARAPI SetNonGovernmentalStakeholder.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.nonGovStakeholder.contactFirstNameList);

    CARAPI GetNonGovernmentalStakeholder.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.nonGovStakeholder.contactFirstNameList);


   CARAPI SetNonGovernmentalStakeholder.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.nonGovStakeholder.contactLastNameList);

    CARAPI GetNonGovernmentalStakeholder.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.nonGovStakeholder.contactLastNameList);


   CARAPI SetNonGovernmentalStakeholder.ResidentialAddress(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.residentialAddress);

    CARAPI GetNonGovernmentalStakeholder.ResidentialAddress(
     /* [out] */ String* CStakeholder.nonGovStakeholder.residentialAddress);


   CARAPI SetNonGovernmentalStakeholder.PostalAddress(
     /* [in] */ const String& CStakeholder.nonGovStakeholder.postalAddress);

    CARAPI GetNonGovernmentalStakeholder.PostalAddress(
     /* [out] */ String* CStakeholder.nonGovStakeholder.postalAddress);


   CARAPI SetNonGovernmentalStakeholder.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.nonGovStakeholder.emailAddresses);

    CARAPI GetNonGovernmentalStakeholder.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.nonGovStakeholder.emailAddresses);


   CARAPI SetNonGovernmentalStakeholder.MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.nonGovStakeholder.mobilePhone);

    CARAPI GetNonGovernmentalStakeholder.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.nonGovStakeholder.mobilePhone);


   CARAPI SetNonGovernmentalStakeholder.WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.nonGovStakeholder.workPhone);

    CARAPI GetNonGovernmentalStakeholder.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.nonGovStakeholder.workPhone);


   CARAPI SetNonGovernmentalStakeholder.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.nonGovStakeholder.contactedWithDetails);

    CARAPI GetNonGovernmentalStakeholder.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.nonGovStakeholder.contactedWithDetails);


   CARAPI SetNonGovernmentalStakeholder.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.nonGovStakeholder.docRefIds);

    CARAPI GetNonGovernmentalStakeholder.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.nonGovStakeholder.docRefIds);


   CARAPI SetNonGovernmentalStakeholder.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.nonGovStakeholder.imageRefIds);

    CARAPI GetNonGovernmentalStakeholder.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.nonGovStakeholder.imageRefIds);


   CARAPI SetNonGovernmentalStakeholder.BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CStakeholder.nonGovStakeholder.businessDirectorIds);

    CARAPI GetNonGovernmentalStakeholder.BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CStakeholder.nonGovStakeholder.businessDirectorIds);


   CARAPI SetNonGovernmentalStakeholder.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.nonGovStakeholder.businessChannelOwnerId);

    CARAPI GetNonGovernmentalStakeholder.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.nonGovStakeholder.businessChannelOwnerId);


   CARAPI SetPartner.PartnerId(
     /* [in] */ const String& CStakeholder.partner.partnerId);

    CARAPI GetPartner.PartnerId(
     /* [out] */ String* CStakeholder.partner.partnerId);


   CARAPI SetPartner.ABN(
     /* [in] */ const String& CStakeholder.partner.aBN);

    CARAPI GetPartner.ABN(
     /* [out] */ String* CStakeholder.partner.aBN);


   CARAPI SetPartner.PartnerName(
     /* [in] */ const String& CStakeholder.partner.partnerName);

    CARAPI GetPartner.PartnerName(
     /* [out] */ String* CStakeholder.partner.partnerName);


   CARAPI SetPartner.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.partner.contactFirstNameList);

    CARAPI GetPartner.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.partner.contactFirstNameList);


   CARAPI SetPartner.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.partner.contactLastNameList);

    CARAPI GetPartner.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.partner.contactLastNameList);


   CARAPI SetPartner.ResidentialAddress(
     /* [in] */ const String& CStakeholder.partner.residentialAddress);

    CARAPI GetPartner.ResidentialAddress(
     /* [out] */ String* CStakeholder.partner.residentialAddress);


   CARAPI SetPartner.PostalAddress(
     /* [in] */ const String& CStakeholder.partner.postalAddress);

    CARAPI GetPartner.PostalAddress(
     /* [out] */ String* CStakeholder.partner.postalAddress);


   CARAPI SetPartner.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.partner.emailAddresses);

    CARAPI GetPartner.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.partner.emailAddresses);


   CARAPI SetPartner.MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.partner.mobilePhone);

    CARAPI GetPartner.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.partner.mobilePhone);


   CARAPI SetPartner.WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.partner.workPhone);

    CARAPI GetPartner.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.partner.workPhone);


   CARAPI SetPartner.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.partner.contactedWithDetails);

    CARAPI GetPartner.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.partner.contactedWithDetails);


   CARAPI SetPartner.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.partner.businessChannelOwnerId);

    CARAPI GetPartner.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.partner.businessChannelOwnerId);


   CARAPI SetPartner.BranchId(
     /* [in] */ CAdministration.branch CStakeholder.partner.branchId);

    CARAPI GetPartner.BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.partner.branchId);


   CARAPI SetPartner.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.partner.docRefIds);

    CARAPI GetPartner.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.partner.docRefIds);


   CARAPI SetPartner.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.partner.imageRefIds);

    CARAPI GetPartner.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.partner.imageRefIds);


   CARAPI SetCommunity.CommunityId(
     /* [in] */ const String& CStakeholder.community.communityId);

    CARAPI GetCommunity.CommunityId(
     /* [out] */ String* CStakeholder.community.communityId);


   CARAPI SetCommunity.GroupName(
     /* [in] */ const String& CStakeholder.community.groupName);

    CARAPI GetCommunity.GroupName(
     /* [out] */ String* CStakeholder.community.groupName);


   CARAPI SetCommunity.FirstName(
     /* [in] */ const String& CStakeholder.community.firstName);

    CARAPI GetCommunity.FirstName(
     /* [out] */ String* CStakeholder.community.firstName);


   CARAPI SetCommunity.LastName(
     /* [in] */ const String& CStakeholder.community.lastName);

    CARAPI GetCommunity.LastName(
     /* [out] */ String* CStakeholder.community.lastName);


   CARAPI SetCommunity.ResidentialAddress(
     /* [in] */ const String& CStakeholder.community.residentialAddress);

    CARAPI GetCommunity.ResidentialAddress(
     /* [out] */ String* CStakeholder.community.residentialAddress);


   CARAPI SetCommunity.PostalAddress(
     /* [in] */ const String& CStakeholder.community.postalAddress);

    CARAPI GetCommunity.PostalAddress(
     /* [out] */ String* CStakeholder.community.postalAddress);


   CARAPI SetCommunity.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.community.emailAddresses);

    CARAPI GetCommunity.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.community.emailAddresses);


   CARAPI SetCommunity.MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.community.mobilePhone);

    CARAPI GetCommunity.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.community.mobilePhone);


   CARAPI SetCommunity.HomePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.community.homePhone);

    CARAPI GetCommunity.HomePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.community.homePhone);


   CARAPI SetCommunity.WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.community.workPhone);

    CARAPI GetCommunity.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.community.workPhone);


   CARAPI SetCommunity.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.community.contactedWithDetails);

    CARAPI GetCommunity.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.community.contactedWithDetails);


   CARAPI SetCommunity.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.community.businessChannelOwnerId);

    CARAPI GetCommunity.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.community.businessChannelOwnerId);


   CARAPI SetCommunity.BranchId(
     /* [in] */ CAdministration.branch CStakeholder.community.branchId);

    CARAPI GetCommunity.BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.community.branchId);


   CARAPI SetCommunity.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.community.docRefIds);

    CARAPI GetCommunity.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.community.docRefIds);


   CARAPI SetCommunity.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.community.imageRefIds);

    CARAPI GetCommunity.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.community.imageRefIds);


   CARAPI SetMedia.MediaId(
     /* [in] */ const String& CStakeholder.media.mediaId);

    CARAPI GetMedia.MediaId(
     /* [out] */ String* CStakeholder.media.mediaId);


   CARAPI SetMedia.ABN(
     /* [in] */ const String& CStakeholder.media.aBN);

    CARAPI GetMedia.ABN(
     /* [out] */ String* CStakeholder.media.aBN);


   CARAPI SetMedia.CompanyName(
     /* [in] */ const String& CStakeholder.media.companyName);

    CARAPI GetMedia.CompanyName(
     /* [out] */ String* CStakeholder.media.companyName);


   CARAPI SetMedia.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.media.contactFirstNameList);

    CARAPI GetMedia.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.media.contactFirstNameList);


   CARAPI SetMedia.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.media.contactLastNameList);

    CARAPI GetMedia.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.media.contactLastNameList);


   CARAPI SetMedia.ResidentialAddress(
     /* [in] */ const String& CStakeholder.media.residentialAddress);

    CARAPI GetMedia.ResidentialAddress(
     /* [out] */ String* CStakeholder.media.residentialAddress);


   CARAPI SetMedia.PostalAddress(
     /* [in] */ const String& CStakeholder.media.postalAddress);

    CARAPI GetMedia.PostalAddress(
     /* [out] */ String* CStakeholder.media.postalAddress);


   CARAPI SetMedia.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.media.emailAddresses);

    CARAPI GetMedia.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.media.emailAddresses);


   CARAPI SetMedia.MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.media.mobilePhone);

    CARAPI GetMedia.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.media.mobilePhone);


   CARAPI SetMedia.WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.media.workPhone);

    CARAPI GetMedia.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.media.workPhone);


   CARAPI SetMedia.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.media.contactedWithDetails);

    CARAPI GetMedia.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.media.contactedWithDetails);


   CARAPI SetMedia.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.media.businessChannelOwnerId);

    CARAPI GetMedia.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.media.businessChannelOwnerId);


   CARAPI SetMedia.BranchId(
     /* [in] */ CAdministration.branch CStakeholder.media.branchId);

    CARAPI GetMedia.BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.media.branchId);


   CARAPI SetMedia.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.media.docRefIds);

    CARAPI GetMedia.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.media.docRefIds);


   CARAPI SetMedia.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.media.imageRefIds);

    CARAPI GetMedia.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.media.imageRefIds);


   CARAPI SetTICA.TicaId(
     /* [in] */ const String& CStakeholder.tICA.ticaId);

    CARAPI GetTICA.TicaId(
     /* [out] */ String* CStakeholder.tICA.ticaId);


   CARAPI SetTICA.TicaUserName(
     /* [in] */ const String& CStakeholder.tICA.ticaUserName);

    CARAPI GetTICA.TicaUserName(
     /* [out] */ String* CStakeholder.tICA.ticaUserName);


   CARAPI SetTICA.TICAPassword(
     /* [in] */ const String& CStakeholder.tICA.tICAPassword);

    CARAPI GetTICA.TICAPassword(
     /* [out] */ String* CStakeholder.tICA.tICAPassword);


   CARAPI SetTICA.TenantFirstName(
     /* [in] */ const String& CStakeholder.tICA.tenantFirstName);

    CARAPI GetTICA.TenantFirstName(
     /* [out] */ String* CStakeholder.tICA.tenantFirstName);


   CARAPI SetTICA.TenantMiddleInitialOrName(
     /* [in] */ const String& CStakeholder.tICA.tenantMiddleInitialOrName);

    CARAPI GetTICA.TenantMiddleInitialOrName(
     /* [out] */ String* CStakeholder.tICA.tenantMiddleInitialOrName);


   CARAPI SetTICA.TenantLastName(
     /* [in] */ const String& CStakeholder.tICA.tenantLastName);

    CARAPI GetTICA.TenantLastName(
     /* [out] */ String* CStakeholder.tICA.tenantLastName);


   CARAPI SetTICA.TenantDateOfBirth(
     /* [in] */ const String& CStakeholder.tICA.tenantDateOfBirth);

    CARAPI GetTICA.TenantDateOfBirth(
     /* [out] */ String* CStakeholder.tICA.tenantDateOfBirth);


   CARAPI SetTICA.ApplicantFirstName(
     /* [in] */ const String& CStakeholder.tICA.applicantFirstName);

    CARAPI GetTICA.ApplicantFirstName(
     /* [out] */ String* CStakeholder.tICA.applicantFirstName);


   CARAPI SetTICA.ApplicantMiddleInitialOrName(
     /* [in] */ const String& CStakeholder.tICA.applicantMiddleInitialOrName);

    CARAPI GetTICA.ApplicantMiddleInitialOrName(
     /* [out] */ String* CStakeholder.tICA.applicantMiddleInitialOrName);


   CARAPI SetTICA.ApplicantLastName(
     /* [in] */ const String& CStakeholder.tICA.applicantLastName);

    CARAPI GetTICA.ApplicantLastName(
     /* [out] */ String* CStakeholder.tICA.applicantLastName);


   CARAPI SetTICA.ApplicantDateOfBirth(
     /* [in] */ const String& CStakeholder.tICA.applicantDateOfBirth);

    CARAPI GetTICA.ApplicantDateOfBirth(
     /* [out] */ String* CStakeholder.tICA.applicantDateOfBirth);


   CARAPI SetTICA.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.tICA.businessChannelOwnerId);

    CARAPI GetTICA.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.tICA.businessChannelOwnerId);


   CARAPI SetTICA.BranchId(
     /* [in] */ CAdministration.branch CStakeholder.tICA.branchId);

    CARAPI GetTICA.BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.tICA.branchId);


   CARAPI SetTICA.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.tICA.docRefIds);

    CARAPI GetTICA.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.tICA.docRefIds);


   CARAPI SetTICA.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.tICA.imageRefIds);

    CARAPI GetTICA.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.tICA.imageRefIds);


   CARAPI SetTICA.ApplicantId(
     /* [in] */ CCustomer.applicant CStakeholder.tICA.applicantId);

    CARAPI GetTICA.ApplicantId(
     /* [out] */ CCustomer.applicant* CStakeholder.tICA.applicantId);


   CARAPI SetTICA.TenancyId(
     /* [in] */ CProperty.tenant CStakeholder.tICA.tenancyId);

    CARAPI GetTICA.TenancyId(
     /* [out] */ CProperty.tenant* CStakeholder.tICA.tenancyId);


   CARAPI SetAgent.AgentId(
     /* [in] */ const String& CStakeholder.agent.agentId);

    CARAPI GetAgent.AgentId(
     /* [out] */ String* CStakeholder.agent.agentId);


   CARAPI SetAgent.ABN(
     /* [in] */ const String& CStakeholder.agent.aBN);

    CARAPI GetAgent.ABN(
     /* [out] */ String* CStakeholder.agent.aBN);


   CARAPI SetAgent.AgencyName(
     /* [in] */ const String& CStakeholder.agent.agencyName);

    CARAPI GetAgent.AgencyName(
     /* [out] */ String* CStakeholder.agent.agencyName);


   CARAPI SetAgent.AgentType(
     /* [in] */ const String& CStakeholder.agent.agentType);

    CARAPI GetAgent.AgentType(
     /* [out] */ String* CStakeholder.agent.agentType);


   CARAPI SetAgent.DescriptionOfAgency(
     /* [in] */ const String& CStakeholder.agent.descriptionOfAgency);

    CARAPI GetAgent.DescriptionOfAgency(
     /* [out] */ String* CStakeholder.agent.descriptionOfAgency);


   CARAPI SetAgent.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.agent.contactFirstNameList);

    CARAPI GetAgent.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.agent.contactFirstNameList);


   CARAPI SetAgent.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.agent.contactLastNameList);

    CARAPI GetAgent.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.agent.contactLastNameList);


   CARAPI SetAgent.ResidentialAddress(
     /* [in] */ const String& CStakeholder.agent.residentialAddress);

    CARAPI GetAgent.ResidentialAddress(
     /* [out] */ String* CStakeholder.agent.residentialAddress);


   CARAPI SetAgent.PostalAddress(
     /* [in] */ const String& CStakeholder.agent.postalAddress);

    CARAPI GetAgent.PostalAddress(
     /* [out] */ String* CStakeholder.agent.postalAddress);


   CARAPI SetAgent.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.agent.emailAddresses);

    CARAPI GetAgent.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.agent.emailAddresses);


   CARAPI SetAgent.MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.agent.mobilePhone);

    CARAPI GetAgent.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.agent.mobilePhone);


   CARAPI SetAgent.WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.agent.workPhone);

    CARAPI GetAgent.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.agent.workPhone);


   CARAPI SetAgent.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.agent.contactedWithDetails);

    CARAPI GetAgent.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.agent.contactedWithDetails);


   CARAPI SetAgent.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.agent.docRefIds);

    CARAPI GetAgent.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.agent.docRefIds);


   CARAPI SetAgent.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.agent.imageRefIds);

    CARAPI GetAgent.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.agent.imageRefIds);


   CARAPI SetAgent.AgentTypeId(
     /* [in] */ CStakeholder.agentType CStakeholder.agent.agentTypeId);

    CARAPI GetAgent.AgentTypeId(
     /* [out] */ CStakeholder.agentType* CStakeholder.agent.agentTypeId);


   CARAPI SetAgent.BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CStakeholder.agent.businessDirectorIds);

    CARAPI GetAgent.BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CStakeholder.agent.businessDirectorIds);


   CARAPI SetAgent.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.agent.businessChannelOwnerId);

    CARAPI GetAgent.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.agent.businessChannelOwnerId);


   CARAPI SetAgentType.AgentTypeId(
     /* [in] */ const String& CStakeholder.agentType.agentTypeId);

    CARAPI GetAgentType.AgentTypeId(
     /* [out] */ String* CStakeholder.agentType.agentTypeId);


   CARAPI SetAgentType.AgentType(
     /* [in] */ const String& CStakeholder.agentType.agentType);

    CARAPI GetAgentType.AgentType(
     /* [out] */ String* CStakeholder.agentType.agentType);


   CARAPI SetAgentType.AgentTypeDescription(
     /* [in] */ const String& CStakeholder.agentType.agentTypeDescription);

    CARAPI GetAgentType.AgentTypeDescription(
     /* [out] */ String* CStakeholder.agentType.agentTypeDescription);


   CARAPI SetAgentType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.agentType.businessChannelOwnerId);

    CARAPI GetAgentType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.agentType.businessChannelOwnerId);


   CARAPI SetAgentType.BranchId(
     /* [in] */ CAdministration.branch CStakeholder.agentType.branchId);

    CARAPI GetAgentType.BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.agentType.branchId);


   CARAPI SetAgentType.DeptId(
     /* [in] */ CAdministration.department CStakeholder.agentType.deptId);

    CARAPI GetAgentType.DeptId(
     /* [out] */ CAdministration.department* CStakeholder.agentType.deptId);


   CARAPI SetAgentType.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CStakeholder.agentType.serviceIds);

    CARAPI GetAgentType.ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CStakeholder.agentType.serviceIds);


   CARAPI SetAgentType.SupplierTypeIds(
     /* [in] */ ArrayOf<CSupplier.supplierType> CStakeholder.agentType.supplierTypeIds);

    CARAPI GetAgentType.SupplierTypeIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplierType>* CStakeholder.agentType.supplierTypeIds);


   CARAPI SetAgentType.StateBasedRegId(
     /* [in] */ CRegulator.stateBasedRegulator CStakeholder.agentType.stateBasedRegId);

    CARAPI GetAgentType.StateBasedRegId(
     /* [out] */ CRegulator.stateBasedRegulator* CStakeholder.agentType.stateBasedRegId);


   CARAPI SetAgentType.NatRegId(
     /* [in] */ CRegulator.nationalRegulator CStakeholder.agentType.natRegId);

    CARAPI GetAgentType.NatRegId(
     /* [out] */ CRegulator.nationalRegulator* CStakeholder.agentType.natRegId);


   CARAPI SetAgentType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.agentType.docRefIds);

    CARAPI GetAgentType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.agentType.docRefIds);


   CARAPI SetAgentType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.agentType.imageRefIds);

    CARAPI GetAgentType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.agentType.imageRefIds);


   CARAPI SetAgentType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CStakeholder.agentType.videoRefIds);

    CARAPI GetAgentType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CStakeholder.agentType.videoRefIds);


   CARAPI SetStateLAHAuthority.StateLAHAuthorityId(
     /* [in] */ const String& CStakeholder.stateLAHAuthority.stateLAHAuthorityId);

    CARAPI GetStateLAHAuthority.StateLAHAuthorityId(
     /* [out] */ String* CStakeholder.stateLAHAuthority.stateLAHAuthorityId);


   CARAPI SetStateLAHAuthority.AuthorityName(
     /* [in] */ const String& CStakeholder.stateLAHAuthority.authorityName);

    CARAPI GetStateLAHAuthority.AuthorityName(
     /* [out] */ String* CStakeholder.stateLAHAuthority.authorityName);


   CARAPI SetStateLAHAuthority.AusState(
     /* [in] */ CHelper.ausState CStakeholder.stateLAHAuthority.ausState);

    CARAPI GetStateLAHAuthority.AusState(
     /* [out] */ CHelper.ausState* CStakeholder.stateLAHAuthority.ausState);


   CARAPI SetStateLAHAuthority.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.stateLAHAuthority.contactFirstNameList);

    CARAPI GetStateLAHAuthority.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.stateLAHAuthority.contactFirstNameList);


   CARAPI SetStateLAHAuthority.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.stateLAHAuthority.contactLastNameList);

    CARAPI GetStateLAHAuthority.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.stateLAHAuthority.contactLastNameList);


   CARAPI SetStateLAHAuthority.StreetAddress(
     /* [in] */ const String& CStakeholder.stateLAHAuthority.streetAddress);

    CARAPI GetStateLAHAuthority.StreetAddress(
     /* [out] */ String* CStakeholder.stateLAHAuthority.streetAddress);


   CARAPI SetStateLAHAuthority.PostalAddress(
     /* [in] */ const String& CStakeholder.stateLAHAuthority.postalAddress);

    CARAPI GetStateLAHAuthority.PostalAddress(
     /* [out] */ String* CStakeholder.stateLAHAuthority.postalAddress);


   CARAPI SetStateLAHAuthority.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.stateLAHAuthority.emailAddresses);

    CARAPI GetStateLAHAuthority.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.stateLAHAuthority.emailAddresses);


   CARAPI SetStateLAHAuthority.MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.stateLAHAuthority.mobilePhone);

    CARAPI GetStateLAHAuthority.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.stateLAHAuthority.mobilePhone);


   CARAPI SetStateLAHAuthority.WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.stateLAHAuthority.workPhone);

    CARAPI GetStateLAHAuthority.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.stateLAHAuthority.workPhone);


   CARAPI SetStateLAHAuthority.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.stateLAHAuthority.contactedWithDetails);

    CARAPI GetStateLAHAuthority.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.stateLAHAuthority.contactedWithDetails);


   CARAPI SetStateLAHAuthority.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.stateLAHAuthority.businessChannelOwnerId);

    CARAPI GetStateLAHAuthority.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.stateLAHAuthority.businessChannelOwnerId);


   CARAPI SetStateLAHAuthority.BranchId(
     /* [in] */ CAdministration.branch CStakeholder.stateLAHAuthority.branchId);

    CARAPI GetStateLAHAuthority.BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.stateLAHAuthority.branchId);


   CARAPI SetStateLAHAuthority.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.stateLAHAuthority.docRefIds);

    CARAPI GetStateLAHAuthority.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.stateLAHAuthority.docRefIds);


   CARAPI SetStateLAHAuthority.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.stateLAHAuthority.imageRefIds);

    CARAPI GetStateLAHAuthority.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.stateLAHAuthority.imageRefIds);


   CARAPI SetStateLAHAuthority.PropertyOwnerId(
     /* [in] */ CProperty.propertyOwner CStakeholder.stateLAHAuthority.propertyOwnerId);

    CARAPI GetStateLAHAuthority.PropertyOwnerId(
     /* [out] */ CProperty.propertyOwner* CStakeholder.stateLAHAuthority.propertyOwnerId);


   CARAPI SetStatePublicHousingAuthority.StatePublicHousingAuthorityId(
     /* [in] */ const String& CStakeholder.statePublicHousingAuthority.statePublicHousingAuthorityId);

    CARAPI GetStatePublicHousingAuthority.StatePublicHousingAuthorityId(
     /* [out] */ String* CStakeholder.statePublicHousingAuthority.statePublicHousingAuthorityId);


   CARAPI SetStatePublicHousingAuthority.AuthorityName(
     /* [in] */ const String& CStakeholder.statePublicHousingAuthority.authorityName);

    CARAPI GetStatePublicHousingAuthority.AuthorityName(
     /* [out] */ String* CStakeholder.statePublicHousingAuthority.authorityName);


   CARAPI SetStatePublicHousingAuthority.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.statePublicHousingAuthority.contactFirstNameList);

    CARAPI GetStatePublicHousingAuthority.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.statePublicHousingAuthority.contactFirstNameList);


   CARAPI SetStatePublicHousingAuthority.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CStakeholder.statePublicHousingAuthority.contactLastNameList);

    CARAPI GetStatePublicHousingAuthority.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.statePublicHousingAuthority.contactLastNameList);


   CARAPI SetStatePublicHousingAuthority.StreetAddress(
     /* [in] */ const String& CStakeholder.statePublicHousingAuthority.streetAddress);

    CARAPI GetStatePublicHousingAuthority.StreetAddress(
     /* [out] */ String* CStakeholder.statePublicHousingAuthority.streetAddress);


   CARAPI SetStatePublicHousingAuthority.PostalAddress(
     /* [in] */ const String& CStakeholder.statePublicHousingAuthority.postalAddress);

    CARAPI GetStatePublicHousingAuthority.PostalAddress(
     /* [out] */ String* CStakeholder.statePublicHousingAuthority.postalAddress);


   CARAPI SetStatePublicHousingAuthority.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CStakeholder.statePublicHousingAuthority.emailAddresses);

    CARAPI GetStatePublicHousingAuthority.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.statePublicHousingAuthority.emailAddresses);


   CARAPI SetStatePublicHousingAuthority.MobilePhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.statePublicHousingAuthority.mobilePhone);

    CARAPI GetStatePublicHousingAuthority.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.statePublicHousingAuthority.mobilePhone);


   CARAPI SetStatePublicHousingAuthority.WorkPhone(
     /* [in] */ ArrayOf<Int32> CStakeholder.statePublicHousingAuthority.workPhone);

    CARAPI GetStatePublicHousingAuthority.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CStakeholder.statePublicHousingAuthority.workPhone);


   CARAPI SetStatePublicHousingAuthority.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CStakeholder.statePublicHousingAuthority.contactedWithDetails);

    CARAPI GetStatePublicHousingAuthority.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CStakeholder.statePublicHousingAuthority.contactedWithDetails);


   CARAPI SetStatePublicHousingAuthority.AusState(
     /* [in] */ CHelper.ausState CStakeholder.statePublicHousingAuthority.ausState);

    CARAPI GetStatePublicHousingAuthority.AusState(
     /* [out] */ CHelper.ausState* CStakeholder.statePublicHousingAuthority.ausState);


   CARAPI SetStatePublicHousingAuthority.BranchId(
     /* [in] */ CAdministration.branch CStakeholder.statePublicHousingAuthority.branchId);

    CARAPI GetStatePublicHousingAuthority.BranchId(
     /* [out] */ CAdministration.branch* CStakeholder.statePublicHousingAuthority.branchId);


   CARAPI SetStatePublicHousingAuthority.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CStakeholder.statePublicHousingAuthority.docRefIds);

    CARAPI GetStatePublicHousingAuthority.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CStakeholder.statePublicHousingAuthority.docRefIds);


   CARAPI SetStatePublicHousingAuthority.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CStakeholder.statePublicHousingAuthority.imageRefIds);

    CARAPI GetStatePublicHousingAuthority.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CStakeholder.statePublicHousingAuthority.imageRefIds);


   CARAPI SetStatePublicHousingAuthority.PropertyOwnerId(
     /* [in] */ CProperty.propertyOwner CStakeholder.statePublicHousingAuthority.propertyOwnerId);

    CARAPI GetStatePublicHousingAuthority.PropertyOwnerId(
     /* [out] */ CProperty.propertyOwner* CStakeholder.statePublicHousingAuthority.propertyOwnerId);


   CARAPI SetStatePublicHousingAuthority.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CStakeholder.statePublicHousingAuthority.businessChannelOwnerId);

    CARAPI GetStatePublicHousingAuthority.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CStakeholder.statePublicHousingAuthority.businessChannelOwnerId);



protected:
    // Member variables
const String& mSetGovernmentalStakeholder.GovStakeholderId
String* mGetGovernmentalStakeholder.GovStakeholderId
const String& mSetGovernmentalStakeholder.DepartmentName
String* mGetGovernmentalStakeholder.DepartmentName
CHelper.govLevel mSetGovernmentalStakeholder.GovLevel
CHelper.govLevel* mGetGovernmentalStakeholder.GovLevel
const String& mSetGovernmentalStakeholder.StakeholderName
String* mGetGovernmentalStakeholder.StakeholderName
const String& mSetGovernmentalStakeholder.StakeholderDetails
String* mGetGovernmentalStakeholder.StakeholderDetails
ArrayOf<const String&> mSetGovernmentalStakeholder.ContactFirstNameList
ArrayOf<String>* mGetGovernmentalStakeholder.ContactFirstNameList
ArrayOf<const String&> mSetGovernmentalStakeholder.ContactLastNameList
ArrayOf<String>* mGetGovernmentalStakeholder.ContactLastNameList
const String& mSetGovernmentalStakeholder.ResidentialAddress
String* mGetGovernmentalStakeholder.ResidentialAddress
const String& mSetGovernmentalStakeholder.PostalAddress
String* mGetGovernmentalStakeholder.PostalAddress
ArrayOf<const String&> mSetGovernmentalStakeholder.EmailAddresses
ArrayOf<String>* mGetGovernmentalStakeholder.EmailAddresses
ArrayOf<Int32> mSetGovernmentalStakeholder.MobilePhone
ArrayOf<Int32>* mGetGovernmentalStakeholder.MobilePhone
ArrayOf<Int32> mSetGovernmentalStakeholder.WorkPhone
ArrayOf<Int32>* mGetGovernmentalStakeholder.WorkPhone
ArrayOf<const String&> mSetGovernmentalStakeholder.ContactedWithDetails
ArrayOf<String>* mGetGovernmentalStakeholder.ContactedWithDetails
ArrayOf<CAdministration.documents> mSetGovernmentalStakeholder.DocRefIds
ArrayOf<CAdministration.documents>* mGetGovernmentalStakeholder.DocRefIds
ArrayOf<CAdministration.images> mSetGovernmentalStakeholder.ImageRefIds
ArrayOf<CAdministration.images>* mGetGovernmentalStakeholder.ImageRefIds
ArrayOf<CAdministration.businessDirector> mSetGovernmentalStakeholder.BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetGovernmentalStakeholder.BusinessDirectorIds
CRegister.businessChannelOwner mSetGovernmentalStakeholder.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetGovernmentalStakeholder.BusinessChannelOwnerId
const String& mSetNonGovernmentalStakeholder.NonGovStakeholderId
String* mGetNonGovernmentalStakeholder.NonGovStakeholderId
const String& mSetNonGovernmentalStakeholder.ABN
String* mGetNonGovernmentalStakeholder.ABN
const String& mSetNonGovernmentalStakeholder.StakeholderName
String* mGetNonGovernmentalStakeholder.StakeholderName
const String& mSetNonGovernmentalStakeholder.StakeholderDetails
String* mGetNonGovernmentalStakeholder.StakeholderDetails
ArrayOf<const String&> mSetNonGovernmentalStakeholder.ContactFirstNameList
ArrayOf<String>* mGetNonGovernmentalStakeholder.ContactFirstNameList
ArrayOf<const String&> mSetNonGovernmentalStakeholder.ContactLastNameList
ArrayOf<String>* mGetNonGovernmentalStakeholder.ContactLastNameList
const String& mSetNonGovernmentalStakeholder.ResidentialAddress
String* mGetNonGovernmentalStakeholder.ResidentialAddress
const String& mSetNonGovernmentalStakeholder.PostalAddress
String* mGetNonGovernmentalStakeholder.PostalAddress
ArrayOf<const String&> mSetNonGovernmentalStakeholder.EmailAddresses
ArrayOf<String>* mGetNonGovernmentalStakeholder.EmailAddresses
ArrayOf<Int32> mSetNonGovernmentalStakeholder.MobilePhone
ArrayOf<Int32>* mGetNonGovernmentalStakeholder.MobilePhone
ArrayOf<Int32> mSetNonGovernmentalStakeholder.WorkPhone
ArrayOf<Int32>* mGetNonGovernmentalStakeholder.WorkPhone
ArrayOf<const String&> mSetNonGovernmentalStakeholder.ContactedWithDetails
ArrayOf<String>* mGetNonGovernmentalStakeholder.ContactedWithDetails
ArrayOf<CAdministration.documents> mSetNonGovernmentalStakeholder.DocRefIds
ArrayOf<CAdministration.documents>* mGetNonGovernmentalStakeholder.DocRefIds
ArrayOf<CAdministration.images> mSetNonGovernmentalStakeholder.ImageRefIds
ArrayOf<CAdministration.images>* mGetNonGovernmentalStakeholder.ImageRefIds
ArrayOf<CAdministration.businessDirector> mSetNonGovernmentalStakeholder.BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetNonGovernmentalStakeholder.BusinessDirectorIds
CRegister.businessChannelOwner mSetNonGovernmentalStakeholder.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetNonGovernmentalStakeholder.BusinessChannelOwnerId
const String& mSetPartner.PartnerId
String* mGetPartner.PartnerId
const String& mSetPartner.ABN
String* mGetPartner.ABN
const String& mSetPartner.PartnerName
String* mGetPartner.PartnerName
ArrayOf<const String&> mSetPartner.ContactFirstNameList
ArrayOf<String>* mGetPartner.ContactFirstNameList
ArrayOf<const String&> mSetPartner.ContactLastNameList
ArrayOf<String>* mGetPartner.ContactLastNameList
const String& mSetPartner.ResidentialAddress
String* mGetPartner.ResidentialAddress
const String& mSetPartner.PostalAddress
String* mGetPartner.PostalAddress
ArrayOf<const String&> mSetPartner.EmailAddresses
ArrayOf<String>* mGetPartner.EmailAddresses
ArrayOf<Int32> mSetPartner.MobilePhone
ArrayOf<Int32>* mGetPartner.MobilePhone
ArrayOf<Int32> mSetPartner.WorkPhone
ArrayOf<Int32>* mGetPartner.WorkPhone
ArrayOf<const String&> mSetPartner.ContactedWithDetails
ArrayOf<String>* mGetPartner.ContactedWithDetails
CRegister.businessChannelOwner mSetPartner.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPartner.BusinessChannelOwnerId
CAdministration.branch mSetPartner.BranchId
CAdministration.branch* mGetPartner.BranchId
ArrayOf<CAdministration.documents> mSetPartner.DocRefIds
ArrayOf<CAdministration.documents>* mGetPartner.DocRefIds
ArrayOf<CAdministration.images> mSetPartner.ImageRefIds
ArrayOf<CAdministration.images>* mGetPartner.ImageRefIds
const String& mSetCommunity.CommunityId
String* mGetCommunity.CommunityId
const String& mSetCommunity.GroupName
String* mGetCommunity.GroupName
const String& mSetCommunity.FirstName
String* mGetCommunity.FirstName
const String& mSetCommunity.LastName
String* mGetCommunity.LastName
const String& mSetCommunity.ResidentialAddress
String* mGetCommunity.ResidentialAddress
const String& mSetCommunity.PostalAddress
String* mGetCommunity.PostalAddress
ArrayOf<const String&> mSetCommunity.EmailAddresses
ArrayOf<String>* mGetCommunity.EmailAddresses
ArrayOf<Int32> mSetCommunity.MobilePhone
ArrayOf<Int32>* mGetCommunity.MobilePhone
ArrayOf<Int32> mSetCommunity.HomePhone
ArrayOf<Int32>* mGetCommunity.HomePhone
ArrayOf<Int32> mSetCommunity.WorkPhone
ArrayOf<Int32>* mGetCommunity.WorkPhone
ArrayOf<const String&> mSetCommunity.ContactedWithDetails
ArrayOf<String>* mGetCommunity.ContactedWithDetails
CRegister.businessChannelOwner mSetCommunity.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCommunity.BusinessChannelOwnerId
CAdministration.branch mSetCommunity.BranchId
CAdministration.branch* mGetCommunity.BranchId
ArrayOf<CAdministration.documents> mSetCommunity.DocRefIds
ArrayOf<CAdministration.documents>* mGetCommunity.DocRefIds
ArrayOf<CAdministration.images> mSetCommunity.ImageRefIds
ArrayOf<CAdministration.images>* mGetCommunity.ImageRefIds
const String& mSetMedia.MediaId
String* mGetMedia.MediaId
const String& mSetMedia.ABN
String* mGetMedia.ABN
const String& mSetMedia.CompanyName
String* mGetMedia.CompanyName
ArrayOf<const String&> mSetMedia.ContactFirstNameList
ArrayOf<String>* mGetMedia.ContactFirstNameList
ArrayOf<const String&> mSetMedia.ContactLastNameList
ArrayOf<String>* mGetMedia.ContactLastNameList
const String& mSetMedia.ResidentialAddress
String* mGetMedia.ResidentialAddress
const String& mSetMedia.PostalAddress
String* mGetMedia.PostalAddress
ArrayOf<const String&> mSetMedia.EmailAddresses
ArrayOf<String>* mGetMedia.EmailAddresses
ArrayOf<Int32> mSetMedia.MobilePhone
ArrayOf<Int32>* mGetMedia.MobilePhone
ArrayOf<Int32> mSetMedia.WorkPhone
ArrayOf<Int32>* mGetMedia.WorkPhone
ArrayOf<const String&> mSetMedia.ContactedWithDetails
ArrayOf<String>* mGetMedia.ContactedWithDetails
CRegister.businessChannelOwner mSetMedia.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMedia.BusinessChannelOwnerId
CAdministration.branch mSetMedia.BranchId
CAdministration.branch* mGetMedia.BranchId
ArrayOf<CAdministration.documents> mSetMedia.DocRefIds
ArrayOf<CAdministration.documents>* mGetMedia.DocRefIds
ArrayOf<CAdministration.images> mSetMedia.ImageRefIds
ArrayOf<CAdministration.images>* mGetMedia.ImageRefIds
const String& mSetTICA.TicaId
String* mGetTICA.TicaId
const String& mSetTICA.TicaUserName
String* mGetTICA.TicaUserName
const String& mSetTICA.TICAPassword
String* mGetTICA.TICAPassword
const String& mSetTICA.TenantFirstName
String* mGetTICA.TenantFirstName
const String& mSetTICA.TenantMiddleInitialOrName
String* mGetTICA.TenantMiddleInitialOrName
const String& mSetTICA.TenantLastName
String* mGetTICA.TenantLastName
const String& mSetTICA.TenantDateOfBirth
String* mGetTICA.TenantDateOfBirth
const String& mSetTICA.ApplicantFirstName
String* mGetTICA.ApplicantFirstName
const String& mSetTICA.ApplicantMiddleInitialOrName
String* mGetTICA.ApplicantMiddleInitialOrName
const String& mSetTICA.ApplicantLastName
String* mGetTICA.ApplicantLastName
const String& mSetTICA.ApplicantDateOfBirth
String* mGetTICA.ApplicantDateOfBirth
CRegister.businessChannelOwner mSetTICA.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTICA.BusinessChannelOwnerId
CAdministration.branch mSetTICA.BranchId
CAdministration.branch* mGetTICA.BranchId
ArrayOf<CAdministration.documents> mSetTICA.DocRefIds
ArrayOf<CAdministration.documents>* mGetTICA.DocRefIds
ArrayOf<CAdministration.images> mSetTICA.ImageRefIds
ArrayOf<CAdministration.images>* mGetTICA.ImageRefIds
CCustomer.applicant mSetTICA.ApplicantId
CCustomer.applicant* mGetTICA.ApplicantId
CProperty.tenant mSetTICA.TenancyId
CProperty.tenant* mGetTICA.TenancyId
const String& mSetAgent.AgentId
String* mGetAgent.AgentId
const String& mSetAgent.ABN
String* mGetAgent.ABN
const String& mSetAgent.AgencyName
String* mGetAgent.AgencyName
const String& mSetAgent.AgentType
String* mGetAgent.AgentType
const String& mSetAgent.DescriptionOfAgency
String* mGetAgent.DescriptionOfAgency
ArrayOf<const String&> mSetAgent.ContactFirstNameList
ArrayOf<String>* mGetAgent.ContactFirstNameList
ArrayOf<const String&> mSetAgent.ContactLastNameList
ArrayOf<String>* mGetAgent.ContactLastNameList
const String& mSetAgent.ResidentialAddress
String* mGetAgent.ResidentialAddress
const String& mSetAgent.PostalAddress
String* mGetAgent.PostalAddress
ArrayOf<const String&> mSetAgent.EmailAddresses
ArrayOf<String>* mGetAgent.EmailAddresses
ArrayOf<Int32> mSetAgent.MobilePhone
ArrayOf<Int32>* mGetAgent.MobilePhone
ArrayOf<Int32> mSetAgent.WorkPhone
ArrayOf<Int32>* mGetAgent.WorkPhone
ArrayOf<const String&> mSetAgent.ContactedWithDetails
ArrayOf<String>* mGetAgent.ContactedWithDetails
ArrayOf<CAdministration.documents> mSetAgent.DocRefIds
ArrayOf<CAdministration.documents>* mGetAgent.DocRefIds
ArrayOf<CAdministration.images> mSetAgent.ImageRefIds
ArrayOf<CAdministration.images>* mGetAgent.ImageRefIds
CStakeholder.agentType mSetAgent.AgentTypeId
CStakeholder.agentType* mGetAgent.AgentTypeId
ArrayOf<CAdministration.businessDirector> mSetAgent.BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetAgent.BusinessDirectorIds
CRegister.businessChannelOwner mSetAgent.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAgent.BusinessChannelOwnerId
const String& mSetAgentType.AgentTypeId
String* mGetAgentType.AgentTypeId
const String& mSetAgentType.AgentType
String* mGetAgentType.AgentType
const String& mSetAgentType.AgentTypeDescription
String* mGetAgentType.AgentTypeDescription
CRegister.businessChannelOwner mSetAgentType.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetAgentType.BusinessChannelOwnerId
CAdministration.branch mSetAgentType.BranchId
CAdministration.branch* mGetAgentType.BranchId
CAdministration.department mSetAgentType.DeptId
CAdministration.department* mGetAgentType.DeptId
ArrayOf<CAdministration.service> mSetAgentType.ServiceIds
ArrayOf<CAdministration.service>* mGetAgentType.ServiceIds
ArrayOf<CSupplier.supplierType> mSetAgentType.SupplierTypeIds
ArrayOf<CSupplier.supplierType>* mGetAgentType.SupplierTypeIds
CRegulator.stateBasedRegulator mSetAgentType.StateBasedRegId
CRegulator.stateBasedRegulator* mGetAgentType.StateBasedRegId
CRegulator.nationalRegulator mSetAgentType.NatRegId
CRegulator.nationalRegulator* mGetAgentType.NatRegId
ArrayOf<CAdministration.documents> mSetAgentType.DocRefIds
ArrayOf<CAdministration.documents>* mGetAgentType.DocRefIds
ArrayOf<CAdministration.images> mSetAgentType.ImageRefIds
ArrayOf<CAdministration.images>* mGetAgentType.ImageRefIds
ArrayOf<CAdministration.video> mSetAgentType.VideoRefIds
ArrayOf<CAdministration.video>* mGetAgentType.VideoRefIds
const String& mSetStateLAHAuthority.StateLAHAuthorityId
String* mGetStateLAHAuthority.StateLAHAuthorityId
const String& mSetStateLAHAuthority.AuthorityName
String* mGetStateLAHAuthority.AuthorityName
CHelper.ausState mSetStateLAHAuthority.AusState
CHelper.ausState* mGetStateLAHAuthority.AusState
ArrayOf<const String&> mSetStateLAHAuthority.ContactFirstNameList
ArrayOf<String>* mGetStateLAHAuthority.ContactFirstNameList
ArrayOf<const String&> mSetStateLAHAuthority.ContactLastNameList
ArrayOf<String>* mGetStateLAHAuthority.ContactLastNameList
const String& mSetStateLAHAuthority.StreetAddress
String* mGetStateLAHAuthority.StreetAddress
const String& mSetStateLAHAuthority.PostalAddress
String* mGetStateLAHAuthority.PostalAddress
ArrayOf<const String&> mSetStateLAHAuthority.EmailAddresses
ArrayOf<String>* mGetStateLAHAuthority.EmailAddresses
ArrayOf<Int32> mSetStateLAHAuthority.MobilePhone
ArrayOf<Int32>* mGetStateLAHAuthority.MobilePhone
ArrayOf<Int32> mSetStateLAHAuthority.WorkPhone
ArrayOf<Int32>* mGetStateLAHAuthority.WorkPhone
ArrayOf<const String&> mSetStateLAHAuthority.ContactedWithDetails
ArrayOf<String>* mGetStateLAHAuthority.ContactedWithDetails
CRegister.businessChannelOwner mSetStateLAHAuthority.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStateLAHAuthority.BusinessChannelOwnerId
CAdministration.branch mSetStateLAHAuthority.BranchId
CAdministration.branch* mGetStateLAHAuthority.BranchId
ArrayOf<CAdministration.documents> mSetStateLAHAuthority.DocRefIds
ArrayOf<CAdministration.documents>* mGetStateLAHAuthority.DocRefIds
ArrayOf<CAdministration.images> mSetStateLAHAuthority.ImageRefIds
ArrayOf<CAdministration.images>* mGetStateLAHAuthority.ImageRefIds
CProperty.propertyOwner mSetStateLAHAuthority.PropertyOwnerId
CProperty.propertyOwner* mGetStateLAHAuthority.PropertyOwnerId
const String& mSetStatePublicHousingAuthority.StatePublicHousingAuthorityId
String* mGetStatePublicHousingAuthority.StatePublicHousingAuthorityId
const String& mSetStatePublicHousingAuthority.AuthorityName
String* mGetStatePublicHousingAuthority.AuthorityName
ArrayOf<const String&> mSetStatePublicHousingAuthority.ContactFirstNameList
ArrayOf<String>* mGetStatePublicHousingAuthority.ContactFirstNameList
ArrayOf<const String&> mSetStatePublicHousingAuthority.ContactLastNameList
ArrayOf<String>* mGetStatePublicHousingAuthority.ContactLastNameList
const String& mSetStatePublicHousingAuthority.StreetAddress
String* mGetStatePublicHousingAuthority.StreetAddress
const String& mSetStatePublicHousingAuthority.PostalAddress
String* mGetStatePublicHousingAuthority.PostalAddress
ArrayOf<const String&> mSetStatePublicHousingAuthority.EmailAddresses
ArrayOf<String>* mGetStatePublicHousingAuthority.EmailAddresses
ArrayOf<Int32> mSetStatePublicHousingAuthority.MobilePhone
ArrayOf<Int32>* mGetStatePublicHousingAuthority.MobilePhone
ArrayOf<Int32> mSetStatePublicHousingAuthority.WorkPhone
ArrayOf<Int32>* mGetStatePublicHousingAuthority.WorkPhone
ArrayOf<const String&> mSetStatePublicHousingAuthority.ContactedWithDetails
ArrayOf<String>* mGetStatePublicHousingAuthority.ContactedWithDetails
CHelper.ausState mSetStatePublicHousingAuthority.AusState
CHelper.ausState* mGetStatePublicHousingAuthority.AusState
CAdministration.branch mSetStatePublicHousingAuthority.BranchId
CAdministration.branch* mGetStatePublicHousingAuthority.BranchId
ArrayOf<CAdministration.documents> mSetStatePublicHousingAuthority.DocRefIds
ArrayOf<CAdministration.documents>* mGetStatePublicHousingAuthority.DocRefIds
ArrayOf<CAdministration.images> mSetStatePublicHousingAuthority.ImageRefIds
ArrayOf<CAdministration.images>* mGetStatePublicHousingAuthority.ImageRefIds
CProperty.propertyOwner mSetStatePublicHousingAuthority.PropertyOwnerId
CProperty.propertyOwner* mGetStatePublicHousingAuthority.PropertyOwnerId
CRegister.businessChannelOwner mSetStatePublicHousingAuthority.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetStatePublicHousingAuthority.BusinessChannelOwnerId
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

