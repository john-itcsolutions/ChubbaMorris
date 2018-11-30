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


class CFinance
    : public Object
    , public ICH
    , public IComparable
{
public:
    CAR_INTERFACE_DECL()    // The class which implements a CAR interface requires macros CAR_INTERFACE_DECL/CAR_INTERFACE_IMPL.

    CFinance();               // If a member needs to be initialized, the constructor must be explicitly declared 

    virtual ~CFinance();

    CARAPI constructor();   // CAR constructor for subclass inheritance.

     // IComparable interface function
    //
    CARAPI CompareTo(
        /* [in] */ IInterface* another,
        /* [out] */ Int32* result);

    // ICH interface function
    //
    
   CARAPI SetBank.BankId(
     /* [in] */ const String& CFinance.bank.bankId);

    CARAPI GetBank.BankId(
     /* [out] */ String* CFinance.bank.bankId);


   CARAPI SetBank.BankName(
     /* [in] */ const String& CFinance.bank.bankName);

    CARAPI GetBank.BankName(
     /* [out] */ String* CFinance.bank.bankName);


   CARAPI SetBank.OurBranchBSB(
     /* [in] */ Int32 CFinance.bank.ourBranchBSB);

    CARAPI GetBank.OurBranchBSB(
     /* [out] */ Int32* CFinance.bank.ourBranchBSB);


   CARAPI SetBank.OurBranchName(
     /* [in] */ const String& CFinance.bank.ourBranchName);

    CARAPI GetBank.OurBranchName(
     /* [out] */ String* CFinance.bank.ourBranchName);


   CARAPI SetBank.LinkedToThisSupplierId(
     /* [in] */ const String& CFinance.bank.linkedToThisSupplierId);

    CARAPI GetBank.LinkedToThisSupplierId(
     /* [out] */ String* CFinance.bank.linkedToThisSupplierId);


   CARAPI SetBank.LinkedToThisCustomerId(
     /* [in] */ const String& CFinance.bank.linkedToThisCustomerId);

    CARAPI GetBank.LinkedToThisCustomerId(
     /* [out] */ String* CFinance.bank.linkedToThisCustomerId);


   CARAPI SetBank.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CFinance.bank.contactFirstNameList);

    CARAPI GetBank.ContactFirstNameList(
     [out, callee] ArrayOf<String>* CFinance.bank.contactFirstNameList);


   CARAPI SetBank.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CFinance.bank.contactLastNameList);

    CARAPI GetBank.ContactLastNameList(
     [out, callee] ArrayOf<String>* CFinance.bank.contactLastNameList);


   CARAPI SetBank.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CFinance.bank.emailAddresses);

    CARAPI GetBank.EmailAddresses(
     [out, callee] ArrayOf<String>* CFinance.bank.emailAddresses);


   CARAPI SetBank.MobilePhone(
     /* [in] */ ArrayOf<Int32> CFinance.bank.mobilePhone);

    CARAPI GetBank.MobilePhone(
     [out, callee] ArrayOf<Int32>* CFinance.bank.mobilePhone);


   CARAPI SetBank.WorkPhone(
     /* [in] */ ArrayOf<Int32> CFinance.bank.workPhone);

    CARAPI GetBank.WorkPhone(
     [out, callee] ArrayOf<Int32>* CFinance.bank.workPhone);


   CARAPI SetBank.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CFinance.bank.contactedWithDetails);

    CARAPI GetBank.ContactedWithDetails(
     [out, callee] ArrayOf<String>* CFinance.bank.contactedWithDetails);


   CARAPI SetBank.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.bank.docRefIds);

    CARAPI GetBank.DocRefIds(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.bank.docRefIds);


   CARAPI SetBank.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.bank.imageRefIds);

    CARAPI GetBank.ImageRefIds(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.bank.imageRefIds);


   CARAPI SetBank.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.bank.businessChannelOwnerId);

    CARAPI GetBank.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.bank.businessChannelOwnerId);


   CARAPI SetCentrelink.CentrelinkId(
     /* [in] */ const String& CFinance.centrelink.centrelinkId);

    CARAPI GetCentrelink.CentrelinkId(
     /* [out] */ String* CFinance.centrelink.centrelinkId);


   CARAPI SetCentrelink.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CFinance.centrelink.contactFirstNameList);

    CARAPI GetCentrelink.ContactFirstNameList(
     [out, callee] ArrayOf<String>* CFinance.centrelink.contactFirstNameList);


   CARAPI SetCentrelink.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CFinance.centrelink.contactLastNameList);

    CARAPI GetCentrelink.ContactLastNameList(
     [out, callee] ArrayOf<String>* CFinance.centrelink.contactLastNameList);


   CARAPI SetCentrelink.StreetAddress(
     /* [in] */ const String& CFinance.centrelink.streetAddress);

    CARAPI GetCentrelink.StreetAddress(
     /* [out] */ String* CFinance.centrelink.streetAddress);


   CARAPI SetCentrelink.PostalAddress(
     /* [in] */ const String& CFinance.centrelink.postalAddress);

    CARAPI GetCentrelink.PostalAddress(
     /* [out] */ String* CFinance.centrelink.postalAddress);


   CARAPI SetCentrelink.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CFinance.centrelink.emailAddresses);

    CARAPI GetCentrelink.EmailAddresses(
     [out, callee] ArrayOf<String>* CFinance.centrelink.emailAddresses);


   CARAPI SetCentrelink.MobilePhone(
     /* [in] */ ArrayOf<Int32> CFinance.centrelink.mobilePhone);

    CARAPI GetCentrelink.MobilePhone(
     [out, callee] ArrayOf<Int32>* CFinance.centrelink.mobilePhone);


   CARAPI SetCentrelink.WorkPhone(
     /* [in] */ ArrayOf<Int32> CFinance.centrelink.workPhone);

    CARAPI GetCentrelink.WorkPhone(
     [out, callee] ArrayOf<Int32>* CFinance.centrelink.workPhone);


   CARAPI SetCentrelink.Details(
     /* [in] */ const String& CFinance.centrelink.details);

    CARAPI GetCentrelink.Details(
     /* [out] */ String* CFinance.centrelink.details);


   CARAPI SetCentrelink.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CFinance.centrelink.contactedWithDetails);

    CARAPI GetCentrelink.ContactedWithDetails(
     [out, callee] ArrayOf<String>* CFinance.centrelink.contactedWithDetails);


   CARAPI SetCentrelink.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.centrelink.businessChannelOwnerId);

    CARAPI GetCentrelink.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.centrelink.businessChannelOwnerId);


   CARAPI SetCentrelink.BranchId(
     /* [in] */ CAdministration.branch CFinance.centrelink.branchId);

    CARAPI GetCentrelink.BranchId(
     /* [out] */ CAdministration.branch* CFinance.centrelink.branchId);


   CARAPI SetCentrelink.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.centrelink.docRefIds);

    CARAPI GetCentrelink.DocRefIds(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.centrelink.docRefIds);


   CARAPI SetCentrelink.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.centrelink.imageRefIds);

    CARAPI GetCentrelink.ImageRefIds(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.centrelink.imageRefIds);


   CARAPI SetMasterAsCARAPI SetRegister.MasterAsCARAPI SetId(
     /* [in] */ const String& CFinance.masterAsCARAPI SetRegister.masterAsCARAPI SetId);

    CARAPI GetMasterAsCARAPI SetRegister.MasterAsCARAPI SetId(
     /* [out] */ String* CFinance.masterAsCARAPI SetRegister.masterAsCARAPI SetId);


   CARAPI SetMasterAsCARAPI SetRegister.AsCARAPI SetTypeId(
     /* [in] */ const String& CFinance.masterAsCARAPI SetRegister.asCARAPI SetTypeId);

    CARAPI GetMasterAsCARAPI SetRegister.AsCARAPI SetTypeId(
     /* [out] */ String* CFinance.masterAsCARAPI SetRegister.asCARAPI SetTypeId);


   CARAPI SetMasterAsCARAPI SetRegister.AsCARAPI SetName(
     /* [in] */ const String& CFinance.masterAsCARAPI SetRegister.asCARAPI SetName);

    CARAPI GetMasterAsCARAPI SetRegister.AsCARAPI SetName(
     /* [out] */ String* CFinance.masterAsCARAPI SetRegister.asCARAPI SetName);


   CARAPI SetMasterAsCARAPI SetRegister.AsCARAPI SetDescription(
     /* [in] */ const String& CFinance.masterAsCARAPI SetRegister.asCARAPI SetDescription);

    CARAPI GetMasterAsCARAPI SetRegister.AsCARAPI SetDescription(
     /* [out] */ String* CFinance.masterAsCARAPI SetRegister.asCARAPI SetDescription);


   CARAPI SetMasterAsCARAPI SetRegister.OWDV(
     /* [in] */ Double CFinance.masterAsCARAPI SetRegister.OWDV);

    CARAPI GetMasterAsCARAPI SetRegister.OWDV(
     /* [out] */ Double* CFinance.masterAsCARAPI SetRegister.OWDV);


   CARAPI SetMasterAsCARAPI SetRegister.CapitalImprovements(
     /* [in] */ Double CFinance.masterAsCARAPI SetRegister.capitalImprovements);

    CARAPI GetMasterAsCARAPI SetRegister.CapitalImprovements(
     /* [out] */ Double* CFinance.masterAsCARAPI SetRegister.capitalImprovements);


   CARAPI SetMasterAsCARAPI SetRegister.Depreciation(
     /* [in] */ Double CFinance.masterAsCARAPI SetRegister.depreciation);

    CARAPI GetMasterAsCARAPI SetRegister.Depreciation(
     /* [out] */ Double* CFinance.masterAsCARAPI SetRegister.depreciation);


   CARAPI SetMasterAsCARAPI SetRegister.CWDV(
     /* [in] */ Double CFinance.masterAsCARAPI SetRegister.CWDV);

    CARAPI GetMasterAsCARAPI SetRegister.CWDV(
     /* [out] */ Double* CFinance.masterAsCARAPI SetRegister.CWDV);


   CARAPI SetMasterAsCARAPI SetRegister.LastInspectionService(
     /* [in] */ const String& CFinance.masterAsCARAPI SetRegister.lastInspectionService);

    CARAPI GetMasterAsCARAPI SetRegister.LastInspectionService(
     /* [out] */ String* CFinance.masterAsCARAPI SetRegister.lastInspectionService);


   CARAPI SetMasterAsCARAPI SetRegister.ThisInspectionService(
     /* [in] */ const String& CFinance.masterAsCARAPI SetRegister.thisInspectionService);

    CARAPI GetMasterAsCARAPI SetRegister.ThisInspectionService(
     /* [out] */ String* CFinance.masterAsCARAPI SetRegister.thisInspectionService);


   CARAPI SetMasterAsCARAPI SetRegister.Sequ(
     /* [in] */ const String& CFinance.masterAsCARAPI SetRegister.Sequ);

    CARAPI GetMasterAsCARAPI SetRegister.Sequ(
     /* [out] */ String* CFinance.masterAsCARAPI SetRegister.Sequ);


   CARAPI SetMasterAsCARAPI SetRegister.NextInspectionService(
     /* [in] */ const String& CFinance.masterAsCARAPI SetRegister.nextInspectionService);

    CARAPI GetMasterAsCARAPI SetRegister.NextInspectionService(
     /* [out] */ String* CFinance.masterAsCARAPI SetRegister.nextInspectionService);


   CARAPI SetMasterAsCARAPI SetRegister.ValueOfN(
     /* [in] */ Int32 CFinance.masterAsCARAPI SetRegister.valueOfN);

    CARAPI GetMasterAsCARAPI SetRegister.ValueOfN(
     /* [out] */ Int32* CFinance.masterAsCARAPI SetRegister.valueOfN);


   CARAPI SetMasterAsCARAPI SetRegister.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterAsCARAPI SetRegister.businessChannelOwnerId);

    CARAPI GetMasterAsCARAPI SetRegister.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterAsCARAPI SetRegister.businessChannelOwnerId);


   CARAPI SetMasterAsCARAPI SetRegister.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.masterAsCARAPI SetRegister.docRefs);

    CARAPI GetMasterAsCARAPI SetRegister.DocRefs(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.masterAsCARAPI SetRegister.docRefs);


   CARAPI SetMasterAsCARAPI SetRegister.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.masterAsCARAPI SetRegister.imageRefs);

    CARAPI GetMasterAsCARAPI SetRegister.ImageRefs(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.masterAsCARAPI SetRegister.imageRefs);


   CARAPI SetMasterAsCARAPI SetRegister.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CFinance.masterAsCARAPI SetRegister.audioRefIds);

    CARAPI GetMasterAsCARAPI SetRegister.AudioRefIds(
     [out, callee] ArrayOf<CAdministration.audio>* CFinance.masterAsCARAPI SetRegister.audioRefIds);


   CARAPI SetMasterAsCARAPI SetRegister.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CFinance.masterAsCARAPI SetRegister.videoRefs);

    CARAPI GetMasterAsCARAPI SetRegister.VideoRefs(
     [out, callee] ArrayOf<CAdministration.video>* CFinance.masterAsCARAPI SetRegister.videoRefs);


   CARAPI SetMasterAsCARAPI SetRegister.ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterAsCARAPI SetRegister.chartOfAccountsId);

    CARAPI GetMasterAsCARAPI SetRegister.ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterAsCARAPI SetRegister.chartOfAccountsId);


   CARAPI SetMasterAsCARAPI SetRegister.ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterAsCARAPI SetRegister.chartOfClassesId);

    CARAPI GetMasterAsCARAPI SetRegister.ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterAsCARAPI SetRegister.chartOfClassesId);


   CARAPI SetMasterAsCARAPI SetRegister.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterAsCARAPI SetRegister.branchId);

    CARAPI GetMasterAsCARAPI SetRegister.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterAsCARAPI SetRegister.branchId);


   CARAPI SetMasterAsCARAPI SetRegister.DeptId(
     /* [in] */ CAdministration.department CFinance.masterAsCARAPI SetRegister.deptId);

    CARAPI GetMasterAsCARAPI SetRegister.DeptId(
     /* [out] */ CAdministration.department* CFinance.masterAsCARAPI SetRegister.deptId);


   CARAPI SetMasterAsCARAPI SetRegister.MasterAsCARAPI SetTypeId(
     /* [in] */ CFinance.masterAsCARAPI SetType CFinance.masterAsCARAPI SetRegister.masterAsCARAPI SetTypeId);

    CARAPI GetMasterAsCARAPI SetRegister.MasterAsCARAPI SetTypeId(
     /* [out] */ CFinance.masterAsCARAPI SetType* CFinance.masterAsCARAPI SetRegister.masterAsCARAPI SetTypeId);


   CARAPI SetMasterAsCARAPI SetType.MasterAsCARAPI SetTypeId(
     /* [in] */ const String& CFinance.masterAsCARAPI SetType.masterAsCARAPI SetTypeId);

    CARAPI GetMasterAsCARAPI SetType.MasterAsCARAPI SetTypeId(
     /* [out] */ String* CFinance.masterAsCARAPI SetType.masterAsCARAPI SetTypeId);


   CARAPI SetMasterAsCARAPI SetType.AsCARAPI SetName(
     /* [in] */ const String& CFinance.masterAsCARAPI SetType.asCARAPI SetName);

    CARAPI GetMasterAsCARAPI SetType.AsCARAPI SetName(
     /* [out] */ String* CFinance.masterAsCARAPI SetType.asCARAPI SetName);


   CARAPI SetMasterAsCARAPI SetType.AsCARAPI SetDescription(
     /* [in] */ const String& CFinance.masterAsCARAPI SetType.asCARAPI SetDescription);

    CARAPI GetMasterAsCARAPI SetType.AsCARAPI SetDescription(
     /* [out] */ String* CFinance.masterAsCARAPI SetType.asCARAPI SetDescription);


   CARAPI SetMasterAsCARAPI SetType.InspectionTerm(
     /* [in] */ CHelper.inspectionTerm CFinance.masterAsCARAPI SetType.inspectionTerm);

    CARAPI GetMasterAsCARAPI SetType.InspectionTerm(
     /* [out] */ CHelper.inspectionTerm* CFinance.masterAsCARAPI SetType.inspectionTerm);


   CARAPI SetMasterAsCARAPI SetType.ValueOfN(
     /* [in] */ Int32 CFinance.masterAsCARAPI SetType.valueOfN);

    CARAPI GetMasterAsCARAPI SetType.ValueOfN(
     /* [out] */ Int32* CFinance.masterAsCARAPI SetType.valueOfN);


   CARAPI SetMasterAsCARAPI SetType.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.masterAsCARAPI SetType.docRefs);

    CARAPI GetMasterAsCARAPI SetType.DocRefs(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.masterAsCARAPI SetType.docRefs);


   CARAPI SetMasterAsCARAPI SetType.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.masterAsCARAPI SetType.imageRefs);

    CARAPI GetMasterAsCARAPI SetType.ImageRefs(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.masterAsCARAPI SetType.imageRefs);


   CARAPI SetMasterAsCARAPI SetType.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CFinance.masterAsCARAPI SetType.audioRefIds);

    CARAPI GetMasterAsCARAPI SetType.AudioRefIds(
     [out, callee] ArrayOf<CAdministration.audio>* CFinance.masterAsCARAPI SetType.audioRefIds);


   CARAPI SetMasterAsCARAPI SetType.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CFinance.masterAsCARAPI SetType.videoRefs);

    CARAPI GetMasterAsCARAPI SetType.VideoRefs(
     [out, callee] ArrayOf<CAdministration.video>* CFinance.masterAsCARAPI SetType.videoRefs);


   CARAPI SetMasterAsCARAPI SetType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterAsCARAPI SetType.businessChannelOwnerId);

    CARAPI GetMasterAsCARAPI SetType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterAsCARAPI SetType.businessChannelOwnerId);


   CARAPI SetMasterAsCARAPI SetType.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterAsCARAPI SetType.branchId);

    CARAPI GetMasterAsCARAPI SetType.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterAsCARAPI SetType.branchId);


   CARAPI SetMasterAsCARAPI SetType.DeptId(
     /* [in] */ CAdministration.department CFinance.masterAsCARAPI SetType.deptId);

    CARAPI GetMasterAsCARAPI SetType.DeptId(
     /* [out] */ CAdministration.department* CFinance.masterAsCARAPI SetType.deptId);


   CARAPI SetChartOfAccounts.ChartOfAccountsId(
     /* [in] */ const String& CFinance.chartOfAccounts.chartOfAccountsId);

    CARAPI GetChartOfAccounts.ChartOfAccountsId(
     /* [out] */ String* CFinance.chartOfAccounts.chartOfAccountsId);


   CARAPI SetChartOfAccounts.LedgerTitle(
     /* [in] */ CHelper.ledgerTitle CFinance.chartOfAccounts.ledgerTitle);

    CARAPI GetChartOfAccounts.LedgerTitle(
     /* [out] */ CHelper.ledgerTitle* CFinance.chartOfAccounts.ledgerTitle);


   CARAPI SetChartOfAccounts.Description(
     /* [in] */ const String& CFinance.chartOfAccounts.description);

    CARAPI GetChartOfAccounts.Description(
     /* [out] */ String* CFinance.chartOfAccounts.description);


   CARAPI SetChartOfAccounts.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.chartOfAccounts.businessChannelOwnerId);

    CARAPI GetChartOfAccounts.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.chartOfAccounts.businessChannelOwnerId);


   CARAPI SetChartOfAccounts.Level1AccountsId(
     /* [in] */ CFinance.level1Accounts CFinance.chartOfAccounts.level1AccountsId);

    CARAPI GetChartOfAccounts.Level1AccountsId(
     /* [out] */ CFinance.level1Accounts* CFinance.chartOfAccounts.level1AccountsId);


   CARAPI SetChartOfAccounts.Level2AccountsId(
     /* [in] */ CFinance.level2Accounts CFinance.chartOfAccounts.level2AccountsId);

    CARAPI GetChartOfAccounts.Level2AccountsId(
     /* [out] */ CFinance.level2Accounts* CFinance.chartOfAccounts.level2AccountsId);


   CARAPI SetChartOfAccounts.Level3AccountsId(
     /* [in] */ CFinance.level3Accounts CFinance.chartOfAccounts.level3AccountsId);

    CARAPI GetChartOfAccounts.Level3AccountsId(
     /* [out] */ CFinance.level3Accounts* CFinance.chartOfAccounts.level3AccountsId);


   CARAPI SetChartOfAccounts.Level4AccountsId(
     /* [in] */ CFinance.level4Accounts CFinance.chartOfAccounts.level4AccountsId);

    CARAPI GetChartOfAccounts.Level4AccountsId(
     /* [out] */ CFinance.level4Accounts* CFinance.chartOfAccounts.level4AccountsId);


   CARAPI SetChartOfAccounts.Level5AccountsId(
     /* [in] */ CFinance.level5Accounts CFinance.chartOfAccounts.level5AccountsId);

    CARAPI GetChartOfAccounts.Level5AccountsId(
     /* [out] */ CFinance.level5Accounts* CFinance.chartOfAccounts.level5AccountsId);


   CARAPI SetChartOfAccounts.Level6AccountsId(
     /* [in] */ CFinance.level6Accounts CFinance.chartOfAccounts.level6AccountsId);

    CARAPI GetChartOfAccounts.Level6AccountsId(
     /* [out] */ CFinance.level6Accounts* CFinance.chartOfAccounts.level6AccountsId);


   CARAPI SetLevel1Accounts.Level1AccountsId(
     /* [in] */ const String& CFinance.level1Accounts.level1AccountsId);

    CARAPI GetLevel1Accounts.Level1AccountsId(
     /* [out] */ String* CFinance.level1Accounts.level1AccountsId);


   CARAPI SetLevel1Accounts.Description(
     /* [in] */ const String& CFinance.level1Accounts.description);

    CARAPI GetLevel1Accounts.Description(
     /* [out] */ String* CFinance.level1Accounts.description);


   CARAPI SetLevel1Accounts.Level1AccountsName(
     /* [in] */ const String& CFinance.level1Accounts.level1AccountsName);

    CARAPI GetLevel1Accounts.Level1AccountsName(
     /* [out] */ String* CFinance.level1Accounts.level1AccountsName);


   CARAPI SetLevel1Accounts.Level1AccountsNum(
     /* [in] */ const String& CFinance.level1Accounts.level1AccountsNum);

    CARAPI GetLevel1Accounts.Level1AccountsNum(
     /* [out] */ String* CFinance.level1Accounts.level1AccountsNum);


   CARAPI SetLevel1Accounts.AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level1Accounts.assocLedger);

    CARAPI GetLevel1Accounts.AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level1Accounts.assocLedger);


   CARAPI SetLevel1Accounts.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level1Accounts.businessChannelOwnerId);

    CARAPI GetLevel1Accounts.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level1Accounts.businessChannelOwnerId);


   CARAPI SetLevel2Accounts.Level2AccountsId(
     /* [in] */ const String& CFinance.level2Accounts.level2AccountsId);

    CARAPI GetLevel2Accounts.Level2AccountsId(
     /* [out] */ String* CFinance.level2Accounts.level2AccountsId);


   CARAPI SetLevel2Accounts.Description(
     /* [in] */ const String& CFinance.level2Accounts.description);

    CARAPI GetLevel2Accounts.Description(
     /* [out] */ String* CFinance.level2Accounts.description);


   CARAPI SetLevel2Accounts.Level2AccountsName(
     /* [in] */ const String& CFinance.level2Accounts.level2AccountsName);

    CARAPI GetLevel2Accounts.Level2AccountsName(
     /* [out] */ String* CFinance.level2Accounts.level2AccountsName);


   CARAPI SetLevel2Accounts.Level2AccountsNum(
     /* [in] */ const String& CFinance.level2Accounts.level2AccountsNum);

    CARAPI GetLevel2Accounts.Level2AccountsNum(
     /* [out] */ String* CFinance.level2Accounts.level2AccountsNum);


   CARAPI SetLevel2Accounts.AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level2Accounts.assocLedger);

    CARAPI GetLevel2Accounts.AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level2Accounts.assocLedger);


   CARAPI SetLevel2Accounts.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level2Accounts.businessChannelOwnerId);

    CARAPI GetLevel2Accounts.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level2Accounts.businessChannelOwnerId);


   CARAPI SetLevel2Accounts.Level1AccountsId(
     /* [in] */ CFinance.level1Accounts CFinance.level2Accounts.level1AccountsId);

    CARAPI GetLevel2Accounts.Level1AccountsId(
     /* [out] */ CFinance.level1Accounts* CFinance.level2Accounts.level1AccountsId);


   CARAPI SetLevel3Accounts.Level3AccountsId(
     /* [in] */ const String& CFinance.level3Accounts.level3AccountsId);

    CARAPI GetLevel3Accounts.Level3AccountsId(
     /* [out] */ String* CFinance.level3Accounts.level3AccountsId);


   CARAPI SetLevel3Accounts.Description(
     /* [in] */ const String& CFinance.level3Accounts.description);

    CARAPI GetLevel3Accounts.Description(
     /* [out] */ String* CFinance.level3Accounts.description);


   CARAPI SetLevel3Accounts.Level3AccountsName(
     /* [in] */ const String& CFinance.level3Accounts.level3AccountsName);

    CARAPI GetLevel3Accounts.Level3AccountsName(
     /* [out] */ String* CFinance.level3Accounts.level3AccountsName);


   CARAPI SetLevel3Accounts.Level3AccountsNum(
     /* [in] */ const String& CFinance.level3Accounts.level3AccountsNum);

    CARAPI GetLevel3Accounts.Level3AccountsNum(
     /* [out] */ String* CFinance.level3Accounts.level3AccountsNum);


   CARAPI SetLevel3Accounts.AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level3Accounts.assocLedger);

    CARAPI GetLevel3Accounts.AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level3Accounts.assocLedger);


   CARAPI SetLevel3Accounts.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level3Accounts.businessChannelOwnerId);

    CARAPI GetLevel3Accounts.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level3Accounts.businessChannelOwnerId);


   CARAPI SetLevel3Accounts.Level2AccountsId(
     /* [in] */ CFinance.level2Accounts CFinance.level3Accounts.level2AccountsId);

    CARAPI GetLevel3Accounts.Level2AccountsId(
     /* [out] */ CFinance.level2Accounts* CFinance.level3Accounts.level2AccountsId);


   CARAPI SetLevel4Accounts.Level4AccountsId(
     /* [in] */ const String& CFinance.level4Accounts.level4AccountsId);

    CARAPI GetLevel4Accounts.Level4AccountsId(
     /* [out] */ String* CFinance.level4Accounts.level4AccountsId);


   CARAPI SetLevel4Accounts.Description(
     /* [in] */ const String& CFinance.level4Accounts.description);

    CARAPI GetLevel4Accounts.Description(
     /* [out] */ String* CFinance.level4Accounts.description);


   CARAPI SetLevel4Accounts.Level4AccountsName(
     /* [in] */ const String& CFinance.level4Accounts.level4AccountsName);

    CARAPI GetLevel4Accounts.Level4AccountsName(
     /* [out] */ String* CFinance.level4Accounts.level4AccountsName);


   CARAPI SetLevel4Accounts.Level4AccountsNum(
     /* [in] */ const String& CFinance.level4Accounts.level4AccountsNum);

    CARAPI GetLevel4Accounts.Level4AccountsNum(
     /* [out] */ String* CFinance.level4Accounts.level4AccountsNum);


   CARAPI SetLevel4Accounts.AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level4Accounts.assocLedger);

    CARAPI GetLevel4Accounts.AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level4Accounts.assocLedger);


   CARAPI SetLevel4Accounts.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level4Accounts.businessChannelOwnerId);

    CARAPI GetLevel4Accounts.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level4Accounts.businessChannelOwnerId);


   CARAPI SetLevel4Accounts.Level3AccountsId(
     /* [in] */ CFinance.level3Accounts CFinance.level4Accounts.level3AccountsId);

    CARAPI GetLevel4Accounts.Level3AccountsId(
     /* [out] */ CFinance.level3Accounts* CFinance.level4Accounts.level3AccountsId);


   CARAPI SetLevel5Accounts.Level5AccountsId(
     /* [in] */ const String& CFinance.level5Accounts.level5AccountsId);

    CARAPI GetLevel5Accounts.Level5AccountsId(
     /* [out] */ String* CFinance.level5Accounts.level5AccountsId);


   CARAPI SetLevel5Accounts.Description(
     /* [in] */ const String& CFinance.level5Accounts.description);

    CARAPI GetLevel5Accounts.Description(
     /* [out] */ String* CFinance.level5Accounts.description);


   CARAPI SetLevel5Accounts.Level5AccountsName(
     /* [in] */ const String& CFinance.level5Accounts.level5AccountsName);

    CARAPI GetLevel5Accounts.Level5AccountsName(
     /* [out] */ String* CFinance.level5Accounts.level5AccountsName);


   CARAPI SetLevel5Accounts.Level5AccountsNum(
     /* [in] */ const String& CFinance.level5Accounts.level5AccountsNum);

    CARAPI GetLevel5Accounts.Level5AccountsNum(
     /* [out] */ String* CFinance.level5Accounts.level5AccountsNum);


   CARAPI SetLevel5Accounts.AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level5Accounts.assocLedger);

    CARAPI GetLevel5Accounts.AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level5Accounts.assocLedger);


   CARAPI SetLevel5Accounts.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level5Accounts.businessChannelOwnerId);

    CARAPI GetLevel5Accounts.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level5Accounts.businessChannelOwnerId);


   CARAPI SetLevel5Accounts.Level4AccountsId(
     /* [in] */ CFinance.level4Accounts CFinance.level5Accounts.level4AccountsId);

    CARAPI GetLevel5Accounts.Level4AccountsId(
     /* [out] */ CFinance.level4Accounts* CFinance.level5Accounts.level4AccountsId);


   CARAPI SetLevel6Accounts.Level6AccountsId(
     /* [in] */ const String& CFinance.level6Accounts.level6AccountsId);

    CARAPI GetLevel6Accounts.Level6AccountsId(
     /* [out] */ String* CFinance.level6Accounts.level6AccountsId);


   CARAPI SetLevel6Accounts.Description(
     /* [in] */ const String& CFinance.level6Accounts.description);

    CARAPI GetLevel6Accounts.Description(
     /* [out] */ String* CFinance.level6Accounts.description);


   CARAPI SetLevel6Accounts.Level6AccountsName(
     /* [in] */ const String& CFinance.level6Accounts.level6AccountsName);

    CARAPI GetLevel6Accounts.Level6AccountsName(
     /* [out] */ String* CFinance.level6Accounts.level6AccountsName);


   CARAPI SetLevel6Accounts.Level6AccountsNum(
     /* [in] */ const String& CFinance.level6Accounts.level6AccountsNum);

    CARAPI GetLevel6Accounts.Level6AccountsNum(
     /* [out] */ String* CFinance.level6Accounts.level6AccountsNum);


   CARAPI SetLevel6Accounts.AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level6Accounts.assocLedger);

    CARAPI GetLevel6Accounts.AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level6Accounts.assocLedger);


   CARAPI SetLevel6Accounts.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level6Accounts.businessChannelOwnerId);

    CARAPI GetLevel6Accounts.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level6Accounts.businessChannelOwnerId);


   CARAPI SetLevel6Accounts.Level5AccountsId(
     /* [in] */ CFinance.level5Accounts CFinance.level6Accounts.level5AccountsId);

    CARAPI GetLevel6Accounts.Level5AccountsId(
     /* [out] */ CFinance.level5Accounts* CFinance.level6Accounts.level5AccountsId);


   CARAPI SetChartOfClasses.ChartOfClassesId(
     /* [in] */ const String& CFinance.chartOfClasses.chartOfClassesId);

    CARAPI GetChartOfClasses.ChartOfClassesId(
     /* [out] */ String* CFinance.chartOfClasses.chartOfClassesId);


   CARAPI SetChartOfClasses.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.chartOfClasses.businessChannelOwnerId);

    CARAPI GetChartOfClasses.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.chartOfClasses.businessChannelOwnerId);


   CARAPI SetChartOfClasses.Level1ClassId(
     /* [in] */ CFinance.level1Class CFinance.chartOfClasses.level1ClassId);

    CARAPI GetChartOfClasses.Level1ClassId(
     /* [out] */ CFinance.level1Class* CFinance.chartOfClasses.level1ClassId);


   CARAPI SetChartOfClasses.Level2ClassId(
     /* [in] */ CFinance.level2Class CFinance.chartOfClasses.level2ClassId);

    CARAPI GetChartOfClasses.Level2ClassId(
     /* [out] */ CFinance.level2Class* CFinance.chartOfClasses.level2ClassId);


   CARAPI SetChartOfClasses.Level3ClassId(
     /* [in] */ CFinance.level3Class CFinance.chartOfClasses.level3ClassId);

    CARAPI GetChartOfClasses.Level3ClassId(
     /* [out] */ CFinance.level3Class* CFinance.chartOfClasses.level3ClassId);


   CARAPI SetLevel1Class.Level1ClassId(
     /* [in] */ const String& CFinance.level1Class.level1ClassId);

    CARAPI GetLevel1Class.Level1ClassId(
     /* [out] */ String* CFinance.level1Class.level1ClassId);


   CARAPI SetLevel1Class.Description(
     /* [in] */ const String& CFinance.level1Class.description);

    CARAPI GetLevel1Class.Description(
     /* [out] */ String* CFinance.level1Class.description);


   CARAPI SetLevel1Class.ClassName(
     /* [in] */ const String& CFinance.level1Class.className);

    CARAPI GetLevel1Class.ClassName(
     /* [out] */ String* CFinance.level1Class.className);


   CARAPI SetLevel1Class.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level1Class.businessChannelOwnerId);

    CARAPI GetLevel1Class.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level1Class.businessChannelOwnerId);


   CARAPI SetLevel2Class.Level2ClassId(
     /* [in] */ const String& CFinance.level2Class.level2ClassId);

    CARAPI GetLevel2Class.Level2ClassId(
     /* [out] */ String* CFinance.level2Class.level2ClassId);


   CARAPI SetLevel2Class.Description(
     /* [in] */ const String& CFinance.level2Class.description);

    CARAPI GetLevel2Class.Description(
     /* [out] */ String* CFinance.level2Class.description);


   CARAPI SetLevel2Class.ClassName(
     /* [in] */ const String& CFinance.level2Class.className);

    CARAPI GetLevel2Class.ClassName(
     /* [out] */ String* CFinance.level2Class.className);


   CARAPI SetLevel2Class.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level2Class.businessChannelOwnerId);

    CARAPI GetLevel2Class.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level2Class.businessChannelOwnerId);


   CARAPI SetLevel2Class.Level1ClassId(
     /* [in] */ CFinance.level1Class CFinance.level2Class.level1ClassId);

    CARAPI GetLevel2Class.Level1ClassId(
     /* [out] */ CFinance.level1Class* CFinance.level2Class.level1ClassId);


   CARAPI SetLevel3Class.Level3ClassId(
     /* [in] */ const String& CFinance.level3Class.level3ClassId);

    CARAPI GetLevel3Class.Level3ClassId(
     /* [out] */ String* CFinance.level3Class.level3ClassId);


   CARAPI SetLevel3Class.Description(
     /* [in] */ const String& CFinance.level3Class.description);

    CARAPI GetLevel3Class.Description(
     /* [out] */ String* CFinance.level3Class.description);


   CARAPI SetLevel3Class.ClassName(
     /* [in] */ const String& CFinance.level3Class.className);

    CARAPI GetLevel3Class.ClassName(
     /* [out] */ String* CFinance.level3Class.className);


   CARAPI SetLevel3Class.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level3Class.businessChannelOwnerId);

    CARAPI GetLevel3Class.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level3Class.businessChannelOwnerId);


   CARAPI SetLevel3Class.Level2ClassId(
     /* [in] */ CFinance.level2Class CFinance.level3Class.level2ClassId);

    CARAPI GetLevel3Class.Level2ClassId(
     /* [out] */ CFinance.level2Class* CFinance.level3Class.level2ClassId);


   CARAPI SetMasterLedgerFinTxJoin.MasLedgeFinTxJoinId(
     /* [in] */ const String& CFinance.masterLedgerFinTxJoin.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerFinTxJoin.MasLedgeFinTxJoinId(
     /* [out] */ String* CFinance.masterLedgerFinTxJoin.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerFinTxJoin.MasLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerFinTxJoin.masLedgeFinTxIds);

    CARAPI GetMasterLedgerFinTxJoin.MasLedgeFinTxIds(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerFinTxJoin.masLedgeFinTxIds);


   CARAPI SetMasterLedgerFinTxJoin.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerFinTxJoin.masLedgeFinTxNum);

    CARAPI GetMasterLedgerFinTxJoin.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerFinTxJoin.masLedgeFinTxNum);


   CARAPI SetMasterLedgerFinTxJoin.CreditedAccountIds(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerFinTxJoin.creditedAccountIds);

    CARAPI GetMasterLedgerFinTxJoin.CreditedAccountIds(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerFinTxJoin.creditedAccountIds);


   CARAPI SetMasterLedgerFinTxJoin.DebitedAccountIds(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerFinTxJoin.debitedAccountIds);

    CARAPI GetMasterLedgerFinTxJoin.DebitedAccountIds(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerFinTxJoin.debitedAccountIds);


   CARAPI SetMasterLedgerFinTxJoin.CreditedClassIds(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerFinTxJoin.creditedClassIds);

    CARAPI GetMasterLedgerFinTxJoin.CreditedClassIds(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerFinTxJoin.creditedClassIds);


   CARAPI SetMasterLedgerFinTxJoin.DebitedClassIds(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerFinTxJoin.debitedClassIds);

    CARAPI GetMasterLedgerFinTxJoin.DebitedClassIds(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerFinTxJoin.debitedClassIds);


   CARAPI SetMasterLedgerFinTxJoin.CreditedAmounts(
     /* [in] */ ArrayOf<Double> CFinance.masterLedgerFinTxJoin.creditedAmounts);

    CARAPI GetMasterLedgerFinTxJoin.CreditedAmounts(
     [out, callee] ArrayOf<Double>* CFinance.masterLedgerFinTxJoin.creditedAmounts);


   CARAPI SetMasterLedgerFinTxJoin.DebitedAmounts(
     /* [in] */ ArrayOf<Double> CFinance.masterLedgerFinTxJoin.debitedAmounts);

    CARAPI GetMasterLedgerFinTxJoin.DebitedAmounts(
     [out, callee] ArrayOf<Double>* CFinance.masterLedgerFinTxJoin.debitedAmounts);


   CARAPI SetMasterLedgerFinTxJoin.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerFinTxJoin.businessChannelOwnerId);

    CARAPI GetMasterLedgerFinTxJoin.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerFinTxJoin.businessChannelOwnerId);


   CARAPI SetMasterLedgerAsCARAPI Set.MasterLedgerAsCARAPI SetId(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.masterLedgerAsCARAPI SetId);

    CARAPI GetMasterLedgerAsCARAPI Set.MasterLedgerAsCARAPI SetId(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.masterLedgerAsCARAPI SetId);


   CARAPI SetMasterLedgerAsCARAPI Set.BankBSB(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.bankBSB);

    CARAPI GetMasterLedgerAsCARAPI Set.BankBSB(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.bankBSB);


   CARAPI SetMasterLedgerAsCARAPI Set.BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.bankAccountNumber);

    CARAPI GetMasterLedgerAsCARAPI Set.BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.bankAccountNumber);


   CARAPI SetMasterLedgerAsCARAPI Set.NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.nameOnBankAccount);

    CARAPI GetMasterLedgerAsCARAPI Set.NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.nameOnBankAccount);


   CARAPI SetMasterLedgerAsCARAPI Set.Description(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.description);

    CARAPI GetMasterLedgerAsCARAPI Set.Description(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.description);


   CARAPI SetMasterLedgerAsCARAPI Set.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerAsCARAPI Set.docRefs);

    CARAPI GetMasterLedgerAsCARAPI Set.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerAsCARAPI Set.docRefs);


   CARAPI SetMasterLedgerAsCARAPI Set.FeeId(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.feeId);

    CARAPI GetMasterLedgerAsCARAPI Set.FeeId(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.feeId);


   CARAPI SetMasterLedgerAsCARAPI Set.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerAsCARAPI Set.masLedgeFinTxNum);

    CARAPI GetMasterLedgerAsCARAPI Set.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerAsCARAPI Set.masLedgeFinTxNum);


   CARAPI SetMasterLedgerAsCARAPI Set.Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level1AccountName);

    CARAPI GetMasterLedgerAsCARAPI Set.Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level1AccountName);


   CARAPI SetMasterLedgerAsCARAPI Set.Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level1AccountNum);

    CARAPI GetMasterLedgerAsCARAPI Set.Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level1AccountNum);


   CARAPI SetMasterLedgerAsCARAPI Set.Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level2AccountName);

    CARAPI GetMasterLedgerAsCARAPI Set.Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level2AccountName);


   CARAPI SetMasterLedgerAsCARAPI Set.Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level2AccountNum);

    CARAPI GetMasterLedgerAsCARAPI Set.Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level2AccountNum);


   CARAPI SetMasterLedgerAsCARAPI Set.Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level3AccountName);

    CARAPI GetMasterLedgerAsCARAPI Set.Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level3AccountName);


   CARAPI SetMasterLedgerAsCARAPI Set.Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level3AccountNum);

    CARAPI GetMasterLedgerAsCARAPI Set.Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level3AccountNum);


   CARAPI SetMasterLedgerAsCARAPI Set.Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level4AccountName);

    CARAPI GetMasterLedgerAsCARAPI Set.Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level4AccountName);


   CARAPI SetMasterLedgerAsCARAPI Set.Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level4AccountNum);

    CARAPI GetMasterLedgerAsCARAPI Set.Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level4AccountNum);


   CARAPI SetMasterLedgerAsCARAPI Set.Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level5AccountName);

    CARAPI GetMasterLedgerAsCARAPI Set.Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level5AccountName);


   CARAPI SetMasterLedgerAsCARAPI Set.Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level5AccountNum);

    CARAPI GetMasterLedgerAsCARAPI Set.Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level5AccountNum);


   CARAPI SetMasterLedgerAsCARAPI Set.Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level6AccountName);

    CARAPI GetMasterLedgerAsCARAPI Set.Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level6AccountName);


   CARAPI SetMasterLedgerAsCARAPI Set.Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level6AccountNum);

    CARAPI GetMasterLedgerAsCARAPI Set.Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level6AccountNum);


   CARAPI SetMasterLedgerAsCARAPI Set.Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level1ClassName);

    CARAPI GetMasterLedgerAsCARAPI Set.Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level1ClassName);


   CARAPI SetMasterLedgerAsCARAPI Set.Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level2ClassName);

    CARAPI GetMasterLedgerAsCARAPI Set.Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level2ClassName);


   CARAPI SetMasterLedgerAsCARAPI Set.Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.level3ClassName);

    CARAPI GetMasterLedgerAsCARAPI Set.Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.level3ClassName);


   CARAPI SetMasterLedgerAsCARAPI Set.TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.transactionEffective);

    CARAPI GetMasterLedgerAsCARAPI Set.TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.transactionEffective);


   CARAPI SetMasterLedgerAsCARAPI Set.MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerAsCARAPI Set.masLedgeFinTxId);

    CARAPI GetMasterLedgerAsCARAPI Set.MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerAsCARAPI Set.masLedgeFinTxId);


   CARAPI SetMasterLedgerAsCARAPI Set.Cr(
     /* [in] */ Double CFinance.masterLedgerAsCARAPI Set.cr);

    CARAPI GetMasterLedgerAsCARAPI Set.Cr(
     /* [out] */ Double* CFinance.masterLedgerAsCARAPI Set.cr);


   CARAPI SetMasterLedgerAsCARAPI Set.Dr(
     /* [in] */ Double CFinance.masterLedgerAsCARAPI Set.dr);

    CARAPI GetMasterLedgerAsCARAPI Set.Dr(
     /* [out] */ Double* CFinance.masterLedgerAsCARAPI Set.dr);


   CARAPI SetMasterLedgerAsCARAPI Set.Bal(
     /* [in] */ Double CFinance.masterLedgerAsCARAPI Set.bal);

    CARAPI GetMasterLedgerAsCARAPI Set.Bal(
     /* [out] */ Double* CFinance.masterLedgerAsCARAPI Set.bal);


   CARAPI SetMasterLedgerAsCARAPI Set.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerAsCARAPI Set.businessChannelOwnerId);

    CARAPI GetMasterLedgerAsCARAPI Set.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerAsCARAPI Set.businessChannelOwnerId);


   CARAPI SetMasterLedgerAsCARAPI Set.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerAsCARAPI Set.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerAsCARAPI Set.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerAsCARAPI Set.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerAsCARAPI Set.ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerAsCARAPI Set.chartOfAccountsId);

    CARAPI GetMasterLedgerAsCARAPI Set.ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerAsCARAPI Set.chartOfAccountsId);


   CARAPI SetMasterLedgerAsCARAPI Set.ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerAsCARAPI Set.chartOfClassesId);

    CARAPI GetMasterLedgerAsCARAPI Set.ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerAsCARAPI Set.chartOfClassesId);


   CARAPI SetMasterLedgerAsCARAPI Set.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerAsCARAPI Set.branchId);

    CARAPI GetMasterLedgerAsCARAPI Set.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerAsCARAPI Set.branchId);


   CARAPI SetMasterLedgerAsCARAPI Set.DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerAsCARAPI Set.departmentId);

    CARAPI GetMasterLedgerAsCARAPI Set.DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerAsCARAPI Set.departmentId);


   CARAPI SetMasterLedgerAsCARAPI Set.BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerAsCARAPI Set.bankId);

    CARAPI GetMasterLedgerAsCARAPI Set.BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerAsCARAPI Set.bankId);


   CARAPI SetMasterLedgerAsCARAPI Set.ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerAsCARAPI Set.programId);

    CARAPI GetMasterLedgerAsCARAPI Set.ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerAsCARAPI Set.programId);


   CARAPI SetMasterLedgerAsCARAPI Set.ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerAsCARAPI Set.projectId);

    CARAPI GetMasterLedgerAsCARAPI Set.ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerAsCARAPI Set.projectId);


   CARAPI SetMasterLedgerAsCARAPI Set.ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerAsCARAPI Set.itemId);

    CARAPI GetMasterLedgerAsCARAPI Set.ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerAsCARAPI Set.itemId);


   CARAPI SetMasterLedgerAsCARAPI Set.JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerAsCARAPI Set.jobId);

    CARAPI GetMasterLedgerAsCARAPI Set.JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerAsCARAPI Set.jobId);


   CARAPI SetMasterLedgerAsCARAPI Set.ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerAsCARAPI Set.serviceId);

    CARAPI GetMasterLedgerAsCARAPI Set.ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerAsCARAPI Set.serviceId);


   CARAPI SetMasterLedgerAsCARAPI Set.CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerAsCARAPI Set.customerId);

    CARAPI GetMasterLedgerAsCARAPI Set.CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerAsCARAPI Set.customerId);


   CARAPI SetMasterLedgerAsCARAPI Set.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerAsCARAPI Set.supplierId);

    CARAPI GetMasterLedgerAsCARAPI Set.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerAsCARAPI Set.supplierId);


   CARAPI SetMasterLedgerAsCARAPI Set.PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerAsCARAPI Set.purchOrderId);

    CARAPI GetMasterLedgerAsCARAPI Set.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerAsCARAPI Set.purchOrderId);


   CARAPI SetMasterLedgerAsCARAPI Set.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerAsCARAPI Set.masterSalesOrderId);

    CARAPI GetMasterLedgerAsCARAPI Set.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerAsCARAPI Set.masterSalesOrderId);


   CARAPI SetMasterLedgerAsCARAPI Set.InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerAsCARAPI Set.invoiceId);

    CARAPI GetMasterLedgerAsCARAPI Set.InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerAsCARAPI Set.invoiceId);


   CARAPI SetMasterLedgerAsCARAPI Set.BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerAsCARAPI Set.billId);

    CARAPI GetMasterLedgerAsCARAPI Set.BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerAsCARAPI Set.billId);


   CARAPI SetMasterLedgerLiability.MasterLedgerLiabilityId(
     /* [in] */ const String& CFinance.masterLedgerLiability.masterLedgerLiabilityId);

    CARAPI GetMasterLedgerLiability.MasterLedgerLiabilityId(
     /* [out] */ String* CFinance.masterLedgerLiability.masterLedgerLiabilityId);


   CARAPI SetMasterLedgerLiability.BankBSB(
     /* [in] */ const String& CFinance.masterLedgerLiability.bankBSB);

    CARAPI GetMasterLedgerLiability.BankBSB(
     /* [out] */ String* CFinance.masterLedgerLiability.bankBSB);


   CARAPI SetMasterLedgerLiability.BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerLiability.bankAccountNumber);

    CARAPI GetMasterLedgerLiability.BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerLiability.bankAccountNumber);


   CARAPI SetMasterLedgerLiability.NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerLiability.nameOnBankAccount);

    CARAPI GetMasterLedgerLiability.NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerLiability.nameOnBankAccount);


   CARAPI SetMasterLedgerLiability.Description(
     /* [in] */ const String& CFinance.masterLedgerLiability.description);

    CARAPI GetMasterLedgerLiability.Description(
     /* [out] */ String* CFinance.masterLedgerLiability.description);


   CARAPI SetMasterLedgerLiability.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerLiability.docRefs);

    CARAPI GetMasterLedgerLiability.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerLiability.docRefs);


   CARAPI SetMasterLedgerLiability.FeeId(
     /* [in] */ const String& CFinance.masterLedgerLiability.feeId);

    CARAPI GetMasterLedgerLiability.FeeId(
     /* [out] */ String* CFinance.masterLedgerLiability.feeId);


   CARAPI SetMasterLedgerLiability.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerLiability.masLedgeFinTxNum);

    CARAPI GetMasterLedgerLiability.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerLiability.masLedgeFinTxNum);


   CARAPI SetMasterLedgerLiability.Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level1AccountName);

    CARAPI GetMasterLedgerLiability.Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level1AccountName);


   CARAPI SetMasterLedgerLiability.Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level1AccountNum);

    CARAPI GetMasterLedgerLiability.Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level1AccountNum);


   CARAPI SetMasterLedgerLiability.Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level2AccountName);

    CARAPI GetMasterLedgerLiability.Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level2AccountName);


   CARAPI SetMasterLedgerLiability.Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level2AccountNum);

    CARAPI GetMasterLedgerLiability.Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level2AccountNum);


   CARAPI SetMasterLedgerLiability.Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level3AccountName);

    CARAPI GetMasterLedgerLiability.Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level3AccountName);


   CARAPI SetMasterLedgerLiability.Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level3AccountNum);

    CARAPI GetMasterLedgerLiability.Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level3AccountNum);


   CARAPI SetMasterLedgerLiability.Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level4AccountName);

    CARAPI GetMasterLedgerLiability.Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level4AccountName);


   CARAPI SetMasterLedgerLiability.Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level4AccountNum);

    CARAPI GetMasterLedgerLiability.Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level4AccountNum);


   CARAPI SetMasterLedgerLiability.Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level5AccountName);

    CARAPI GetMasterLedgerLiability.Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level5AccountName);


   CARAPI SetMasterLedgerLiability.Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level5AccountNum);

    CARAPI GetMasterLedgerLiability.Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level5AccountNum);


   CARAPI SetMasterLedgerLiability.Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level6AccountName);

    CARAPI GetMasterLedgerLiability.Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level6AccountName);


   CARAPI SetMasterLedgerLiability.Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level6AccountNum);

    CARAPI GetMasterLedgerLiability.Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level6AccountNum);


   CARAPI SetMasterLedgerLiability.Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level1ClassName);

    CARAPI GetMasterLedgerLiability.Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerLiability.level1ClassName);


   CARAPI SetMasterLedgerLiability.Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level2ClassName);

    CARAPI GetMasterLedgerLiability.Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerLiability.level2ClassName);


   CARAPI SetMasterLedgerLiability.Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level3ClassName);

    CARAPI GetMasterLedgerLiability.Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerLiability.level3ClassName);


   CARAPI SetMasterLedgerLiability.TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerLiability.transactionEffective);

    CARAPI GetMasterLedgerLiability.TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerLiability.transactionEffective);


   CARAPI SetMasterLedgerLiability.MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerLiability.masLedgeFinTxId);

    CARAPI GetMasterLedgerLiability.MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerLiability.masLedgeFinTxId);


   CARAPI SetMasterLedgerLiability.Cr(
     /* [in] */ Double CFinance.masterLedgerLiability.cr);

    CARAPI GetMasterLedgerLiability.Cr(
     /* [out] */ Double* CFinance.masterLedgerLiability.cr);


   CARAPI SetMasterLedgerLiability.Dr(
     /* [in] */ Double CFinance.masterLedgerLiability.dr);

    CARAPI GetMasterLedgerLiability.Dr(
     /* [out] */ Double* CFinance.masterLedgerLiability.dr);


   CARAPI SetMasterLedgerLiability.Bal(
     /* [in] */ Double CFinance.masterLedgerLiability.bal);

    CARAPI GetMasterLedgerLiability.Bal(
     /* [out] */ Double* CFinance.masterLedgerLiability.bal);


   CARAPI SetMasterLedgerLiability.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerLiability.businessChannelOwnerId);

    CARAPI GetMasterLedgerLiability.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerLiability.businessChannelOwnerId);


   CARAPI SetMasterLedgerLiability.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerLiability.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerLiability.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerLiability.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerLiability.ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerLiability.chartOfAccountsId);

    CARAPI GetMasterLedgerLiability.ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerLiability.chartOfAccountsId);


   CARAPI SetMasterLedgerLiability.ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerLiability.chartOfClassesId);

    CARAPI GetMasterLedgerLiability.ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerLiability.chartOfClassesId);


   CARAPI SetMasterLedgerLiability.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerLiability.branchId);

    CARAPI GetMasterLedgerLiability.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerLiability.branchId);


   CARAPI SetMasterLedgerLiability.DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerLiability.departmentId);

    CARAPI GetMasterLedgerLiability.DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerLiability.departmentId);


   CARAPI SetMasterLedgerLiability.BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerLiability.bankId);

    CARAPI GetMasterLedgerLiability.BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerLiability.bankId);


   CARAPI SetMasterLedgerLiability.ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerLiability.programId);

    CARAPI GetMasterLedgerLiability.ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerLiability.programId);


   CARAPI SetMasterLedgerLiability.ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerLiability.projectId);

    CARAPI GetMasterLedgerLiability.ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerLiability.projectId);


   CARAPI SetMasterLedgerLiability.ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerLiability.itemId);

    CARAPI GetMasterLedgerLiability.ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerLiability.itemId);


   CARAPI SetMasterLedgerLiability.JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerLiability.jobId);

    CARAPI GetMasterLedgerLiability.JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerLiability.jobId);


   CARAPI SetMasterLedgerLiability.ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerLiability.serviceId);

    CARAPI GetMasterLedgerLiability.ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerLiability.serviceId);


   CARAPI SetMasterLedgerLiability.CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerLiability.customerId);

    CARAPI GetMasterLedgerLiability.CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerLiability.customerId);


   CARAPI SetMasterLedgerLiability.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerLiability.supplierId);

    CARAPI GetMasterLedgerLiability.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerLiability.supplierId);


   CARAPI SetMasterLedgerLiability.PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerLiability.purchOrderId);

    CARAPI GetMasterLedgerLiability.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerLiability.purchOrderId);


   CARAPI SetMasterLedgerLiability.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerLiability.masterSalesOrderId);

    CARAPI GetMasterLedgerLiability.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerLiability.masterSalesOrderId);


   CARAPI SetMasterLedgerLiability.InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerLiability.invoiceId);

    CARAPI GetMasterLedgerLiability.InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerLiability.invoiceId);


   CARAPI SetMasterLedgerLiability.BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerLiability.billId);

    CARAPI GetMasterLedgerLiability.BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerLiability.billId);


   CARAPI SetMasterLedgerEquity.MasterLedgerEquityId(
     /* [in] */ const String& CFinance.masterLedgerEquity.masterLedgerEquityId);

    CARAPI GetMasterLedgerEquity.MasterLedgerEquityId(
     /* [out] */ String* CFinance.masterLedgerEquity.masterLedgerEquityId);


   CARAPI SetMasterLedgerEquity.BankBSB(
     /* [in] */ const String& CFinance.masterLedgerEquity.bankBSB);

    CARAPI GetMasterLedgerEquity.BankBSB(
     /* [out] */ String* CFinance.masterLedgerEquity.bankBSB);


   CARAPI SetMasterLedgerEquity.BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerEquity.bankAccountNumber);

    CARAPI GetMasterLedgerEquity.BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerEquity.bankAccountNumber);


   CARAPI SetMasterLedgerEquity.NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerEquity.nameOnBankAccount);

    CARAPI GetMasterLedgerEquity.NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerEquity.nameOnBankAccount);


   CARAPI SetMasterLedgerEquity.Description(
     /* [in] */ const String& CFinance.masterLedgerEquity.description);

    CARAPI GetMasterLedgerEquity.Description(
     /* [out] */ String* CFinance.masterLedgerEquity.description);


   CARAPI SetMasterLedgerEquity.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerEquity.docRefs);

    CARAPI GetMasterLedgerEquity.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerEquity.docRefs);


   CARAPI SetMasterLedgerEquity.FeeId(
     /* [in] */ const String& CFinance.masterLedgerEquity.feeId);

    CARAPI GetMasterLedgerEquity.FeeId(
     /* [out] */ String* CFinance.masterLedgerEquity.feeId);


   CARAPI SetMasterLedgerEquity.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerEquity.masLedgeFinTxNum);

    CARAPI GetMasterLedgerEquity.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerEquity.masLedgeFinTxNum);


   CARAPI SetMasterLedgerEquity.Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level1AccountName);

    CARAPI GetMasterLedgerEquity.Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level1AccountName);


   CARAPI SetMasterLedgerEquity.Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level1AccountNum);

    CARAPI GetMasterLedgerEquity.Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level1AccountNum);


   CARAPI SetMasterLedgerEquity.Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level2AccountName);

    CARAPI GetMasterLedgerEquity.Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level2AccountName);


   CARAPI SetMasterLedgerEquity.Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level2AccountNum);

    CARAPI GetMasterLedgerEquity.Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level2AccountNum);


   CARAPI SetMasterLedgerEquity.Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level3AccountName);

    CARAPI GetMasterLedgerEquity.Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level3AccountName);


   CARAPI SetMasterLedgerEquity.Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level3AccountNum);

    CARAPI GetMasterLedgerEquity.Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level3AccountNum);


   CARAPI SetMasterLedgerEquity.Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level4AccountName);

    CARAPI GetMasterLedgerEquity.Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level4AccountName);


   CARAPI SetMasterLedgerEquity.Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level4AccountNum);

    CARAPI GetMasterLedgerEquity.Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level4AccountNum);


   CARAPI SetMasterLedgerEquity.Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level5AccountName);

    CARAPI GetMasterLedgerEquity.Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level5AccountName);


   CARAPI SetMasterLedgerEquity.Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level5AccountNum);

    CARAPI GetMasterLedgerEquity.Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level5AccountNum);


   CARAPI SetMasterLedgerEquity.Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level6AccountName);

    CARAPI GetMasterLedgerEquity.Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level6AccountName);


   CARAPI SetMasterLedgerEquity.Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level6AccountNum);

    CARAPI GetMasterLedgerEquity.Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level6AccountNum);


   CARAPI SetMasterLedgerEquity.Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level1ClassName);

    CARAPI GetMasterLedgerEquity.Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerEquity.level1ClassName);


   CARAPI SetMasterLedgerEquity.Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level2ClassName);

    CARAPI GetMasterLedgerEquity.Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerEquity.level2ClassName);


   CARAPI SetMasterLedgerEquity.Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level3ClassName);

    CARAPI GetMasterLedgerEquity.Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerEquity.level3ClassName);


   CARAPI SetMasterLedgerEquity.TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerEquity.transactionEffective);

    CARAPI GetMasterLedgerEquity.TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerEquity.transactionEffective);


   CARAPI SetMasterLedgerEquity.MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerEquity.masLedgeFinTxId);

    CARAPI GetMasterLedgerEquity.MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerEquity.masLedgeFinTxId);


   CARAPI SetMasterLedgerEquity.Cr(
     /* [in] */ Double CFinance.masterLedgerEquity.cr);

    CARAPI GetMasterLedgerEquity.Cr(
     /* [out] */ Double* CFinance.masterLedgerEquity.cr);


   CARAPI SetMasterLedgerEquity.Dr(
     /* [in] */ Double CFinance.masterLedgerEquity.dr);

    CARAPI GetMasterLedgerEquity.Dr(
     /* [out] */ Double* CFinance.masterLedgerEquity.dr);


   CARAPI SetMasterLedgerEquity.Bal(
     /* [in] */ Double CFinance.masterLedgerEquity.bal);

    CARAPI GetMasterLedgerEquity.Bal(
     /* [out] */ Double* CFinance.masterLedgerEquity.bal);


   CARAPI SetMasterLedgerEquity.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerEquity.businessChannelOwnerId);

    CARAPI GetMasterLedgerEquity.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerEquity.businessChannelOwnerId);


   CARAPI SetMasterLedgerEquity.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerEquity.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerEquity.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerEquity.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerEquity.ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerEquity.chartOfAccountsId);

    CARAPI GetMasterLedgerEquity.ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerEquity.chartOfAccountsId);


   CARAPI SetMasterLedgerEquity.ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerEquity.chartOfClassesId);

    CARAPI GetMasterLedgerEquity.ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerEquity.chartOfClassesId);


   CARAPI SetMasterLedgerEquity.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerEquity.branchId);

    CARAPI GetMasterLedgerEquity.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerEquity.branchId);


   CARAPI SetMasterLedgerEquity.DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerEquity.departmentId);

    CARAPI GetMasterLedgerEquity.DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerEquity.departmentId);


   CARAPI SetMasterLedgerEquity.BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerEquity.bankId);

    CARAPI GetMasterLedgerEquity.BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerEquity.bankId);


   CARAPI SetMasterLedgerEquity.ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerEquity.programId);

    CARAPI GetMasterLedgerEquity.ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerEquity.programId);


   CARAPI SetMasterLedgerEquity.ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerEquity.projectId);

    CARAPI GetMasterLedgerEquity.ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerEquity.projectId);


   CARAPI SetMasterLedgerEquity.ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerEquity.itemId);

    CARAPI GetMasterLedgerEquity.ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerEquity.itemId);


   CARAPI SetMasterLedgerEquity.JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerEquity.jobId);

    CARAPI GetMasterLedgerEquity.JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerEquity.jobId);


   CARAPI SetMasterLedgerEquity.ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerEquity.serviceId);

    CARAPI GetMasterLedgerEquity.ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerEquity.serviceId);


   CARAPI SetMasterLedgerEquity.CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerEquity.customerId);

    CARAPI GetMasterLedgerEquity.CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerEquity.customerId);


   CARAPI SetMasterLedgerEquity.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerEquity.supplierId);

    CARAPI GetMasterLedgerEquity.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerEquity.supplierId);


   CARAPI SetMasterLedgerEquity.PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerEquity.purchOrderId);

    CARAPI GetMasterLedgerEquity.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerEquity.purchOrderId);


   CARAPI SetMasterLedgerEquity.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerEquity.masterSalesOrderId);

    CARAPI GetMasterLedgerEquity.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerEquity.masterSalesOrderId);


   CARAPI SetMasterLedgerEquity.InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerEquity.invoiceId);

    CARAPI GetMasterLedgerEquity.InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerEquity.invoiceId);


   CARAPI SetMasterLedgerEquity.BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerEquity.billId);

    CARAPI GetMasterLedgerEquity.BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerEquity.billId);


   CARAPI SetMasterLedgerSuspense.MasterLedgerSuspenseId(
     /* [in] */ const String& CFinance.masterLedgerSuspense.masterLedgerSuspenseId);

    CARAPI GetMasterLedgerSuspense.MasterLedgerSuspenseId(
     /* [out] */ String* CFinance.masterLedgerSuspense.masterLedgerSuspenseId);


   CARAPI SetMasterLedgerSuspense.BankBSB(
     /* [in] */ const String& CFinance.masterLedgerSuspense.bankBSB);

    CARAPI GetMasterLedgerSuspense.BankBSB(
     /* [out] */ String* CFinance.masterLedgerSuspense.bankBSB);


   CARAPI SetMasterLedgerSuspense.BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerSuspense.bankAccountNumber);

    CARAPI GetMasterLedgerSuspense.BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerSuspense.bankAccountNumber);


   CARAPI SetMasterLedgerSuspense.NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerSuspense.nameOnBankAccount);

    CARAPI GetMasterLedgerSuspense.NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerSuspense.nameOnBankAccount);


   CARAPI SetMasterLedgerSuspense.Description(
     /* [in] */ const String& CFinance.masterLedgerSuspense.description);

    CARAPI GetMasterLedgerSuspense.Description(
     /* [out] */ String* CFinance.masterLedgerSuspense.description);


   CARAPI SetMasterLedgerSuspense.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerSuspense.docRefs);

    CARAPI GetMasterLedgerSuspense.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerSuspense.docRefs);


   CARAPI SetMasterLedgerSuspense.FeeId(
     /* [in] */ const String& CFinance.masterLedgerSuspense.feeId);

    CARAPI GetMasterLedgerSuspense.FeeId(
     /* [out] */ String* CFinance.masterLedgerSuspense.feeId);


   CARAPI SetMasterLedgerSuspense.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerSuspense.masLedgeFinTxNum);

    CARAPI GetMasterLedgerSuspense.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerSuspense.masLedgeFinTxNum);


   CARAPI SetMasterLedgerSuspense.Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level1AccountName);

    CARAPI GetMasterLedgerSuspense.Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level1AccountName);


   CARAPI SetMasterLedgerSuspense.Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level1AccountNum);

    CARAPI GetMasterLedgerSuspense.Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level1AccountNum);


   CARAPI SetMasterLedgerSuspense.Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level2AccountName);

    CARAPI GetMasterLedgerSuspense.Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level2AccountName);


   CARAPI SetMasterLedgerSuspense.Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level2AccountNum);

    CARAPI GetMasterLedgerSuspense.Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level2AccountNum);


   CARAPI SetMasterLedgerSuspense.Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level3AccountName);

    CARAPI GetMasterLedgerSuspense.Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level3AccountName);


   CARAPI SetMasterLedgerSuspense.Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level3AccountNum);

    CARAPI GetMasterLedgerSuspense.Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level3AccountNum);


   CARAPI SetMasterLedgerSuspense.Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level4AccountName);

    CARAPI GetMasterLedgerSuspense.Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level4AccountName);


   CARAPI SetMasterLedgerSuspense.Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level4AccountNum);

    CARAPI GetMasterLedgerSuspense.Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level4AccountNum);


   CARAPI SetMasterLedgerSuspense.Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level5AccountName);

    CARAPI GetMasterLedgerSuspense.Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level5AccountName);


   CARAPI SetMasterLedgerSuspense.Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level5AccountNum);

    CARAPI GetMasterLedgerSuspense.Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level5AccountNum);


   CARAPI SetMasterLedgerSuspense.Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level6AccountName);

    CARAPI GetMasterLedgerSuspense.Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level6AccountName);


   CARAPI SetMasterLedgerSuspense.Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level6AccountNum);

    CARAPI GetMasterLedgerSuspense.Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level6AccountNum);


   CARAPI SetMasterLedgerSuspense.Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level1ClassName);

    CARAPI GetMasterLedgerSuspense.Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level1ClassName);


   CARAPI SetMasterLedgerSuspense.Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level2ClassName);

    CARAPI GetMasterLedgerSuspense.Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level2ClassName);


   CARAPI SetMasterLedgerSuspense.Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level3ClassName);

    CARAPI GetMasterLedgerSuspense.Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level3ClassName);


   CARAPI SetMasterLedgerSuspense.TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerSuspense.transactionEffective);

    CARAPI GetMasterLedgerSuspense.TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerSuspense.transactionEffective);


   CARAPI SetMasterLedgerSuspense.MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerSuspense.masLedgeFinTxId);

    CARAPI GetMasterLedgerSuspense.MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerSuspense.masLedgeFinTxId);


   CARAPI SetMasterLedgerSuspense.Cr(
     /* [in] */ Double CFinance.masterLedgerSuspense.cr);

    CARAPI GetMasterLedgerSuspense.Cr(
     /* [out] */ Double* CFinance.masterLedgerSuspense.cr);


   CARAPI SetMasterLedgerSuspense.Dr(
     /* [in] */ Double CFinance.masterLedgerSuspense.dr);

    CARAPI GetMasterLedgerSuspense.Dr(
     /* [out] */ Double* CFinance.masterLedgerSuspense.dr);


   CARAPI SetMasterLedgerSuspense.Bal(
     /* [in] */ Double CFinance.masterLedgerSuspense.bal);

    CARAPI GetMasterLedgerSuspense.Bal(
     /* [out] */ Double* CFinance.masterLedgerSuspense.bal);


   CARAPI SetMasterLedgerSuspense.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerSuspense.businessChannelOwnerId);

    CARAPI GetMasterLedgerSuspense.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerSuspense.businessChannelOwnerId);


   CARAPI SetMasterLedgerSuspense.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerSuspense.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerSuspense.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerSuspense.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerSuspense.ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerSuspense.chartOfAccountsId);

    CARAPI GetMasterLedgerSuspense.ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerSuspense.chartOfAccountsId);


   CARAPI SetMasterLedgerSuspense.ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerSuspense.chartOfClassesId);

    CARAPI GetMasterLedgerSuspense.ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerSuspense.chartOfClassesId);


   CARAPI SetMasterLedgerSuspense.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerSuspense.branchId);

    CARAPI GetMasterLedgerSuspense.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerSuspense.branchId);


   CARAPI SetMasterLedgerSuspense.DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerSuspense.departmentId);

    CARAPI GetMasterLedgerSuspense.DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerSuspense.departmentId);


   CARAPI SetMasterLedgerSuspense.BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerSuspense.bankId);

    CARAPI GetMasterLedgerSuspense.BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerSuspense.bankId);


   CARAPI SetMasterLedgerSuspense.ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerSuspense.programId);

    CARAPI GetMasterLedgerSuspense.ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerSuspense.programId);


   CARAPI SetMasterLedgerSuspense.ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerSuspense.projectId);

    CARAPI GetMasterLedgerSuspense.ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerSuspense.projectId);


   CARAPI SetMasterLedgerSuspense.ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerSuspense.itemId);

    CARAPI GetMasterLedgerSuspense.ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerSuspense.itemId);


   CARAPI SetMasterLedgerSuspense.JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerSuspense.jobId);

    CARAPI GetMasterLedgerSuspense.JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerSuspense.jobId);


   CARAPI SetMasterLedgerSuspense.ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerSuspense.serviceId);

    CARAPI GetMasterLedgerSuspense.ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerSuspense.serviceId);


   CARAPI SetMasterLedgerSuspense.CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerSuspense.customerId);

    CARAPI GetMasterLedgerSuspense.CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerSuspense.customerId);


   CARAPI SetMasterLedgerSuspense.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerSuspense.supplierId);

    CARAPI GetMasterLedgerSuspense.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerSuspense.supplierId);


   CARAPI SetMasterLedgerSuspense.PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerSuspense.purchOrderId);

    CARAPI GetMasterLedgerSuspense.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerSuspense.purchOrderId);


   CARAPI SetMasterLedgerSuspense.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerSuspense.masterSalesOrderId);

    CARAPI GetMasterLedgerSuspense.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerSuspense.masterSalesOrderId);


   CARAPI SetMasterLedgerSuspense.InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerSuspense.invoiceId);

    CARAPI GetMasterLedgerSuspense.InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerSuspense.invoiceId);


   CARAPI SetMasterLedgerSuspense.BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerSuspense.billId);

    CARAPI GetMasterLedgerSuspense.BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerSuspense.billId);


   CARAPI SetMasterLedgerIncome.MasterLedgerIncomeId(
     /* [in] */ const String& CFinance.masterLedgerIncome.masterLedgerIncomeId);

    CARAPI GetMasterLedgerIncome.MasterLedgerIncomeId(
     /* [out] */ String* CFinance.masterLedgerIncome.masterLedgerIncomeId);


   CARAPI SetMasterLedgerIncome.BankBSB(
     /* [in] */ const String& CFinance.masterLedgerIncome.bankBSB);

    CARAPI GetMasterLedgerIncome.BankBSB(
     /* [out] */ String* CFinance.masterLedgerIncome.bankBSB);


   CARAPI SetMasterLedgerIncome.BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerIncome.bankAccountNumber);

    CARAPI GetMasterLedgerIncome.BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerIncome.bankAccountNumber);


   CARAPI SetMasterLedgerIncome.NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerIncome.nameOnBankAccount);

    CARAPI GetMasterLedgerIncome.NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerIncome.nameOnBankAccount);


   CARAPI SetMasterLedgerIncome.Description(
     /* [in] */ const String& CFinance.masterLedgerIncome.description);

    CARAPI GetMasterLedgerIncome.Description(
     /* [out] */ String* CFinance.masterLedgerIncome.description);


   CARAPI SetMasterLedgerIncome.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerIncome.docRefs);

    CARAPI GetMasterLedgerIncome.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerIncome.docRefs);


   CARAPI SetMasterLedgerIncome.FeeId(
     /* [in] */ const String& CFinance.masterLedgerIncome.feeId);

    CARAPI GetMasterLedgerIncome.FeeId(
     /* [out] */ String* CFinance.masterLedgerIncome.feeId);


   CARAPI SetMasterLedgerIncome.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerIncome.masLedgeFinTxNum);

    CARAPI GetMasterLedgerIncome.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerIncome.masLedgeFinTxNum);


   CARAPI SetMasterLedgerIncome.Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level1AccountName);

    CARAPI GetMasterLedgerIncome.Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level1AccountName);


   CARAPI SetMasterLedgerIncome.Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level1AccountNum);

    CARAPI GetMasterLedgerIncome.Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level1AccountNum);


   CARAPI SetMasterLedgerIncome.Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level2AccountName);

    CARAPI GetMasterLedgerIncome.Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level2AccountName);


   CARAPI SetMasterLedgerIncome.Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level2AccountNum);

    CARAPI GetMasterLedgerIncome.Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level2AccountNum);


   CARAPI SetMasterLedgerIncome.Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level3AccountName);

    CARAPI GetMasterLedgerIncome.Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level3AccountName);


   CARAPI SetMasterLedgerIncome.Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level3AccountNum);

    CARAPI GetMasterLedgerIncome.Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level3AccountNum);


   CARAPI SetMasterLedgerIncome.Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level4AccountName);

    CARAPI GetMasterLedgerIncome.Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level4AccountName);


   CARAPI SetMasterLedgerIncome.Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level4AccountNum);

    CARAPI GetMasterLedgerIncome.Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level4AccountNum);


   CARAPI SetMasterLedgerIncome.Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level5AccountName);

    CARAPI GetMasterLedgerIncome.Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level5AccountName);


   CARAPI SetMasterLedgerIncome.Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level5AccountNum);

    CARAPI GetMasterLedgerIncome.Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level5AccountNum);


   CARAPI SetMasterLedgerIncome.Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level6AccountName);

    CARAPI GetMasterLedgerIncome.Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level6AccountName);


   CARAPI SetMasterLedgerIncome.Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level6AccountNum);

    CARAPI GetMasterLedgerIncome.Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level6AccountNum);


   CARAPI SetMasterLedgerIncome.Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level1ClassName);

    CARAPI GetMasterLedgerIncome.Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerIncome.level1ClassName);


   CARAPI SetMasterLedgerIncome.Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level2ClassName);

    CARAPI GetMasterLedgerIncome.Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerIncome.level2ClassName);


   CARAPI SetMasterLedgerIncome.Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level3ClassName);

    CARAPI GetMasterLedgerIncome.Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerIncome.level3ClassName);


   CARAPI SetMasterLedgerIncome.TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerIncome.transactionEffective);

    CARAPI GetMasterLedgerIncome.TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerIncome.transactionEffective);


   CARAPI SetMasterLedgerIncome.MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerIncome.masLedgeFinTxId);

    CARAPI GetMasterLedgerIncome.MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerIncome.masLedgeFinTxId);


   CARAPI SetMasterLedgerIncome.Cr(
     /* [in] */ Double CFinance.masterLedgerIncome.cr);

    CARAPI GetMasterLedgerIncome.Cr(
     /* [out] */ Double* CFinance.masterLedgerIncome.cr);


   CARAPI SetMasterLedgerIncome.Dr(
     /* [in] */ Double CFinance.masterLedgerIncome.dr);

    CARAPI GetMasterLedgerIncome.Dr(
     /* [out] */ Double* CFinance.masterLedgerIncome.dr);


   CARAPI SetMasterLedgerIncome.Bal(
     /* [in] */ Double CFinance.masterLedgerIncome.bal);

    CARAPI GetMasterLedgerIncome.Bal(
     /* [out] */ Double* CFinance.masterLedgerIncome.bal);


   CARAPI SetMasterLedgerIncome.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerIncome.businessChannelOwnerId);

    CARAPI GetMasterLedgerIncome.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerIncome.businessChannelOwnerId);


   CARAPI SetMasterLedgerIncome.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerIncome.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerIncome.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerIncome.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerIncome.ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerIncome.chartOfAccountsId);

    CARAPI GetMasterLedgerIncome.ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerIncome.chartOfAccountsId);


   CARAPI SetMasterLedgerIncome.ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerIncome.chartOfClassesId);

    CARAPI GetMasterLedgerIncome.ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerIncome.chartOfClassesId);


   CARAPI SetMasterLedgerIncome.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerIncome.branchId);

    CARAPI GetMasterLedgerIncome.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerIncome.branchId);


   CARAPI SetMasterLedgerIncome.DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerIncome.departmentId);

    CARAPI GetMasterLedgerIncome.DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerIncome.departmentId);


   CARAPI SetMasterLedgerIncome.BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerIncome.bankId);

    CARAPI GetMasterLedgerIncome.BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerIncome.bankId);


   CARAPI SetMasterLedgerIncome.ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerIncome.programId);

    CARAPI GetMasterLedgerIncome.ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerIncome.programId);


   CARAPI SetMasterLedgerIncome.ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerIncome.projectId);

    CARAPI GetMasterLedgerIncome.ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerIncome.projectId);


   CARAPI SetMasterLedgerIncome.ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerIncome.itemId);

    CARAPI GetMasterLedgerIncome.ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerIncome.itemId);


   CARAPI SetMasterLedgerIncome.JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerIncome.jobId);

    CARAPI GetMasterLedgerIncome.JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerIncome.jobId);


   CARAPI SetMasterLedgerIncome.ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerIncome.serviceId);

    CARAPI GetMasterLedgerIncome.ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerIncome.serviceId);


   CARAPI SetMasterLedgerIncome.CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerIncome.customerId);

    CARAPI GetMasterLedgerIncome.CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerIncome.customerId);


   CARAPI SetMasterLedgerIncome.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerIncome.supplierId);

    CARAPI GetMasterLedgerIncome.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerIncome.supplierId);


   CARAPI SetMasterLedgerIncome.PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerIncome.purchOrderId);

    CARAPI GetMasterLedgerIncome.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerIncome.purchOrderId);


   CARAPI SetMasterLedgerIncome.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerIncome.masterSalesOrderId);

    CARAPI GetMasterLedgerIncome.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerIncome.masterSalesOrderId);


   CARAPI SetMasterLedgerIncome.InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerIncome.invoiceId);

    CARAPI GetMasterLedgerIncome.InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerIncome.invoiceId);


   CARAPI SetMasterLedgerIncome.BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerIncome.billId);

    CARAPI GetMasterLedgerIncome.BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerIncome.billId);


   CARAPI SetMasterLedgerReturnsIn.MasterLedgerReturnsInId(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.masterLedgerReturnsInId);

    CARAPI GetMasterLedgerReturnsIn.MasterLedgerReturnsInId(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.masterLedgerReturnsInId);


   CARAPI SetMasterLedgerReturnsIn.BankBSB(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.bankBSB);

    CARAPI GetMasterLedgerReturnsIn.BankBSB(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.bankBSB);


   CARAPI SetMasterLedgerReturnsIn.BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.bankAccountNumber);

    CARAPI GetMasterLedgerReturnsIn.BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.bankAccountNumber);


   CARAPI SetMasterLedgerReturnsIn.NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.nameOnBankAccount);

    CARAPI GetMasterLedgerReturnsIn.NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.nameOnBankAccount);


   CARAPI SetMasterLedgerReturnsIn.Description(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.description);

    CARAPI GetMasterLedgerReturnsIn.Description(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.description);


   CARAPI SetMasterLedgerReturnsIn.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerReturnsIn.docRefs);

    CARAPI GetMasterLedgerReturnsIn.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerReturnsIn.docRefs);


   CARAPI SetMasterLedgerReturnsIn.FeeId(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.feeId);

    CARAPI GetMasterLedgerReturnsIn.FeeId(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.feeId);


   CARAPI SetMasterLedgerReturnsIn.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerReturnsIn.masLedgeFinTxNum);

    CARAPI GetMasterLedgerReturnsIn.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerReturnsIn.masLedgeFinTxNum);


   CARAPI SetMasterLedgerReturnsIn.Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level1AccountName);

    CARAPI GetMasterLedgerReturnsIn.Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level1AccountName);


   CARAPI SetMasterLedgerReturnsIn.Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level1AccountNum);

    CARAPI GetMasterLedgerReturnsIn.Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level1AccountNum);


   CARAPI SetMasterLedgerReturnsIn.Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level2AccountName);

    CARAPI GetMasterLedgerReturnsIn.Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level2AccountName);


   CARAPI SetMasterLedgerReturnsIn.Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level2AccountNum);

    CARAPI GetMasterLedgerReturnsIn.Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level2AccountNum);


   CARAPI SetMasterLedgerReturnsIn.Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level3AccountName);

    CARAPI GetMasterLedgerReturnsIn.Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level3AccountName);


   CARAPI SetMasterLedgerReturnsIn.Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level3AccountNum);

    CARAPI GetMasterLedgerReturnsIn.Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level3AccountNum);


   CARAPI SetMasterLedgerReturnsIn.Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level4AccountName);

    CARAPI GetMasterLedgerReturnsIn.Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level4AccountName);


   CARAPI SetMasterLedgerReturnsIn.Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level4AccountNum);

    CARAPI GetMasterLedgerReturnsIn.Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level4AccountNum);


   CARAPI SetMasterLedgerReturnsIn.Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level5AccountName);

    CARAPI GetMasterLedgerReturnsIn.Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level5AccountName);


   CARAPI SetMasterLedgerReturnsIn.Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level5AccountNum);

    CARAPI GetMasterLedgerReturnsIn.Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level5AccountNum);


   CARAPI SetMasterLedgerReturnsIn.Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level6AccountName);

    CARAPI GetMasterLedgerReturnsIn.Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level6AccountName);


   CARAPI SetMasterLedgerReturnsIn.Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level6AccountNum);

    CARAPI GetMasterLedgerReturnsIn.Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level6AccountNum);


   CARAPI SetMasterLedgerReturnsIn.Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level1ClassName);

    CARAPI GetMasterLedgerReturnsIn.Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level1ClassName);


   CARAPI SetMasterLedgerReturnsIn.Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level2ClassName);

    CARAPI GetMasterLedgerReturnsIn.Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level2ClassName);


   CARAPI SetMasterLedgerReturnsIn.Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level3ClassName);

    CARAPI GetMasterLedgerReturnsIn.Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level3ClassName);


   CARAPI SetMasterLedgerReturnsIn.TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.transactionEffective);

    CARAPI GetMasterLedgerReturnsIn.TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.transactionEffective);


   CARAPI SetMasterLedgerReturnsIn.MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.masLedgeFinTxId);

    CARAPI GetMasterLedgerReturnsIn.MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.masLedgeFinTxId);


   CARAPI SetMasterLedgerReturnsIn.Cr(
     /* [in] */ Double CFinance.masterLedgerReturnsIn.cr);

    CARAPI GetMasterLedgerReturnsIn.Cr(
     /* [out] */ Double* CFinance.masterLedgerReturnsIn.cr);


   CARAPI SetMasterLedgerReturnsIn.Dr(
     /* [in] */ Double CFinance.masterLedgerReturnsIn.dr);

    CARAPI GetMasterLedgerReturnsIn.Dr(
     /* [out] */ Double* CFinance.masterLedgerReturnsIn.dr);


   CARAPI SetMasterLedgerReturnsIn.Bal(
     /* [in] */ Double CFinance.masterLedgerReturnsIn.bal);

    CARAPI GetMasterLedgerReturnsIn.Bal(
     /* [out] */ Double* CFinance.masterLedgerReturnsIn.bal);


   CARAPI SetMasterLedgerReturnsIn.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerReturnsIn.businessChannelOwnerId);

    CARAPI GetMasterLedgerReturnsIn.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerReturnsIn.businessChannelOwnerId);


   CARAPI SetMasterLedgerReturnsIn.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerReturnsIn.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerReturnsIn.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerReturnsIn.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerReturnsIn.ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerReturnsIn.chartOfAccountsId);

    CARAPI GetMasterLedgerReturnsIn.ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerReturnsIn.chartOfAccountsId);


   CARAPI SetMasterLedgerReturnsIn.ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerReturnsIn.chartOfClassesId);

    CARAPI GetMasterLedgerReturnsIn.ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerReturnsIn.chartOfClassesId);


   CARAPI SetMasterLedgerReturnsIn.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerReturnsIn.branchId);

    CARAPI GetMasterLedgerReturnsIn.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerReturnsIn.branchId);


   CARAPI SetMasterLedgerReturnsIn.DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerReturnsIn.departmentId);

    CARAPI GetMasterLedgerReturnsIn.DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerReturnsIn.departmentId);


   CARAPI SetMasterLedgerReturnsIn.BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerReturnsIn.bankId);

    CARAPI GetMasterLedgerReturnsIn.BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerReturnsIn.bankId);


   CARAPI SetMasterLedgerReturnsIn.ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerReturnsIn.programId);

    CARAPI GetMasterLedgerReturnsIn.ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerReturnsIn.programId);


   CARAPI SetMasterLedgerReturnsIn.ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerReturnsIn.projectId);

    CARAPI GetMasterLedgerReturnsIn.ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerReturnsIn.projectId);


   CARAPI SetMasterLedgerReturnsIn.ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerReturnsIn.itemId);

    CARAPI GetMasterLedgerReturnsIn.ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerReturnsIn.itemId);


   CARAPI SetMasterLedgerReturnsIn.JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerReturnsIn.jobId);

    CARAPI GetMasterLedgerReturnsIn.JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerReturnsIn.jobId);


   CARAPI SetMasterLedgerReturnsIn.ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerReturnsIn.serviceId);

    CARAPI GetMasterLedgerReturnsIn.ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerReturnsIn.serviceId);


   CARAPI SetMasterLedgerReturnsIn.CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerReturnsIn.customerId);

    CARAPI GetMasterLedgerReturnsIn.CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerReturnsIn.customerId);


   CARAPI SetMasterLedgerReturnsIn.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerReturnsIn.supplierId);

    CARAPI GetMasterLedgerReturnsIn.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerReturnsIn.supplierId);


   CARAPI SetMasterLedgerReturnsIn.PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerReturnsIn.purchOrderId);

    CARAPI GetMasterLedgerReturnsIn.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerReturnsIn.purchOrderId);


   CARAPI SetMasterLedgerReturnsIn.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerReturnsIn.masterSalesOrderId);

    CARAPI GetMasterLedgerReturnsIn.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerReturnsIn.masterSalesOrderId);


   CARAPI SetMasterLedgerReturnsIn.InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerReturnsIn.invoiceId);

    CARAPI GetMasterLedgerReturnsIn.InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerReturnsIn.invoiceId);


   CARAPI SetMasterLedgerReturnsIn.BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerReturnsIn.billId);

    CARAPI GetMasterLedgerReturnsIn.BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerReturnsIn.billId);


   CARAPI SetMasterLedgerExpense.MasterLedgerExpenseId(
     /* [in] */ const String& CFinance.masterLedgerExpense.masterLedgerExpenseId);

    CARAPI GetMasterLedgerExpense.MasterLedgerExpenseId(
     /* [out] */ String* CFinance.masterLedgerExpense.masterLedgerExpenseId);


   CARAPI SetMasterLedgerExpense.BankBSB(
     /* [in] */ const String& CFinance.masterLedgerExpense.bankBSB);

    CARAPI GetMasterLedgerExpense.BankBSB(
     /* [out] */ String* CFinance.masterLedgerExpense.bankBSB);


   CARAPI SetMasterLedgerExpense.BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerExpense.bankAccountNumber);

    CARAPI GetMasterLedgerExpense.BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerExpense.bankAccountNumber);


   CARAPI SetMasterLedgerExpense.NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerExpense.nameOnBankAccount);

    CARAPI GetMasterLedgerExpense.NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerExpense.nameOnBankAccount);


   CARAPI SetMasterLedgerExpense.Description(
     /* [in] */ const String& CFinance.masterLedgerExpense.description);

    CARAPI GetMasterLedgerExpense.Description(
     /* [out] */ String* CFinance.masterLedgerExpense.description);


   CARAPI SetMasterLedgerExpense.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerExpense.docRefs);

    CARAPI GetMasterLedgerExpense.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerExpense.docRefs);


   CARAPI SetMasterLedgerExpense.FeeId(
     /* [in] */ const String& CFinance.masterLedgerExpense.feeId);

    CARAPI GetMasterLedgerExpense.FeeId(
     /* [out] */ String* CFinance.masterLedgerExpense.feeId);


   CARAPI SetMasterLedgerExpense.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerExpense.masLedgeFinTxNum);

    CARAPI GetMasterLedgerExpense.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerExpense.masLedgeFinTxNum);


   CARAPI SetMasterLedgerExpense.Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level1AccountName);

    CARAPI GetMasterLedgerExpense.Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level1AccountName);


   CARAPI SetMasterLedgerExpense.Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level1AccountNum);

    CARAPI GetMasterLedgerExpense.Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level1AccountNum);


   CARAPI SetMasterLedgerExpense.Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level2AccountName);

    CARAPI GetMasterLedgerExpense.Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level2AccountName);


   CARAPI SetMasterLedgerExpense.Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level2AccountNum);

    CARAPI GetMasterLedgerExpense.Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level2AccountNum);


   CARAPI SetMasterLedgerExpense.Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level3AccountName);

    CARAPI GetMasterLedgerExpense.Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level3AccountName);


   CARAPI SetMasterLedgerExpense.Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level3AccountNum);

    CARAPI GetMasterLedgerExpense.Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level3AccountNum);


   CARAPI SetMasterLedgerExpense.Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level4AccountName);

    CARAPI GetMasterLedgerExpense.Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level4AccountName);


   CARAPI SetMasterLedgerExpense.Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level4AccountNum);

    CARAPI GetMasterLedgerExpense.Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level4AccountNum);


   CARAPI SetMasterLedgerExpense.Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level5AccountName);

    CARAPI GetMasterLedgerExpense.Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level5AccountName);


   CARAPI SetMasterLedgerExpense.Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level5AccountNum);

    CARAPI GetMasterLedgerExpense.Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level5AccountNum);


   CARAPI SetMasterLedgerExpense.Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level6AccountName);

    CARAPI GetMasterLedgerExpense.Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level6AccountName);


   CARAPI SetMasterLedgerExpense.Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level6AccountNum);

    CARAPI GetMasterLedgerExpense.Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level6AccountNum);


   CARAPI SetMasterLedgerExpense.Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level1ClassName);

    CARAPI GetMasterLedgerExpense.Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerExpense.level1ClassName);


   CARAPI SetMasterLedgerExpense.Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level2ClassName);

    CARAPI GetMasterLedgerExpense.Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerExpense.level2ClassName);


   CARAPI SetMasterLedgerExpense.Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level3ClassName);

    CARAPI GetMasterLedgerExpense.Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerExpense.level3ClassName);


   CARAPI SetMasterLedgerExpense.TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerExpense.transactionEffective);

    CARAPI GetMasterLedgerExpense.TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerExpense.transactionEffective);


   CARAPI SetMasterLedgerExpense.MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerExpense.masLedgeFinTxId);

    CARAPI GetMasterLedgerExpense.MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerExpense.masLedgeFinTxId);


   CARAPI SetMasterLedgerExpense.Cr(
     /* [in] */ Double CFinance.masterLedgerExpense.cr);

    CARAPI GetMasterLedgerExpense.Cr(
     /* [out] */ Double* CFinance.masterLedgerExpense.cr);


   CARAPI SetMasterLedgerExpense.Dr(
     /* [in] */ Double CFinance.masterLedgerExpense.dr);

    CARAPI GetMasterLedgerExpense.Dr(
     /* [out] */ Double* CFinance.masterLedgerExpense.dr);


   CARAPI SetMasterLedgerExpense.Bal(
     /* [in] */ Double CFinance.masterLedgerExpense.bal);

    CARAPI GetMasterLedgerExpense.Bal(
     /* [out] */ Double* CFinance.masterLedgerExpense.bal);


   CARAPI SetMasterLedgerExpense.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerExpense.businessChannelOwnerId);

    CARAPI GetMasterLedgerExpense.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerExpense.businessChannelOwnerId);


   CARAPI SetMasterLedgerExpense.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerExpense.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerExpense.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerExpense.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerExpense.ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerExpense.chartOfAccountsId);

    CARAPI GetMasterLedgerExpense.ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerExpense.chartOfAccountsId);


   CARAPI SetMasterLedgerExpense.ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerExpense.chartOfClassesId);

    CARAPI GetMasterLedgerExpense.ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerExpense.chartOfClassesId);


   CARAPI SetMasterLedgerExpense.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerExpense.branchId);

    CARAPI GetMasterLedgerExpense.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerExpense.branchId);


   CARAPI SetMasterLedgerExpense.DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerExpense.departmentId);

    CARAPI GetMasterLedgerExpense.DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerExpense.departmentId);


   CARAPI SetMasterLedgerExpense.BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerExpense.bankId);

    CARAPI GetMasterLedgerExpense.BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerExpense.bankId);


   CARAPI SetMasterLedgerExpense.ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerExpense.programId);

    CARAPI GetMasterLedgerExpense.ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerExpense.programId);


   CARAPI SetMasterLedgerExpense.ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerExpense.projectId);

    CARAPI GetMasterLedgerExpense.ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerExpense.projectId);


   CARAPI SetMasterLedgerExpense.ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerExpense.itemId);

    CARAPI GetMasterLedgerExpense.ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerExpense.itemId);


   CARAPI SetMasterLedgerExpense.JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerExpense.jobId);

    CARAPI GetMasterLedgerExpense.JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerExpense.jobId);


   CARAPI SetMasterLedgerExpense.ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerExpense.serviceId);

    CARAPI GetMasterLedgerExpense.ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerExpense.serviceId);


   CARAPI SetMasterLedgerExpense.CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerExpense.customerId);

    CARAPI GetMasterLedgerExpense.CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerExpense.customerId);


   CARAPI SetMasterLedgerExpense.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerExpense.supplierId);

    CARAPI GetMasterLedgerExpense.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerExpense.supplierId);


   CARAPI SetMasterLedgerExpense.PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerExpense.purchOrderId);

    CARAPI GetMasterLedgerExpense.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerExpense.purchOrderId);


   CARAPI SetMasterLedgerExpense.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerExpense.masterSalesOrderId);

    CARAPI GetMasterLedgerExpense.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerExpense.masterSalesOrderId);


   CARAPI SetMasterLedgerExpense.InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerExpense.invoiceId);

    CARAPI GetMasterLedgerExpense.InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerExpense.invoiceId);


   CARAPI SetMasterLedgerExpense.BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerExpense.billId);

    CARAPI GetMasterLedgerExpense.BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerExpense.billId);


   CARAPI SetMasterLedgerReturnsOut.MasterLedgerReturnsOutId(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.masterLedgerReturnsOutId);

    CARAPI GetMasterLedgerReturnsOut.MasterLedgerReturnsOutId(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.masterLedgerReturnsOutId);


   CARAPI SetMasterLedgerReturnsOut.BankBSB(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.bankBSB);

    CARAPI GetMasterLedgerReturnsOut.BankBSB(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.bankBSB);


   CARAPI SetMasterLedgerReturnsOut.BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.bankAccountNumber);

    CARAPI GetMasterLedgerReturnsOut.BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.bankAccountNumber);


   CARAPI SetMasterLedgerReturnsOut.NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.nameOnBankAccount);

    CARAPI GetMasterLedgerReturnsOut.NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.nameOnBankAccount);


   CARAPI SetMasterLedgerReturnsOut.Description(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.description);

    CARAPI GetMasterLedgerReturnsOut.Description(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.description);


   CARAPI SetMasterLedgerReturnsOut.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerReturnsOut.docRefs);

    CARAPI GetMasterLedgerReturnsOut.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerReturnsOut.docRefs);


   CARAPI SetMasterLedgerReturnsOut.FeeId(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.feeId);

    CARAPI GetMasterLedgerReturnsOut.FeeId(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.feeId);


   CARAPI SetMasterLedgerReturnsOut.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerReturnsOut.masLedgeFinTxNum);

    CARAPI GetMasterLedgerReturnsOut.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerReturnsOut.masLedgeFinTxNum);


   CARAPI SetMasterLedgerReturnsOut.Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level1AccountName);

    CARAPI GetMasterLedgerReturnsOut.Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level1AccountName);


   CARAPI SetMasterLedgerReturnsOut.Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level1AccountNum);

    CARAPI GetMasterLedgerReturnsOut.Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level1AccountNum);


   CARAPI SetMasterLedgerReturnsOut.Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level2AccountName);

    CARAPI GetMasterLedgerReturnsOut.Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level2AccountName);


   CARAPI SetMasterLedgerReturnsOut.Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level2AccountNum);

    CARAPI GetMasterLedgerReturnsOut.Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level2AccountNum);


   CARAPI SetMasterLedgerReturnsOut.Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level3AccountName);

    CARAPI GetMasterLedgerReturnsOut.Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level3AccountName);


   CARAPI SetMasterLedgerReturnsOut.Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level3AccountNum);

    CARAPI GetMasterLedgerReturnsOut.Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level3AccountNum);


   CARAPI SetMasterLedgerReturnsOut.Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level4AccountName);

    CARAPI GetMasterLedgerReturnsOut.Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level4AccountName);


   CARAPI SetMasterLedgerReturnsOut.Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level4AccountNum);

    CARAPI GetMasterLedgerReturnsOut.Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level4AccountNum);


   CARAPI SetMasterLedgerReturnsOut.Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level5AccountName);

    CARAPI GetMasterLedgerReturnsOut.Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level5AccountName);


   CARAPI SetMasterLedgerReturnsOut.Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level5AccountNum);

    CARAPI GetMasterLedgerReturnsOut.Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level5AccountNum);


   CARAPI SetMasterLedgerReturnsOut.Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level6AccountName);

    CARAPI GetMasterLedgerReturnsOut.Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level6AccountName);


   CARAPI SetMasterLedgerReturnsOut.Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level6AccountNum);

    CARAPI GetMasterLedgerReturnsOut.Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level6AccountNum);


   CARAPI SetMasterLedgerReturnsOut.Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level1ClassName);

    CARAPI GetMasterLedgerReturnsOut.Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level1ClassName);


   CARAPI SetMasterLedgerReturnsOut.Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level2ClassName);

    CARAPI GetMasterLedgerReturnsOut.Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level2ClassName);


   CARAPI SetMasterLedgerReturnsOut.Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level3ClassName);

    CARAPI GetMasterLedgerReturnsOut.Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level3ClassName);


   CARAPI SetMasterLedgerReturnsOut.TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.transactionEffective);

    CARAPI GetMasterLedgerReturnsOut.TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.transactionEffective);


   CARAPI SetMasterLedgerReturnsOut.MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.masLedgeFinTxId);

    CARAPI GetMasterLedgerReturnsOut.MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.masLedgeFinTxId);


   CARAPI SetMasterLedgerReturnsOut.Cr(
     /* [in] */ Double CFinance.masterLedgerReturnsOut.cr);

    CARAPI GetMasterLedgerReturnsOut.Cr(
     /* [out] */ Double* CFinance.masterLedgerReturnsOut.cr);


   CARAPI SetMasterLedgerReturnsOut.Dr(
     /* [in] */ Double CFinance.masterLedgerReturnsOut.dr);

    CARAPI GetMasterLedgerReturnsOut.Dr(
     /* [out] */ Double* CFinance.masterLedgerReturnsOut.dr);


   CARAPI SetMasterLedgerReturnsOut.Bal(
     /* [in] */ Double CFinance.masterLedgerReturnsOut.bal);

    CARAPI GetMasterLedgerReturnsOut.Bal(
     /* [out] */ Double* CFinance.masterLedgerReturnsOut.bal);


   CARAPI SetMasterLedgerReturnsOut.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerReturnsOut.businessChannelOwnerId);

    CARAPI GetMasterLedgerReturnsOut.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerReturnsOut.businessChannelOwnerId);


   CARAPI SetMasterLedgerReturnsOut.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerReturnsOut.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerReturnsOut.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerReturnsOut.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerReturnsOut.ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerReturnsOut.chartOfAccountsId);

    CARAPI GetMasterLedgerReturnsOut.ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerReturnsOut.chartOfAccountsId);


   CARAPI SetMasterLedgerReturnsOut.ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerReturnsOut.chartOfClassesId);

    CARAPI GetMasterLedgerReturnsOut.ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerReturnsOut.chartOfClassesId);


   CARAPI SetMasterLedgerReturnsOut.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerReturnsOut.branchId);

    CARAPI GetMasterLedgerReturnsOut.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerReturnsOut.branchId);


   CARAPI SetMasterLedgerReturnsOut.DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerReturnsOut.departmentId);

    CARAPI GetMasterLedgerReturnsOut.DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerReturnsOut.departmentId);


   CARAPI SetMasterLedgerReturnsOut.BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerReturnsOut.bankId);

    CARAPI GetMasterLedgerReturnsOut.BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerReturnsOut.bankId);


   CARAPI SetMasterLedgerReturnsOut.ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerReturnsOut.programId);

    CARAPI GetMasterLedgerReturnsOut.ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerReturnsOut.programId);


   CARAPI SetMasterLedgerReturnsOut.ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerReturnsOut.projectId);

    CARAPI GetMasterLedgerReturnsOut.ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerReturnsOut.projectId);


   CARAPI SetMasterLedgerReturnsOut.ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerReturnsOut.itemId);

    CARAPI GetMasterLedgerReturnsOut.ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerReturnsOut.itemId);


   CARAPI SetMasterLedgerReturnsOut.JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerReturnsOut.jobId);

    CARAPI GetMasterLedgerReturnsOut.JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerReturnsOut.jobId);


   CARAPI SetMasterLedgerReturnsOut.ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerReturnsOut.serviceId);

    CARAPI GetMasterLedgerReturnsOut.ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerReturnsOut.serviceId);


   CARAPI SetMasterLedgerReturnsOut.CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerReturnsOut.customerId);

    CARAPI GetMasterLedgerReturnsOut.CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerReturnsOut.customerId);


   CARAPI SetMasterLedgerReturnsOut.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerReturnsOut.supplierId);

    CARAPI GetMasterLedgerReturnsOut.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerReturnsOut.supplierId);


   CARAPI SetMasterLedgerReturnsOut.PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerReturnsOut.purchOrderId);

    CARAPI GetMasterLedgerReturnsOut.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerReturnsOut.purchOrderId);


   CARAPI SetMasterLedgerReturnsOut.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerReturnsOut.masterSalesOrderId);

    CARAPI GetMasterLedgerReturnsOut.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerReturnsOut.masterSalesOrderId);


   CARAPI SetMasterLedgerReturnsOut.InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerReturnsOut.invoiceId);

    CARAPI GetMasterLedgerReturnsOut.InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerReturnsOut.invoiceId);


   CARAPI SetMasterLedgerReturnsOut.BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerReturnsOut.billId);

    CARAPI GetMasterLedgerReturnsOut.BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerReturnsOut.billId);


   CARAPI SetMasterLedgerOtherIncome.MasterLedgerOtherIncomeId(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.masterLedgerOtherIncomeId);

    CARAPI GetMasterLedgerOtherIncome.MasterLedgerOtherIncomeId(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.masterLedgerOtherIncomeId);


   CARAPI SetMasterLedgerOtherIncome.BankBSB(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.bankBSB);

    CARAPI GetMasterLedgerOtherIncome.BankBSB(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.bankBSB);


   CARAPI SetMasterLedgerOtherIncome.BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.bankAccountNumber);

    CARAPI GetMasterLedgerOtherIncome.BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.bankAccountNumber);


   CARAPI SetMasterLedgerOtherIncome.NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.nameOnBankAccount);

    CARAPI GetMasterLedgerOtherIncome.NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.nameOnBankAccount);


   CARAPI SetMasterLedgerOtherIncome.Description(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.description);

    CARAPI GetMasterLedgerOtherIncome.Description(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.description);


   CARAPI SetMasterLedgerOtherIncome.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerOtherIncome.docRefs);

    CARAPI GetMasterLedgerOtherIncome.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerOtherIncome.docRefs);


   CARAPI SetMasterLedgerOtherIncome.FeeId(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.feeId);

    CARAPI GetMasterLedgerOtherIncome.FeeId(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.feeId);


   CARAPI SetMasterLedgerOtherIncome.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerOtherIncome.masLedgeFinTxNum);

    CARAPI GetMasterLedgerOtherIncome.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerOtherIncome.masLedgeFinTxNum);


   CARAPI SetMasterLedgerOtherIncome.Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level1AccountName);

    CARAPI GetMasterLedgerOtherIncome.Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level1AccountName);


   CARAPI SetMasterLedgerOtherIncome.Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level1AccountNum);

    CARAPI GetMasterLedgerOtherIncome.Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level1AccountNum);


   CARAPI SetMasterLedgerOtherIncome.Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level2AccountName);

    CARAPI GetMasterLedgerOtherIncome.Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level2AccountName);


   CARAPI SetMasterLedgerOtherIncome.Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level2AccountNum);

    CARAPI GetMasterLedgerOtherIncome.Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level2AccountNum);


   CARAPI SetMasterLedgerOtherIncome.Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level3AccountName);

    CARAPI GetMasterLedgerOtherIncome.Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level3AccountName);


   CARAPI SetMasterLedgerOtherIncome.Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level3AccountNum);

    CARAPI GetMasterLedgerOtherIncome.Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level3AccountNum);


   CARAPI SetMasterLedgerOtherIncome.Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level4AccountName);

    CARAPI GetMasterLedgerOtherIncome.Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level4AccountName);


   CARAPI SetMasterLedgerOtherIncome.Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level4AccountNum);

    CARAPI GetMasterLedgerOtherIncome.Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level4AccountNum);


   CARAPI SetMasterLedgerOtherIncome.Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level5AccountName);

    CARAPI GetMasterLedgerOtherIncome.Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level5AccountName);


   CARAPI SetMasterLedgerOtherIncome.Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level5AccountNum);

    CARAPI GetMasterLedgerOtherIncome.Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level5AccountNum);


   CARAPI SetMasterLedgerOtherIncome.Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level6AccountName);

    CARAPI GetMasterLedgerOtherIncome.Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level6AccountName);


   CARAPI SetMasterLedgerOtherIncome.Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level6AccountNum);

    CARAPI GetMasterLedgerOtherIncome.Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level6AccountNum);


   CARAPI SetMasterLedgerOtherIncome.Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level1ClassName);

    CARAPI GetMasterLedgerOtherIncome.Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level1ClassName);


   CARAPI SetMasterLedgerOtherIncome.Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level2ClassName);

    CARAPI GetMasterLedgerOtherIncome.Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level2ClassName);


   CARAPI SetMasterLedgerOtherIncome.Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level3ClassName);

    CARAPI GetMasterLedgerOtherIncome.Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level3ClassName);


   CARAPI SetMasterLedgerOtherIncome.TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.transactionEffective);

    CARAPI GetMasterLedgerOtherIncome.TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.transactionEffective);


   CARAPI SetMasterLedgerOtherIncome.MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.masLedgeFinTxId);

    CARAPI GetMasterLedgerOtherIncome.MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.masLedgeFinTxId);


   CARAPI SetMasterLedgerOtherIncome.Cr(
     /* [in] */ Double CFinance.masterLedgerOtherIncome.cr);

    CARAPI GetMasterLedgerOtherIncome.Cr(
     /* [out] */ Double* CFinance.masterLedgerOtherIncome.cr);


   CARAPI SetMasterLedgerOtherIncome.Dr(
     /* [in] */ Double CFinance.masterLedgerOtherIncome.dr);

    CARAPI GetMasterLedgerOtherIncome.Dr(
     /* [out] */ Double* CFinance.masterLedgerOtherIncome.dr);


   CARAPI SetMasterLedgerOtherIncome.Bal(
     /* [in] */ Double CFinance.masterLedgerOtherIncome.bal);

    CARAPI GetMasterLedgerOtherIncome.Bal(
     /* [out] */ Double* CFinance.masterLedgerOtherIncome.bal);


   CARAPI SetMasterLedgerOtherIncome.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerOtherIncome.businessChannelOwnerId);

    CARAPI GetMasterLedgerOtherIncome.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerOtherIncome.businessChannelOwnerId);


   CARAPI SetMasterLedgerOtherIncome.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerOtherIncome.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerOtherIncome.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerOtherIncome.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerOtherIncome.ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerOtherIncome.chartOfAccountsId);

    CARAPI GetMasterLedgerOtherIncome.ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerOtherIncome.chartOfAccountsId);


   CARAPI SetMasterLedgerOtherIncome.ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerOtherIncome.chartOfClassesId);

    CARAPI GetMasterLedgerOtherIncome.ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerOtherIncome.chartOfClassesId);


   CARAPI SetMasterLedgerOtherIncome.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerOtherIncome.branchId);

    CARAPI GetMasterLedgerOtherIncome.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerOtherIncome.branchId);


   CARAPI SetMasterLedgerOtherIncome.DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerOtherIncome.departmentId);

    CARAPI GetMasterLedgerOtherIncome.DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerOtherIncome.departmentId);


   CARAPI SetMasterLedgerOtherIncome.BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerOtherIncome.bankId);

    CARAPI GetMasterLedgerOtherIncome.BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerOtherIncome.bankId);


   CARAPI SetMasterLedgerOtherIncome.ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerOtherIncome.programId);

    CARAPI GetMasterLedgerOtherIncome.ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerOtherIncome.programId);


   CARAPI SetMasterLedgerOtherIncome.ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerOtherIncome.projectId);

    CARAPI GetMasterLedgerOtherIncome.ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerOtherIncome.projectId);


   CARAPI SetMasterLedgerOtherIncome.ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerOtherIncome.itemId);

    CARAPI GetMasterLedgerOtherIncome.ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerOtherIncome.itemId);


   CARAPI SetMasterLedgerOtherIncome.JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerOtherIncome.jobId);

    CARAPI GetMasterLedgerOtherIncome.JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerOtherIncome.jobId);


   CARAPI SetMasterLedgerOtherIncome.ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerOtherIncome.serviceId);

    CARAPI GetMasterLedgerOtherIncome.ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerOtherIncome.serviceId);


   CARAPI SetMasterLedgerOtherIncome.CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerOtherIncome.customerId);

    CARAPI GetMasterLedgerOtherIncome.CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerOtherIncome.customerId);


   CARAPI SetMasterLedgerOtherIncome.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerOtherIncome.supplierId);

    CARAPI GetMasterLedgerOtherIncome.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerOtherIncome.supplierId);


   CARAPI SetMasterLedgerOtherIncome.PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerOtherIncome.purchOrderId);

    CARAPI GetMasterLedgerOtherIncome.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerOtherIncome.purchOrderId);


   CARAPI SetMasterLedgerOtherIncome.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerOtherIncome.masterSalesOrderId);

    CARAPI GetMasterLedgerOtherIncome.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerOtherIncome.masterSalesOrderId);


   CARAPI SetMasterLedgerOtherIncome.InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerOtherIncome.invoiceId);

    CARAPI GetMasterLedgerOtherIncome.InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerOtherIncome.invoiceId);


   CARAPI SetMasterLedgerOtherIncome.BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerOtherIncome.billId);

    CARAPI GetMasterLedgerOtherIncome.BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerOtherIncome.billId);


   CARAPI SetMasterLedgerOtherExpense.MasterLedgerOtherExpenseId(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.masterLedgerOtherExpenseId);

    CARAPI GetMasterLedgerOtherExpense.MasterLedgerOtherExpenseId(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.masterLedgerOtherExpenseId);


   CARAPI SetMasterLedgerOtherExpense.BankBSB(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.bankBSB);

    CARAPI GetMasterLedgerOtherExpense.BankBSB(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.bankBSB);


   CARAPI SetMasterLedgerOtherExpense.BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.bankAccountNumber);

    CARAPI GetMasterLedgerOtherExpense.BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.bankAccountNumber);


   CARAPI SetMasterLedgerOtherExpense.NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.nameOnBankAccount);

    CARAPI GetMasterLedgerOtherExpense.NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.nameOnBankAccount);


   CARAPI SetMasterLedgerOtherExpense.Description(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.description);

    CARAPI GetMasterLedgerOtherExpense.Description(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.description);


   CARAPI SetMasterLedgerOtherExpense.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerOtherExpense.docRefs);

    CARAPI GetMasterLedgerOtherExpense.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerOtherExpense.docRefs);


   CARAPI SetMasterLedgerOtherExpense.FeeId(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.feeId);

    CARAPI GetMasterLedgerOtherExpense.FeeId(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.feeId);


   CARAPI SetMasterLedgerOtherExpense.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerOtherExpense.masLedgeFinTxNum);

    CARAPI GetMasterLedgerOtherExpense.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerOtherExpense.masLedgeFinTxNum);


   CARAPI SetMasterLedgerOtherExpense.Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level1AccountName);

    CARAPI GetMasterLedgerOtherExpense.Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level1AccountName);


   CARAPI SetMasterLedgerOtherExpense.Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level1AccountNum);

    CARAPI GetMasterLedgerOtherExpense.Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level1AccountNum);


   CARAPI SetMasterLedgerOtherExpense.Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level2AccountName);

    CARAPI GetMasterLedgerOtherExpense.Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level2AccountName);


   CARAPI SetMasterLedgerOtherExpense.Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level2AccountNum);

    CARAPI GetMasterLedgerOtherExpense.Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level2AccountNum);


   CARAPI SetMasterLedgerOtherExpense.Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level3AccountName);

    CARAPI GetMasterLedgerOtherExpense.Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level3AccountName);


   CARAPI SetMasterLedgerOtherExpense.Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level3AccountNum);

    CARAPI GetMasterLedgerOtherExpense.Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level3AccountNum);


   CARAPI SetMasterLedgerOtherExpense.Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level4AccountName);

    CARAPI GetMasterLedgerOtherExpense.Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level4AccountName);


   CARAPI SetMasterLedgerOtherExpense.Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level4AccountNum);

    CARAPI GetMasterLedgerOtherExpense.Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level4AccountNum);


   CARAPI SetMasterLedgerOtherExpense.Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level5AccountName);

    CARAPI GetMasterLedgerOtherExpense.Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level5AccountName);


   CARAPI SetMasterLedgerOtherExpense.Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level5AccountNum);

    CARAPI GetMasterLedgerOtherExpense.Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level5AccountNum);


   CARAPI SetMasterLedgerOtherExpense.Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level6AccountName);

    CARAPI GetMasterLedgerOtherExpense.Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level6AccountName);


   CARAPI SetMasterLedgerOtherExpense.Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level6AccountNum);

    CARAPI GetMasterLedgerOtherExpense.Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level6AccountNum);


   CARAPI SetMasterLedgerOtherExpense.Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level1ClassName);

    CARAPI GetMasterLedgerOtherExpense.Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level1ClassName);


   CARAPI SetMasterLedgerOtherExpense.Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level2ClassName);

    CARAPI GetMasterLedgerOtherExpense.Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level2ClassName);


   CARAPI SetMasterLedgerOtherExpense.Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level3ClassName);

    CARAPI GetMasterLedgerOtherExpense.Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level3ClassName);


   CARAPI SetMasterLedgerOtherExpense.TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.transactionEffective);

    CARAPI GetMasterLedgerOtherExpense.TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.transactionEffective);


   CARAPI SetMasterLedgerOtherExpense.MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.masLedgeFinTxId);

    CARAPI GetMasterLedgerOtherExpense.MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.masLedgeFinTxId);


   CARAPI SetMasterLedgerOtherExpense.Cr(
     /* [in] */ Double CFinance.masterLedgerOtherExpense.cr);

    CARAPI GetMasterLedgerOtherExpense.Cr(
     /* [out] */ Double* CFinance.masterLedgerOtherExpense.cr);


   CARAPI SetMasterLedgerOtherExpense.Dr(
     /* [in] */ Double CFinance.masterLedgerOtherExpense.dr);

    CARAPI GetMasterLedgerOtherExpense.Dr(
     /* [out] */ Double* CFinance.masterLedgerOtherExpense.dr);


   CARAPI SetMasterLedgerOtherExpense.Bal(
     /* [in] */ Double CFinance.masterLedgerOtherExpense.bal);

    CARAPI GetMasterLedgerOtherExpense.Bal(
     /* [out] */ Double* CFinance.masterLedgerOtherExpense.bal);


   CARAPI SetMasterLedgerOtherExpense.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerOtherExpense.businessChannelOwnerId);

    CARAPI GetMasterLedgerOtherExpense.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerOtherExpense.businessChannelOwnerId);


   CARAPI SetMasterLedgerOtherExpense.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerOtherExpense.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerOtherExpense.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerOtherExpense.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerOtherExpense.ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerOtherExpense.chartOfAccountsId);

    CARAPI GetMasterLedgerOtherExpense.ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerOtherExpense.chartOfAccountsId);


   CARAPI SetMasterLedgerOtherExpense.ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerOtherExpense.chartOfClassesId);

    CARAPI GetMasterLedgerOtherExpense.ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerOtherExpense.chartOfClassesId);


   CARAPI SetMasterLedgerOtherExpense.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerOtherExpense.branchId);

    CARAPI GetMasterLedgerOtherExpense.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerOtherExpense.branchId);


   CARAPI SetMasterLedgerOtherExpense.DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerOtherExpense.departmentId);

    CARAPI GetMasterLedgerOtherExpense.DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerOtherExpense.departmentId);


   CARAPI SetMasterLedgerOtherExpense.BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerOtherExpense.bankId);

    CARAPI GetMasterLedgerOtherExpense.BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerOtherExpense.bankId);


   CARAPI SetMasterLedgerOtherExpense.ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerOtherExpense.programId);

    CARAPI GetMasterLedgerOtherExpense.ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerOtherExpense.programId);


   CARAPI SetMasterLedgerOtherExpense.ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerOtherExpense.projectId);

    CARAPI GetMasterLedgerOtherExpense.ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerOtherExpense.projectId);


   CARAPI SetMasterLedgerOtherExpense.ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerOtherExpense.itemId);

    CARAPI GetMasterLedgerOtherExpense.ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerOtherExpense.itemId);


   CARAPI SetMasterLedgerOtherExpense.JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerOtherExpense.jobId);

    CARAPI GetMasterLedgerOtherExpense.JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerOtherExpense.jobId);


   CARAPI SetMasterLedgerOtherExpense.ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerOtherExpense.serviceId);

    CARAPI GetMasterLedgerOtherExpense.ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerOtherExpense.serviceId);


   CARAPI SetMasterLedgerOtherExpense.CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerOtherExpense.customerId);

    CARAPI GetMasterLedgerOtherExpense.CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerOtherExpense.customerId);


   CARAPI SetMasterLedgerOtherExpense.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerOtherExpense.supplierId);

    CARAPI GetMasterLedgerOtherExpense.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerOtherExpense.supplierId);


   CARAPI SetMasterLedgerOtherExpense.PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerOtherExpense.purchOrderId);

    CARAPI GetMasterLedgerOtherExpense.PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerOtherExpense.purchOrderId);


   CARAPI SetMasterLedgerOtherExpense.MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerOtherExpense.masterSalesOrderId);

    CARAPI GetMasterLedgerOtherExpense.MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerOtherExpense.masterSalesOrderId);


   CARAPI SetMasterLedgerOtherExpense.InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerOtherExpense.invoiceId);

    CARAPI GetMasterLedgerOtherExpense.InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerOtherExpense.invoiceId);


   CARAPI SetMasterLedgerOtherExpense.BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerOtherExpense.billId);

    CARAPI GetMasterLedgerOtherExpense.BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerOtherExpense.billId);


   CARAPI SetLevel1BudCARAPI Get.Level1BudCARAPI GetId(
     /* [in] */ const String& CFinance.level1BudCARAPI Get.level1BudCARAPI GetId);

    CARAPI GetLevel1BudCARAPI Get.Level1BudCARAPI GetId(
     /* [out] */ String* CFinance.level1BudCARAPI Get.level1BudCARAPI GetId);


   CARAPI SetLevel1BudCARAPI Get.BudCARAPI GetName(
     /* [in] */ const String& CFinance.level1BudCARAPI Get.budCARAPI GetName);

    CARAPI GetLevel1BudCARAPI Get.BudCARAPI GetName(
     /* [out] */ String* CFinance.level1BudCARAPI Get.budCARAPI GetName);


   CARAPI SetLevel1BudCARAPI Get.EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level1BudCARAPI Get.endYearMonthyyyymm);

    CARAPI GetLevel1BudCARAPI Get.EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level1BudCARAPI Get.endYearMonthyyyymm);


   CARAPI SetLevel1BudCARAPI Get.TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level1BudCARAPI Get.twelveMonthSequence);

    CARAPI GetLevel1BudCARAPI Get.TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level1BudCARAPI Get.twelveMonthSequence);


   CARAPI SetLevel1BudCARAPI Get.IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.incomeItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.incomeItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.janRevenues);

    CARAPI GetLevel1BudCARAPI Get.JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.janRevenues);


   CARAPI SetLevel1BudCARAPI Get.FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.febRevenues);

    CARAPI GetLevel1BudCARAPI Get.FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.febRevenues);


   CARAPI SetLevel1BudCARAPI Get.MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.marRevenues);

    CARAPI GetLevel1BudCARAPI Get.MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.marRevenues);


   CARAPI SetLevel1BudCARAPI Get.AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.aprRevenues);

    CARAPI GetLevel1BudCARAPI Get.AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.aprRevenues);


   CARAPI SetLevel1BudCARAPI Get.MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.mayRevenues);

    CARAPI GetLevel1BudCARAPI Get.MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.mayRevenues);


   CARAPI SetLevel1BudCARAPI Get.JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.junRevenues);

    CARAPI GetLevel1BudCARAPI Get.JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.junRevenues);


   CARAPI SetLevel1BudCARAPI Get.JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.julRevenues);

    CARAPI GetLevel1BudCARAPI Get.JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.julRevenues);


   CARAPI SetLevel1BudCARAPI Get.AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.augRevenues);

    CARAPI GetLevel1BudCARAPI Get.AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.augRevenues);


   CARAPI SetLevel1BudCARAPI Get.SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.sepRevenues);

    CARAPI GetLevel1BudCARAPI Get.SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.sepRevenues);


   CARAPI SetLevel1BudCARAPI Get.OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.octRevenues);

    CARAPI GetLevel1BudCARAPI Get.OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.octRevenues);


   CARAPI SetLevel1BudCARAPI Get.NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.novRevenues);

    CARAPI GetLevel1BudCARAPI Get.NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.novRevenues);


   CARAPI SetLevel1BudCARAPI Get.DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.decRevenues);

    CARAPI GetLevel1BudCARAPI Get.DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.decRevenues);


   CARAPI SetLevel1BudCARAPI Get.JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.janItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.janItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.febItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.febItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.marItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.marItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.aprItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.aprItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.mayItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.mayItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.junItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.junItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.julItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.julItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.augItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.augItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.sepItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.sepItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.octItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.octItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.novItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.novItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.decItemTypeIds);

    CARAPI GetLevel1BudCARAPI Get.DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.decItemTypeIds);


   CARAPI SetLevel1BudCARAPI Get.JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.janCostsItems);

    CARAPI GetLevel1BudCARAPI Get.JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.janCostsItems);


   CARAPI SetLevel1BudCARAPI Get.FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.febCostsItems);

    CARAPI GetLevel1BudCARAPI Get.FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.febCostsItems);


   CARAPI SetLevel1BudCARAPI Get.MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.marCostsItems);

    CARAPI GetLevel1BudCARAPI Get.MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.marCostsItems);


   CARAPI SetLevel1BudCARAPI Get.AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.aprCostsItems);

    CARAPI GetLevel1BudCARAPI Get.AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.aprCostsItems);


   CARAPI SetLevel1BudCARAPI Get.MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.mayCostsItems);

    CARAPI GetLevel1BudCARAPI Get.MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.mayCostsItems);


   CARAPI SetLevel1BudCARAPI Get.JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.junCostsItems);

    CARAPI GetLevel1BudCARAPI Get.JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.junCostsItems);


   CARAPI SetLevel1BudCARAPI Get.JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.julCostsItems);

    CARAPI GetLevel1BudCARAPI Get.JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.julCostsItems);


   CARAPI SetLevel1BudCARAPI Get.AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.augCostsItems);

    CARAPI GetLevel1BudCARAPI Get.AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.augCostsItems);


   CARAPI SetLevel1BudCARAPI Get.SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.sepCostsItems);

    CARAPI GetLevel1BudCARAPI Get.SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.sepCostsItems);


   CARAPI SetLevel1BudCARAPI Get.OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.octCostsItems);

    CARAPI GetLevel1BudCARAPI Get.OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.octCostsItems);


   CARAPI SetLevel1BudCARAPI Get.NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.novCostsItems);

    CARAPI GetLevel1BudCARAPI Get.NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.novCostsItems);


   CARAPI SetLevel1BudCARAPI Get.DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.decCostsItems);

    CARAPI GetLevel1BudCARAPI Get.DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.decCostsItems);


   CARAPI SetLevel1BudCARAPI Get.JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.janJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.janJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.febJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.febJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.marJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.marJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.aprJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.aprJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.mayJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.mayJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.junJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.junJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.julJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.julJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.augJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.augJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.sepJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.sepJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.octJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.octJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.novJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.novJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.decJobTypeIds);

    CARAPI GetLevel1BudCARAPI Get.DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.decJobTypeIds);


   CARAPI SetLevel1BudCARAPI Get.JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.janCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.janCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.febCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.febCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.marCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.marCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.aprCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.aprCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.mayCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.mayCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.junCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.junCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.julCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.julCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.augCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.augCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.sepCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.sepCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.octCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.octCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.novCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.novCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.decCostsJobs);

    CARAPI GetLevel1BudCARAPI Get.DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.decCostsJobs);


   CARAPI SetLevel1BudCARAPI Get.JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.janServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.janServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.febServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.febServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.marServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.marServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.aprServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.aprServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.mayServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.mayServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.junServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.junServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.julServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.julServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.augServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.augServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.sepServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.sepServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.octServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.octServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.novServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.novServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1BudCARAPI Get.decServiceTypeIds);

    CARAPI GetLevel1BudCARAPI Get.DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1BudCARAPI Get.decServiceTypeIds);


   CARAPI SetLevel1BudCARAPI Get.JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.janCostsServices);

    CARAPI GetLevel1BudCARAPI Get.JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.janCostsServices);


   CARAPI SetLevel1BudCARAPI Get.FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.febCostsServices);

    CARAPI GetLevel1BudCARAPI Get.FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.febCostsServices);


   CARAPI SetLevel1BudCARAPI Get.MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.marCostsServices);

    CARAPI GetLevel1BudCARAPI Get.MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.marCostsServices);


   CARAPI SetLevel1BudCARAPI Get.AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.aprCostsServices);

    CARAPI GetLevel1BudCARAPI Get.AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.aprCostsServices);


   CARAPI SetLevel1BudCARAPI Get.MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.mayCostsServices);

    CARAPI GetLevel1BudCARAPI Get.MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.mayCostsServices);


   CARAPI SetLevel1BudCARAPI Get.JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.junCostsServices);

    CARAPI GetLevel1BudCARAPI Get.JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.junCostsServices);


   CARAPI SetLevel1BudCARAPI Get.JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.julCostsServices);

    CARAPI GetLevel1BudCARAPI Get.JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.julCostsServices);


   CARAPI SetLevel1BudCARAPI Get.AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.augCostsServices);

    CARAPI GetLevel1BudCARAPI Get.AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.augCostsServices);


   CARAPI SetLevel1BudCARAPI Get.SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.sepCostsServices);

    CARAPI GetLevel1BudCARAPI Get.SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.sepCostsServices);


   CARAPI SetLevel1BudCARAPI Get.OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.octCostsServices);

    CARAPI GetLevel1BudCARAPI Get.OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.octCostsServices);


   CARAPI SetLevel1BudCARAPI Get.NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.novCostsServices);

    CARAPI GetLevel1BudCARAPI Get.NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.novCostsServices);


   CARAPI SetLevel1BudCARAPI Get.DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.decCostsServices);

    CARAPI GetLevel1BudCARAPI Get.DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.decCostsServices);


   CARAPI SetLevel1BudCARAPI Get.TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level1BudCARAPI Get.twelveTotalMonthlyCosts);

    CARAPI GetLevel1BudCARAPI Get.TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level1BudCARAPI Get.twelveTotalMonthlyCosts);


   CARAPI SetLevel1BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [in] */ Double CFinance.level1BudCARAPI Get.yearCostThisBudCARAPI GetId);

    CARAPI GetLevel1BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [out] */ Double* CFinance.level1BudCARAPI Get.yearCostThisBudCARAPI GetId);


   CARAPI SetLevel1BudCARAPI Get.NetProfitLossThisLevel1BudCARAPI GetId(
     /* [in] */ Double CFinance.level1BudCARAPI Get.netProfitLossThisLevel1BudCARAPI GetId);

    CARAPI GetLevel1BudCARAPI Get.NetProfitLossThisLevel1BudCARAPI GetId(
     /* [out] */ Double* CFinance.level1BudCARAPI Get.netProfitLossThisLevel1BudCARAPI GetId);


   CARAPI SetLevel1BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [in] */ Int32 CFinance.level1BudCARAPI Get.linkingInternalBudCARAPI GetNum);

    CARAPI GetLevel1BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [out] */ Int32* CFinance.level1BudCARAPI Get.linkingInternalBudCARAPI GetNum);


   CARAPI SetLevel1BudCARAPI Get.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level1BudCARAPI Get.customerIds);

    CARAPI GetLevel1BudCARAPI Get.CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level1BudCARAPI Get.customerIds);


   CARAPI SetLevel1BudCARAPI Get.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level1BudCARAPI Get.propertyIds);

    CARAPI GetLevel1BudCARAPI Get.PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level1BudCARAPI Get.propertyIds);


   CARAPI SetLevel1BudCARAPI Get.ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level1BudCARAPI Get.programIds);

    CARAPI GetLevel1BudCARAPI Get.ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level1BudCARAPI Get.programIds);


   CARAPI SetLevel1BudCARAPI Get.ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level1BudCARAPI Get.projectIds);

    CARAPI GetLevel1BudCARAPI Get.ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level1BudCARAPI Get.projectIds);


   CARAPI SetLevel1BudCARAPI Get.LinkedToLevel2BudCARAPI GetId(
     /* [in] */ CFinance.level2BudCARAPI Get CFinance.level1BudCARAPI Get.linkedToLevel2BudCARAPI GetId);

    CARAPI GetLevel1BudCARAPI Get.LinkedToLevel2BudCARAPI GetId(
     /* [out] */ CFinance.level2BudCARAPI Get* CFinance.level1BudCARAPI Get.linkedToLevel2BudCARAPI GetId);


   CARAPI SetLevel1BudCARAPI Get.MasterAsCARAPI SetId(
     /* [in] */ CFinance.masterAsCARAPI SetRegister CFinance.level1BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel1BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAsCARAPI SetRegister* CFinance.level1BudCARAPI Get.masterAsCARAPI SetId);


   CARAPI SetLevel1BudCARAPI Get.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level1BudCARAPI Get.businessChannelOwnerId);

    CARAPI GetLevel1BudCARAPI Get.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level1BudCARAPI Get.businessChannelOwnerId);





   CARAPI SetLevel2BudCARAPI Get.Level2BudCARAPI GetId(
     /* [in] */ const String& CFinance.level2BudCARAPI Get.level2BudCARAPI GetId);

    CARAPI GetLevel2BudCARAPI Get.Level2BudCARAPI GetId(
     /* [out] */ String* CFinance.level2BudCARAPI Get.level2BudCARAPI GetId);


   CARAPI SetLevel2BudCARAPI Get.BudCARAPI GetName(
     /* [in] */ const String& CFinance.level2BudCARAPI Get.budCARAPI GetName);

    CARAPI GetLevel2BudCARAPI Get.BudCARAPI GetName(
     /* [out] */ String* CFinance.level2BudCARAPI Get.budCARAPI GetName);


   CARAPI SetLevel2BudCARAPI Get.EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level2BudCARAPI Get.endYearMonthyyyymm);

    CARAPI GetLevel2BudCARAPI Get.EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level2BudCARAPI Get.endYearMonthyyyymm);


   CARAPI SetLevel2BudCARAPI Get.TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level2BudCARAPI Get.twelveMonthSequence);

    CARAPI GetLevel2BudCARAPI Get.TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level2BudCARAPI Get.twelveMonthSequence);


   CARAPI SetLevel2BudCARAPI Get.IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.incomeItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.incomeItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.janRevenues);

    CARAPI GetLevel2BudCARAPI Get.JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.janRevenues);


   CARAPI SetLevel2BudCARAPI Get.FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.febRevenues);

    CARAPI GetLevel2BudCARAPI Get.FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.febRevenues);


   CARAPI SetLevel2BudCARAPI Get.MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.marRevenues);

    CARAPI GetLevel2BudCARAPI Get.MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.marRevenues);


   CARAPI SetLevel2BudCARAPI Get.AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.aprRevenues);

    CARAPI GetLevel2BudCARAPI Get.AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.aprRevenues);


   CARAPI SetLevel2BudCARAPI Get.MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.mayRevenues);

    CARAPI GetLevel2BudCARAPI Get.MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.mayRevenues);


   CARAPI SetLevel2BudCARAPI Get.JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.junRevenues);

    CARAPI GetLevel2BudCARAPI Get.JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.junRevenues);


   CARAPI SetLevel2BudCARAPI Get.JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.julRevenues);

    CARAPI GetLevel2BudCARAPI Get.JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.julRevenues);


   CARAPI SetLevel2BudCARAPI Get.AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.augRevenues);

    CARAPI GetLevel2BudCARAPI Get.AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.augRevenues);


   CARAPI SetLevel2BudCARAPI Get.SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.sepRevenues);

    CARAPI GetLevel2BudCARAPI Get.SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.sepRevenues);


   CARAPI SetLevel2BudCARAPI Get.OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.octRevenues);

    CARAPI GetLevel2BudCARAPI Get.OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.octRevenues);


   CARAPI SetLevel2BudCARAPI Get.NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.novRevenues);

    CARAPI GetLevel2BudCARAPI Get.NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.novRevenues);


   CARAPI SetLevel2BudCARAPI Get.DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.decRevenues);

    CARAPI GetLevel2BudCARAPI Get.DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.decRevenues);


   CARAPI SetLevel2BudCARAPI Get.JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.janItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.janItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.febItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.febItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.marItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.marItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.aprItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.aprItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.mayItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.mayItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.junItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.junItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.julItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.julItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.augItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.augItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.sepItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.sepItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.octItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.octItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.novItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.novItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.decItemTypeIds);

    CARAPI GetLevel2BudCARAPI Get.DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.decItemTypeIds);


   CARAPI SetLevel2BudCARAPI Get.JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.janCostsItems);

    CARAPI GetLevel2BudCARAPI Get.JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.janCostsItems);


   CARAPI SetLevel2BudCARAPI Get.FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.febCostsItems);

    CARAPI GetLevel2BudCARAPI Get.FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.febCostsItems);


   CARAPI SetLevel2BudCARAPI Get.MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.marCostsItems);

    CARAPI GetLevel2BudCARAPI Get.MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.marCostsItems);


   CARAPI SetLevel2BudCARAPI Get.AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.aprCostsItems);

    CARAPI GetLevel2BudCARAPI Get.AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.aprCostsItems);


   CARAPI SetLevel2BudCARAPI Get.MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.mayCostsItems);

    CARAPI GetLevel2BudCARAPI Get.MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.mayCostsItems);


   CARAPI SetLevel2BudCARAPI Get.JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.junCostsItems);

    CARAPI GetLevel2BudCARAPI Get.JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.junCostsItems);


   CARAPI SetLevel2BudCARAPI Get.JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.julCostsItems);

    CARAPI GetLevel2BudCARAPI Get.JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.julCostsItems);


   CARAPI SetLevel2BudCARAPI Get.AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.augCostsItems);

    CARAPI GetLevel2BudCARAPI Get.AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.augCostsItems);


   CARAPI SetLevel2BudCARAPI Get.SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.sepCostsItems);

    CARAPI GetLevel2BudCARAPI Get.SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.sepCostsItems);


   CARAPI SetLevel2BudCARAPI Get.OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.octCostsItems);

    CARAPI GetLevel2BudCARAPI Get.OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.octCostsItems);


   CARAPI SetLevel2BudCARAPI Get.NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.novCostsItems);

    CARAPI GetLevel2BudCARAPI Get.NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.novCostsItems);


   CARAPI SetLevel2BudCARAPI Get.DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.decCostsItems);

    CARAPI GetLevel2BudCARAPI Get.DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.decCostsItems);


   CARAPI SetLevel2BudCARAPI Get.JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.janJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.janJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.febJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.febJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.marJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.marJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.aprJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.aprJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.mayJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.mayJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.junJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.junJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.julJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.julJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.augJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.augJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.sepJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.sepJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.octJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.octJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.novJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.novJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.decJobTypeIds);

    CARAPI GetLevel2BudCARAPI Get.DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.decJobTypeIds);


   CARAPI SetLevel2BudCARAPI Get.JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.janCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.janCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.febCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.febCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.marCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.marCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.aprCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.aprCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.mayCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.mayCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.junCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.junCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.julCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.julCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.augCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.augCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.sepCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.sepCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.octCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.octCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.novCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.novCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.decCostsJobs);

    CARAPI GetLevel2BudCARAPI Get.DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.decCostsJobs);


   CARAPI SetLevel2BudCARAPI Get.JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.janServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.janServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.febServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.febServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.marServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.marServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.aprServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.aprServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.mayServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.mayServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.junServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.junServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.julServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.julServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.augServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.augServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.sepServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.sepServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.octServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.octServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.novServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.novServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2BudCARAPI Get.decServiceTypeIds);

    CARAPI GetLevel2BudCARAPI Get.DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2BudCARAPI Get.decServiceTypeIds);


   CARAPI SetLevel2BudCARAPI Get.JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.janCostsServices);

    CARAPI GetLevel2BudCARAPI Get.JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.janCostsServices);


   CARAPI SetLevel2BudCARAPI Get.FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.febCostsServices);

    CARAPI GetLevel2BudCARAPI Get.FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.febCostsServices);


   CARAPI SetLevel2BudCARAPI Get.MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.marCostsServices);

    CARAPI GetLevel2BudCARAPI Get.MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.marCostsServices);


   CARAPI SetLevel2BudCARAPI Get.AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.aprCostsServices);

    CARAPI GetLevel2BudCARAPI Get.AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.aprCostsServices);


   CARAPI SetLevel2BudCARAPI Get.MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.mayCostsServices);

    CARAPI GetLevel2BudCARAPI Get.MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.mayCostsServices);


   CARAPI SetLevel2BudCARAPI Get.JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.junCostsServices);

    CARAPI GetLevel2BudCARAPI Get.JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.junCostsServices);


   CARAPI SetLevel2BudCARAPI Get.JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.julCostsServices);

    CARAPI GetLevel2BudCARAPI Get.JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.julCostsServices);


   CARAPI SetLevel2BudCARAPI Get.AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.augCostsServices);

    CARAPI GetLevel2BudCARAPI Get.AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.augCostsServices);


   CARAPI SetLevel2BudCARAPI Get.SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.sepCostsServices);

    CARAPI GetLevel2BudCARAPI Get.SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.sepCostsServices);


   CARAPI SetLevel2BudCARAPI Get.OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.octCostsServices);

    CARAPI GetLevel2BudCARAPI Get.OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.octCostsServices);


   CARAPI SetLevel2BudCARAPI Get.NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.novCostsServices);

    CARAPI GetLevel2BudCARAPI Get.NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.novCostsServices);


   CARAPI SetLevel2BudCARAPI Get.DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.decCostsServices);

    CARAPI GetLevel2BudCARAPI Get.DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.decCostsServices);


   CARAPI SetLevel2BudCARAPI Get.TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level2BudCARAPI Get.twelveTotalMonthlyCosts);

    CARAPI GetLevel2BudCARAPI Get.TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level2BudCARAPI Get.twelveTotalMonthlyCosts);


   CARAPI SetLevel2BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [in] */ Double CFinance.level2BudCARAPI Get.yearCostThisBudCARAPI GetId);

    CARAPI GetLevel2BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [out] */ Double* CFinance.level2BudCARAPI Get.yearCostThisBudCARAPI GetId);


   CARAPI SetLevel2BudCARAPI Get.NetProfitLossThisLevel2BudCARAPI GetId(
     /* [in] */ Double CFinance.level2BudCARAPI Get.netProfitLossThisLevel2BudCARAPI GetId);

    CARAPI GetLevel2BudCARAPI Get.NetProfitLossThisLevel2BudCARAPI GetId(
     /* [out] */ Double* CFinance.level2BudCARAPI Get.netProfitLossThisLevel2BudCARAPI GetId);


   CARAPI SetLevel2BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [in] */ Int32 CFinance.level2BudCARAPI Get.linkingInternalBudCARAPI GetNum);

    CARAPI GetLevel2BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [out] */ Int32* CFinance.level2BudCARAPI Get.linkingInternalBudCARAPI GetNum);


   CARAPI SetLevel2BudCARAPI Get.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level2BudCARAPI Get.customerIds);

    CARAPI GetLevel2BudCARAPI Get.CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level2BudCARAPI Get.customerIds);


   CARAPI SetLevel2BudCARAPI Get.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level2BudCARAPI Get.propertyIds);

    CARAPI GetLevel2BudCARAPI Get.PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level2BudCARAPI Get.propertyIds);


   CARAPI SetLevel2BudCARAPI Get.ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level2BudCARAPI Get.programIds);

    CARAPI GetLevel2BudCARAPI Get.ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level2BudCARAPI Get.programIds);


   CARAPI SetLevel2BudCARAPI Get.ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level2BudCARAPI Get.projectIds);

    CARAPI GetLevel2BudCARAPI Get.ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level2BudCARAPI Get.projectIds);


   CARAPI SetLevel2BudCARAPI Get.LinkedToLevel3BudCARAPI GetId(
     /* [in] */ CFinance.level3BudCARAPI Get CFinance.level2BudCARAPI Get.linkedToLevel3BudCARAPI GetId);

    CARAPI GetLevel2BudCARAPI Get.LinkedToLevel3BudCARAPI GetId(
     /* [out] */ CFinance.level3BudCARAPI Get* CFinance.level2BudCARAPI Get.linkedToLevel3BudCARAPI GetId);


   CARAPI SetLevel2BudCARAPI Get.MasterAsCARAPI SetId(
     /* [in] */ CFinance.masterAsCARAPI SetRegister CFinance.level2BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel2BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAsCARAPI SetRegister* CFinance.level2BudCARAPI Get.masterAsCARAPI SetId);


   CARAPI SetLevel2BudCARAPI Get.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level2BudCARAPI Get.businessChannelOwnerId);

    CARAPI GetLevel2BudCARAPI Get.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level2BudCARAPI Get.businessChannelOwnerId);





   CARAPI SetLevel3BudCARAPI Get.Level3BudCARAPI GetId(
     /* [in] */ const String& CFinance.level3BudCARAPI Get.level3BudCARAPI GetId);

    CARAPI GetLevel3BudCARAPI Get.Level3BudCARAPI GetId(
     /* [out] */ String* CFinance.level3BudCARAPI Get.level3BudCARAPI GetId);


   CARAPI SetLevel3BudCARAPI Get.BudCARAPI GetName(
     /* [in] */ const String& CFinance.level3BudCARAPI Get.budCARAPI GetName);

    CARAPI GetLevel3BudCARAPI Get.BudCARAPI GetName(
     /* [out] */ String* CFinance.level3BudCARAPI Get.budCARAPI GetName);


   CARAPI SetLevel3BudCARAPI Get.EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level3BudCARAPI Get.endYearMonthyyyymm);

    CARAPI GetLevel3BudCARAPI Get.EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level3BudCARAPI Get.endYearMonthyyyymm);


   CARAPI SetLevel3BudCARAPI Get.TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level3BudCARAPI Get.twelveMonthSequence);

    CARAPI GetLevel3BudCARAPI Get.TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level3BudCARAPI Get.twelveMonthSequence);


   CARAPI SetLevel3BudCARAPI Get.IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.incomeItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.incomeItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.janRevenues);

    CARAPI GetLevel3BudCARAPI Get.JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.janRevenues);


   CARAPI SetLevel3BudCARAPI Get.FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.febRevenues);

    CARAPI GetLevel3BudCARAPI Get.FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.febRevenues);


   CARAPI SetLevel3BudCARAPI Get.MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.marRevenues);

    CARAPI GetLevel3BudCARAPI Get.MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.marRevenues);


   CARAPI SetLevel3BudCARAPI Get.AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.aprRevenues);

    CARAPI GetLevel3BudCARAPI Get.AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.aprRevenues);


   CARAPI SetLevel3BudCARAPI Get.MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.mayRevenues);

    CARAPI GetLevel3BudCARAPI Get.MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.mayRevenues);


   CARAPI SetLevel3BudCARAPI Get.JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.junRevenues);

    CARAPI GetLevel3BudCARAPI Get.JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.junRevenues);


   CARAPI SetLevel3BudCARAPI Get.JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.julRevenues);

    CARAPI GetLevel3BudCARAPI Get.JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.julRevenues);


   CARAPI SetLevel3BudCARAPI Get.AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.augRevenues);

    CARAPI GetLevel3BudCARAPI Get.AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.augRevenues);


   CARAPI SetLevel3BudCARAPI Get.SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.sepRevenues);

    CARAPI GetLevel3BudCARAPI Get.SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.sepRevenues);


   CARAPI SetLevel3BudCARAPI Get.OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.octRevenues);

    CARAPI GetLevel3BudCARAPI Get.OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.octRevenues);


   CARAPI SetLevel3BudCARAPI Get.NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.novRevenues);

    CARAPI GetLevel3BudCARAPI Get.NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.novRevenues);


   CARAPI SetLevel3BudCARAPI Get.DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.decRevenues);

    CARAPI GetLevel3BudCARAPI Get.DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.decRevenues);


   CARAPI SetLevel3BudCARAPI Get.JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.janItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.janItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.febItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.febItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.marItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.marItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.aprItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.aprItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.mayItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.mayItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.junItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.junItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.julItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.julItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.augItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.augItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.sepItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.sepItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.octItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.octItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.novItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.novItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.decItemTypeIds);

    CARAPI GetLevel3BudCARAPI Get.DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.decItemTypeIds);


   CARAPI SetLevel3BudCARAPI Get.JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.janCostsItems);

    CARAPI GetLevel3BudCARAPI Get.JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.janCostsItems);


   CARAPI SetLevel3BudCARAPI Get.FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.febCostsItems);

    CARAPI GetLevel3BudCARAPI Get.FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.febCostsItems);


   CARAPI SetLevel3BudCARAPI Get.MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.marCostsItems);

    CARAPI GetLevel3BudCARAPI Get.MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.marCostsItems);


   CARAPI SetLevel3BudCARAPI Get.AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.aprCostsItems);

    CARAPI GetLevel3BudCARAPI Get.AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.aprCostsItems);


   CARAPI SetLevel3BudCARAPI Get.MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.mayCostsItems);

    CARAPI GetLevel3BudCARAPI Get.MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.mayCostsItems);


   CARAPI SetLevel3BudCARAPI Get.JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.junCostsItems);

    CARAPI GetLevel3BudCARAPI Get.JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.junCostsItems);


   CARAPI SetLevel3BudCARAPI Get.JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.julCostsItems);

    CARAPI GetLevel3BudCARAPI Get.JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.julCostsItems);


   CARAPI SetLevel3BudCARAPI Get.AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.augCostsItems);

    CARAPI GetLevel3BudCARAPI Get.AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.augCostsItems);


   CARAPI SetLevel3BudCARAPI Get.SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.sepCostsItems);

    CARAPI GetLevel3BudCARAPI Get.SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.sepCostsItems);


   CARAPI SetLevel3BudCARAPI Get.OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.octCostsItems);

    CARAPI GetLevel3BudCARAPI Get.OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.octCostsItems);


   CARAPI SetLevel3BudCARAPI Get.NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.novCostsItems);

    CARAPI GetLevel3BudCARAPI Get.NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.novCostsItems);


   CARAPI SetLevel3BudCARAPI Get.DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.decCostsItems);

    CARAPI GetLevel3BudCARAPI Get.DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.decCostsItems);


   CARAPI SetLevel3BudCARAPI Get.JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.janJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.janJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.febJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.febJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.marJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.marJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.aprJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.aprJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.mayJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.mayJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.junJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.junJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.julJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.julJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.augJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.augJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.sepJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.sepJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.octJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.octJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.novJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.novJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.decJobTypeIds);

    CARAPI GetLevel3BudCARAPI Get.DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.decJobTypeIds);


   CARAPI SetLevel3BudCARAPI Get.JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.janCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.janCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.febCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.febCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.marCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.marCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.aprCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.aprCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.mayCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.mayCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.junCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.junCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.julCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.julCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.augCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.augCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.sepCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.sepCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.octCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.octCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.novCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.novCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.decCostsJobs);

    CARAPI GetLevel3BudCARAPI Get.DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.decCostsJobs);


   CARAPI SetLevel3BudCARAPI Get.JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.janServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.janServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.febServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.febServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.marServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.marServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.aprServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.aprServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.mayServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.mayServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.junServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.junServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.julServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.julServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.augServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.augServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.sepServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.sepServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.octServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.octServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.novServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.novServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3BudCARAPI Get.decServiceTypeIds);

    CARAPI GetLevel3BudCARAPI Get.DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3BudCARAPI Get.decServiceTypeIds);


   CARAPI SetLevel3BudCARAPI Get.JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.janCostsServices);

    CARAPI GetLevel3BudCARAPI Get.JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.janCostsServices);


   CARAPI SetLevel3BudCARAPI Get.FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.febCostsServices);

    CARAPI GetLevel3BudCARAPI Get.FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.febCostsServices);


   CARAPI SetLevel3BudCARAPI Get.MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.marCostsServices);

    CARAPI GetLevel3BudCARAPI Get.MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.marCostsServices);


   CARAPI SetLevel3BudCARAPI Get.AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.aprCostsServices);

    CARAPI GetLevel3BudCARAPI Get.AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.aprCostsServices);


   CARAPI SetLevel3BudCARAPI Get.MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.mayCostsServices);

    CARAPI GetLevel3BudCARAPI Get.MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.mayCostsServices);


   CARAPI SetLevel3BudCARAPI Get.JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.junCostsServices);

    CARAPI GetLevel3BudCARAPI Get.JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.junCostsServices);


   CARAPI SetLevel3BudCARAPI Get.JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.julCostsServices);

    CARAPI GetLevel3BudCARAPI Get.JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.julCostsServices);


   CARAPI SetLevel3BudCARAPI Get.AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.augCostsServices);

    CARAPI GetLevel3BudCARAPI Get.AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.augCostsServices);


   CARAPI SetLevel3BudCARAPI Get.SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.sepCostsServices);

    CARAPI GetLevel3BudCARAPI Get.SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.sepCostsServices);


   CARAPI SetLevel3BudCARAPI Get.OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.octCostsServices);

    CARAPI GetLevel3BudCARAPI Get.OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.octCostsServices);


   CARAPI SetLevel3BudCARAPI Get.NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.novCostsServices);

    CARAPI GetLevel3BudCARAPI Get.NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.novCostsServices);


   CARAPI SetLevel3BudCARAPI Get.DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.decCostsServices);

    CARAPI GetLevel3BudCARAPI Get.DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.decCostsServices);


   CARAPI SetLevel3BudCARAPI Get.TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level3BudCARAPI Get.twelveTotalMonthlyCosts);

    CARAPI GetLevel3BudCARAPI Get.TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level3BudCARAPI Get.twelveTotalMonthlyCosts);


   CARAPI SetLevel3BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [in] */ Double CFinance.level3BudCARAPI Get.yearCostThisBudCARAPI GetId);

    CARAPI GetLevel3BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [out] */ Double* CFinance.level3BudCARAPI Get.yearCostThisBudCARAPI GetId);


   CARAPI SetLevel3BudCARAPI Get.NetProfitLossThisLevel3BudCARAPI GetId(
     /* [in] */ Double CFinance.level3BudCARAPI Get.netProfitLossThisLevel3BudCARAPI GetId);

    CARAPI GetLevel3BudCARAPI Get.NetProfitLossThisLevel3BudCARAPI GetId(
     /* [out] */ Double* CFinance.level3BudCARAPI Get.netProfitLossThisLevel3BudCARAPI GetId);


   CARAPI SetLevel3BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [in] */ Int32 CFinance.level3BudCARAPI Get.linkingInternalBudCARAPI GetNum);

    CARAPI GetLevel3BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [out] */ Int32* CFinance.level3BudCARAPI Get.linkingInternalBudCARAPI GetNum);


   CARAPI SetLevel3BudCARAPI Get.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level3BudCARAPI Get.customerIds);

    CARAPI GetLevel3BudCARAPI Get.CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level3BudCARAPI Get.customerIds);


   CARAPI SetLevel3BudCARAPI Get.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level3BudCARAPI Get.propertyIds);

    CARAPI GetLevel3BudCARAPI Get.PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level3BudCARAPI Get.propertyIds);


   CARAPI SetLevel3BudCARAPI Get.ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level3BudCARAPI Get.programIds);

    CARAPI GetLevel3BudCARAPI Get.ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level3BudCARAPI Get.programIds);


   CARAPI SetLevel3BudCARAPI Get.ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level3BudCARAPI Get.projectIds);

    CARAPI GetLevel3BudCARAPI Get.ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level3BudCARAPI Get.projectIds);


   CARAPI SetLevel3BudCARAPI Get.LinkedToLevel4BudCARAPI GetId(
     /* [in] */ CFinance.level4BudCARAPI Get CFinance.level3BudCARAPI Get.linkedToLevel4BudCARAPI GetId);

    CARAPI GetLevel3BudCARAPI Get.LinkedToLevel4BudCARAPI GetId(
     /* [out] */ CFinance.level4BudCARAPI Get* CFinance.level3BudCARAPI Get.linkedToLevel4BudCARAPI GetId);


   CARAPI SetLevel3BudCARAPI Get.MasterAsCARAPI SetId(
     /* [in] */ CFinance.masterAsCARAPI SetRegister CFinance.level3BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel3BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAsCARAPI SetRegister* CFinance.level3BudCARAPI Get.masterAsCARAPI SetId);


   CARAPI SetLevel3BudCARAPI Get.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level3BudCARAPI Get.businessChannelOwnerId);

    CARAPI GetLevel3BudCARAPI Get.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level3BudCARAPI Get.businessChannelOwnerId);





   CARAPI SetLevel4BudCARAPI Get.Level4BudCARAPI GetId(
     /* [in] */ const String& CFinance.level4BudCARAPI Get.level4BudCARAPI GetId);

    CARAPI GetLevel4BudCARAPI Get.Level4BudCARAPI GetId(
     /* [out] */ String* CFinance.level4BudCARAPI Get.level4BudCARAPI GetId);


   CARAPI SetLevel4BudCARAPI Get.BudCARAPI GetName(
     /* [in] */ const String& CFinance.level4BudCARAPI Get.budCARAPI GetName);

    CARAPI GetLevel4BudCARAPI Get.BudCARAPI GetName(
     /* [out] */ String* CFinance.level4BudCARAPI Get.budCARAPI GetName);


   CARAPI SetLevel4BudCARAPI Get.EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level4BudCARAPI Get.endYearMonthyyyymm);

    CARAPI GetLevel4BudCARAPI Get.EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level4BudCARAPI Get.endYearMonthyyyymm);


   CARAPI SetLevel4BudCARAPI Get.TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level4BudCARAPI Get.twelveMonthSequence);

    CARAPI GetLevel4BudCARAPI Get.TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level4BudCARAPI Get.twelveMonthSequence);


   CARAPI SetLevel4BudCARAPI Get.IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.incomeItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.incomeItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.janRevenues);

    CARAPI GetLevel4BudCARAPI Get.JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.janRevenues);


   CARAPI SetLevel4BudCARAPI Get.FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.febRevenues);

    CARAPI GetLevel4BudCARAPI Get.FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.febRevenues);


   CARAPI SetLevel4BudCARAPI Get.MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.marRevenues);

    CARAPI GetLevel4BudCARAPI Get.MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.marRevenues);


   CARAPI SetLevel4BudCARAPI Get.AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.aprRevenues);

    CARAPI GetLevel4BudCARAPI Get.AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.aprRevenues);


   CARAPI SetLevel4BudCARAPI Get.MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.mayRevenues);

    CARAPI GetLevel4BudCARAPI Get.MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.mayRevenues);


   CARAPI SetLevel4BudCARAPI Get.JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.junRevenues);

    CARAPI GetLevel4BudCARAPI Get.JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.junRevenues);


   CARAPI SetLevel4BudCARAPI Get.JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.julRevenues);

    CARAPI GetLevel4BudCARAPI Get.JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.julRevenues);


   CARAPI SetLevel4BudCARAPI Get.AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.augRevenues);

    CARAPI GetLevel4BudCARAPI Get.AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.augRevenues);


   CARAPI SetLevel4BudCARAPI Get.SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.sepRevenues);

    CARAPI GetLevel4BudCARAPI Get.SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.sepRevenues);


   CARAPI SetLevel4BudCARAPI Get.OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.octRevenues);

    CARAPI GetLevel4BudCARAPI Get.OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.octRevenues);


   CARAPI SetLevel4BudCARAPI Get.NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.novRevenues);

    CARAPI GetLevel4BudCARAPI Get.NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.novRevenues);


   CARAPI SetLevel4BudCARAPI Get.DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.decRevenues);

    CARAPI GetLevel4BudCARAPI Get.DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.decRevenues);


   CARAPI SetLevel4BudCARAPI Get.JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.janItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.janItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.febItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.febItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.marItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.marItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.aprItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.aprItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.mayItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.mayItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.junItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.junItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.julItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.julItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.augItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.augItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.sepItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.sepItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.octItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.octItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.novItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.novItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.decItemTypeIds);

    CARAPI GetLevel4BudCARAPI Get.DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.decItemTypeIds);


   CARAPI SetLevel4BudCARAPI Get.JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.janCostsItems);

    CARAPI GetLevel4BudCARAPI Get.JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.janCostsItems);


   CARAPI SetLevel4BudCARAPI Get.FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.febCostsItems);

    CARAPI GetLevel4BudCARAPI Get.FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.febCostsItems);


   CARAPI SetLevel4BudCARAPI Get.MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.marCostsItems);

    CARAPI GetLevel4BudCARAPI Get.MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.marCostsItems);


   CARAPI SetLevel4BudCARAPI Get.AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.aprCostsItems);

    CARAPI GetLevel4BudCARAPI Get.AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.aprCostsItems);


   CARAPI SetLevel4BudCARAPI Get.MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.mayCostsItems);

    CARAPI GetLevel4BudCARAPI Get.MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.mayCostsItems);


   CARAPI SetLevel4BudCARAPI Get.JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.junCostsItems);

    CARAPI GetLevel4BudCARAPI Get.JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.junCostsItems);


   CARAPI SetLevel4BudCARAPI Get.JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.julCostsItems);

    CARAPI GetLevel4BudCARAPI Get.JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.julCostsItems);


   CARAPI SetLevel4BudCARAPI Get.AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.augCostsItems);

    CARAPI GetLevel4BudCARAPI Get.AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.augCostsItems);


   CARAPI SetLevel4BudCARAPI Get.SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.sepCostsItems);

    CARAPI GetLevel4BudCARAPI Get.SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.sepCostsItems);


   CARAPI SetLevel4BudCARAPI Get.OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.octCostsItems);

    CARAPI GetLevel4BudCARAPI Get.OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.octCostsItems);


   CARAPI SetLevel4BudCARAPI Get.NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.novCostsItems);

    CARAPI GetLevel4BudCARAPI Get.NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.novCostsItems);


   CARAPI SetLevel4BudCARAPI Get.DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.decCostsItems);

    CARAPI GetLevel4BudCARAPI Get.DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.decCostsItems);


   CARAPI SetLevel4BudCARAPI Get.JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.janJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.janJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.febJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.febJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.marJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.marJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.aprJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.aprJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.mayJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.mayJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.junJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.junJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.julJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.julJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.augJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.augJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.sepJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.sepJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.octJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.octJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.novJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.novJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.decJobTypeIds);

    CARAPI GetLevel4BudCARAPI Get.DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.decJobTypeIds);


   CARAPI SetLevel4BudCARAPI Get.JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.janCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.janCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.febCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.febCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.marCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.marCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.aprCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.aprCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.mayCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.mayCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.junCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.junCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.julCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.julCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.augCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.augCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.sepCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.sepCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.octCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.octCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.novCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.novCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.decCostsJobs);

    CARAPI GetLevel4BudCARAPI Get.DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.decCostsJobs);


   CARAPI SetLevel4BudCARAPI Get.JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.janServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.janServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.febServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.febServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.marServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.marServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.aprServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.aprServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.mayServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.mayServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.junServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.junServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.julServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.julServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.augServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.augServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.sepServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.sepServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.octServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.octServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.novServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.novServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4BudCARAPI Get.decServiceTypeIds);

    CARAPI GetLevel4BudCARAPI Get.DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4BudCARAPI Get.decServiceTypeIds);


   CARAPI SetLevel4BudCARAPI Get.JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.janCostsServices);

    CARAPI GetLevel4BudCARAPI Get.JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.janCostsServices);


   CARAPI SetLevel4BudCARAPI Get.FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.febCostsServices);

    CARAPI GetLevel4BudCARAPI Get.FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.febCostsServices);


   CARAPI SetLevel4BudCARAPI Get.MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.marCostsServices);

    CARAPI GetLevel4BudCARAPI Get.MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.marCostsServices);


   CARAPI SetLevel4BudCARAPI Get.AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.aprCostsServices);

    CARAPI GetLevel4BudCARAPI Get.AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.aprCostsServices);


   CARAPI SetLevel4BudCARAPI Get.MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.mayCostsServices);

    CARAPI GetLevel4BudCARAPI Get.MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.mayCostsServices);


   CARAPI SetLevel4BudCARAPI Get.JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.junCostsServices);

    CARAPI GetLevel4BudCARAPI Get.JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.junCostsServices);


   CARAPI SetLevel4BudCARAPI Get.JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.julCostsServices);

    CARAPI GetLevel4BudCARAPI Get.JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.julCostsServices);


   CARAPI SetLevel4BudCARAPI Get.AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.augCostsServices);

    CARAPI GetLevel4BudCARAPI Get.AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.augCostsServices);


   CARAPI SetLevel4BudCARAPI Get.SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.sepCostsServices);

    CARAPI GetLevel4BudCARAPI Get.SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.sepCostsServices);


   CARAPI SetLevel4BudCARAPI Get.OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.octCostsServices);

    CARAPI GetLevel4BudCARAPI Get.OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.octCostsServices);


   CARAPI SetLevel4BudCARAPI Get.NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.novCostsServices);

    CARAPI GetLevel4BudCARAPI Get.NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.novCostsServices);


   CARAPI SetLevel4BudCARAPI Get.DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.decCostsServices);

    CARAPI GetLevel4BudCARAPI Get.DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.decCostsServices);


   CARAPI SetLevel4BudCARAPI Get.TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level4BudCARAPI Get.twelveTotalMonthlyCosts);

    CARAPI GetLevel4BudCARAPI Get.TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level4BudCARAPI Get.twelveTotalMonthlyCosts);


   CARAPI SetLevel4BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [in] */ Double CFinance.level4BudCARAPI Get.yearCostThisBudCARAPI GetId);

    CARAPI GetLevel4BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [out] */ Double* CFinance.level4BudCARAPI Get.yearCostThisBudCARAPI GetId);


   CARAPI SetLevel4BudCARAPI Get.NetProfitLossThisLevel4BudCARAPI GetId(
     /* [in] */ Double CFinance.level4BudCARAPI Get.netProfitLossThisLevel4BudCARAPI GetId);

    CARAPI GetLevel4BudCARAPI Get.NetProfitLossThisLevel4BudCARAPI GetId(
     /* [out] */ Double* CFinance.level4BudCARAPI Get.netProfitLossThisLevel4BudCARAPI GetId);


   CARAPI SetLevel4BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [in] */ Int32 CFinance.level4BudCARAPI Get.linkingInternalBudCARAPI GetNum);

    CARAPI GetLevel4BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [out] */ Int32* CFinance.level4BudCARAPI Get.linkingInternalBudCARAPI GetNum);


   CARAPI SetLevel4BudCARAPI Get.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level4BudCARAPI Get.customerIds);

    CARAPI GetLevel4BudCARAPI Get.CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level4BudCARAPI Get.customerIds);


   CARAPI SetLevel4BudCARAPI Get.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level4BudCARAPI Get.propertyIds);

    CARAPI GetLevel4BudCARAPI Get.PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level4BudCARAPI Get.propertyIds);


   CARAPI SetLevel4BudCARAPI Get.ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level4BudCARAPI Get.programIds);

    CARAPI GetLevel4BudCARAPI Get.ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level4BudCARAPI Get.programIds);


   CARAPI SetLevel4BudCARAPI Get.ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level4BudCARAPI Get.projectIds);

    CARAPI GetLevel4BudCARAPI Get.ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level4BudCARAPI Get.projectIds);


   CARAPI SetLevel4BudCARAPI Get.LinkedToLevel5BudCARAPI GetId(
     /* [in] */ CFinance.level5BudCARAPI Get CFinance.level4BudCARAPI Get.linkedToLevel5BudCARAPI GetId);

    CARAPI GetLevel4BudCARAPI Get.LinkedToLevel5BudCARAPI GetId(
     /* [out] */ CFinance.level5BudCARAPI Get* CFinance.level4BudCARAPI Get.linkedToLevel5BudCARAPI GetId);


   CARAPI SetLevel4BudCARAPI Get.MasterAsCARAPI SetId(
     /* [in] */ CFinance.masterAsCARAPI SetRegister CFinance.level4BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel4BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAsCARAPI SetRegister* CFinance.level4BudCARAPI Get.masterAsCARAPI SetId);


   CARAPI SetLevel4BudCARAPI Get.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level4BudCARAPI Get.businessChannelOwnerId);

    CARAPI GetLevel4BudCARAPI Get.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level4BudCARAPI Get.businessChannelOwnerId);


   CARAPI SetLevel5BudCARAPI Get.Level5BudCARAPI GetId(
     /* [in] */ const String& CFinance.level5BudCARAPI Get.level5BudCARAPI GetId);

    CARAPI GetLevel5BudCARAPI Get.Level5BudCARAPI GetId(
     /* [out] */ String* CFinance.level5BudCARAPI Get.level5BudCARAPI GetId);


   CARAPI SetLevel5BudCARAPI Get.BudCARAPI GetName(
     /* [in] */ const String& CFinance.level5BudCARAPI Get.budCARAPI GetName);

    CARAPI GetLevel5BudCARAPI Get.BudCARAPI GetName(
     /* [out] */ String* CFinance.level5BudCARAPI Get.budCARAPI GetName);


   CARAPI SetLevel5BudCARAPI Get.EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level5BudCARAPI Get.endYearMonthyyyymm);

    CARAPI GetLevel5BudCARAPI Get.EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level5BudCARAPI Get.endYearMonthyyyymm);


   CARAPI SetLevel5BudCARAPI Get.TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level5BudCARAPI Get.twelveMonthSequence);

    CARAPI GetLevel5BudCARAPI Get.TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level5BudCARAPI Get.twelveMonthSequence);


   CARAPI SetLevel5BudCARAPI Get.IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.incomeItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.incomeItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.janRevenues);

    CARAPI GetLevel5BudCARAPI Get.JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.janRevenues);


   CARAPI SetLevel5BudCARAPI Get.FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.febRevenues);

    CARAPI GetLevel5BudCARAPI Get.FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.febRevenues);


   CARAPI SetLevel5BudCARAPI Get.MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.marRevenues);

    CARAPI GetLevel5BudCARAPI Get.MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.marRevenues);


   CARAPI SetLevel5BudCARAPI Get.AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.aprRevenues);

    CARAPI GetLevel5BudCARAPI Get.AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.aprRevenues);


   CARAPI SetLevel5BudCARAPI Get.MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.mayRevenues);

    CARAPI GetLevel5BudCARAPI Get.MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.mayRevenues);


   CARAPI SetLevel5BudCARAPI Get.JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.junRevenues);

    CARAPI GetLevel5BudCARAPI Get.JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.junRevenues);


   CARAPI SetLevel5BudCARAPI Get.JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.julRevenues);

    CARAPI GetLevel5BudCARAPI Get.JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.julRevenues);


   CARAPI SetLevel5BudCARAPI Get.AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.augRevenues);

    CARAPI GetLevel5BudCARAPI Get.AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.augRevenues);


   CARAPI SetLevel5BudCARAPI Get.SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.sepRevenues);

    CARAPI GetLevel5BudCARAPI Get.SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.sepRevenues);


   CARAPI SetLevel5BudCARAPI Get.OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.octRevenues);

    CARAPI GetLevel5BudCARAPI Get.OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.octRevenues);


   CARAPI SetLevel5BudCARAPI Get.NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.novRevenues);

    CARAPI GetLevel5BudCARAPI Get.NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.novRevenues);


   CARAPI SetLevel5BudCARAPI Get.DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.decRevenues);

    CARAPI GetLevel5BudCARAPI Get.DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.decRevenues);


   CARAPI SetLevel5BudCARAPI Get.JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.janItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.janItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.febItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.febItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.marItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.marItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.aprItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.aprItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.mayItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.mayItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.junItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.junItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.julItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.julItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.augItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.augItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.sepItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.sepItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.octItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.octItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.novItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.novItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.decItemTypeIds);

    CARAPI GetLevel5BudCARAPI Get.DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.decItemTypeIds);


   CARAPI SetLevel5BudCARAPI Get.JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.janCostsItems);

    CARAPI GetLevel5BudCARAPI Get.JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.janCostsItems);


   CARAPI SetLevel5BudCARAPI Get.FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.febCostsItems);

    CARAPI GetLevel5BudCARAPI Get.FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.febCostsItems);


   CARAPI SetLevel5BudCARAPI Get.MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.marCostsItems);

    CARAPI GetLevel5BudCARAPI Get.MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.marCostsItems);


   CARAPI SetLevel5BudCARAPI Get.AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.aprCostsItems);

    CARAPI GetLevel5BudCARAPI Get.AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.aprCostsItems);


   CARAPI SetLevel5BudCARAPI Get.MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.mayCostsItems);

    CARAPI GetLevel5BudCARAPI Get.MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.mayCostsItems);


   CARAPI SetLevel5BudCARAPI Get.JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.junCostsItems);

    CARAPI GetLevel5BudCARAPI Get.JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.junCostsItems);


   CARAPI SetLevel5BudCARAPI Get.JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.julCostsItems);

    CARAPI GetLevel5BudCARAPI Get.JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.julCostsItems);


   CARAPI SetLevel5BudCARAPI Get.AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.augCostsItems);

    CARAPI GetLevel5BudCARAPI Get.AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.augCostsItems);


   CARAPI SetLevel5BudCARAPI Get.SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.sepCostsItems);

    CARAPI GetLevel5BudCARAPI Get.SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.sepCostsItems);


   CARAPI SetLevel5BudCARAPI Get.OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.octCostsItems);

    CARAPI GetLevel5BudCARAPI Get.OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.octCostsItems);


   CARAPI SetLevel5BudCARAPI Get.NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.novCostsItems);

    CARAPI GetLevel5BudCARAPI Get.NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.novCostsItems);


   CARAPI SetLevel5BudCARAPI Get.DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.decCostsItems);

    CARAPI GetLevel5BudCARAPI Get.DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.decCostsItems);


   CARAPI SetLevel5BudCARAPI Get.JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.janJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.janJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.febJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.febJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.marJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.marJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.aprJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.aprJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.mayJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.mayJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.junJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.junJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.julJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.julJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.augJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.augJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.sepJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.sepJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.octJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.octJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.novJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.novJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.decJobTypeIds);

    CARAPI GetLevel5BudCARAPI Get.DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.decJobTypeIds);


   CARAPI SetLevel5BudCARAPI Get.JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.janCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.janCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.febCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.febCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.marCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.marCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.aprCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.aprCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.mayCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.mayCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.junCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.junCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.julCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.julCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.augCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.augCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.sepCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.sepCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.octCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.octCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.novCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.novCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.decCostsJobs);

    CARAPI GetLevel5BudCARAPI Get.DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.decCostsJobs);


   CARAPI SetLevel5BudCARAPI Get.JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.janServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.janServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.febServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.febServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.marServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.marServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.aprServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.aprServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.mayServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.mayServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.junServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.junServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.julServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.julServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.augServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.augServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.sepServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.sepServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.octServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.octServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.novServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.novServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5BudCARAPI Get.decServiceTypeIds);

    CARAPI GetLevel5BudCARAPI Get.DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5BudCARAPI Get.decServiceTypeIds);


   CARAPI SetLevel5BudCARAPI Get.JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.janCostsServices);

    CARAPI GetLevel5BudCARAPI Get.JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.janCostsServices);


   CARAPI SetLevel5BudCARAPI Get.FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.febCostsServices);

    CARAPI GetLevel5BudCARAPI Get.FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.febCostsServices);


   CARAPI SetLevel5BudCARAPI Get.MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.marCostsServices);

    CARAPI GetLevel5BudCARAPI Get.MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.marCostsServices);


   CARAPI SetLevel5BudCARAPI Get.AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.aprCostsServices);

    CARAPI GetLevel5BudCARAPI Get.AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.aprCostsServices);


   CARAPI SetLevel5BudCARAPI Get.MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.mayCostsServices);

    CARAPI GetLevel5BudCARAPI Get.MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.mayCostsServices);


   CARAPI SetLevel5BudCARAPI Get.JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.junCostsServices);

    CARAPI GetLevel5BudCARAPI Get.JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.junCostsServices);


   CARAPI SetLevel5BudCARAPI Get.JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.julCostsServices);

    CARAPI GetLevel5BudCARAPI Get.JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.julCostsServices);


   CARAPI SetLevel5BudCARAPI Get.AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.augCostsServices);

    CARAPI GetLevel5BudCARAPI Get.AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.augCostsServices);


   CARAPI SetLevel5BudCARAPI Get.SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.sepCostsServices);

    CARAPI GetLevel5BudCARAPI Get.SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.sepCostsServices);


   CARAPI SetLevel5BudCARAPI Get.OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.octCostsServices);

    CARAPI GetLevel5BudCARAPI Get.OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.octCostsServices);


   CARAPI SetLevel5BudCARAPI Get.NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.novCostsServices);

    CARAPI GetLevel5BudCARAPI Get.NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.novCostsServices);


   CARAPI SetLevel5BudCARAPI Get.DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.decCostsServices);

    CARAPI GetLevel5BudCARAPI Get.DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.decCostsServices);


   CARAPI SetLevel5BudCARAPI Get.TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level5BudCARAPI Get.twelveTotalMonthlyCosts);

    CARAPI GetLevel5BudCARAPI Get.TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level5BudCARAPI Get.twelveTotalMonthlyCosts);


   CARAPI SetLevel5BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [in] */ Double CFinance.level5BudCARAPI Get.yearCostThisBudCARAPI GetId);

    CARAPI GetLevel5BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [out] */ Double* CFinance.level5BudCARAPI Get.yearCostThisBudCARAPI GetId);


   CARAPI SetLevel5BudCARAPI Get.NetProfitLossThisLevel5BudCARAPI GetId(
     /* [in] */ Double CFinance.level5BudCARAPI Get.netProfitLossThisLevel5BudCARAPI GetId);

    CARAPI GetLevel5BudCARAPI Get.NetProfitLossThisLevel5BudCARAPI GetId(
     /* [out] */ Double* CFinance.level5BudCARAPI Get.netProfitLossThisLevel5BudCARAPI GetId);


   CARAPI SetLevel5BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [in] */ Int32 CFinance.level5BudCARAPI Get.linkingInternalBudCARAPI GetNum);

    CARAPI GetLevel5BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [out] */ Int32* CFinance.level5BudCARAPI Get.linkingInternalBudCARAPI GetNum);


   CARAPI SetLevel5BudCARAPI Get.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level5BudCARAPI Get.customerIds);

    CARAPI GetLevel5BudCARAPI Get.CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level5BudCARAPI Get.customerIds);


   CARAPI SetLevel5BudCARAPI Get.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level5BudCARAPI Get.propertyIds);

    CARAPI GetLevel5BudCARAPI Get.PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level5BudCARAPI Get.propertyIds);


   CARAPI SetLevel5BudCARAPI Get.ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level5BudCARAPI Get.programIds);

    CARAPI GetLevel5BudCARAPI Get.ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level5BudCARAPI Get.programIds);


   CARAPI SetLevel5BudCARAPI Get.ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level5BudCARAPI Get.projectIds);

    CARAPI GetLevel5BudCARAPI Get.ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level5BudCARAPI Get.projectIds);


   CARAPI SetLevel5BudCARAPI Get.LinkedToLevel6BudCARAPI GetId(
     /* [in] */ CFinance.level6BudCARAPI Get CFinance.level5BudCARAPI Get.linkedToLevel6BudCARAPI GetId);

    CARAPI GetLevel5BudCARAPI Get.LinkedToLevel6BudCARAPI GetId(
     /* [out] */ CFinance.level6BudCARAPI Get* CFinance.level5BudCARAPI Get.linkedToLevel6BudCARAPI GetId);


   CARAPI SetLevel5BudCARAPI Get.MasterAsCARAPI SetId(
     /* [in] */ CFinance.masterAsCARAPI SetRegister CFinance.level5BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel5BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAsCARAPI SetRegister* CFinance.level5BudCARAPI Get.masterAsCARAPI SetId);


   CARAPI SetLevel5BudCARAPI Get.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level5BudCARAPI Get.businessChannelOwnerId);

    CARAPI GetLevel5BudCARAPI Get.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level5BudCARAPI Get.businessChannelOwnerId);





   CARAPI SetLevel6BudCARAPI Get.Level6BudCARAPI GetId(
     /* [in] */ const String& CFinance.level6BudCARAPI Get.level6BudCARAPI GetId);

    CARAPI GetLevel6BudCARAPI Get.Level6BudCARAPI GetId(
     /* [out] */ String* CFinance.level6BudCARAPI Get.level6BudCARAPI GetId);


   CARAPI SetLevel6BudCARAPI Get.BudCARAPI GetName(
     /* [in] */ const String& CFinance.level6BudCARAPI Get.budCARAPI GetName);

    CARAPI GetLevel6BudCARAPI Get.BudCARAPI GetName(
     /* [out] */ String* CFinance.level6BudCARAPI Get.budCARAPI GetName);


   CARAPI SetLevel6BudCARAPI Get.EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level6BudCARAPI Get.endYearMonthyyyymm);

    CARAPI GetLevel6BudCARAPI Get.EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level6BudCARAPI Get.endYearMonthyyyymm);


   CARAPI SetLevel6BudCARAPI Get.TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level6BudCARAPI Get.twelveMonthSequence);

    CARAPI GetLevel6BudCARAPI Get.TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level6BudCARAPI Get.twelveMonthSequence);


   CARAPI SetLevel6BudCARAPI Get.IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.incomeItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.incomeItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.janRevenues);

    CARAPI GetLevel6BudCARAPI Get.JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.janRevenues);


   CARAPI SetLevel6BudCARAPI Get.FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.febRevenues);

    CARAPI GetLevel6BudCARAPI Get.FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.febRevenues);


   CARAPI SetLevel6BudCARAPI Get.MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.marRevenues);

    CARAPI GetLevel6BudCARAPI Get.MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.marRevenues);


   CARAPI SetLevel6BudCARAPI Get.AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.aprRevenues);

    CARAPI GetLevel6BudCARAPI Get.AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.aprRevenues);


   CARAPI SetLevel6BudCARAPI Get.MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.mayRevenues);

    CARAPI GetLevel6BudCARAPI Get.MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.mayRevenues);


   CARAPI SetLevel6BudCARAPI Get.JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.junRevenues);

    CARAPI GetLevel6BudCARAPI Get.JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.junRevenues);


   CARAPI SetLevel6BudCARAPI Get.JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.julRevenues);

    CARAPI GetLevel6BudCARAPI Get.JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.julRevenues);


   CARAPI SetLevel6BudCARAPI Get.AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.augRevenues);

    CARAPI GetLevel6BudCARAPI Get.AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.augRevenues);


   CARAPI SetLevel6BudCARAPI Get.SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.sepRevenues);

    CARAPI GetLevel6BudCARAPI Get.SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.sepRevenues);


   CARAPI SetLevel6BudCARAPI Get.OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.octRevenues);

    CARAPI GetLevel6BudCARAPI Get.OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.octRevenues);


   CARAPI SetLevel6BudCARAPI Get.NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.novRevenues);

    CARAPI GetLevel6BudCARAPI Get.NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.novRevenues);


   CARAPI SetLevel6BudCARAPI Get.DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.decRevenues);

    CARAPI GetLevel6BudCARAPI Get.DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.decRevenues);


   CARAPI SetLevel6BudCARAPI Get.JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.janItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.janItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.febItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.febItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.marItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.marItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.aprItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.aprItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.mayItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.mayItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.junItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.junItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.julItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.julItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.augItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.augItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.sepItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.sepItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.octItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.octItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.novItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.novItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.decItemTypeIds);

    CARAPI GetLevel6BudCARAPI Get.DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.decItemTypeIds);


   CARAPI SetLevel6BudCARAPI Get.JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.janCostsItems);

    CARAPI GetLevel6BudCARAPI Get.JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.janCostsItems);


   CARAPI SetLevel6BudCARAPI Get.FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.febCostsItems);

    CARAPI GetLevel6BudCARAPI Get.FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.febCostsItems);


   CARAPI SetLevel6BudCARAPI Get.MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.marCostsItems);

    CARAPI GetLevel6BudCARAPI Get.MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.marCostsItems);


   CARAPI SetLevel6BudCARAPI Get.AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.aprCostsItems);

    CARAPI GetLevel6BudCARAPI Get.AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.aprCostsItems);


   CARAPI SetLevel6BudCARAPI Get.MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.mayCostsItems);

    CARAPI GetLevel6BudCARAPI Get.MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.mayCostsItems);


   CARAPI SetLevel6BudCARAPI Get.JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.junCostsItems);

    CARAPI GetLevel6BudCARAPI Get.JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.junCostsItems);


   CARAPI SetLevel6BudCARAPI Get.JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.julCostsItems);

    CARAPI GetLevel6BudCARAPI Get.JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.julCostsItems);


   CARAPI SetLevel6BudCARAPI Get.AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.augCostsItems);

    CARAPI GetLevel6BudCARAPI Get.AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.augCostsItems);


   CARAPI SetLevel6BudCARAPI Get.SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.sepCostsItems);

    CARAPI GetLevel6BudCARAPI Get.SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.sepCostsItems);


   CARAPI SetLevel6BudCARAPI Get.OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.octCostsItems);

    CARAPI GetLevel6BudCARAPI Get.OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.octCostsItems);


   CARAPI SetLevel6BudCARAPI Get.NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.novCostsItems);

    CARAPI GetLevel6BudCARAPI Get.NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.novCostsItems);


   CARAPI SetLevel6BudCARAPI Get.DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.decCostsItems);

    CARAPI GetLevel6BudCARAPI Get.DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.decCostsItems);


   CARAPI SetLevel6BudCARAPI Get.JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.janJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.janJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.febJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.febJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.marJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.marJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.aprJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.aprJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.mayJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.mayJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.junJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.junJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.julJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.julJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.augJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.augJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.sepJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.sepJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.octJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.octJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.novJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.novJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.decJobTypeIds);

    CARAPI GetLevel6BudCARAPI Get.DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.decJobTypeIds);


   CARAPI SetLevel6BudCARAPI Get.JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.janCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.janCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.febCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.febCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.marCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.marCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.aprCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.aprCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.mayCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.mayCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.junCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.junCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.julCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.julCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.augCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.augCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.sepCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.sepCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.octCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.octCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.novCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.novCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.decCostsJobs);

    CARAPI GetLevel6BudCARAPI Get.DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.decCostsJobs);


   CARAPI SetLevel6BudCARAPI Get.JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.janServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.janServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.febServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.febServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.marServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.marServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.aprServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.aprServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.mayServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.mayServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.junServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.junServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.julServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.julServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.augServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.augServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.sepServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.sepServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.octServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.octServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.novServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.novServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6BudCARAPI Get.decServiceTypeIds);

    CARAPI GetLevel6BudCARAPI Get.DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6BudCARAPI Get.decServiceTypeIds);


   CARAPI SetLevel6BudCARAPI Get.JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.janCostsServices);

    CARAPI GetLevel6BudCARAPI Get.JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.janCostsServices);


   CARAPI SetLevel6BudCARAPI Get.FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.febCostsServices);

    CARAPI GetLevel6BudCARAPI Get.FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.febCostsServices);


   CARAPI SetLevel6BudCARAPI Get.MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.marCostsServices);

    CARAPI GetLevel6BudCARAPI Get.MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.marCostsServices);


   CARAPI SetLevel6BudCARAPI Get.AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.aprCostsServices);

    CARAPI GetLevel6BudCARAPI Get.AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.aprCostsServices);


   CARAPI SetLevel6BudCARAPI Get.MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.mayCostsServices);

    CARAPI GetLevel6BudCARAPI Get.MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.mayCostsServices);


   CARAPI SetLevel6BudCARAPI Get.JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.junCostsServices);

    CARAPI GetLevel6BudCARAPI Get.JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.junCostsServices);


   CARAPI SetLevel6BudCARAPI Get.JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.julCostsServices);

    CARAPI GetLevel6BudCARAPI Get.JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.julCostsServices);


   CARAPI SetLevel6BudCARAPI Get.AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.augCostsServices);

    CARAPI GetLevel6BudCARAPI Get.AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.augCostsServices);


   CARAPI SetLevel6BudCARAPI Get.SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.sepCostsServices);

    CARAPI GetLevel6BudCARAPI Get.SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.sepCostsServices);


   CARAPI SetLevel6BudCARAPI Get.OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.octCostsServices);

    CARAPI GetLevel6BudCARAPI Get.OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.octCostsServices);


   CARAPI SetLevel6BudCARAPI Get.NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.novCostsServices);

    CARAPI GetLevel6BudCARAPI Get.NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.novCostsServices);


   CARAPI SetLevel6BudCARAPI Get.DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.decCostsServices);

    CARAPI GetLevel6BudCARAPI Get.DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.decCostsServices);


   CARAPI SetLevel6BudCARAPI Get.TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level6BudCARAPI Get.twelveTotalMonthlyCosts);

    CARAPI GetLevel6BudCARAPI Get.TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level6BudCARAPI Get.twelveTotalMonthlyCosts);


   CARAPI SetLevel6BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [in] */ Double CFinance.level6BudCARAPI Get.yearCostThisBudCARAPI GetId);

    CARAPI GetLevel6BudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [out] */ Double* CFinance.level6BudCARAPI Get.yearCostThisBudCARAPI GetId);


   CARAPI SetLevel6BudCARAPI Get.NetProfitLossThisLevel6BudCARAPI GetId(
     /* [in] */ Double CFinance.level6BudCARAPI Get.netProfitLossThisLevel6BudCARAPI GetId);

    CARAPI GetLevel6BudCARAPI Get.NetProfitLossThisLevel6BudCARAPI GetId(
     /* [out] */ Double* CFinance.level6BudCARAPI Get.netProfitLossThisLevel6BudCARAPI GetId);


   CARAPI SetLevel6BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [in] */ Int32 CFinance.level6BudCARAPI Get.linkingInternalBudCARAPI GetNum);

    CARAPI GetLevel6BudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [out] */ Int32* CFinance.level6BudCARAPI Get.linkingInternalBudCARAPI GetNum);


   CARAPI SetLevel6BudCARAPI Get.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level6BudCARAPI Get.customerIds);

    CARAPI GetLevel6BudCARAPI Get.CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level6BudCARAPI Get.customerIds);


   CARAPI SetLevel6BudCARAPI Get.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level6BudCARAPI Get.propertyIds);

    CARAPI GetLevel6BudCARAPI Get.PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level6BudCARAPI Get.propertyIds);


   CARAPI SetLevel6BudCARAPI Get.ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level6BudCARAPI Get.programIds);

    CARAPI GetLevel6BudCARAPI Get.ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level6BudCARAPI Get.programIds);


   CARAPI SetLevel6BudCARAPI Get.ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level6BudCARAPI Get.projectIds);

    CARAPI GetLevel6BudCARAPI Get.ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level6BudCARAPI Get.projectIds);


   CARAPI SetLevel6BudCARAPI Get.LinkedToHyperBudCARAPI GetId(
     /* [in] */ CFinance.hyperBudCARAPI Get CFinance.level6BudCARAPI Get.linkedToHyperBudCARAPI GetId);

    CARAPI GetLevel6BudCARAPI Get.LinkedToHyperBudCARAPI GetId(
     /* [out] */ CFinance.hyperBudCARAPI Get* CFinance.level6BudCARAPI Get.linkedToHyperBudCARAPI GetId);


   CARAPI SetLevel6BudCARAPI Get.MasterAsCARAPI SetId(
     /* [in] */ CFinance.masterAsCARAPI SetRegister CFinance.level6BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel6BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAsCARAPI SetRegister* CFinance.level6BudCARAPI Get.masterAsCARAPI SetId);


   CARAPI SetLevel6BudCARAPI Get.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level6BudCARAPI Get.businessChannelOwnerId);

    CARAPI GetLevel6BudCARAPI Get.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level6BudCARAPI Get.businessChannelOwnerId);





   CARAPI SetHyperBudCARAPI Get.HyperBudCARAPI GetId(
     /* [in] */ const String& CFinance.hyperBudCARAPI Get.hyperBudCARAPI GetId);

    CARAPI GetHyperBudCARAPI Get.HyperBudCARAPI GetId(
     /* [out] */ String* CFinance.hyperBudCARAPI Get.hyperBudCARAPI GetId);


   CARAPI SetHyperBudCARAPI Get.BudCARAPI GetName(
     /* [in] */ const String& CFinance.hyperBudCARAPI Get.budCARAPI GetName);

    CARAPI GetHyperBudCARAPI Get.BudCARAPI GetName(
     /* [out] */ String* CFinance.hyperBudCARAPI Get.budCARAPI GetName);


   CARAPI SetHyperBudCARAPI Get.EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.hyperBudCARAPI Get.endYearMonthyyyymm);

    CARAPI GetHyperBudCARAPI Get.EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.hyperBudCARAPI Get.endYearMonthyyyymm);


   CARAPI SetHyperBudCARAPI Get.TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.hyperBudCARAPI Get.twelveMonthSequence);

    CARAPI GetHyperBudCARAPI Get.TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.hyperBudCARAPI Get.twelveMonthSequence);


   CARAPI SetHyperBudCARAPI Get.IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.incomeItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.incomeItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.janRevenues);

    CARAPI GetHyperBudCARAPI Get.JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.janRevenues);


   CARAPI SetHyperBudCARAPI Get.FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.febRevenues);

    CARAPI GetHyperBudCARAPI Get.FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.febRevenues);


   CARAPI SetHyperBudCARAPI Get.MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.marRevenues);

    CARAPI GetHyperBudCARAPI Get.MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.marRevenues);


   CARAPI SetHyperBudCARAPI Get.AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.aprRevenues);

    CARAPI GetHyperBudCARAPI Get.AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.aprRevenues);


   CARAPI SetHyperBudCARAPI Get.MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.mayRevenues);

    CARAPI GetHyperBudCARAPI Get.MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.mayRevenues);


   CARAPI SetHyperBudCARAPI Get.JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.junRevenues);

    CARAPI GetHyperBudCARAPI Get.JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.junRevenues);


   CARAPI SetHyperBudCARAPI Get.JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.julRevenues);

    CARAPI GetHyperBudCARAPI Get.JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.julRevenues);


   CARAPI SetHyperBudCARAPI Get.AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.augRevenues);

    CARAPI GetHyperBudCARAPI Get.AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.augRevenues);


   CARAPI SetHyperBudCARAPI Get.SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.sepRevenues);

    CARAPI GetHyperBudCARAPI Get.SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.sepRevenues);


   CARAPI SetHyperBudCARAPI Get.OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.octRevenues);

    CARAPI GetHyperBudCARAPI Get.OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.octRevenues);


   CARAPI SetHyperBudCARAPI Get.NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.novRevenues);

    CARAPI GetHyperBudCARAPI Get.NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.novRevenues);


   CARAPI SetHyperBudCARAPI Get.DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.decRevenues);

    CARAPI GetHyperBudCARAPI Get.DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.decRevenues);


   CARAPI SetHyperBudCARAPI Get.JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.janItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.janItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.febItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.febItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.marItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.marItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.aprItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.aprItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.mayItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.mayItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.junItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.junItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.julItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.julItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.augItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.augItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.sepItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.sepItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.octItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.octItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.novItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.novItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.decItemTypeIds);

    CARAPI GetHyperBudCARAPI Get.DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.decItemTypeIds);


   CARAPI SetHyperBudCARAPI Get.JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.janCostsItems);

    CARAPI GetHyperBudCARAPI Get.JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.janCostsItems);


   CARAPI SetHyperBudCARAPI Get.FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.febCostsItems);

    CARAPI GetHyperBudCARAPI Get.FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.febCostsItems);


   CARAPI SetHyperBudCARAPI Get.MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.marCostsItems);

    CARAPI GetHyperBudCARAPI Get.MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.marCostsItems);


   CARAPI SetHyperBudCARAPI Get.AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.aprCostsItems);

    CARAPI GetHyperBudCARAPI Get.AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.aprCostsItems);


   CARAPI SetHyperBudCARAPI Get.MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.mayCostsItems);

    CARAPI GetHyperBudCARAPI Get.MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.mayCostsItems);


   CARAPI SetHyperBudCARAPI Get.JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.junCostsItems);

    CARAPI GetHyperBudCARAPI Get.JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.junCostsItems);


   CARAPI SetHyperBudCARAPI Get.JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.julCostsItems);

    CARAPI GetHyperBudCARAPI Get.JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.julCostsItems);


   CARAPI SetHyperBudCARAPI Get.AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.augCostsItems);

    CARAPI GetHyperBudCARAPI Get.AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.augCostsItems);


   CARAPI SetHyperBudCARAPI Get.SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.sepCostsItems);

    CARAPI GetHyperBudCARAPI Get.SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.sepCostsItems);


   CARAPI SetHyperBudCARAPI Get.OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.octCostsItems);

    CARAPI GetHyperBudCARAPI Get.OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.octCostsItems);


   CARAPI SetHyperBudCARAPI Get.NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.novCostsItems);

    CARAPI GetHyperBudCARAPI Get.NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.novCostsItems);


   CARAPI SetHyperBudCARAPI Get.DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.decCostsItems);

    CARAPI GetHyperBudCARAPI Get.DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.decCostsItems);


   CARAPI SetHyperBudCARAPI Get.JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.janJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.janJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.febJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.febJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.marJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.marJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.aprJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.aprJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.mayJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.mayJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.junJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.junJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.julJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.julJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.augJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.augJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.sepJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.sepJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.octJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.octJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.novJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.novJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.decJobTypeIds);

    CARAPI GetHyperBudCARAPI Get.DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.decJobTypeIds);


   CARAPI SetHyperBudCARAPI Get.JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.janCostsJobs);

    CARAPI GetHyperBudCARAPI Get.JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.janCostsJobs);


   CARAPI SetHyperBudCARAPI Get.FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.febCostsJobs);

    CARAPI GetHyperBudCARAPI Get.FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.febCostsJobs);


   CARAPI SetHyperBudCARAPI Get.MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.marCostsJobs);

    CARAPI GetHyperBudCARAPI Get.MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.marCostsJobs);


   CARAPI SetHyperBudCARAPI Get.AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.aprCostsJobs);

    CARAPI GetHyperBudCARAPI Get.AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.aprCostsJobs);


   CARAPI SetHyperBudCARAPI Get.MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.mayCostsJobs);

    CARAPI GetHyperBudCARAPI Get.MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.mayCostsJobs);


   CARAPI SetHyperBudCARAPI Get.JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.junCostsJobs);

    CARAPI GetHyperBudCARAPI Get.JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.junCostsJobs);


   CARAPI SetHyperBudCARAPI Get.JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.julCostsJobs);

    CARAPI GetHyperBudCARAPI Get.JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.julCostsJobs);


   CARAPI SetHyperBudCARAPI Get.AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.augCostsJobs);

    CARAPI GetHyperBudCARAPI Get.AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.augCostsJobs);


   CARAPI SetHyperBudCARAPI Get.SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.sepCostsJobs);

    CARAPI GetHyperBudCARAPI Get.SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.sepCostsJobs);


   CARAPI SetHyperBudCARAPI Get.OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.octCostsJobs);

    CARAPI GetHyperBudCARAPI Get.OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.octCostsJobs);


   CARAPI SetHyperBudCARAPI Get.NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.novCostsJobs);

    CARAPI GetHyperBudCARAPI Get.NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.novCostsJobs);


   CARAPI SetHyperBudCARAPI Get.DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.decCostsJobs);

    CARAPI GetHyperBudCARAPI Get.DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.decCostsJobs);


   CARAPI SetHyperBudCARAPI Get.JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.janServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.janServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.febServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.febServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.marServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.marServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.aprServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.aprServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.mayServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.mayServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.junServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.junServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.julServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.julServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.augServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.augServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.sepServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.sepServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.octServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.octServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.novServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.novServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudCARAPI Get.decServiceTypeIds);

    CARAPI GetHyperBudCARAPI Get.DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudCARAPI Get.decServiceTypeIds);


   CARAPI SetHyperBudCARAPI Get.JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.janCostsServices);

    CARAPI GetHyperBudCARAPI Get.JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.janCostsServices);


   CARAPI SetHyperBudCARAPI Get.FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.febCostsServices);

    CARAPI GetHyperBudCARAPI Get.FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.febCostsServices);


   CARAPI SetHyperBudCARAPI Get.MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.marCostsServices);

    CARAPI GetHyperBudCARAPI Get.MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.marCostsServices);


   CARAPI SetHyperBudCARAPI Get.AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.aprCostsServices);

    CARAPI GetHyperBudCARAPI Get.AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.aprCostsServices);


   CARAPI SetHyperBudCARAPI Get.MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.mayCostsServices);

    CARAPI GetHyperBudCARAPI Get.MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.mayCostsServices);


   CARAPI SetHyperBudCARAPI Get.JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.junCostsServices);

    CARAPI GetHyperBudCARAPI Get.JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.junCostsServices);


   CARAPI SetHyperBudCARAPI Get.JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.julCostsServices);

    CARAPI GetHyperBudCARAPI Get.JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.julCostsServices);


   CARAPI SetHyperBudCARAPI Get.AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.augCostsServices);

    CARAPI GetHyperBudCARAPI Get.AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.augCostsServices);


   CARAPI SetHyperBudCARAPI Get.SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.sepCostsServices);

    CARAPI GetHyperBudCARAPI Get.SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.sepCostsServices);


   CARAPI SetHyperBudCARAPI Get.OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.octCostsServices);

    CARAPI GetHyperBudCARAPI Get.OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.octCostsServices);


   CARAPI SetHyperBudCARAPI Get.NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.novCostsServices);

    CARAPI GetHyperBudCARAPI Get.NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.novCostsServices);


   CARAPI SetHyperBudCARAPI Get.DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.decCostsServices);

    CARAPI GetHyperBudCARAPI Get.DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.decCostsServices);


   CARAPI SetHyperBudCARAPI Get.TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudCARAPI Get.twelveTotalMonthlyCosts);

    CARAPI GetHyperBudCARAPI Get.TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudCARAPI Get.twelveTotalMonthlyCosts);


   CARAPI SetHyperBudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [in] */ Double CFinance.hyperBudCARAPI Get.yearCostThisBudCARAPI GetId);

    CARAPI GetHyperBudCARAPI Get.YearCostThisBudCARAPI GetId(
     /* [out] */ Double* CFinance.hyperBudCARAPI Get.yearCostThisBudCARAPI GetId);


   CARAPI SetHyperBudCARAPI Get.NetProfitLossThisHyperBudCARAPI GetId(
     /* [in] */ Double CFinance.hyperBudCARAPI Get.netProfitLossThisHyperBudCARAPI GetId);

    CARAPI GetHyperBudCARAPI Get.NetProfitLossThisHyperBudCARAPI GetId(
     /* [out] */ Double* CFinance.hyperBudCARAPI Get.netProfitLossThisHyperBudCARAPI GetId);


   CARAPI SetHyperBudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [in] */ Int32 CFinance.hyperBudCARAPI Get.linkingInternalBudCARAPI GetNum);

    CARAPI GetHyperBudCARAPI Get.LinkingInternalBudCARAPI GetNum(
     /* [out] */ Int32* CFinance.hyperBudCARAPI Get.linkingInternalBudCARAPI GetNum);


   CARAPI SetHyperBudCARAPI Get.CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.hyperBudCARAPI Get.customerIds);

    CARAPI GetHyperBudCARAPI Get.CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.hyperBudCARAPI Get.customerIds);


   CARAPI SetHyperBudCARAPI Get.PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.hyperBudCARAPI Get.propertyIds);

    CARAPI GetHyperBudCARAPI Get.PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.hyperBudCARAPI Get.propertyIds);


   CARAPI SetHyperBudCARAPI Get.ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.hyperBudCARAPI Get.programIds);

    CARAPI GetHyperBudCARAPI Get.ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.hyperBudCARAPI Get.programIds);


   CARAPI SetHyperBudCARAPI Get.ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.hyperBudCARAPI Get.projectIds);

    CARAPI GetHyperBudCARAPI Get.ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.hyperBudCARAPI Get.projectIds);


   CARAPI SetHyperBudCARAPI Get.MasterAsCARAPI SetId(
     /* [in] */ CFinance.masterAsCARAPI SetRegister CFinance.hyperBudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetHyperBudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAsCARAPI SetRegister* CFinance.hyperBudCARAPI Get.masterAsCARAPI SetId);


   CARAPI SetHyperBudCARAPI Get.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.hyperBudCARAPI Get.businessChannelOwnerId);

    CARAPI GetHyperBudCARAPI Get.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.hyperBudCARAPI Get.businessChannelOwnerId);


   CARAPI SetInvoice.InvoiceId(
     /* [in] */ const String& CFinance.invoice.invoiceId);

    CARAPI GetInvoice.InvoiceId(
     /* [out] */ String* CFinance.invoice.invoiceId);


   CARAPI SetInvoice.InvoiceDate(
     /* [in] */ const String& CFinance.invoice.invoiceDate);

    CARAPI GetInvoice.InvoiceDate(
     /* [out] */ String* CFinance.invoice.invoiceDate);


   CARAPI SetInvoice.InvoiceAmount(
     /* [in] */ Double CFinance.invoice.invoiceAmount);

    CARAPI GetInvoice.InvoiceAmount(
     /* [out] */ Double* CFinance.invoice.invoiceAmount);


   CARAPI SetInvoice.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.invoice.docRefs);

    CARAPI GetInvoice.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.invoice.docRefs);


   CARAPI SetInvoice.PaidDate(
     /* [in] */ const String& CFinance.invoice.paidDate);

    CARAPI GetInvoice.PaidDate(
     /* [out] */ String* CFinance.invoice.paidDate);


   CARAPI SetInvoice.GenLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFinance.invoice.genLedgeFinTxIds);

    CARAPI GetInvoice.GenLedgeFinTxIds(
     [out, callee] ArrayOf<String>* CFinance.invoice.genLedgeFinTxIds);


   CARAPI SetInvoice.MasLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFinance.invoice.masLedgeFinTxIds);

    CARAPI GetInvoice.MasLedgeFinTxIds(
     [out, callee] ArrayOf<String>* CFinance.invoice.masLedgeFinTxIds);


   CARAPI SetInvoice.GenLedgeFinTxNum(
     /* [in] */ Int32 CFinance.invoice.genLedgeFinTxNum);

    CARAPI GetInvoice.GenLedgeFinTxNum(
     /* [out] */ Int32* CFinance.invoice.genLedgeFinTxNum);


   CARAPI SetInvoice.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.invoice.masLedgeFinTxNum);

    CARAPI GetInvoice.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.invoice.masLedgeFinTxNum);


   CARAPI SetInvoice.FeesAndChargesIds(
     /* [in] */ ArrayOf<const String&> CFinance.invoice.feesAndChargesIds);

    CARAPI GetInvoice.FeesAndChargesIds(
     [out, callee] ArrayOf<String>* CFinance.invoice.feesAndChargesIds);


   CARAPI SetInvoice.ChargeDates(
     /* [in] */ ArrayOf<const String&> CFinance.invoice.chargeDates);

    CARAPI GetInvoice.ChargeDates(
     [out, callee] ArrayOf<String>* CFinance.invoice.chargeDates);


   CARAPI SetInvoice.Customers(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.invoice.customers);

    CARAPI GetInvoice.Customers(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.invoice.customers);


   CARAPI SetInvoice.PropertyOwnerIds(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CFinance.invoice.propertyOwnerIds);

    CARAPI GetInvoice.PropertyOwnerIds(
     [out, callee] ArrayOf<CProperty.propertyOwner>* CFinance.invoice.propertyOwnerIds);


   CARAPI SetInvoice.TenancyId(
     /* [in] */ CProperty.tenant CFinance.invoice.tenancyId);

    CARAPI GetInvoice.TenancyId(
     /* [out] */ CProperty.tenant* CFinance.invoice.tenancyId);


   CARAPI SetInvoice.ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFinance.invoice.itemIds);

    CARAPI GetInvoice.ItemIds(
     [out, callee] ArrayOf<CAdministration.item>* CFinance.invoice.itemIds);


   CARAPI SetInvoice.JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CFinance.invoice.jobIds);

    CARAPI GetInvoice.JobIds(
     [out, callee] ArrayOf<CAdministration.job>* CFinance.invoice.jobIds);


   CARAPI SetInvoice.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CFinance.invoice.serviceIds);

    CARAPI GetInvoice.ServiceIds(
     [out, callee] ArrayOf<CAdministration.service>* CFinance.invoice.serviceIds);


   CARAPI SetInvoice.MasterSalesOrderIds(
     /* [in] */ ArrayOf<CFinance.masterSalesOrder> CFinance.invoice.masterSalesOrderIds);

    CARAPI GetInvoice.MasterSalesOrderIds(
     [out, callee] ArrayOf<CFinance.masterSalesOrder>* CFinance.invoice.masterSalesOrderIds);


   CARAPI SetInvoice.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.invoice.masLedgeFinTxJoinId);

    CARAPI GetInvoice.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.invoice.masLedgeFinTxJoinId);


   CARAPI SetInvoice.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.invoice.businessChannelOwnerId);

    CARAPI GetInvoice.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.invoice.businessChannelOwnerId);


   CARAPI SetInvoice.BranchId(
     /* [in] */ CAdministration.branch CFinance.invoice.branchId);

    CARAPI GetInvoice.BranchId(
     /* [out] */ CAdministration.branch* CFinance.invoice.branchId);


   CARAPI SetInvoice.DeptId(
     /* [in] */ CAdministration.department CFinance.invoice.deptId);

    CARAPI GetInvoice.DeptId(
     /* [out] */ CAdministration.department* CFinance.invoice.deptId);


   CARAPI SetBill.BillId(
     /* [in] */ const String& CFinance.bill.billId);

    CARAPI GetBill.BillId(
     /* [out] */ String* CFinance.bill.billId);


   CARAPI SetBill.BillCodeScanned(
     /* [in] */ const String& CFinance.bill.billCodeScanned);

    CARAPI GetBill.BillCodeScanned(
     /* [out] */ String* CFinance.bill.billCodeScanned);


   CARAPI SetBill.BillDate(
     /* [in] */ const String& CFinance.bill.billDate);

    CARAPI GetBill.BillDate(
     /* [out] */ String* CFinance.bill.billDate);


   CARAPI SetBill.BillAmount(
     /* [in] */ Double CFinance.bill.billAmount);

    CARAPI GetBill.BillAmount(
     /* [out] */ Double* CFinance.bill.billAmount);


   CARAPI SetBill.DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.bill.docRefs);

    CARAPI GetBill.DocRefs(
     [out, callee] ArrayOf<String>* CFinance.bill.docRefs);


   CARAPI SetBill.PaidDate(
     /* [in] */ const String& CFinance.bill.paidDate);

    CARAPI GetBill.PaidDate(
     /* [out] */ String* CFinance.bill.paidDate);


   CARAPI SetBill.GenLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFinance.bill.genLedgeFinTxIds);

    CARAPI GetBill.GenLedgeFinTxIds(
     [out, callee] ArrayOf<String>* CFinance.bill.genLedgeFinTxIds);


   CARAPI SetBill.MasLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFinance.bill.masLedgeFinTxIds);

    CARAPI GetBill.MasLedgeFinTxIds(
     [out, callee] ArrayOf<String>* CFinance.bill.masLedgeFinTxIds);


   CARAPI SetBill.GenLedgeFinTxNum(
     /* [in] */ Int32 CFinance.bill.genLedgeFinTxNum);

    CARAPI GetBill.GenLedgeFinTxNum(
     /* [out] */ Int32* CFinance.bill.genLedgeFinTxNum);


   CARAPI SetBill.MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.bill.masLedgeFinTxNum);

    CARAPI GetBill.MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.bill.masLedgeFinTxNum);


   CARAPI SetBill.Passed(
     /* [in] */ Boolean CFinance.bill.passed);

    CARAPI GetBill.Passed(
     /* [out] */ Boolean* CFinance.bill.passed);


   CARAPI SetBill.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.bill.supplierId);

    CARAPI GetBill.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.bill.supplierId);


   CARAPI SetBill.ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFinance.bill.itemIds);

    CARAPI GetBill.ItemIds(
     [out, callee] ArrayOf<CAdministration.item>* CFinance.bill.itemIds);


   CARAPI SetBill.JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CFinance.bill.jobIds);

    CARAPI GetBill.JobIds(
     [out, callee] ArrayOf<CAdministration.job>* CFinance.bill.jobIds);


   CARAPI SetBill.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CFinance.bill.serviceIds);

    CARAPI GetBill.ServiceIds(
     [out, callee] ArrayOf<CAdministration.service>* CFinance.bill.serviceIds);


   CARAPI SetBill.PurchOrderIds(
     /* [in] */ ArrayOf<CFinance.purchaseOrder> CFinance.bill.purchOrderIds);

    CARAPI GetBill.PurchOrderIds(
     [out, callee] ArrayOf<CFinance.purchaseOrder>* CFinance.bill.purchOrderIds);


   CARAPI SetBill.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.bill.masLedgeFinTxJoinId);

    CARAPI GetBill.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.bill.masLedgeFinTxJoinId);


   CARAPI SetBill.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.bill.businessChannelOwnerId);

    CARAPI GetBill.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.bill.businessChannelOwnerId);


   CARAPI SetBill.BranchId(
     /* [in] */ CAdministration.branch CFinance.bill.branchId);

    CARAPI GetBill.BranchId(
     /* [out] */ CAdministration.branch* CFinance.bill.branchId);


   CARAPI SetBill.DeptId(
     /* [in] */ CAdministration.department CFinance.bill.deptId);

    CARAPI GetBill.DeptId(
     /* [out] */ CAdministration.department* CFinance.bill.deptId);


   CARAPI SetFeesAndCharges.FeeChargeId(
     /* [in] */ const String& CFinance.feesAndCharges.feeChargeId);

    CARAPI GetFeesAndCharges.FeeChargeId(
     /* [out] */ String* CFinance.feesAndCharges.feeChargeId);


   CARAPI SetFeesAndCharges.FeeChargeName(
     /* [in] */ const String& CFinance.feesAndCharges.feeChargeName);

    CARAPI GetFeesAndCharges.FeeChargeName(
     /* [out] */ String* CFinance.feesAndCharges.feeChargeName);


   CARAPI SetFeesAndCharges.FeeChargeCode(
     /* [in] */ const String& CFinance.feesAndCharges.feeChargeCode);

    CARAPI GetFeesAndCharges.FeeChargeCode(
     /* [out] */ String* CFinance.feesAndCharges.feeChargeCode);


   CARAPI SetFeesAndCharges.FeeChargeDescription(
     /* [in] */ const String& CFinance.feesAndCharges.feeChargeDescription);

    CARAPI GetFeesAndCharges.FeeChargeDescription(
     /* [out] */ String* CFinance.feesAndCharges.feeChargeDescription);


   CARAPI SetFeesAndCharges.FeeChargeRate(
     /* [in] */ Double CFinance.feesAndCharges.feeChargeRate);

    CARAPI GetFeesAndCharges.FeeChargeRate(
     /* [out] */ Double* CFinance.feesAndCharges.feeChargeRate);


   CARAPI SetFeesAndCharges.FeeChargeRateUnits(
     /* [in] */ const String& CFinance.feesAndCharges.feeChargeRateUnits);

    CARAPI GetFeesAndCharges.FeeChargeRateUnits(
     /* [out] */ String* CFinance.feesAndCharges.feeChargeRateUnits);


   CARAPI SetFeesAndCharges.PaymentInterval(
     /* [in] */ CHelper.billingInterval CFinance.feesAndCharges.billingInterval);

    CARAPI GetFeesAndCharges.PaymentInterval(
     /* [out] */ CHelper.billingInterval* CFinance.feesAndCharges.billingInterval);


   CARAPI SetFeesAndCharges.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.feesAndCharges.businessChannelOwnerId);

    CARAPI GetFeesAndCharges.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.feesAndCharges.businessChannelOwnerId);


   CARAPI SetFeesAndCharges.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CFinance.feesAndCharges.serviceIds);

    CARAPI GetFeesAndCharges.ServiceIds(
     [out, callee] ArrayOf<CAdministration.service>* CFinance.feesAndCharges.serviceIds);


   CARAPI SetFeesAndCharges.ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFinance.feesAndCharges.itemIds);

    CARAPI GetFeesAndCharges.ItemIds(
     [out, callee] ArrayOf<CAdministration.item>* CFinance.feesAndCharges.itemIds);


   CARAPI SetFeesAndCharges.ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CFinance.feesAndCharges.itemTypeIds);

    CARAPI GetFeesAndCharges.ItemTypeIds(
     [out, callee] ArrayOf<CAdministration.itemType>* CFinance.feesAndCharges.itemTypeIds);


   CARAPI SetPurchaseOrder.PurchOrderId(
     /* [in] */ const String& CFinance.purchaseOrder.purchOrderId);

    CARAPI GetPurchaseOrder.PurchOrderId(
     /* [out] */ String* CFinance.purchaseOrder.purchOrderId);


   CARAPI SetPurchaseOrder.MRQIdIfRentalProperty(
     /* [in] */ const String& CFinance.purchaseOrder.mRQIdIfRentalProperty);

    CARAPI GetPurchaseOrder.MRQIdIfRentalProperty(
     /* [out] */ String* CFinance.purchaseOrder.mRQIdIfRentalProperty);


   CARAPI SetPurchaseOrder.DamageCausedByCustomerTenantOthers(
     /* [in] */ Boolean CFinance.purchaseOrder.damageCausedByCustomerTenantOthers);

    CARAPI GetPurchaseOrder.DamageCausedByCustomerTenantOthers(
     /* [out] */ Boolean* CFinance.purchaseOrder.damageCausedByCustomerTenantOthers);


   CARAPI SetPurchaseOrder.OurResponsibility(
     /* [in] */ Boolean CFinance.purchaseOrder.ourResponsibility);

    CARAPI GetPurchaseOrder.OurResponsibility(
     /* [out] */ Boolean* CFinance.purchaseOrder.ourResponsibility);


   CARAPI SetPurchaseOrder.SummaryDescriptionOfProblemItemised(
     /* [in] */ ArrayOf<const String&> CFinance.purchaseOrder.summaryDescriptionOfProblemItemised);

    CARAPI GetPurchaseOrder.SummaryDescriptionOfProblemItemised(
     [out, callee] ArrayOf<String>* CFinance.purchaseOrder.summaryDescriptionOfProblemItemised);


   CARAPI SetPurchaseOrder.QuotedEstimateCost(
     /* [in] */ Double CFinance.purchaseOrder.quotedEstimateCost);

    CARAPI GetPurchaseOrder.QuotedEstimateCost(
     /* [out] */ Double* CFinance.purchaseOrder.quotedEstimateCost);


   CARAPI SetPurchaseOrder.ExpectedCompletionDate(
     /* [in] */ const String& CFinance.purchaseOrder.expectedCompletionDate);

    CARAPI GetPurchaseOrder.ExpectedCompletionDate(
     /* [out] */ String* CFinance.purchaseOrder.expectedCompletionDate);


   CARAPI SetPurchaseOrder.WorkCheckedPassed(
     /* [in] */ ArrayOf<Boolean> CFinance.purchaseOrder.workCheckedPassed);

    CARAPI GetPurchaseOrder.WorkCheckedPassed(
     [out, callee] ArrayOf<Boolean>* CFinance.purchaseOrder.workCheckedPassed);


   CARAPI SetPurchaseOrder.TotalMaintPurchOrderAmount(
     /* [in] */ Double CFinance.purchaseOrder.totalMaintPurchOrderAmount);

    CARAPI GetPurchaseOrder.TotalMaintPurchOrderAmount(
     /* [out] */ Double* CFinance.purchaseOrder.totalMaintPurchOrderAmount);


   CARAPI SetPurchaseOrder.MasLedgeFinTxNumReturned(
     /* [in] */ Int32 CFinance.purchaseOrder.masLedgeFinTxNumReturned);

    CARAPI GetPurchaseOrder.MasLedgeFinTxNumReturned(
     /* [out] */ Int32* CFinance.purchaseOrder.masLedgeFinTxNumReturned);


   CARAPI SetPurchaseOrder.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.purchaseOrder.businessChannelOwnerId);

    CARAPI GetPurchaseOrder.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.purchaseOrder.businessChannelOwnerId);


   CARAPI SetPurchaseOrder.PropertyId(
     /* [in] */ CProperty.property CFinance.purchaseOrder.propertyId);

    CARAPI GetPurchaseOrder.PropertyId(
     /* [out] */ CProperty.property* CFinance.purchaseOrder.propertyId);


   CARAPI SetPurchaseOrder.BranchId(
     /* [in] */ CAdministration.branch CFinance.purchaseOrder.branchId);

    CARAPI GetPurchaseOrder.BranchId(
     /* [out] */ CAdministration.branch* CFinance.purchaseOrder.branchId);


   CARAPI SetPurchaseOrder.DeptId(
     /* [in] */ CAdministration.department CFinance.purchaseOrder.deptId);

    CARAPI GetPurchaseOrder.DeptId(
     /* [out] */ CAdministration.department* CFinance.purchaseOrder.deptId);


   CARAPI SetPurchaseOrder.SupplierId(
     /* [in] */ CSupplier.supplier CFinance.purchaseOrder.supplierId);

    CARAPI GetPurchaseOrder.SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.purchaseOrder.supplierId);


   CARAPI SetPurchaseOrder.ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CFinance.purchaseOrder.itemTypeIds);

    CARAPI GetPurchaseOrder.ItemTypeIds(
     [out, callee] ArrayOf<CAdministration.itemType>* CFinance.purchaseOrder.itemTypeIds);


   CARAPI SetPurchaseOrder.ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFinance.purchaseOrder.itemIds);

    CARAPI GetPurchaseOrder.ItemIds(
     [out, callee] ArrayOf<CAdministration.item>* CFinance.purchaseOrder.itemIds);


   CARAPI SetPurchaseOrder.ServiceTypeIds(
     /* [in] */ ArrayOf<CAdministration.serviceType> CFinance.purchaseOrder.serviceTypeIds);

    CARAPI GetPurchaseOrder.ServiceTypeIds(
     [out, callee] ArrayOf<CAdministration.serviceType>* CFinance.purchaseOrder.serviceTypeIds);


   CARAPI SetPurchaseOrder.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CFinance.purchaseOrder.serviceIds);

    CARAPI GetPurchaseOrder.ServiceIds(
     [out, callee] ArrayOf<CAdministration.service>* CFinance.purchaseOrder.serviceIds);


   CARAPI SetPurchaseOrder.JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CFinance.purchaseOrder.jobTypeIds);

    CARAPI GetPurchaseOrder.JobTypeIds(
     [out, callee] ArrayOf<CAdministration.jobType>* CFinance.purchaseOrder.jobTypeIds);


   CARAPI SetPurchaseOrder.JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CFinance.purchaseOrder.jobIds);

    CARAPI GetPurchaseOrder.JobIds(
     [out, callee] ArrayOf<CAdministration.job>* CFinance.purchaseOrder.jobIds);


   CARAPI SetPurchaseOrder.MasterLedgerExpenseIds(
     /* [in] */ ArrayOf<CFinance.masterLedgerExpense> CFinance.purchaseOrder.masterLedgerExpenseIds);

    CARAPI GetPurchaseOrder.MasterLedgerExpenseIds(
     [out, callee] ArrayOf<CFinance.masterLedgerExpense>* CFinance.purchaseOrder.masterLedgerExpenseIds);


   CARAPI SetPurchaseOrder.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.purchaseOrder.masLedgeFinTxJoinId);

    CARAPI GetPurchaseOrder.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.purchaseOrder.masLedgeFinTxJoinId);


   CARAPI SetPurchaseOrder.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.purchaseOrder.docRefIds);

    CARAPI GetPurchaseOrder.DocRefIds(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.purchaseOrder.docRefIds);


   CARAPI SetPurchaseOrder.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.purchaseOrder.imageRefIds);

    CARAPI GetPurchaseOrder.ImageRefIds(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.purchaseOrder.imageRefIds);


   CARAPI SetMasterSalesOrder.MasterSalesOrderId(
     /* [in] */ const String& CFinance.masterSalesOrder.masterSalesOrderId);

    CARAPI GetMasterSalesOrder.MasterSalesOrderId(
     /* [out] */ String* CFinance.masterSalesOrder.masterSalesOrderId);


   CARAPI SetMasterSalesOrder.ItemQuantities(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.itemQuantities);

    CARAPI GetMasterSalesOrder.ItemQuantities(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.itemQuantities);


   CARAPI SetMasterSalesOrder.ItemWeights(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.itemWeights);

    CARAPI GetMasterSalesOrder.ItemWeights(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.itemWeights);


   CARAPI SetMasterSalesOrder.ItemPrices(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.itemPrices);

    CARAPI GetMasterSalesOrder.ItemPrices(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.itemPrices);


   CARAPI SetMasterSalesOrder.ItemTotalPrice(
     /* [in] */ Double CFinance.masterSalesOrder.itemTotalPrice);

    CARAPI GetMasterSalesOrder.ItemTotalPrice(
     /* [out] */ Double* CFinance.masterSalesOrder.itemTotalPrice);


   CARAPI SetMasterSalesOrder.ItemTotalWeight(
     /* [in] */ Double CFinance.masterSalesOrder.itemTotalWeight);

    CARAPI GetMasterSalesOrder.ItemTotalWeight(
     /* [out] */ Double* CFinance.masterSalesOrder.itemTotalWeight);


   CARAPI SetMasterSalesOrder.ProductQuantities(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.productQuantities);

    CARAPI GetMasterSalesOrder.ProductQuantities(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.productQuantities);


   CARAPI SetMasterSalesOrder.ProductWeights(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.productWeights);

    CARAPI GetMasterSalesOrder.ProductWeights(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.productWeights);


   CARAPI SetMasterSalesOrder.ProductsPrices(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.productsPrices);

    CARAPI GetMasterSalesOrder.ProductsPrices(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.productsPrices);


   CARAPI SetMasterSalesOrder.ProductsTotalPrice(
     /* [in] */ Double CFinance.masterSalesOrder.productsTotalPrice);

    CARAPI GetMasterSalesOrder.ProductsTotalPrice(
     /* [out] */ Double* CFinance.masterSalesOrder.productsTotalPrice);


   CARAPI SetMasterSalesOrder.ProductsTotalWeight(
     /* [in] */ Double CFinance.masterSalesOrder.productsTotalWeight);

    CARAPI GetMasterSalesOrder.ProductsTotalWeight(
     /* [out] */ Double* CFinance.masterSalesOrder.productsTotalWeight);


   CARAPI SetMasterSalesOrder.ServicePriceRates(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.servicePriceRates);

    CARAPI GetMasterSalesOrder.ServicePriceRates(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.servicePriceRates);


   CARAPI SetMasterSalesOrder.ServiceEstimatedTotalPrice(
     /* [in] */ Double CFinance.masterSalesOrder.serviceEstimatedTotalPrice);

    CARAPI GetMasterSalesOrder.ServiceEstimatedTotalPrice(
     /* [out] */ Double* CFinance.masterSalesOrder.serviceEstimatedTotalPrice);


   CARAPI SetMasterSalesOrder.JobPriceRates(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.jobPriceRates);

    CARAPI GetMasterSalesOrder.JobPriceRates(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.jobPriceRates);


   CARAPI SetMasterSalesOrder.JobsEstimatedTotalPrice(
     /* [in] */ Double CFinance.masterSalesOrder.jobsEstimatedTotalPrice);

    CARAPI GetMasterSalesOrder.JobsEstimatedTotalPrice(
     /* [out] */ Double* CFinance.masterSalesOrder.jobsEstimatedTotalPrice);


   CARAPI SetMasterSalesOrder.TotalOrderPrice(
     /* [in] */ Double CFinance.masterSalesOrder.totalOrderPrice);

    CARAPI GetMasterSalesOrder.TotalOrderPrice(
     /* [out] */ Double* CFinance.masterSalesOrder.totalOrderPrice);


   CARAPI SetMasterSalesOrder.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterSalesOrder.businessChannelOwnerId);

    CARAPI GetMasterSalesOrder.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterSalesOrder.businessChannelOwnerId);


   CARAPI SetMasterSalesOrder.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterSalesOrder.branchId);

    CARAPI GetMasterSalesOrder.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterSalesOrder.branchId);


   CARAPI SetMasterSalesOrder.DeptId(
     /* [in] */ CAdministration.department CFinance.masterSalesOrder.deptId);

    CARAPI GetMasterSalesOrder.DeptId(
     /* [out] */ CAdministration.department* CFinance.masterSalesOrder.deptId);


   CARAPI SetMasterSalesOrder.Customers(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.masterSalesOrder.customers);

    CARAPI GetMasterSalesOrder.Customers(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.masterSalesOrder.customers);


   CARAPI SetMasterSalesOrder.ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CFinance.masterSalesOrder.itemTypeIds);

    CARAPI GetMasterSalesOrder.ItemTypeIds(
     [out, callee] ArrayOf<CAdministration.itemType>* CFinance.masterSalesOrder.itemTypeIds);


   CARAPI SetMasterSalesOrder.ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFinance.masterSalesOrder.itemIds);

    CARAPI GetMasterSalesOrder.ItemIds(
     [out, callee] ArrayOf<CAdministration.item>* CFinance.masterSalesOrder.itemIds);


   CARAPI SetMasterSalesOrder.ServiceTypeIds(
     /* [in] */ ArrayOf<CAdministration.serviceType> CFinance.masterSalesOrder.serviceTypeIds);

    CARAPI GetMasterSalesOrder.ServiceTypeIds(
     [out, callee] ArrayOf<CAdministration.serviceType>* CFinance.masterSalesOrder.serviceTypeIds);


   CARAPI SetMasterSalesOrder.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CFinance.masterSalesOrder.serviceIds);

    CARAPI GetMasterSalesOrder.ServiceIds(
     [out, callee] ArrayOf<CAdministration.service>* CFinance.masterSalesOrder.serviceIds);


   CARAPI SetMasterSalesOrder.JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CFinance.masterSalesOrder.jobTypeIds);

    CARAPI GetMasterSalesOrder.JobTypeIds(
     [out, callee] ArrayOf<CAdministration.jobType>* CFinance.masterSalesOrder.jobTypeIds);


   CARAPI SetMasterSalesOrder.JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CFinance.masterSalesOrder.jobIds);

    CARAPI GetMasterSalesOrder.JobIds(
     [out, callee] ArrayOf<CAdministration.job>* CFinance.masterSalesOrder.jobIds);


   CARAPI SetMasterSalesOrder.MasterLedgerIncomeId(
     /* [in] */ ArrayOf<CFinance.masterLedgerIncome> CFinance.masterSalesOrder.masterLedgerIncomeId);

    CARAPI GetMasterSalesOrder.MasterLedgerIncomeId(
     [out, callee] ArrayOf<CFinance.masterLedgerIncome>* CFinance.masterSalesOrder.masterLedgerIncomeId);


   CARAPI SetMasterSalesOrder.MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterSalesOrder.masLedgeFinTxJoinId);

    CARAPI GetMasterSalesOrder.MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterSalesOrder.masLedgeFinTxJoinId);


   CARAPI SetMasterSalesOrder.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.masterSalesOrder.docRefIds);

    CARAPI GetMasterSalesOrder.DocRefIds(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.masterSalesOrder.docRefIds);


   CARAPI SetMasterSalesOrder.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.masterSalesOrder.imageRefIds);

    CARAPI GetMasterSalesOrder.ImageRefIds(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.masterSalesOrder.imageRefIds);


   CARAPI SetMasterSalesOrder.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFinance.masterSalesOrder.videoRefIds);

    CARAPI GetMasterSalesOrder.VideoRefIds(
     [out, callee] ArrayOf<CAdministration.video>* CFinance.masterSalesOrder.videoRefIds);


   CARAPI SetTaxReferenceTable.TaxReferenceId(
     /* [in] */ const String& CFinance.taxReferenceTable.taxReferenceId);

    CARAPI GetTaxReferenceTable.TaxReferenceId(
     /* [out] */ String* CFinance.taxReferenceTable.taxReferenceId);


   CARAPI SetTaxReferenceTable.AusStates(
     /* [in] */ ArrayOf<CHelper.ausState> CFinance.taxReferenceTable.ausStates);

    CARAPI GetTaxReferenceTable.AusStates(
     [out, callee] ArrayOf<CHelper.ausState>* CFinance.taxReferenceTable.ausStates);


   CARAPI SetTaxReferenceTable.Description(
     /* [in] */ const String& CFinance.taxReferenceTable.description);

    CARAPI GetTaxReferenceTable.Description(
     /* [out] */ String* CFinance.taxReferenceTable.description);


   CARAPI SetTaxReferenceTable.Notes(
     /* [in] */ ArrayOf<const String&> CFinance.taxReferenceTable.notes);

    CARAPI GetTaxReferenceTable.Notes(
     [out, callee] ArrayOf<String>* CFinance.taxReferenceTable.notes);


   CARAPI SetTaxReferenceTable.TaxRatePerCent(
     /* [in] */ Double CFinance.taxReferenceTable.taxRatePerCent);

    CARAPI GetTaxReferenceTable.TaxRatePerCent(
     /* [out] */ Double* CFinance.taxReferenceTable.taxRatePerCent);


   CARAPI SetTaxReferenceTable.TaxCode(
     /* [in] */ CHelper.taxCode CFinance.taxReferenceTable.taxCode);

    CARAPI GetTaxReferenceTable.TaxCode(
     /* [out] */ CHelper.taxCode* CFinance.taxReferenceTable.taxCode);


   CARAPI SetTaxReferenceTable.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.taxReferenceTable.docRefIds);

    CARAPI GetTaxReferenceTable.DocRefIds(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.taxReferenceTable.docRefIds);


   CARAPI SetTaxReferenceTable.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.taxReferenceTable.businessChannelOwnerId);

    CARAPI GetTaxReferenceTable.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.taxReferenceTable.businessChannelOwnerId);



protected:
    // Member variables
const String& mSetBank.BankId
String* mGetBank.BankId
const String& mSetBank.BankName
String* mGetBank.BankName
Int32 mSetBank.OurBranchBSB
Int32* mGetBank.OurBranchBSB
const String& mSetBank.OurBranchName
String* mGetBank.OurBranchName
const String& mSetBank.LinkedToThisSupplierId
String* mGetBank.LinkedToThisSupplierId
const String& mSetBank.LinkedToThisCustomerId
String* mGetBank.LinkedToThisCustomerId
ArrayOf<const String&> mSetBank.ContactFirstNameList
ArrayOf<String>* mGetBank.ContactFirstNameList
ArrayOf<const String&> mSetBank.ContactLastNameList
ArrayOf<String>* mGetBank.ContactLastNameList
ArrayOf<const String&> mSetBank.EmailAddresses
ArrayOf<String>* mGetBank.EmailAddresses
ArrayOf<Int32> mSetBank.MobilePhone
ArrayOf<Int32>* mGetBank.MobilePhone
ArrayOf<Int32> mSetBank.WorkPhone
ArrayOf<Int32>* mGetBank.WorkPhone
ArrayOf<const String&> mSetBank.ContactedWithDetails
ArrayOf<String>* mGetBank.ContactedWithDetails
ArrayOf<CAdministration.documents> mSetBank.DocRefIds
ArrayOf<CAdministration.documents>* mGetBank.DocRefIds
ArrayOf<CAdministration.images> mSetBank.ImageRefIds
ArrayOf<CAdministration.images>* mGetBank.ImageRefIds
CRegister.businessChannelOwner mSetBank.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetBank.BusinessChannelOwnerId
const String& mSetCentrelink.CentrelinkId
String* mGetCentrelink.CentrelinkId
ArrayOf<const String&> mSetCentrelink.ContactFirstNameList
ArrayOf<String>* mGetCentrelink.ContactFirstNameList
ArrayOf<const String&> mSetCentrelink.ContactLastNameList
ArrayOf<String>* mGetCentrelink.ContactLastNameList
const String& mSetCentrelink.StreetAddress
String* mGetCentrelink.StreetAddress
const String& mSetCentrelink.PostalAddress
String* mGetCentrelink.PostalAddress
ArrayOf<const String&> mSetCentrelink.EmailAddresses
ArrayOf<String>* mGetCentrelink.EmailAddresses
ArrayOf<Int32> mSetCentrelink.MobilePhone
ArrayOf<Int32>* mGetCentrelink.MobilePhone
ArrayOf<Int32> mSetCentrelink.WorkPhone
ArrayOf<Int32>* mGetCentrelink.WorkPhone
const String& mSetCentrelink.Details
String* mGetCentrelink.Details
ArrayOf<const String&> mSetCentrelink.ContactedWithDetails
ArrayOf<String>* mGetCentrelink.ContactedWithDetails
CRegister.businessChannelOwner mSetCentrelink.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCentrelink.BusinessChannelOwnerId
CAdministration.branch mSetCentrelink.BranchId
CAdministration.branch* mGetCentrelink.BranchId
ArrayOf<CAdministration.documents> mSetCentrelink.DocRefIds
ArrayOf<CAdministration.documents>* mGetCentrelink.DocRefIds
ArrayOf<CAdministration.images> mSetCentrelink.ImageRefIds
ArrayOf<CAdministration.images>* mGetCentrelink.ImageRefIds
const String& mSetMasterSetRegister.MasterSetId
String* mGetMasterSetRegister.MasterSetId
const String& mSetMasterSetRegister.SetTypeId
String* mGetMasterSetRegister.SetTypeId
const String& mSetMasterSetRegister.SetName
String* mGetMasterSetRegister.SetName
const String& mSetMasterSetRegister.SetDescription
String* mGetMasterSetRegister.SetDescription
Double mSetMasterSetRegister.OWDV
Double* mGetMasterSetRegister.OWDV
Double mSetMasterSetRegister.CapitalImprovements
Double* mGetMasterSetRegister.CapitalImprovements
Double mSetMasterSetRegister.Depreciation
Double* mGetMasterSetRegister.Depreciation
Double mSetMasterSetRegister.CWDV
Double* mGetMasterSetRegister.CWDV
const String& mSetMasterSetRegister.LastInspectionService
String* mGetMasterSetRegister.LastInspectionService
const String& mSetMasterSetRegister.ThisInspectionService
String* mGetMasterSetRegister.ThisInspectionService
const String& mSetMasterSetRegister.Sequ
String* mGetMasterSetRegister.Sequ
const String& mSetMasterSetRegister.NextInspectionService
String* mGetMasterSetRegister.NextInspectionService
Int32 mSetMasterSetRegister.ValueOfN
Int32* mGetMasterSetRegister.ValueOfN
CRegister.businessChannelOwner mSetMasterSetRegister.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterSetRegister.BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetMasterSetRegister.DocRefs
ArrayOf<CAdministration.documents>* mGetMasterSetRegister.DocRefs
ArrayOf<CAdministration.images> mSetMasterSetRegister.ImageRefs
ArrayOf<CAdministration.images>* mGetMasterSetRegister.ImageRefs
ArrayOf<CAdministration.audio> mSetMasterSetRegister.AudioRefIds
ArrayOf<CAdministration.audio>* mGetMasterSetRegister.AudioRefIds
ArrayOf<CAdministration.video> mSetMasterSetRegister.VideoRefs
ArrayOf<CAdministration.video>* mGetMasterSetRegister.VideoRefs
CFinance.chartOfAccounts mSetMasterSetRegister.ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterSetRegister.ChartOfAccountsId
CFinance.chartOfClasses mSetMasterSetRegister.ChartOfClassesId
CFinance.chartOfClasses* mGetMasterSetRegister.ChartOfClassesId
CAdministration.branch mSetMasterSetRegister.BranchId
CAdministration.branch* mGetMasterSetRegister.BranchId
CAdministration.department mSetMasterSetRegister.DeptId
CAdministration.department* mGetMasterSetRegister.DeptId
CFinance.masterSetType mSetMasterSetRegister.MasterSetTypeId
CFinance.masterSetType* mGetMasterSetRegister.MasterSetTypeId
const String& mSetMasterSetType.MasterSetTypeId
String* mGetMasterSetType.MasterSetTypeId
const String& mSetMasterSetType.SetName
String* mGetMasterSetType.SetName
const String& mSetMasterSetType.SetDescription
String* mGetMasterSetType.SetDescription
CHelper.inspectionTerm mSetMasterSetType.InspectionTerm
CHelper.inspectionTerm* mGetMasterSetType.InspectionTerm
Int32 mSetMasterSetType.ValueOfN
Int32* mGetMasterSetType.ValueOfN
ArrayOf<CAdministration.documents> mSetMasterSetType.DocRefs
ArrayOf<CAdministration.documents>* mGetMasterSetType.DocRefs
ArrayOf<CAdministration.images> mSetMasterSetType.ImageRefs
ArrayOf<CAdministration.images>* mGetMasterSetType.ImageRefs
ArrayOf<CAdministration.audio> mSetMasterSetType.AudioRefIds
ArrayOf<CAdministration.audio>* mGetMasterSetType.AudioRefIds
ArrayOf<CAdministration.video> mSetMasterSetType.VideoRefs
ArrayOf<CAdministration.video>* mGetMasterSetType.VideoRefs
CRegister.businessChannelOwner mSetMasterSetType.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterSetType.BusinessChannelOwnerId
CAdministration.branch mSetMasterSetType.BranchId
CAdministration.branch* mGetMasterSetType.BranchId
CAdministration.department mSetMasterSetType.DeptId
CAdministration.department* mGetMasterSetType.DeptId
const String& mSetChartOfAccounts.ChartOfAccountsId
String* mGetChartOfAccounts.ChartOfAccountsId
CHelper.ledgerTitle mSetChartOfAccounts.LedgerTitle
CHelper.ledgerTitle* mGetChartOfAccounts.LedgerTitle
const String& mSetChartOfAccounts.Description
String* mGetChartOfAccounts.Description
CRegister.businessChannelOwner mSetChartOfAccounts.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetChartOfAccounts.BusinessChannelOwnerId
CFinance.level1Accounts mSetChartOfAccounts.Level1AccountsId
CFinance.level1Accounts* mGetChartOfAccounts.Level1AccountsId
CFinance.level2Accounts mSetChartOfAccounts.Level2AccountsId
CFinance.level2Accounts* mGetChartOfAccounts.Level2AccountsId
CFinance.level3Accounts mSetChartOfAccounts.Level3AccountsId
CFinance.level3Accounts* mGetChartOfAccounts.Level3AccountsId
CFinance.level4Accounts mSetChartOfAccounts.Level4AccountsId
CFinance.level4Accounts* mGetChartOfAccounts.Level4AccountsId
CFinance.level5Accounts mSetChartOfAccounts.Level5AccountsId
CFinance.level5Accounts* mGetChartOfAccounts.Level5AccountsId
CFinance.level6Accounts mSetChartOfAccounts.Level6AccountsId
CFinance.level6Accounts* mGetChartOfAccounts.Level6AccountsId
const String& mSetLevel1Accounts.Level1AccountsId
String* mGetLevel1Accounts.Level1AccountsId
const String& mSetLevel1Accounts.Description
String* mGetLevel1Accounts.Description
const String& mSetLevel1Accounts.Level1AccountsName
String* mGetLevel1Accounts.Level1AccountsName
const String& mSetLevel1Accounts.Level1AccountsNum
String* mGetLevel1Accounts.Level1AccountsNum
CHelper.ledgerTitle mSetLevel1Accounts.AssocLedger
CHelper.ledgerTitle* mGetLevel1Accounts.AssocLedger
CRegister.businessChannelOwner mSetLevel1Accounts.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel1Accounts.BusinessChannelOwnerId
const String& mSetLevel2Accounts.Level2AccountsId
String* mGetLevel2Accounts.Level2AccountsId
const String& mSetLevel2Accounts.Description
String* mGetLevel2Accounts.Description
const String& mSetLevel2Accounts.Level2AccountsName
String* mGetLevel2Accounts.Level2AccountsName
const String& mSetLevel2Accounts.Level2AccountsNum
String* mGetLevel2Accounts.Level2AccountsNum
CHelper.ledgerTitle mSetLevel2Accounts.AssocLedger
CHelper.ledgerTitle* mGetLevel2Accounts.AssocLedger
CRegister.businessChannelOwner mSetLevel2Accounts.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel2Accounts.BusinessChannelOwnerId
CFinance.level1Accounts mSetLevel2Accounts.Level1AccountsId
CFinance.level1Accounts* mGetLevel2Accounts.Level1AccountsId
const String& mSetLevel3Accounts.Level3AccountsId
String* mGetLevel3Accounts.Level3AccountsId
const String& mSetLevel3Accounts.Description
String* mGetLevel3Accounts.Description
const String& mSetLevel3Accounts.Level3AccountsName
String* mGetLevel3Accounts.Level3AccountsName
const String& mSetLevel3Accounts.Level3AccountsNum
String* mGetLevel3Accounts.Level3AccountsNum
CHelper.ledgerTitle mSetLevel3Accounts.AssocLedger
CHelper.ledgerTitle* mGetLevel3Accounts.AssocLedger
CRegister.businessChannelOwner mSetLevel3Accounts.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel3Accounts.BusinessChannelOwnerId
CFinance.level2Accounts mSetLevel3Accounts.Level2AccountsId
CFinance.level2Accounts* mGetLevel3Accounts.Level2AccountsId
const String& mSetLevel4Accounts.Level4AccountsId
String* mGetLevel4Accounts.Level4AccountsId
const String& mSetLevel4Accounts.Description
String* mGetLevel4Accounts.Description
const String& mSetLevel4Accounts.Level4AccountsName
String* mGetLevel4Accounts.Level4AccountsName
const String& mSetLevel4Accounts.Level4AccountsNum
String* mGetLevel4Accounts.Level4AccountsNum
CHelper.ledgerTitle mSetLevel4Accounts.AssocLedger
CHelper.ledgerTitle* mGetLevel4Accounts.AssocLedger
CRegister.businessChannelOwner mSetLevel4Accounts.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel4Accounts.BusinessChannelOwnerId
CFinance.level3Accounts mSetLevel4Accounts.Level3AccountsId
CFinance.level3Accounts* mGetLevel4Accounts.Level3AccountsId
const String& mSetLevel5Accounts.Level5AccountsId
String* mGetLevel5Accounts.Level5AccountsId
const String& mSetLevel5Accounts.Description
String* mGetLevel5Accounts.Description
const String& mSetLevel5Accounts.Level5AccountsName
String* mGetLevel5Accounts.Level5AccountsName
const String& mSetLevel5Accounts.Level5AccountsNum
String* mGetLevel5Accounts.Level5AccountsNum
CHelper.ledgerTitle mSetLevel5Accounts.AssocLedger
CHelper.ledgerTitle* mGetLevel5Accounts.AssocLedger
CRegister.businessChannelOwner mSetLevel5Accounts.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel5Accounts.BusinessChannelOwnerId
CFinance.level4Accounts mSetLevel5Accounts.Level4AccountsId
CFinance.level4Accounts* mGetLevel5Accounts.Level4AccountsId
const String& mSetLevel6Accounts.Level6AccountsId
String* mGetLevel6Accounts.Level6AccountsId
const String& mSetLevel6Accounts.Description
String* mGetLevel6Accounts.Description
const String& mSetLevel6Accounts.Level6AccountsName
String* mGetLevel6Accounts.Level6AccountsName
const String& mSetLevel6Accounts.Level6AccountsNum
String* mGetLevel6Accounts.Level6AccountsNum
CHelper.ledgerTitle mSetLevel6Accounts.AssocLedger
CHelper.ledgerTitle* mGetLevel6Accounts.AssocLedger
CRegister.businessChannelOwner mSetLevel6Accounts.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel6Accounts.BusinessChannelOwnerId
CFinance.level5Accounts mSetLevel6Accounts.Level5AccountsId
CFinance.level5Accounts* mGetLevel6Accounts.Level5AccountsId
const String& mSetChartOfClasses.ChartOfClassesId
String* mGetChartOfClasses.ChartOfClassesId
CRegister.businessChannelOwner mSetChartOfClasses.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetChartOfClasses.BusinessChannelOwnerId
CFinance.level1Class mSetChartOfClasses.Level1ClassId
CFinance.level1Class* mGetChartOfClasses.Level1ClassId
CFinance.level2Class mSetChartOfClasses.Level2ClassId
CFinance.level2Class* mGetChartOfClasses.Level2ClassId
CFinance.level3Class mSetChartOfClasses.Level3ClassId
CFinance.level3Class* mGetChartOfClasses.Level3ClassId
const String& mSetLevel1Class.Level1ClassId
String* mGetLevel1Class.Level1ClassId
const String& mSetLevel1Class.Description
String* mGetLevel1Class.Description
const String& mSetLevel1Class.ClassName
String* mGetLevel1Class.ClassName
CRegister.businessChannelOwner mSetLevel1Class.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel1Class.BusinessChannelOwnerId
const String& mSetLevel2Class.Level2ClassId
String* mGetLevel2Class.Level2ClassId
const String& mSetLevel2Class.Description
String* mGetLevel2Class.Description
const String& mSetLevel2Class.ClassName
String* mGetLevel2Class.ClassName
CRegister.businessChannelOwner mSetLevel2Class.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel2Class.BusinessChannelOwnerId
CFinance.level1Class mSetLevel2Class.Level1ClassId
CFinance.level1Class* mGetLevel2Class.Level1ClassId
const String& mSetLevel3Class.Level3ClassId
String* mGetLevel3Class.Level3ClassId
const String& mSetLevel3Class.Description
String* mGetLevel3Class.Description
const String& mSetLevel3Class.ClassName
String* mGetLevel3Class.ClassName
CRegister.businessChannelOwner mSetLevel3Class.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel3Class.BusinessChannelOwnerId
CFinance.level2Class mSetLevel3Class.Level2ClassId
CFinance.level2Class* mGetLevel3Class.Level2ClassId
const String& mSetMasterLedgerFinTxJoin.MasLedgeFinTxJoinId
String* mGetMasterLedgerFinTxJoin.MasLedgeFinTxJoinId
ArrayOf<const String&> mSetMasterLedgerFinTxJoin.MasLedgeFinTxIds
ArrayOf<String>* mGetMasterLedgerFinTxJoin.MasLedgeFinTxIds
Int32 mSetMasterLedgerFinTxJoin.MasLedgeFinTxNum
Int32* mGetMasterLedgerFinTxJoin.MasLedgeFinTxNum
ArrayOf<const String&> mSetMasterLedgerFinTxJoin.CreditedAccountIds
ArrayOf<String>* mGetMasterLedgerFinTxJoin.CreditedAccountIds
ArrayOf<const String&> mSetMasterLedgerFinTxJoin.DebitedAccountIds
ArrayOf<String>* mGetMasterLedgerFinTxJoin.DebitedAccountIds
ArrayOf<const String&> mSetMasterLedgerFinTxJoin.CreditedClassIds
ArrayOf<String>* mGetMasterLedgerFinTxJoin.CreditedClassIds
ArrayOf<const String&> mSetMasterLedgerFinTxJoin.DebitedClassIds
ArrayOf<String>* mGetMasterLedgerFinTxJoin.DebitedClassIds
ArrayOf<Double> mSetMasterLedgerFinTxJoin.CreditedAmounts
ArrayOf<Double>* mGetMasterLedgerFinTxJoin.CreditedAmounts
ArrayOf<Double> mSetMasterLedgerFinTxJoin.DebitedAmounts
ArrayOf<Double>* mGetMasterLedgerFinTxJoin.DebitedAmounts
CRegister.businessChannelOwner mSetMasterLedgerFinTxJoin.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerFinTxJoin.BusinessChannelOwnerId
const String& mSetMasterLedgerSet.MasterLedgerSetId
String* mGetMasterLedgerSet.MasterLedgerSetId
const String& mSetMasterLedgerSet.BankBSB
String* mGetMasterLedgerSet.BankBSB
const String& mSetMasterLedgerSet.BankAccountNumber
String* mGetMasterLedgerSet.BankAccountNumber
const String& mSetMasterLedgerSet.NameOnBankAccount
String* mGetMasterLedgerSet.NameOnBankAccount
const String& mSetMasterLedgerSet.Description
String* mGetMasterLedgerSet.Description
ArrayOf<const String&> mSetMasterLedgerSet.DocRefs
ArrayOf<String>* mGetMasterLedgerSet.DocRefs
const String& mSetMasterLedgerSet.FeeId
String* mGetMasterLedgerSet.FeeId
Int32 mSetMasterLedgerSet.MasLedgeFinTxNum
Int32* mGetMasterLedgerSet.MasLedgeFinTxNum
const String& mSetMasterLedgerSet.Level1AccountName
String* mGetMasterLedgerSet.Level1AccountName
const String& mSetMasterLedgerSet.Level1AccountNum
String* mGetMasterLedgerSet.Level1AccountNum
const String& mSetMasterLedgerSet.Level2AccountName
String* mGetMasterLedgerSet.Level2AccountName
const String& mSetMasterLedgerSet.Level2AccountNum
String* mGetMasterLedgerSet.Level2AccountNum
const String& mSetMasterLedgerSet.Level3AccountName
String* mGetMasterLedgerSet.Level3AccountName
const String& mSetMasterLedgerSet.Level3AccountNum
String* mGetMasterLedgerSet.Level3AccountNum
const String& mSetMasterLedgerSet.Level4AccountName
String* mGetMasterLedgerSet.Level4AccountName
const String& mSetMasterLedgerSet.Level4AccountNum
String* mGetMasterLedgerSet.Level4AccountNum
const String& mSetMasterLedgerSet.Level5AccountName
String* mGetMasterLedgerSet.Level5AccountName
const String& mSetMasterLedgerSet.Level5AccountNum
String* mGetMasterLedgerSet.Level5AccountNum
const String& mSetMasterLedgerSet.Level6AccountName
String* mGetMasterLedgerSet.Level6AccountName
const String& mSetMasterLedgerSet.Level6AccountNum
String* mGetMasterLedgerSet.Level6AccountNum
const String& mSetMasterLedgerSet.Level1ClassName
String* mGetMasterLedgerSet.Level1ClassName
const String& mSetMasterLedgerSet.Level2ClassName
String* mGetMasterLedgerSet.Level2ClassName
const String& mSetMasterLedgerSet.Level3ClassName
String* mGetMasterLedgerSet.Level3ClassName
const String& mSetMasterLedgerSet.TransactionEffective
String* mGetMasterLedgerSet.TransactionEffective
const String& mSetMasterLedgerSet.MasLedgeFinTxId
String* mGetMasterLedgerSet.MasLedgeFinTxId
Double mSetMasterLedgerSet.Cr
Double* mGetMasterLedgerSet.Cr
Double mSetMasterLedgerSet.Dr
Double* mGetMasterLedgerSet.Dr
Double mSetMasterLedgerSet.Bal
Double* mGetMasterLedgerSet.Bal
CRegister.businessChannelOwner mSetMasterLedgerSet.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerSet.BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerSet.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerSet.MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerSet.ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerSet.ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerSet.ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerSet.ChartOfClassesId
CAdministration.branch mSetMasterLedgerSet.BranchId
CAdministration.branch* mGetMasterLedgerSet.BranchId
CAdministration.department mSetMasterLedgerSet.DepartmentId
CAdministration.department* mGetMasterLedgerSet.DepartmentId
CFinance.bank mSetMasterLedgerSet.BankId
CFinance.bank* mGetMasterLedgerSet.BankId
CProperty.program mSetMasterLedgerSet.ProgramId
CProperty.program* mGetMasterLedgerSet.ProgramId
CProperty.project mSetMasterLedgerSet.ProjectId
CProperty.project* mGetMasterLedgerSet.ProjectId
CAdministration.item mSetMasterLedgerSet.ItemId
CAdministration.item* mGetMasterLedgerSet.ItemId
CAdministration.job mSetMasterLedgerSet.JobId
CAdministration.job* mGetMasterLedgerSet.JobId
CAdministration.service mSetMasterLedgerSet.ServiceId
CAdministration.service* mGetMasterLedgerSet.ServiceId
CCustomer.customer mSetMasterLedgerSet.CustomerId
CCustomer.customer* mGetMasterLedgerSet.CustomerId
CSupplier.supplier mSetMasterLedgerSet.SupplierId
CSupplier.supplier* mGetMasterLedgerSet.SupplierId
realEstatePurchOrders mSetMasterLedgerSet.PurchOrderId
realEstatePurchOrders* mGetMasterLedgerSet.PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerSet.MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerSet.MasterSalesOrderId
CFinance.invoice mSetMasterLedgerSet.InvoiceId
CFinance.invoice* mGetMasterLedgerSet.InvoiceId
CFinance.bill mSetMasterLedgerSet.BillId
CFinance.bill* mGetMasterLedgerSet.BillId
const String& mSetMasterLedgerLiability.MasterLedgerLiabilityId
String* mGetMasterLedgerLiability.MasterLedgerLiabilityId
const String& mSetMasterLedgerLiability.BankBSB
String* mGetMasterLedgerLiability.BankBSB
const String& mSetMasterLedgerLiability.BankAccountNumber
String* mGetMasterLedgerLiability.BankAccountNumber
const String& mSetMasterLedgerLiability.NameOnBankAccount
String* mGetMasterLedgerLiability.NameOnBankAccount
const String& mSetMasterLedgerLiability.Description
String* mGetMasterLedgerLiability.Description
ArrayOf<const String&> mSetMasterLedgerLiability.DocRefs
ArrayOf<String>* mGetMasterLedgerLiability.DocRefs
const String& mSetMasterLedgerLiability.FeeId
String* mGetMasterLedgerLiability.FeeId
Int32 mSetMasterLedgerLiability.MasLedgeFinTxNum
Int32* mGetMasterLedgerLiability.MasLedgeFinTxNum
const String& mSetMasterLedgerLiability.Level1AccountName
String* mGetMasterLedgerLiability.Level1AccountName
const String& mSetMasterLedgerLiability.Level1AccountNum
String* mGetMasterLedgerLiability.Level1AccountNum
const String& mSetMasterLedgerLiability.Level2AccountName
String* mGetMasterLedgerLiability.Level2AccountName
const String& mSetMasterLedgerLiability.Level2AccountNum
String* mGetMasterLedgerLiability.Level2AccountNum
const String& mSetMasterLedgerLiability.Level3AccountName
String* mGetMasterLedgerLiability.Level3AccountName
const String& mSetMasterLedgerLiability.Level3AccountNum
String* mGetMasterLedgerLiability.Level3AccountNum
const String& mSetMasterLedgerLiability.Level4AccountName
String* mGetMasterLedgerLiability.Level4AccountName
const String& mSetMasterLedgerLiability.Level4AccountNum
String* mGetMasterLedgerLiability.Level4AccountNum
const String& mSetMasterLedgerLiability.Level5AccountName
String* mGetMasterLedgerLiability.Level5AccountName
const String& mSetMasterLedgerLiability.Level5AccountNum
String* mGetMasterLedgerLiability.Level5AccountNum
const String& mSetMasterLedgerLiability.Level6AccountName
String* mGetMasterLedgerLiability.Level6AccountName
const String& mSetMasterLedgerLiability.Level6AccountNum
String* mGetMasterLedgerLiability.Level6AccountNum
const String& mSetMasterLedgerLiability.Level1ClassName
String* mGetMasterLedgerLiability.Level1ClassName
const String& mSetMasterLedgerLiability.Level2ClassName
String* mGetMasterLedgerLiability.Level2ClassName
const String& mSetMasterLedgerLiability.Level3ClassName
String* mGetMasterLedgerLiability.Level3ClassName
const String& mSetMasterLedgerLiability.TransactionEffective
String* mGetMasterLedgerLiability.TransactionEffective
const String& mSetMasterLedgerLiability.MasLedgeFinTxId
String* mGetMasterLedgerLiability.MasLedgeFinTxId
Double mSetMasterLedgerLiability.Cr
Double* mGetMasterLedgerLiability.Cr
Double mSetMasterLedgerLiability.Dr
Double* mGetMasterLedgerLiability.Dr
Double mSetMasterLedgerLiability.Bal
Double* mGetMasterLedgerLiability.Bal
CRegister.businessChannelOwner mSetMasterLedgerLiability.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerLiability.BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerLiability.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerLiability.MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerLiability.ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerLiability.ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerLiability.ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerLiability.ChartOfClassesId
CAdministration.branch mSetMasterLedgerLiability.BranchId
CAdministration.branch* mGetMasterLedgerLiability.BranchId
CAdministration.department mSetMasterLedgerLiability.DepartmentId
CAdministration.department* mGetMasterLedgerLiability.DepartmentId
CFinance.bank mSetMasterLedgerLiability.BankId
CFinance.bank* mGetMasterLedgerLiability.BankId
CProperty.program mSetMasterLedgerLiability.ProgramId
CProperty.program* mGetMasterLedgerLiability.ProgramId
CProperty.project mSetMasterLedgerLiability.ProjectId
CProperty.project* mGetMasterLedgerLiability.ProjectId
CAdministration.item mSetMasterLedgerLiability.ItemId
CAdministration.item* mGetMasterLedgerLiability.ItemId
CAdministration.job mSetMasterLedgerLiability.JobId
CAdministration.job* mGetMasterLedgerLiability.JobId
CAdministration.service mSetMasterLedgerLiability.ServiceId
CAdministration.service* mGetMasterLedgerLiability.ServiceId
CCustomer.customer mSetMasterLedgerLiability.CustomerId
CCustomer.customer* mGetMasterLedgerLiability.CustomerId
CSupplier.supplier mSetMasterLedgerLiability.SupplierId
CSupplier.supplier* mGetMasterLedgerLiability.SupplierId
realEstatePurchOrders mSetMasterLedgerLiability.PurchOrderId
realEstatePurchOrders* mGetMasterLedgerLiability.PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerLiability.MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerLiability.MasterSalesOrderId
CFinance.invoice mSetMasterLedgerLiability.InvoiceId
CFinance.invoice* mGetMasterLedgerLiability.InvoiceId
CFinance.bill mSetMasterLedgerLiability.BillId
CFinance.bill* mGetMasterLedgerLiability.BillId
const String& mSetMasterLedgerEquity.MasterLedgerEquityId
String* mGetMasterLedgerEquity.MasterLedgerEquityId
const String& mSetMasterLedgerEquity.BankBSB
String* mGetMasterLedgerEquity.BankBSB
const String& mSetMasterLedgerEquity.BankAccountNumber
String* mGetMasterLedgerEquity.BankAccountNumber
const String& mSetMasterLedgerEquity.NameOnBankAccount
String* mGetMasterLedgerEquity.NameOnBankAccount
const String& mSetMasterLedgerEquity.Description
String* mGetMasterLedgerEquity.Description
ArrayOf<const String&> mSetMasterLedgerEquity.DocRefs
ArrayOf<String>* mGetMasterLedgerEquity.DocRefs
const String& mSetMasterLedgerEquity.FeeId
String* mGetMasterLedgerEquity.FeeId
Int32 mSetMasterLedgerEquity.MasLedgeFinTxNum
Int32* mGetMasterLedgerEquity.MasLedgeFinTxNum
const String& mSetMasterLedgerEquity.Level1AccountName
String* mGetMasterLedgerEquity.Level1AccountName
const String& mSetMasterLedgerEquity.Level1AccountNum
String* mGetMasterLedgerEquity.Level1AccountNum
const String& mSetMasterLedgerEquity.Level2AccountName
String* mGetMasterLedgerEquity.Level2AccountName
const String& mSetMasterLedgerEquity.Level2AccountNum
String* mGetMasterLedgerEquity.Level2AccountNum
const String& mSetMasterLedgerEquity.Level3AccountName
String* mGetMasterLedgerEquity.Level3AccountName
const String& mSetMasterLedgerEquity.Level3AccountNum
String* mGetMasterLedgerEquity.Level3AccountNum
const String& mSetMasterLedgerEquity.Level4AccountName
String* mGetMasterLedgerEquity.Level4AccountName
const String& mSetMasterLedgerEquity.Level4AccountNum
String* mGetMasterLedgerEquity.Level4AccountNum
const String& mSetMasterLedgerEquity.Level5AccountName
String* mGetMasterLedgerEquity.Level5AccountName
const String& mSetMasterLedgerEquity.Level5AccountNum
String* mGetMasterLedgerEquity.Level5AccountNum
const String& mSetMasterLedgerEquity.Level6AccountName
String* mGetMasterLedgerEquity.Level6AccountName
const String& mSetMasterLedgerEquity.Level6AccountNum
String* mGetMasterLedgerEquity.Level6AccountNum
const String& mSetMasterLedgerEquity.Level1ClassName
String* mGetMasterLedgerEquity.Level1ClassName
const String& mSetMasterLedgerEquity.Level2ClassName
String* mGetMasterLedgerEquity.Level2ClassName
const String& mSetMasterLedgerEquity.Level3ClassName
String* mGetMasterLedgerEquity.Level3ClassName
const String& mSetMasterLedgerEquity.TransactionEffective
String* mGetMasterLedgerEquity.TransactionEffective
const String& mSetMasterLedgerEquity.MasLedgeFinTxId
String* mGetMasterLedgerEquity.MasLedgeFinTxId
Double mSetMasterLedgerEquity.Cr
Double* mGetMasterLedgerEquity.Cr
Double mSetMasterLedgerEquity.Dr
Double* mGetMasterLedgerEquity.Dr
Double mSetMasterLedgerEquity.Bal
Double* mGetMasterLedgerEquity.Bal
CRegister.businessChannelOwner mSetMasterLedgerEquity.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerEquity.BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerEquity.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerEquity.MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerEquity.ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerEquity.ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerEquity.ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerEquity.ChartOfClassesId
CAdministration.branch mSetMasterLedgerEquity.BranchId
CAdministration.branch* mGetMasterLedgerEquity.BranchId
CAdministration.department mSetMasterLedgerEquity.DepartmentId
CAdministration.department* mGetMasterLedgerEquity.DepartmentId
CFinance.bank mSetMasterLedgerEquity.BankId
CFinance.bank* mGetMasterLedgerEquity.BankId
CProperty.program mSetMasterLedgerEquity.ProgramId
CProperty.program* mGetMasterLedgerEquity.ProgramId
CProperty.project mSetMasterLedgerEquity.ProjectId
CProperty.project* mGetMasterLedgerEquity.ProjectId
CAdministration.item mSetMasterLedgerEquity.ItemId
CAdministration.item* mGetMasterLedgerEquity.ItemId
CAdministration.job mSetMasterLedgerEquity.JobId
CAdministration.job* mGetMasterLedgerEquity.JobId
CAdministration.service mSetMasterLedgerEquity.ServiceId
CAdministration.service* mGetMasterLedgerEquity.ServiceId
CCustomer.customer mSetMasterLedgerEquity.CustomerId
CCustomer.customer* mGetMasterLedgerEquity.CustomerId
CSupplier.supplier mSetMasterLedgerEquity.SupplierId
CSupplier.supplier* mGetMasterLedgerEquity.SupplierId
realEstatePurchOrders mSetMasterLedgerEquity.PurchOrderId
realEstatePurchOrders* mGetMasterLedgerEquity.PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerEquity.MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerEquity.MasterSalesOrderId
CFinance.invoice mSetMasterLedgerEquity.InvoiceId
CFinance.invoice* mGetMasterLedgerEquity.InvoiceId
CFinance.bill mSetMasterLedgerEquity.BillId
CFinance.bill* mGetMasterLedgerEquity.BillId
const String& mSetMasterLedgerSuspense.MasterLedgerSuspenseId
String* mGetMasterLedgerSuspense.MasterLedgerSuspenseId
const String& mSetMasterLedgerSuspense.BankBSB
String* mGetMasterLedgerSuspense.BankBSB
const String& mSetMasterLedgerSuspense.BankAccountNumber
String* mGetMasterLedgerSuspense.BankAccountNumber
const String& mSetMasterLedgerSuspense.NameOnBankAccount
String* mGetMasterLedgerSuspense.NameOnBankAccount
const String& mSetMasterLedgerSuspense.Description
String* mGetMasterLedgerSuspense.Description
ArrayOf<const String&> mSetMasterLedgerSuspense.DocRefs
ArrayOf<String>* mGetMasterLedgerSuspense.DocRefs
const String& mSetMasterLedgerSuspense.FeeId
String* mGetMasterLedgerSuspense.FeeId
Int32 mSetMasterLedgerSuspense.MasLedgeFinTxNum
Int32* mGetMasterLedgerSuspense.MasLedgeFinTxNum
const String& mSetMasterLedgerSuspense.Level1AccountName
String* mGetMasterLedgerSuspense.Level1AccountName
const String& mSetMasterLedgerSuspense.Level1AccountNum
String* mGetMasterLedgerSuspense.Level1AccountNum
const String& mSetMasterLedgerSuspense.Level2AccountName
String* mGetMasterLedgerSuspense.Level2AccountName
const String& mSetMasterLedgerSuspense.Level2AccountNum
String* mGetMasterLedgerSuspense.Level2AccountNum
const String& mSetMasterLedgerSuspense.Level3AccountName
String* mGetMasterLedgerSuspense.Level3AccountName
const String& mSetMasterLedgerSuspense.Level3AccountNum
String* mGetMasterLedgerSuspense.Level3AccountNum
const String& mSetMasterLedgerSuspense.Level4AccountName
String* mGetMasterLedgerSuspense.Level4AccountName
const String& mSetMasterLedgerSuspense.Level4AccountNum
String* mGetMasterLedgerSuspense.Level4AccountNum
const String& mSetMasterLedgerSuspense.Level5AccountName
String* mGetMasterLedgerSuspense.Level5AccountName
const String& mSetMasterLedgerSuspense.Level5AccountNum
String* mGetMasterLedgerSuspense.Level5AccountNum
const String& mSetMasterLedgerSuspense.Level6AccountName
String* mGetMasterLedgerSuspense.Level6AccountName
const String& mSetMasterLedgerSuspense.Level6AccountNum
String* mGetMasterLedgerSuspense.Level6AccountNum
const String& mSetMasterLedgerSuspense.Level1ClassName
String* mGetMasterLedgerSuspense.Level1ClassName
const String& mSetMasterLedgerSuspense.Level2ClassName
String* mGetMasterLedgerSuspense.Level2ClassName
const String& mSetMasterLedgerSuspense.Level3ClassName
String* mGetMasterLedgerSuspense.Level3ClassName
const String& mSetMasterLedgerSuspense.TransactionEffective
String* mGetMasterLedgerSuspense.TransactionEffective
const String& mSetMasterLedgerSuspense.MasLedgeFinTxId
String* mGetMasterLedgerSuspense.MasLedgeFinTxId
Double mSetMasterLedgerSuspense.Cr
Double* mGetMasterLedgerSuspense.Cr
Double mSetMasterLedgerSuspense.Dr
Double* mGetMasterLedgerSuspense.Dr
Double mSetMasterLedgerSuspense.Bal
Double* mGetMasterLedgerSuspense.Bal
CRegister.businessChannelOwner mSetMasterLedgerSuspense.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerSuspense.BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerSuspense.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerSuspense.MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerSuspense.ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerSuspense.ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerSuspense.ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerSuspense.ChartOfClassesId
CAdministration.branch mSetMasterLedgerSuspense.BranchId
CAdministration.branch* mGetMasterLedgerSuspense.BranchId
CAdministration.department mSetMasterLedgerSuspense.DepartmentId
CAdministration.department* mGetMasterLedgerSuspense.DepartmentId
CFinance.bank mSetMasterLedgerSuspense.BankId
CFinance.bank* mGetMasterLedgerSuspense.BankId
CProperty.program mSetMasterLedgerSuspense.ProgramId
CProperty.program* mGetMasterLedgerSuspense.ProgramId
CProperty.project mSetMasterLedgerSuspense.ProjectId
CProperty.project* mGetMasterLedgerSuspense.ProjectId
CAdministration.item mSetMasterLedgerSuspense.ItemId
CAdministration.item* mGetMasterLedgerSuspense.ItemId
CAdministration.job mSetMasterLedgerSuspense.JobId
CAdministration.job* mGetMasterLedgerSuspense.JobId
CAdministration.service mSetMasterLedgerSuspense.ServiceId
CAdministration.service* mGetMasterLedgerSuspense.ServiceId
CCustomer.customer mSetMasterLedgerSuspense.CustomerId
CCustomer.customer* mGetMasterLedgerSuspense.CustomerId
CSupplier.supplier mSetMasterLedgerSuspense.SupplierId
CSupplier.supplier* mGetMasterLedgerSuspense.SupplierId
realEstatePurchOrders mSetMasterLedgerSuspense.PurchOrderId
realEstatePurchOrders* mGetMasterLedgerSuspense.PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerSuspense.MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerSuspense.MasterSalesOrderId
CFinance.invoice mSetMasterLedgerSuspense.InvoiceId
CFinance.invoice* mGetMasterLedgerSuspense.InvoiceId
CFinance.bill mSetMasterLedgerSuspense.BillId
CFinance.bill* mGetMasterLedgerSuspense.BillId
const String& mSetMasterLedgerIncome.MasterLedgerIncomeId
String* mGetMasterLedgerIncome.MasterLedgerIncomeId
const String& mSetMasterLedgerIncome.BankBSB
String* mGetMasterLedgerIncome.BankBSB
const String& mSetMasterLedgerIncome.BankAccountNumber
String* mGetMasterLedgerIncome.BankAccountNumber
const String& mSetMasterLedgerIncome.NameOnBankAccount
String* mGetMasterLedgerIncome.NameOnBankAccount
const String& mSetMasterLedgerIncome.Description
String* mGetMasterLedgerIncome.Description
ArrayOf<const String&> mSetMasterLedgerIncome.DocRefs
ArrayOf<String>* mGetMasterLedgerIncome.DocRefs
const String& mSetMasterLedgerIncome.FeeId
String* mGetMasterLedgerIncome.FeeId
Int32 mSetMasterLedgerIncome.MasLedgeFinTxNum
Int32* mGetMasterLedgerIncome.MasLedgeFinTxNum
const String& mSetMasterLedgerIncome.Level1AccountName
String* mGetMasterLedgerIncome.Level1AccountName
const String& mSetMasterLedgerIncome.Level1AccountNum
String* mGetMasterLedgerIncome.Level1AccountNum
const String& mSetMasterLedgerIncome.Level2AccountName
String* mGetMasterLedgerIncome.Level2AccountName
const String& mSetMasterLedgerIncome.Level2AccountNum
String* mGetMasterLedgerIncome.Level2AccountNum
const String& mSetMasterLedgerIncome.Level3AccountName
String* mGetMasterLedgerIncome.Level3AccountName
const String& mSetMasterLedgerIncome.Level3AccountNum
String* mGetMasterLedgerIncome.Level3AccountNum
const String& mSetMasterLedgerIncome.Level4AccountName
String* mGetMasterLedgerIncome.Level4AccountName
const String& mSetMasterLedgerIncome.Level4AccountNum
String* mGetMasterLedgerIncome.Level4AccountNum
const String& mSetMasterLedgerIncome.Level5AccountName
String* mGetMasterLedgerIncome.Level5AccountName
const String& mSetMasterLedgerIncome.Level5AccountNum
String* mGetMasterLedgerIncome.Level5AccountNum
const String& mSetMasterLedgerIncome.Level6AccountName
String* mGetMasterLedgerIncome.Level6AccountName
const String& mSetMasterLedgerIncome.Level6AccountNum
String* mGetMasterLedgerIncome.Level6AccountNum
const String& mSetMasterLedgerIncome.Level1ClassName
String* mGetMasterLedgerIncome.Level1ClassName
const String& mSetMasterLedgerIncome.Level2ClassName
String* mGetMasterLedgerIncome.Level2ClassName
const String& mSetMasterLedgerIncome.Level3ClassName
String* mGetMasterLedgerIncome.Level3ClassName
const String& mSetMasterLedgerIncome.TransactionEffective
String* mGetMasterLedgerIncome.TransactionEffective
const String& mSetMasterLedgerIncome.MasLedgeFinTxId
String* mGetMasterLedgerIncome.MasLedgeFinTxId
Double mSetMasterLedgerIncome.Cr
Double* mGetMasterLedgerIncome.Cr
Double mSetMasterLedgerIncome.Dr
Double* mGetMasterLedgerIncome.Dr
Double mSetMasterLedgerIncome.Bal
Double* mGetMasterLedgerIncome.Bal
CRegister.businessChannelOwner mSetMasterLedgerIncome.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerIncome.BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerIncome.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerIncome.MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerIncome.ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerIncome.ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerIncome.ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerIncome.ChartOfClassesId
CAdministration.branch mSetMasterLedgerIncome.BranchId
CAdministration.branch* mGetMasterLedgerIncome.BranchId
CAdministration.department mSetMasterLedgerIncome.DepartmentId
CAdministration.department* mGetMasterLedgerIncome.DepartmentId
CFinance.bank mSetMasterLedgerIncome.BankId
CFinance.bank* mGetMasterLedgerIncome.BankId
CProperty.program mSetMasterLedgerIncome.ProgramId
CProperty.program* mGetMasterLedgerIncome.ProgramId
CProperty.project mSetMasterLedgerIncome.ProjectId
CProperty.project* mGetMasterLedgerIncome.ProjectId
CAdministration.item mSetMasterLedgerIncome.ItemId
CAdministration.item* mGetMasterLedgerIncome.ItemId
CAdministration.job mSetMasterLedgerIncome.JobId
CAdministration.job* mGetMasterLedgerIncome.JobId
CAdministration.service mSetMasterLedgerIncome.ServiceId
CAdministration.service* mGetMasterLedgerIncome.ServiceId
CCustomer.customer mSetMasterLedgerIncome.CustomerId
CCustomer.customer* mGetMasterLedgerIncome.CustomerId
CSupplier.supplier mSetMasterLedgerIncome.SupplierId
CSupplier.supplier* mGetMasterLedgerIncome.SupplierId
realEstatePurchOrders mSetMasterLedgerIncome.PurchOrderId
realEstatePurchOrders* mGetMasterLedgerIncome.PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerIncome.MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerIncome.MasterSalesOrderId
CFinance.invoice mSetMasterLedgerIncome.InvoiceId
CFinance.invoice* mGetMasterLedgerIncome.InvoiceId
CFinance.bill mSetMasterLedgerIncome.BillId
CFinance.bill* mGetMasterLedgerIncome.BillId
const String& mSetMasterLedgerReturnsIn.MasterLedgerReturnsInId
String* mGetMasterLedgerReturnsIn.MasterLedgerReturnsInId
const String& mSetMasterLedgerReturnsIn.BankBSB
String* mGetMasterLedgerReturnsIn.BankBSB
const String& mSetMasterLedgerReturnsIn.BankAccountNumber
String* mGetMasterLedgerReturnsIn.BankAccountNumber
const String& mSetMasterLedgerReturnsIn.NameOnBankAccount
String* mGetMasterLedgerReturnsIn.NameOnBankAccount
const String& mSetMasterLedgerReturnsIn.Description
String* mGetMasterLedgerReturnsIn.Description
ArrayOf<const String&> mSetMasterLedgerReturnsIn.DocRefs
ArrayOf<String>* mGetMasterLedgerReturnsIn.DocRefs
const String& mSetMasterLedgerReturnsIn.FeeId
String* mGetMasterLedgerReturnsIn.FeeId
Int32 mSetMasterLedgerReturnsIn.MasLedgeFinTxNum
Int32* mGetMasterLedgerReturnsIn.MasLedgeFinTxNum
const String& mSetMasterLedgerReturnsIn.Level1AccountName
String* mGetMasterLedgerReturnsIn.Level1AccountName
const String& mSetMasterLedgerReturnsIn.Level1AccountNum
String* mGetMasterLedgerReturnsIn.Level1AccountNum
const String& mSetMasterLedgerReturnsIn.Level2AccountName
String* mGetMasterLedgerReturnsIn.Level2AccountName
const String& mSetMasterLedgerReturnsIn.Level2AccountNum
String* mGetMasterLedgerReturnsIn.Level2AccountNum
const String& mSetMasterLedgerReturnsIn.Level3AccountName
String* mGetMasterLedgerReturnsIn.Level3AccountName
const String& mSetMasterLedgerReturnsIn.Level3AccountNum
String* mGetMasterLedgerReturnsIn.Level3AccountNum
const String& mSetMasterLedgerReturnsIn.Level4AccountName
String* mGetMasterLedgerReturnsIn.Level4AccountName
const String& mSetMasterLedgerReturnsIn.Level4AccountNum
String* mGetMasterLedgerReturnsIn.Level4AccountNum
const String& mSetMasterLedgerReturnsIn.Level5AccountName
String* mGetMasterLedgerReturnsIn.Level5AccountName
const String& mSetMasterLedgerReturnsIn.Level5AccountNum
String* mGetMasterLedgerReturnsIn.Level5AccountNum
const String& mSetMasterLedgerReturnsIn.Level6AccountName
String* mGetMasterLedgerReturnsIn.Level6AccountName
const String& mSetMasterLedgerReturnsIn.Level6AccountNum
String* mGetMasterLedgerReturnsIn.Level6AccountNum
const String& mSetMasterLedgerReturnsIn.Level1ClassName
String* mGetMasterLedgerReturnsIn.Level1ClassName
const String& mSetMasterLedgerReturnsIn.Level2ClassName
String* mGetMasterLedgerReturnsIn.Level2ClassName
const String& mSetMasterLedgerReturnsIn.Level3ClassName
String* mGetMasterLedgerReturnsIn.Level3ClassName
const String& mSetMasterLedgerReturnsIn.TransactionEffective
String* mGetMasterLedgerReturnsIn.TransactionEffective
const String& mSetMasterLedgerReturnsIn.MasLedgeFinTxId
String* mGetMasterLedgerReturnsIn.MasLedgeFinTxId
Double mSetMasterLedgerReturnsIn.Cr
Double* mGetMasterLedgerReturnsIn.Cr
Double mSetMasterLedgerReturnsIn.Dr
Double* mGetMasterLedgerReturnsIn.Dr
Double mSetMasterLedgerReturnsIn.Bal
Double* mGetMasterLedgerReturnsIn.Bal
CRegister.businessChannelOwner mSetMasterLedgerReturnsIn.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerReturnsIn.BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerReturnsIn.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerReturnsIn.MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerReturnsIn.ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerReturnsIn.ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerReturnsIn.ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerReturnsIn.ChartOfClassesId
CAdministration.branch mSetMasterLedgerReturnsIn.BranchId
CAdministration.branch* mGetMasterLedgerReturnsIn.BranchId
CAdministration.department mSetMasterLedgerReturnsIn.DepartmentId
CAdministration.department* mGetMasterLedgerReturnsIn.DepartmentId
CFinance.bank mSetMasterLedgerReturnsIn.BankId
CFinance.bank* mGetMasterLedgerReturnsIn.BankId
CProperty.program mSetMasterLedgerReturnsIn.ProgramId
CProperty.program* mGetMasterLedgerReturnsIn.ProgramId
CProperty.project mSetMasterLedgerReturnsIn.ProjectId
CProperty.project* mGetMasterLedgerReturnsIn.ProjectId
CAdministration.item mSetMasterLedgerReturnsIn.ItemId
CAdministration.item* mGetMasterLedgerReturnsIn.ItemId
CAdministration.job mSetMasterLedgerReturnsIn.JobId
CAdministration.job* mGetMasterLedgerReturnsIn.JobId
CAdministration.service mSetMasterLedgerReturnsIn.ServiceId
CAdministration.service* mGetMasterLedgerReturnsIn.ServiceId
CCustomer.customer mSetMasterLedgerReturnsIn.CustomerId
CCustomer.customer* mGetMasterLedgerReturnsIn.CustomerId
CSupplier.supplier mSetMasterLedgerReturnsIn.SupplierId
CSupplier.supplier* mGetMasterLedgerReturnsIn.SupplierId
realEstatePurchOrders mSetMasterLedgerReturnsIn.PurchOrderId
realEstatePurchOrders* mGetMasterLedgerReturnsIn.PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerReturnsIn.MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerReturnsIn.MasterSalesOrderId
CFinance.invoice mSetMasterLedgerReturnsIn.InvoiceId
CFinance.invoice* mGetMasterLedgerReturnsIn.InvoiceId
CFinance.bill mSetMasterLedgerReturnsIn.BillId
CFinance.bill* mGetMasterLedgerReturnsIn.BillId
const String& mSetMasterLedgerExpense.MasterLedgerExpenseId
String* mGetMasterLedgerExpense.MasterLedgerExpenseId
const String& mSetMasterLedgerExpense.BankBSB
String* mGetMasterLedgerExpense.BankBSB
const String& mSetMasterLedgerExpense.BankAccountNumber
String* mGetMasterLedgerExpense.BankAccountNumber
const String& mSetMasterLedgerExpense.NameOnBankAccount
String* mGetMasterLedgerExpense.NameOnBankAccount
const String& mSetMasterLedgerExpense.Description
String* mGetMasterLedgerExpense.Description
ArrayOf<const String&> mSetMasterLedgerExpense.DocRefs
ArrayOf<String>* mGetMasterLedgerExpense.DocRefs
const String& mSetMasterLedgerExpense.FeeId
String* mGetMasterLedgerExpense.FeeId
Int32 mSetMasterLedgerExpense.MasLedgeFinTxNum
Int32* mGetMasterLedgerExpense.MasLedgeFinTxNum
const String& mSetMasterLedgerExpense.Level1AccountName
String* mGetMasterLedgerExpense.Level1AccountName
const String& mSetMasterLedgerExpense.Level1AccountNum
String* mGetMasterLedgerExpense.Level1AccountNum
const String& mSetMasterLedgerExpense.Level2AccountName
String* mGetMasterLedgerExpense.Level2AccountName
const String& mSetMasterLedgerExpense.Level2AccountNum
String* mGetMasterLedgerExpense.Level2AccountNum
const String& mSetMasterLedgerExpense.Level3AccountName
String* mGetMasterLedgerExpense.Level3AccountName
const String& mSetMasterLedgerExpense.Level3AccountNum
String* mGetMasterLedgerExpense.Level3AccountNum
const String& mSetMasterLedgerExpense.Level4AccountName
String* mGetMasterLedgerExpense.Level4AccountName
const String& mSetMasterLedgerExpense.Level4AccountNum
String* mGetMasterLedgerExpense.Level4AccountNum
const String& mSetMasterLedgerExpense.Level5AccountName
String* mGetMasterLedgerExpense.Level5AccountName
const String& mSetMasterLedgerExpense.Level5AccountNum
String* mGetMasterLedgerExpense.Level5AccountNum
const String& mSetMasterLedgerExpense.Level6AccountName
String* mGetMasterLedgerExpense.Level6AccountName
const String& mSetMasterLedgerExpense.Level6AccountNum
String* mGetMasterLedgerExpense.Level6AccountNum
const String& mSetMasterLedgerExpense.Level1ClassName
String* mGetMasterLedgerExpense.Level1ClassName
const String& mSetMasterLedgerExpense.Level2ClassName
String* mGetMasterLedgerExpense.Level2ClassName
const String& mSetMasterLedgerExpense.Level3ClassName
String* mGetMasterLedgerExpense.Level3ClassName
const String& mSetMasterLedgerExpense.TransactionEffective
String* mGetMasterLedgerExpense.TransactionEffective
const String& mSetMasterLedgerExpense.MasLedgeFinTxId
String* mGetMasterLedgerExpense.MasLedgeFinTxId
Double mSetMasterLedgerExpense.Cr
Double* mGetMasterLedgerExpense.Cr
Double mSetMasterLedgerExpense.Dr
Double* mGetMasterLedgerExpense.Dr
Double mSetMasterLedgerExpense.Bal
Double* mGetMasterLedgerExpense.Bal
CRegister.businessChannelOwner mSetMasterLedgerExpense.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerExpense.BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerExpense.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerExpense.MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerExpense.ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerExpense.ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerExpense.ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerExpense.ChartOfClassesId
CAdministration.branch mSetMasterLedgerExpense.BranchId
CAdministration.branch* mGetMasterLedgerExpense.BranchId
CAdministration.department mSetMasterLedgerExpense.DepartmentId
CAdministration.department* mGetMasterLedgerExpense.DepartmentId
CFinance.bank mSetMasterLedgerExpense.BankId
CFinance.bank* mGetMasterLedgerExpense.BankId
CProperty.program mSetMasterLedgerExpense.ProgramId
CProperty.program* mGetMasterLedgerExpense.ProgramId
CProperty.project mSetMasterLedgerExpense.ProjectId
CProperty.project* mGetMasterLedgerExpense.ProjectId
CAdministration.item mSetMasterLedgerExpense.ItemId
CAdministration.item* mGetMasterLedgerExpense.ItemId
CAdministration.job mSetMasterLedgerExpense.JobId
CAdministration.job* mGetMasterLedgerExpense.JobId
CAdministration.service mSetMasterLedgerExpense.ServiceId
CAdministration.service* mGetMasterLedgerExpense.ServiceId
CCustomer.customer mSetMasterLedgerExpense.CustomerId
CCustomer.customer* mGetMasterLedgerExpense.CustomerId
CSupplier.supplier mSetMasterLedgerExpense.SupplierId
CSupplier.supplier* mGetMasterLedgerExpense.SupplierId
realEstatePurchOrders mSetMasterLedgerExpense.PurchOrderId
realEstatePurchOrders* mGetMasterLedgerExpense.PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerExpense.MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerExpense.MasterSalesOrderId
CFinance.invoice mSetMasterLedgerExpense.InvoiceId
CFinance.invoice* mGetMasterLedgerExpense.InvoiceId
CFinance.bill mSetMasterLedgerExpense.BillId
CFinance.bill* mGetMasterLedgerExpense.BillId
const String& mSetMasterLedgerReturnsOut.MasterLedgerReturnsOutId
String* mGetMasterLedgerReturnsOut.MasterLedgerReturnsOutId
const String& mSetMasterLedgerReturnsOut.BankBSB
String* mGetMasterLedgerReturnsOut.BankBSB
const String& mSetMasterLedgerReturnsOut.BankAccountNumber
String* mGetMasterLedgerReturnsOut.BankAccountNumber
const String& mSetMasterLedgerReturnsOut.NameOnBankAccount
String* mGetMasterLedgerReturnsOut.NameOnBankAccount
const String& mSetMasterLedgerReturnsOut.Description
String* mGetMasterLedgerReturnsOut.Description
ArrayOf<const String&> mSetMasterLedgerReturnsOut.DocRefs
ArrayOf<String>* mGetMasterLedgerReturnsOut.DocRefs
const String& mSetMasterLedgerReturnsOut.FeeId
String* mGetMasterLedgerReturnsOut.FeeId
Int32 mSetMasterLedgerReturnsOut.MasLedgeFinTxNum
Int32* mGetMasterLedgerReturnsOut.MasLedgeFinTxNum
const String& mSetMasterLedgerReturnsOut.Level1AccountName
String* mGetMasterLedgerReturnsOut.Level1AccountName
const String& mSetMasterLedgerReturnsOut.Level1AccountNum
String* mGetMasterLedgerReturnsOut.Level1AccountNum
const String& mSetMasterLedgerReturnsOut.Level2AccountName
String* mGetMasterLedgerReturnsOut.Level2AccountName
const String& mSetMasterLedgerReturnsOut.Level2AccountNum
String* mGetMasterLedgerReturnsOut.Level2AccountNum
const String& mSetMasterLedgerReturnsOut.Level3AccountName
String* mGetMasterLedgerReturnsOut.Level3AccountName
const String& mSetMasterLedgerReturnsOut.Level3AccountNum
String* mGetMasterLedgerReturnsOut.Level3AccountNum
const String& mSetMasterLedgerReturnsOut.Level4AccountName
String* mGetMasterLedgerReturnsOut.Level4AccountName
const String& mSetMasterLedgerReturnsOut.Level4AccountNum
String* mGetMasterLedgerReturnsOut.Level4AccountNum
const String& mSetMasterLedgerReturnsOut.Level5AccountName
String* mGetMasterLedgerReturnsOut.Level5AccountName
const String& mSetMasterLedgerReturnsOut.Level5AccountNum
String* mGetMasterLedgerReturnsOut.Level5AccountNum
const String& mSetMasterLedgerReturnsOut.Level6AccountName
String* mGetMasterLedgerReturnsOut.Level6AccountName
const String& mSetMasterLedgerReturnsOut.Level6AccountNum
String* mGetMasterLedgerReturnsOut.Level6AccountNum
const String& mSetMasterLedgerReturnsOut.Level1ClassName
String* mGetMasterLedgerReturnsOut.Level1ClassName
const String& mSetMasterLedgerReturnsOut.Level2ClassName
String* mGetMasterLedgerReturnsOut.Level2ClassName
const String& mSetMasterLedgerReturnsOut.Level3ClassName
String* mGetMasterLedgerReturnsOut.Level3ClassName
const String& mSetMasterLedgerReturnsOut.TransactionEffective
String* mGetMasterLedgerReturnsOut.TransactionEffective
const String& mSetMasterLedgerReturnsOut.MasLedgeFinTxId
String* mGetMasterLedgerReturnsOut.MasLedgeFinTxId
Double mSetMasterLedgerReturnsOut.Cr
Double* mGetMasterLedgerReturnsOut.Cr
Double mSetMasterLedgerReturnsOut.Dr
Double* mGetMasterLedgerReturnsOut.Dr
Double mSetMasterLedgerReturnsOut.Bal
Double* mGetMasterLedgerReturnsOut.Bal
CRegister.businessChannelOwner mSetMasterLedgerReturnsOut.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerReturnsOut.BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerReturnsOut.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerReturnsOut.MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerReturnsOut.ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerReturnsOut.ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerReturnsOut.ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerReturnsOut.ChartOfClassesId
CAdministration.branch mSetMasterLedgerReturnsOut.BranchId
CAdministration.branch* mGetMasterLedgerReturnsOut.BranchId
CAdministration.department mSetMasterLedgerReturnsOut.DepartmentId
CAdministration.department* mGetMasterLedgerReturnsOut.DepartmentId
CFinance.bank mSetMasterLedgerReturnsOut.BankId
CFinance.bank* mGetMasterLedgerReturnsOut.BankId
CProperty.program mSetMasterLedgerReturnsOut.ProgramId
CProperty.program* mGetMasterLedgerReturnsOut.ProgramId
CProperty.project mSetMasterLedgerReturnsOut.ProjectId
CProperty.project* mGetMasterLedgerReturnsOut.ProjectId
CAdministration.item mSetMasterLedgerReturnsOut.ItemId
CAdministration.item* mGetMasterLedgerReturnsOut.ItemId
CAdministration.job mSetMasterLedgerReturnsOut.JobId
CAdministration.job* mGetMasterLedgerReturnsOut.JobId
CAdministration.service mSetMasterLedgerReturnsOut.ServiceId
CAdministration.service* mGetMasterLedgerReturnsOut.ServiceId
CCustomer.customer mSetMasterLedgerReturnsOut.CustomerId
CCustomer.customer* mGetMasterLedgerReturnsOut.CustomerId
CSupplier.supplier mSetMasterLedgerReturnsOut.SupplierId
CSupplier.supplier* mGetMasterLedgerReturnsOut.SupplierId
realEstatePurchOrders mSetMasterLedgerReturnsOut.PurchOrderId
realEstatePurchOrders* mGetMasterLedgerReturnsOut.PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerReturnsOut.MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerReturnsOut.MasterSalesOrderId
CFinance.invoice mSetMasterLedgerReturnsOut.InvoiceId
CFinance.invoice* mGetMasterLedgerReturnsOut.InvoiceId
CFinance.bill mSetMasterLedgerReturnsOut.BillId
CFinance.bill* mGetMasterLedgerReturnsOut.BillId
const String& mSetMasterLedgerOtherIncome.MasterLedgerOtherIncomeId
String* mGetMasterLedgerOtherIncome.MasterLedgerOtherIncomeId
const String& mSetMasterLedgerOtherIncome.BankBSB
String* mGetMasterLedgerOtherIncome.BankBSB
const String& mSetMasterLedgerOtherIncome.BankAccountNumber
String* mGetMasterLedgerOtherIncome.BankAccountNumber
const String& mSetMasterLedgerOtherIncome.NameOnBankAccount
String* mGetMasterLedgerOtherIncome.NameOnBankAccount
const String& mSetMasterLedgerOtherIncome.Description
String* mGetMasterLedgerOtherIncome.Description
ArrayOf<const String&> mSetMasterLedgerOtherIncome.DocRefs
ArrayOf<String>* mGetMasterLedgerOtherIncome.DocRefs
const String& mSetMasterLedgerOtherIncome.FeeId
String* mGetMasterLedgerOtherIncome.FeeId
Int32 mSetMasterLedgerOtherIncome.MasLedgeFinTxNum
Int32* mGetMasterLedgerOtherIncome.MasLedgeFinTxNum
const String& mSetMasterLedgerOtherIncome.Level1AccountName
String* mGetMasterLedgerOtherIncome.Level1AccountName
const String& mSetMasterLedgerOtherIncome.Level1AccountNum
String* mGetMasterLedgerOtherIncome.Level1AccountNum
const String& mSetMasterLedgerOtherIncome.Level2AccountName
String* mGetMasterLedgerOtherIncome.Level2AccountName
const String& mSetMasterLedgerOtherIncome.Level2AccountNum
String* mGetMasterLedgerOtherIncome.Level2AccountNum
const String& mSetMasterLedgerOtherIncome.Level3AccountName
String* mGetMasterLedgerOtherIncome.Level3AccountName
const String& mSetMasterLedgerOtherIncome.Level3AccountNum
String* mGetMasterLedgerOtherIncome.Level3AccountNum
const String& mSetMasterLedgerOtherIncome.Level4AccountName
String* mGetMasterLedgerOtherIncome.Level4AccountName
const String& mSetMasterLedgerOtherIncome.Level4AccountNum
String* mGetMasterLedgerOtherIncome.Level4AccountNum
const String& mSetMasterLedgerOtherIncome.Level5AccountName
String* mGetMasterLedgerOtherIncome.Level5AccountName
const String& mSetMasterLedgerOtherIncome.Level5AccountNum
String* mGetMasterLedgerOtherIncome.Level5AccountNum
const String& mSetMasterLedgerOtherIncome.Level6AccountName
String* mGetMasterLedgerOtherIncome.Level6AccountName
const String& mSetMasterLedgerOtherIncome.Level6AccountNum
String* mGetMasterLedgerOtherIncome.Level6AccountNum
const String& mSetMasterLedgerOtherIncome.Level1ClassName
String* mGetMasterLedgerOtherIncome.Level1ClassName
const String& mSetMasterLedgerOtherIncome.Level2ClassName
String* mGetMasterLedgerOtherIncome.Level2ClassName
const String& mSetMasterLedgerOtherIncome.Level3ClassName
String* mGetMasterLedgerOtherIncome.Level3ClassName
const String& mSetMasterLedgerOtherIncome.TransactionEffective
String* mGetMasterLedgerOtherIncome.TransactionEffective
const String& mSetMasterLedgerOtherIncome.MasLedgeFinTxId
String* mGetMasterLedgerOtherIncome.MasLedgeFinTxId
Double mSetMasterLedgerOtherIncome.Cr
Double* mGetMasterLedgerOtherIncome.Cr
Double mSetMasterLedgerOtherIncome.Dr
Double* mGetMasterLedgerOtherIncome.Dr
Double mSetMasterLedgerOtherIncome.Bal
Double* mGetMasterLedgerOtherIncome.Bal
CRegister.businessChannelOwner mSetMasterLedgerOtherIncome.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerOtherIncome.BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerOtherIncome.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerOtherIncome.MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerOtherIncome.ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerOtherIncome.ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerOtherIncome.ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerOtherIncome.ChartOfClassesId
CAdministration.branch mSetMasterLedgerOtherIncome.BranchId
CAdministration.branch* mGetMasterLedgerOtherIncome.BranchId
CAdministration.department mSetMasterLedgerOtherIncome.DepartmentId
CAdministration.department* mGetMasterLedgerOtherIncome.DepartmentId
CFinance.bank mSetMasterLedgerOtherIncome.BankId
CFinance.bank* mGetMasterLedgerOtherIncome.BankId
CProperty.program mSetMasterLedgerOtherIncome.ProgramId
CProperty.program* mGetMasterLedgerOtherIncome.ProgramId
CProperty.project mSetMasterLedgerOtherIncome.ProjectId
CProperty.project* mGetMasterLedgerOtherIncome.ProjectId
CAdministration.item mSetMasterLedgerOtherIncome.ItemId
CAdministration.item* mGetMasterLedgerOtherIncome.ItemId
CAdministration.job mSetMasterLedgerOtherIncome.JobId
CAdministration.job* mGetMasterLedgerOtherIncome.JobId
CAdministration.service mSetMasterLedgerOtherIncome.ServiceId
CAdministration.service* mGetMasterLedgerOtherIncome.ServiceId
CCustomer.customer mSetMasterLedgerOtherIncome.CustomerId
CCustomer.customer* mGetMasterLedgerOtherIncome.CustomerId
CSupplier.supplier mSetMasterLedgerOtherIncome.SupplierId
CSupplier.supplier* mGetMasterLedgerOtherIncome.SupplierId
realEstatePurchOrders mSetMasterLedgerOtherIncome.PurchOrderId
realEstatePurchOrders* mGetMasterLedgerOtherIncome.PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerOtherIncome.MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerOtherIncome.MasterSalesOrderId
CFinance.invoice mSetMasterLedgerOtherIncome.InvoiceId
CFinance.invoice* mGetMasterLedgerOtherIncome.InvoiceId
CFinance.bill mSetMasterLedgerOtherIncome.BillId
CFinance.bill* mGetMasterLedgerOtherIncome.BillId
const String& mSetMasterLedgerOtherExpense.MasterLedgerOtherExpenseId
String* mGetMasterLedgerOtherExpense.MasterLedgerOtherExpenseId
const String& mSetMasterLedgerOtherExpense.BankBSB
String* mGetMasterLedgerOtherExpense.BankBSB
const String& mSetMasterLedgerOtherExpense.BankAccountNumber
String* mGetMasterLedgerOtherExpense.BankAccountNumber
const String& mSetMasterLedgerOtherExpense.NameOnBankAccount
String* mGetMasterLedgerOtherExpense.NameOnBankAccount
const String& mSetMasterLedgerOtherExpense.Description
String* mGetMasterLedgerOtherExpense.Description
ArrayOf<const String&> mSetMasterLedgerOtherExpense.DocRefs
ArrayOf<String>* mGetMasterLedgerOtherExpense.DocRefs
const String& mSetMasterLedgerOtherExpense.FeeId
String* mGetMasterLedgerOtherExpense.FeeId
Int32 mSetMasterLedgerOtherExpense.MasLedgeFinTxNum
Int32* mGetMasterLedgerOtherExpense.MasLedgeFinTxNum
const String& mSetMasterLedgerOtherExpense.Level1AccountName
String* mGetMasterLedgerOtherExpense.Level1AccountName
const String& mSetMasterLedgerOtherExpense.Level1AccountNum
String* mGetMasterLedgerOtherExpense.Level1AccountNum
const String& mSetMasterLedgerOtherExpense.Level2AccountName
String* mGetMasterLedgerOtherExpense.Level2AccountName
const String& mSetMasterLedgerOtherExpense.Level2AccountNum
String* mGetMasterLedgerOtherExpense.Level2AccountNum
const String& mSetMasterLedgerOtherExpense.Level3AccountName
String* mGetMasterLedgerOtherExpense.Level3AccountName
const String& mSetMasterLedgerOtherExpense.Level3AccountNum
String* mGetMasterLedgerOtherExpense.Level3AccountNum
const String& mSetMasterLedgerOtherExpense.Level4AccountName
String* mGetMasterLedgerOtherExpense.Level4AccountName
const String& mSetMasterLedgerOtherExpense.Level4AccountNum
String* mGetMasterLedgerOtherExpense.Level4AccountNum
const String& mSetMasterLedgerOtherExpense.Level5AccountName
String* mGetMasterLedgerOtherExpense.Level5AccountName
const String& mSetMasterLedgerOtherExpense.Level5AccountNum
String* mGetMasterLedgerOtherExpense.Level5AccountNum
const String& mSetMasterLedgerOtherExpense.Level6AccountName
String* mGetMasterLedgerOtherExpense.Level6AccountName
const String& mSetMasterLedgerOtherExpense.Level6AccountNum
String* mGetMasterLedgerOtherExpense.Level6AccountNum
const String& mSetMasterLedgerOtherExpense.Level1ClassName
String* mGetMasterLedgerOtherExpense.Level1ClassName
const String& mSetMasterLedgerOtherExpense.Level2ClassName
String* mGetMasterLedgerOtherExpense.Level2ClassName
const String& mSetMasterLedgerOtherExpense.Level3ClassName
String* mGetMasterLedgerOtherExpense.Level3ClassName
const String& mSetMasterLedgerOtherExpense.TransactionEffective
String* mGetMasterLedgerOtherExpense.TransactionEffective
const String& mSetMasterLedgerOtherExpense.MasLedgeFinTxId
String* mGetMasterLedgerOtherExpense.MasLedgeFinTxId
Double mSetMasterLedgerOtherExpense.Cr
Double* mGetMasterLedgerOtherExpense.Cr
Double mSetMasterLedgerOtherExpense.Dr
Double* mGetMasterLedgerOtherExpense.Dr
Double mSetMasterLedgerOtherExpense.Bal
Double* mGetMasterLedgerOtherExpense.Bal
CRegister.businessChannelOwner mSetMasterLedgerOtherExpense.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerOtherExpense.BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerOtherExpense.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerOtherExpense.MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerOtherExpense.ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerOtherExpense.ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerOtherExpense.ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerOtherExpense.ChartOfClassesId
CAdministration.branch mSetMasterLedgerOtherExpense.BranchId
CAdministration.branch* mGetMasterLedgerOtherExpense.BranchId
CAdministration.department mSetMasterLedgerOtherExpense.DepartmentId
CAdministration.department* mGetMasterLedgerOtherExpense.DepartmentId
CFinance.bank mSetMasterLedgerOtherExpense.BankId
CFinance.bank* mGetMasterLedgerOtherExpense.BankId
CProperty.program mSetMasterLedgerOtherExpense.ProgramId
CProperty.program* mGetMasterLedgerOtherExpense.ProgramId
CProperty.project mSetMasterLedgerOtherExpense.ProjectId
CProperty.project* mGetMasterLedgerOtherExpense.ProjectId
CAdministration.item mSetMasterLedgerOtherExpense.ItemId
CAdministration.item* mGetMasterLedgerOtherExpense.ItemId
CAdministration.job mSetMasterLedgerOtherExpense.JobId
CAdministration.job* mGetMasterLedgerOtherExpense.JobId
CAdministration.service mSetMasterLedgerOtherExpense.ServiceId
CAdministration.service* mGetMasterLedgerOtherExpense.ServiceId
CCustomer.customer mSetMasterLedgerOtherExpense.CustomerId
CCustomer.customer* mGetMasterLedgerOtherExpense.CustomerId
CSupplier.supplier mSetMasterLedgerOtherExpense.SupplierId
CSupplier.supplier* mGetMasterLedgerOtherExpense.SupplierId
realEstatePurchOrders mSetMasterLedgerOtherExpense.PurchOrderId
realEstatePurchOrders* mGetMasterLedgerOtherExpense.PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerOtherExpense.MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerOtherExpense.MasterSalesOrderId
CFinance.invoice mSetMasterLedgerOtherExpense.InvoiceId
CFinance.invoice* mGetMasterLedgerOtherExpense.InvoiceId
CFinance.bill mSetMasterLedgerOtherExpense.BillId
CFinance.bill* mGetMasterLedgerOtherExpense.BillId
const String& mSetLevel1Budget.Level1BudgetId
String* mGetLevel1Budget.Level1BudgetId
const String& mSetLevel1Budget.BudgetName
String* mGetLevel1Budget.BudgetName
Int32 mSetLevel1Budget.EndYearMonthyyyymm
Int32* mGetLevel1Budget.EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel1Budget.TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel1Budget.TwelveMonthSequence
ArrayOf<const String&> mSetLevel1Budget.IncomeItemTypeIds
ArrayOf<String>* mGetLevel1Budget.IncomeItemTypeIds
ArrayOf<Double> mSetLevel1Budget.JanRevenues
ArrayOf<Double>* mGetLevel1Budget.JanRevenues
ArrayOf<Double> mSetLevel1Budget.FebRevenues
ArrayOf<Double>* mGetLevel1Budget.FebRevenues
ArrayOf<Double> mSetLevel1Budget.MarRevenues
ArrayOf<Double>* mGetLevel1Budget.MarRevenues
ArrayOf<Double> mSetLevel1Budget.AprRevenues
ArrayOf<Double>* mGetLevel1Budget.AprRevenues
ArrayOf<Double> mSetLevel1Budget.MayRevenues
ArrayOf<Double>* mGetLevel1Budget.MayRevenues
ArrayOf<Double> mSetLevel1Budget.JunRevenues
ArrayOf<Double>* mGetLevel1Budget.JunRevenues
ArrayOf<Double> mSetLevel1Budget.JulRevenues
ArrayOf<Double>* mGetLevel1Budget.JulRevenues
ArrayOf<Double> mSetLevel1Budget.AugRevenues
ArrayOf<Double>* mGetLevel1Budget.AugRevenues
ArrayOf<Double> mSetLevel1Budget.SepRevenues
ArrayOf<Double>* mGetLevel1Budget.SepRevenues
ArrayOf<Double> mSetLevel1Budget.OctRevenues
ArrayOf<Double>* mGetLevel1Budget.OctRevenues
ArrayOf<Double> mSetLevel1Budget.NovRevenues
ArrayOf<Double>* mGetLevel1Budget.NovRevenues
ArrayOf<Double> mSetLevel1Budget.DecRevenues
ArrayOf<Double>* mGetLevel1Budget.DecRevenues
ArrayOf<const String&> mSetLevel1Budget.JanItemTypeIds
ArrayOf<String>* mGetLevel1Budget.JanItemTypeIds
ArrayOf<const String&> mSetLevel1Budget.FebItemTypeIds
ArrayOf<String>* mGetLevel1Budget.FebItemTypeIds
ArrayOf<const String&> mSetLevel1Budget.MarItemTypeIds
ArrayOf<String>* mGetLevel1Budget.MarItemTypeIds
ArrayOf<const String&> mSetLevel1Budget.AprItemTypeIds
ArrayOf<String>* mGetLevel1Budget.AprItemTypeIds
ArrayOf<const String&> mSetLevel1Budget.MayItemTypeIds
ArrayOf<String>* mGetLevel1Budget.MayItemTypeIds
ArrayOf<const String&> mSetLevel1Budget.JunItemTypeIds
ArrayOf<String>* mGetLevel1Budget.JunItemTypeIds
ArrayOf<const String&> mSetLevel1Budget.JulItemTypeIds
ArrayOf<String>* mGetLevel1Budget.JulItemTypeIds
ArrayOf<const String&> mSetLevel1Budget.AugItemTypeIds
ArrayOf<String>* mGetLevel1Budget.AugItemTypeIds
ArrayOf<const String&> mSetLevel1Budget.SepItemTypeIds
ArrayOf<String>* mGetLevel1Budget.SepItemTypeIds
ArrayOf<const String&> mSetLevel1Budget.OctItemTypeIds
ArrayOf<String>* mGetLevel1Budget.OctItemTypeIds
ArrayOf<const String&> mSetLevel1Budget.NovItemTypeIds
ArrayOf<String>* mGetLevel1Budget.NovItemTypeIds
ArrayOf<const String&> mSetLevel1Budget.DecItemTypeIds
ArrayOf<String>* mGetLevel1Budget.DecItemTypeIds
ArrayOf<Double> mSetLevel1Budget.JanCostsItems
ArrayOf<Double>* mGetLevel1Budget.JanCostsItems
ArrayOf<Double> mSetLevel1Budget.FebCostsItems
ArrayOf<Double>* mGetLevel1Budget.FebCostsItems
ArrayOf<Double> mSetLevel1Budget.MarCostsItems
ArrayOf<Double>* mGetLevel1Budget.MarCostsItems
ArrayOf<Double> mSetLevel1Budget.AprCostsItems
ArrayOf<Double>* mGetLevel1Budget.AprCostsItems
ArrayOf<Double> mSetLevel1Budget.MayCostsItems
ArrayOf<Double>* mGetLevel1Budget.MayCostsItems
ArrayOf<Double> mSetLevel1Budget.JunCostsItems
ArrayOf<Double>* mGetLevel1Budget.JunCostsItems
ArrayOf<Double> mSetLevel1Budget.JulCostsItems
ArrayOf<Double>* mGetLevel1Budget.JulCostsItems
ArrayOf<Double> mSetLevel1Budget.AugCostsItems
ArrayOf<Double>* mGetLevel1Budget.AugCostsItems
ArrayOf<Double> mSetLevel1Budget.SepCostsItems
ArrayOf<Double>* mGetLevel1Budget.SepCostsItems
ArrayOf<Double> mSetLevel1Budget.OctCostsItems
ArrayOf<Double>* mGetLevel1Budget.OctCostsItems
ArrayOf<Double> mSetLevel1Budget.NovCostsItems
ArrayOf<Double>* mGetLevel1Budget.NovCostsItems
ArrayOf<Double> mSetLevel1Budget.DecCostsItems
ArrayOf<Double>* mGetLevel1Budget.DecCostsItems
ArrayOf<const String&> mSetLevel1Budget.JanJobTypeIds
ArrayOf<String>* mGetLevel1Budget.JanJobTypeIds
ArrayOf<const String&> mSetLevel1Budget.FebJobTypeIds
ArrayOf<String>* mGetLevel1Budget.FebJobTypeIds
ArrayOf<const String&> mSetLevel1Budget.MarJobTypeIds
ArrayOf<String>* mGetLevel1Budget.MarJobTypeIds
ArrayOf<const String&> mSetLevel1Budget.AprJobTypeIds
ArrayOf<String>* mGetLevel1Budget.AprJobTypeIds
ArrayOf<const String&> mSetLevel1Budget.MayJobTypeIds
ArrayOf<String>* mGetLevel1Budget.MayJobTypeIds
ArrayOf<const String&> mSetLevel1Budget.JunJobTypeIds
ArrayOf<String>* mGetLevel1Budget.JunJobTypeIds
ArrayOf<const String&> mSetLevel1Budget.JulJobTypeIds
ArrayOf<String>* mGetLevel1Budget.JulJobTypeIds
ArrayOf<const String&> mSetLevel1Budget.AugJobTypeIds
ArrayOf<String>* mGetLevel1Budget.AugJobTypeIds
ArrayOf<const String&> mSetLevel1Budget.SepJobTypeIds
ArrayOf<String>* mGetLevel1Budget.SepJobTypeIds
ArrayOf<const String&> mSetLevel1Budget.OctJobTypeIds
ArrayOf<String>* mGetLevel1Budget.OctJobTypeIds
ArrayOf<const String&> mSetLevel1Budget.NovJobTypeIds
ArrayOf<String>* mGetLevel1Budget.NovJobTypeIds
ArrayOf<const String&> mSetLevel1Budget.DecJobTypeIds
ArrayOf<String>* mGetLevel1Budget.DecJobTypeIds
ArrayOf<Double> mSetLevel1Budget.JanCostsJobs
ArrayOf<Double>* mGetLevel1Budget.JanCostsJobs
ArrayOf<Double> mSetLevel1Budget.FebCostsJobs
ArrayOf<Double>* mGetLevel1Budget.FebCostsJobs
ArrayOf<Double> mSetLevel1Budget.MarCostsJobs
ArrayOf<Double>* mGetLevel1Budget.MarCostsJobs
ArrayOf<Double> mSetLevel1Budget.AprCostsJobs
ArrayOf<Double>* mGetLevel1Budget.AprCostsJobs
ArrayOf<Double> mSetLevel1Budget.MayCostsJobs
ArrayOf<Double>* mGetLevel1Budget.MayCostsJobs
ArrayOf<Double> mSetLevel1Budget.JunCostsJobs
ArrayOf<Double>* mGetLevel1Budget.JunCostsJobs
ArrayOf<Double> mSetLevel1Budget.JulCostsJobs
ArrayOf<Double>* mGetLevel1Budget.JulCostsJobs
ArrayOf<Double> mSetLevel1Budget.AugCostsJobs
ArrayOf<Double>* mGetLevel1Budget.AugCostsJobs
ArrayOf<Double> mSetLevel1Budget.SepCostsJobs
ArrayOf<Double>* mGetLevel1Budget.SepCostsJobs
ArrayOf<Double> mSetLevel1Budget.OctCostsJobs
ArrayOf<Double>* mGetLevel1Budget.OctCostsJobs
ArrayOf<Double> mSetLevel1Budget.NovCostsJobs
ArrayOf<Double>* mGetLevel1Budget.NovCostsJobs
ArrayOf<Double> mSetLevel1Budget.DecCostsJobs
ArrayOf<Double>* mGetLevel1Budget.DecCostsJobs
ArrayOf<const String&> mSetLevel1Budget.JanServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.JanServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget.FebServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.FebServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget.MarServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.MarServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget.AprServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.AprServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget.MayServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.MayServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget.JunServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.JunServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget.JulServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.JulServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget.AugServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.AugServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget.SepServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.SepServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget.OctServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.OctServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget.NovServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.NovServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget.DecServiceTypeIds
ArrayOf<String>* mGetLevel1Budget.DecServiceTypeIds
ArrayOf<Double> mSetLevel1Budget.JanCostsServices
ArrayOf<Double>* mGetLevel1Budget.JanCostsServices
ArrayOf<Double> mSetLevel1Budget.FebCostsServices
ArrayOf<Double>* mGetLevel1Budget.FebCostsServices
ArrayOf<Double> mSetLevel1Budget.MarCostsServices
ArrayOf<Double>* mGetLevel1Budget.MarCostsServices
ArrayOf<Double> mSetLevel1Budget.AprCostsServices
ArrayOf<Double>* mGetLevel1Budget.AprCostsServices
ArrayOf<Double> mSetLevel1Budget.MayCostsServices
ArrayOf<Double>* mGetLevel1Budget.MayCostsServices
ArrayOf<Double> mSetLevel1Budget.JunCostsServices
ArrayOf<Double>* mGetLevel1Budget.JunCostsServices
ArrayOf<Double> mSetLevel1Budget.JulCostsServices
ArrayOf<Double>* mGetLevel1Budget.JulCostsServices
ArrayOf<Double> mSetLevel1Budget.AugCostsServices
ArrayOf<Double>* mGetLevel1Budget.AugCostsServices
ArrayOf<Double> mSetLevel1Budget.SepCostsServices
ArrayOf<Double>* mGetLevel1Budget.SepCostsServices
ArrayOf<Double> mSetLevel1Budget.OctCostsServices
ArrayOf<Double>* mGetLevel1Budget.OctCostsServices
ArrayOf<Double> mSetLevel1Budget.NovCostsServices
ArrayOf<Double>* mGetLevel1Budget.NovCostsServices
ArrayOf<Double> mSetLevel1Budget.DecCostsServices
ArrayOf<Double>* mGetLevel1Budget.DecCostsServices
ArrayOf<Double> mSetLevel1Budget.TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel1Budget.TwelveTotalMonthlyCosts
Double mSetLevel1Budget.YearCostThisBudgetId
Double* mGetLevel1Budget.YearCostThisBudgetId
Double mSetLevel1Budget.NetProfitLossThisLevel1BudgetId
Double* mGetLevel1Budget.NetProfitLossThisLevel1BudgetId
Int32 mSetLevel1Budget.LinkingInternalBudgetNum
Int32* mGetLevel1Budget.LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel1Budget.CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel1Budget.CustomerIds
ArrayOf<CProperty.property> mSetLevel1Budget.PropertyIds
ArrayOf<CProperty.property>* mGetLevel1Budget.PropertyIds
ArrayOf<CProperty.program> mSetLevel1Budget.ProgramIds
ArrayOf<CProperty.program>* mGetLevel1Budget.ProgramIds
ArrayOf<CProperty.project> mSetLevel1Budget.ProjectIds
ArrayOf<CProperty.project>* mGetLevel1Budget.ProjectIds
CFinance.level2Budget mSetLevel1Budget.LinkedToLevel2BudgetId
CFinance.level2Budget* mGetLevel1Budget.LinkedToLevel2BudgetId
CFinance.masterSetRegister mSetLevel1Budget.MasterSetId
CFinance.masterSetRegister* mGetLevel1Budget.MasterSetId
CRegister.businessChannelOwner mSetLevel1Budget.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel1Budget.BusinessChannelOwnerId
const String& mSetLevel2Budget.Level2BudgetId
String* mGetLevel2Budget.Level2BudgetId
const String& mSetLevel2Budget.BudgetName
String* mGetLevel2Budget.BudgetName
Int32 mSetLevel2Budget.EndYearMonthyyyymm
Int32* mGetLevel2Budget.EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel2Budget.TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel2Budget.TwelveMonthSequence
ArrayOf<const String&> mSetLevel2Budget.IncomeItemTypeIds
ArrayOf<String>* mGetLevel2Budget.IncomeItemTypeIds
ArrayOf<Double> mSetLevel2Budget.JanRevenues
ArrayOf<Double>* mGetLevel2Budget.JanRevenues
ArrayOf<Double> mSetLevel2Budget.FebRevenues
ArrayOf<Double>* mGetLevel2Budget.FebRevenues
ArrayOf<Double> mSetLevel2Budget.MarRevenues
ArrayOf<Double>* mGetLevel2Budget.MarRevenues
ArrayOf<Double> mSetLevel2Budget.AprRevenues
ArrayOf<Double>* mGetLevel2Budget.AprRevenues
ArrayOf<Double> mSetLevel2Budget.MayRevenues
ArrayOf<Double>* mGetLevel2Budget.MayRevenues
ArrayOf<Double> mSetLevel2Budget.JunRevenues
ArrayOf<Double>* mGetLevel2Budget.JunRevenues
ArrayOf<Double> mSetLevel2Budget.JulRevenues
ArrayOf<Double>* mGetLevel2Budget.JulRevenues
ArrayOf<Double> mSetLevel2Budget.AugRevenues
ArrayOf<Double>* mGetLevel2Budget.AugRevenues
ArrayOf<Double> mSetLevel2Budget.SepRevenues
ArrayOf<Double>* mGetLevel2Budget.SepRevenues
ArrayOf<Double> mSetLevel2Budget.OctRevenues
ArrayOf<Double>* mGetLevel2Budget.OctRevenues
ArrayOf<Double> mSetLevel2Budget.NovRevenues
ArrayOf<Double>* mGetLevel2Budget.NovRevenues
ArrayOf<Double> mSetLevel2Budget.DecRevenues
ArrayOf<Double>* mGetLevel2Budget.DecRevenues
ArrayOf<const String&> mSetLevel2Budget.JanItemTypeIds
ArrayOf<String>* mGetLevel2Budget.JanItemTypeIds
ArrayOf<const String&> mSetLevel2Budget.FebItemTypeIds
ArrayOf<String>* mGetLevel2Budget.FebItemTypeIds
ArrayOf<const String&> mSetLevel2Budget.MarItemTypeIds
ArrayOf<String>* mGetLevel2Budget.MarItemTypeIds
ArrayOf<const String&> mSetLevel2Budget.AprItemTypeIds
ArrayOf<String>* mGetLevel2Budget.AprItemTypeIds
ArrayOf<const String&> mSetLevel2Budget.MayItemTypeIds
ArrayOf<String>* mGetLevel2Budget.MayItemTypeIds
ArrayOf<const String&> mSetLevel2Budget.JunItemTypeIds
ArrayOf<String>* mGetLevel2Budget.JunItemTypeIds
ArrayOf<const String&> mSetLevel2Budget.JulItemTypeIds
ArrayOf<String>* mGetLevel2Budget.JulItemTypeIds
ArrayOf<const String&> mSetLevel2Budget.AugItemTypeIds
ArrayOf<String>* mGetLevel2Budget.AugItemTypeIds
ArrayOf<const String&> mSetLevel2Budget.SepItemTypeIds
ArrayOf<String>* mGetLevel2Budget.SepItemTypeIds
ArrayOf<const String&> mSetLevel2Budget.OctItemTypeIds
ArrayOf<String>* mGetLevel2Budget.OctItemTypeIds
ArrayOf<const String&> mSetLevel2Budget.NovItemTypeIds
ArrayOf<String>* mGetLevel2Budget.NovItemTypeIds
ArrayOf<const String&> mSetLevel2Budget.DecItemTypeIds
ArrayOf<String>* mGetLevel2Budget.DecItemTypeIds
ArrayOf<Double> mSetLevel2Budget.JanCostsItems
ArrayOf<Double>* mGetLevel2Budget.JanCostsItems
ArrayOf<Double> mSetLevel2Budget.FebCostsItems
ArrayOf<Double>* mGetLevel2Budget.FebCostsItems
ArrayOf<Double> mSetLevel2Budget.MarCostsItems
ArrayOf<Double>* mGetLevel2Budget.MarCostsItems
ArrayOf<Double> mSetLevel2Budget.AprCostsItems
ArrayOf<Double>* mGetLevel2Budget.AprCostsItems
ArrayOf<Double> mSetLevel2Budget.MayCostsItems
ArrayOf<Double>* mGetLevel2Budget.MayCostsItems
ArrayOf<Double> mSetLevel2Budget.JunCostsItems
ArrayOf<Double>* mGetLevel2Budget.JunCostsItems
ArrayOf<Double> mSetLevel2Budget.JulCostsItems
ArrayOf<Double>* mGetLevel2Budget.JulCostsItems
ArrayOf<Double> mSetLevel2Budget.AugCostsItems
ArrayOf<Double>* mGetLevel2Budget.AugCostsItems
ArrayOf<Double> mSetLevel2Budget.SepCostsItems
ArrayOf<Double>* mGetLevel2Budget.SepCostsItems
ArrayOf<Double> mSetLevel2Budget.OctCostsItems
ArrayOf<Double>* mGetLevel2Budget.OctCostsItems
ArrayOf<Double> mSetLevel2Budget.NovCostsItems
ArrayOf<Double>* mGetLevel2Budget.NovCostsItems
ArrayOf<Double> mSetLevel2Budget.DecCostsItems
ArrayOf<Double>* mGetLevel2Budget.DecCostsItems
ArrayOf<const String&> mSetLevel2Budget.JanJobTypeIds
ArrayOf<String>* mGetLevel2Budget.JanJobTypeIds
ArrayOf<const String&> mSetLevel2Budget.FebJobTypeIds
ArrayOf<String>* mGetLevel2Budget.FebJobTypeIds
ArrayOf<const String&> mSetLevel2Budget.MarJobTypeIds
ArrayOf<String>* mGetLevel2Budget.MarJobTypeIds
ArrayOf<const String&> mSetLevel2Budget.AprJobTypeIds
ArrayOf<String>* mGetLevel2Budget.AprJobTypeIds
ArrayOf<const String&> mSetLevel2Budget.MayJobTypeIds
ArrayOf<String>* mGetLevel2Budget.MayJobTypeIds
ArrayOf<const String&> mSetLevel2Budget.JunJobTypeIds
ArrayOf<String>* mGetLevel2Budget.JunJobTypeIds
ArrayOf<const String&> mSetLevel2Budget.JulJobTypeIds
ArrayOf<String>* mGetLevel2Budget.JulJobTypeIds
ArrayOf<const String&> mSetLevel2Budget.AugJobTypeIds
ArrayOf<String>* mGetLevel2Budget.AugJobTypeIds
ArrayOf<const String&> mSetLevel2Budget.SepJobTypeIds
ArrayOf<String>* mGetLevel2Budget.SepJobTypeIds
ArrayOf<const String&> mSetLevel2Budget.OctJobTypeIds
ArrayOf<String>* mGetLevel2Budget.OctJobTypeIds
ArrayOf<const String&> mSetLevel2Budget.NovJobTypeIds
ArrayOf<String>* mGetLevel2Budget.NovJobTypeIds
ArrayOf<const String&> mSetLevel2Budget.DecJobTypeIds
ArrayOf<String>* mGetLevel2Budget.DecJobTypeIds
ArrayOf<Double> mSetLevel2Budget.JanCostsJobs
ArrayOf<Double>* mGetLevel2Budget.JanCostsJobs
ArrayOf<Double> mSetLevel2Budget.FebCostsJobs
ArrayOf<Double>* mGetLevel2Budget.FebCostsJobs
ArrayOf<Double> mSetLevel2Budget.MarCostsJobs
ArrayOf<Double>* mGetLevel2Budget.MarCostsJobs
ArrayOf<Double> mSetLevel2Budget.AprCostsJobs
ArrayOf<Double>* mGetLevel2Budget.AprCostsJobs
ArrayOf<Double> mSetLevel2Budget.MayCostsJobs
ArrayOf<Double>* mGetLevel2Budget.MayCostsJobs
ArrayOf<Double> mSetLevel2Budget.JunCostsJobs
ArrayOf<Double>* mGetLevel2Budget.JunCostsJobs
ArrayOf<Double> mSetLevel2Budget.JulCostsJobs
ArrayOf<Double>* mGetLevel2Budget.JulCostsJobs
ArrayOf<Double> mSetLevel2Budget.AugCostsJobs
ArrayOf<Double>* mGetLevel2Budget.AugCostsJobs
ArrayOf<Double> mSetLevel2Budget.SepCostsJobs
ArrayOf<Double>* mGetLevel2Budget.SepCostsJobs
ArrayOf<Double> mSetLevel2Budget.OctCostsJobs
ArrayOf<Double>* mGetLevel2Budget.OctCostsJobs
ArrayOf<Double> mSetLevel2Budget.NovCostsJobs
ArrayOf<Double>* mGetLevel2Budget.NovCostsJobs
ArrayOf<Double> mSetLevel2Budget.DecCostsJobs
ArrayOf<Double>* mGetLevel2Budget.DecCostsJobs
ArrayOf<const String&> mSetLevel2Budget.JanServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.JanServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget.FebServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.FebServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget.MarServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.MarServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget.AprServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.AprServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget.MayServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.MayServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget.JunServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.JunServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget.JulServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.JulServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget.AugServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.AugServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget.SepServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.SepServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget.OctServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.OctServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget.NovServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.NovServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget.DecServiceTypeIds
ArrayOf<String>* mGetLevel2Budget.DecServiceTypeIds
ArrayOf<Double> mSetLevel2Budget.JanCostsServices
ArrayOf<Double>* mGetLevel2Budget.JanCostsServices
ArrayOf<Double> mSetLevel2Budget.FebCostsServices
ArrayOf<Double>* mGetLevel2Budget.FebCostsServices
ArrayOf<Double> mSetLevel2Budget.MarCostsServices
ArrayOf<Double>* mGetLevel2Budget.MarCostsServices
ArrayOf<Double> mSetLevel2Budget.AprCostsServices
ArrayOf<Double>* mGetLevel2Budget.AprCostsServices
ArrayOf<Double> mSetLevel2Budget.MayCostsServices
ArrayOf<Double>* mGetLevel2Budget.MayCostsServices
ArrayOf<Double> mSetLevel2Budget.JunCostsServices
ArrayOf<Double>* mGetLevel2Budget.JunCostsServices
ArrayOf<Double> mSetLevel2Budget.JulCostsServices
ArrayOf<Double>* mGetLevel2Budget.JulCostsServices
ArrayOf<Double> mSetLevel2Budget.AugCostsServices
ArrayOf<Double>* mGetLevel2Budget.AugCostsServices
ArrayOf<Double> mSetLevel2Budget.SepCostsServices
ArrayOf<Double>* mGetLevel2Budget.SepCostsServices
ArrayOf<Double> mSetLevel2Budget.OctCostsServices
ArrayOf<Double>* mGetLevel2Budget.OctCostsServices
ArrayOf<Double> mSetLevel2Budget.NovCostsServices
ArrayOf<Double>* mGetLevel2Budget.NovCostsServices
ArrayOf<Double> mSetLevel2Budget.DecCostsServices
ArrayOf<Double>* mGetLevel2Budget.DecCostsServices
ArrayOf<Double> mSetLevel2Budget.TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel2Budget.TwelveTotalMonthlyCosts
Double mSetLevel2Budget.YearCostThisBudgetId
Double* mGetLevel2Budget.YearCostThisBudgetId
Double mSetLevel2Budget.NetProfitLossThisLevel2BudgetId
Double* mGetLevel2Budget.NetProfitLossThisLevel2BudgetId
Int32 mSetLevel2Budget.LinkingInternalBudgetNum
Int32* mGetLevel2Budget.LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel2Budget.CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel2Budget.CustomerIds
ArrayOf<CProperty.property> mSetLevel2Budget.PropertyIds
ArrayOf<CProperty.property>* mGetLevel2Budget.PropertyIds
ArrayOf<CProperty.program> mSetLevel2Budget.ProgramIds
ArrayOf<CProperty.program>* mGetLevel2Budget.ProgramIds
ArrayOf<CProperty.project> mSetLevel2Budget.ProjectIds
ArrayOf<CProperty.project>* mGetLevel2Budget.ProjectIds
CFinance.level3Budget mSetLevel2Budget.LinkedToLevel3BudgetId
CFinance.level3Budget* mGetLevel2Budget.LinkedToLevel3BudgetId
CFinance.masterSetRegister mSetLevel2Budget.MasterSetId
CFinance.masterSetRegister* mGetLevel2Budget.MasterSetId
CRegister.businessChannelOwner mSetLevel2Budget.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel2Budget.BusinessChannelOwnerId
const String& mSetLevel3Budget.Level3BudgetId
String* mGetLevel3Budget.Level3BudgetId
const String& mSetLevel3Budget.BudgetName
String* mGetLevel3Budget.BudgetName
Int32 mSetLevel3Budget.EndYearMonthyyyymm
Int32* mGetLevel3Budget.EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel3Budget.TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel3Budget.TwelveMonthSequence
ArrayOf<const String&> mSetLevel3Budget.IncomeItemTypeIds
ArrayOf<String>* mGetLevel3Budget.IncomeItemTypeIds
ArrayOf<Double> mSetLevel3Budget.JanRevenues
ArrayOf<Double>* mGetLevel3Budget.JanRevenues
ArrayOf<Double> mSetLevel3Budget.FebRevenues
ArrayOf<Double>* mGetLevel3Budget.FebRevenues
ArrayOf<Double> mSetLevel3Budget.MarRevenues
ArrayOf<Double>* mGetLevel3Budget.MarRevenues
ArrayOf<Double> mSetLevel3Budget.AprRevenues
ArrayOf<Double>* mGetLevel3Budget.AprRevenues
ArrayOf<Double> mSetLevel3Budget.MayRevenues
ArrayOf<Double>* mGetLevel3Budget.MayRevenues
ArrayOf<Double> mSetLevel3Budget.JunRevenues
ArrayOf<Double>* mGetLevel3Budget.JunRevenues
ArrayOf<Double> mSetLevel3Budget.JulRevenues
ArrayOf<Double>* mGetLevel3Budget.JulRevenues
ArrayOf<Double> mSetLevel3Budget.AugRevenues
ArrayOf<Double>* mGetLevel3Budget.AugRevenues
ArrayOf<Double> mSetLevel3Budget.SepRevenues
ArrayOf<Double>* mGetLevel3Budget.SepRevenues
ArrayOf<Double> mSetLevel3Budget.OctRevenues
ArrayOf<Double>* mGetLevel3Budget.OctRevenues
ArrayOf<Double> mSetLevel3Budget.NovRevenues
ArrayOf<Double>* mGetLevel3Budget.NovRevenues
ArrayOf<Double> mSetLevel3Budget.DecRevenues
ArrayOf<Double>* mGetLevel3Budget.DecRevenues
ArrayOf<const String&> mSetLevel3Budget.JanItemTypeIds
ArrayOf<String>* mGetLevel3Budget.JanItemTypeIds
ArrayOf<const String&> mSetLevel3Budget.FebItemTypeIds
ArrayOf<String>* mGetLevel3Budget.FebItemTypeIds
ArrayOf<const String&> mSetLevel3Budget.MarItemTypeIds
ArrayOf<String>* mGetLevel3Budget.MarItemTypeIds
ArrayOf<const String&> mSetLevel3Budget.AprItemTypeIds
ArrayOf<String>* mGetLevel3Budget.AprItemTypeIds
ArrayOf<const String&> mSetLevel3Budget.MayItemTypeIds
ArrayOf<String>* mGetLevel3Budget.MayItemTypeIds
ArrayOf<const String&> mSetLevel3Budget.JunItemTypeIds
ArrayOf<String>* mGetLevel3Budget.JunItemTypeIds
ArrayOf<const String&> mSetLevel3Budget.JulItemTypeIds
ArrayOf<String>* mGetLevel3Budget.JulItemTypeIds
ArrayOf<const String&> mSetLevel3Budget.AugItemTypeIds
ArrayOf<String>* mGetLevel3Budget.AugItemTypeIds
ArrayOf<const String&> mSetLevel3Budget.SepItemTypeIds
ArrayOf<String>* mGetLevel3Budget.SepItemTypeIds
ArrayOf<const String&> mSetLevel3Budget.OctItemTypeIds
ArrayOf<String>* mGetLevel3Budget.OctItemTypeIds
ArrayOf<const String&> mSetLevel3Budget.NovItemTypeIds
ArrayOf<String>* mGetLevel3Budget.NovItemTypeIds
ArrayOf<const String&> mSetLevel3Budget.DecItemTypeIds
ArrayOf<String>* mGetLevel3Budget.DecItemTypeIds
ArrayOf<Double> mSetLevel3Budget.JanCostsItems
ArrayOf<Double>* mGetLevel3Budget.JanCostsItems
ArrayOf<Double> mSetLevel3Budget.FebCostsItems
ArrayOf<Double>* mGetLevel3Budget.FebCostsItems
ArrayOf<Double> mSetLevel3Budget.MarCostsItems
ArrayOf<Double>* mGetLevel3Budget.MarCostsItems
ArrayOf<Double> mSetLevel3Budget.AprCostsItems
ArrayOf<Double>* mGetLevel3Budget.AprCostsItems
ArrayOf<Double> mSetLevel3Budget.MayCostsItems
ArrayOf<Double>* mGetLevel3Budget.MayCostsItems
ArrayOf<Double> mSetLevel3Budget.JunCostsItems
ArrayOf<Double>* mGetLevel3Budget.JunCostsItems
ArrayOf<Double> mSetLevel3Budget.JulCostsItems
ArrayOf<Double>* mGetLevel3Budget.JulCostsItems
ArrayOf<Double> mSetLevel3Budget.AugCostsItems
ArrayOf<Double>* mGetLevel3Budget.AugCostsItems
ArrayOf<Double> mSetLevel3Budget.SepCostsItems
ArrayOf<Double>* mGetLevel3Budget.SepCostsItems
ArrayOf<Double> mSetLevel3Budget.OctCostsItems
ArrayOf<Double>* mGetLevel3Budget.OctCostsItems
ArrayOf<Double> mSetLevel3Budget.NovCostsItems
ArrayOf<Double>* mGetLevel3Budget.NovCostsItems
ArrayOf<Double> mSetLevel3Budget.DecCostsItems
ArrayOf<Double>* mGetLevel3Budget.DecCostsItems
ArrayOf<const String&> mSetLevel3Budget.JanJobTypeIds
ArrayOf<String>* mGetLevel3Budget.JanJobTypeIds
ArrayOf<const String&> mSetLevel3Budget.FebJobTypeIds
ArrayOf<String>* mGetLevel3Budget.FebJobTypeIds
ArrayOf<const String&> mSetLevel3Budget.MarJobTypeIds
ArrayOf<String>* mGetLevel3Budget.MarJobTypeIds
ArrayOf<const String&> mSetLevel3Budget.AprJobTypeIds
ArrayOf<String>* mGetLevel3Budget.AprJobTypeIds
ArrayOf<const String&> mSetLevel3Budget.MayJobTypeIds
ArrayOf<String>* mGetLevel3Budget.MayJobTypeIds
ArrayOf<const String&> mSetLevel3Budget.JunJobTypeIds
ArrayOf<String>* mGetLevel3Budget.JunJobTypeIds
ArrayOf<const String&> mSetLevel3Budget.JulJobTypeIds
ArrayOf<String>* mGetLevel3Budget.JulJobTypeIds
ArrayOf<const String&> mSetLevel3Budget.AugJobTypeIds
ArrayOf<String>* mGetLevel3Budget.AugJobTypeIds
ArrayOf<const String&> mSetLevel3Budget.SepJobTypeIds
ArrayOf<String>* mGetLevel3Budget.SepJobTypeIds
ArrayOf<const String&> mSetLevel3Budget.OctJobTypeIds
ArrayOf<String>* mGetLevel3Budget.OctJobTypeIds
ArrayOf<const String&> mSetLevel3Budget.NovJobTypeIds
ArrayOf<String>* mGetLevel3Budget.NovJobTypeIds
ArrayOf<const String&> mSetLevel3Budget.DecJobTypeIds
ArrayOf<String>* mGetLevel3Budget.DecJobTypeIds
ArrayOf<Double> mSetLevel3Budget.JanCostsJobs
ArrayOf<Double>* mGetLevel3Budget.JanCostsJobs
ArrayOf<Double> mSetLevel3Budget.FebCostsJobs
ArrayOf<Double>* mGetLevel3Budget.FebCostsJobs
ArrayOf<Double> mSetLevel3Budget.MarCostsJobs
ArrayOf<Double>* mGetLevel3Budget.MarCostsJobs
ArrayOf<Double> mSetLevel3Budget.AprCostsJobs
ArrayOf<Double>* mGetLevel3Budget.AprCostsJobs
ArrayOf<Double> mSetLevel3Budget.MayCostsJobs
ArrayOf<Double>* mGetLevel3Budget.MayCostsJobs
ArrayOf<Double> mSetLevel3Budget.JunCostsJobs
ArrayOf<Double>* mGetLevel3Budget.JunCostsJobs
ArrayOf<Double> mSetLevel3Budget.JulCostsJobs
ArrayOf<Double>* mGetLevel3Budget.JulCostsJobs
ArrayOf<Double> mSetLevel3Budget.AugCostsJobs
ArrayOf<Double>* mGetLevel3Budget.AugCostsJobs
ArrayOf<Double> mSetLevel3Budget.SepCostsJobs
ArrayOf<Double>* mGetLevel3Budget.SepCostsJobs
ArrayOf<Double> mSetLevel3Budget.OctCostsJobs
ArrayOf<Double>* mGetLevel3Budget.OctCostsJobs
ArrayOf<Double> mSetLevel3Budget.NovCostsJobs
ArrayOf<Double>* mGetLevel3Budget.NovCostsJobs
ArrayOf<Double> mSetLevel3Budget.DecCostsJobs
ArrayOf<Double>* mGetLevel3Budget.DecCostsJobs
ArrayOf<const String&> mSetLevel3Budget.JanServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.JanServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget.FebServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.FebServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget.MarServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.MarServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget.AprServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.AprServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget.MayServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.MayServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget.JunServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.JunServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget.JulServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.JulServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget.AugServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.AugServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget.SepServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.SepServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget.OctServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.OctServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget.NovServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.NovServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget.DecServiceTypeIds
ArrayOf<String>* mGetLevel3Budget.DecServiceTypeIds
ArrayOf<Double> mSetLevel3Budget.JanCostsServices
ArrayOf<Double>* mGetLevel3Budget.JanCostsServices
ArrayOf<Double> mSetLevel3Budget.FebCostsServices
ArrayOf<Double>* mGetLevel3Budget.FebCostsServices
ArrayOf<Double> mSetLevel3Budget.MarCostsServices
ArrayOf<Double>* mGetLevel3Budget.MarCostsServices
ArrayOf<Double> mSetLevel3Budget.AprCostsServices
ArrayOf<Double>* mGetLevel3Budget.AprCostsServices
ArrayOf<Double> mSetLevel3Budget.MayCostsServices
ArrayOf<Double>* mGetLevel3Budget.MayCostsServices
ArrayOf<Double> mSetLevel3Budget.JunCostsServices
ArrayOf<Double>* mGetLevel3Budget.JunCostsServices
ArrayOf<Double> mSetLevel3Budget.JulCostsServices
ArrayOf<Double>* mGetLevel3Budget.JulCostsServices
ArrayOf<Double> mSetLevel3Budget.AugCostsServices
ArrayOf<Double>* mGetLevel3Budget.AugCostsServices
ArrayOf<Double> mSetLevel3Budget.SepCostsServices
ArrayOf<Double>* mGetLevel3Budget.SepCostsServices
ArrayOf<Double> mSetLevel3Budget.OctCostsServices
ArrayOf<Double>* mGetLevel3Budget.OctCostsServices
ArrayOf<Double> mSetLevel3Budget.NovCostsServices
ArrayOf<Double>* mGetLevel3Budget.NovCostsServices
ArrayOf<Double> mSetLevel3Budget.DecCostsServices
ArrayOf<Double>* mGetLevel3Budget.DecCostsServices
ArrayOf<Double> mSetLevel3Budget.TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel3Budget.TwelveTotalMonthlyCosts
Double mSetLevel3Budget.YearCostThisBudgetId
Double* mGetLevel3Budget.YearCostThisBudgetId
Double mSetLevel3Budget.NetProfitLossThisLevel3BudgetId
Double* mGetLevel3Budget.NetProfitLossThisLevel3BudgetId
Int32 mSetLevel3Budget.LinkingInternalBudgetNum
Int32* mGetLevel3Budget.LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel3Budget.CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel3Budget.CustomerIds
ArrayOf<CProperty.property> mSetLevel3Budget.PropertyIds
ArrayOf<CProperty.property>* mGetLevel3Budget.PropertyIds
ArrayOf<CProperty.program> mSetLevel3Budget.ProgramIds
ArrayOf<CProperty.program>* mGetLevel3Budget.ProgramIds
ArrayOf<CProperty.project> mSetLevel3Budget.ProjectIds
ArrayOf<CProperty.project>* mGetLevel3Budget.ProjectIds
CFinance.level4Budget mSetLevel3Budget.LinkedToLevel4BudgetId
CFinance.level4Budget* mGetLevel3Budget.LinkedToLevel4BudgetId
CFinance.masterSetRegister mSetLevel3Budget.MasterSetId
CFinance.masterSetRegister* mGetLevel3Budget.MasterSetId
CRegister.businessChannelOwner mSetLevel3Budget.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel3Budget.BusinessChannelOwnerId
const String& mSetLevel4Budget.Level4BudgetId
String* mGetLevel4Budget.Level4BudgetId
const String& mSetLevel4Budget.BudgetName
String* mGetLevel4Budget.BudgetName
Int32 mSetLevel4Budget.EndYearMonthyyyymm
Int32* mGetLevel4Budget.EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel4Budget.TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel4Budget.TwelveMonthSequence
ArrayOf<const String&> mSetLevel4Budget.IncomeItemTypeIds
ArrayOf<String>* mGetLevel4Budget.IncomeItemTypeIds
ArrayOf<Double> mSetLevel4Budget.JanRevenues
ArrayOf<Double>* mGetLevel4Budget.JanRevenues
ArrayOf<Double> mSetLevel4Budget.FebRevenues
ArrayOf<Double>* mGetLevel4Budget.FebRevenues
ArrayOf<Double> mSetLevel4Budget.MarRevenues
ArrayOf<Double>* mGetLevel4Budget.MarRevenues
ArrayOf<Double> mSetLevel4Budget.AprRevenues
ArrayOf<Double>* mGetLevel4Budget.AprRevenues
ArrayOf<Double> mSetLevel4Budget.MayRevenues
ArrayOf<Double>* mGetLevel4Budget.MayRevenues
ArrayOf<Double> mSetLevel4Budget.JunRevenues
ArrayOf<Double>* mGetLevel4Budget.JunRevenues
ArrayOf<Double> mSetLevel4Budget.JulRevenues
ArrayOf<Double>* mGetLevel4Budget.JulRevenues
ArrayOf<Double> mSetLevel4Budget.AugRevenues
ArrayOf<Double>* mGetLevel4Budget.AugRevenues
ArrayOf<Double> mSetLevel4Budget.SepRevenues
ArrayOf<Double>* mGetLevel4Budget.SepRevenues
ArrayOf<Double> mSetLevel4Budget.OctRevenues
ArrayOf<Double>* mGetLevel4Budget.OctRevenues
ArrayOf<Double> mSetLevel4Budget.NovRevenues
ArrayOf<Double>* mGetLevel4Budget.NovRevenues
ArrayOf<Double> mSetLevel4Budget.DecRevenues
ArrayOf<Double>* mGetLevel4Budget.DecRevenues
ArrayOf<const String&> mSetLevel4Budget.JanItemTypeIds
ArrayOf<String>* mGetLevel4Budget.JanItemTypeIds
ArrayOf<const String&> mSetLevel4Budget.FebItemTypeIds
ArrayOf<String>* mGetLevel4Budget.FebItemTypeIds
ArrayOf<const String&> mSetLevel4Budget.MarItemTypeIds
ArrayOf<String>* mGetLevel4Budget.MarItemTypeIds
ArrayOf<const String&> mSetLevel4Budget.AprItemTypeIds
ArrayOf<String>* mGetLevel4Budget.AprItemTypeIds
ArrayOf<const String&> mSetLevel4Budget.MayItemTypeIds
ArrayOf<String>* mGetLevel4Budget.MayItemTypeIds
ArrayOf<const String&> mSetLevel4Budget.JunItemTypeIds
ArrayOf<String>* mGetLevel4Budget.JunItemTypeIds
ArrayOf<const String&> mSetLevel4Budget.JulItemTypeIds
ArrayOf<String>* mGetLevel4Budget.JulItemTypeIds
ArrayOf<const String&> mSetLevel4Budget.AugItemTypeIds
ArrayOf<String>* mGetLevel4Budget.AugItemTypeIds
ArrayOf<const String&> mSetLevel4Budget.SepItemTypeIds
ArrayOf<String>* mGetLevel4Budget.SepItemTypeIds
ArrayOf<const String&> mSetLevel4Budget.OctItemTypeIds
ArrayOf<String>* mGetLevel4Budget.OctItemTypeIds
ArrayOf<const String&> mSetLevel4Budget.NovItemTypeIds
ArrayOf<String>* mGetLevel4Budget.NovItemTypeIds
ArrayOf<const String&> mSetLevel4Budget.DecItemTypeIds
ArrayOf<String>* mGetLevel4Budget.DecItemTypeIds
ArrayOf<Double> mSetLevel4Budget.JanCostsItems
ArrayOf<Double>* mGetLevel4Budget.JanCostsItems
ArrayOf<Double> mSetLevel4Budget.FebCostsItems
ArrayOf<Double>* mGetLevel4Budget.FebCostsItems
ArrayOf<Double> mSetLevel4Budget.MarCostsItems
ArrayOf<Double>* mGetLevel4Budget.MarCostsItems
ArrayOf<Double> mSetLevel4Budget.AprCostsItems
ArrayOf<Double>* mGetLevel4Budget.AprCostsItems
ArrayOf<Double> mSetLevel4Budget.MayCostsItems
ArrayOf<Double>* mGetLevel4Budget.MayCostsItems
ArrayOf<Double> mSetLevel4Budget.JunCostsItems
ArrayOf<Double>* mGetLevel4Budget.JunCostsItems
ArrayOf<Double> mSetLevel4Budget.JulCostsItems
ArrayOf<Double>* mGetLevel4Budget.JulCostsItems
ArrayOf<Double> mSetLevel4Budget.AugCostsItems
ArrayOf<Double>* mGetLevel4Budget.AugCostsItems
ArrayOf<Double> mSetLevel4Budget.SepCostsItems
ArrayOf<Double>* mGetLevel4Budget.SepCostsItems
ArrayOf<Double> mSetLevel4Budget.OctCostsItems
ArrayOf<Double>* mGetLevel4Budget.OctCostsItems
ArrayOf<Double> mSetLevel4Budget.NovCostsItems
ArrayOf<Double>* mGetLevel4Budget.NovCostsItems
ArrayOf<Double> mSetLevel4Budget.DecCostsItems
ArrayOf<Double>* mGetLevel4Budget.DecCostsItems
ArrayOf<const String&> mSetLevel4Budget.JanJobTypeIds
ArrayOf<String>* mGetLevel4Budget.JanJobTypeIds
ArrayOf<const String&> mSetLevel4Budget.FebJobTypeIds
ArrayOf<String>* mGetLevel4Budget.FebJobTypeIds
ArrayOf<const String&> mSetLevel4Budget.MarJobTypeIds
ArrayOf<String>* mGetLevel4Budget.MarJobTypeIds
ArrayOf<const String&> mSetLevel4Budget.AprJobTypeIds
ArrayOf<String>* mGetLevel4Budget.AprJobTypeIds
ArrayOf<const String&> mSetLevel4Budget.MayJobTypeIds
ArrayOf<String>* mGetLevel4Budget.MayJobTypeIds
ArrayOf<const String&> mSetLevel4Budget.JunJobTypeIds
ArrayOf<String>* mGetLevel4Budget.JunJobTypeIds
ArrayOf<const String&> mSetLevel4Budget.JulJobTypeIds
ArrayOf<String>* mGetLevel4Budget.JulJobTypeIds
ArrayOf<const String&> mSetLevel4Budget.AugJobTypeIds
ArrayOf<String>* mGetLevel4Budget.AugJobTypeIds
ArrayOf<const String&> mSetLevel4Budget.SepJobTypeIds
ArrayOf<String>* mGetLevel4Budget.SepJobTypeIds
ArrayOf<const String&> mSetLevel4Budget.OctJobTypeIds
ArrayOf<String>* mGetLevel4Budget.OctJobTypeIds
ArrayOf<const String&> mSetLevel4Budget.NovJobTypeIds
ArrayOf<String>* mGetLevel4Budget.NovJobTypeIds
ArrayOf<const String&> mSetLevel4Budget.DecJobTypeIds
ArrayOf<String>* mGetLevel4Budget.DecJobTypeIds
ArrayOf<Double> mSetLevel4Budget.JanCostsJobs
ArrayOf<Double>* mGetLevel4Budget.JanCostsJobs
ArrayOf<Double> mSetLevel4Budget.FebCostsJobs
ArrayOf<Double>* mGetLevel4Budget.FebCostsJobs
ArrayOf<Double> mSetLevel4Budget.MarCostsJobs
ArrayOf<Double>* mGetLevel4Budget.MarCostsJobs
ArrayOf<Double> mSetLevel4Budget.AprCostsJobs
ArrayOf<Double>* mGetLevel4Budget.AprCostsJobs
ArrayOf<Double> mSetLevel4Budget.MayCostsJobs
ArrayOf<Double>* mGetLevel4Budget.MayCostsJobs
ArrayOf<Double> mSetLevel4Budget.JunCostsJobs
ArrayOf<Double>* mGetLevel4Budget.JunCostsJobs
ArrayOf<Double> mSetLevel4Budget.JulCostsJobs
ArrayOf<Double>* mGetLevel4Budget.JulCostsJobs
ArrayOf<Double> mSetLevel4Budget.AugCostsJobs
ArrayOf<Double>* mGetLevel4Budget.AugCostsJobs
ArrayOf<Double> mSetLevel4Budget.SepCostsJobs
ArrayOf<Double>* mGetLevel4Budget.SepCostsJobs
ArrayOf<Double> mSetLevel4Budget.OctCostsJobs
ArrayOf<Double>* mGetLevel4Budget.OctCostsJobs
ArrayOf<Double> mSetLevel4Budget.NovCostsJobs
ArrayOf<Double>* mGetLevel4Budget.NovCostsJobs
ArrayOf<Double> mSetLevel4Budget.DecCostsJobs
ArrayOf<Double>* mGetLevel4Budget.DecCostsJobs
ArrayOf<const String&> mSetLevel4Budget.JanServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.JanServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget.FebServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.FebServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget.MarServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.MarServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget.AprServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.AprServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget.MayServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.MayServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget.JunServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.JunServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget.JulServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.JulServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget.AugServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.AugServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget.SepServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.SepServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget.OctServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.OctServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget.NovServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.NovServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget.DecServiceTypeIds
ArrayOf<String>* mGetLevel4Budget.DecServiceTypeIds
ArrayOf<Double> mSetLevel4Budget.JanCostsServices
ArrayOf<Double>* mGetLevel4Budget.JanCostsServices
ArrayOf<Double> mSetLevel4Budget.FebCostsServices
ArrayOf<Double>* mGetLevel4Budget.FebCostsServices
ArrayOf<Double> mSetLevel4Budget.MarCostsServices
ArrayOf<Double>* mGetLevel4Budget.MarCostsServices
ArrayOf<Double> mSetLevel4Budget.AprCostsServices
ArrayOf<Double>* mGetLevel4Budget.AprCostsServices
ArrayOf<Double> mSetLevel4Budget.MayCostsServices
ArrayOf<Double>* mGetLevel4Budget.MayCostsServices
ArrayOf<Double> mSetLevel4Budget.JunCostsServices
ArrayOf<Double>* mGetLevel4Budget.JunCostsServices
ArrayOf<Double> mSetLevel4Budget.JulCostsServices
ArrayOf<Double>* mGetLevel4Budget.JulCostsServices
ArrayOf<Double> mSetLevel4Budget.AugCostsServices
ArrayOf<Double>* mGetLevel4Budget.AugCostsServices
ArrayOf<Double> mSetLevel4Budget.SepCostsServices
ArrayOf<Double>* mGetLevel4Budget.SepCostsServices
ArrayOf<Double> mSetLevel4Budget.OctCostsServices
ArrayOf<Double>* mGetLevel4Budget.OctCostsServices
ArrayOf<Double> mSetLevel4Budget.NovCostsServices
ArrayOf<Double>* mGetLevel4Budget.NovCostsServices
ArrayOf<Double> mSetLevel4Budget.DecCostsServices
ArrayOf<Double>* mGetLevel4Budget.DecCostsServices
ArrayOf<Double> mSetLevel4Budget.TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel4Budget.TwelveTotalMonthlyCosts
Double mSetLevel4Budget.YearCostThisBudgetId
Double* mGetLevel4Budget.YearCostThisBudgetId
Double mSetLevel4Budget.NetProfitLossThisLevel4BudgetId
Double* mGetLevel4Budget.NetProfitLossThisLevel4BudgetId
Int32 mSetLevel4Budget.LinkingInternalBudgetNum
Int32* mGetLevel4Budget.LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel4Budget.CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel4Budget.CustomerIds
ArrayOf<CProperty.property> mSetLevel4Budget.PropertyIds
ArrayOf<CProperty.property>* mGetLevel4Budget.PropertyIds
ArrayOf<CProperty.program> mSetLevel4Budget.ProgramIds
ArrayOf<CProperty.program>* mGetLevel4Budget.ProgramIds
ArrayOf<CProperty.project> mSetLevel4Budget.ProjectIds
ArrayOf<CProperty.project>* mGetLevel4Budget.ProjectIds
CFinance.level5Budget mSetLevel4Budget.LinkedToLevel5BudgetId
CFinance.level5Budget* mGetLevel4Budget.LinkedToLevel5BudgetId
CFinance.masterSetRegister mSetLevel4Budget.MasterSetId
CFinance.masterSetRegister* mGetLevel4Budget.MasterSetId
CRegister.businessChannelOwner mSetLevel4Budget.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel4Budget.BusinessChannelOwnerId
const String& mSetLevel5Budget.Level5BudgetId
String* mGetLevel5Budget.Level5BudgetId
const String& mSetLevel5Budget.BudgetName
String* mGetLevel5Budget.BudgetName
Int32 mSetLevel5Budget.EndYearMonthyyyymm
Int32* mGetLevel5Budget.EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel5Budget.TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel5Budget.TwelveMonthSequence
ArrayOf<const String&> mSetLevel5Budget.IncomeItemTypeIds
ArrayOf<String>* mGetLevel5Budget.IncomeItemTypeIds
ArrayOf<Double> mSetLevel5Budget.JanRevenues
ArrayOf<Double>* mGetLevel5Budget.JanRevenues
ArrayOf<Double> mSetLevel5Budget.FebRevenues
ArrayOf<Double>* mGetLevel5Budget.FebRevenues
ArrayOf<Double> mSetLevel5Budget.MarRevenues
ArrayOf<Double>* mGetLevel5Budget.MarRevenues
ArrayOf<Double> mSetLevel5Budget.AprRevenues
ArrayOf<Double>* mGetLevel5Budget.AprRevenues
ArrayOf<Double> mSetLevel5Budget.MayRevenues
ArrayOf<Double>* mGetLevel5Budget.MayRevenues
ArrayOf<Double> mSetLevel5Budget.JunRevenues
ArrayOf<Double>* mGetLevel5Budget.JunRevenues
ArrayOf<Double> mSetLevel5Budget.JulRevenues
ArrayOf<Double>* mGetLevel5Budget.JulRevenues
ArrayOf<Double> mSetLevel5Budget.AugRevenues
ArrayOf<Double>* mGetLevel5Budget.AugRevenues
ArrayOf<Double> mSetLevel5Budget.SepRevenues
ArrayOf<Double>* mGetLevel5Budget.SepRevenues
ArrayOf<Double> mSetLevel5Budget.OctRevenues
ArrayOf<Double>* mGetLevel5Budget.OctRevenues
ArrayOf<Double> mSetLevel5Budget.NovRevenues
ArrayOf<Double>* mGetLevel5Budget.NovRevenues
ArrayOf<Double> mSetLevel5Budget.DecRevenues
ArrayOf<Double>* mGetLevel5Budget.DecRevenues
ArrayOf<const String&> mSetLevel5Budget.JanItemTypeIds
ArrayOf<String>* mGetLevel5Budget.JanItemTypeIds
ArrayOf<const String&> mSetLevel5Budget.FebItemTypeIds
ArrayOf<String>* mGetLevel5Budget.FebItemTypeIds
ArrayOf<const String&> mSetLevel5Budget.MarItemTypeIds
ArrayOf<String>* mGetLevel5Budget.MarItemTypeIds
ArrayOf<const String&> mSetLevel5Budget.AprItemTypeIds
ArrayOf<String>* mGetLevel5Budget.AprItemTypeIds
ArrayOf<const String&> mSetLevel5Budget.MayItemTypeIds
ArrayOf<String>* mGetLevel5Budget.MayItemTypeIds
ArrayOf<const String&> mSetLevel5Budget.JunItemTypeIds
ArrayOf<String>* mGetLevel5Budget.JunItemTypeIds
ArrayOf<const String&> mSetLevel5Budget.JulItemTypeIds
ArrayOf<String>* mGetLevel5Budget.JulItemTypeIds
ArrayOf<const String&> mSetLevel5Budget.AugItemTypeIds
ArrayOf<String>* mGetLevel5Budget.AugItemTypeIds
ArrayOf<const String&> mSetLevel5Budget.SepItemTypeIds
ArrayOf<String>* mGetLevel5Budget.SepItemTypeIds
ArrayOf<const String&> mSetLevel5Budget.OctItemTypeIds
ArrayOf<String>* mGetLevel5Budget.OctItemTypeIds
ArrayOf<const String&> mSetLevel5Budget.NovItemTypeIds
ArrayOf<String>* mGetLevel5Budget.NovItemTypeIds
ArrayOf<const String&> mSetLevel5Budget.DecItemTypeIds
ArrayOf<String>* mGetLevel5Budget.DecItemTypeIds
ArrayOf<Double> mSetLevel5Budget.JanCostsItems
ArrayOf<Double>* mGetLevel5Budget.JanCostsItems
ArrayOf<Double> mSetLevel5Budget.FebCostsItems
ArrayOf<Double>* mGetLevel5Budget.FebCostsItems
ArrayOf<Double> mSetLevel5Budget.MarCostsItems
ArrayOf<Double>* mGetLevel5Budget.MarCostsItems
ArrayOf<Double> mSetLevel5Budget.AprCostsItems
ArrayOf<Double>* mGetLevel5Budget.AprCostsItems
ArrayOf<Double> mSetLevel5Budget.MayCostsItems
ArrayOf<Double>* mGetLevel5Budget.MayCostsItems
ArrayOf<Double> mSetLevel5Budget.JunCostsItems
ArrayOf<Double>* mGetLevel5Budget.JunCostsItems
ArrayOf<Double> mSetLevel5Budget.JulCostsItems
ArrayOf<Double>* mGetLevel5Budget.JulCostsItems
ArrayOf<Double> mSetLevel5Budget.AugCostsItems
ArrayOf<Double>* mGetLevel5Budget.AugCostsItems
ArrayOf<Double> mSetLevel5Budget.SepCostsItems
ArrayOf<Double>* mGetLevel5Budget.SepCostsItems
ArrayOf<Double> mSetLevel5Budget.OctCostsItems
ArrayOf<Double>* mGetLevel5Budget.OctCostsItems
ArrayOf<Double> mSetLevel5Budget.NovCostsItems
ArrayOf<Double>* mGetLevel5Budget.NovCostsItems
ArrayOf<Double> mSetLevel5Budget.DecCostsItems
ArrayOf<Double>* mGetLevel5Budget.DecCostsItems
ArrayOf<const String&> mSetLevel5Budget.JanJobTypeIds
ArrayOf<String>* mGetLevel5Budget.JanJobTypeIds
ArrayOf<const String&> mSetLevel5Budget.FebJobTypeIds
ArrayOf<String>* mGetLevel5Budget.FebJobTypeIds
ArrayOf<const String&> mSetLevel5Budget.MarJobTypeIds
ArrayOf<String>* mGetLevel5Budget.MarJobTypeIds
ArrayOf<const String&> mSetLevel5Budget.AprJobTypeIds
ArrayOf<String>* mGetLevel5Budget.AprJobTypeIds
ArrayOf<const String&> mSetLevel5Budget.MayJobTypeIds
ArrayOf<String>* mGetLevel5Budget.MayJobTypeIds
ArrayOf<const String&> mSetLevel5Budget.JunJobTypeIds
ArrayOf<String>* mGetLevel5Budget.JunJobTypeIds
ArrayOf<const String&> mSetLevel5Budget.JulJobTypeIds
ArrayOf<String>* mGetLevel5Budget.JulJobTypeIds
ArrayOf<const String&> mSetLevel5Budget.AugJobTypeIds
ArrayOf<String>* mGetLevel5Budget.AugJobTypeIds
ArrayOf<const String&> mSetLevel5Budget.SepJobTypeIds
ArrayOf<String>* mGetLevel5Budget.SepJobTypeIds
ArrayOf<const String&> mSetLevel5Budget.OctJobTypeIds
ArrayOf<String>* mGetLevel5Budget.OctJobTypeIds
ArrayOf<const String&> mSetLevel5Budget.NovJobTypeIds
ArrayOf<String>* mGetLevel5Budget.NovJobTypeIds
ArrayOf<const String&> mSetLevel5Budget.DecJobTypeIds
ArrayOf<String>* mGetLevel5Budget.DecJobTypeIds
ArrayOf<Double> mSetLevel5Budget.JanCostsJobs
ArrayOf<Double>* mGetLevel5Budget.JanCostsJobs
ArrayOf<Double> mSetLevel5Budget.FebCostsJobs
ArrayOf<Double>* mGetLevel5Budget.FebCostsJobs
ArrayOf<Double> mSetLevel5Budget.MarCostsJobs
ArrayOf<Double>* mGetLevel5Budget.MarCostsJobs
ArrayOf<Double> mSetLevel5Budget.AprCostsJobs
ArrayOf<Double>* mGetLevel5Budget.AprCostsJobs
ArrayOf<Double> mSetLevel5Budget.MayCostsJobs
ArrayOf<Double>* mGetLevel5Budget.MayCostsJobs
ArrayOf<Double> mSetLevel5Budget.JunCostsJobs
ArrayOf<Double>* mGetLevel5Budget.JunCostsJobs
ArrayOf<Double> mSetLevel5Budget.JulCostsJobs
ArrayOf<Double>* mGetLevel5Budget.JulCostsJobs
ArrayOf<Double> mSetLevel5Budget.AugCostsJobs
ArrayOf<Double>* mGetLevel5Budget.AugCostsJobs
ArrayOf<Double> mSetLevel5Budget.SepCostsJobs
ArrayOf<Double>* mGetLevel5Budget.SepCostsJobs
ArrayOf<Double> mSetLevel5Budget.OctCostsJobs
ArrayOf<Double>* mGetLevel5Budget.OctCostsJobs
ArrayOf<Double> mSetLevel5Budget.NovCostsJobs
ArrayOf<Double>* mGetLevel5Budget.NovCostsJobs
ArrayOf<Double> mSetLevel5Budget.DecCostsJobs
ArrayOf<Double>* mGetLevel5Budget.DecCostsJobs
ArrayOf<const String&> mSetLevel5Budget.JanServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.JanServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget.FebServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.FebServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget.MarServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.MarServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget.AprServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.AprServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget.MayServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.MayServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget.JunServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.JunServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget.JulServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.JulServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget.AugServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.AugServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget.SepServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.SepServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget.OctServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.OctServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget.NovServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.NovServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget.DecServiceTypeIds
ArrayOf<String>* mGetLevel5Budget.DecServiceTypeIds
ArrayOf<Double> mSetLevel5Budget.JanCostsServices
ArrayOf<Double>* mGetLevel5Budget.JanCostsServices
ArrayOf<Double> mSetLevel5Budget.FebCostsServices
ArrayOf<Double>* mGetLevel5Budget.FebCostsServices
ArrayOf<Double> mSetLevel5Budget.MarCostsServices
ArrayOf<Double>* mGetLevel5Budget.MarCostsServices
ArrayOf<Double> mSetLevel5Budget.AprCostsServices
ArrayOf<Double>* mGetLevel5Budget.AprCostsServices
ArrayOf<Double> mSetLevel5Budget.MayCostsServices
ArrayOf<Double>* mGetLevel5Budget.MayCostsServices
ArrayOf<Double> mSetLevel5Budget.JunCostsServices
ArrayOf<Double>* mGetLevel5Budget.JunCostsServices
ArrayOf<Double> mSetLevel5Budget.JulCostsServices
ArrayOf<Double>* mGetLevel5Budget.JulCostsServices
ArrayOf<Double> mSetLevel5Budget.AugCostsServices
ArrayOf<Double>* mGetLevel5Budget.AugCostsServices
ArrayOf<Double> mSetLevel5Budget.SepCostsServices
ArrayOf<Double>* mGetLevel5Budget.SepCostsServices
ArrayOf<Double> mSetLevel5Budget.OctCostsServices
ArrayOf<Double>* mGetLevel5Budget.OctCostsServices
ArrayOf<Double> mSetLevel5Budget.NovCostsServices
ArrayOf<Double>* mGetLevel5Budget.NovCostsServices
ArrayOf<Double> mSetLevel5Budget.DecCostsServices
ArrayOf<Double>* mGetLevel5Budget.DecCostsServices
ArrayOf<Double> mSetLevel5Budget.TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel5Budget.TwelveTotalMonthlyCosts
Double mSetLevel5Budget.YearCostThisBudgetId
Double* mGetLevel5Budget.YearCostThisBudgetId
Double mSetLevel5Budget.NetProfitLossThisLevel5BudgetId
Double* mGetLevel5Budget.NetProfitLossThisLevel5BudgetId
Int32 mSetLevel5Budget.LinkingInternalBudgetNum
Int32* mGetLevel5Budget.LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel5Budget.CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel5Budget.CustomerIds
ArrayOf<CProperty.property> mSetLevel5Budget.PropertyIds
ArrayOf<CProperty.property>* mGetLevel5Budget.PropertyIds
ArrayOf<CProperty.program> mSetLevel5Budget.ProgramIds
ArrayOf<CProperty.program>* mGetLevel5Budget.ProgramIds
ArrayOf<CProperty.project> mSetLevel5Budget.ProjectIds
ArrayOf<CProperty.project>* mGetLevel5Budget.ProjectIds
CFinance.level6Budget mSetLevel5Budget.LinkedToLevel6BudgetId
CFinance.level6Budget* mGetLevel5Budget.LinkedToLevel6BudgetId
CFinance.masterSetRegister mSetLevel5Budget.MasterSetId
CFinance.masterSetRegister* mGetLevel5Budget.MasterSetId
CRegister.businessChannelOwner mSetLevel5Budget.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel5Budget.BusinessChannelOwnerId
const String& mSetLevel6Budget.Level6BudgetId
String* mGetLevel6Budget.Level6BudgetId
const String& mSetLevel6Budget.BudgetName
String* mGetLevel6Budget.BudgetName
Int32 mSetLevel6Budget.EndYearMonthyyyymm
Int32* mGetLevel6Budget.EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel6Budget.TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel6Budget.TwelveMonthSequence
ArrayOf<const String&> mSetLevel6Budget.IncomeItemTypeIds
ArrayOf<String>* mGetLevel6Budget.IncomeItemTypeIds
ArrayOf<Double> mSetLevel6Budget.JanRevenues
ArrayOf<Double>* mGetLevel6Budget.JanRevenues
ArrayOf<Double> mSetLevel6Budget.FebRevenues
ArrayOf<Double>* mGetLevel6Budget.FebRevenues
ArrayOf<Double> mSetLevel6Budget.MarRevenues
ArrayOf<Double>* mGetLevel6Budget.MarRevenues
ArrayOf<Double> mSetLevel6Budget.AprRevenues
ArrayOf<Double>* mGetLevel6Budget.AprRevenues
ArrayOf<Double> mSetLevel6Budget.MayRevenues
ArrayOf<Double>* mGetLevel6Budget.MayRevenues
ArrayOf<Double> mSetLevel6Budget.JunRevenues
ArrayOf<Double>* mGetLevel6Budget.JunRevenues
ArrayOf<Double> mSetLevel6Budget.JulRevenues
ArrayOf<Double>* mGetLevel6Budget.JulRevenues
ArrayOf<Double> mSetLevel6Budget.AugRevenues
ArrayOf<Double>* mGetLevel6Budget.AugRevenues
ArrayOf<Double> mSetLevel6Budget.SepRevenues
ArrayOf<Double>* mGetLevel6Budget.SepRevenues
ArrayOf<Double> mSetLevel6Budget.OctRevenues
ArrayOf<Double>* mGetLevel6Budget.OctRevenues
ArrayOf<Double> mSetLevel6Budget.NovRevenues
ArrayOf<Double>* mGetLevel6Budget.NovRevenues
ArrayOf<Double> mSetLevel6Budget.DecRevenues
ArrayOf<Double>* mGetLevel6Budget.DecRevenues
ArrayOf<const String&> mSetLevel6Budget.JanItemTypeIds
ArrayOf<String>* mGetLevel6Budget.JanItemTypeIds
ArrayOf<const String&> mSetLevel6Budget.FebItemTypeIds
ArrayOf<String>* mGetLevel6Budget.FebItemTypeIds
ArrayOf<const String&> mSetLevel6Budget.MarItemTypeIds
ArrayOf<String>* mGetLevel6Budget.MarItemTypeIds
ArrayOf<const String&> mSetLevel6Budget.AprItemTypeIds
ArrayOf<String>* mGetLevel6Budget.AprItemTypeIds
ArrayOf<const String&> mSetLevel6Budget.MayItemTypeIds
ArrayOf<String>* mGetLevel6Budget.MayItemTypeIds
ArrayOf<const String&> mSetLevel6Budget.JunItemTypeIds
ArrayOf<String>* mGetLevel6Budget.JunItemTypeIds
ArrayOf<const String&> mSetLevel6Budget.JulItemTypeIds
ArrayOf<String>* mGetLevel6Budget.JulItemTypeIds
ArrayOf<const String&> mSetLevel6Budget.AugItemTypeIds
ArrayOf<String>* mGetLevel6Budget.AugItemTypeIds
ArrayOf<const String&> mSetLevel6Budget.SepItemTypeIds
ArrayOf<String>* mGetLevel6Budget.SepItemTypeIds
ArrayOf<const String&> mSetLevel6Budget.OctItemTypeIds
ArrayOf<String>* mGetLevel6Budget.OctItemTypeIds
ArrayOf<const String&> mSetLevel6Budget.NovItemTypeIds
ArrayOf<String>* mGetLevel6Budget.NovItemTypeIds
ArrayOf<const String&> mSetLevel6Budget.DecItemTypeIds
ArrayOf<String>* mGetLevel6Budget.DecItemTypeIds
ArrayOf<Double> mSetLevel6Budget.JanCostsItems
ArrayOf<Double>* mGetLevel6Budget.JanCostsItems
ArrayOf<Double> mSetLevel6Budget.FebCostsItems
ArrayOf<Double>* mGetLevel6Budget.FebCostsItems
ArrayOf<Double> mSetLevel6Budget.MarCostsItems
ArrayOf<Double>* mGetLevel6Budget.MarCostsItems
ArrayOf<Double> mSetLevel6Budget.AprCostsItems
ArrayOf<Double>* mGetLevel6Budget.AprCostsItems
ArrayOf<Double> mSetLevel6Budget.MayCostsItems
ArrayOf<Double>* mGetLevel6Budget.MayCostsItems
ArrayOf<Double> mSetLevel6Budget.JunCostsItems
ArrayOf<Double>* mGetLevel6Budget.JunCostsItems
ArrayOf<Double> mSetLevel6Budget.JulCostsItems
ArrayOf<Double>* mGetLevel6Budget.JulCostsItems
ArrayOf<Double> mSetLevel6Budget.AugCostsItems
ArrayOf<Double>* mGetLevel6Budget.AugCostsItems
ArrayOf<Double> mSetLevel6Budget.SepCostsItems
ArrayOf<Double>* mGetLevel6Budget.SepCostsItems
ArrayOf<Double> mSetLevel6Budget.OctCostsItems
ArrayOf<Double>* mGetLevel6Budget.OctCostsItems
ArrayOf<Double> mSetLevel6Budget.NovCostsItems
ArrayOf<Double>* mGetLevel6Budget.NovCostsItems
ArrayOf<Double> mSetLevel6Budget.DecCostsItems
ArrayOf<Double>* mGetLevel6Budget.DecCostsItems
ArrayOf<const String&> mSetLevel6Budget.JanJobTypeIds
ArrayOf<String>* mGetLevel6Budget.JanJobTypeIds
ArrayOf<const String&> mSetLevel6Budget.FebJobTypeIds
ArrayOf<String>* mGetLevel6Budget.FebJobTypeIds
ArrayOf<const String&> mSetLevel6Budget.MarJobTypeIds
ArrayOf<String>* mGetLevel6Budget.MarJobTypeIds
ArrayOf<const String&> mSetLevel6Budget.AprJobTypeIds
ArrayOf<String>* mGetLevel6Budget.AprJobTypeIds
ArrayOf<const String&> mSetLevel6Budget.MayJobTypeIds
ArrayOf<String>* mGetLevel6Budget.MayJobTypeIds
ArrayOf<const String&> mSetLevel6Budget.JunJobTypeIds
ArrayOf<String>* mGetLevel6Budget.JunJobTypeIds
ArrayOf<const String&> mSetLevel6Budget.JulJobTypeIds
ArrayOf<String>* mGetLevel6Budget.JulJobTypeIds
ArrayOf<const String&> mSetLevel6Budget.AugJobTypeIds
ArrayOf<String>* mGetLevel6Budget.AugJobTypeIds
ArrayOf<const String&> mSetLevel6Budget.SepJobTypeIds
ArrayOf<String>* mGetLevel6Budget.SepJobTypeIds
ArrayOf<const String&> mSetLevel6Budget.OctJobTypeIds
ArrayOf<String>* mGetLevel6Budget.OctJobTypeIds
ArrayOf<const String&> mSetLevel6Budget.NovJobTypeIds
ArrayOf<String>* mGetLevel6Budget.NovJobTypeIds
ArrayOf<const String&> mSetLevel6Budget.DecJobTypeIds
ArrayOf<String>* mGetLevel6Budget.DecJobTypeIds
ArrayOf<Double> mSetLevel6Budget.JanCostsJobs
ArrayOf<Double>* mGetLevel6Budget.JanCostsJobs
ArrayOf<Double> mSetLevel6Budget.FebCostsJobs
ArrayOf<Double>* mGetLevel6Budget.FebCostsJobs
ArrayOf<Double> mSetLevel6Budget.MarCostsJobs
ArrayOf<Double>* mGetLevel6Budget.MarCostsJobs
ArrayOf<Double> mSetLevel6Budget.AprCostsJobs
ArrayOf<Double>* mGetLevel6Budget.AprCostsJobs
ArrayOf<Double> mSetLevel6Budget.MayCostsJobs
ArrayOf<Double>* mGetLevel6Budget.MayCostsJobs
ArrayOf<Double> mSetLevel6Budget.JunCostsJobs
ArrayOf<Double>* mGetLevel6Budget.JunCostsJobs
ArrayOf<Double> mSetLevel6Budget.JulCostsJobs
ArrayOf<Double>* mGetLevel6Budget.JulCostsJobs
ArrayOf<Double> mSetLevel6Budget.AugCostsJobs
ArrayOf<Double>* mGetLevel6Budget.AugCostsJobs
ArrayOf<Double> mSetLevel6Budget.SepCostsJobs
ArrayOf<Double>* mGetLevel6Budget.SepCostsJobs
ArrayOf<Double> mSetLevel6Budget.OctCostsJobs
ArrayOf<Double>* mGetLevel6Budget.OctCostsJobs
ArrayOf<Double> mSetLevel6Budget.NovCostsJobs
ArrayOf<Double>* mGetLevel6Budget.NovCostsJobs
ArrayOf<Double> mSetLevel6Budget.DecCostsJobs
ArrayOf<Double>* mGetLevel6Budget.DecCostsJobs
ArrayOf<const String&> mSetLevel6Budget.JanServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.JanServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget.FebServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.FebServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget.MarServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.MarServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget.AprServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.AprServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget.MayServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.MayServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget.JunServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.JunServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget.JulServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.JulServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget.AugServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.AugServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget.SepServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.SepServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget.OctServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.OctServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget.NovServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.NovServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget.DecServiceTypeIds
ArrayOf<String>* mGetLevel6Budget.DecServiceTypeIds
ArrayOf<Double> mSetLevel6Budget.JanCostsServices
ArrayOf<Double>* mGetLevel6Budget.JanCostsServices
ArrayOf<Double> mSetLevel6Budget.FebCostsServices
ArrayOf<Double>* mGetLevel6Budget.FebCostsServices
ArrayOf<Double> mSetLevel6Budget.MarCostsServices
ArrayOf<Double>* mGetLevel6Budget.MarCostsServices
ArrayOf<Double> mSetLevel6Budget.AprCostsServices
ArrayOf<Double>* mGetLevel6Budget.AprCostsServices
ArrayOf<Double> mSetLevel6Budget.MayCostsServices
ArrayOf<Double>* mGetLevel6Budget.MayCostsServices
ArrayOf<Double> mSetLevel6Budget.JunCostsServices
ArrayOf<Double>* mGetLevel6Budget.JunCostsServices
ArrayOf<Double> mSetLevel6Budget.JulCostsServices
ArrayOf<Double>* mGetLevel6Budget.JulCostsServices
ArrayOf<Double> mSetLevel6Budget.AugCostsServices
ArrayOf<Double>* mGetLevel6Budget.AugCostsServices
ArrayOf<Double> mSetLevel6Budget.SepCostsServices
ArrayOf<Double>* mGetLevel6Budget.SepCostsServices
ArrayOf<Double> mSetLevel6Budget.OctCostsServices
ArrayOf<Double>* mGetLevel6Budget.OctCostsServices
ArrayOf<Double> mSetLevel6Budget.NovCostsServices
ArrayOf<Double>* mGetLevel6Budget.NovCostsServices
ArrayOf<Double> mSetLevel6Budget.DecCostsServices
ArrayOf<Double>* mGetLevel6Budget.DecCostsServices
ArrayOf<Double> mSetLevel6Budget.TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel6Budget.TwelveTotalMonthlyCosts
Double mSetLevel6Budget.YearCostThisBudgetId
Double* mGetLevel6Budget.YearCostThisBudgetId
Double mSetLevel6Budget.NetProfitLossThisLevel6BudgetId
Double* mGetLevel6Budget.NetProfitLossThisLevel6BudgetId
Int32 mSetLevel6Budget.LinkingInternalBudgetNum
Int32* mGetLevel6Budget.LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel6Budget.CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel6Budget.CustomerIds
ArrayOf<CProperty.property> mSetLevel6Budget.PropertyIds
ArrayOf<CProperty.property>* mGetLevel6Budget.PropertyIds
ArrayOf<CProperty.program> mSetLevel6Budget.ProgramIds
ArrayOf<CProperty.program>* mGetLevel6Budget.ProgramIds
ArrayOf<CProperty.project> mSetLevel6Budget.ProjectIds
ArrayOf<CProperty.project>* mGetLevel6Budget.ProjectIds
CFinance.hyperBudget mSetLevel6Budget.LinkedToHyperBudgetId
CFinance.hyperBudget* mGetLevel6Budget.LinkedToHyperBudgetId
CFinance.masterSetRegister mSetLevel6Budget.MasterSetId
CFinance.masterSetRegister* mGetLevel6Budget.MasterSetId
CRegister.businessChannelOwner mSetLevel6Budget.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel6Budget.BusinessChannelOwnerId
const String& mSetHyperBudget.HyperBudgetId
String* mGetHyperBudget.HyperBudgetId
const String& mSetHyperBudget.BudgetName
String* mGetHyperBudget.BudgetName
Int32 mSetHyperBudget.EndYearMonthyyyymm
Int32* mGetHyperBudget.EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetHyperBudget.TwelveMonthSequence
ArrayOf<CHelper.month>* mGetHyperBudget.TwelveMonthSequence
ArrayOf<const String&> mSetHyperBudget.IncomeItemTypeIds
ArrayOf<String>* mGetHyperBudget.IncomeItemTypeIds
ArrayOf<Double> mSetHyperBudget.JanRevenues
ArrayOf<Double>* mGetHyperBudget.JanRevenues
ArrayOf<Double> mSetHyperBudget.FebRevenues
ArrayOf<Double>* mGetHyperBudget.FebRevenues
ArrayOf<Double> mSetHyperBudget.MarRevenues
ArrayOf<Double>* mGetHyperBudget.MarRevenues
ArrayOf<Double> mSetHyperBudget.AprRevenues
ArrayOf<Double>* mGetHyperBudget.AprRevenues
ArrayOf<Double> mSetHyperBudget.MayRevenues
ArrayOf<Double>* mGetHyperBudget.MayRevenues
ArrayOf<Double> mSetHyperBudget.JunRevenues
ArrayOf<Double>* mGetHyperBudget.JunRevenues
ArrayOf<Double> mSetHyperBudget.JulRevenues
ArrayOf<Double>* mGetHyperBudget.JulRevenues
ArrayOf<Double> mSetHyperBudget.AugRevenues
ArrayOf<Double>* mGetHyperBudget.AugRevenues
ArrayOf<Double> mSetHyperBudget.SepRevenues
ArrayOf<Double>* mGetHyperBudget.SepRevenues
ArrayOf<Double> mSetHyperBudget.OctRevenues
ArrayOf<Double>* mGetHyperBudget.OctRevenues
ArrayOf<Double> mSetHyperBudget.NovRevenues
ArrayOf<Double>* mGetHyperBudget.NovRevenues
ArrayOf<Double> mSetHyperBudget.DecRevenues
ArrayOf<Double>* mGetHyperBudget.DecRevenues
ArrayOf<const String&> mSetHyperBudget.JanItemTypeIds
ArrayOf<String>* mGetHyperBudget.JanItemTypeIds
ArrayOf<const String&> mSetHyperBudget.FebItemTypeIds
ArrayOf<String>* mGetHyperBudget.FebItemTypeIds
ArrayOf<const String&> mSetHyperBudget.MarItemTypeIds
ArrayOf<String>* mGetHyperBudget.MarItemTypeIds
ArrayOf<const String&> mSetHyperBudget.AprItemTypeIds
ArrayOf<String>* mGetHyperBudget.AprItemTypeIds
ArrayOf<const String&> mSetHyperBudget.MayItemTypeIds
ArrayOf<String>* mGetHyperBudget.MayItemTypeIds
ArrayOf<const String&> mSetHyperBudget.JunItemTypeIds
ArrayOf<String>* mGetHyperBudget.JunItemTypeIds
ArrayOf<const String&> mSetHyperBudget.JulItemTypeIds
ArrayOf<String>* mGetHyperBudget.JulItemTypeIds
ArrayOf<const String&> mSetHyperBudget.AugItemTypeIds
ArrayOf<String>* mGetHyperBudget.AugItemTypeIds
ArrayOf<const String&> mSetHyperBudget.SepItemTypeIds
ArrayOf<String>* mGetHyperBudget.SepItemTypeIds
ArrayOf<const String&> mSetHyperBudget.OctItemTypeIds
ArrayOf<String>* mGetHyperBudget.OctItemTypeIds
ArrayOf<const String&> mSetHyperBudget.NovItemTypeIds
ArrayOf<String>* mGetHyperBudget.NovItemTypeIds
ArrayOf<const String&> mSetHyperBudget.DecItemTypeIds
ArrayOf<String>* mGetHyperBudget.DecItemTypeIds
ArrayOf<Double> mSetHyperBudget.JanCostsItems
ArrayOf<Double>* mGetHyperBudget.JanCostsItems
ArrayOf<Double> mSetHyperBudget.FebCostsItems
ArrayOf<Double>* mGetHyperBudget.FebCostsItems
ArrayOf<Double> mSetHyperBudget.MarCostsItems
ArrayOf<Double>* mGetHyperBudget.MarCostsItems
ArrayOf<Double> mSetHyperBudget.AprCostsItems
ArrayOf<Double>* mGetHyperBudget.AprCostsItems
ArrayOf<Double> mSetHyperBudget.MayCostsItems
ArrayOf<Double>* mGetHyperBudget.MayCostsItems
ArrayOf<Double> mSetHyperBudget.JunCostsItems
ArrayOf<Double>* mGetHyperBudget.JunCostsItems
ArrayOf<Double> mSetHyperBudget.JulCostsItems
ArrayOf<Double>* mGetHyperBudget.JulCostsItems
ArrayOf<Double> mSetHyperBudget.AugCostsItems
ArrayOf<Double>* mGetHyperBudget.AugCostsItems
ArrayOf<Double> mSetHyperBudget.SepCostsItems
ArrayOf<Double>* mGetHyperBudget.SepCostsItems
ArrayOf<Double> mSetHyperBudget.OctCostsItems
ArrayOf<Double>* mGetHyperBudget.OctCostsItems
ArrayOf<Double> mSetHyperBudget.NovCostsItems
ArrayOf<Double>* mGetHyperBudget.NovCostsItems
ArrayOf<Double> mSetHyperBudget.DecCostsItems
ArrayOf<Double>* mGetHyperBudget.DecCostsItems
ArrayOf<const String&> mSetHyperBudget.JanJobTypeIds
ArrayOf<String>* mGetHyperBudget.JanJobTypeIds
ArrayOf<const String&> mSetHyperBudget.FebJobTypeIds
ArrayOf<String>* mGetHyperBudget.FebJobTypeIds
ArrayOf<const String&> mSetHyperBudget.MarJobTypeIds
ArrayOf<String>* mGetHyperBudget.MarJobTypeIds
ArrayOf<const String&> mSetHyperBudget.AprJobTypeIds
ArrayOf<String>* mGetHyperBudget.AprJobTypeIds
ArrayOf<const String&> mSetHyperBudget.MayJobTypeIds
ArrayOf<String>* mGetHyperBudget.MayJobTypeIds
ArrayOf<const String&> mSetHyperBudget.JunJobTypeIds
ArrayOf<String>* mGetHyperBudget.JunJobTypeIds
ArrayOf<const String&> mSetHyperBudget.JulJobTypeIds
ArrayOf<String>* mGetHyperBudget.JulJobTypeIds
ArrayOf<const String&> mSetHyperBudget.AugJobTypeIds
ArrayOf<String>* mGetHyperBudget.AugJobTypeIds
ArrayOf<const String&> mSetHyperBudget.SepJobTypeIds
ArrayOf<String>* mGetHyperBudget.SepJobTypeIds
ArrayOf<const String&> mSetHyperBudget.OctJobTypeIds
ArrayOf<String>* mGetHyperBudget.OctJobTypeIds
ArrayOf<const String&> mSetHyperBudget.NovJobTypeIds
ArrayOf<String>* mGetHyperBudget.NovJobTypeIds
ArrayOf<const String&> mSetHyperBudget.DecJobTypeIds
ArrayOf<String>* mGetHyperBudget.DecJobTypeIds
ArrayOf<Double> mSetHyperBudget.JanCostsJobs
ArrayOf<Double>* mGetHyperBudget.JanCostsJobs
ArrayOf<Double> mSetHyperBudget.FebCostsJobs
ArrayOf<Double>* mGetHyperBudget.FebCostsJobs
ArrayOf<Double> mSetHyperBudget.MarCostsJobs
ArrayOf<Double>* mGetHyperBudget.MarCostsJobs
ArrayOf<Double> mSetHyperBudget.AprCostsJobs
ArrayOf<Double>* mGetHyperBudget.AprCostsJobs
ArrayOf<Double> mSetHyperBudget.MayCostsJobs
ArrayOf<Double>* mGetHyperBudget.MayCostsJobs
ArrayOf<Double> mSetHyperBudget.JunCostsJobs
ArrayOf<Double>* mGetHyperBudget.JunCostsJobs
ArrayOf<Double> mSetHyperBudget.JulCostsJobs
ArrayOf<Double>* mGetHyperBudget.JulCostsJobs
ArrayOf<Double> mSetHyperBudget.AugCostsJobs
ArrayOf<Double>* mGetHyperBudget.AugCostsJobs
ArrayOf<Double> mSetHyperBudget.SepCostsJobs
ArrayOf<Double>* mGetHyperBudget.SepCostsJobs
ArrayOf<Double> mSetHyperBudget.OctCostsJobs
ArrayOf<Double>* mGetHyperBudget.OctCostsJobs
ArrayOf<Double> mSetHyperBudget.NovCostsJobs
ArrayOf<Double>* mGetHyperBudget.NovCostsJobs
ArrayOf<Double> mSetHyperBudget.DecCostsJobs
ArrayOf<Double>* mGetHyperBudget.DecCostsJobs
ArrayOf<const String&> mSetHyperBudget.JanServiceTypeIds
ArrayOf<String>* mGetHyperBudget.JanServiceTypeIds
ArrayOf<const String&> mSetHyperBudget.FebServiceTypeIds
ArrayOf<String>* mGetHyperBudget.FebServiceTypeIds
ArrayOf<const String&> mSetHyperBudget.MarServiceTypeIds
ArrayOf<String>* mGetHyperBudget.MarServiceTypeIds
ArrayOf<const String&> mSetHyperBudget.AprServiceTypeIds
ArrayOf<String>* mGetHyperBudget.AprServiceTypeIds
ArrayOf<const String&> mSetHyperBudget.MayServiceTypeIds
ArrayOf<String>* mGetHyperBudget.MayServiceTypeIds
ArrayOf<const String&> mSetHyperBudget.JunServiceTypeIds
ArrayOf<String>* mGetHyperBudget.JunServiceTypeIds
ArrayOf<const String&> mSetHyperBudget.JulServiceTypeIds
ArrayOf<String>* mGetHyperBudget.JulServiceTypeIds
ArrayOf<const String&> mSetHyperBudget.AugServiceTypeIds
ArrayOf<String>* mGetHyperBudget.AugServiceTypeIds
ArrayOf<const String&> mSetHyperBudget.SepServiceTypeIds
ArrayOf<String>* mGetHyperBudget.SepServiceTypeIds
ArrayOf<const String&> mSetHyperBudget.OctServiceTypeIds
ArrayOf<String>* mGetHyperBudget.OctServiceTypeIds
ArrayOf<const String&> mSetHyperBudget.NovServiceTypeIds
ArrayOf<String>* mGetHyperBudget.NovServiceTypeIds
ArrayOf<const String&> mSetHyperBudget.DecServiceTypeIds
ArrayOf<String>* mGetHyperBudget.DecServiceTypeIds
ArrayOf<Double> mSetHyperBudget.JanCostsServices
ArrayOf<Double>* mGetHyperBudget.JanCostsServices
ArrayOf<Double> mSetHyperBudget.FebCostsServices
ArrayOf<Double>* mGetHyperBudget.FebCostsServices
ArrayOf<Double> mSetHyperBudget.MarCostsServices
ArrayOf<Double>* mGetHyperBudget.MarCostsServices
ArrayOf<Double> mSetHyperBudget.AprCostsServices
ArrayOf<Double>* mGetHyperBudget.AprCostsServices
ArrayOf<Double> mSetHyperBudget.MayCostsServices
ArrayOf<Double>* mGetHyperBudget.MayCostsServices
ArrayOf<Double> mSetHyperBudget.JunCostsServices
ArrayOf<Double>* mGetHyperBudget.JunCostsServices
ArrayOf<Double> mSetHyperBudget.JulCostsServices
ArrayOf<Double>* mGetHyperBudget.JulCostsServices
ArrayOf<Double> mSetHyperBudget.AugCostsServices
ArrayOf<Double>* mGetHyperBudget.AugCostsServices
ArrayOf<Double> mSetHyperBudget.SepCostsServices
ArrayOf<Double>* mGetHyperBudget.SepCostsServices
ArrayOf<Double> mSetHyperBudget.OctCostsServices
ArrayOf<Double>* mGetHyperBudget.OctCostsServices
ArrayOf<Double> mSetHyperBudget.NovCostsServices
ArrayOf<Double>* mGetHyperBudget.NovCostsServices
ArrayOf<Double> mSetHyperBudget.DecCostsServices
ArrayOf<Double>* mGetHyperBudget.DecCostsServices
ArrayOf<Double> mSetHyperBudget.TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetHyperBudget.TwelveTotalMonthlyCosts
Double mSetHyperBudget.YearCostThisBudgetId
Double* mGetHyperBudget.YearCostThisBudgetId
Double mSetHyperBudget.NetProfitLossThisHyperBudgetId
Double* mGetHyperBudget.NetProfitLossThisHyperBudgetId
Int32 mSetHyperBudget.LinkingInternalBudgetNum
Int32* mGetHyperBudget.LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetHyperBudget.CustomerIds
ArrayOf<CCustomer.customer>* mGetHyperBudget.CustomerIds
ArrayOf<CProperty.property> mSetHyperBudget.PropertyIds
ArrayOf<CProperty.property>* mGetHyperBudget.PropertyIds
ArrayOf<CProperty.program> mSetHyperBudget.ProgramIds
ArrayOf<CProperty.program>* mGetHyperBudget.ProgramIds
ArrayOf<CProperty.project> mSetHyperBudget.ProjectIds
ArrayOf<CProperty.project>* mGetHyperBudget.ProjectIds
CFinance.masterSetRegister mSetHyperBudget.MasterSetId
CFinance.masterSetRegister* mGetHyperBudget.MasterSetId
CRegister.businessChannelOwner mSetHyperBudget.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetHyperBudget.BusinessChannelOwnerId
const String& mSetInvoice.InvoiceId
String* mGetInvoice.InvoiceId
const String& mSetInvoice.InvoiceDate
String* mGetInvoice.InvoiceDate
Double mSetInvoice.InvoiceAmount
Double* mGetInvoice.InvoiceAmount
ArrayOf<const String&> mSetInvoice.DocRefs
ArrayOf<String>* mGetInvoice.DocRefs
const String& mSetInvoice.PaidDate
String* mGetInvoice.PaidDate
ArrayOf<const String&> mSetInvoice.GenLedgeFinTxIds
ArrayOf<String>* mGetInvoice.GenLedgeFinTxIds
ArrayOf<const String&> mSetInvoice.MasLedgeFinTxIds
ArrayOf<String>* mGetInvoice.MasLedgeFinTxIds
Int32 mSetInvoice.GenLedgeFinTxNum
Int32* mGetInvoice.GenLedgeFinTxNum
Int32 mSetInvoice.MasLedgeFinTxNum
Int32* mGetInvoice.MasLedgeFinTxNum
ArrayOf<const String&> mSetInvoice.FeesAndChargesIds
ArrayOf<String>* mGetInvoice.FeesAndChargesIds
ArrayOf<const String&> mSetInvoice.ChargeDates
ArrayOf<String>* mGetInvoice.ChargeDates
ArrayOf<CCustomer.customer> mSetInvoice.Customers
ArrayOf<CCustomer.customer>* mGetInvoice.Customers
ArrayOf<CProperty.propertyOwner> mSetInvoice.PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetInvoice.PropertyOwnerIds
CProperty.tenant mSetInvoice.TenancyId
CProperty.tenant* mGetInvoice.TenancyId
ArrayOf<CAdministration.item> mSetInvoice.ItemIds
ArrayOf<CAdministration.item>* mGetInvoice.ItemIds
ArrayOf<CAdministration.job> mSetInvoice.JobIds
ArrayOf<CAdministration.job>* mGetInvoice.JobIds
ArrayOf<CAdministration.service> mSetInvoice.ServiceIds
ArrayOf<CAdministration.service>* mGetInvoice.ServiceIds
ArrayOf<CFinance.masterSalesOrder> mSetInvoice.MasterSalesOrderIds
ArrayOf<CFinance.masterSalesOrder>* mGetInvoice.MasterSalesOrderIds
masLedgeFinTxJoin mSetInvoice.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetInvoice.MasLedgeFinTxJoinId
CRegister.businessChannelOwner mSetInvoice.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetInvoice.BusinessChannelOwnerId
CAdministration.branch mSetInvoice.BranchId
CAdministration.branch* mGetInvoice.BranchId
CAdministration.department mSetInvoice.DeptId
CAdministration.department* mGetInvoice.DeptId
const String& mSetBill.BillId
String* mGetBill.BillId
const String& mSetBill.BillCodeScanned
String* mGetBill.BillCodeScanned
const String& mSetBill.BillDate
String* mGetBill.BillDate
Double mSetBill.BillAmount
Double* mGetBill.BillAmount
ArrayOf<const String&> mSetBill.DocRefs
ArrayOf<String>* mGetBill.DocRefs
const String& mSetBill.PaidDate
String* mGetBill.PaidDate
ArrayOf<const String&> mSetBill.GenLedgeFinTxIds
ArrayOf<String>* mGetBill.GenLedgeFinTxIds
ArrayOf<const String&> mSetBill.MasLedgeFinTxIds
ArrayOf<String>* mGetBill.MasLedgeFinTxIds
Int32 mSetBill.GenLedgeFinTxNum
Int32* mGetBill.GenLedgeFinTxNum
Int32 mSetBill.MasLedgeFinTxNum
Int32* mGetBill.MasLedgeFinTxNum
Boolean mSetBill.Passed
Boolean* mGetBill.Passed
CSupplier.supplier mSetBill.SupplierId
CSupplier.supplier* mGetBill.SupplierId
ArrayOf<CAdministration.item> mSetBill.ItemIds
ArrayOf<CAdministration.item>* mGetBill.ItemIds
ArrayOf<CAdministration.job> mSetBill.JobIds
ArrayOf<CAdministration.job>* mGetBill.JobIds
ArrayOf<CAdministration.service> mSetBill.ServiceIds
ArrayOf<CAdministration.service>* mGetBill.ServiceIds
ArrayOf<CFinance.purchaseOrder> mSetBill.PurchOrderIds
ArrayOf<CFinance.purchaseOrder>* mGetBill.PurchOrderIds
masLedgeFinTxJoin mSetBill.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetBill.MasLedgeFinTxJoinId
CRegister.businessChannelOwner mSetBill.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetBill.BusinessChannelOwnerId
CAdministration.branch mSetBill.BranchId
CAdministration.branch* mGetBill.BranchId
CAdministration.department mSetBill.DeptId
CAdministration.department* mGetBill.DeptId
const String& mSetFeesAndCharges.FeeChargeId
String* mGetFeesAndCharges.FeeChargeId
const String& mSetFeesAndCharges.FeeChargeName
String* mGetFeesAndCharges.FeeChargeName
const String& mSetFeesAndCharges.FeeChargeCode
String* mGetFeesAndCharges.FeeChargeCode
const String& mSetFeesAndCharges.FeeChargeDescription
String* mGetFeesAndCharges.FeeChargeDescription
Double mSetFeesAndCharges.FeeChargeRate
Double* mGetFeesAndCharges.FeeChargeRate
const String& mSetFeesAndCharges.FeeChargeRateUnits
String* mGetFeesAndCharges.FeeChargeRateUnits
CHelper.billingInterval mSetFeesAndCharges.PaymentInterval
CHelper.billingInterval* mGetFeesAndCharges.PaymentInterval
CRegister.businessChannelOwner mSetFeesAndCharges.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetFeesAndCharges.BusinessChannelOwnerId
ArrayOf<CAdministration.service> mSetFeesAndCharges.ServiceIds
ArrayOf<CAdministration.service>* mGetFeesAndCharges.ServiceIds
ArrayOf<CAdministration.item> mSetFeesAndCharges.ItemIds
ArrayOf<CAdministration.item>* mGetFeesAndCharges.ItemIds
ArrayOf<CAdministration.itemType> mSetFeesAndCharges.ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetFeesAndCharges.ItemTypeIds
const String& mSetPurchaseOrder.PurchOrderId
String* mGetPurchaseOrder.PurchOrderId
const String& mSetPurchaseOrder.MRQIdIfRentalProperty
String* mGetPurchaseOrder.MRQIdIfRentalProperty
Boolean mSetPurchaseOrder.DamageCausedByCustomerTenantOthers
Boolean* mGetPurchaseOrder.DamageCausedByCustomerTenantOthers
Boolean mSetPurchaseOrder.OurResponsibility
Boolean* mGetPurchaseOrder.OurResponsibility
ArrayOf<const String&> mSetPurchaseOrder.SummaryDescriptionOfProblemItemised
ArrayOf<String>* mGetPurchaseOrder.SummaryDescriptionOfProblemItemised
Double mSetPurchaseOrder.QuotedEstimateCost
Double* mGetPurchaseOrder.QuotedEstimateCost
const String& mSetPurchaseOrder.ExpectedCompletionDate
String* mGetPurchaseOrder.ExpectedCompletionDate
ArrayOf<Boolean> mSetPurchaseOrder.WorkCheckedPassed
ArrayOf<Boolean>* mGetPurchaseOrder.WorkCheckedPassed
Double mSetPurchaseOrder.TotalMaintPurchOrderAmount
Double* mGetPurchaseOrder.TotalMaintPurchOrderAmount
Int32 mSetPurchaseOrder.MasLedgeFinTxNumReturned
Int32* mGetPurchaseOrder.MasLedgeFinTxNumReturned
CRegister.businessChannelOwner mSetPurchaseOrder.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPurchaseOrder.BusinessChannelOwnerId
CProperty.property mSetPurchaseOrder.PropertyId
CProperty.property* mGetPurchaseOrder.PropertyId
CAdministration.branch mSetPurchaseOrder.BranchId
CAdministration.branch* mGetPurchaseOrder.BranchId
CAdministration.department mSetPurchaseOrder.DeptId
CAdministration.department* mGetPurchaseOrder.DeptId
CSupplier.supplier mSetPurchaseOrder.SupplierId
CSupplier.supplier* mGetPurchaseOrder.SupplierId
ArrayOf<CAdministration.itemType> mSetPurchaseOrder.ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetPurchaseOrder.ItemTypeIds
ArrayOf<CAdministration.item> mSetPurchaseOrder.ItemIds
ArrayOf<CAdministration.item>* mGetPurchaseOrder.ItemIds
ArrayOf<CAdministration.serviceType> mSetPurchaseOrder.ServiceTypeIds
ArrayOf<CAdministration.serviceType>* mGetPurchaseOrder.ServiceTypeIds
ArrayOf<CAdministration.service> mSetPurchaseOrder.ServiceIds
ArrayOf<CAdministration.service>* mGetPurchaseOrder.ServiceIds
ArrayOf<CAdministration.jobType> mSetPurchaseOrder.JobTypeIds
ArrayOf<CAdministration.jobType>* mGetPurchaseOrder.JobTypeIds
ArrayOf<CAdministration.job> mSetPurchaseOrder.JobIds
ArrayOf<CAdministration.job>* mGetPurchaseOrder.JobIds
ArrayOf<CFinance.masterLedgerExpense> mSetPurchaseOrder.MasterLedgerExpenseIds
ArrayOf<CFinance.masterLedgerExpense>* mGetPurchaseOrder.MasterLedgerExpenseIds
masLedgeFinTxJoin mSetPurchaseOrder.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetPurchaseOrder.MasLedgeFinTxJoinId
ArrayOf<CAdministration.documents> mSetPurchaseOrder.DocRefIds
ArrayOf<CAdministration.documents>* mGetPurchaseOrder.DocRefIds
ArrayOf<CAdministration.images> mSetPurchaseOrder.ImageRefIds
ArrayOf<CAdministration.images>* mGetPurchaseOrder.ImageRefIds
const String& mSetMasterSalesOrder.MasterSalesOrderId
String* mGetMasterSalesOrder.MasterSalesOrderId
ArrayOf<Double> mSetMasterSalesOrder.ItemQuantities
ArrayOf<Double>* mGetMasterSalesOrder.ItemQuantities
ArrayOf<Double> mSetMasterSalesOrder.ItemWeights
ArrayOf<Double>* mGetMasterSalesOrder.ItemWeights
ArrayOf<Double> mSetMasterSalesOrder.ItemPrices
ArrayOf<Double>* mGetMasterSalesOrder.ItemPrices
Double mSetMasterSalesOrder.ItemTotalPrice
Double* mGetMasterSalesOrder.ItemTotalPrice
Double mSetMasterSalesOrder.ItemTotalWeight
Double* mGetMasterSalesOrder.ItemTotalWeight
ArrayOf<Double> mSetMasterSalesOrder.ProductQuantities
ArrayOf<Double>* mGetMasterSalesOrder.ProductQuantities
ArrayOf<Double> mSetMasterSalesOrder.ProductWeights
ArrayOf<Double>* mGetMasterSalesOrder.ProductWeights
ArrayOf<Double> mSetMasterSalesOrder.ProductsPrices
ArrayOf<Double>* mGetMasterSalesOrder.ProductsPrices
Double mSetMasterSalesOrder.ProductsTotalPrice
Double* mGetMasterSalesOrder.ProductsTotalPrice
Double mSetMasterSalesOrder.ProductsTotalWeight
Double* mGetMasterSalesOrder.ProductsTotalWeight
ArrayOf<Double> mSetMasterSalesOrder.ServicePriceRates
ArrayOf<Double>* mGetMasterSalesOrder.ServicePriceRates
Double mSetMasterSalesOrder.ServiceEstimatedTotalPrice
Double* mGetMasterSalesOrder.ServiceEstimatedTotalPrice
ArrayOf<Double> mSetMasterSalesOrder.JobPriceRates
ArrayOf<Double>* mGetMasterSalesOrder.JobPriceRates
Double mSetMasterSalesOrder.JobsEstimatedTotalPrice
Double* mGetMasterSalesOrder.JobsEstimatedTotalPrice
Double mSetMasterSalesOrder.TotalOrderPrice
Double* mGetMasterSalesOrder.TotalOrderPrice
CRegister.businessChannelOwner mSetMasterSalesOrder.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterSalesOrder.BusinessChannelOwnerId
CAdministration.branch mSetMasterSalesOrder.BranchId
CAdministration.branch* mGetMasterSalesOrder.BranchId
CAdministration.department mSetMasterSalesOrder.DeptId
CAdministration.department* mGetMasterSalesOrder.DeptId
ArrayOf<CCustomer.customer> mSetMasterSalesOrder.Customers
ArrayOf<CCustomer.customer>* mGetMasterSalesOrder.Customers
ArrayOf<CAdministration.itemType> mSetMasterSalesOrder.ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetMasterSalesOrder.ItemTypeIds
ArrayOf<CAdministration.item> mSetMasterSalesOrder.ItemIds
ArrayOf<CAdministration.item>* mGetMasterSalesOrder.ItemIds
ArrayOf<CAdministration.serviceType> mSetMasterSalesOrder.ServiceTypeIds
ArrayOf<CAdministration.serviceType>* mGetMasterSalesOrder.ServiceTypeIds
ArrayOf<CAdministration.service> mSetMasterSalesOrder.ServiceIds
ArrayOf<CAdministration.service>* mGetMasterSalesOrder.ServiceIds
ArrayOf<CAdministration.jobType> mSetMasterSalesOrder.JobTypeIds
ArrayOf<CAdministration.jobType>* mGetMasterSalesOrder.JobTypeIds
ArrayOf<CAdministration.job> mSetMasterSalesOrder.JobIds
ArrayOf<CAdministration.job>* mGetMasterSalesOrder.JobIds
ArrayOf<CFinance.masterLedgerIncome> mSetMasterSalesOrder.MasterLedgerIncomeId
ArrayOf<CFinance.masterLedgerIncome>* mGetMasterSalesOrder.MasterLedgerIncomeId
masLedgeFinTxJoin mSetMasterSalesOrder.MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterSalesOrder.MasLedgeFinTxJoinId
ArrayOf<CAdministration.documents> mSetMasterSalesOrder.DocRefIds
ArrayOf<CAdministration.documents>* mGetMasterSalesOrder.DocRefIds
ArrayOf<CAdministration.images> mSetMasterSalesOrder.ImageRefIds
ArrayOf<CAdministration.images>* mGetMasterSalesOrder.ImageRefIds
ArrayOf<CAdministration.video> mSetMasterSalesOrder.VideoRefIds
ArrayOf<CAdministration.video>* mGetMasterSalesOrder.VideoRefIds
const String& mSetTaxReferenceTable.TaxReferenceId
String* mGetTaxReferenceTable.TaxReferenceId
ArrayOf<CHelper.ausState> mSetTaxReferenceTable.AusStates
ArrayOf<CHelper.ausState>* mGetTaxReferenceTable.AusStates
const String& mSetTaxReferenceTable.Description
String* mGetTaxReferenceTable.Description
ArrayOf<const String&> mSetTaxReferenceTable.Notes
ArrayOf<String>* mGetTaxReferenceTable.Notes
Double mSetTaxReferenceTable.TaxRatePerCent
Double* mGetTaxReferenceTable.TaxRatePerCent
CHelper.taxCode mSetTaxReferenceTable.TaxCode
CHelper.taxCode* mGetTaxReferenceTable.TaxCode
ArrayOf<CAdministration.documents> mSetTaxReferenceTable.DocRefIds
ArrayOf<CAdministration.documents>* mGetTaxReferenceTable.DocRefIds
CRegister.businessChannelOwner mSetTaxReferenceTable.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTaxReferenceTable.BusinessChannelOwnerId
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

