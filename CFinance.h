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
    
   CARAPI SetBank_BankId(
     /* [in] */ const String& CFinance.bank.bankId);

    CARAPI GetBank_BankId(
     /* [out] */ String* CFinance.bank.bankId);


   CARAPI SetBank_BankName(
     /* [in] */ const String& CFinance.bank.bankName);

    CARAPI GetBank_BankName(
     /* [out] */ String* CFinance.bank.bankName);


   CARAPI SetBank_OurBranchBSB(
     /* [in] */ Int32 CFinance.bank.ourBranchBSB);

    CARAPI GetBank_OurBranchBSB(
     /* [out] */ Int32* CFinance.bank.ourBranchBSB);


   CARAPI SetBank_OurBranchName(
     /* [in] */ const String& CFinance.bank.ourBranchName);

    CARAPI GetBank_OurBranchName(
     /* [out] */ String* CFinance.bank.ourBranchName);


   CARAPI SetBank_LinkedToThisSupplierId(
     /* [in] */ const String& CFinance.bank.linkedToThisSupplierId);

    CARAPI GetBank_LinkedToThisSupplierId(
     /* [out] */ String* CFinance.bank.linkedToThisSupplierId);


   CARAPI SetBank_LinkedToThisCustomerId(
     /* [in] */ const String& CFinance.bank.linkedToThisCustomerId);

    CARAPI GetBank_LinkedToThisCustomerId(
     /* [out] */ String* CFinance.bank.linkedToThisCustomerId);


   CARAPI SetBank_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CFinance.bank.contactFirstNameList);

    CARAPI GetBank_ContactFirstNameList(
     [out, callee] ArrayOf<String>* CFinance.bank.contactFirstNameList);


   CARAPI SetBank_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CFinance.bank.contactLastNameList);

    CARAPI GetBank_ContactLastNameList(
     [out, callee] ArrayOf<String>* CFinance.bank.contactLastNameList);


   CARAPI SetBank_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CFinance.bank.emailAddresses);

    CARAPI GetBank_EmailAddresses(
     [out, callee] ArrayOf<String>* CFinance.bank.emailAddresses);


   CARAPI SetBank_MobilePhone(
     /* [in] */ ArrayOf<Int32> CFinance.bank.mobilePhone);

    CARAPI GetBank_MobilePhone(
     [out, callee] ArrayOf<Int32>* CFinance.bank.mobilePhone);


   CARAPI SetBank_WorkPhone(
     /* [in] */ ArrayOf<Int32> CFinance.bank.workPhone);

    CARAPI GetBank_WorkPhone(
     [out, callee] ArrayOf<Int32>* CFinance.bank.workPhone);


   CARAPI SetBank_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CFinance.bank.contactedWithDetails);

    CARAPI GetBank_ContactedWithDetails(
     [out, callee] ArrayOf<String>* CFinance.bank.contactedWithDetails);


   CARAPI SetBank_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.bank.docRefIds);

    CARAPI GetBank_DocRefIds(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.bank.docRefIds);


   CARAPI SetBank_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.bank.imageRefIds);

    CARAPI GetBank_ImageRefIds(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.bank.imageRefIds);


   CARAPI SetBank_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.bank.businessChannelOwnerId);

    CARAPI GetBank_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.bank.businessChannelOwnerId);


   CARAPI SetCentrelink_CentrelinkId(
     /* [in] */ const String& CFinance.centrelink.centrelinkId);

    CARAPI GetCentrelink_CentrelinkId(
     /* [out] */ String* CFinance.centrelink.centrelinkId);


   CARAPI SetCentrelink_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CFinance.centrelink.contactFirstNameList);

    CARAPI GetCentrelink_ContactFirstNameList(
     [out, callee] ArrayOf<String>* CFinance.centrelink.contactFirstNameList);


   CARAPI SetCentrelink_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CFinance.centrelink.contactLastNameList);

    CARAPI GetCentrelink_ContactLastNameList(
     [out, callee] ArrayOf<String>* CFinance.centrelink.contactLastNameList);


   CARAPI SetCentrelink_StreetAddress(
     /* [in] */ const String& CFinance.centrelink.streetAddress);

    CARAPI GetCentrelink_StreetAddress(
     /* [out] */ String* CFinance.centrelink.streetAddress);


   CARAPI SetCentrelink_PostalAddress(
     /* [in] */ const String& CFinance.centrelink.postalAddress);

    CARAPI GetCentrelink_PostalAddress(
     /* [out] */ String* CFinance.centrelink.postalAddress);


   CARAPI SetCentrelink_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CFinance.centrelink.emailAddresses);

    CARAPI GetCentrelink_EmailAddresses(
     [out, callee] ArrayOf<String>* CFinance.centrelink.emailAddresses);


   CARAPI SetCentrelink_MobilePhone(
     /* [in] */ ArrayOf<Int32> CFinance.centrelink.mobilePhone);

    CARAPI GetCentrelink_MobilePhone(
     [out, callee] ArrayOf<Int32>* CFinance.centrelink.mobilePhone);


   CARAPI SetCentrelink_WorkPhone(
     /* [in] */ ArrayOf<Int32> CFinance.centrelink.workPhone);

    CARAPI GetCentrelink_WorkPhone(
     [out, callee] ArrayOf<Int32>* CFinance.centrelink.workPhone);


   CARAPI SetCentrelink_Details(
     /* [in] */ const String& CFinance.centrelink.details);

    CARAPI GetCentrelink_Details(
     /* [out] */ String* CFinance.centrelink.details);


   CARAPI SetCentrelink_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CFinance.centrelink.contactedWithDetails);

    CARAPI GetCentrelink_ContactedWithDetails(
     [out, callee] ArrayOf<String>* CFinance.centrelink.contactedWithDetails);


   CARAPI SetCentrelink_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.centrelink.businessChannelOwnerId);

    CARAPI GetCentrelink_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.centrelink.businessChannelOwnerId);


   CARAPI SetCentrelink_BranchId(
     /* [in] */ CAdministration.branch CFinance.centrelink.branchId);

    CARAPI GetCentrelink_BranchId(
     /* [out] */ CAdministration.branch* CFinance.centrelink.branchId);


   CARAPI SetCentrelink_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.centrelink.docRefIds);

    CARAPI GetCentrelink_DocRefIds(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.centrelink.docRefIds);


   CARAPI SetCentrelink_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.centrelink.imageRefIds);

    CARAPI GetCentrelink_ImageRefIds(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.centrelink.imageRefIds);


   CARAPI SetMasterAssetRegister_MasterAsCARAPI
     /* [in] */ const String& CFinance.masterAssetRegister.masterAsCARAPI SetId);

    CARAPI GetMasterAssetRegister_MasterAsCARAPI
     /* [out] */ String* CFinance.masterAssetRegister.masterAsCARAPI SetId);


   CARAPI SetMasterAssetRegister_AsCARAPI
     /* [in] */ const String& CFinance.masterAssetRegister.asCARAPI SetTypeId);

    CARAPI GetMasterAssetRegister_AsCARAPI
     /* [out] */ String* CFinance.masterAssetRegister.asCARAPI SetTypeId);


   CARAPI SetMasterAssetRegister_AsCARAPI
     /* [in] */ const String& CFinance.masterAssetRegister.asCARAPI SetName);

    CARAPI GetMasterAssetRegister_AsCARAPI
     /* [out] */ String* CFinance.masterAssetRegister.asCARAPI SetName);


   CARAPI SetMasterAssetRegister_AsCARAPI
     /* [in] */ const String& CFinance.masterAssetRegister.asCARAPI SetDescription);

    CARAPI GetMasterAssetRegister_AsCARAPI
     /* [out] */ String* CFinance.masterAssetRegister.asCARAPI SetDescription);


   CARAPI SetMasterAssetRegister_OWDV(
     /* [in] */ Double CFinance.masterAssetRegister.OWDV);

    CARAPI GetMasterAssetRegister_OWDV(
     /* [out] */ Double* CFinance.masterAssetRegister.OWDV);


   CARAPI SetMasterAssetRegister_CapitalImprovements(
     /* [in] */ Double CFinance.masterAssetRegister.capitalImprovements);

    CARAPI GetMasterAssetRegister_CapitalImprovements(
     /* [out] */ Double* CFinance.masterAssetRegister.capitalImprovements);


   CARAPI SetMasterAssetRegister_Depreciation(
     /* [in] */ Double CFinance.masterAssetRegister.depreciation);

    CARAPI GetMasterAssetRegister_Depreciation(
     /* [out] */ Double* CFinance.masterAssetRegister.depreciation);


   CARAPI SetMasterAssetRegister_CWDV(
     /* [in] */ Double CFinance.masterAssetRegister.CWDV);

    CARAPI GetMasterAssetRegister_CWDV(
     /* [out] */ Double* CFinance.masterAssetRegister.CWDV);


   CARAPI SetMasterAssetRegister_LastInspectionService(
     /* [in] */ const String& CFinance.masterAssetRegister.lastInspectionService);

    CARAPI GetMasterAssetRegister_LastInspectionService(
     /* [out] */ String* CFinance.masterAssetRegister.lastInspectionService);


   CARAPI SetMasterAssetRegister_ThisInspectionService(
     /* [in] */ const String& CFinance.masterAssetRegister.thisInspectionService);

    CARAPI GetMasterAssetRegister_ThisInspectionService(
     /* [out] */ String* CFinance.masterAssetRegister.thisInspectionService);


   CARAPI SetMasterAssetRegister_Sequ(
     /* [in] */ const String& CFinance.masterAssetRegister.Sequ);

    CARAPI GetMasterAssetRegister_Sequ(
     /* [out] */ String* CFinance.masterAssetRegister.Sequ);


   CARAPI SetMasterAssetRegister_NextInspectionService(
     /* [in] */ const String& CFinance.masterAssetRegister.nextInspectionService);

    CARAPI GetMasterAssetRegister_NextInspectionService(
     /* [out] */ String* CFinance.masterAssetRegister.nextInspectionService);


   CARAPI SetMasterAssetRegister_ValueOfN(
     /* [in] */ Int32 CFinance.masterAssetRegister.valueOfN);

    CARAPI GetMasterAssetRegister_ValueOfN(
     /* [out] */ Int32* CFinance.masterAssetRegister.valueOfN);


   CARAPI SetMasterAssetRegister_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterAssetRegister.businessChannelOwnerId);

    CARAPI GetMasterAssetRegister_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterAssetRegister.businessChannelOwnerId);


   CARAPI SetMasterAssetRegister_DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.masterAssetRegister.docRefs);

    CARAPI GetMasterAssetRegister_DocRefs(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.masterAssetRegister.docRefs);


   CARAPI SetMasterAssetRegister_ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.masterAssetRegister.imageRefs);

    CARAPI GetMasterAssetRegister_ImageRefs(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.masterAssetRegister.imageRefs);


   CARAPI SetMasterAssetRegister_AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CFinance.masterAssetRegister.audioRefIds);

    CARAPI GetMasterAssetRegister_AudioRefIds(
     [out, callee] ArrayOf<CAdministration.audio>* CFinance.masterAssetRegister.audioRefIds);


   CARAPI SetMasterAssetRegister_VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CFinance.masterAssetRegister.videoRefs);

    CARAPI GetMasterAssetRegister_VideoRefs(
     [out, callee] ArrayOf<CAdministration.video>* CFinance.masterAssetRegister.videoRefs);


   CARAPI SetMasterAssetRegister_ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterAssetRegister.chartOfAccountsId);

    CARAPI GetMasterAssetRegister_ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterAssetRegister.chartOfAccountsId);


   CARAPI SetMasterAssetRegister_ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterAssetRegister.chartOfClassesId);

    CARAPI GetMasterAssetRegister_ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterAssetRegister.chartOfClassesId);


   CARAPI SetMasterAssetRegister_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterAssetRegister.branchId);

    CARAPI GetMasterAssetRegister_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterAssetRegister.branchId);


   CARAPI SetMasterAssetRegister_DeptId(
     /* [in] */ CAdministration.department CFinance.masterAssetRegister.deptId);

    CARAPI GetMasterAssetRegister_DeptId(
     /* [out] */ CAdministration.department* CFinance.masterAssetRegister.deptId);


   CARAPI SetMasterAssetRegister_MasterAsCARAPI
     /* [in] */ CFinance.masterAsCARAPI SetType CFinance.masterAssetRegister.masterAsCARAPI SetTypeId);

    CARAPI GetMasterAssetRegister_MasterAsCARAPI
     /* [out] */ CFinance.masterAsCARAPI SetType* CFinance.masterAssetRegister.masterAsCARAPI SetTypeId);


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


   CARAPI SetChartOfAccounts_ChartOfAccountsId(
     /* [in] */ const String& CFinance.chartOfAccounts.chartOfAccountsId);

    CARAPI GetChartOfAccounts_ChartOfAccountsId(
     /* [out] */ String* CFinance.chartOfAccounts.chartOfAccountsId);


   CARAPI SetChartOfAccounts_LedgerTitle(
     /* [in] */ CHelper.ledgerTitle CFinance.chartOfAccounts.ledgerTitle);

    CARAPI GetChartOfAccounts_LedgerTitle(
     /* [out] */ CHelper.ledgerTitle* CFinance.chartOfAccounts.ledgerTitle);


   CARAPI SetChartOfAccounts_Description(
     /* [in] */ const String& CFinance.chartOfAccounts.description);

    CARAPI GetChartOfAccounts_Description(
     /* [out] */ String* CFinance.chartOfAccounts.description);


   CARAPI SetChartOfAccounts_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.chartOfAccounts.businessChannelOwnerId);

    CARAPI GetChartOfAccounts_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.chartOfAccounts.businessChannelOwnerId);


   CARAPI SetChartOfAccounts_Level1AccountsId(
     /* [in] */ CFinance.level1Accounts CFinance.chartOfAccounts.level1AccountsId);

    CARAPI GetChartOfAccounts_Level1AccountsId(
     /* [out] */ CFinance.level1Accounts* CFinance.chartOfAccounts.level1AccountsId);


   CARAPI SetChartOfAccounts_Level2AccountsId(
     /* [in] */ CFinance.level2Accounts CFinance.chartOfAccounts.level2AccountsId);

    CARAPI GetChartOfAccounts_Level2AccountsId(
     /* [out] */ CFinance.level2Accounts* CFinance.chartOfAccounts.level2AccountsId);


   CARAPI SetChartOfAccounts_Level3AccountsId(
     /* [in] */ CFinance.level3Accounts CFinance.chartOfAccounts.level3AccountsId);

    CARAPI GetChartOfAccounts_Level3AccountsId(
     /* [out] */ CFinance.level3Accounts* CFinance.chartOfAccounts.level3AccountsId);


   CARAPI SetChartOfAccounts_Level4AccountsId(
     /* [in] */ CFinance.level4Accounts CFinance.chartOfAccounts.level4AccountsId);

    CARAPI GetChartOfAccounts_Level4AccountsId(
     /* [out] */ CFinance.level4Accounts* CFinance.chartOfAccounts.level4AccountsId);


   CARAPI SetChartOfAccounts_Level5AccountsId(
     /* [in] */ CFinance.level5Accounts CFinance.chartOfAccounts.level5AccountsId);

    CARAPI GetChartOfAccounts_Level5AccountsId(
     /* [out] */ CFinance.level5Accounts* CFinance.chartOfAccounts.level5AccountsId);


   CARAPI SetChartOfAccounts_Level6AccountsId(
     /* [in] */ CFinance.level6Accounts CFinance.chartOfAccounts.level6AccountsId);

    CARAPI GetChartOfAccounts_Level6AccountsId(
     /* [out] */ CFinance.level6Accounts* CFinance.chartOfAccounts.level6AccountsId);


   CARAPI SetLevel1Accounts_Level1AccountsId(
     /* [in] */ const String& CFinance.level1Accounts.level1AccountsId);

    CARAPI GetLevel1Accounts_Level1AccountsId(
     /* [out] */ String* CFinance.level1Accounts.level1AccountsId);


   CARAPI SetLevel1Accounts_Description(
     /* [in] */ const String& CFinance.level1Accounts.description);

    CARAPI GetLevel1Accounts_Description(
     /* [out] */ String* CFinance.level1Accounts.description);


   CARAPI SetLevel1Accounts_Level1AccountsName(
     /* [in] */ const String& CFinance.level1Accounts.level1AccountsName);

    CARAPI GetLevel1Accounts_Level1AccountsName(
     /* [out] */ String* CFinance.level1Accounts.level1AccountsName);


   CARAPI SetLevel1Accounts_Level1AccountsNum(
     /* [in] */ const String& CFinance.level1Accounts.level1AccountsNum);

    CARAPI GetLevel1Accounts_Level1AccountsNum(
     /* [out] */ String* CFinance.level1Accounts.level1AccountsNum);


   CARAPI SetLevel1Accounts_AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level1Accounts.assocLedger);

    CARAPI GetLevel1Accounts_AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level1Accounts.assocLedger);


   CARAPI SetLevel1Accounts_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level1Accounts.businessChannelOwnerId);

    CARAPI GetLevel1Accounts_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level1Accounts.businessChannelOwnerId);


   CARAPI SetLevel2Accounts_Level2AccountsId(
     /* [in] */ const String& CFinance.level2Accounts.level2AccountsId);

    CARAPI GetLevel2Accounts_Level2AccountsId(
     /* [out] */ String* CFinance.level2Accounts.level2AccountsId);


   CARAPI SetLevel2Accounts_Description(
     /* [in] */ const String& CFinance.level2Accounts.description);

    CARAPI GetLevel2Accounts_Description(
     /* [out] */ String* CFinance.level2Accounts.description);


   CARAPI SetLevel2Accounts_Level2AccountsName(
     /* [in] */ const String& CFinance.level2Accounts.level2AccountsName);

    CARAPI GetLevel2Accounts_Level2AccountsName(
     /* [out] */ String* CFinance.level2Accounts.level2AccountsName);


   CARAPI SetLevel2Accounts_Level2AccountsNum(
     /* [in] */ const String& CFinance.level2Accounts.level2AccountsNum);

    CARAPI GetLevel2Accounts_Level2AccountsNum(
     /* [out] */ String* CFinance.level2Accounts.level2AccountsNum);


   CARAPI SetLevel2Accounts_AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level2Accounts.assocLedger);

    CARAPI GetLevel2Accounts_AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level2Accounts.assocLedger);


   CARAPI SetLevel2Accounts_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level2Accounts.businessChannelOwnerId);

    CARAPI GetLevel2Accounts_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level2Accounts.businessChannelOwnerId);


   CARAPI SetLevel2Accounts_Level1AccountsId(
     /* [in] */ CFinance.level1Accounts CFinance.level2Accounts.level1AccountsId);

    CARAPI GetLevel2Accounts_Level1AccountsId(
     /* [out] */ CFinance.level1Accounts* CFinance.level2Accounts.level1AccountsId);


   CARAPI SetLevel3Accounts_Level3AccountsId(
     /* [in] */ const String& CFinance.level3Accounts.level3AccountsId);

    CARAPI GetLevel3Accounts_Level3AccountsId(
     /* [out] */ String* CFinance.level3Accounts.level3AccountsId);


   CARAPI SetLevel3Accounts_Description(
     /* [in] */ const String& CFinance.level3Accounts.description);

    CARAPI GetLevel3Accounts_Description(
     /* [out] */ String* CFinance.level3Accounts.description);


   CARAPI SetLevel3Accounts_Level3AccountsName(
     /* [in] */ const String& CFinance.level3Accounts.level3AccountsName);

    CARAPI GetLevel3Accounts_Level3AccountsName(
     /* [out] */ String* CFinance.level3Accounts.level3AccountsName);


   CARAPI SetLevel3Accounts_Level3AccountsNum(
     /* [in] */ const String& CFinance.level3Accounts.level3AccountsNum);

    CARAPI GetLevel3Accounts_Level3AccountsNum(
     /* [out] */ String* CFinance.level3Accounts.level3AccountsNum);


   CARAPI SetLevel3Accounts_AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level3Accounts.assocLedger);

    CARAPI GetLevel3Accounts_AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level3Accounts.assocLedger);


   CARAPI SetLevel3Accounts_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level3Accounts.businessChannelOwnerId);

    CARAPI GetLevel3Accounts_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level3Accounts.businessChannelOwnerId);


   CARAPI SetLevel3Accounts_Level2AccountsId(
     /* [in] */ CFinance.level2Accounts CFinance.level3Accounts.level2AccountsId);

    CARAPI GetLevel3Accounts_Level2AccountsId(
     /* [out] */ CFinance.level2Accounts* CFinance.level3Accounts.level2AccountsId);


   CARAPI SetLevel4Accounts_Level4AccountsId(
     /* [in] */ const String& CFinance.level4Accounts.level4AccountsId);

    CARAPI GetLevel4Accounts_Level4AccountsId(
     /* [out] */ String* CFinance.level4Accounts.level4AccountsId);


   CARAPI SetLevel4Accounts_Description(
     /* [in] */ const String& CFinance.level4Accounts.description);

    CARAPI GetLevel4Accounts_Description(
     /* [out] */ String* CFinance.level4Accounts.description);


   CARAPI SetLevel4Accounts_Level4AccountsName(
     /* [in] */ const String& CFinance.level4Accounts.level4AccountsName);

    CARAPI GetLevel4Accounts_Level4AccountsName(
     /* [out] */ String* CFinance.level4Accounts.level4AccountsName);


   CARAPI SetLevel4Accounts_Level4AccountsNum(
     /* [in] */ const String& CFinance.level4Accounts.level4AccountsNum);

    CARAPI GetLevel4Accounts_Level4AccountsNum(
     /* [out] */ String* CFinance.level4Accounts.level4AccountsNum);


   CARAPI SetLevel4Accounts_AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level4Accounts.assocLedger);

    CARAPI GetLevel4Accounts_AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level4Accounts.assocLedger);


   CARAPI SetLevel4Accounts_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level4Accounts.businessChannelOwnerId);

    CARAPI GetLevel4Accounts_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level4Accounts.businessChannelOwnerId);


   CARAPI SetLevel4Accounts_Level3AccountsId(
     /* [in] */ CFinance.level3Accounts CFinance.level4Accounts.level3AccountsId);

    CARAPI GetLevel4Accounts_Level3AccountsId(
     /* [out] */ CFinance.level3Accounts* CFinance.level4Accounts.level3AccountsId);


   CARAPI SetLevel5Accounts_Level5AccountsId(
     /* [in] */ const String& CFinance.level5Accounts.level5AccountsId);

    CARAPI GetLevel5Accounts_Level5AccountsId(
     /* [out] */ String* CFinance.level5Accounts.level5AccountsId);


   CARAPI SetLevel5Accounts_Description(
     /* [in] */ const String& CFinance.level5Accounts.description);

    CARAPI GetLevel5Accounts_Description(
     /* [out] */ String* CFinance.level5Accounts.description);


   CARAPI SetLevel5Accounts_Level5AccountsName(
     /* [in] */ const String& CFinance.level5Accounts.level5AccountsName);

    CARAPI GetLevel5Accounts_Level5AccountsName(
     /* [out] */ String* CFinance.level5Accounts.level5AccountsName);


   CARAPI SetLevel5Accounts_Level5AccountsNum(
     /* [in] */ const String& CFinance.level5Accounts.level5AccountsNum);

    CARAPI GetLevel5Accounts_Level5AccountsNum(
     /* [out] */ String* CFinance.level5Accounts.level5AccountsNum);


   CARAPI SetLevel5Accounts_AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level5Accounts.assocLedger);

    CARAPI GetLevel5Accounts_AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level5Accounts.assocLedger);


   CARAPI SetLevel5Accounts_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level5Accounts.businessChannelOwnerId);

    CARAPI GetLevel5Accounts_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level5Accounts.businessChannelOwnerId);


   CARAPI SetLevel5Accounts_Level4AccountsId(
     /* [in] */ CFinance.level4Accounts CFinance.level5Accounts.level4AccountsId);

    CARAPI GetLevel5Accounts_Level4AccountsId(
     /* [out] */ CFinance.level4Accounts* CFinance.level5Accounts.level4AccountsId);


   CARAPI SetLevel6Accounts_Level6AccountsId(
     /* [in] */ const String& CFinance.level6Accounts.level6AccountsId);

    CARAPI GetLevel6Accounts_Level6AccountsId(
     /* [out] */ String* CFinance.level6Accounts.level6AccountsId);


   CARAPI SetLevel6Accounts_Description(
     /* [in] */ const String& CFinance.level6Accounts.description);

    CARAPI GetLevel6Accounts_Description(
     /* [out] */ String* CFinance.level6Accounts.description);


   CARAPI SetLevel6Accounts_Level6AccountsName(
     /* [in] */ const String& CFinance.level6Accounts.level6AccountsName);

    CARAPI GetLevel6Accounts_Level6AccountsName(
     /* [out] */ String* CFinance.level6Accounts.level6AccountsName);


   CARAPI SetLevel6Accounts_Level6AccountsNum(
     /* [in] */ const String& CFinance.level6Accounts.level6AccountsNum);

    CARAPI GetLevel6Accounts_Level6AccountsNum(
     /* [out] */ String* CFinance.level6Accounts.level6AccountsNum);


   CARAPI SetLevel6Accounts_AssocLedger(
     /* [in] */ CHelper.ledgerTitle CFinance.level6Accounts.assocLedger);

    CARAPI GetLevel6Accounts_AssocLedger(
     /* [out] */ CHelper.ledgerTitle* CFinance.level6Accounts.assocLedger);


   CARAPI SetLevel6Accounts_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level6Accounts.businessChannelOwnerId);

    CARAPI GetLevel6Accounts_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level6Accounts.businessChannelOwnerId);


   CARAPI SetLevel6Accounts_Level5AccountsId(
     /* [in] */ CFinance.level5Accounts CFinance.level6Accounts.level5AccountsId);

    CARAPI GetLevel6Accounts_Level5AccountsId(
     /* [out] */ CFinance.level5Accounts* CFinance.level6Accounts.level5AccountsId);


   CARAPI SetChartOfClasses_ChartOfClassesId(
     /* [in] */ const String& CFinance.chartOfClasses.chartOfClassesId);

    CARAPI GetChartOfClasses_ChartOfClassesId(
     /* [out] */ String* CFinance.chartOfClasses.chartOfClassesId);


   CARAPI SetChartOfClasses_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.chartOfClasses.businessChannelOwnerId);

    CARAPI GetChartOfClasses_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.chartOfClasses.businessChannelOwnerId);


   CARAPI SetChartOfClasses_Level1ClassId(
     /* [in] */ CFinance.level1Class CFinance.chartOfClasses.level1ClassId);

    CARAPI GetChartOfClasses_Level1ClassId(
     /* [out] */ CFinance.level1Class* CFinance.chartOfClasses.level1ClassId);


   CARAPI SetChartOfClasses_Level2ClassId(
     /* [in] */ CFinance.level2Class CFinance.chartOfClasses.level2ClassId);

    CARAPI GetChartOfClasses_Level2ClassId(
     /* [out] */ CFinance.level2Class* CFinance.chartOfClasses.level2ClassId);


   CARAPI SetChartOfClasses_Level3ClassId(
     /* [in] */ CFinance.level3Class CFinance.chartOfClasses.level3ClassId);

    CARAPI GetChartOfClasses_Level3ClassId(
     /* [out] */ CFinance.level3Class* CFinance.chartOfClasses.level3ClassId);


   CARAPI SetLevel1Class_Level1ClassId(
     /* [in] */ const String& CFinance.level1Class.level1ClassId);

    CARAPI GetLevel1Class_Level1ClassId(
     /* [out] */ String* CFinance.level1Class.level1ClassId);


   CARAPI SetLevel1Class_Description(
     /* [in] */ const String& CFinance.level1Class.description);

    CARAPI GetLevel1Class_Description(
     /* [out] */ String* CFinance.level1Class.description);


   CARAPI SetLevel1Class_ClassName(
     /* [in] */ const String& CFinance.level1Class.className);

    CARAPI GetLevel1Class_ClassName(
     /* [out] */ String* CFinance.level1Class.className);


   CARAPI SetLevel1Class_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level1Class.businessChannelOwnerId);

    CARAPI GetLevel1Class_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level1Class.businessChannelOwnerId);


   CARAPI SetLevel2Class_Level2ClassId(
     /* [in] */ const String& CFinance.level2Class.level2ClassId);

    CARAPI GetLevel2Class_Level2ClassId(
     /* [out] */ String* CFinance.level2Class.level2ClassId);


   CARAPI SetLevel2Class_Description(
     /* [in] */ const String& CFinance.level2Class.description);

    CARAPI GetLevel2Class_Description(
     /* [out] */ String* CFinance.level2Class.description);


   CARAPI SetLevel2Class_ClassName(
     /* [in] */ const String& CFinance.level2Class.className);

    CARAPI GetLevel2Class_ClassName(
     /* [out] */ String* CFinance.level2Class.className);


   CARAPI SetLevel2Class_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level2Class.businessChannelOwnerId);

    CARAPI GetLevel2Class_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level2Class.businessChannelOwnerId);


   CARAPI SetLevel2Class_Level1ClassId(
     /* [in] */ CFinance.level1Class CFinance.level2Class.level1ClassId);

    CARAPI GetLevel2Class_Level1ClassId(
     /* [out] */ CFinance.level1Class* CFinance.level2Class.level1ClassId);


   CARAPI SetLevel3Class_Level3ClassId(
     /* [in] */ const String& CFinance.level3Class.level3ClassId);

    CARAPI GetLevel3Class_Level3ClassId(
     /* [out] */ String* CFinance.level3Class.level3ClassId);


   CARAPI SetLevel3Class_Description(
     /* [in] */ const String& CFinance.level3Class.description);

    CARAPI GetLevel3Class_Description(
     /* [out] */ String* CFinance.level3Class.description);


   CARAPI SetLevel3Class_ClassName(
     /* [in] */ const String& CFinance.level3Class.className);

    CARAPI GetLevel3Class_ClassName(
     /* [out] */ String* CFinance.level3Class.className);


   CARAPI SetLevel3Class_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level3Class.businessChannelOwnerId);

    CARAPI GetLevel3Class_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level3Class.businessChannelOwnerId);


   CARAPI SetLevel3Class_Level2ClassId(
     /* [in] */ CFinance.level2Class CFinance.level3Class.level2ClassId);

    CARAPI GetLevel3Class_Level2ClassId(
     /* [out] */ CFinance.level2Class* CFinance.level3Class.level2ClassId);


   CARAPI SetMasterLedgerFinTxJoin_MasLedgeFinTxJoinId(
     /* [in] */ const String& CFinance.masterLedgerFinTxJoin.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerFinTxJoin_MasLedgeFinTxJoinId(
     /* [out] */ String* CFinance.masterLedgerFinTxJoin.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerFinTxJoin_MasLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerFinTxJoin.masLedgeFinTxIds);

    CARAPI GetMasterLedgerFinTxJoin_MasLedgeFinTxIds(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerFinTxJoin.masLedgeFinTxIds);


   CARAPI SetMasterLedgerFinTxJoin_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerFinTxJoin.masLedgeFinTxNum);

    CARAPI GetMasterLedgerFinTxJoin_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerFinTxJoin.masLedgeFinTxNum);


   CARAPI SetMasterLedgerFinTxJoin_CreditedAccountIds(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerFinTxJoin.creditedAccountIds);

    CARAPI GetMasterLedgerFinTxJoin_CreditedAccountIds(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerFinTxJoin.creditedAccountIds);


   CARAPI SetMasterLedgerFinTxJoin_DebitedAccountIds(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerFinTxJoin.debitedAccountIds);

    CARAPI GetMasterLedgerFinTxJoin_DebitedAccountIds(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerFinTxJoin.debitedAccountIds);


   CARAPI SetMasterLedgerFinTxJoin_CreditedClassIds(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerFinTxJoin.creditedClassIds);

    CARAPI GetMasterLedgerFinTxJoin_CreditedClassIds(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerFinTxJoin.creditedClassIds);


   CARAPI SetMasterLedgerFinTxJoin_DebitedClassIds(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerFinTxJoin.debitedClassIds);

    CARAPI GetMasterLedgerFinTxJoin_DebitedClassIds(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerFinTxJoin.debitedClassIds);


   CARAPI SetMasterLedgerFinTxJoin_CreditedAmounts(
     /* [in] */ ArrayOf<Double> CFinance.masterLedgerFinTxJoin.creditedAmounts);

    CARAPI GetMasterLedgerFinTxJoin_CreditedAmounts(
     [out, callee] ArrayOf<Double>* CFinance.masterLedgerFinTxJoin.creditedAmounts);


   CARAPI SetMasterLedgerFinTxJoin_DebitedAmounts(
     /* [in] */ ArrayOf<Double> CFinance.masterLedgerFinTxJoin.debitedAmounts);

    CARAPI GetMasterLedgerFinTxJoin_DebitedAmounts(
     [out, callee] ArrayOf<Double>* CFinance.masterLedgerFinTxJoin.debitedAmounts);


   CARAPI SetMasterLedgerFinTxJoin_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerFinTxJoin.businessChannelOwnerId);

    CARAPI GetMasterLedgerFinTxJoin_BusinessChannelOwnerId(
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


   CARAPI SetMasterLedgerLiability_MasterLedgerLiabilityId(
     /* [in] */ const String& CFinance.masterLedgerLiability.masterLedgerLiabilityId);

    CARAPI GetMasterLedgerLiability_MasterLedgerLiabilityId(
     /* [out] */ String* CFinance.masterLedgerLiability.masterLedgerLiabilityId);


   CARAPI SetMasterLedgerLiability_BankBSB(
     /* [in] */ const String& CFinance.masterLedgerLiability.bankBSB);

    CARAPI GetMasterLedgerLiability_BankBSB(
     /* [out] */ String* CFinance.masterLedgerLiability.bankBSB);


   CARAPI SetMasterLedgerLiability_BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerLiability.bankAccountNumber);

    CARAPI GetMasterLedgerLiability_BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerLiability.bankAccountNumber);


   CARAPI SetMasterLedgerLiability_NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerLiability.nameOnBankAccount);

    CARAPI GetMasterLedgerLiability_NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerLiability.nameOnBankAccount);


   CARAPI SetMasterLedgerLiability_Description(
     /* [in] */ const String& CFinance.masterLedgerLiability.description);

    CARAPI GetMasterLedgerLiability_Description(
     /* [out] */ String* CFinance.masterLedgerLiability.description);


   CARAPI SetMasterLedgerLiability_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerLiability.docRefs);

    CARAPI GetMasterLedgerLiability_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerLiability.docRefs);


   CARAPI SetMasterLedgerLiability_FeeId(
     /* [in] */ const String& CFinance.masterLedgerLiability.feeId);

    CARAPI GetMasterLedgerLiability_FeeId(
     /* [out] */ String* CFinance.masterLedgerLiability.feeId);


   CARAPI SetMasterLedgerLiability_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerLiability.masLedgeFinTxNum);

    CARAPI GetMasterLedgerLiability_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerLiability.masLedgeFinTxNum);


   CARAPI SetMasterLedgerLiability_Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level1AccountName);

    CARAPI GetMasterLedgerLiability_Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level1AccountName);


   CARAPI SetMasterLedgerLiability_Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level1AccountNum);

    CARAPI GetMasterLedgerLiability_Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level1AccountNum);


   CARAPI SetMasterLedgerLiability_Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level2AccountName);

    CARAPI GetMasterLedgerLiability_Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level2AccountName);


   CARAPI SetMasterLedgerLiability_Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level2AccountNum);

    CARAPI GetMasterLedgerLiability_Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level2AccountNum);


   CARAPI SetMasterLedgerLiability_Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level3AccountName);

    CARAPI GetMasterLedgerLiability_Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level3AccountName);


   CARAPI SetMasterLedgerLiability_Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level3AccountNum);

    CARAPI GetMasterLedgerLiability_Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level3AccountNum);


   CARAPI SetMasterLedgerLiability_Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level4AccountName);

    CARAPI GetMasterLedgerLiability_Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level4AccountName);


   CARAPI SetMasterLedgerLiability_Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level4AccountNum);

    CARAPI GetMasterLedgerLiability_Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level4AccountNum);


   CARAPI SetMasterLedgerLiability_Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level5AccountName);

    CARAPI GetMasterLedgerLiability_Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level5AccountName);


   CARAPI SetMasterLedgerLiability_Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level5AccountNum);

    CARAPI GetMasterLedgerLiability_Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level5AccountNum);


   CARAPI SetMasterLedgerLiability_Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level6AccountName);

    CARAPI GetMasterLedgerLiability_Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerLiability.level6AccountName);


   CARAPI SetMasterLedgerLiability_Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerLiability.level6AccountNum);

    CARAPI GetMasterLedgerLiability_Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerLiability.level6AccountNum);


   CARAPI SetMasterLedgerLiability_Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level1ClassName);

    CARAPI GetMasterLedgerLiability_Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerLiability.level1ClassName);


   CARAPI SetMasterLedgerLiability_Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level2ClassName);

    CARAPI GetMasterLedgerLiability_Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerLiability.level2ClassName);


   CARAPI SetMasterLedgerLiability_Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerLiability.level3ClassName);

    CARAPI GetMasterLedgerLiability_Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerLiability.level3ClassName);


   CARAPI SetMasterLedgerLiability_TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerLiability.transactionEffective);

    CARAPI GetMasterLedgerLiability_TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerLiability.transactionEffective);


   CARAPI SetMasterLedgerLiability_MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerLiability.masLedgeFinTxId);

    CARAPI GetMasterLedgerLiability_MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerLiability.masLedgeFinTxId);


   CARAPI SetMasterLedgerLiability_Cr(
     /* [in] */ Double CFinance.masterLedgerLiability.cr);

    CARAPI GetMasterLedgerLiability_Cr(
     /* [out] */ Double* CFinance.masterLedgerLiability.cr);


   CARAPI SetMasterLedgerLiability_Dr(
     /* [in] */ Double CFinance.masterLedgerLiability.dr);

    CARAPI GetMasterLedgerLiability_Dr(
     /* [out] */ Double* CFinance.masterLedgerLiability.dr);


   CARAPI SetMasterLedgerLiability_Bal(
     /* [in] */ Double CFinance.masterLedgerLiability.bal);

    CARAPI GetMasterLedgerLiability_Bal(
     /* [out] */ Double* CFinance.masterLedgerLiability.bal);


   CARAPI SetMasterLedgerLiability_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerLiability.businessChannelOwnerId);

    CARAPI GetMasterLedgerLiability_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerLiability.businessChannelOwnerId);


   CARAPI SetMasterLedgerLiability_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerLiability.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerLiability_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerLiability.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerLiability_ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerLiability.chartOfAccountsId);

    CARAPI GetMasterLedgerLiability_ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerLiability.chartOfAccountsId);


   CARAPI SetMasterLedgerLiability_ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerLiability.chartOfClassesId);

    CARAPI GetMasterLedgerLiability_ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerLiability.chartOfClassesId);


   CARAPI SetMasterLedgerLiability_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerLiability.branchId);

    CARAPI GetMasterLedgerLiability_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerLiability.branchId);


   CARAPI SetMasterLedgerLiability_DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerLiability.departmentId);

    CARAPI GetMasterLedgerLiability_DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerLiability.departmentId);


   CARAPI SetMasterLedgerLiability_BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerLiability.bankId);

    CARAPI GetMasterLedgerLiability_BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerLiability.bankId);


   CARAPI SetMasterLedgerLiability_ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerLiability.programId);

    CARAPI GetMasterLedgerLiability_ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerLiability.programId);


   CARAPI SetMasterLedgerLiability_ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerLiability.projectId);

    CARAPI GetMasterLedgerLiability_ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerLiability.projectId);


   CARAPI SetMasterLedgerLiability_ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerLiability.itemId);

    CARAPI GetMasterLedgerLiability_ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerLiability.itemId);


   CARAPI SetMasterLedgerLiability_JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerLiability.jobId);

    CARAPI GetMasterLedgerLiability_JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerLiability.jobId);


   CARAPI SetMasterLedgerLiability_ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerLiability.serviceId);

    CARAPI GetMasterLedgerLiability_ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerLiability.serviceId);


   CARAPI SetMasterLedgerLiability_CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerLiability.customerId);

    CARAPI GetMasterLedgerLiability_CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerLiability.customerId);


   CARAPI SetMasterLedgerLiability_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerLiability.supplierId);

    CARAPI GetMasterLedgerLiability_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerLiability.supplierId);


   CARAPI SetMasterLedgerLiability_PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerLiability.purchOrderId);

    CARAPI GetMasterLedgerLiability_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerLiability.purchOrderId);


   CARAPI SetMasterLedgerLiability_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerLiability.masterSalesOrderId);

    CARAPI GetMasterLedgerLiability_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerLiability.masterSalesOrderId);


   CARAPI SetMasterLedgerLiability_InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerLiability.invoiceId);

    CARAPI GetMasterLedgerLiability_InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerLiability.invoiceId);


   CARAPI SetMasterLedgerLiability_BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerLiability.billId);

    CARAPI GetMasterLedgerLiability_BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerLiability.billId);


   CARAPI SetMasterLedgerEquity_MasterLedgerEquityId(
     /* [in] */ const String& CFinance.masterLedgerEquity.masterLedgerEquityId);

    CARAPI GetMasterLedgerEquity_MasterLedgerEquityId(
     /* [out] */ String* CFinance.masterLedgerEquity.masterLedgerEquityId);


   CARAPI SetMasterLedgerEquity_BankBSB(
     /* [in] */ const String& CFinance.masterLedgerEquity.bankBSB);

    CARAPI GetMasterLedgerEquity_BankBSB(
     /* [out] */ String* CFinance.masterLedgerEquity.bankBSB);


   CARAPI SetMasterLedgerEquity_BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerEquity.bankAccountNumber);

    CARAPI GetMasterLedgerEquity_BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerEquity.bankAccountNumber);


   CARAPI SetMasterLedgerEquity_NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerEquity.nameOnBankAccount);

    CARAPI GetMasterLedgerEquity_NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerEquity.nameOnBankAccount);


   CARAPI SetMasterLedgerEquity_Description(
     /* [in] */ const String& CFinance.masterLedgerEquity.description);

    CARAPI GetMasterLedgerEquity_Description(
     /* [out] */ String* CFinance.masterLedgerEquity.description);


   CARAPI SetMasterLedgerEquity_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerEquity.docRefs);

    CARAPI GetMasterLedgerEquity_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerEquity.docRefs);


   CARAPI SetMasterLedgerEquity_FeeId(
     /* [in] */ const String& CFinance.masterLedgerEquity.feeId);

    CARAPI GetMasterLedgerEquity_FeeId(
     /* [out] */ String* CFinance.masterLedgerEquity.feeId);


   CARAPI SetMasterLedgerEquity_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerEquity.masLedgeFinTxNum);

    CARAPI GetMasterLedgerEquity_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerEquity.masLedgeFinTxNum);


   CARAPI SetMasterLedgerEquity_Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level1AccountName);

    CARAPI GetMasterLedgerEquity_Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level1AccountName);


   CARAPI SetMasterLedgerEquity_Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level1AccountNum);

    CARAPI GetMasterLedgerEquity_Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level1AccountNum);


   CARAPI SetMasterLedgerEquity_Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level2AccountName);

    CARAPI GetMasterLedgerEquity_Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level2AccountName);


   CARAPI SetMasterLedgerEquity_Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level2AccountNum);

    CARAPI GetMasterLedgerEquity_Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level2AccountNum);


   CARAPI SetMasterLedgerEquity_Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level3AccountName);

    CARAPI GetMasterLedgerEquity_Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level3AccountName);


   CARAPI SetMasterLedgerEquity_Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level3AccountNum);

    CARAPI GetMasterLedgerEquity_Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level3AccountNum);


   CARAPI SetMasterLedgerEquity_Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level4AccountName);

    CARAPI GetMasterLedgerEquity_Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level4AccountName);


   CARAPI SetMasterLedgerEquity_Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level4AccountNum);

    CARAPI GetMasterLedgerEquity_Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level4AccountNum);


   CARAPI SetMasterLedgerEquity_Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level5AccountName);

    CARAPI GetMasterLedgerEquity_Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level5AccountName);


   CARAPI SetMasterLedgerEquity_Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level5AccountNum);

    CARAPI GetMasterLedgerEquity_Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level5AccountNum);


   CARAPI SetMasterLedgerEquity_Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level6AccountName);

    CARAPI GetMasterLedgerEquity_Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerEquity.level6AccountName);


   CARAPI SetMasterLedgerEquity_Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerEquity.level6AccountNum);

    CARAPI GetMasterLedgerEquity_Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerEquity.level6AccountNum);


   CARAPI SetMasterLedgerEquity_Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level1ClassName);

    CARAPI GetMasterLedgerEquity_Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerEquity.level1ClassName);


   CARAPI SetMasterLedgerEquity_Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level2ClassName);

    CARAPI GetMasterLedgerEquity_Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerEquity.level2ClassName);


   CARAPI SetMasterLedgerEquity_Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerEquity.level3ClassName);

    CARAPI GetMasterLedgerEquity_Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerEquity.level3ClassName);


   CARAPI SetMasterLedgerEquity_TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerEquity.transactionEffective);

    CARAPI GetMasterLedgerEquity_TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerEquity.transactionEffective);


   CARAPI SetMasterLedgerEquity_MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerEquity.masLedgeFinTxId);

    CARAPI GetMasterLedgerEquity_MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerEquity.masLedgeFinTxId);


   CARAPI SetMasterLedgerEquity_Cr(
     /* [in] */ Double CFinance.masterLedgerEquity.cr);

    CARAPI GetMasterLedgerEquity_Cr(
     /* [out] */ Double* CFinance.masterLedgerEquity.cr);


   CARAPI SetMasterLedgerEquity_Dr(
     /* [in] */ Double CFinance.masterLedgerEquity.dr);

    CARAPI GetMasterLedgerEquity_Dr(
     /* [out] */ Double* CFinance.masterLedgerEquity.dr);


   CARAPI SetMasterLedgerEquity_Bal(
     /* [in] */ Double CFinance.masterLedgerEquity.bal);

    CARAPI GetMasterLedgerEquity_Bal(
     /* [out] */ Double* CFinance.masterLedgerEquity.bal);


   CARAPI SetMasterLedgerEquity_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerEquity.businessChannelOwnerId);

    CARAPI GetMasterLedgerEquity_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerEquity.businessChannelOwnerId);


   CARAPI SetMasterLedgerEquity_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerEquity.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerEquity_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerEquity.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerEquity_ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerEquity.chartOfAccountsId);

    CARAPI GetMasterLedgerEquity_ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerEquity.chartOfAccountsId);


   CARAPI SetMasterLedgerEquity_ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerEquity.chartOfClassesId);

    CARAPI GetMasterLedgerEquity_ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerEquity.chartOfClassesId);


   CARAPI SetMasterLedgerEquity_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerEquity.branchId);

    CARAPI GetMasterLedgerEquity_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerEquity.branchId);


   CARAPI SetMasterLedgerEquity_DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerEquity.departmentId);

    CARAPI GetMasterLedgerEquity_DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerEquity.departmentId);


   CARAPI SetMasterLedgerEquity_BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerEquity.bankId);

    CARAPI GetMasterLedgerEquity_BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerEquity.bankId);


   CARAPI SetMasterLedgerEquity_ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerEquity.programId);

    CARAPI GetMasterLedgerEquity_ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerEquity.programId);


   CARAPI SetMasterLedgerEquity_ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerEquity.projectId);

    CARAPI GetMasterLedgerEquity_ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerEquity.projectId);


   CARAPI SetMasterLedgerEquity_ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerEquity.itemId);

    CARAPI GetMasterLedgerEquity_ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerEquity.itemId);


   CARAPI SetMasterLedgerEquity_JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerEquity.jobId);

    CARAPI GetMasterLedgerEquity_JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerEquity.jobId);


   CARAPI SetMasterLedgerEquity_ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerEquity.serviceId);

    CARAPI GetMasterLedgerEquity_ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerEquity.serviceId);


   CARAPI SetMasterLedgerEquity_CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerEquity.customerId);

    CARAPI GetMasterLedgerEquity_CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerEquity.customerId);


   CARAPI SetMasterLedgerEquity_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerEquity.supplierId);

    CARAPI GetMasterLedgerEquity_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerEquity.supplierId);


   CARAPI SetMasterLedgerEquity_PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerEquity.purchOrderId);

    CARAPI GetMasterLedgerEquity_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerEquity.purchOrderId);


   CARAPI SetMasterLedgerEquity_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerEquity.masterSalesOrderId);

    CARAPI GetMasterLedgerEquity_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerEquity.masterSalesOrderId);


   CARAPI SetMasterLedgerEquity_InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerEquity.invoiceId);

    CARAPI GetMasterLedgerEquity_InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerEquity.invoiceId);


   CARAPI SetMasterLedgerEquity_BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerEquity.billId);

    CARAPI GetMasterLedgerEquity_BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerEquity.billId);


   CARAPI SetMasterLedgerSuspense_MasterLedgerSuspenseId(
     /* [in] */ const String& CFinance.masterLedgerSuspense.masterLedgerSuspenseId);

    CARAPI GetMasterLedgerSuspense_MasterLedgerSuspenseId(
     /* [out] */ String* CFinance.masterLedgerSuspense.masterLedgerSuspenseId);


   CARAPI SetMasterLedgerSuspense_BankBSB(
     /* [in] */ const String& CFinance.masterLedgerSuspense.bankBSB);

    CARAPI GetMasterLedgerSuspense_BankBSB(
     /* [out] */ String* CFinance.masterLedgerSuspense.bankBSB);


   CARAPI SetMasterLedgerSuspense_BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerSuspense.bankAccountNumber);

    CARAPI GetMasterLedgerSuspense_BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerSuspense.bankAccountNumber);


   CARAPI SetMasterLedgerSuspense_NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerSuspense.nameOnBankAccount);

    CARAPI GetMasterLedgerSuspense_NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerSuspense.nameOnBankAccount);


   CARAPI SetMasterLedgerSuspense_Description(
     /* [in] */ const String& CFinance.masterLedgerSuspense.description);

    CARAPI GetMasterLedgerSuspense_Description(
     /* [out] */ String* CFinance.masterLedgerSuspense.description);


   CARAPI SetMasterLedgerSuspense_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerSuspense.docRefs);

    CARAPI GetMasterLedgerSuspense_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerSuspense.docRefs);


   CARAPI SetMasterLedgerSuspense_FeeId(
     /* [in] */ const String& CFinance.masterLedgerSuspense.feeId);

    CARAPI GetMasterLedgerSuspense_FeeId(
     /* [out] */ String* CFinance.masterLedgerSuspense.feeId);


   CARAPI SetMasterLedgerSuspense_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerSuspense.masLedgeFinTxNum);

    CARAPI GetMasterLedgerSuspense_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerSuspense.masLedgeFinTxNum);


   CARAPI SetMasterLedgerSuspense_Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level1AccountName);

    CARAPI GetMasterLedgerSuspense_Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level1AccountName);


   CARAPI SetMasterLedgerSuspense_Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level1AccountNum);

    CARAPI GetMasterLedgerSuspense_Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level1AccountNum);


   CARAPI SetMasterLedgerSuspense_Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level2AccountName);

    CARAPI GetMasterLedgerSuspense_Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level2AccountName);


   CARAPI SetMasterLedgerSuspense_Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level2AccountNum);

    CARAPI GetMasterLedgerSuspense_Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level2AccountNum);


   CARAPI SetMasterLedgerSuspense_Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level3AccountName);

    CARAPI GetMasterLedgerSuspense_Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level3AccountName);


   CARAPI SetMasterLedgerSuspense_Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level3AccountNum);

    CARAPI GetMasterLedgerSuspense_Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level3AccountNum);


   CARAPI SetMasterLedgerSuspense_Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level4AccountName);

    CARAPI GetMasterLedgerSuspense_Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level4AccountName);


   CARAPI SetMasterLedgerSuspense_Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level4AccountNum);

    CARAPI GetMasterLedgerSuspense_Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level4AccountNum);


   CARAPI SetMasterLedgerSuspense_Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level5AccountName);

    CARAPI GetMasterLedgerSuspense_Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level5AccountName);


   CARAPI SetMasterLedgerSuspense_Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level5AccountNum);

    CARAPI GetMasterLedgerSuspense_Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level5AccountNum);


   CARAPI SetMasterLedgerSuspense_Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level6AccountName);

    CARAPI GetMasterLedgerSuspense_Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level6AccountName);


   CARAPI SetMasterLedgerSuspense_Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level6AccountNum);

    CARAPI GetMasterLedgerSuspense_Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerSuspense.level6AccountNum);


   CARAPI SetMasterLedgerSuspense_Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level1ClassName);

    CARAPI GetMasterLedgerSuspense_Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level1ClassName);


   CARAPI SetMasterLedgerSuspense_Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level2ClassName);

    CARAPI GetMasterLedgerSuspense_Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level2ClassName);


   CARAPI SetMasterLedgerSuspense_Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerSuspense.level3ClassName);

    CARAPI GetMasterLedgerSuspense_Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerSuspense.level3ClassName);


   CARAPI SetMasterLedgerSuspense_TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerSuspense.transactionEffective);

    CARAPI GetMasterLedgerSuspense_TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerSuspense.transactionEffective);


   CARAPI SetMasterLedgerSuspense_MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerSuspense.masLedgeFinTxId);

    CARAPI GetMasterLedgerSuspense_MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerSuspense.masLedgeFinTxId);


   CARAPI SetMasterLedgerSuspense_Cr(
     /* [in] */ Double CFinance.masterLedgerSuspense.cr);

    CARAPI GetMasterLedgerSuspense_Cr(
     /* [out] */ Double* CFinance.masterLedgerSuspense.cr);


   CARAPI SetMasterLedgerSuspense_Dr(
     /* [in] */ Double CFinance.masterLedgerSuspense.dr);

    CARAPI GetMasterLedgerSuspense_Dr(
     /* [out] */ Double* CFinance.masterLedgerSuspense.dr);


   CARAPI SetMasterLedgerSuspense_Bal(
     /* [in] */ Double CFinance.masterLedgerSuspense.bal);

    CARAPI GetMasterLedgerSuspense_Bal(
     /* [out] */ Double* CFinance.masterLedgerSuspense.bal);


   CARAPI SetMasterLedgerSuspense_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerSuspense.businessChannelOwnerId);

    CARAPI GetMasterLedgerSuspense_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerSuspense.businessChannelOwnerId);


   CARAPI SetMasterLedgerSuspense_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerSuspense.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerSuspense_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerSuspense.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerSuspense_ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerSuspense.chartOfAccountsId);

    CARAPI GetMasterLedgerSuspense_ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerSuspense.chartOfAccountsId);


   CARAPI SetMasterLedgerSuspense_ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerSuspense.chartOfClassesId);

    CARAPI GetMasterLedgerSuspense_ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerSuspense.chartOfClassesId);


   CARAPI SetMasterLedgerSuspense_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerSuspense.branchId);

    CARAPI GetMasterLedgerSuspense_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerSuspense.branchId);


   CARAPI SetMasterLedgerSuspense_DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerSuspense.departmentId);

    CARAPI GetMasterLedgerSuspense_DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerSuspense.departmentId);


   CARAPI SetMasterLedgerSuspense_BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerSuspense.bankId);

    CARAPI GetMasterLedgerSuspense_BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerSuspense.bankId);


   CARAPI SetMasterLedgerSuspense_ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerSuspense.programId);

    CARAPI GetMasterLedgerSuspense_ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerSuspense.programId);


   CARAPI SetMasterLedgerSuspense_ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerSuspense.projectId);

    CARAPI GetMasterLedgerSuspense_ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerSuspense.projectId);


   CARAPI SetMasterLedgerSuspense_ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerSuspense.itemId);

    CARAPI GetMasterLedgerSuspense_ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerSuspense.itemId);


   CARAPI SetMasterLedgerSuspense_JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerSuspense.jobId);

    CARAPI GetMasterLedgerSuspense_JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerSuspense.jobId);


   CARAPI SetMasterLedgerSuspense_ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerSuspense.serviceId);

    CARAPI GetMasterLedgerSuspense_ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerSuspense.serviceId);


   CARAPI SetMasterLedgerSuspense_CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerSuspense.customerId);

    CARAPI GetMasterLedgerSuspense_CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerSuspense.customerId);


   CARAPI SetMasterLedgerSuspense_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerSuspense.supplierId);

    CARAPI GetMasterLedgerSuspense_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerSuspense.supplierId);


   CARAPI SetMasterLedgerSuspense_PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerSuspense.purchOrderId);

    CARAPI GetMasterLedgerSuspense_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerSuspense.purchOrderId);


   CARAPI SetMasterLedgerSuspense_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerSuspense.masterSalesOrderId);

    CARAPI GetMasterLedgerSuspense_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerSuspense.masterSalesOrderId);


   CARAPI SetMasterLedgerSuspense_InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerSuspense.invoiceId);

    CARAPI GetMasterLedgerSuspense_InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerSuspense.invoiceId);


   CARAPI SetMasterLedgerSuspense_BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerSuspense.billId);

    CARAPI GetMasterLedgerSuspense_BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerSuspense.billId);


   CARAPI SetMasterLedgerIncome_MasterLedgerIncomeId(
     /* [in] */ const String& CFinance.masterLedgerIncome.masterLedgerIncomeId);

    CARAPI GetMasterLedgerIncome_MasterLedgerIncomeId(
     /* [out] */ String* CFinance.masterLedgerIncome.masterLedgerIncomeId);


   CARAPI SetMasterLedgerIncome_BankBSB(
     /* [in] */ const String& CFinance.masterLedgerIncome.bankBSB);

    CARAPI GetMasterLedgerIncome_BankBSB(
     /* [out] */ String* CFinance.masterLedgerIncome.bankBSB);


   CARAPI SetMasterLedgerIncome_BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerIncome.bankAccountNumber);

    CARAPI GetMasterLedgerIncome_BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerIncome.bankAccountNumber);


   CARAPI SetMasterLedgerIncome_NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerIncome.nameOnBankAccount);

    CARAPI GetMasterLedgerIncome_NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerIncome.nameOnBankAccount);


   CARAPI SetMasterLedgerIncome_Description(
     /* [in] */ const String& CFinance.masterLedgerIncome.description);

    CARAPI GetMasterLedgerIncome_Description(
     /* [out] */ String* CFinance.masterLedgerIncome.description);


   CARAPI SetMasterLedgerIncome_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerIncome.docRefs);

    CARAPI GetMasterLedgerIncome_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerIncome.docRefs);


   CARAPI SetMasterLedgerIncome_FeeId(
     /* [in] */ const String& CFinance.masterLedgerIncome.feeId);

    CARAPI GetMasterLedgerIncome_FeeId(
     /* [out] */ String* CFinance.masterLedgerIncome.feeId);


   CARAPI SetMasterLedgerIncome_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerIncome.masLedgeFinTxNum);

    CARAPI GetMasterLedgerIncome_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerIncome.masLedgeFinTxNum);


   CARAPI SetMasterLedgerIncome_Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level1AccountName);

    CARAPI GetMasterLedgerIncome_Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level1AccountName);


   CARAPI SetMasterLedgerIncome_Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level1AccountNum);

    CARAPI GetMasterLedgerIncome_Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level1AccountNum);


   CARAPI SetMasterLedgerIncome_Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level2AccountName);

    CARAPI GetMasterLedgerIncome_Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level2AccountName);


   CARAPI SetMasterLedgerIncome_Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level2AccountNum);

    CARAPI GetMasterLedgerIncome_Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level2AccountNum);


   CARAPI SetMasterLedgerIncome_Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level3AccountName);

    CARAPI GetMasterLedgerIncome_Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level3AccountName);


   CARAPI SetMasterLedgerIncome_Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level3AccountNum);

    CARAPI GetMasterLedgerIncome_Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level3AccountNum);


   CARAPI SetMasterLedgerIncome_Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level4AccountName);

    CARAPI GetMasterLedgerIncome_Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level4AccountName);


   CARAPI SetMasterLedgerIncome_Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level4AccountNum);

    CARAPI GetMasterLedgerIncome_Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level4AccountNum);


   CARAPI SetMasterLedgerIncome_Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level5AccountName);

    CARAPI GetMasterLedgerIncome_Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level5AccountName);


   CARAPI SetMasterLedgerIncome_Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level5AccountNum);

    CARAPI GetMasterLedgerIncome_Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level5AccountNum);


   CARAPI SetMasterLedgerIncome_Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level6AccountName);

    CARAPI GetMasterLedgerIncome_Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerIncome.level6AccountName);


   CARAPI SetMasterLedgerIncome_Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerIncome.level6AccountNum);

    CARAPI GetMasterLedgerIncome_Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerIncome.level6AccountNum);


   CARAPI SetMasterLedgerIncome_Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level1ClassName);

    CARAPI GetMasterLedgerIncome_Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerIncome.level1ClassName);


   CARAPI SetMasterLedgerIncome_Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level2ClassName);

    CARAPI GetMasterLedgerIncome_Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerIncome.level2ClassName);


   CARAPI SetMasterLedgerIncome_Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerIncome.level3ClassName);

    CARAPI GetMasterLedgerIncome_Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerIncome.level3ClassName);


   CARAPI SetMasterLedgerIncome_TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerIncome.transactionEffective);

    CARAPI GetMasterLedgerIncome_TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerIncome.transactionEffective);


   CARAPI SetMasterLedgerIncome_MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerIncome.masLedgeFinTxId);

    CARAPI GetMasterLedgerIncome_MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerIncome.masLedgeFinTxId);


   CARAPI SetMasterLedgerIncome_Cr(
     /* [in] */ Double CFinance.masterLedgerIncome.cr);

    CARAPI GetMasterLedgerIncome_Cr(
     /* [out] */ Double* CFinance.masterLedgerIncome.cr);


   CARAPI SetMasterLedgerIncome_Dr(
     /* [in] */ Double CFinance.masterLedgerIncome.dr);

    CARAPI GetMasterLedgerIncome_Dr(
     /* [out] */ Double* CFinance.masterLedgerIncome.dr);


   CARAPI SetMasterLedgerIncome_Bal(
     /* [in] */ Double CFinance.masterLedgerIncome.bal);

    CARAPI GetMasterLedgerIncome_Bal(
     /* [out] */ Double* CFinance.masterLedgerIncome.bal);


   CARAPI SetMasterLedgerIncome_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerIncome.businessChannelOwnerId);

    CARAPI GetMasterLedgerIncome_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerIncome.businessChannelOwnerId);


   CARAPI SetMasterLedgerIncome_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerIncome.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerIncome_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerIncome.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerIncome_ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerIncome.chartOfAccountsId);

    CARAPI GetMasterLedgerIncome_ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerIncome.chartOfAccountsId);


   CARAPI SetMasterLedgerIncome_ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerIncome.chartOfClassesId);

    CARAPI GetMasterLedgerIncome_ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerIncome.chartOfClassesId);


   CARAPI SetMasterLedgerIncome_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerIncome.branchId);

    CARAPI GetMasterLedgerIncome_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerIncome.branchId);


   CARAPI SetMasterLedgerIncome_DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerIncome.departmentId);

    CARAPI GetMasterLedgerIncome_DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerIncome.departmentId);


   CARAPI SetMasterLedgerIncome_BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerIncome.bankId);

    CARAPI GetMasterLedgerIncome_BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerIncome.bankId);


   CARAPI SetMasterLedgerIncome_ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerIncome.programId);

    CARAPI GetMasterLedgerIncome_ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerIncome.programId);


   CARAPI SetMasterLedgerIncome_ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerIncome.projectId);

    CARAPI GetMasterLedgerIncome_ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerIncome.projectId);


   CARAPI SetMasterLedgerIncome_ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerIncome.itemId);

    CARAPI GetMasterLedgerIncome_ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerIncome.itemId);


   CARAPI SetMasterLedgerIncome_JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerIncome.jobId);

    CARAPI GetMasterLedgerIncome_JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerIncome.jobId);


   CARAPI SetMasterLedgerIncome_ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerIncome.serviceId);

    CARAPI GetMasterLedgerIncome_ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerIncome.serviceId);


   CARAPI SetMasterLedgerIncome_CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerIncome.customerId);

    CARAPI GetMasterLedgerIncome_CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerIncome.customerId);


   CARAPI SetMasterLedgerIncome_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerIncome.supplierId);

    CARAPI GetMasterLedgerIncome_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerIncome.supplierId);


   CARAPI SetMasterLedgerIncome_PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerIncome.purchOrderId);

    CARAPI GetMasterLedgerIncome_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerIncome.purchOrderId);


   CARAPI SetMasterLedgerIncome_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerIncome.masterSalesOrderId);

    CARAPI GetMasterLedgerIncome_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerIncome.masterSalesOrderId);


   CARAPI SetMasterLedgerIncome_InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerIncome.invoiceId);

    CARAPI GetMasterLedgerIncome_InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerIncome.invoiceId);


   CARAPI SetMasterLedgerIncome_BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerIncome.billId);

    CARAPI GetMasterLedgerIncome_BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerIncome.billId);


   CARAPI SetMasterLedgerReturnsIn_MasterLedgerReturnsInId(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.masterLedgerReturnsInId);

    CARAPI GetMasterLedgerReturnsIn_MasterLedgerReturnsInId(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.masterLedgerReturnsInId);


   CARAPI SetMasterLedgerReturnsIn_BankBSB(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.bankBSB);

    CARAPI GetMasterLedgerReturnsIn_BankBSB(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.bankBSB);


   CARAPI SetMasterLedgerReturnsIn_BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.bankAccountNumber);

    CARAPI GetMasterLedgerReturnsIn_BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.bankAccountNumber);


   CARAPI SetMasterLedgerReturnsIn_NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.nameOnBankAccount);

    CARAPI GetMasterLedgerReturnsIn_NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.nameOnBankAccount);


   CARAPI SetMasterLedgerReturnsIn_Description(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.description);

    CARAPI GetMasterLedgerReturnsIn_Description(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.description);


   CARAPI SetMasterLedgerReturnsIn_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerReturnsIn.docRefs);

    CARAPI GetMasterLedgerReturnsIn_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerReturnsIn.docRefs);


   CARAPI SetMasterLedgerReturnsIn_FeeId(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.feeId);

    CARAPI GetMasterLedgerReturnsIn_FeeId(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.feeId);


   CARAPI SetMasterLedgerReturnsIn_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerReturnsIn.masLedgeFinTxNum);

    CARAPI GetMasterLedgerReturnsIn_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerReturnsIn.masLedgeFinTxNum);


   CARAPI SetMasterLedgerReturnsIn_Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level1AccountName);

    CARAPI GetMasterLedgerReturnsIn_Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level1AccountName);


   CARAPI SetMasterLedgerReturnsIn_Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level1AccountNum);

    CARAPI GetMasterLedgerReturnsIn_Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level1AccountNum);


   CARAPI SetMasterLedgerReturnsIn_Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level2AccountName);

    CARAPI GetMasterLedgerReturnsIn_Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level2AccountName);


   CARAPI SetMasterLedgerReturnsIn_Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level2AccountNum);

    CARAPI GetMasterLedgerReturnsIn_Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level2AccountNum);


   CARAPI SetMasterLedgerReturnsIn_Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level3AccountName);

    CARAPI GetMasterLedgerReturnsIn_Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level3AccountName);


   CARAPI SetMasterLedgerReturnsIn_Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level3AccountNum);

    CARAPI GetMasterLedgerReturnsIn_Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level3AccountNum);


   CARAPI SetMasterLedgerReturnsIn_Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level4AccountName);

    CARAPI GetMasterLedgerReturnsIn_Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level4AccountName);


   CARAPI SetMasterLedgerReturnsIn_Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level4AccountNum);

    CARAPI GetMasterLedgerReturnsIn_Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level4AccountNum);


   CARAPI SetMasterLedgerReturnsIn_Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level5AccountName);

    CARAPI GetMasterLedgerReturnsIn_Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level5AccountName);


   CARAPI SetMasterLedgerReturnsIn_Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level5AccountNum);

    CARAPI GetMasterLedgerReturnsIn_Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level5AccountNum);


   CARAPI SetMasterLedgerReturnsIn_Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level6AccountName);

    CARAPI GetMasterLedgerReturnsIn_Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level6AccountName);


   CARAPI SetMasterLedgerReturnsIn_Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level6AccountNum);

    CARAPI GetMasterLedgerReturnsIn_Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level6AccountNum);


   CARAPI SetMasterLedgerReturnsIn_Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level1ClassName);

    CARAPI GetMasterLedgerReturnsIn_Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level1ClassName);


   CARAPI SetMasterLedgerReturnsIn_Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level2ClassName);

    CARAPI GetMasterLedgerReturnsIn_Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level2ClassName);


   CARAPI SetMasterLedgerReturnsIn_Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.level3ClassName);

    CARAPI GetMasterLedgerReturnsIn_Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.level3ClassName);


   CARAPI SetMasterLedgerReturnsIn_TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.transactionEffective);

    CARAPI GetMasterLedgerReturnsIn_TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.transactionEffective);


   CARAPI SetMasterLedgerReturnsIn_MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerReturnsIn.masLedgeFinTxId);

    CARAPI GetMasterLedgerReturnsIn_MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerReturnsIn.masLedgeFinTxId);


   CARAPI SetMasterLedgerReturnsIn_Cr(
     /* [in] */ Double CFinance.masterLedgerReturnsIn.cr);

    CARAPI GetMasterLedgerReturnsIn_Cr(
     /* [out] */ Double* CFinance.masterLedgerReturnsIn.cr);


   CARAPI SetMasterLedgerReturnsIn_Dr(
     /* [in] */ Double CFinance.masterLedgerReturnsIn.dr);

    CARAPI GetMasterLedgerReturnsIn_Dr(
     /* [out] */ Double* CFinance.masterLedgerReturnsIn.dr);


   CARAPI SetMasterLedgerReturnsIn_Bal(
     /* [in] */ Double CFinance.masterLedgerReturnsIn.bal);

    CARAPI GetMasterLedgerReturnsIn_Bal(
     /* [out] */ Double* CFinance.masterLedgerReturnsIn.bal);


   CARAPI SetMasterLedgerReturnsIn_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerReturnsIn.businessChannelOwnerId);

    CARAPI GetMasterLedgerReturnsIn_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerReturnsIn.businessChannelOwnerId);


   CARAPI SetMasterLedgerReturnsIn_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerReturnsIn.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerReturnsIn_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerReturnsIn.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerReturnsIn_ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerReturnsIn.chartOfAccountsId);

    CARAPI GetMasterLedgerReturnsIn_ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerReturnsIn.chartOfAccountsId);


   CARAPI SetMasterLedgerReturnsIn_ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerReturnsIn.chartOfClassesId);

    CARAPI GetMasterLedgerReturnsIn_ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerReturnsIn.chartOfClassesId);


   CARAPI SetMasterLedgerReturnsIn_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerReturnsIn.branchId);

    CARAPI GetMasterLedgerReturnsIn_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerReturnsIn.branchId);


   CARAPI SetMasterLedgerReturnsIn_DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerReturnsIn.departmentId);

    CARAPI GetMasterLedgerReturnsIn_DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerReturnsIn.departmentId);


   CARAPI SetMasterLedgerReturnsIn_BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerReturnsIn.bankId);

    CARAPI GetMasterLedgerReturnsIn_BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerReturnsIn.bankId);


   CARAPI SetMasterLedgerReturnsIn_ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerReturnsIn.programId);

    CARAPI GetMasterLedgerReturnsIn_ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerReturnsIn.programId);


   CARAPI SetMasterLedgerReturnsIn_ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerReturnsIn.projectId);

    CARAPI GetMasterLedgerReturnsIn_ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerReturnsIn.projectId);


   CARAPI SetMasterLedgerReturnsIn_ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerReturnsIn.itemId);

    CARAPI GetMasterLedgerReturnsIn_ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerReturnsIn.itemId);


   CARAPI SetMasterLedgerReturnsIn_JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerReturnsIn.jobId);

    CARAPI GetMasterLedgerReturnsIn_JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerReturnsIn.jobId);


   CARAPI SetMasterLedgerReturnsIn_ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerReturnsIn.serviceId);

    CARAPI GetMasterLedgerReturnsIn_ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerReturnsIn.serviceId);


   CARAPI SetMasterLedgerReturnsIn_CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerReturnsIn.customerId);

    CARAPI GetMasterLedgerReturnsIn_CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerReturnsIn.customerId);


   CARAPI SetMasterLedgerReturnsIn_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerReturnsIn.supplierId);

    CARAPI GetMasterLedgerReturnsIn_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerReturnsIn.supplierId);


   CARAPI SetMasterLedgerReturnsIn_PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerReturnsIn.purchOrderId);

    CARAPI GetMasterLedgerReturnsIn_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerReturnsIn.purchOrderId);


   CARAPI SetMasterLedgerReturnsIn_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerReturnsIn.masterSalesOrderId);

    CARAPI GetMasterLedgerReturnsIn_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerReturnsIn.masterSalesOrderId);


   CARAPI SetMasterLedgerReturnsIn_InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerReturnsIn.invoiceId);

    CARAPI GetMasterLedgerReturnsIn_InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerReturnsIn.invoiceId);


   CARAPI SetMasterLedgerReturnsIn_BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerReturnsIn.billId);

    CARAPI GetMasterLedgerReturnsIn_BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerReturnsIn.billId);


   CARAPI SetMasterLedgerExpense_MasterLedgerExpenseId(
     /* [in] */ const String& CFinance.masterLedgerExpense.masterLedgerExpenseId);

    CARAPI GetMasterLedgerExpense_MasterLedgerExpenseId(
     /* [out] */ String* CFinance.masterLedgerExpense.masterLedgerExpenseId);


   CARAPI SetMasterLedgerExpense_BankBSB(
     /* [in] */ const String& CFinance.masterLedgerExpense.bankBSB);

    CARAPI GetMasterLedgerExpense_BankBSB(
     /* [out] */ String* CFinance.masterLedgerExpense.bankBSB);


   CARAPI SetMasterLedgerExpense_BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerExpense.bankAccountNumber);

    CARAPI GetMasterLedgerExpense_BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerExpense.bankAccountNumber);


   CARAPI SetMasterLedgerExpense_NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerExpense.nameOnBankAccount);

    CARAPI GetMasterLedgerExpense_NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerExpense.nameOnBankAccount);


   CARAPI SetMasterLedgerExpense_Description(
     /* [in] */ const String& CFinance.masterLedgerExpense.description);

    CARAPI GetMasterLedgerExpense_Description(
     /* [out] */ String* CFinance.masterLedgerExpense.description);


   CARAPI SetMasterLedgerExpense_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerExpense.docRefs);

    CARAPI GetMasterLedgerExpense_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerExpense.docRefs);


   CARAPI SetMasterLedgerExpense_FeeId(
     /* [in] */ const String& CFinance.masterLedgerExpense.feeId);

    CARAPI GetMasterLedgerExpense_FeeId(
     /* [out] */ String* CFinance.masterLedgerExpense.feeId);


   CARAPI SetMasterLedgerExpense_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerExpense.masLedgeFinTxNum);

    CARAPI GetMasterLedgerExpense_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerExpense.masLedgeFinTxNum);


   CARAPI SetMasterLedgerExpense_Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level1AccountName);

    CARAPI GetMasterLedgerExpense_Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level1AccountName);


   CARAPI SetMasterLedgerExpense_Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level1AccountNum);

    CARAPI GetMasterLedgerExpense_Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level1AccountNum);


   CARAPI SetMasterLedgerExpense_Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level2AccountName);

    CARAPI GetMasterLedgerExpense_Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level2AccountName);


   CARAPI SetMasterLedgerExpense_Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level2AccountNum);

    CARAPI GetMasterLedgerExpense_Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level2AccountNum);


   CARAPI SetMasterLedgerExpense_Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level3AccountName);

    CARAPI GetMasterLedgerExpense_Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level3AccountName);


   CARAPI SetMasterLedgerExpense_Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level3AccountNum);

    CARAPI GetMasterLedgerExpense_Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level3AccountNum);


   CARAPI SetMasterLedgerExpense_Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level4AccountName);

    CARAPI GetMasterLedgerExpense_Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level4AccountName);


   CARAPI SetMasterLedgerExpense_Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level4AccountNum);

    CARAPI GetMasterLedgerExpense_Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level4AccountNum);


   CARAPI SetMasterLedgerExpense_Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level5AccountName);

    CARAPI GetMasterLedgerExpense_Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level5AccountName);


   CARAPI SetMasterLedgerExpense_Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level5AccountNum);

    CARAPI GetMasterLedgerExpense_Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level5AccountNum);


   CARAPI SetMasterLedgerExpense_Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level6AccountName);

    CARAPI GetMasterLedgerExpense_Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerExpense.level6AccountName);


   CARAPI SetMasterLedgerExpense_Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerExpense.level6AccountNum);

    CARAPI GetMasterLedgerExpense_Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerExpense.level6AccountNum);


   CARAPI SetMasterLedgerExpense_Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level1ClassName);

    CARAPI GetMasterLedgerExpense_Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerExpense.level1ClassName);


   CARAPI SetMasterLedgerExpense_Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level2ClassName);

    CARAPI GetMasterLedgerExpense_Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerExpense.level2ClassName);


   CARAPI SetMasterLedgerExpense_Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerExpense.level3ClassName);

    CARAPI GetMasterLedgerExpense_Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerExpense.level3ClassName);


   CARAPI SetMasterLedgerExpense_TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerExpense.transactionEffective);

    CARAPI GetMasterLedgerExpense_TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerExpense.transactionEffective);


   CARAPI SetMasterLedgerExpense_MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerExpense.masLedgeFinTxId);

    CARAPI GetMasterLedgerExpense_MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerExpense.masLedgeFinTxId);


   CARAPI SetMasterLedgerExpense_Cr(
     /* [in] */ Double CFinance.masterLedgerExpense.cr);

    CARAPI GetMasterLedgerExpense_Cr(
     /* [out] */ Double* CFinance.masterLedgerExpense.cr);


   CARAPI SetMasterLedgerExpense_Dr(
     /* [in] */ Double CFinance.masterLedgerExpense.dr);

    CARAPI GetMasterLedgerExpense_Dr(
     /* [out] */ Double* CFinance.masterLedgerExpense.dr);


   CARAPI SetMasterLedgerExpense_Bal(
     /* [in] */ Double CFinance.masterLedgerExpense.bal);

    CARAPI GetMasterLedgerExpense_Bal(
     /* [out] */ Double* CFinance.masterLedgerExpense.bal);


   CARAPI SetMasterLedgerExpense_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerExpense.businessChannelOwnerId);

    CARAPI GetMasterLedgerExpense_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerExpense.businessChannelOwnerId);


   CARAPI SetMasterLedgerExpense_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerExpense.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerExpense_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerExpense.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerExpense_ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerExpense.chartOfAccountsId);

    CARAPI GetMasterLedgerExpense_ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerExpense.chartOfAccountsId);


   CARAPI SetMasterLedgerExpense_ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerExpense.chartOfClassesId);

    CARAPI GetMasterLedgerExpense_ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerExpense.chartOfClassesId);


   CARAPI SetMasterLedgerExpense_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerExpense.branchId);

    CARAPI GetMasterLedgerExpense_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerExpense.branchId);


   CARAPI SetMasterLedgerExpense_DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerExpense.departmentId);

    CARAPI GetMasterLedgerExpense_DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerExpense.departmentId);


   CARAPI SetMasterLedgerExpense_BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerExpense.bankId);

    CARAPI GetMasterLedgerExpense_BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerExpense.bankId);


   CARAPI SetMasterLedgerExpense_ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerExpense.programId);

    CARAPI GetMasterLedgerExpense_ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerExpense.programId);


   CARAPI SetMasterLedgerExpense_ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerExpense.projectId);

    CARAPI GetMasterLedgerExpense_ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerExpense.projectId);


   CARAPI SetMasterLedgerExpense_ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerExpense.itemId);

    CARAPI GetMasterLedgerExpense_ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerExpense.itemId);


   CARAPI SetMasterLedgerExpense_JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerExpense.jobId);

    CARAPI GetMasterLedgerExpense_JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerExpense.jobId);


   CARAPI SetMasterLedgerExpense_ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerExpense.serviceId);

    CARAPI GetMasterLedgerExpense_ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerExpense.serviceId);


   CARAPI SetMasterLedgerExpense_CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerExpense.customerId);

    CARAPI GetMasterLedgerExpense_CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerExpense.customerId);


   CARAPI SetMasterLedgerExpense_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerExpense.supplierId);

    CARAPI GetMasterLedgerExpense_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerExpense.supplierId);


   CARAPI SetMasterLedgerExpense_PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerExpense.purchOrderId);

    CARAPI GetMasterLedgerExpense_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerExpense.purchOrderId);


   CARAPI SetMasterLedgerExpense_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerExpense.masterSalesOrderId);

    CARAPI GetMasterLedgerExpense_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerExpense.masterSalesOrderId);


   CARAPI SetMasterLedgerExpense_InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerExpense.invoiceId);

    CARAPI GetMasterLedgerExpense_InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerExpense.invoiceId);


   CARAPI SetMasterLedgerExpense_BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerExpense.billId);

    CARAPI GetMasterLedgerExpense_BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerExpense.billId);


   CARAPI SetMasterLedgerReturnsOut_MasterLedgerReturnsOutId(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.masterLedgerReturnsOutId);

    CARAPI GetMasterLedgerReturnsOut_MasterLedgerReturnsOutId(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.masterLedgerReturnsOutId);


   CARAPI SetMasterLedgerReturnsOut_BankBSB(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.bankBSB);

    CARAPI GetMasterLedgerReturnsOut_BankBSB(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.bankBSB);


   CARAPI SetMasterLedgerReturnsOut_BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.bankAccountNumber);

    CARAPI GetMasterLedgerReturnsOut_BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.bankAccountNumber);


   CARAPI SetMasterLedgerReturnsOut_NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.nameOnBankAccount);

    CARAPI GetMasterLedgerReturnsOut_NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.nameOnBankAccount);


   CARAPI SetMasterLedgerReturnsOut_Description(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.description);

    CARAPI GetMasterLedgerReturnsOut_Description(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.description);


   CARAPI SetMasterLedgerReturnsOut_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerReturnsOut.docRefs);

    CARAPI GetMasterLedgerReturnsOut_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerReturnsOut.docRefs);


   CARAPI SetMasterLedgerReturnsOut_FeeId(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.feeId);

    CARAPI GetMasterLedgerReturnsOut_FeeId(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.feeId);


   CARAPI SetMasterLedgerReturnsOut_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerReturnsOut.masLedgeFinTxNum);

    CARAPI GetMasterLedgerReturnsOut_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerReturnsOut.masLedgeFinTxNum);


   CARAPI SetMasterLedgerReturnsOut_Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level1AccountName);

    CARAPI GetMasterLedgerReturnsOut_Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level1AccountName);


   CARAPI SetMasterLedgerReturnsOut_Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level1AccountNum);

    CARAPI GetMasterLedgerReturnsOut_Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level1AccountNum);


   CARAPI SetMasterLedgerReturnsOut_Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level2AccountName);

    CARAPI GetMasterLedgerReturnsOut_Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level2AccountName);


   CARAPI SetMasterLedgerReturnsOut_Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level2AccountNum);

    CARAPI GetMasterLedgerReturnsOut_Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level2AccountNum);


   CARAPI SetMasterLedgerReturnsOut_Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level3AccountName);

    CARAPI GetMasterLedgerReturnsOut_Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level3AccountName);


   CARAPI SetMasterLedgerReturnsOut_Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level3AccountNum);

    CARAPI GetMasterLedgerReturnsOut_Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level3AccountNum);


   CARAPI SetMasterLedgerReturnsOut_Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level4AccountName);

    CARAPI GetMasterLedgerReturnsOut_Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level4AccountName);


   CARAPI SetMasterLedgerReturnsOut_Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level4AccountNum);

    CARAPI GetMasterLedgerReturnsOut_Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level4AccountNum);


   CARAPI SetMasterLedgerReturnsOut_Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level5AccountName);

    CARAPI GetMasterLedgerReturnsOut_Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level5AccountName);


   CARAPI SetMasterLedgerReturnsOut_Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level5AccountNum);

    CARAPI GetMasterLedgerReturnsOut_Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level5AccountNum);


   CARAPI SetMasterLedgerReturnsOut_Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level6AccountName);

    CARAPI GetMasterLedgerReturnsOut_Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level6AccountName);


   CARAPI SetMasterLedgerReturnsOut_Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level6AccountNum);

    CARAPI GetMasterLedgerReturnsOut_Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level6AccountNum);


   CARAPI SetMasterLedgerReturnsOut_Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level1ClassName);

    CARAPI GetMasterLedgerReturnsOut_Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level1ClassName);


   CARAPI SetMasterLedgerReturnsOut_Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level2ClassName);

    CARAPI GetMasterLedgerReturnsOut_Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level2ClassName);


   CARAPI SetMasterLedgerReturnsOut_Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.level3ClassName);

    CARAPI GetMasterLedgerReturnsOut_Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.level3ClassName);


   CARAPI SetMasterLedgerReturnsOut_TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.transactionEffective);

    CARAPI GetMasterLedgerReturnsOut_TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.transactionEffective);


   CARAPI SetMasterLedgerReturnsOut_MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerReturnsOut.masLedgeFinTxId);

    CARAPI GetMasterLedgerReturnsOut_MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerReturnsOut.masLedgeFinTxId);


   CARAPI SetMasterLedgerReturnsOut_Cr(
     /* [in] */ Double CFinance.masterLedgerReturnsOut.cr);

    CARAPI GetMasterLedgerReturnsOut_Cr(
     /* [out] */ Double* CFinance.masterLedgerReturnsOut.cr);


   CARAPI SetMasterLedgerReturnsOut_Dr(
     /* [in] */ Double CFinance.masterLedgerReturnsOut.dr);

    CARAPI GetMasterLedgerReturnsOut_Dr(
     /* [out] */ Double* CFinance.masterLedgerReturnsOut.dr);


   CARAPI SetMasterLedgerReturnsOut_Bal(
     /* [in] */ Double CFinance.masterLedgerReturnsOut.bal);

    CARAPI GetMasterLedgerReturnsOut_Bal(
     /* [out] */ Double* CFinance.masterLedgerReturnsOut.bal);


   CARAPI SetMasterLedgerReturnsOut_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerReturnsOut.businessChannelOwnerId);

    CARAPI GetMasterLedgerReturnsOut_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerReturnsOut.businessChannelOwnerId);


   CARAPI SetMasterLedgerReturnsOut_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerReturnsOut.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerReturnsOut_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerReturnsOut.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerReturnsOut_ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerReturnsOut.chartOfAccountsId);

    CARAPI GetMasterLedgerReturnsOut_ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerReturnsOut.chartOfAccountsId);


   CARAPI SetMasterLedgerReturnsOut_ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerReturnsOut.chartOfClassesId);

    CARAPI GetMasterLedgerReturnsOut_ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerReturnsOut.chartOfClassesId);


   CARAPI SetMasterLedgerReturnsOut_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerReturnsOut.branchId);

    CARAPI GetMasterLedgerReturnsOut_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerReturnsOut.branchId);


   CARAPI SetMasterLedgerReturnsOut_DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerReturnsOut.departmentId);

    CARAPI GetMasterLedgerReturnsOut_DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerReturnsOut.departmentId);


   CARAPI SetMasterLedgerReturnsOut_BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerReturnsOut.bankId);

    CARAPI GetMasterLedgerReturnsOut_BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerReturnsOut.bankId);


   CARAPI SetMasterLedgerReturnsOut_ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerReturnsOut.programId);

    CARAPI GetMasterLedgerReturnsOut_ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerReturnsOut.programId);


   CARAPI SetMasterLedgerReturnsOut_ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerReturnsOut.projectId);

    CARAPI GetMasterLedgerReturnsOut_ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerReturnsOut.projectId);


   CARAPI SetMasterLedgerReturnsOut_ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerReturnsOut.itemId);

    CARAPI GetMasterLedgerReturnsOut_ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerReturnsOut.itemId);


   CARAPI SetMasterLedgerReturnsOut_JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerReturnsOut.jobId);

    CARAPI GetMasterLedgerReturnsOut_JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerReturnsOut.jobId);


   CARAPI SetMasterLedgerReturnsOut_ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerReturnsOut.serviceId);

    CARAPI GetMasterLedgerReturnsOut_ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerReturnsOut.serviceId);


   CARAPI SetMasterLedgerReturnsOut_CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerReturnsOut.customerId);

    CARAPI GetMasterLedgerReturnsOut_CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerReturnsOut.customerId);


   CARAPI SetMasterLedgerReturnsOut_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerReturnsOut.supplierId);

    CARAPI GetMasterLedgerReturnsOut_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerReturnsOut.supplierId);


   CARAPI SetMasterLedgerReturnsOut_PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerReturnsOut.purchOrderId);

    CARAPI GetMasterLedgerReturnsOut_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerReturnsOut.purchOrderId);


   CARAPI SetMasterLedgerReturnsOut_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerReturnsOut.masterSalesOrderId);

    CARAPI GetMasterLedgerReturnsOut_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerReturnsOut.masterSalesOrderId);


   CARAPI SetMasterLedgerReturnsOut_InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerReturnsOut.invoiceId);

    CARAPI GetMasterLedgerReturnsOut_InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerReturnsOut.invoiceId);


   CARAPI SetMasterLedgerReturnsOut_BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerReturnsOut.billId);

    CARAPI GetMasterLedgerReturnsOut_BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerReturnsOut.billId);


   CARAPI SetMasterLedgerOtherIncome_MasterLedgerOtherIncomeId(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.masterLedgerOtherIncomeId);

    CARAPI GetMasterLedgerOtherIncome_MasterLedgerOtherIncomeId(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.masterLedgerOtherIncomeId);


   CARAPI SetMasterLedgerOtherIncome_BankBSB(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.bankBSB);

    CARAPI GetMasterLedgerOtherIncome_BankBSB(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.bankBSB);


   CARAPI SetMasterLedgerOtherIncome_BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.bankAccountNumber);

    CARAPI GetMasterLedgerOtherIncome_BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.bankAccountNumber);


   CARAPI SetMasterLedgerOtherIncome_NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.nameOnBankAccount);

    CARAPI GetMasterLedgerOtherIncome_NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.nameOnBankAccount);


   CARAPI SetMasterLedgerOtherIncome_Description(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.description);

    CARAPI GetMasterLedgerOtherIncome_Description(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.description);


   CARAPI SetMasterLedgerOtherIncome_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerOtherIncome.docRefs);

    CARAPI GetMasterLedgerOtherIncome_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerOtherIncome.docRefs);


   CARAPI SetMasterLedgerOtherIncome_FeeId(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.feeId);

    CARAPI GetMasterLedgerOtherIncome_FeeId(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.feeId);


   CARAPI SetMasterLedgerOtherIncome_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerOtherIncome.masLedgeFinTxNum);

    CARAPI GetMasterLedgerOtherIncome_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerOtherIncome.masLedgeFinTxNum);


   CARAPI SetMasterLedgerOtherIncome_Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level1AccountName);

    CARAPI GetMasterLedgerOtherIncome_Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level1AccountName);


   CARAPI SetMasterLedgerOtherIncome_Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level1AccountNum);

    CARAPI GetMasterLedgerOtherIncome_Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level1AccountNum);


   CARAPI SetMasterLedgerOtherIncome_Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level2AccountName);

    CARAPI GetMasterLedgerOtherIncome_Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level2AccountName);


   CARAPI SetMasterLedgerOtherIncome_Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level2AccountNum);

    CARAPI GetMasterLedgerOtherIncome_Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level2AccountNum);


   CARAPI SetMasterLedgerOtherIncome_Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level3AccountName);

    CARAPI GetMasterLedgerOtherIncome_Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level3AccountName);


   CARAPI SetMasterLedgerOtherIncome_Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level3AccountNum);

    CARAPI GetMasterLedgerOtherIncome_Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level3AccountNum);


   CARAPI SetMasterLedgerOtherIncome_Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level4AccountName);

    CARAPI GetMasterLedgerOtherIncome_Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level4AccountName);


   CARAPI SetMasterLedgerOtherIncome_Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level4AccountNum);

    CARAPI GetMasterLedgerOtherIncome_Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level4AccountNum);


   CARAPI SetMasterLedgerOtherIncome_Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level5AccountName);

    CARAPI GetMasterLedgerOtherIncome_Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level5AccountName);


   CARAPI SetMasterLedgerOtherIncome_Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level5AccountNum);

    CARAPI GetMasterLedgerOtherIncome_Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level5AccountNum);


   CARAPI SetMasterLedgerOtherIncome_Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level6AccountName);

    CARAPI GetMasterLedgerOtherIncome_Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level6AccountName);


   CARAPI SetMasterLedgerOtherIncome_Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level6AccountNum);

    CARAPI GetMasterLedgerOtherIncome_Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level6AccountNum);


   CARAPI SetMasterLedgerOtherIncome_Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level1ClassName);

    CARAPI GetMasterLedgerOtherIncome_Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level1ClassName);


   CARAPI SetMasterLedgerOtherIncome_Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level2ClassName);

    CARAPI GetMasterLedgerOtherIncome_Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level2ClassName);


   CARAPI SetMasterLedgerOtherIncome_Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.level3ClassName);

    CARAPI GetMasterLedgerOtherIncome_Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.level3ClassName);


   CARAPI SetMasterLedgerOtherIncome_TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.transactionEffective);

    CARAPI GetMasterLedgerOtherIncome_TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.transactionEffective);


   CARAPI SetMasterLedgerOtherIncome_MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerOtherIncome.masLedgeFinTxId);

    CARAPI GetMasterLedgerOtherIncome_MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerOtherIncome.masLedgeFinTxId);


   CARAPI SetMasterLedgerOtherIncome_Cr(
     /* [in] */ Double CFinance.masterLedgerOtherIncome.cr);

    CARAPI GetMasterLedgerOtherIncome_Cr(
     /* [out] */ Double* CFinance.masterLedgerOtherIncome.cr);


   CARAPI SetMasterLedgerOtherIncome_Dr(
     /* [in] */ Double CFinance.masterLedgerOtherIncome.dr);

    CARAPI GetMasterLedgerOtherIncome_Dr(
     /* [out] */ Double* CFinance.masterLedgerOtherIncome.dr);


   CARAPI SetMasterLedgerOtherIncome_Bal(
     /* [in] */ Double CFinance.masterLedgerOtherIncome.bal);

    CARAPI GetMasterLedgerOtherIncome_Bal(
     /* [out] */ Double* CFinance.masterLedgerOtherIncome.bal);


   CARAPI SetMasterLedgerOtherIncome_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerOtherIncome.businessChannelOwnerId);

    CARAPI GetMasterLedgerOtherIncome_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerOtherIncome.businessChannelOwnerId);


   CARAPI SetMasterLedgerOtherIncome_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerOtherIncome.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerOtherIncome_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerOtherIncome.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerOtherIncome_ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerOtherIncome.chartOfAccountsId);

    CARAPI GetMasterLedgerOtherIncome_ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerOtherIncome.chartOfAccountsId);


   CARAPI SetMasterLedgerOtherIncome_ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerOtherIncome.chartOfClassesId);

    CARAPI GetMasterLedgerOtherIncome_ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerOtherIncome.chartOfClassesId);


   CARAPI SetMasterLedgerOtherIncome_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerOtherIncome.branchId);

    CARAPI GetMasterLedgerOtherIncome_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerOtherIncome.branchId);


   CARAPI SetMasterLedgerOtherIncome_DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerOtherIncome.departmentId);

    CARAPI GetMasterLedgerOtherIncome_DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerOtherIncome.departmentId);


   CARAPI SetMasterLedgerOtherIncome_BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerOtherIncome.bankId);

    CARAPI GetMasterLedgerOtherIncome_BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerOtherIncome.bankId);


   CARAPI SetMasterLedgerOtherIncome_ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerOtherIncome.programId);

    CARAPI GetMasterLedgerOtherIncome_ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerOtherIncome.programId);


   CARAPI SetMasterLedgerOtherIncome_ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerOtherIncome.projectId);

    CARAPI GetMasterLedgerOtherIncome_ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerOtherIncome.projectId);


   CARAPI SetMasterLedgerOtherIncome_ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerOtherIncome.itemId);

    CARAPI GetMasterLedgerOtherIncome_ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerOtherIncome.itemId);


   CARAPI SetMasterLedgerOtherIncome_JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerOtherIncome.jobId);

    CARAPI GetMasterLedgerOtherIncome_JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerOtherIncome.jobId);


   CARAPI SetMasterLedgerOtherIncome_ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerOtherIncome.serviceId);

    CARAPI GetMasterLedgerOtherIncome_ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerOtherIncome.serviceId);


   CARAPI SetMasterLedgerOtherIncome_CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerOtherIncome.customerId);

    CARAPI GetMasterLedgerOtherIncome_CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerOtherIncome.customerId);


   CARAPI SetMasterLedgerOtherIncome_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerOtherIncome.supplierId);

    CARAPI GetMasterLedgerOtherIncome_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerOtherIncome.supplierId);


   CARAPI SetMasterLedgerOtherIncome_PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerOtherIncome.purchOrderId);

    CARAPI GetMasterLedgerOtherIncome_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerOtherIncome.purchOrderId);


   CARAPI SetMasterLedgerOtherIncome_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerOtherIncome.masterSalesOrderId);

    CARAPI GetMasterLedgerOtherIncome_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerOtherIncome.masterSalesOrderId);


   CARAPI SetMasterLedgerOtherIncome_InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerOtherIncome.invoiceId);

    CARAPI GetMasterLedgerOtherIncome_InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerOtherIncome.invoiceId);


   CARAPI SetMasterLedgerOtherIncome_BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerOtherIncome.billId);

    CARAPI GetMasterLedgerOtherIncome_BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerOtherIncome.billId);


   CARAPI SetMasterLedgerOtherExpense_MasterLedgerOtherExpenseId(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.masterLedgerOtherExpenseId);

    CARAPI GetMasterLedgerOtherExpense_MasterLedgerOtherExpenseId(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.masterLedgerOtherExpenseId);


   CARAPI SetMasterLedgerOtherExpense_BankBSB(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.bankBSB);

    CARAPI GetMasterLedgerOtherExpense_BankBSB(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.bankBSB);


   CARAPI SetMasterLedgerOtherExpense_BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.bankAccountNumber);

    CARAPI GetMasterLedgerOtherExpense_BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.bankAccountNumber);


   CARAPI SetMasterLedgerOtherExpense_NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.nameOnBankAccount);

    CARAPI GetMasterLedgerOtherExpense_NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.nameOnBankAccount);


   CARAPI SetMasterLedgerOtherExpense_Description(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.description);

    CARAPI GetMasterLedgerOtherExpense_Description(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.description);


   CARAPI SetMasterLedgerOtherExpense_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerOtherExpense.docRefs);

    CARAPI GetMasterLedgerOtherExpense_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerOtherExpense.docRefs);


   CARAPI SetMasterLedgerOtherExpense_FeeId(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.feeId);

    CARAPI GetMasterLedgerOtherExpense_FeeId(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.feeId);


   CARAPI SetMasterLedgerOtherExpense_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerOtherExpense.masLedgeFinTxNum);

    CARAPI GetMasterLedgerOtherExpense_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerOtherExpense.masLedgeFinTxNum);


   CARAPI SetMasterLedgerOtherExpense_Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level1AccountName);

    CARAPI GetMasterLedgerOtherExpense_Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level1AccountName);


   CARAPI SetMasterLedgerOtherExpense_Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level1AccountNum);

    CARAPI GetMasterLedgerOtherExpense_Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level1AccountNum);


   CARAPI SetMasterLedgerOtherExpense_Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level2AccountName);

    CARAPI GetMasterLedgerOtherExpense_Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level2AccountName);


   CARAPI SetMasterLedgerOtherExpense_Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level2AccountNum);

    CARAPI GetMasterLedgerOtherExpense_Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level2AccountNum);


   CARAPI SetMasterLedgerOtherExpense_Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level3AccountName);

    CARAPI GetMasterLedgerOtherExpense_Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level3AccountName);


   CARAPI SetMasterLedgerOtherExpense_Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level3AccountNum);

    CARAPI GetMasterLedgerOtherExpense_Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level3AccountNum);


   CARAPI SetMasterLedgerOtherExpense_Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level4AccountName);

    CARAPI GetMasterLedgerOtherExpense_Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level4AccountName);


   CARAPI SetMasterLedgerOtherExpense_Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level4AccountNum);

    CARAPI GetMasterLedgerOtherExpense_Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level4AccountNum);


   CARAPI SetMasterLedgerOtherExpense_Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level5AccountName);

    CARAPI GetMasterLedgerOtherExpense_Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level5AccountName);


   CARAPI SetMasterLedgerOtherExpense_Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level5AccountNum);

    CARAPI GetMasterLedgerOtherExpense_Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level5AccountNum);


   CARAPI SetMasterLedgerOtherExpense_Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level6AccountName);

    CARAPI GetMasterLedgerOtherExpense_Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level6AccountName);


   CARAPI SetMasterLedgerOtherExpense_Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level6AccountNum);

    CARAPI GetMasterLedgerOtherExpense_Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level6AccountNum);


   CARAPI SetMasterLedgerOtherExpense_Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level1ClassName);

    CARAPI GetMasterLedgerOtherExpense_Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level1ClassName);


   CARAPI SetMasterLedgerOtherExpense_Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level2ClassName);

    CARAPI GetMasterLedgerOtherExpense_Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level2ClassName);


   CARAPI SetMasterLedgerOtherExpense_Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.level3ClassName);

    CARAPI GetMasterLedgerOtherExpense_Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.level3ClassName);


   CARAPI SetMasterLedgerOtherExpense_TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.transactionEffective);

    CARAPI GetMasterLedgerOtherExpense_TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.transactionEffective);


   CARAPI SetMasterLedgerOtherExpense_MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerOtherExpense.masLedgeFinTxId);

    CARAPI GetMasterLedgerOtherExpense_MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerOtherExpense.masLedgeFinTxId);


   CARAPI SetMasterLedgerOtherExpense_Cr(
     /* [in] */ Double CFinance.masterLedgerOtherExpense.cr);

    CARAPI GetMasterLedgerOtherExpense_Cr(
     /* [out] */ Double* CFinance.masterLedgerOtherExpense.cr);


   CARAPI SetMasterLedgerOtherExpense_Dr(
     /* [in] */ Double CFinance.masterLedgerOtherExpense.dr);

    CARAPI GetMasterLedgerOtherExpense_Dr(
     /* [out] */ Double* CFinance.masterLedgerOtherExpense.dr);


   CARAPI SetMasterLedgerOtherExpense_Bal(
     /* [in] */ Double CFinance.masterLedgerOtherExpense.bal);

    CARAPI GetMasterLedgerOtherExpense_Bal(
     /* [out] */ Double* CFinance.masterLedgerOtherExpense.bal);


   CARAPI SetMasterLedgerOtherExpense_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerOtherExpense.businessChannelOwnerId);

    CARAPI GetMasterLedgerOtherExpense_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerOtherExpense.businessChannelOwnerId);


   CARAPI SetMasterLedgerOtherExpense_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerOtherExpense.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerOtherExpense_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerOtherExpense.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerOtherExpense_ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerOtherExpense.chartOfAccountsId);

    CARAPI GetMasterLedgerOtherExpense_ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerOtherExpense.chartOfAccountsId);


   CARAPI SetMasterLedgerOtherExpense_ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerOtherExpense.chartOfClassesId);

    CARAPI GetMasterLedgerOtherExpense_ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerOtherExpense.chartOfClassesId);


   CARAPI SetMasterLedgerOtherExpense_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerOtherExpense.branchId);

    CARAPI GetMasterLedgerOtherExpense_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerOtherExpense.branchId);


   CARAPI SetMasterLedgerOtherExpense_DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerOtherExpense.departmentId);

    CARAPI GetMasterLedgerOtherExpense_DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerOtherExpense.departmentId);


   CARAPI SetMasterLedgerOtherExpense_BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerOtherExpense.bankId);

    CARAPI GetMasterLedgerOtherExpense_BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerOtherExpense.bankId);


   CARAPI SetMasterLedgerOtherExpense_ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerOtherExpense.programId);

    CARAPI GetMasterLedgerOtherExpense_ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerOtherExpense.programId);


   CARAPI SetMasterLedgerOtherExpense_ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerOtherExpense.projectId);

    CARAPI GetMasterLedgerOtherExpense_ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerOtherExpense.projectId);


   CARAPI SetMasterLedgerOtherExpense_ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerOtherExpense.itemId);

    CARAPI GetMasterLedgerOtherExpense_ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerOtherExpense.itemId);


   CARAPI SetMasterLedgerOtherExpense_JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerOtherExpense.jobId);

    CARAPI GetMasterLedgerOtherExpense_JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerOtherExpense.jobId);


   CARAPI SetMasterLedgerOtherExpense_ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerOtherExpense.serviceId);

    CARAPI GetMasterLedgerOtherExpense_ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerOtherExpense.serviceId);


   CARAPI SetMasterLedgerOtherExpense_CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerOtherExpense.customerId);

    CARAPI GetMasterLedgerOtherExpense_CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerOtherExpense.customerId);


   CARAPI SetMasterLedgerOtherExpense_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerOtherExpense.supplierId);

    CARAPI GetMasterLedgerOtherExpense_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerOtherExpense.supplierId);


   CARAPI SetMasterLedgerOtherExpense_PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerOtherExpense.purchOrderId);

    CARAPI GetMasterLedgerOtherExpense_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerOtherExpense.purchOrderId);


   CARAPI SetMasterLedgerOtherExpense_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerOtherExpense.masterSalesOrderId);

    CARAPI GetMasterLedgerOtherExpense_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerOtherExpense.masterSalesOrderId);


   CARAPI SetMasterLedgerOtherExpense_InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerOtherExpense.invoiceId);

    CARAPI GetMasterLedgerOtherExpense_InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerOtherExpense.invoiceId);


   CARAPI SetMasterLedgerOtherExpense_BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerOtherExpense.billId);

    CARAPI GetMasterLedgerOtherExpense_BillId(
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
     /* [in] */ CFinance.masterAssetRegister CFinance.level1BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel1BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level1BudCARAPI Get.masterAsCARAPI SetId);


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
     /* [in] */ CFinance.masterAssetRegister CFinance.level2BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel2BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level2BudCARAPI Get.masterAsCARAPI SetId);


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
     /* [in] */ CFinance.masterAssetRegister CFinance.level3BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel3BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level3BudCARAPI Get.masterAsCARAPI SetId);


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
     /* [in] */ CFinance.masterAssetRegister CFinance.level4BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel4BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level4BudCARAPI Get.masterAsCARAPI SetId);


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
     /* [in] */ CFinance.masterAssetRegister CFinance.level5BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel5BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level5BudCARAPI Get.masterAsCARAPI SetId);


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
     /* [in] */ CFinance.masterAssetRegister CFinance.level6BudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetLevel6BudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level6BudCARAPI Get.masterAsCARAPI SetId);


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
     /* [in] */ CFinance.masterAssetRegister CFinance.hyperBudCARAPI Get.masterAsCARAPI SetId);

    CARAPI GetHyperBudCARAPI Get.MasterAsCARAPI SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.hyperBudCARAPI Get.masterAsCARAPI SetId);


   CARAPI SetHyperBudCARAPI Get.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.hyperBudCARAPI Get.businessChannelOwnerId);

    CARAPI GetHyperBudCARAPI Get.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.hyperBudCARAPI Get.businessChannelOwnerId);


   CARAPI SetInvoice_InvoiceId(
     /* [in] */ const String& CFinance.invoice.invoiceId);

    CARAPI GetInvoice_InvoiceId(
     /* [out] */ String* CFinance.invoice.invoiceId);


   CARAPI SetInvoice_InvoiceDate(
     /* [in] */ const String& CFinance.invoice.invoiceDate);

    CARAPI GetInvoice_InvoiceDate(
     /* [out] */ String* CFinance.invoice.invoiceDate);


   CARAPI SetInvoice_InvoiceAmount(
     /* [in] */ Double CFinance.invoice.invoiceAmount);

    CARAPI GetInvoice_InvoiceAmount(
     /* [out] */ Double* CFinance.invoice.invoiceAmount);


   CARAPI SetInvoice_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.invoice.docRefs);

    CARAPI GetInvoice_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.invoice.docRefs);


   CARAPI SetInvoice_PaidDate(
     /* [in] */ const String& CFinance.invoice.paidDate);

    CARAPI GetInvoice_PaidDate(
     /* [out] */ String* CFinance.invoice.paidDate);


   CARAPI SetInvoice_GenLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFinance.invoice.genLedgeFinTxIds);

    CARAPI GetInvoice_GenLedgeFinTxIds(
     [out, callee] ArrayOf<String>* CFinance.invoice.genLedgeFinTxIds);


   CARAPI SetInvoice_MasLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFinance.invoice.masLedgeFinTxIds);

    CARAPI GetInvoice_MasLedgeFinTxIds(
     [out, callee] ArrayOf<String>* CFinance.invoice.masLedgeFinTxIds);


   CARAPI SetInvoice_GenLedgeFinTxNum(
     /* [in] */ Int32 CFinance.invoice.genLedgeFinTxNum);

    CARAPI GetInvoice_GenLedgeFinTxNum(
     /* [out] */ Int32* CFinance.invoice.genLedgeFinTxNum);


   CARAPI SetInvoice_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.invoice.masLedgeFinTxNum);

    CARAPI GetInvoice_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.invoice.masLedgeFinTxNum);


   CARAPI SetInvoice_FeesAndChargesIds(
     /* [in] */ ArrayOf<const String&> CFinance.invoice.feesAndChargesIds);

    CARAPI GetInvoice_FeesAndChargesIds(
     [out, callee] ArrayOf<String>* CFinance.invoice.feesAndChargesIds);


   CARAPI SetInvoice_ChargeDates(
     /* [in] */ ArrayOf<const String&> CFinance.invoice.chargeDates);

    CARAPI GetInvoice_ChargeDates(
     [out, callee] ArrayOf<String>* CFinance.invoice.chargeDates);


   CARAPI SetInvoice_Customers(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.invoice.customers);

    CARAPI GetInvoice_Customers(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.invoice.customers);


   CARAPI SetInvoice_PropertyOwnerIds(
     /* [in] */ ArrayOf<CProperty.propertyOwner> CFinance.invoice.propertyOwnerIds);

    CARAPI GetInvoice_PropertyOwnerIds(
     [out, callee] ArrayOf<CProperty.propertyOwner>* CFinance.invoice.propertyOwnerIds);


   CARAPI SetInvoice_TenancyId(
     /* [in] */ CProperty.tenant CFinance.invoice.tenancyId);

    CARAPI GetInvoice_TenancyId(
     /* [out] */ CProperty.tenant* CFinance.invoice.tenancyId);


   CARAPI SetInvoice_ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFinance.invoice.itemIds);

    CARAPI GetInvoice_ItemIds(
     [out, callee] ArrayOf<CAdministration.item>* CFinance.invoice.itemIds);


   CARAPI SetInvoice_JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CFinance.invoice.jobIds);

    CARAPI GetInvoice_JobIds(
     [out, callee] ArrayOf<CAdministration.job>* CFinance.invoice.jobIds);


   CARAPI SetInvoice_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CFinance.invoice.serviceIds);

    CARAPI GetInvoice_ServiceIds(
     [out, callee] ArrayOf<CAdministration.service>* CFinance.invoice.serviceIds);


   CARAPI SetInvoice_MasterSalesOrderIds(
     /* [in] */ ArrayOf<CFinance.masterSalesOrder> CFinance.invoice.masterSalesOrderIds);

    CARAPI GetInvoice_MasterSalesOrderIds(
     [out, callee] ArrayOf<CFinance.masterSalesOrder>* CFinance.invoice.masterSalesOrderIds);


   CARAPI SetInvoice_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.invoice.masLedgeFinTxJoinId);

    CARAPI GetInvoice_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.invoice.masLedgeFinTxJoinId);


   CARAPI SetInvoice_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.invoice.businessChannelOwnerId);

    CARAPI GetInvoice_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.invoice.businessChannelOwnerId);


   CARAPI SetInvoice_BranchId(
     /* [in] */ CAdministration.branch CFinance.invoice.branchId);

    CARAPI GetInvoice_BranchId(
     /* [out] */ CAdministration.branch* CFinance.invoice.branchId);


   CARAPI SetInvoice_DeptId(
     /* [in] */ CAdministration.department CFinance.invoice.deptId);

    CARAPI GetInvoice_DeptId(
     /* [out] */ CAdministration.department* CFinance.invoice.deptId);


   CARAPI SetBill_BillId(
     /* [in] */ const String& CFinance.bill.billId);

    CARAPI GetBill_BillId(
     /* [out] */ String* CFinance.bill.billId);


   CARAPI SetBill_BillCodeScanned(
     /* [in] */ const String& CFinance.bill.billCodeScanned);

    CARAPI GetBill_BillCodeScanned(
     /* [out] */ String* CFinance.bill.billCodeScanned);


   CARAPI SetBill_BillDate(
     /* [in] */ const String& CFinance.bill.billDate);

    CARAPI GetBill_BillDate(
     /* [out] */ String* CFinance.bill.billDate);


   CARAPI SetBill_BillAmount(
     /* [in] */ Double CFinance.bill.billAmount);

    CARAPI GetBill_BillAmount(
     /* [out] */ Double* CFinance.bill.billAmount);


   CARAPI SetBill_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.bill.docRefs);

    CARAPI GetBill_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.bill.docRefs);


   CARAPI SetBill_PaidDate(
     /* [in] */ const String& CFinance.bill.paidDate);

    CARAPI GetBill_PaidDate(
     /* [out] */ String* CFinance.bill.paidDate);


   CARAPI SetBill_GenLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFinance.bill.genLedgeFinTxIds);

    CARAPI GetBill_GenLedgeFinTxIds(
     [out, callee] ArrayOf<String>* CFinance.bill.genLedgeFinTxIds);


   CARAPI SetBill_MasLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFinance.bill.masLedgeFinTxIds);

    CARAPI GetBill_MasLedgeFinTxIds(
     [out, callee] ArrayOf<String>* CFinance.bill.masLedgeFinTxIds);


   CARAPI SetBill_GenLedgeFinTxNum(
     /* [in] */ Int32 CFinance.bill.genLedgeFinTxNum);

    CARAPI GetBill_GenLedgeFinTxNum(
     /* [out] */ Int32* CFinance.bill.genLedgeFinTxNum);


   CARAPI SetBill_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.bill.masLedgeFinTxNum);

    CARAPI GetBill_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.bill.masLedgeFinTxNum);


   CARAPI SetBill_Passed(
     /* [in] */ Boolean CFinance.bill.passed);

    CARAPI GetBill_Passed(
     /* [out] */ Boolean* CFinance.bill.passed);


   CARAPI SetBill_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.bill.supplierId);

    CARAPI GetBill_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.bill.supplierId);


   CARAPI SetBill_ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFinance.bill.itemIds);

    CARAPI GetBill_ItemIds(
     [out, callee] ArrayOf<CAdministration.item>* CFinance.bill.itemIds);


   CARAPI SetBill_JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CFinance.bill.jobIds);

    CARAPI GetBill_JobIds(
     [out, callee] ArrayOf<CAdministration.job>* CFinance.bill.jobIds);


   CARAPI SetBill_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CFinance.bill.serviceIds);

    CARAPI GetBill_ServiceIds(
     [out, callee] ArrayOf<CAdministration.service>* CFinance.bill.serviceIds);


   CARAPI SetBill_PurchOrderIds(
     /* [in] */ ArrayOf<CFinance.purchaseOrder> CFinance.bill.purchOrderIds);

    CARAPI GetBill_PurchOrderIds(
     [out, callee] ArrayOf<CFinance.purchaseOrder>* CFinance.bill.purchOrderIds);


   CARAPI SetBill_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.bill.masLedgeFinTxJoinId);

    CARAPI GetBill_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.bill.masLedgeFinTxJoinId);


   CARAPI SetBill_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.bill.businessChannelOwnerId);

    CARAPI GetBill_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.bill.businessChannelOwnerId);


   CARAPI SetBill_BranchId(
     /* [in] */ CAdministration.branch CFinance.bill.branchId);

    CARAPI GetBill_BranchId(
     /* [out] */ CAdministration.branch* CFinance.bill.branchId);


   CARAPI SetBill_DeptId(
     /* [in] */ CAdministration.department CFinance.bill.deptId);

    CARAPI GetBill_DeptId(
     /* [out] */ CAdministration.department* CFinance.bill.deptId);


   CARAPI SetFeesAndCharges_FeeChargeId(
     /* [in] */ const String& CFinance.feesAndCharges.feeChargeId);

    CARAPI GetFeesAndCharges_FeeChargeId(
     /* [out] */ String* CFinance.feesAndCharges.feeChargeId);


   CARAPI SetFeesAndCharges_FeeChargeName(
     /* [in] */ const String& CFinance.feesAndCharges.feeChargeName);

    CARAPI GetFeesAndCharges_FeeChargeName(
     /* [out] */ String* CFinance.feesAndCharges.feeChargeName);


   CARAPI SetFeesAndCharges_FeeChargeCode(
     /* [in] */ const String& CFinance.feesAndCharges.feeChargeCode);

    CARAPI GetFeesAndCharges_FeeChargeCode(
     /* [out] */ String* CFinance.feesAndCharges.feeChargeCode);


   CARAPI SetFeesAndCharges_FeeChargeDescription(
     /* [in] */ const String& CFinance.feesAndCharges.feeChargeDescription);

    CARAPI GetFeesAndCharges_FeeChargeDescription(
     /* [out] */ String* CFinance.feesAndCharges.feeChargeDescription);


   CARAPI SetFeesAndCharges_FeeChargeRate(
     /* [in] */ Double CFinance.feesAndCharges.feeChargeRate);

    CARAPI GetFeesAndCharges_FeeChargeRate(
     /* [out] */ Double* CFinance.feesAndCharges.feeChargeRate);


   CARAPI SetFeesAndCharges_FeeChargeRateUnits(
     /* [in] */ const String& CFinance.feesAndCharges.feeChargeRateUnits);

    CARAPI GetFeesAndCharges_FeeChargeRateUnits(
     /* [out] */ String* CFinance.feesAndCharges.feeChargeRateUnits);


   CARAPI SetFeesAndCharges_PaymentInterval(
     /* [in] */ CHelper.billingInterval CFinance.feesAndCharges.billingInterval);

    CARAPI GetFeesAndCharges_PaymentInterval(
     /* [out] */ CHelper.billingInterval* CFinance.feesAndCharges.billingInterval);


   CARAPI SetFeesAndCharges_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.feesAndCharges.businessChannelOwnerId);

    CARAPI GetFeesAndCharges_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.feesAndCharges.businessChannelOwnerId);


   CARAPI SetFeesAndCharges_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CFinance.feesAndCharges.serviceIds);

    CARAPI GetFeesAndCharges_ServiceIds(
     [out, callee] ArrayOf<CAdministration.service>* CFinance.feesAndCharges.serviceIds);


   CARAPI SetFeesAndCharges_ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFinance.feesAndCharges.itemIds);

    CARAPI GetFeesAndCharges_ItemIds(
     [out, callee] ArrayOf<CAdministration.item>* CFinance.feesAndCharges.itemIds);


   CARAPI SetFeesAndCharges_ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CFinance.feesAndCharges.itemTypeIds);

    CARAPI GetFeesAndCharges_ItemTypeIds(
     [out, callee] ArrayOf<CAdministration.itemType>* CFinance.feesAndCharges.itemTypeIds);


   CARAPI SetPurchaseOrder_PurchOrderId(
     /* [in] */ const String& CFinance.purchaseOrder.purchOrderId);

    CARAPI GetPurchaseOrder_PurchOrderId(
     /* [out] */ String* CFinance.purchaseOrder.purchOrderId);


   CARAPI SetPurchaseOrder_MRQIdIfRentalProperty(
     /* [in] */ const String& CFinance.purchaseOrder.mRQIdIfRentalProperty);

    CARAPI GetPurchaseOrder_MRQIdIfRentalProperty(
     /* [out] */ String* CFinance.purchaseOrder.mRQIdIfRentalProperty);


   CARAPI SetPurchaseOrder_DamageCausedByCustomerTenantOthers(
     /* [in] */ Boolean CFinance.purchaseOrder.damageCausedByCustomerTenantOthers);

    CARAPI GetPurchaseOrder_DamageCausedByCustomerTenantOthers(
     /* [out] */ Boolean* CFinance.purchaseOrder.damageCausedByCustomerTenantOthers);


   CARAPI SetPurchaseOrder_OurResponsibility(
     /* [in] */ Boolean CFinance.purchaseOrder.ourResponsibility);

    CARAPI GetPurchaseOrder_OurResponsibility(
     /* [out] */ Boolean* CFinance.purchaseOrder.ourResponsibility);


   CARAPI SetPurchaseOrder_SummaryDescriptionOfProblemItemised(
     /* [in] */ ArrayOf<const String&> CFinance.purchaseOrder.summaryDescriptionOfProblemItemised);

    CARAPI GetPurchaseOrder_SummaryDescriptionOfProblemItemised(
     [out, callee] ArrayOf<String>* CFinance.purchaseOrder.summaryDescriptionOfProblemItemised);


   CARAPI SetPurchaseOrder_QuotedEstimateCost(
     /* [in] */ Double CFinance.purchaseOrder.quotedEstimateCost);

    CARAPI GetPurchaseOrder_QuotedEstimateCost(
     /* [out] */ Double* CFinance.purchaseOrder.quotedEstimateCost);


   CARAPI SetPurchaseOrder_ExpectedCompletionDate(
     /* [in] */ const String& CFinance.purchaseOrder.expectedCompletionDate);

    CARAPI GetPurchaseOrder_ExpectedCompletionDate(
     /* [out] */ String* CFinance.purchaseOrder.expectedCompletionDate);


   CARAPI SetPurchaseOrder_WorkCheckedPassed(
     /* [in] */ ArrayOf<Boolean> CFinance.purchaseOrder.workCheckedPassed);

    CARAPI GetPurchaseOrder_WorkCheckedPassed(
     [out, callee] ArrayOf<Boolean>* CFinance.purchaseOrder.workCheckedPassed);


   CARAPI SetPurchaseOrder_TotalMaintPurchOrderAmount(
     /* [in] */ Double CFinance.purchaseOrder.totalMaintPurchOrderAmount);

    CARAPI GetPurchaseOrder_TotalMaintPurchOrderAmount(
     /* [out] */ Double* CFinance.purchaseOrder.totalMaintPurchOrderAmount);


   CARAPI SetPurchaseOrder_MasLedgeFinTxNumReturned(
     /* [in] */ Int32 CFinance.purchaseOrder.masLedgeFinTxNumReturned);

    CARAPI GetPurchaseOrder_MasLedgeFinTxNumReturned(
     /* [out] */ Int32* CFinance.purchaseOrder.masLedgeFinTxNumReturned);


   CARAPI SetPurchaseOrder_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.purchaseOrder.businessChannelOwnerId);

    CARAPI GetPurchaseOrder_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.purchaseOrder.businessChannelOwnerId);


   CARAPI SetPurchaseOrder_PropertyId(
     /* [in] */ CProperty.property CFinance.purchaseOrder.propertyId);

    CARAPI GetPurchaseOrder_PropertyId(
     /* [out] */ CProperty.property* CFinance.purchaseOrder.propertyId);


   CARAPI SetPurchaseOrder_BranchId(
     /* [in] */ CAdministration.branch CFinance.purchaseOrder.branchId);

    CARAPI GetPurchaseOrder_BranchId(
     /* [out] */ CAdministration.branch* CFinance.purchaseOrder.branchId);


   CARAPI SetPurchaseOrder_DeptId(
     /* [in] */ CAdministration.department CFinance.purchaseOrder.deptId);

    CARAPI GetPurchaseOrder_DeptId(
     /* [out] */ CAdministration.department* CFinance.purchaseOrder.deptId);


   CARAPI SetPurchaseOrder_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.purchaseOrder.supplierId);

    CARAPI GetPurchaseOrder_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.purchaseOrder.supplierId);


   CARAPI SetPurchaseOrder_ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CFinance.purchaseOrder.itemTypeIds);

    CARAPI GetPurchaseOrder_ItemTypeIds(
     [out, callee] ArrayOf<CAdministration.itemType>* CFinance.purchaseOrder.itemTypeIds);


   CARAPI SetPurchaseOrder_ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFinance.purchaseOrder.itemIds);

    CARAPI GetPurchaseOrder_ItemIds(
     [out, callee] ArrayOf<CAdministration.item>* CFinance.purchaseOrder.itemIds);


   CARAPI SetPurchaseOrder_ServiceTypeIds(
     /* [in] */ ArrayOf<CAdministration.serviceType> CFinance.purchaseOrder.serviceTypeIds);

    CARAPI GetPurchaseOrder_ServiceTypeIds(
     [out, callee] ArrayOf<CAdministration.serviceType>* CFinance.purchaseOrder.serviceTypeIds);


   CARAPI SetPurchaseOrder_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CFinance.purchaseOrder.serviceIds);

    CARAPI GetPurchaseOrder_ServiceIds(
     [out, callee] ArrayOf<CAdministration.service>* CFinance.purchaseOrder.serviceIds);


   CARAPI SetPurchaseOrder_JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CFinance.purchaseOrder.jobTypeIds);

    CARAPI GetPurchaseOrder_JobTypeIds(
     [out, callee] ArrayOf<CAdministration.jobType>* CFinance.purchaseOrder.jobTypeIds);


   CARAPI SetPurchaseOrder_JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CFinance.purchaseOrder.jobIds);

    CARAPI GetPurchaseOrder_JobIds(
     [out, callee] ArrayOf<CAdministration.job>* CFinance.purchaseOrder.jobIds);


   CARAPI SetPurchaseOrder_MasterLedgerExpenseIds(
     /* [in] */ ArrayOf<CFinance.masterLedgerExpense> CFinance.purchaseOrder.masterLedgerExpenseIds);

    CARAPI GetPurchaseOrder_MasterLedgerExpenseIds(
     [out, callee] ArrayOf<CFinance.masterLedgerExpense>* CFinance.purchaseOrder.masterLedgerExpenseIds);


   CARAPI SetPurchaseOrder_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.purchaseOrder.masLedgeFinTxJoinId);

    CARAPI GetPurchaseOrder_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.purchaseOrder.masLedgeFinTxJoinId);


   CARAPI SetPurchaseOrder_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.purchaseOrder.docRefIds);

    CARAPI GetPurchaseOrder_DocRefIds(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.purchaseOrder.docRefIds);


   CARAPI SetPurchaseOrder_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.purchaseOrder.imageRefIds);

    CARAPI GetPurchaseOrder_ImageRefIds(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.purchaseOrder.imageRefIds);


   CARAPI SetMasterSalesOrder_MasterSalesOrderId(
     /* [in] */ const String& CFinance.masterSalesOrder.masterSalesOrderId);

    CARAPI GetMasterSalesOrder_MasterSalesOrderId(
     /* [out] */ String* CFinance.masterSalesOrder.masterSalesOrderId);


   CARAPI SetMasterSalesOrder_ItemQuantities(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.itemQuantities);

    CARAPI GetMasterSalesOrder_ItemQuantities(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.itemQuantities);


   CARAPI SetMasterSalesOrder_ItemWeights(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.itemWeights);

    CARAPI GetMasterSalesOrder_ItemWeights(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.itemWeights);


   CARAPI SetMasterSalesOrder_ItemPrices(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.itemPrices);

    CARAPI GetMasterSalesOrder_ItemPrices(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.itemPrices);


   CARAPI SetMasterSalesOrder_ItemTotalPrice(
     /* [in] */ Double CFinance.masterSalesOrder.itemTotalPrice);

    CARAPI GetMasterSalesOrder_ItemTotalPrice(
     /* [out] */ Double* CFinance.masterSalesOrder.itemTotalPrice);


   CARAPI SetMasterSalesOrder_ItemTotalWeight(
     /* [in] */ Double CFinance.masterSalesOrder.itemTotalWeight);

    CARAPI GetMasterSalesOrder_ItemTotalWeight(
     /* [out] */ Double* CFinance.masterSalesOrder.itemTotalWeight);


   CARAPI SetMasterSalesOrder_ProductQuantities(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.productQuantities);

    CARAPI GetMasterSalesOrder_ProductQuantities(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.productQuantities);


   CARAPI SetMasterSalesOrder_ProductWeights(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.productWeights);

    CARAPI GetMasterSalesOrder_ProductWeights(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.productWeights);


   CARAPI SetMasterSalesOrder_ProductsPrices(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.productsPrices);

    CARAPI GetMasterSalesOrder_ProductsPrices(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.productsPrices);


   CARAPI SetMasterSalesOrder_ProductsTotalPrice(
     /* [in] */ Double CFinance.masterSalesOrder.productsTotalPrice);

    CARAPI GetMasterSalesOrder_ProductsTotalPrice(
     /* [out] */ Double* CFinance.masterSalesOrder.productsTotalPrice);


   CARAPI SetMasterSalesOrder_ProductsTotalWeight(
     /* [in] */ Double CFinance.masterSalesOrder.productsTotalWeight);

    CARAPI GetMasterSalesOrder_ProductsTotalWeight(
     /* [out] */ Double* CFinance.masterSalesOrder.productsTotalWeight);


   CARAPI SetMasterSalesOrder_ServicePriceRates(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.servicePriceRates);

    CARAPI GetMasterSalesOrder_ServicePriceRates(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.servicePriceRates);


   CARAPI SetMasterSalesOrder_ServiceEstimatedTotalPrice(
     /* [in] */ Double CFinance.masterSalesOrder.serviceEstimatedTotalPrice);

    CARAPI GetMasterSalesOrder_ServiceEstimatedTotalPrice(
     /* [out] */ Double* CFinance.masterSalesOrder.serviceEstimatedTotalPrice);


   CARAPI SetMasterSalesOrder_JobPriceRates(
     /* [in] */ ArrayOf<Double> CFinance.masterSalesOrder.jobPriceRates);

    CARAPI GetMasterSalesOrder_JobPriceRates(
     [out, callee] ArrayOf<Double>* CFinance.masterSalesOrder.jobPriceRates);


   CARAPI SetMasterSalesOrder_JobsEstimatedTotalPrice(
     /* [in] */ Double CFinance.masterSalesOrder.jobsEstimatedTotalPrice);

    CARAPI GetMasterSalesOrder_JobsEstimatedTotalPrice(
     /* [out] */ Double* CFinance.masterSalesOrder.jobsEstimatedTotalPrice);


   CARAPI SetMasterSalesOrder_TotalOrderPrice(
     /* [in] */ Double CFinance.masterSalesOrder.totalOrderPrice);

    CARAPI GetMasterSalesOrder_TotalOrderPrice(
     /* [out] */ Double* CFinance.masterSalesOrder.totalOrderPrice);


   CARAPI SetMasterSalesOrder_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterSalesOrder.businessChannelOwnerId);

    CARAPI GetMasterSalesOrder_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterSalesOrder.businessChannelOwnerId);


   CARAPI SetMasterSalesOrder_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterSalesOrder.branchId);

    CARAPI GetMasterSalesOrder_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterSalesOrder.branchId);


   CARAPI SetMasterSalesOrder_DeptId(
     /* [in] */ CAdministration.department CFinance.masterSalesOrder.deptId);

    CARAPI GetMasterSalesOrder_DeptId(
     /* [out] */ CAdministration.department* CFinance.masterSalesOrder.deptId);


   CARAPI SetMasterSalesOrder_Customers(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.masterSalesOrder.customers);

    CARAPI GetMasterSalesOrder_Customers(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.masterSalesOrder.customers);


   CARAPI SetMasterSalesOrder_ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CFinance.masterSalesOrder.itemTypeIds);

    CARAPI GetMasterSalesOrder_ItemTypeIds(
     [out, callee] ArrayOf<CAdministration.itemType>* CFinance.masterSalesOrder.itemTypeIds);


   CARAPI SetMasterSalesOrder_ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFinance.masterSalesOrder.itemIds);

    CARAPI GetMasterSalesOrder_ItemIds(
     [out, callee] ArrayOf<CAdministration.item>* CFinance.masterSalesOrder.itemIds);


   CARAPI SetMasterSalesOrder_ServiceTypeIds(
     /* [in] */ ArrayOf<CAdministration.serviceType> CFinance.masterSalesOrder.serviceTypeIds);

    CARAPI GetMasterSalesOrder_ServiceTypeIds(
     [out, callee] ArrayOf<CAdministration.serviceType>* CFinance.masterSalesOrder.serviceTypeIds);


   CARAPI SetMasterSalesOrder_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CFinance.masterSalesOrder.serviceIds);

    CARAPI GetMasterSalesOrder_ServiceIds(
     [out, callee] ArrayOf<CAdministration.service>* CFinance.masterSalesOrder.serviceIds);


   CARAPI SetMasterSalesOrder_JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CFinance.masterSalesOrder.jobTypeIds);

    CARAPI GetMasterSalesOrder_JobTypeIds(
     [out, callee] ArrayOf<CAdministration.jobType>* CFinance.masterSalesOrder.jobTypeIds);


   CARAPI SetMasterSalesOrder_JobIds(
     /* [in] */ ArrayOf<CAdministration.job> CFinance.masterSalesOrder.jobIds);

    CARAPI GetMasterSalesOrder_JobIds(
     [out, callee] ArrayOf<CAdministration.job>* CFinance.masterSalesOrder.jobIds);


   CARAPI SetMasterSalesOrder_MasterLedgerIncomeId(
     /* [in] */ ArrayOf<CFinance.masterLedgerIncome> CFinance.masterSalesOrder.masterLedgerIncomeId);

    CARAPI GetMasterSalesOrder_MasterLedgerIncomeId(
     [out, callee] ArrayOf<CFinance.masterLedgerIncome>* CFinance.masterSalesOrder.masterLedgerIncomeId);


   CARAPI SetMasterSalesOrder_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterSalesOrder.masLedgeFinTxJoinId);

    CARAPI GetMasterSalesOrder_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterSalesOrder.masLedgeFinTxJoinId);


   CARAPI SetMasterSalesOrder_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.masterSalesOrder.docRefIds);

    CARAPI GetMasterSalesOrder_DocRefIds(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.masterSalesOrder.docRefIds);


   CARAPI SetMasterSalesOrder_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.masterSalesOrder.imageRefIds);

    CARAPI GetMasterSalesOrder_ImageRefIds(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.masterSalesOrder.imageRefIds);


   CARAPI SetMasterSalesOrder_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFinance.masterSalesOrder.videoRefIds);

    CARAPI GetMasterSalesOrder_VideoRefIds(
     [out, callee] ArrayOf<CAdministration.video>* CFinance.masterSalesOrder.videoRefIds);


   CARAPI SetTaxReferenceTable_TaxReferenceId(
     /* [in] */ const String& CFinance.taxReferenceTable.taxReferenceId);

    CARAPI GetTaxReferenceTable_TaxReferenceId(
     /* [out] */ String* CFinance.taxReferenceTable.taxReferenceId);


   CARAPI SetTaxReferenceTable_AusStates(
     /* [in] */ ArrayOf<CHelper.ausState> CFinance.taxReferenceTable.ausStates);

    CARAPI GetTaxReferenceTable_AusStates(
     [out, callee] ArrayOf<CHelper.ausState>* CFinance.taxReferenceTable.ausStates);


   CARAPI SetTaxReferenceTable_Description(
     /* [in] */ const String& CFinance.taxReferenceTable.description);

    CARAPI GetTaxReferenceTable_Description(
     /* [out] */ String* CFinance.taxReferenceTable.description);


   CARAPI SetTaxReferenceTable_Notes(
     /* [in] */ ArrayOf<const String&> CFinance.taxReferenceTable.notes);

    CARAPI GetTaxReferenceTable_Notes(
     [out, callee] ArrayOf<String>* CFinance.taxReferenceTable.notes);


   CARAPI SetTaxReferenceTable_TaxRatePerCent(
     /* [in] */ Double CFinance.taxReferenceTable.taxRatePerCent);

    CARAPI GetTaxReferenceTable_TaxRatePerCent(
     /* [out] */ Double* CFinance.taxReferenceTable.taxRatePerCent);


   CARAPI SetTaxReferenceTable_TaxCode(
     /* [in] */ CHelper.taxCode CFinance.taxReferenceTable.taxCode);

    CARAPI GetTaxReferenceTable_TaxCode(
     /* [out] */ CHelper.taxCode* CFinance.taxReferenceTable.taxCode);


   CARAPI SetTaxReferenceTable_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.taxReferenceTable.docRefIds);

    CARAPI GetTaxReferenceTable_DocRefIds(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.taxReferenceTable.docRefIds);


   CARAPI SetTaxReferenceTable_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.taxReferenceTable.businessChannelOwnerId);

    CARAPI GetTaxReferenceTable_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.taxReferenceTable.businessChannelOwnerId);



protected:
    // Member variables
const String& mSetBank_BankId
String* mGetBank_BankId
const String& mSetBank_BankName
String* mGetBank_BankName
Int32 mSetBank_OurBranchBSB
Int32* mGetBank_OurBranchBSB
const String& mSetBank_OurBranchName
String* mGetBank_OurBranchName
const String& mSetBank_LinkedToThisSupplierId
String* mGetBank_LinkedToThisSupplierId
const String& mSetBank_LinkedToThisCustomerId
String* mGetBank_LinkedToThisCustomerId
ArrayOf<const String&> mSetBank_ContactFirstNameList
ArrayOf<String>* mGetBank_ContactFirstNameList
ArrayOf<const String&> mSetBank_ContactLastNameList
ArrayOf<String>* mGetBank_ContactLastNameList
ArrayOf<const String&> mSetBank_EmailAddresses
ArrayOf<String>* mGetBank_EmailAddresses
ArrayOf<Int32> mSetBank_MobilePhone
ArrayOf<Int32>* mGetBank_MobilePhone
ArrayOf<Int32> mSetBank_WorkPhone
ArrayOf<Int32>* mGetBank_WorkPhone
ArrayOf<const String&> mSetBank_ContactedWithDetails
ArrayOf<String>* mGetBank_ContactedWithDetails
ArrayOf<CAdministration.documents> mSetBank_DocRefIds
ArrayOf<CAdministration.documents>* mGetBank_DocRefIds
ArrayOf<CAdministration.images> mSetBank_ImageRefIds
ArrayOf<CAdministration.images>* mGetBank_ImageRefIds
CRegister.businessChannelOwner mSetBank_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetBank_BusinessChannelOwnerId
const String& mSetCentrelink_CentrelinkId
String* mGetCentrelink_CentrelinkId
ArrayOf<const String&> mSetCentrelink_ContactFirstNameList
ArrayOf<String>* mGetCentrelink_ContactFirstNameList
ArrayOf<const String&> mSetCentrelink_ContactLastNameList
ArrayOf<String>* mGetCentrelink_ContactLastNameList
const String& mSetCentrelink_StreetAddress
String* mGetCentrelink_StreetAddress
const String& mSetCentrelink_PostalAddress
String* mGetCentrelink_PostalAddress
ArrayOf<const String&> mSetCentrelink_EmailAddresses
ArrayOf<String>* mGetCentrelink_EmailAddresses
ArrayOf<Int32> mSetCentrelink_MobilePhone
ArrayOf<Int32>* mGetCentrelink_MobilePhone
ArrayOf<Int32> mSetCentrelink_WorkPhone
ArrayOf<Int32>* mGetCentrelink_WorkPhone
const String& mSetCentrelink_Details
String* mGetCentrelink_Details
ArrayOf<const String&> mSetCentrelink_ContactedWithDetails
ArrayOf<String>* mGetCentrelink_ContactedWithDetails
CRegister.businessChannelOwner mSetCentrelink_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetCentrelink_BusinessChannelOwnerId
CAdministration.branch mSetCentrelink_BranchId
CAdministration.branch* mGetCentrelink_BranchId
ArrayOf<CAdministration.documents> mSetCentrelink_DocRefIds
ArrayOf<CAdministration.documents>* mGetCentrelink_DocRefIds
ArrayOf<CAdministration.images> mSetCentrelink_ImageRefIds
ArrayOf<CAdministration.images>* mGetCentrelink_ImageRefIds
const String& mSetMasterSetRegister_MasterSetId
String* mGetMasterSetRegister_MasterSetId
const String& mSetMasterSetRegister_SetTypeId
String* mGetMasterSetRegister_SetTypeId
const String& mSetMasterSetRegister_SetName
String* mGetMasterSetRegister_SetName
const String& mSetMasterSetRegister_SetDescription
String* mGetMasterSetRegister_SetDescription
Double mSetMasterSetRegister_OWDV
Double* mGetMasterSetRegister_OWDV
Double mSetMasterSetRegister_CapitalImprovements
Double* mGetMasterSetRegister_CapitalImprovements
Double mSetMasterSetRegister_Depreciation
Double* mGetMasterSetRegister_Depreciation
Double mSetMasterSetRegister_CWDV
Double* mGetMasterSetRegister_CWDV
const String& mSetMasterSetRegister_LastInspectionService
String* mGetMasterSetRegister_LastInspectionService
const String& mSetMasterSetRegister_ThisInspectionService
String* mGetMasterSetRegister_ThisInspectionService
const String& mSetMasterSetRegister_Sequ
String* mGetMasterSetRegister_Sequ
const String& mSetMasterSetRegister_NextInspectionService
String* mGetMasterSetRegister_NextInspectionService
Int32 mSetMasterSetRegister_ValueOfN
Int32* mGetMasterSetRegister_ValueOfN
CRegister.businessChannelOwner mSetMasterSetRegister_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterSetRegister_BusinessChannelOwnerId
ArrayOf<CAdministration.documents> mSetMasterSetRegister_DocRefs
ArrayOf<CAdministration.documents>* mGetMasterSetRegister_DocRefs
ArrayOf<CAdministration.images> mSetMasterSetRegister_ImageRefs
ArrayOf<CAdministration.images>* mGetMasterSetRegister_ImageRefs
ArrayOf<CAdministration.audio> mSetMasterSetRegister_AudioRefIds
ArrayOf<CAdministration.audio>* mGetMasterSetRegister_AudioRefIds
ArrayOf<CAdministration.video> mSetMasterSetRegister_VideoRefs
ArrayOf<CAdministration.video>* mGetMasterSetRegister_VideoRefs
CFinance.chartOfAccounts mSetMasterSetRegister_ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterSetRegister_ChartOfAccountsId
CFinance.chartOfClasses mSetMasterSetRegister_ChartOfClassesId
CFinance.chartOfClasses* mGetMasterSetRegister_ChartOfClassesId
CAdministration.branch mSetMasterSetRegister_BranchId
CAdministration.branch* mGetMasterSetRegister_BranchId
CAdministration.department mSetMasterSetRegister_DeptId
CAdministration.department* mGetMasterSetRegister_DeptId
CFinance.masterSetType mSetMasterSetRegister_MasterSetTypeId
CFinance.masterSetType* mGetMasterSetRegister_MasterSetTypeId
const String& mSetMasterSetType_MasterSetTypeId
String* mGetMasterSetType_MasterSetTypeId
const String& mSetMasterSetType_SetName
String* mGetMasterSetType_SetName
const String& mSetMasterSetType_SetDescription
String* mGetMasterSetType_SetDescription
CHelper.inspectionTerm mSetMasterSetType_InspectionTerm
CHelper.inspectionTerm* mGetMasterSetType_InspectionTerm
Int32 mSetMasterSetType_ValueOfN
Int32* mGetMasterSetType_ValueOfN
ArrayOf<CAdministration.documents> mSetMasterSetType_DocRefs
ArrayOf<CAdministration.documents>* mGetMasterSetType_DocRefs
ArrayOf<CAdministration.images> mSetMasterSetType_ImageRefs
ArrayOf<CAdministration.images>* mGetMasterSetType_ImageRefs
ArrayOf<CAdministration.audio> mSetMasterSetType_AudioRefIds
ArrayOf<CAdministration.audio>* mGetMasterSetType_AudioRefIds
ArrayOf<CAdministration.video> mSetMasterSetType_VideoRefs
ArrayOf<CAdministration.video>* mGetMasterSetType_VideoRefs
CRegister.businessChannelOwner mSetMasterSetType_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterSetType_BusinessChannelOwnerId
CAdministration.branch mSetMasterSetType_BranchId
CAdministration.branch* mGetMasterSetType_BranchId
CAdministration.department mSetMasterSetType_DeptId
CAdministration.department* mGetMasterSetType_DeptId
const String& mSetChartOfAccounts_ChartOfAccountsId
String* mGetChartOfAccounts_ChartOfAccountsId
CHelper.ledgerTitle mSetChartOfAccounts_LedgerTitle
CHelper.ledgerTitle* mGetChartOfAccounts_LedgerTitle
const String& mSetChartOfAccounts_Description
String* mGetChartOfAccounts_Description
CRegister.businessChannelOwner mSetChartOfAccounts_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetChartOfAccounts_BusinessChannelOwnerId
CFinance.level1Accounts mSetChartOfAccounts_Level1AccountsId
CFinance.level1Accounts* mGetChartOfAccounts_Level1AccountsId
CFinance.level2Accounts mSetChartOfAccounts_Level2AccountsId
CFinance.level2Accounts* mGetChartOfAccounts_Level2AccountsId
CFinance.level3Accounts mSetChartOfAccounts_Level3AccountsId
CFinance.level3Accounts* mGetChartOfAccounts_Level3AccountsId
CFinance.level4Accounts mSetChartOfAccounts_Level4AccountsId
CFinance.level4Accounts* mGetChartOfAccounts_Level4AccountsId
CFinance.level5Accounts mSetChartOfAccounts_Level5AccountsId
CFinance.level5Accounts* mGetChartOfAccounts_Level5AccountsId
CFinance.level6Accounts mSetChartOfAccounts_Level6AccountsId
CFinance.level6Accounts* mGetChartOfAccounts_Level6AccountsId
const String& mSetLevel1Accounts_Level1AccountsId
String* mGetLevel1Accounts_Level1AccountsId
const String& mSetLevel1Accounts_Description
String* mGetLevel1Accounts_Description
const String& mSetLevel1Accounts_Level1AccountsName
String* mGetLevel1Accounts_Level1AccountsName
const String& mSetLevel1Accounts_Level1AccountsNum
String* mGetLevel1Accounts_Level1AccountsNum
CHelper.ledgerTitle mSetLevel1Accounts_AssocLedger
CHelper.ledgerTitle* mGetLevel1Accounts_AssocLedger
CRegister.businessChannelOwner mSetLevel1Accounts_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel1Accounts_BusinessChannelOwnerId
const String& mSetLevel2Accounts_Level2AccountsId
String* mGetLevel2Accounts_Level2AccountsId
const String& mSetLevel2Accounts_Description
String* mGetLevel2Accounts_Description
const String& mSetLevel2Accounts_Level2AccountsName
String* mGetLevel2Accounts_Level2AccountsName
const String& mSetLevel2Accounts_Level2AccountsNum
String* mGetLevel2Accounts_Level2AccountsNum
CHelper.ledgerTitle mSetLevel2Accounts_AssocLedger
CHelper.ledgerTitle* mGetLevel2Accounts_AssocLedger
CRegister.businessChannelOwner mSetLevel2Accounts_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel2Accounts_BusinessChannelOwnerId
CFinance.level1Accounts mSetLevel2Accounts_Level1AccountsId
CFinance.level1Accounts* mGetLevel2Accounts_Level1AccountsId
const String& mSetLevel3Accounts_Level3AccountsId
String* mGetLevel3Accounts_Level3AccountsId
const String& mSetLevel3Accounts_Description
String* mGetLevel3Accounts_Description
const String& mSetLevel3Accounts_Level3AccountsName
String* mGetLevel3Accounts_Level3AccountsName
const String& mSetLevel3Accounts_Level3AccountsNum
String* mGetLevel3Accounts_Level3AccountsNum
CHelper.ledgerTitle mSetLevel3Accounts_AssocLedger
CHelper.ledgerTitle* mGetLevel3Accounts_AssocLedger
CRegister.businessChannelOwner mSetLevel3Accounts_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel3Accounts_BusinessChannelOwnerId
CFinance.level2Accounts mSetLevel3Accounts_Level2AccountsId
CFinance.level2Accounts* mGetLevel3Accounts_Level2AccountsId
const String& mSetLevel4Accounts_Level4AccountsId
String* mGetLevel4Accounts_Level4AccountsId
const String& mSetLevel4Accounts_Description
String* mGetLevel4Accounts_Description
const String& mSetLevel4Accounts_Level4AccountsName
String* mGetLevel4Accounts_Level4AccountsName
const String& mSetLevel4Accounts_Level4AccountsNum
String* mGetLevel4Accounts_Level4AccountsNum
CHelper.ledgerTitle mSetLevel4Accounts_AssocLedger
CHelper.ledgerTitle* mGetLevel4Accounts_AssocLedger
CRegister.businessChannelOwner mSetLevel4Accounts_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel4Accounts_BusinessChannelOwnerId
CFinance.level3Accounts mSetLevel4Accounts_Level3AccountsId
CFinance.level3Accounts* mGetLevel4Accounts_Level3AccountsId
const String& mSetLevel5Accounts_Level5AccountsId
String* mGetLevel5Accounts_Level5AccountsId
const String& mSetLevel5Accounts_Description
String* mGetLevel5Accounts_Description
const String& mSetLevel5Accounts_Level5AccountsName
String* mGetLevel5Accounts_Level5AccountsName
const String& mSetLevel5Accounts_Level5AccountsNum
String* mGetLevel5Accounts_Level5AccountsNum
CHelper.ledgerTitle mSetLevel5Accounts_AssocLedger
CHelper.ledgerTitle* mGetLevel5Accounts_AssocLedger
CRegister.businessChannelOwner mSetLevel5Accounts_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel5Accounts_BusinessChannelOwnerId
CFinance.level4Accounts mSetLevel5Accounts_Level4AccountsId
CFinance.level4Accounts* mGetLevel5Accounts_Level4AccountsId
const String& mSetLevel6Accounts_Level6AccountsId
String* mGetLevel6Accounts_Level6AccountsId
const String& mSetLevel6Accounts_Description
String* mGetLevel6Accounts_Description
const String& mSetLevel6Accounts_Level6AccountsName
String* mGetLevel6Accounts_Level6AccountsName
const String& mSetLevel6Accounts_Level6AccountsNum
String* mGetLevel6Accounts_Level6AccountsNum
CHelper.ledgerTitle mSetLevel6Accounts_AssocLedger
CHelper.ledgerTitle* mGetLevel6Accounts_AssocLedger
CRegister.businessChannelOwner mSetLevel6Accounts_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel6Accounts_BusinessChannelOwnerId
CFinance.level5Accounts mSetLevel6Accounts_Level5AccountsId
CFinance.level5Accounts* mGetLevel6Accounts_Level5AccountsId
const String& mSetChartOfClasses_ChartOfClassesId
String* mGetChartOfClasses_ChartOfClassesId
CRegister.businessChannelOwner mSetChartOfClasses_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetChartOfClasses_BusinessChannelOwnerId
CFinance.level1Class mSetChartOfClasses_Level1ClassId
CFinance.level1Class* mGetChartOfClasses_Level1ClassId
CFinance.level2Class mSetChartOfClasses_Level2ClassId
CFinance.level2Class* mGetChartOfClasses_Level2ClassId
CFinance.level3Class mSetChartOfClasses_Level3ClassId
CFinance.level3Class* mGetChartOfClasses_Level3ClassId
const String& mSetLevel1Class_Level1ClassId
String* mGetLevel1Class_Level1ClassId
const String& mSetLevel1Class_Description
String* mGetLevel1Class_Description
const String& mSetLevel1Class_ClassName
String* mGetLevel1Class_ClassName
CRegister.businessChannelOwner mSetLevel1Class_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel1Class_BusinessChannelOwnerId
const String& mSetLevel2Class_Level2ClassId
String* mGetLevel2Class_Level2ClassId
const String& mSetLevel2Class_Description
String* mGetLevel2Class_Description
const String& mSetLevel2Class_ClassName
String* mGetLevel2Class_ClassName
CRegister.businessChannelOwner mSetLevel2Class_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel2Class_BusinessChannelOwnerId
CFinance.level1Class mSetLevel2Class_Level1ClassId
CFinance.level1Class* mGetLevel2Class_Level1ClassId
const String& mSetLevel3Class_Level3ClassId
String* mGetLevel3Class_Level3ClassId
const String& mSetLevel3Class_Description
String* mGetLevel3Class_Description
const String& mSetLevel3Class_ClassName
String* mGetLevel3Class_ClassName
CRegister.businessChannelOwner mSetLevel3Class_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel3Class_BusinessChannelOwnerId
CFinance.level2Class mSetLevel3Class_Level2ClassId
CFinance.level2Class* mGetLevel3Class_Level2ClassId
const String& mSetMasterLedgerFinTxJoin_MasLedgeFinTxJoinId
String* mGetMasterLedgerFinTxJoin_MasLedgeFinTxJoinId
ArrayOf<const String&> mSetMasterLedgerFinTxJoin_MasLedgeFinTxIds
ArrayOf<String>* mGetMasterLedgerFinTxJoin_MasLedgeFinTxIds
Int32 mSetMasterLedgerFinTxJoin_MasLedgeFinTxNum
Int32* mGetMasterLedgerFinTxJoin_MasLedgeFinTxNum
ArrayOf<const String&> mSetMasterLedgerFinTxJoin_CreditedAccountIds
ArrayOf<String>* mGetMasterLedgerFinTxJoin_CreditedAccountIds
ArrayOf<const String&> mSetMasterLedgerFinTxJoin_DebitedAccountIds
ArrayOf<String>* mGetMasterLedgerFinTxJoin_DebitedAccountIds
ArrayOf<const String&> mSetMasterLedgerFinTxJoin_CreditedClassIds
ArrayOf<String>* mGetMasterLedgerFinTxJoin_CreditedClassIds
ArrayOf<const String&> mSetMasterLedgerFinTxJoin_DebitedClassIds
ArrayOf<String>* mGetMasterLedgerFinTxJoin_DebitedClassIds
ArrayOf<Double> mSetMasterLedgerFinTxJoin_CreditedAmounts
ArrayOf<Double>* mGetMasterLedgerFinTxJoin_CreditedAmounts
ArrayOf<Double> mSetMasterLedgerFinTxJoin_DebitedAmounts
ArrayOf<Double>* mGetMasterLedgerFinTxJoin_DebitedAmounts
CRegister.businessChannelOwner mSetMasterLedgerFinTxJoin_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerFinTxJoin_BusinessChannelOwnerId
const String& mSetMasterLedgerSet_MasterLedgerSetId
String* mGetMasterLedgerSet_MasterLedgerSetId
const String& mSetMasterLedgerSet_BankBSB
String* mGetMasterLedgerSet_BankBSB
const String& mSetMasterLedgerSet_BankAccountNumber
String* mGetMasterLedgerSet_BankAccountNumber
const String& mSetMasterLedgerSet_NameOnBankAccount
String* mGetMasterLedgerSet_NameOnBankAccount
const String& mSetMasterLedgerSet_Description
String* mGetMasterLedgerSet_Description
ArrayOf<const String&> mSetMasterLedgerSet_DocRefs
ArrayOf<String>* mGetMasterLedgerSet_DocRefs
const String& mSetMasterLedgerSet_FeeId
String* mGetMasterLedgerSet_FeeId
Int32 mSetMasterLedgerSet_MasLedgeFinTxNum
Int32* mGetMasterLedgerSet_MasLedgeFinTxNum
const String& mSetMasterLedgerSet_Level1AccountName
String* mGetMasterLedgerSet_Level1AccountName
const String& mSetMasterLedgerSet_Level1AccountNum
String* mGetMasterLedgerSet_Level1AccountNum
const String& mSetMasterLedgerSet_Level2AccountName
String* mGetMasterLedgerSet_Level2AccountName
const String& mSetMasterLedgerSet_Level2AccountNum
String* mGetMasterLedgerSet_Level2AccountNum
const String& mSetMasterLedgerSet_Level3AccountName
String* mGetMasterLedgerSet_Level3AccountName
const String& mSetMasterLedgerSet_Level3AccountNum
String* mGetMasterLedgerSet_Level3AccountNum
const String& mSetMasterLedgerSet_Level4AccountName
String* mGetMasterLedgerSet_Level4AccountName
const String& mSetMasterLedgerSet_Level4AccountNum
String* mGetMasterLedgerSet_Level4AccountNum
const String& mSetMasterLedgerSet_Level5AccountName
String* mGetMasterLedgerSet_Level5AccountName
const String& mSetMasterLedgerSet_Level5AccountNum
String* mGetMasterLedgerSet_Level5AccountNum
const String& mSetMasterLedgerSet_Level6AccountName
String* mGetMasterLedgerSet_Level6AccountName
const String& mSetMasterLedgerSet_Level6AccountNum
String* mGetMasterLedgerSet_Level6AccountNum
const String& mSetMasterLedgerSet_Level1ClassName
String* mGetMasterLedgerSet_Level1ClassName
const String& mSetMasterLedgerSet_Level2ClassName
String* mGetMasterLedgerSet_Level2ClassName
const String& mSetMasterLedgerSet_Level3ClassName
String* mGetMasterLedgerSet_Level3ClassName
const String& mSetMasterLedgerSet_TransactionEffective
String* mGetMasterLedgerSet_TransactionEffective
const String& mSetMasterLedgerSet_MasLedgeFinTxId
String* mGetMasterLedgerSet_MasLedgeFinTxId
Double mSetMasterLedgerSet_Cr
Double* mGetMasterLedgerSet_Cr
Double mSetMasterLedgerSet_Dr
Double* mGetMasterLedgerSet_Dr
Double mSetMasterLedgerSet_Bal
Double* mGetMasterLedgerSet_Bal
CRegister.businessChannelOwner mSetMasterLedgerSet_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerSet_BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerSet_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerSet_MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerSet_ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerSet_ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerSet_ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerSet_ChartOfClassesId
CAdministration.branch mSetMasterLedgerSet_BranchId
CAdministration.branch* mGetMasterLedgerSet_BranchId
CAdministration.department mSetMasterLedgerSet_DepartmentId
CAdministration.department* mGetMasterLedgerSet_DepartmentId
CFinance.bank mSetMasterLedgerSet_BankId
CFinance.bank* mGetMasterLedgerSet_BankId
CProperty.program mSetMasterLedgerSet_ProgramId
CProperty.program* mGetMasterLedgerSet_ProgramId
CProperty.project mSetMasterLedgerSet_ProjectId
CProperty.project* mGetMasterLedgerSet_ProjectId
CAdministration.item mSetMasterLedgerSet_ItemId
CAdministration.item* mGetMasterLedgerSet_ItemId
CAdministration.job mSetMasterLedgerSet_JobId
CAdministration.job* mGetMasterLedgerSet_JobId
CAdministration.service mSetMasterLedgerSet_ServiceId
CAdministration.service* mGetMasterLedgerSet_ServiceId
CCustomer.customer mSetMasterLedgerSet_CustomerId
CCustomer.customer* mGetMasterLedgerSet_CustomerId
CSupplier.supplier mSetMasterLedgerSet_SupplierId
CSupplier.supplier* mGetMasterLedgerSet_SupplierId
realEstatePurchOrders mSetMasterLedgerSet_PurchOrderId
realEstatePurchOrders* mGetMasterLedgerSet_PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerSet_MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerSet_MasterSalesOrderId
CFinance.invoice mSetMasterLedgerSet_InvoiceId
CFinance.invoice* mGetMasterLedgerSet_InvoiceId
CFinance.bill mSetMasterLedgerSet_BillId
CFinance.bill* mGetMasterLedgerSet_BillId
const String& mSetMasterLedgerLiability_MasterLedgerLiabilityId
String* mGetMasterLedgerLiability_MasterLedgerLiabilityId
const String& mSetMasterLedgerLiability_BankBSB
String* mGetMasterLedgerLiability_BankBSB
const String& mSetMasterLedgerLiability_BankAccountNumber
String* mGetMasterLedgerLiability_BankAccountNumber
const String& mSetMasterLedgerLiability_NameOnBankAccount
String* mGetMasterLedgerLiability_NameOnBankAccount
const String& mSetMasterLedgerLiability_Description
String* mGetMasterLedgerLiability_Description
ArrayOf<const String&> mSetMasterLedgerLiability_DocRefs
ArrayOf<String>* mGetMasterLedgerLiability_DocRefs
const String& mSetMasterLedgerLiability_FeeId
String* mGetMasterLedgerLiability_FeeId
Int32 mSetMasterLedgerLiability_MasLedgeFinTxNum
Int32* mGetMasterLedgerLiability_MasLedgeFinTxNum
const String& mSetMasterLedgerLiability_Level1AccountName
String* mGetMasterLedgerLiability_Level1AccountName
const String& mSetMasterLedgerLiability_Level1AccountNum
String* mGetMasterLedgerLiability_Level1AccountNum
const String& mSetMasterLedgerLiability_Level2AccountName
String* mGetMasterLedgerLiability_Level2AccountName
const String& mSetMasterLedgerLiability_Level2AccountNum
String* mGetMasterLedgerLiability_Level2AccountNum
const String& mSetMasterLedgerLiability_Level3AccountName
String* mGetMasterLedgerLiability_Level3AccountName
const String& mSetMasterLedgerLiability_Level3AccountNum
String* mGetMasterLedgerLiability_Level3AccountNum
const String& mSetMasterLedgerLiability_Level4AccountName
String* mGetMasterLedgerLiability_Level4AccountName
const String& mSetMasterLedgerLiability_Level4AccountNum
String* mGetMasterLedgerLiability_Level4AccountNum
const String& mSetMasterLedgerLiability_Level5AccountName
String* mGetMasterLedgerLiability_Level5AccountName
const String& mSetMasterLedgerLiability_Level5AccountNum
String* mGetMasterLedgerLiability_Level5AccountNum
const String& mSetMasterLedgerLiability_Level6AccountName
String* mGetMasterLedgerLiability_Level6AccountName
const String& mSetMasterLedgerLiability_Level6AccountNum
String* mGetMasterLedgerLiability_Level6AccountNum
const String& mSetMasterLedgerLiability_Level1ClassName
String* mGetMasterLedgerLiability_Level1ClassName
const String& mSetMasterLedgerLiability_Level2ClassName
String* mGetMasterLedgerLiability_Level2ClassName
const String& mSetMasterLedgerLiability_Level3ClassName
String* mGetMasterLedgerLiability_Level3ClassName
const String& mSetMasterLedgerLiability_TransactionEffective
String* mGetMasterLedgerLiability_TransactionEffective
const String& mSetMasterLedgerLiability_MasLedgeFinTxId
String* mGetMasterLedgerLiability_MasLedgeFinTxId
Double mSetMasterLedgerLiability_Cr
Double* mGetMasterLedgerLiability_Cr
Double mSetMasterLedgerLiability_Dr
Double* mGetMasterLedgerLiability_Dr
Double mSetMasterLedgerLiability_Bal
Double* mGetMasterLedgerLiability_Bal
CRegister.businessChannelOwner mSetMasterLedgerLiability_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerLiability_BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerLiability_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerLiability_MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerLiability_ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerLiability_ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerLiability_ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerLiability_ChartOfClassesId
CAdministration.branch mSetMasterLedgerLiability_BranchId
CAdministration.branch* mGetMasterLedgerLiability_BranchId
CAdministration.department mSetMasterLedgerLiability_DepartmentId
CAdministration.department* mGetMasterLedgerLiability_DepartmentId
CFinance.bank mSetMasterLedgerLiability_BankId
CFinance.bank* mGetMasterLedgerLiability_BankId
CProperty.program mSetMasterLedgerLiability_ProgramId
CProperty.program* mGetMasterLedgerLiability_ProgramId
CProperty.project mSetMasterLedgerLiability_ProjectId
CProperty.project* mGetMasterLedgerLiability_ProjectId
CAdministration.item mSetMasterLedgerLiability_ItemId
CAdministration.item* mGetMasterLedgerLiability_ItemId
CAdministration.job mSetMasterLedgerLiability_JobId
CAdministration.job* mGetMasterLedgerLiability_JobId
CAdministration.service mSetMasterLedgerLiability_ServiceId
CAdministration.service* mGetMasterLedgerLiability_ServiceId
CCustomer.customer mSetMasterLedgerLiability_CustomerId
CCustomer.customer* mGetMasterLedgerLiability_CustomerId
CSupplier.supplier mSetMasterLedgerLiability_SupplierId
CSupplier.supplier* mGetMasterLedgerLiability_SupplierId
realEstatePurchOrders mSetMasterLedgerLiability_PurchOrderId
realEstatePurchOrders* mGetMasterLedgerLiability_PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerLiability_MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerLiability_MasterSalesOrderId
CFinance.invoice mSetMasterLedgerLiability_InvoiceId
CFinance.invoice* mGetMasterLedgerLiability_InvoiceId
CFinance.bill mSetMasterLedgerLiability_BillId
CFinance.bill* mGetMasterLedgerLiability_BillId
const String& mSetMasterLedgerEquity_MasterLedgerEquityId
String* mGetMasterLedgerEquity_MasterLedgerEquityId
const String& mSetMasterLedgerEquity_BankBSB
String* mGetMasterLedgerEquity_BankBSB
const String& mSetMasterLedgerEquity_BankAccountNumber
String* mGetMasterLedgerEquity_BankAccountNumber
const String& mSetMasterLedgerEquity_NameOnBankAccount
String* mGetMasterLedgerEquity_NameOnBankAccount
const String& mSetMasterLedgerEquity_Description
String* mGetMasterLedgerEquity_Description
ArrayOf<const String&> mSetMasterLedgerEquity_DocRefs
ArrayOf<String>* mGetMasterLedgerEquity_DocRefs
const String& mSetMasterLedgerEquity_FeeId
String* mGetMasterLedgerEquity_FeeId
Int32 mSetMasterLedgerEquity_MasLedgeFinTxNum
Int32* mGetMasterLedgerEquity_MasLedgeFinTxNum
const String& mSetMasterLedgerEquity_Level1AccountName
String* mGetMasterLedgerEquity_Level1AccountName
const String& mSetMasterLedgerEquity_Level1AccountNum
String* mGetMasterLedgerEquity_Level1AccountNum
const String& mSetMasterLedgerEquity_Level2AccountName
String* mGetMasterLedgerEquity_Level2AccountName
const String& mSetMasterLedgerEquity_Level2AccountNum
String* mGetMasterLedgerEquity_Level2AccountNum
const String& mSetMasterLedgerEquity_Level3AccountName
String* mGetMasterLedgerEquity_Level3AccountName
const String& mSetMasterLedgerEquity_Level3AccountNum
String* mGetMasterLedgerEquity_Level3AccountNum
const String& mSetMasterLedgerEquity_Level4AccountName
String* mGetMasterLedgerEquity_Level4AccountName
const String& mSetMasterLedgerEquity_Level4AccountNum
String* mGetMasterLedgerEquity_Level4AccountNum
const String& mSetMasterLedgerEquity_Level5AccountName
String* mGetMasterLedgerEquity_Level5AccountName
const String& mSetMasterLedgerEquity_Level5AccountNum
String* mGetMasterLedgerEquity_Level5AccountNum
const String& mSetMasterLedgerEquity_Level6AccountName
String* mGetMasterLedgerEquity_Level6AccountName
const String& mSetMasterLedgerEquity_Level6AccountNum
String* mGetMasterLedgerEquity_Level6AccountNum
const String& mSetMasterLedgerEquity_Level1ClassName
String* mGetMasterLedgerEquity_Level1ClassName
const String& mSetMasterLedgerEquity_Level2ClassName
String* mGetMasterLedgerEquity_Level2ClassName
const String& mSetMasterLedgerEquity_Level3ClassName
String* mGetMasterLedgerEquity_Level3ClassName
const String& mSetMasterLedgerEquity_TransactionEffective
String* mGetMasterLedgerEquity_TransactionEffective
const String& mSetMasterLedgerEquity_MasLedgeFinTxId
String* mGetMasterLedgerEquity_MasLedgeFinTxId
Double mSetMasterLedgerEquity_Cr
Double* mGetMasterLedgerEquity_Cr
Double mSetMasterLedgerEquity_Dr
Double* mGetMasterLedgerEquity_Dr
Double mSetMasterLedgerEquity_Bal
Double* mGetMasterLedgerEquity_Bal
CRegister.businessChannelOwner mSetMasterLedgerEquity_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerEquity_BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerEquity_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerEquity_MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerEquity_ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerEquity_ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerEquity_ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerEquity_ChartOfClassesId
CAdministration.branch mSetMasterLedgerEquity_BranchId
CAdministration.branch* mGetMasterLedgerEquity_BranchId
CAdministration.department mSetMasterLedgerEquity_DepartmentId
CAdministration.department* mGetMasterLedgerEquity_DepartmentId
CFinance.bank mSetMasterLedgerEquity_BankId
CFinance.bank* mGetMasterLedgerEquity_BankId
CProperty.program mSetMasterLedgerEquity_ProgramId
CProperty.program* mGetMasterLedgerEquity_ProgramId
CProperty.project mSetMasterLedgerEquity_ProjectId
CProperty.project* mGetMasterLedgerEquity_ProjectId
CAdministration.item mSetMasterLedgerEquity_ItemId
CAdministration.item* mGetMasterLedgerEquity_ItemId
CAdministration.job mSetMasterLedgerEquity_JobId
CAdministration.job* mGetMasterLedgerEquity_JobId
CAdministration.service mSetMasterLedgerEquity_ServiceId
CAdministration.service* mGetMasterLedgerEquity_ServiceId
CCustomer.customer mSetMasterLedgerEquity_CustomerId
CCustomer.customer* mGetMasterLedgerEquity_CustomerId
CSupplier.supplier mSetMasterLedgerEquity_SupplierId
CSupplier.supplier* mGetMasterLedgerEquity_SupplierId
realEstatePurchOrders mSetMasterLedgerEquity_PurchOrderId
realEstatePurchOrders* mGetMasterLedgerEquity_PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerEquity_MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerEquity_MasterSalesOrderId
CFinance.invoice mSetMasterLedgerEquity_InvoiceId
CFinance.invoice* mGetMasterLedgerEquity_InvoiceId
CFinance.bill mSetMasterLedgerEquity_BillId
CFinance.bill* mGetMasterLedgerEquity_BillId
const String& mSetMasterLedgerSuspense_MasterLedgerSuspenseId
String* mGetMasterLedgerSuspense_MasterLedgerSuspenseId
const String& mSetMasterLedgerSuspense_BankBSB
String* mGetMasterLedgerSuspense_BankBSB
const String& mSetMasterLedgerSuspense_BankAccountNumber
String* mGetMasterLedgerSuspense_BankAccountNumber
const String& mSetMasterLedgerSuspense_NameOnBankAccount
String* mGetMasterLedgerSuspense_NameOnBankAccount
const String& mSetMasterLedgerSuspense_Description
String* mGetMasterLedgerSuspense_Description
ArrayOf<const String&> mSetMasterLedgerSuspense_DocRefs
ArrayOf<String>* mGetMasterLedgerSuspense_DocRefs
const String& mSetMasterLedgerSuspense_FeeId
String* mGetMasterLedgerSuspense_FeeId
Int32 mSetMasterLedgerSuspense_MasLedgeFinTxNum
Int32* mGetMasterLedgerSuspense_MasLedgeFinTxNum
const String& mSetMasterLedgerSuspense_Level1AccountName
String* mGetMasterLedgerSuspense_Level1AccountName
const String& mSetMasterLedgerSuspense_Level1AccountNum
String* mGetMasterLedgerSuspense_Level1AccountNum
const String& mSetMasterLedgerSuspense_Level2AccountName
String* mGetMasterLedgerSuspense_Level2AccountName
const String& mSetMasterLedgerSuspense_Level2AccountNum
String* mGetMasterLedgerSuspense_Level2AccountNum
const String& mSetMasterLedgerSuspense_Level3AccountName
String* mGetMasterLedgerSuspense_Level3AccountName
const String& mSetMasterLedgerSuspense_Level3AccountNum
String* mGetMasterLedgerSuspense_Level3AccountNum
const String& mSetMasterLedgerSuspense_Level4AccountName
String* mGetMasterLedgerSuspense_Level4AccountName
const String& mSetMasterLedgerSuspense_Level4AccountNum
String* mGetMasterLedgerSuspense_Level4AccountNum
const String& mSetMasterLedgerSuspense_Level5AccountName
String* mGetMasterLedgerSuspense_Level5AccountName
const String& mSetMasterLedgerSuspense_Level5AccountNum
String* mGetMasterLedgerSuspense_Level5AccountNum
const String& mSetMasterLedgerSuspense_Level6AccountName
String* mGetMasterLedgerSuspense_Level6AccountName
const String& mSetMasterLedgerSuspense_Level6AccountNum
String* mGetMasterLedgerSuspense_Level6AccountNum
const String& mSetMasterLedgerSuspense_Level1ClassName
String* mGetMasterLedgerSuspense_Level1ClassName
const String& mSetMasterLedgerSuspense_Level2ClassName
String* mGetMasterLedgerSuspense_Level2ClassName
const String& mSetMasterLedgerSuspense_Level3ClassName
String* mGetMasterLedgerSuspense_Level3ClassName
const String& mSetMasterLedgerSuspense_TransactionEffective
String* mGetMasterLedgerSuspense_TransactionEffective
const String& mSetMasterLedgerSuspense_MasLedgeFinTxId
String* mGetMasterLedgerSuspense_MasLedgeFinTxId
Double mSetMasterLedgerSuspense_Cr
Double* mGetMasterLedgerSuspense_Cr
Double mSetMasterLedgerSuspense_Dr
Double* mGetMasterLedgerSuspense_Dr
Double mSetMasterLedgerSuspense_Bal
Double* mGetMasterLedgerSuspense_Bal
CRegister.businessChannelOwner mSetMasterLedgerSuspense_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerSuspense_BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerSuspense_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerSuspense_MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerSuspense_ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerSuspense_ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerSuspense_ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerSuspense_ChartOfClassesId
CAdministration.branch mSetMasterLedgerSuspense_BranchId
CAdministration.branch* mGetMasterLedgerSuspense_BranchId
CAdministration.department mSetMasterLedgerSuspense_DepartmentId
CAdministration.department* mGetMasterLedgerSuspense_DepartmentId
CFinance.bank mSetMasterLedgerSuspense_BankId
CFinance.bank* mGetMasterLedgerSuspense_BankId
CProperty.program mSetMasterLedgerSuspense_ProgramId
CProperty.program* mGetMasterLedgerSuspense_ProgramId
CProperty.project mSetMasterLedgerSuspense_ProjectId
CProperty.project* mGetMasterLedgerSuspense_ProjectId
CAdministration.item mSetMasterLedgerSuspense_ItemId
CAdministration.item* mGetMasterLedgerSuspense_ItemId
CAdministration.job mSetMasterLedgerSuspense_JobId
CAdministration.job* mGetMasterLedgerSuspense_JobId
CAdministration.service mSetMasterLedgerSuspense_ServiceId
CAdministration.service* mGetMasterLedgerSuspense_ServiceId
CCustomer.customer mSetMasterLedgerSuspense_CustomerId
CCustomer.customer* mGetMasterLedgerSuspense_CustomerId
CSupplier.supplier mSetMasterLedgerSuspense_SupplierId
CSupplier.supplier* mGetMasterLedgerSuspense_SupplierId
realEstatePurchOrders mSetMasterLedgerSuspense_PurchOrderId
realEstatePurchOrders* mGetMasterLedgerSuspense_PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerSuspense_MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerSuspense_MasterSalesOrderId
CFinance.invoice mSetMasterLedgerSuspense_InvoiceId
CFinance.invoice* mGetMasterLedgerSuspense_InvoiceId
CFinance.bill mSetMasterLedgerSuspense_BillId
CFinance.bill* mGetMasterLedgerSuspense_BillId
const String& mSetMasterLedgerIncome_MasterLedgerIncomeId
String* mGetMasterLedgerIncome_MasterLedgerIncomeId
const String& mSetMasterLedgerIncome_BankBSB
String* mGetMasterLedgerIncome_BankBSB
const String& mSetMasterLedgerIncome_BankAccountNumber
String* mGetMasterLedgerIncome_BankAccountNumber
const String& mSetMasterLedgerIncome_NameOnBankAccount
String* mGetMasterLedgerIncome_NameOnBankAccount
const String& mSetMasterLedgerIncome_Description
String* mGetMasterLedgerIncome_Description
ArrayOf<const String&> mSetMasterLedgerIncome_DocRefs
ArrayOf<String>* mGetMasterLedgerIncome_DocRefs
const String& mSetMasterLedgerIncome_FeeId
String* mGetMasterLedgerIncome_FeeId
Int32 mSetMasterLedgerIncome_MasLedgeFinTxNum
Int32* mGetMasterLedgerIncome_MasLedgeFinTxNum
const String& mSetMasterLedgerIncome_Level1AccountName
String* mGetMasterLedgerIncome_Level1AccountName
const String& mSetMasterLedgerIncome_Level1AccountNum
String* mGetMasterLedgerIncome_Level1AccountNum
const String& mSetMasterLedgerIncome_Level2AccountName
String* mGetMasterLedgerIncome_Level2AccountName
const String& mSetMasterLedgerIncome_Level2AccountNum
String* mGetMasterLedgerIncome_Level2AccountNum
const String& mSetMasterLedgerIncome_Level3AccountName
String* mGetMasterLedgerIncome_Level3AccountName
const String& mSetMasterLedgerIncome_Level3AccountNum
String* mGetMasterLedgerIncome_Level3AccountNum
const String& mSetMasterLedgerIncome_Level4AccountName
String* mGetMasterLedgerIncome_Level4AccountName
const String& mSetMasterLedgerIncome_Level4AccountNum
String* mGetMasterLedgerIncome_Level4AccountNum
const String& mSetMasterLedgerIncome_Level5AccountName
String* mGetMasterLedgerIncome_Level5AccountName
const String& mSetMasterLedgerIncome_Level5AccountNum
String* mGetMasterLedgerIncome_Level5AccountNum
const String& mSetMasterLedgerIncome_Level6AccountName
String* mGetMasterLedgerIncome_Level6AccountName
const String& mSetMasterLedgerIncome_Level6AccountNum
String* mGetMasterLedgerIncome_Level6AccountNum
const String& mSetMasterLedgerIncome_Level1ClassName
String* mGetMasterLedgerIncome_Level1ClassName
const String& mSetMasterLedgerIncome_Level2ClassName
String* mGetMasterLedgerIncome_Level2ClassName
const String& mSetMasterLedgerIncome_Level3ClassName
String* mGetMasterLedgerIncome_Level3ClassName
const String& mSetMasterLedgerIncome_TransactionEffective
String* mGetMasterLedgerIncome_TransactionEffective
const String& mSetMasterLedgerIncome_MasLedgeFinTxId
String* mGetMasterLedgerIncome_MasLedgeFinTxId
Double mSetMasterLedgerIncome_Cr
Double* mGetMasterLedgerIncome_Cr
Double mSetMasterLedgerIncome_Dr
Double* mGetMasterLedgerIncome_Dr
Double mSetMasterLedgerIncome_Bal
Double* mGetMasterLedgerIncome_Bal
CRegister.businessChannelOwner mSetMasterLedgerIncome_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerIncome_BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerIncome_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerIncome_MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerIncome_ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerIncome_ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerIncome_ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerIncome_ChartOfClassesId
CAdministration.branch mSetMasterLedgerIncome_BranchId
CAdministration.branch* mGetMasterLedgerIncome_BranchId
CAdministration.department mSetMasterLedgerIncome_DepartmentId
CAdministration.department* mGetMasterLedgerIncome_DepartmentId
CFinance.bank mSetMasterLedgerIncome_BankId
CFinance.bank* mGetMasterLedgerIncome_BankId
CProperty.program mSetMasterLedgerIncome_ProgramId
CProperty.program* mGetMasterLedgerIncome_ProgramId
CProperty.project mSetMasterLedgerIncome_ProjectId
CProperty.project* mGetMasterLedgerIncome_ProjectId
CAdministration.item mSetMasterLedgerIncome_ItemId
CAdministration.item* mGetMasterLedgerIncome_ItemId
CAdministration.job mSetMasterLedgerIncome_JobId
CAdministration.job* mGetMasterLedgerIncome_JobId
CAdministration.service mSetMasterLedgerIncome_ServiceId
CAdministration.service* mGetMasterLedgerIncome_ServiceId
CCustomer.customer mSetMasterLedgerIncome_CustomerId
CCustomer.customer* mGetMasterLedgerIncome_CustomerId
CSupplier.supplier mSetMasterLedgerIncome_SupplierId
CSupplier.supplier* mGetMasterLedgerIncome_SupplierId
realEstatePurchOrders mSetMasterLedgerIncome_PurchOrderId
realEstatePurchOrders* mGetMasterLedgerIncome_PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerIncome_MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerIncome_MasterSalesOrderId
CFinance.invoice mSetMasterLedgerIncome_InvoiceId
CFinance.invoice* mGetMasterLedgerIncome_InvoiceId
CFinance.bill mSetMasterLedgerIncome_BillId
CFinance.bill* mGetMasterLedgerIncome_BillId
const String& mSetMasterLedgerReturnsIn_MasterLedgerReturnsInId
String* mGetMasterLedgerReturnsIn_MasterLedgerReturnsInId
const String& mSetMasterLedgerReturnsIn_BankBSB
String* mGetMasterLedgerReturnsIn_BankBSB
const String& mSetMasterLedgerReturnsIn_BankAccountNumber
String* mGetMasterLedgerReturnsIn_BankAccountNumber
const String& mSetMasterLedgerReturnsIn_NameOnBankAccount
String* mGetMasterLedgerReturnsIn_NameOnBankAccount
const String& mSetMasterLedgerReturnsIn_Description
String* mGetMasterLedgerReturnsIn_Description
ArrayOf<const String&> mSetMasterLedgerReturnsIn_DocRefs
ArrayOf<String>* mGetMasterLedgerReturnsIn_DocRefs
const String& mSetMasterLedgerReturnsIn_FeeId
String* mGetMasterLedgerReturnsIn_FeeId
Int32 mSetMasterLedgerReturnsIn_MasLedgeFinTxNum
Int32* mGetMasterLedgerReturnsIn_MasLedgeFinTxNum
const String& mSetMasterLedgerReturnsIn_Level1AccountName
String* mGetMasterLedgerReturnsIn_Level1AccountName
const String& mSetMasterLedgerReturnsIn_Level1AccountNum
String* mGetMasterLedgerReturnsIn_Level1AccountNum
const String& mSetMasterLedgerReturnsIn_Level2AccountName
String* mGetMasterLedgerReturnsIn_Level2AccountName
const String& mSetMasterLedgerReturnsIn_Level2AccountNum
String* mGetMasterLedgerReturnsIn_Level2AccountNum
const String& mSetMasterLedgerReturnsIn_Level3AccountName
String* mGetMasterLedgerReturnsIn_Level3AccountName
const String& mSetMasterLedgerReturnsIn_Level3AccountNum
String* mGetMasterLedgerReturnsIn_Level3AccountNum
const String& mSetMasterLedgerReturnsIn_Level4AccountName
String* mGetMasterLedgerReturnsIn_Level4AccountName
const String& mSetMasterLedgerReturnsIn_Level4AccountNum
String* mGetMasterLedgerReturnsIn_Level4AccountNum
const String& mSetMasterLedgerReturnsIn_Level5AccountName
String* mGetMasterLedgerReturnsIn_Level5AccountName
const String& mSetMasterLedgerReturnsIn_Level5AccountNum
String* mGetMasterLedgerReturnsIn_Level5AccountNum
const String& mSetMasterLedgerReturnsIn_Level6AccountName
String* mGetMasterLedgerReturnsIn_Level6AccountName
const String& mSetMasterLedgerReturnsIn_Level6AccountNum
String* mGetMasterLedgerReturnsIn_Level6AccountNum
const String& mSetMasterLedgerReturnsIn_Level1ClassName
String* mGetMasterLedgerReturnsIn_Level1ClassName
const String& mSetMasterLedgerReturnsIn_Level2ClassName
String* mGetMasterLedgerReturnsIn_Level2ClassName
const String& mSetMasterLedgerReturnsIn_Level3ClassName
String* mGetMasterLedgerReturnsIn_Level3ClassName
const String& mSetMasterLedgerReturnsIn_TransactionEffective
String* mGetMasterLedgerReturnsIn_TransactionEffective
const String& mSetMasterLedgerReturnsIn_MasLedgeFinTxId
String* mGetMasterLedgerReturnsIn_MasLedgeFinTxId
Double mSetMasterLedgerReturnsIn_Cr
Double* mGetMasterLedgerReturnsIn_Cr
Double mSetMasterLedgerReturnsIn_Dr
Double* mGetMasterLedgerReturnsIn_Dr
Double mSetMasterLedgerReturnsIn_Bal
Double* mGetMasterLedgerReturnsIn_Bal
CRegister.businessChannelOwner mSetMasterLedgerReturnsIn_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerReturnsIn_BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerReturnsIn_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerReturnsIn_MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerReturnsIn_ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerReturnsIn_ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerReturnsIn_ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerReturnsIn_ChartOfClassesId
CAdministration.branch mSetMasterLedgerReturnsIn_BranchId
CAdministration.branch* mGetMasterLedgerReturnsIn_BranchId
CAdministration.department mSetMasterLedgerReturnsIn_DepartmentId
CAdministration.department* mGetMasterLedgerReturnsIn_DepartmentId
CFinance.bank mSetMasterLedgerReturnsIn_BankId
CFinance.bank* mGetMasterLedgerReturnsIn_BankId
CProperty.program mSetMasterLedgerReturnsIn_ProgramId
CProperty.program* mGetMasterLedgerReturnsIn_ProgramId
CProperty.project mSetMasterLedgerReturnsIn_ProjectId
CProperty.project* mGetMasterLedgerReturnsIn_ProjectId
CAdministration.item mSetMasterLedgerReturnsIn_ItemId
CAdministration.item* mGetMasterLedgerReturnsIn_ItemId
CAdministration.job mSetMasterLedgerReturnsIn_JobId
CAdministration.job* mGetMasterLedgerReturnsIn_JobId
CAdministration.service mSetMasterLedgerReturnsIn_ServiceId
CAdministration.service* mGetMasterLedgerReturnsIn_ServiceId
CCustomer.customer mSetMasterLedgerReturnsIn_CustomerId
CCustomer.customer* mGetMasterLedgerReturnsIn_CustomerId
CSupplier.supplier mSetMasterLedgerReturnsIn_SupplierId
CSupplier.supplier* mGetMasterLedgerReturnsIn_SupplierId
realEstatePurchOrders mSetMasterLedgerReturnsIn_PurchOrderId
realEstatePurchOrders* mGetMasterLedgerReturnsIn_PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerReturnsIn_MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerReturnsIn_MasterSalesOrderId
CFinance.invoice mSetMasterLedgerReturnsIn_InvoiceId
CFinance.invoice* mGetMasterLedgerReturnsIn_InvoiceId
CFinance.bill mSetMasterLedgerReturnsIn_BillId
CFinance.bill* mGetMasterLedgerReturnsIn_BillId
const String& mSetMasterLedgerExpense_MasterLedgerExpenseId
String* mGetMasterLedgerExpense_MasterLedgerExpenseId
const String& mSetMasterLedgerExpense_BankBSB
String* mGetMasterLedgerExpense_BankBSB
const String& mSetMasterLedgerExpense_BankAccountNumber
String* mGetMasterLedgerExpense_BankAccountNumber
const String& mSetMasterLedgerExpense_NameOnBankAccount
String* mGetMasterLedgerExpense_NameOnBankAccount
const String& mSetMasterLedgerExpense_Description
String* mGetMasterLedgerExpense_Description
ArrayOf<const String&> mSetMasterLedgerExpense_DocRefs
ArrayOf<String>* mGetMasterLedgerExpense_DocRefs
const String& mSetMasterLedgerExpense_FeeId
String* mGetMasterLedgerExpense_FeeId
Int32 mSetMasterLedgerExpense_MasLedgeFinTxNum
Int32* mGetMasterLedgerExpense_MasLedgeFinTxNum
const String& mSetMasterLedgerExpense_Level1AccountName
String* mGetMasterLedgerExpense_Level1AccountName
const String& mSetMasterLedgerExpense_Level1AccountNum
String* mGetMasterLedgerExpense_Level1AccountNum
const String& mSetMasterLedgerExpense_Level2AccountName
String* mGetMasterLedgerExpense_Level2AccountName
const String& mSetMasterLedgerExpense_Level2AccountNum
String* mGetMasterLedgerExpense_Level2AccountNum
const String& mSetMasterLedgerExpense_Level3AccountName
String* mGetMasterLedgerExpense_Level3AccountName
const String& mSetMasterLedgerExpense_Level3AccountNum
String* mGetMasterLedgerExpense_Level3AccountNum
const String& mSetMasterLedgerExpense_Level4AccountName
String* mGetMasterLedgerExpense_Level4AccountName
const String& mSetMasterLedgerExpense_Level4AccountNum
String* mGetMasterLedgerExpense_Level4AccountNum
const String& mSetMasterLedgerExpense_Level5AccountName
String* mGetMasterLedgerExpense_Level5AccountName
const String& mSetMasterLedgerExpense_Level5AccountNum
String* mGetMasterLedgerExpense_Level5AccountNum
const String& mSetMasterLedgerExpense_Level6AccountName
String* mGetMasterLedgerExpense_Level6AccountName
const String& mSetMasterLedgerExpense_Level6AccountNum
String* mGetMasterLedgerExpense_Level6AccountNum
const String& mSetMasterLedgerExpense_Level1ClassName
String* mGetMasterLedgerExpense_Level1ClassName
const String& mSetMasterLedgerExpense_Level2ClassName
String* mGetMasterLedgerExpense_Level2ClassName
const String& mSetMasterLedgerExpense_Level3ClassName
String* mGetMasterLedgerExpense_Level3ClassName
const String& mSetMasterLedgerExpense_TransactionEffective
String* mGetMasterLedgerExpense_TransactionEffective
const String& mSetMasterLedgerExpense_MasLedgeFinTxId
String* mGetMasterLedgerExpense_MasLedgeFinTxId
Double mSetMasterLedgerExpense_Cr
Double* mGetMasterLedgerExpense_Cr
Double mSetMasterLedgerExpense_Dr
Double* mGetMasterLedgerExpense_Dr
Double mSetMasterLedgerExpense_Bal
Double* mGetMasterLedgerExpense_Bal
CRegister.businessChannelOwner mSetMasterLedgerExpense_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerExpense_BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerExpense_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerExpense_MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerExpense_ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerExpense_ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerExpense_ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerExpense_ChartOfClassesId
CAdministration.branch mSetMasterLedgerExpense_BranchId
CAdministration.branch* mGetMasterLedgerExpense_BranchId
CAdministration.department mSetMasterLedgerExpense_DepartmentId
CAdministration.department* mGetMasterLedgerExpense_DepartmentId
CFinance.bank mSetMasterLedgerExpense_BankId
CFinance.bank* mGetMasterLedgerExpense_BankId
CProperty.program mSetMasterLedgerExpense_ProgramId
CProperty.program* mGetMasterLedgerExpense_ProgramId
CProperty.project mSetMasterLedgerExpense_ProjectId
CProperty.project* mGetMasterLedgerExpense_ProjectId
CAdministration.item mSetMasterLedgerExpense_ItemId
CAdministration.item* mGetMasterLedgerExpense_ItemId
CAdministration.job mSetMasterLedgerExpense_JobId
CAdministration.job* mGetMasterLedgerExpense_JobId
CAdministration.service mSetMasterLedgerExpense_ServiceId
CAdministration.service* mGetMasterLedgerExpense_ServiceId
CCustomer.customer mSetMasterLedgerExpense_CustomerId
CCustomer.customer* mGetMasterLedgerExpense_CustomerId
CSupplier.supplier mSetMasterLedgerExpense_SupplierId
CSupplier.supplier* mGetMasterLedgerExpense_SupplierId
realEstatePurchOrders mSetMasterLedgerExpense_PurchOrderId
realEstatePurchOrders* mGetMasterLedgerExpense_PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerExpense_MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerExpense_MasterSalesOrderId
CFinance.invoice mSetMasterLedgerExpense_InvoiceId
CFinance.invoice* mGetMasterLedgerExpense_InvoiceId
CFinance.bill mSetMasterLedgerExpense_BillId
CFinance.bill* mGetMasterLedgerExpense_BillId
const String& mSetMasterLedgerReturnsOut_MasterLedgerReturnsOutId
String* mGetMasterLedgerReturnsOut_MasterLedgerReturnsOutId
const String& mSetMasterLedgerReturnsOut_BankBSB
String* mGetMasterLedgerReturnsOut_BankBSB
const String& mSetMasterLedgerReturnsOut_BankAccountNumber
String* mGetMasterLedgerReturnsOut_BankAccountNumber
const String& mSetMasterLedgerReturnsOut_NameOnBankAccount
String* mGetMasterLedgerReturnsOut_NameOnBankAccount
const String& mSetMasterLedgerReturnsOut_Description
String* mGetMasterLedgerReturnsOut_Description
ArrayOf<const String&> mSetMasterLedgerReturnsOut_DocRefs
ArrayOf<String>* mGetMasterLedgerReturnsOut_DocRefs
const String& mSetMasterLedgerReturnsOut_FeeId
String* mGetMasterLedgerReturnsOut_FeeId
Int32 mSetMasterLedgerReturnsOut_MasLedgeFinTxNum
Int32* mGetMasterLedgerReturnsOut_MasLedgeFinTxNum
const String& mSetMasterLedgerReturnsOut_Level1AccountName
String* mGetMasterLedgerReturnsOut_Level1AccountName
const String& mSetMasterLedgerReturnsOut_Level1AccountNum
String* mGetMasterLedgerReturnsOut_Level1AccountNum
const String& mSetMasterLedgerReturnsOut_Level2AccountName
String* mGetMasterLedgerReturnsOut_Level2AccountName
const String& mSetMasterLedgerReturnsOut_Level2AccountNum
String* mGetMasterLedgerReturnsOut_Level2AccountNum
const String& mSetMasterLedgerReturnsOut_Level3AccountName
String* mGetMasterLedgerReturnsOut_Level3AccountName
const String& mSetMasterLedgerReturnsOut_Level3AccountNum
String* mGetMasterLedgerReturnsOut_Level3AccountNum
const String& mSetMasterLedgerReturnsOut_Level4AccountName
String* mGetMasterLedgerReturnsOut_Level4AccountName
const String& mSetMasterLedgerReturnsOut_Level4AccountNum
String* mGetMasterLedgerReturnsOut_Level4AccountNum
const String& mSetMasterLedgerReturnsOut_Level5AccountName
String* mGetMasterLedgerReturnsOut_Level5AccountName
const String& mSetMasterLedgerReturnsOut_Level5AccountNum
String* mGetMasterLedgerReturnsOut_Level5AccountNum
const String& mSetMasterLedgerReturnsOut_Level6AccountName
String* mGetMasterLedgerReturnsOut_Level6AccountName
const String& mSetMasterLedgerReturnsOut_Level6AccountNum
String* mGetMasterLedgerReturnsOut_Level6AccountNum
const String& mSetMasterLedgerReturnsOut_Level1ClassName
String* mGetMasterLedgerReturnsOut_Level1ClassName
const String& mSetMasterLedgerReturnsOut_Level2ClassName
String* mGetMasterLedgerReturnsOut_Level2ClassName
const String& mSetMasterLedgerReturnsOut_Level3ClassName
String* mGetMasterLedgerReturnsOut_Level3ClassName
const String& mSetMasterLedgerReturnsOut_TransactionEffective
String* mGetMasterLedgerReturnsOut_TransactionEffective
const String& mSetMasterLedgerReturnsOut_MasLedgeFinTxId
String* mGetMasterLedgerReturnsOut_MasLedgeFinTxId
Double mSetMasterLedgerReturnsOut_Cr
Double* mGetMasterLedgerReturnsOut_Cr
Double mSetMasterLedgerReturnsOut_Dr
Double* mGetMasterLedgerReturnsOut_Dr
Double mSetMasterLedgerReturnsOut_Bal
Double* mGetMasterLedgerReturnsOut_Bal
CRegister.businessChannelOwner mSetMasterLedgerReturnsOut_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerReturnsOut_BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerReturnsOut_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerReturnsOut_MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerReturnsOut_ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerReturnsOut_ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerReturnsOut_ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerReturnsOut_ChartOfClassesId
CAdministration.branch mSetMasterLedgerReturnsOut_BranchId
CAdministration.branch* mGetMasterLedgerReturnsOut_BranchId
CAdministration.department mSetMasterLedgerReturnsOut_DepartmentId
CAdministration.department* mGetMasterLedgerReturnsOut_DepartmentId
CFinance.bank mSetMasterLedgerReturnsOut_BankId
CFinance.bank* mGetMasterLedgerReturnsOut_BankId
CProperty.program mSetMasterLedgerReturnsOut_ProgramId
CProperty.program* mGetMasterLedgerReturnsOut_ProgramId
CProperty.project mSetMasterLedgerReturnsOut_ProjectId
CProperty.project* mGetMasterLedgerReturnsOut_ProjectId
CAdministration.item mSetMasterLedgerReturnsOut_ItemId
CAdministration.item* mGetMasterLedgerReturnsOut_ItemId
CAdministration.job mSetMasterLedgerReturnsOut_JobId
CAdministration.job* mGetMasterLedgerReturnsOut_JobId
CAdministration.service mSetMasterLedgerReturnsOut_ServiceId
CAdministration.service* mGetMasterLedgerReturnsOut_ServiceId
CCustomer.customer mSetMasterLedgerReturnsOut_CustomerId
CCustomer.customer* mGetMasterLedgerReturnsOut_CustomerId
CSupplier.supplier mSetMasterLedgerReturnsOut_SupplierId
CSupplier.supplier* mGetMasterLedgerReturnsOut_SupplierId
realEstatePurchOrders mSetMasterLedgerReturnsOut_PurchOrderId
realEstatePurchOrders* mGetMasterLedgerReturnsOut_PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerReturnsOut_MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerReturnsOut_MasterSalesOrderId
CFinance.invoice mSetMasterLedgerReturnsOut_InvoiceId
CFinance.invoice* mGetMasterLedgerReturnsOut_InvoiceId
CFinance.bill mSetMasterLedgerReturnsOut_BillId
CFinance.bill* mGetMasterLedgerReturnsOut_BillId
const String& mSetMasterLedgerOtherIncome_MasterLedgerOtherIncomeId
String* mGetMasterLedgerOtherIncome_MasterLedgerOtherIncomeId
const String& mSetMasterLedgerOtherIncome_BankBSB
String* mGetMasterLedgerOtherIncome_BankBSB
const String& mSetMasterLedgerOtherIncome_BankAccountNumber
String* mGetMasterLedgerOtherIncome_BankAccountNumber
const String& mSetMasterLedgerOtherIncome_NameOnBankAccount
String* mGetMasterLedgerOtherIncome_NameOnBankAccount
const String& mSetMasterLedgerOtherIncome_Description
String* mGetMasterLedgerOtherIncome_Description
ArrayOf<const String&> mSetMasterLedgerOtherIncome_DocRefs
ArrayOf<String>* mGetMasterLedgerOtherIncome_DocRefs
const String& mSetMasterLedgerOtherIncome_FeeId
String* mGetMasterLedgerOtherIncome_FeeId
Int32 mSetMasterLedgerOtherIncome_MasLedgeFinTxNum
Int32* mGetMasterLedgerOtherIncome_MasLedgeFinTxNum
const String& mSetMasterLedgerOtherIncome_Level1AccountName
String* mGetMasterLedgerOtherIncome_Level1AccountName
const String& mSetMasterLedgerOtherIncome_Level1AccountNum
String* mGetMasterLedgerOtherIncome_Level1AccountNum
const String& mSetMasterLedgerOtherIncome_Level2AccountName
String* mGetMasterLedgerOtherIncome_Level2AccountName
const String& mSetMasterLedgerOtherIncome_Level2AccountNum
String* mGetMasterLedgerOtherIncome_Level2AccountNum
const String& mSetMasterLedgerOtherIncome_Level3AccountName
String* mGetMasterLedgerOtherIncome_Level3AccountName
const String& mSetMasterLedgerOtherIncome_Level3AccountNum
String* mGetMasterLedgerOtherIncome_Level3AccountNum
const String& mSetMasterLedgerOtherIncome_Level4AccountName
String* mGetMasterLedgerOtherIncome_Level4AccountName
const String& mSetMasterLedgerOtherIncome_Level4AccountNum
String* mGetMasterLedgerOtherIncome_Level4AccountNum
const String& mSetMasterLedgerOtherIncome_Level5AccountName
String* mGetMasterLedgerOtherIncome_Level5AccountName
const String& mSetMasterLedgerOtherIncome_Level5AccountNum
String* mGetMasterLedgerOtherIncome_Level5AccountNum
const String& mSetMasterLedgerOtherIncome_Level6AccountName
String* mGetMasterLedgerOtherIncome_Level6AccountName
const String& mSetMasterLedgerOtherIncome_Level6AccountNum
String* mGetMasterLedgerOtherIncome_Level6AccountNum
const String& mSetMasterLedgerOtherIncome_Level1ClassName
String* mGetMasterLedgerOtherIncome_Level1ClassName
const String& mSetMasterLedgerOtherIncome_Level2ClassName
String* mGetMasterLedgerOtherIncome_Level2ClassName
const String& mSetMasterLedgerOtherIncome_Level3ClassName
String* mGetMasterLedgerOtherIncome_Level3ClassName
const String& mSetMasterLedgerOtherIncome_TransactionEffective
String* mGetMasterLedgerOtherIncome_TransactionEffective
const String& mSetMasterLedgerOtherIncome_MasLedgeFinTxId
String* mGetMasterLedgerOtherIncome_MasLedgeFinTxId
Double mSetMasterLedgerOtherIncome_Cr
Double* mGetMasterLedgerOtherIncome_Cr
Double mSetMasterLedgerOtherIncome_Dr
Double* mGetMasterLedgerOtherIncome_Dr
Double mSetMasterLedgerOtherIncome_Bal
Double* mGetMasterLedgerOtherIncome_Bal
CRegister.businessChannelOwner mSetMasterLedgerOtherIncome_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerOtherIncome_BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerOtherIncome_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerOtherIncome_MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerOtherIncome_ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerOtherIncome_ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerOtherIncome_ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerOtherIncome_ChartOfClassesId
CAdministration.branch mSetMasterLedgerOtherIncome_BranchId
CAdministration.branch* mGetMasterLedgerOtherIncome_BranchId
CAdministration.department mSetMasterLedgerOtherIncome_DepartmentId
CAdministration.department* mGetMasterLedgerOtherIncome_DepartmentId
CFinance.bank mSetMasterLedgerOtherIncome_BankId
CFinance.bank* mGetMasterLedgerOtherIncome_BankId
CProperty.program mSetMasterLedgerOtherIncome_ProgramId
CProperty.program* mGetMasterLedgerOtherIncome_ProgramId
CProperty.project mSetMasterLedgerOtherIncome_ProjectId
CProperty.project* mGetMasterLedgerOtherIncome_ProjectId
CAdministration.item mSetMasterLedgerOtherIncome_ItemId
CAdministration.item* mGetMasterLedgerOtherIncome_ItemId
CAdministration.job mSetMasterLedgerOtherIncome_JobId
CAdministration.job* mGetMasterLedgerOtherIncome_JobId
CAdministration.service mSetMasterLedgerOtherIncome_ServiceId
CAdministration.service* mGetMasterLedgerOtherIncome_ServiceId
CCustomer.customer mSetMasterLedgerOtherIncome_CustomerId
CCustomer.customer* mGetMasterLedgerOtherIncome_CustomerId
CSupplier.supplier mSetMasterLedgerOtherIncome_SupplierId
CSupplier.supplier* mGetMasterLedgerOtherIncome_SupplierId
realEstatePurchOrders mSetMasterLedgerOtherIncome_PurchOrderId
realEstatePurchOrders* mGetMasterLedgerOtherIncome_PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerOtherIncome_MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerOtherIncome_MasterSalesOrderId
CFinance.invoice mSetMasterLedgerOtherIncome_InvoiceId
CFinance.invoice* mGetMasterLedgerOtherIncome_InvoiceId
CFinance.bill mSetMasterLedgerOtherIncome_BillId
CFinance.bill* mGetMasterLedgerOtherIncome_BillId
const String& mSetMasterLedgerOtherExpense_MasterLedgerOtherExpenseId
String* mGetMasterLedgerOtherExpense_MasterLedgerOtherExpenseId
const String& mSetMasterLedgerOtherExpense_BankBSB
String* mGetMasterLedgerOtherExpense_BankBSB
const String& mSetMasterLedgerOtherExpense_BankAccountNumber
String* mGetMasterLedgerOtherExpense_BankAccountNumber
const String& mSetMasterLedgerOtherExpense_NameOnBankAccount
String* mGetMasterLedgerOtherExpense_NameOnBankAccount
const String& mSetMasterLedgerOtherExpense_Description
String* mGetMasterLedgerOtherExpense_Description
ArrayOf<const String&> mSetMasterLedgerOtherExpense_DocRefs
ArrayOf<String>* mGetMasterLedgerOtherExpense_DocRefs
const String& mSetMasterLedgerOtherExpense_FeeId
String* mGetMasterLedgerOtherExpense_FeeId
Int32 mSetMasterLedgerOtherExpense_MasLedgeFinTxNum
Int32* mGetMasterLedgerOtherExpense_MasLedgeFinTxNum
const String& mSetMasterLedgerOtherExpense_Level1AccountName
String* mGetMasterLedgerOtherExpense_Level1AccountName
const String& mSetMasterLedgerOtherExpense_Level1AccountNum
String* mGetMasterLedgerOtherExpense_Level1AccountNum
const String& mSetMasterLedgerOtherExpense_Level2AccountName
String* mGetMasterLedgerOtherExpense_Level2AccountName
const String& mSetMasterLedgerOtherExpense_Level2AccountNum
String* mGetMasterLedgerOtherExpense_Level2AccountNum
const String& mSetMasterLedgerOtherExpense_Level3AccountName
String* mGetMasterLedgerOtherExpense_Level3AccountName
const String& mSetMasterLedgerOtherExpense_Level3AccountNum
String* mGetMasterLedgerOtherExpense_Level3AccountNum
const String& mSetMasterLedgerOtherExpense_Level4AccountName
String* mGetMasterLedgerOtherExpense_Level4AccountName
const String& mSetMasterLedgerOtherExpense_Level4AccountNum
String* mGetMasterLedgerOtherExpense_Level4AccountNum
const String& mSetMasterLedgerOtherExpense_Level5AccountName
String* mGetMasterLedgerOtherExpense_Level5AccountName
const String& mSetMasterLedgerOtherExpense_Level5AccountNum
String* mGetMasterLedgerOtherExpense_Level5AccountNum
const String& mSetMasterLedgerOtherExpense_Level6AccountName
String* mGetMasterLedgerOtherExpense_Level6AccountName
const String& mSetMasterLedgerOtherExpense_Level6AccountNum
String* mGetMasterLedgerOtherExpense_Level6AccountNum
const String& mSetMasterLedgerOtherExpense_Level1ClassName
String* mGetMasterLedgerOtherExpense_Level1ClassName
const String& mSetMasterLedgerOtherExpense_Level2ClassName
String* mGetMasterLedgerOtherExpense_Level2ClassName
const String& mSetMasterLedgerOtherExpense_Level3ClassName
String* mGetMasterLedgerOtherExpense_Level3ClassName
const String& mSetMasterLedgerOtherExpense_TransactionEffective
String* mGetMasterLedgerOtherExpense_TransactionEffective
const String& mSetMasterLedgerOtherExpense_MasLedgeFinTxId
String* mGetMasterLedgerOtherExpense_MasLedgeFinTxId
Double mSetMasterLedgerOtherExpense_Cr
Double* mGetMasterLedgerOtherExpense_Cr
Double mSetMasterLedgerOtherExpense_Dr
Double* mGetMasterLedgerOtherExpense_Dr
Double mSetMasterLedgerOtherExpense_Bal
Double* mGetMasterLedgerOtherExpense_Bal
CRegister.businessChannelOwner mSetMasterLedgerOtherExpense_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterLedgerOtherExpense_BusinessChannelOwnerId
masLedgeFinTxJoin mSetMasterLedgerOtherExpense_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterLedgerOtherExpense_MasLedgeFinTxJoinId
CFinance.chartOfAccounts mSetMasterLedgerOtherExpense_ChartOfAccountsId
CFinance.chartOfAccounts* mGetMasterLedgerOtherExpense_ChartOfAccountsId
CFinance.chartOfClasses mSetMasterLedgerOtherExpense_ChartOfClassesId
CFinance.chartOfClasses* mGetMasterLedgerOtherExpense_ChartOfClassesId
CAdministration.branch mSetMasterLedgerOtherExpense_BranchId
CAdministration.branch* mGetMasterLedgerOtherExpense_BranchId
CAdministration.department mSetMasterLedgerOtherExpense_DepartmentId
CAdministration.department* mGetMasterLedgerOtherExpense_DepartmentId
CFinance.bank mSetMasterLedgerOtherExpense_BankId
CFinance.bank* mGetMasterLedgerOtherExpense_BankId
CProperty.program mSetMasterLedgerOtherExpense_ProgramId
CProperty.program* mGetMasterLedgerOtherExpense_ProgramId
CProperty.project mSetMasterLedgerOtherExpense_ProjectId
CProperty.project* mGetMasterLedgerOtherExpense_ProjectId
CAdministration.item mSetMasterLedgerOtherExpense_ItemId
CAdministration.item* mGetMasterLedgerOtherExpense_ItemId
CAdministration.job mSetMasterLedgerOtherExpense_JobId
CAdministration.job* mGetMasterLedgerOtherExpense_JobId
CAdministration.service mSetMasterLedgerOtherExpense_ServiceId
CAdministration.service* mGetMasterLedgerOtherExpense_ServiceId
CCustomer.customer mSetMasterLedgerOtherExpense_CustomerId
CCustomer.customer* mGetMasterLedgerOtherExpense_CustomerId
CSupplier.supplier mSetMasterLedgerOtherExpense_SupplierId
CSupplier.supplier* mGetMasterLedgerOtherExpense_SupplierId
realEstatePurchOrders mSetMasterLedgerOtherExpense_PurchOrderId
realEstatePurchOrders* mGetMasterLedgerOtherExpense_PurchOrderId
CFinance.masterSalesOrder mSetMasterLedgerOtherExpense_MasterSalesOrderId
CFinance.masterSalesOrder* mGetMasterLedgerOtherExpense_MasterSalesOrderId
CFinance.invoice mSetMasterLedgerOtherExpense_InvoiceId
CFinance.invoice* mGetMasterLedgerOtherExpense_InvoiceId
CFinance.bill mSetMasterLedgerOtherExpense_BillId
CFinance.bill* mGetMasterLedgerOtherExpense_BillId
const String& mSetLevel1Budget_Level1BudgetId
String* mGetLevel1Budget_Level1BudgetId
const String& mSetLevel1Budget_BudgetName
String* mGetLevel1Budget_BudgetName
Int32 mSetLevel1Budget_EndYearMonthyyyymm
Int32* mGetLevel1Budget_EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel1Budget_TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel1Budget_TwelveMonthSequence
ArrayOf<const String&> mSetLevel1Budget_IncomeItemTypeIds
ArrayOf<String>* mGetLevel1Budget_IncomeItemTypeIds
ArrayOf<Double> mSetLevel1Budget_JanRevenues
ArrayOf<Double>* mGetLevel1Budget_JanRevenues
ArrayOf<Double> mSetLevel1Budget_FebRevenues
ArrayOf<Double>* mGetLevel1Budget_FebRevenues
ArrayOf<Double> mSetLevel1Budget_MarRevenues
ArrayOf<Double>* mGetLevel1Budget_MarRevenues
ArrayOf<Double> mSetLevel1Budget_AprRevenues
ArrayOf<Double>* mGetLevel1Budget_AprRevenues
ArrayOf<Double> mSetLevel1Budget_MayRevenues
ArrayOf<Double>* mGetLevel1Budget_MayRevenues
ArrayOf<Double> mSetLevel1Budget_JunRevenues
ArrayOf<Double>* mGetLevel1Budget_JunRevenues
ArrayOf<Double> mSetLevel1Budget_JulRevenues
ArrayOf<Double>* mGetLevel1Budget_JulRevenues
ArrayOf<Double> mSetLevel1Budget_AugRevenues
ArrayOf<Double>* mGetLevel1Budget_AugRevenues
ArrayOf<Double> mSetLevel1Budget_SepRevenues
ArrayOf<Double>* mGetLevel1Budget_SepRevenues
ArrayOf<Double> mSetLevel1Budget_OctRevenues
ArrayOf<Double>* mGetLevel1Budget_OctRevenues
ArrayOf<Double> mSetLevel1Budget_NovRevenues
ArrayOf<Double>* mGetLevel1Budget_NovRevenues
ArrayOf<Double> mSetLevel1Budget_DecRevenues
ArrayOf<Double>* mGetLevel1Budget_DecRevenues
ArrayOf<const String&> mSetLevel1Budget_JanItemTypeIds
ArrayOf<String>* mGetLevel1Budget_JanItemTypeIds
ArrayOf<const String&> mSetLevel1Budget_FebItemTypeIds
ArrayOf<String>* mGetLevel1Budget_FebItemTypeIds
ArrayOf<const String&> mSetLevel1Budget_MarItemTypeIds
ArrayOf<String>* mGetLevel1Budget_MarItemTypeIds
ArrayOf<const String&> mSetLevel1Budget_AprItemTypeIds
ArrayOf<String>* mGetLevel1Budget_AprItemTypeIds
ArrayOf<const String&> mSetLevel1Budget_MayItemTypeIds
ArrayOf<String>* mGetLevel1Budget_MayItemTypeIds
ArrayOf<const String&> mSetLevel1Budget_JunItemTypeIds
ArrayOf<String>* mGetLevel1Budget_JunItemTypeIds
ArrayOf<const String&> mSetLevel1Budget_JulItemTypeIds
ArrayOf<String>* mGetLevel1Budget_JulItemTypeIds
ArrayOf<const String&> mSetLevel1Budget_AugItemTypeIds
ArrayOf<String>* mGetLevel1Budget_AugItemTypeIds
ArrayOf<const String&> mSetLevel1Budget_SepItemTypeIds
ArrayOf<String>* mGetLevel1Budget_SepItemTypeIds
ArrayOf<const String&> mSetLevel1Budget_OctItemTypeIds
ArrayOf<String>* mGetLevel1Budget_OctItemTypeIds
ArrayOf<const String&> mSetLevel1Budget_NovItemTypeIds
ArrayOf<String>* mGetLevel1Budget_NovItemTypeIds
ArrayOf<const String&> mSetLevel1Budget_DecItemTypeIds
ArrayOf<String>* mGetLevel1Budget_DecItemTypeIds
ArrayOf<Double> mSetLevel1Budget_JanCostsItems
ArrayOf<Double>* mGetLevel1Budget_JanCostsItems
ArrayOf<Double> mSetLevel1Budget_FebCostsItems
ArrayOf<Double>* mGetLevel1Budget_FebCostsItems
ArrayOf<Double> mSetLevel1Budget_MarCostsItems
ArrayOf<Double>* mGetLevel1Budget_MarCostsItems
ArrayOf<Double> mSetLevel1Budget_AprCostsItems
ArrayOf<Double>* mGetLevel1Budget_AprCostsItems
ArrayOf<Double> mSetLevel1Budget_MayCostsItems
ArrayOf<Double>* mGetLevel1Budget_MayCostsItems
ArrayOf<Double> mSetLevel1Budget_JunCostsItems
ArrayOf<Double>* mGetLevel1Budget_JunCostsItems
ArrayOf<Double> mSetLevel1Budget_JulCostsItems
ArrayOf<Double>* mGetLevel1Budget_JulCostsItems
ArrayOf<Double> mSetLevel1Budget_AugCostsItems
ArrayOf<Double>* mGetLevel1Budget_AugCostsItems
ArrayOf<Double> mSetLevel1Budget_SepCostsItems
ArrayOf<Double>* mGetLevel1Budget_SepCostsItems
ArrayOf<Double> mSetLevel1Budget_OctCostsItems
ArrayOf<Double>* mGetLevel1Budget_OctCostsItems
ArrayOf<Double> mSetLevel1Budget_NovCostsItems
ArrayOf<Double>* mGetLevel1Budget_NovCostsItems
ArrayOf<Double> mSetLevel1Budget_DecCostsItems
ArrayOf<Double>* mGetLevel1Budget_DecCostsItems
ArrayOf<const String&> mSetLevel1Budget_JanJobTypeIds
ArrayOf<String>* mGetLevel1Budget_JanJobTypeIds
ArrayOf<const String&> mSetLevel1Budget_FebJobTypeIds
ArrayOf<String>* mGetLevel1Budget_FebJobTypeIds
ArrayOf<const String&> mSetLevel1Budget_MarJobTypeIds
ArrayOf<String>* mGetLevel1Budget_MarJobTypeIds
ArrayOf<const String&> mSetLevel1Budget_AprJobTypeIds
ArrayOf<String>* mGetLevel1Budget_AprJobTypeIds
ArrayOf<const String&> mSetLevel1Budget_MayJobTypeIds
ArrayOf<String>* mGetLevel1Budget_MayJobTypeIds
ArrayOf<const String&> mSetLevel1Budget_JunJobTypeIds
ArrayOf<String>* mGetLevel1Budget_JunJobTypeIds
ArrayOf<const String&> mSetLevel1Budget_JulJobTypeIds
ArrayOf<String>* mGetLevel1Budget_JulJobTypeIds
ArrayOf<const String&> mSetLevel1Budget_AugJobTypeIds
ArrayOf<String>* mGetLevel1Budget_AugJobTypeIds
ArrayOf<const String&> mSetLevel1Budget_SepJobTypeIds
ArrayOf<String>* mGetLevel1Budget_SepJobTypeIds
ArrayOf<const String&> mSetLevel1Budget_OctJobTypeIds
ArrayOf<String>* mGetLevel1Budget_OctJobTypeIds
ArrayOf<const String&> mSetLevel1Budget_NovJobTypeIds
ArrayOf<String>* mGetLevel1Budget_NovJobTypeIds
ArrayOf<const String&> mSetLevel1Budget_DecJobTypeIds
ArrayOf<String>* mGetLevel1Budget_DecJobTypeIds
ArrayOf<Double> mSetLevel1Budget_JanCostsJobs
ArrayOf<Double>* mGetLevel1Budget_JanCostsJobs
ArrayOf<Double> mSetLevel1Budget_FebCostsJobs
ArrayOf<Double>* mGetLevel1Budget_FebCostsJobs
ArrayOf<Double> mSetLevel1Budget_MarCostsJobs
ArrayOf<Double>* mGetLevel1Budget_MarCostsJobs
ArrayOf<Double> mSetLevel1Budget_AprCostsJobs
ArrayOf<Double>* mGetLevel1Budget_AprCostsJobs
ArrayOf<Double> mSetLevel1Budget_MayCostsJobs
ArrayOf<Double>* mGetLevel1Budget_MayCostsJobs
ArrayOf<Double> mSetLevel1Budget_JunCostsJobs
ArrayOf<Double>* mGetLevel1Budget_JunCostsJobs
ArrayOf<Double> mSetLevel1Budget_JulCostsJobs
ArrayOf<Double>* mGetLevel1Budget_JulCostsJobs
ArrayOf<Double> mSetLevel1Budget_AugCostsJobs
ArrayOf<Double>* mGetLevel1Budget_AugCostsJobs
ArrayOf<Double> mSetLevel1Budget_SepCostsJobs
ArrayOf<Double>* mGetLevel1Budget_SepCostsJobs
ArrayOf<Double> mSetLevel1Budget_OctCostsJobs
ArrayOf<Double>* mGetLevel1Budget_OctCostsJobs
ArrayOf<Double> mSetLevel1Budget_NovCostsJobs
ArrayOf<Double>* mGetLevel1Budget_NovCostsJobs
ArrayOf<Double> mSetLevel1Budget_DecCostsJobs
ArrayOf<Double>* mGetLevel1Budget_DecCostsJobs
ArrayOf<const String&> mSetLevel1Budget_JanServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_JanServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget_FebServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_FebServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget_MarServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_MarServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget_AprServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_AprServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget_MayServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_MayServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget_JunServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_JunServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget_JulServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_JulServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget_AugServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_AugServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget_SepServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_SepServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget_OctServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_OctServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget_NovServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_NovServiceTypeIds
ArrayOf<const String&> mSetLevel1Budget_DecServiceTypeIds
ArrayOf<String>* mGetLevel1Budget_DecServiceTypeIds
ArrayOf<Double> mSetLevel1Budget_JanCostsServices
ArrayOf<Double>* mGetLevel1Budget_JanCostsServices
ArrayOf<Double> mSetLevel1Budget_FebCostsServices
ArrayOf<Double>* mGetLevel1Budget_FebCostsServices
ArrayOf<Double> mSetLevel1Budget_MarCostsServices
ArrayOf<Double>* mGetLevel1Budget_MarCostsServices
ArrayOf<Double> mSetLevel1Budget_AprCostsServices
ArrayOf<Double>* mGetLevel1Budget_AprCostsServices
ArrayOf<Double> mSetLevel1Budget_MayCostsServices
ArrayOf<Double>* mGetLevel1Budget_MayCostsServices
ArrayOf<Double> mSetLevel1Budget_JunCostsServices
ArrayOf<Double>* mGetLevel1Budget_JunCostsServices
ArrayOf<Double> mSetLevel1Budget_JulCostsServices
ArrayOf<Double>* mGetLevel1Budget_JulCostsServices
ArrayOf<Double> mSetLevel1Budget_AugCostsServices
ArrayOf<Double>* mGetLevel1Budget_AugCostsServices
ArrayOf<Double> mSetLevel1Budget_SepCostsServices
ArrayOf<Double>* mGetLevel1Budget_SepCostsServices
ArrayOf<Double> mSetLevel1Budget_OctCostsServices
ArrayOf<Double>* mGetLevel1Budget_OctCostsServices
ArrayOf<Double> mSetLevel1Budget_NovCostsServices
ArrayOf<Double>* mGetLevel1Budget_NovCostsServices
ArrayOf<Double> mSetLevel1Budget_DecCostsServices
ArrayOf<Double>* mGetLevel1Budget_DecCostsServices
ArrayOf<Double> mSetLevel1Budget_TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel1Budget_TwelveTotalMonthlyCosts
Double mSetLevel1Budget_YearCostThisBudgetId
Double* mGetLevel1Budget_YearCostThisBudgetId
Double mSetLevel1Budget_NetProfitLossThisLevel1BudgetId
Double* mGetLevel1Budget_NetProfitLossThisLevel1BudgetId
Int32 mSetLevel1Budget_LinkingInternalBudgetNum
Int32* mGetLevel1Budget_LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel1Budget_CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel1Budget_CustomerIds
ArrayOf<CProperty.property> mSetLevel1Budget_PropertyIds
ArrayOf<CProperty.property>* mGetLevel1Budget_PropertyIds
ArrayOf<CProperty.program> mSetLevel1Budget_ProgramIds
ArrayOf<CProperty.program>* mGetLevel1Budget_ProgramIds
ArrayOf<CProperty.project> mSetLevel1Budget_ProjectIds
ArrayOf<CProperty.project>* mGetLevel1Budget_ProjectIds
CFinance.level2Budget mSetLevel1Budget_LinkedToLevel2BudgetId
CFinance.level2Budget* mGetLevel1Budget_LinkedToLevel2BudgetId
CFinance.masterSetRegister mSetLevel1Budget_MasterSetId
CFinance.masterSetRegister* mGetLevel1Budget_MasterSetId
CRegister.businessChannelOwner mSetLevel1Budget_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel1Budget_BusinessChannelOwnerId
const String& mSetLevel2Budget_Level2BudgetId
String* mGetLevel2Budget_Level2BudgetId
const String& mSetLevel2Budget_BudgetName
String* mGetLevel2Budget_BudgetName
Int32 mSetLevel2Budget_EndYearMonthyyyymm
Int32* mGetLevel2Budget_EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel2Budget_TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel2Budget_TwelveMonthSequence
ArrayOf<const String&> mSetLevel2Budget_IncomeItemTypeIds
ArrayOf<String>* mGetLevel2Budget_IncomeItemTypeIds
ArrayOf<Double> mSetLevel2Budget_JanRevenues
ArrayOf<Double>* mGetLevel2Budget_JanRevenues
ArrayOf<Double> mSetLevel2Budget_FebRevenues
ArrayOf<Double>* mGetLevel2Budget_FebRevenues
ArrayOf<Double> mSetLevel2Budget_MarRevenues
ArrayOf<Double>* mGetLevel2Budget_MarRevenues
ArrayOf<Double> mSetLevel2Budget_AprRevenues
ArrayOf<Double>* mGetLevel2Budget_AprRevenues
ArrayOf<Double> mSetLevel2Budget_MayRevenues
ArrayOf<Double>* mGetLevel2Budget_MayRevenues
ArrayOf<Double> mSetLevel2Budget_JunRevenues
ArrayOf<Double>* mGetLevel2Budget_JunRevenues
ArrayOf<Double> mSetLevel2Budget_JulRevenues
ArrayOf<Double>* mGetLevel2Budget_JulRevenues
ArrayOf<Double> mSetLevel2Budget_AugRevenues
ArrayOf<Double>* mGetLevel2Budget_AugRevenues
ArrayOf<Double> mSetLevel2Budget_SepRevenues
ArrayOf<Double>* mGetLevel2Budget_SepRevenues
ArrayOf<Double> mSetLevel2Budget_OctRevenues
ArrayOf<Double>* mGetLevel2Budget_OctRevenues
ArrayOf<Double> mSetLevel2Budget_NovRevenues
ArrayOf<Double>* mGetLevel2Budget_NovRevenues
ArrayOf<Double> mSetLevel2Budget_DecRevenues
ArrayOf<Double>* mGetLevel2Budget_DecRevenues
ArrayOf<const String&> mSetLevel2Budget_JanItemTypeIds
ArrayOf<String>* mGetLevel2Budget_JanItemTypeIds
ArrayOf<const String&> mSetLevel2Budget_FebItemTypeIds
ArrayOf<String>* mGetLevel2Budget_FebItemTypeIds
ArrayOf<const String&> mSetLevel2Budget_MarItemTypeIds
ArrayOf<String>* mGetLevel2Budget_MarItemTypeIds
ArrayOf<const String&> mSetLevel2Budget_AprItemTypeIds
ArrayOf<String>* mGetLevel2Budget_AprItemTypeIds
ArrayOf<const String&> mSetLevel2Budget_MayItemTypeIds
ArrayOf<String>* mGetLevel2Budget_MayItemTypeIds
ArrayOf<const String&> mSetLevel2Budget_JunItemTypeIds
ArrayOf<String>* mGetLevel2Budget_JunItemTypeIds
ArrayOf<const String&> mSetLevel2Budget_JulItemTypeIds
ArrayOf<String>* mGetLevel2Budget_JulItemTypeIds
ArrayOf<const String&> mSetLevel2Budget_AugItemTypeIds
ArrayOf<String>* mGetLevel2Budget_AugItemTypeIds
ArrayOf<const String&> mSetLevel2Budget_SepItemTypeIds
ArrayOf<String>* mGetLevel2Budget_SepItemTypeIds
ArrayOf<const String&> mSetLevel2Budget_OctItemTypeIds
ArrayOf<String>* mGetLevel2Budget_OctItemTypeIds
ArrayOf<const String&> mSetLevel2Budget_NovItemTypeIds
ArrayOf<String>* mGetLevel2Budget_NovItemTypeIds
ArrayOf<const String&> mSetLevel2Budget_DecItemTypeIds
ArrayOf<String>* mGetLevel2Budget_DecItemTypeIds
ArrayOf<Double> mSetLevel2Budget_JanCostsItems
ArrayOf<Double>* mGetLevel2Budget_JanCostsItems
ArrayOf<Double> mSetLevel2Budget_FebCostsItems
ArrayOf<Double>* mGetLevel2Budget_FebCostsItems
ArrayOf<Double> mSetLevel2Budget_MarCostsItems
ArrayOf<Double>* mGetLevel2Budget_MarCostsItems
ArrayOf<Double> mSetLevel2Budget_AprCostsItems
ArrayOf<Double>* mGetLevel2Budget_AprCostsItems
ArrayOf<Double> mSetLevel2Budget_MayCostsItems
ArrayOf<Double>* mGetLevel2Budget_MayCostsItems
ArrayOf<Double> mSetLevel2Budget_JunCostsItems
ArrayOf<Double>* mGetLevel2Budget_JunCostsItems
ArrayOf<Double> mSetLevel2Budget_JulCostsItems
ArrayOf<Double>* mGetLevel2Budget_JulCostsItems
ArrayOf<Double> mSetLevel2Budget_AugCostsItems
ArrayOf<Double>* mGetLevel2Budget_AugCostsItems
ArrayOf<Double> mSetLevel2Budget_SepCostsItems
ArrayOf<Double>* mGetLevel2Budget_SepCostsItems
ArrayOf<Double> mSetLevel2Budget_OctCostsItems
ArrayOf<Double>* mGetLevel2Budget_OctCostsItems
ArrayOf<Double> mSetLevel2Budget_NovCostsItems
ArrayOf<Double>* mGetLevel2Budget_NovCostsItems
ArrayOf<Double> mSetLevel2Budget_DecCostsItems
ArrayOf<Double>* mGetLevel2Budget_DecCostsItems
ArrayOf<const String&> mSetLevel2Budget_JanJobTypeIds
ArrayOf<String>* mGetLevel2Budget_JanJobTypeIds
ArrayOf<const String&> mSetLevel2Budget_FebJobTypeIds
ArrayOf<String>* mGetLevel2Budget_FebJobTypeIds
ArrayOf<const String&> mSetLevel2Budget_MarJobTypeIds
ArrayOf<String>* mGetLevel2Budget_MarJobTypeIds
ArrayOf<const String&> mSetLevel2Budget_AprJobTypeIds
ArrayOf<String>* mGetLevel2Budget_AprJobTypeIds
ArrayOf<const String&> mSetLevel2Budget_MayJobTypeIds
ArrayOf<String>* mGetLevel2Budget_MayJobTypeIds
ArrayOf<const String&> mSetLevel2Budget_JunJobTypeIds
ArrayOf<String>* mGetLevel2Budget_JunJobTypeIds
ArrayOf<const String&> mSetLevel2Budget_JulJobTypeIds
ArrayOf<String>* mGetLevel2Budget_JulJobTypeIds
ArrayOf<const String&> mSetLevel2Budget_AugJobTypeIds
ArrayOf<String>* mGetLevel2Budget_AugJobTypeIds
ArrayOf<const String&> mSetLevel2Budget_SepJobTypeIds
ArrayOf<String>* mGetLevel2Budget_SepJobTypeIds
ArrayOf<const String&> mSetLevel2Budget_OctJobTypeIds
ArrayOf<String>* mGetLevel2Budget_OctJobTypeIds
ArrayOf<const String&> mSetLevel2Budget_NovJobTypeIds
ArrayOf<String>* mGetLevel2Budget_NovJobTypeIds
ArrayOf<const String&> mSetLevel2Budget_DecJobTypeIds
ArrayOf<String>* mGetLevel2Budget_DecJobTypeIds
ArrayOf<Double> mSetLevel2Budget_JanCostsJobs
ArrayOf<Double>* mGetLevel2Budget_JanCostsJobs
ArrayOf<Double> mSetLevel2Budget_FebCostsJobs
ArrayOf<Double>* mGetLevel2Budget_FebCostsJobs
ArrayOf<Double> mSetLevel2Budget_MarCostsJobs
ArrayOf<Double>* mGetLevel2Budget_MarCostsJobs
ArrayOf<Double> mSetLevel2Budget_AprCostsJobs
ArrayOf<Double>* mGetLevel2Budget_AprCostsJobs
ArrayOf<Double> mSetLevel2Budget_MayCostsJobs
ArrayOf<Double>* mGetLevel2Budget_MayCostsJobs
ArrayOf<Double> mSetLevel2Budget_JunCostsJobs
ArrayOf<Double>* mGetLevel2Budget_JunCostsJobs
ArrayOf<Double> mSetLevel2Budget_JulCostsJobs
ArrayOf<Double>* mGetLevel2Budget_JulCostsJobs
ArrayOf<Double> mSetLevel2Budget_AugCostsJobs
ArrayOf<Double>* mGetLevel2Budget_AugCostsJobs
ArrayOf<Double> mSetLevel2Budget_SepCostsJobs
ArrayOf<Double>* mGetLevel2Budget_SepCostsJobs
ArrayOf<Double> mSetLevel2Budget_OctCostsJobs
ArrayOf<Double>* mGetLevel2Budget_OctCostsJobs
ArrayOf<Double> mSetLevel2Budget_NovCostsJobs
ArrayOf<Double>* mGetLevel2Budget_NovCostsJobs
ArrayOf<Double> mSetLevel2Budget_DecCostsJobs
ArrayOf<Double>* mGetLevel2Budget_DecCostsJobs
ArrayOf<const String&> mSetLevel2Budget_JanServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_JanServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget_FebServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_FebServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget_MarServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_MarServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget_AprServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_AprServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget_MayServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_MayServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget_JunServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_JunServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget_JulServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_JulServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget_AugServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_AugServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget_SepServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_SepServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget_OctServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_OctServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget_NovServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_NovServiceTypeIds
ArrayOf<const String&> mSetLevel2Budget_DecServiceTypeIds
ArrayOf<String>* mGetLevel2Budget_DecServiceTypeIds
ArrayOf<Double> mSetLevel2Budget_JanCostsServices
ArrayOf<Double>* mGetLevel2Budget_JanCostsServices
ArrayOf<Double> mSetLevel2Budget_FebCostsServices
ArrayOf<Double>* mGetLevel2Budget_FebCostsServices
ArrayOf<Double> mSetLevel2Budget_MarCostsServices
ArrayOf<Double>* mGetLevel2Budget_MarCostsServices
ArrayOf<Double> mSetLevel2Budget_AprCostsServices
ArrayOf<Double>* mGetLevel2Budget_AprCostsServices
ArrayOf<Double> mSetLevel2Budget_MayCostsServices
ArrayOf<Double>* mGetLevel2Budget_MayCostsServices
ArrayOf<Double> mSetLevel2Budget_JunCostsServices
ArrayOf<Double>* mGetLevel2Budget_JunCostsServices
ArrayOf<Double> mSetLevel2Budget_JulCostsServices
ArrayOf<Double>* mGetLevel2Budget_JulCostsServices
ArrayOf<Double> mSetLevel2Budget_AugCostsServices
ArrayOf<Double>* mGetLevel2Budget_AugCostsServices
ArrayOf<Double> mSetLevel2Budget_SepCostsServices
ArrayOf<Double>* mGetLevel2Budget_SepCostsServices
ArrayOf<Double> mSetLevel2Budget_OctCostsServices
ArrayOf<Double>* mGetLevel2Budget_OctCostsServices
ArrayOf<Double> mSetLevel2Budget_NovCostsServices
ArrayOf<Double>* mGetLevel2Budget_NovCostsServices
ArrayOf<Double> mSetLevel2Budget_DecCostsServices
ArrayOf<Double>* mGetLevel2Budget_DecCostsServices
ArrayOf<Double> mSetLevel2Budget_TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel2Budget_TwelveTotalMonthlyCosts
Double mSetLevel2Budget_YearCostThisBudgetId
Double* mGetLevel2Budget_YearCostThisBudgetId
Double mSetLevel2Budget_NetProfitLossThisLevel2BudgetId
Double* mGetLevel2Budget_NetProfitLossThisLevel2BudgetId
Int32 mSetLevel2Budget_LinkingInternalBudgetNum
Int32* mGetLevel2Budget_LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel2Budget_CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel2Budget_CustomerIds
ArrayOf<CProperty.property> mSetLevel2Budget_PropertyIds
ArrayOf<CProperty.property>* mGetLevel2Budget_PropertyIds
ArrayOf<CProperty.program> mSetLevel2Budget_ProgramIds
ArrayOf<CProperty.program>* mGetLevel2Budget_ProgramIds
ArrayOf<CProperty.project> mSetLevel2Budget_ProjectIds
ArrayOf<CProperty.project>* mGetLevel2Budget_ProjectIds
CFinance.level3Budget mSetLevel2Budget_LinkedToLevel3BudgetId
CFinance.level3Budget* mGetLevel2Budget_LinkedToLevel3BudgetId
CFinance.masterSetRegister mSetLevel2Budget_MasterSetId
CFinance.masterSetRegister* mGetLevel2Budget_MasterSetId
CRegister.businessChannelOwner mSetLevel2Budget_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel2Budget_BusinessChannelOwnerId
const String& mSetLevel3Budget_Level3BudgetId
String* mGetLevel3Budget_Level3BudgetId
const String& mSetLevel3Budget_BudgetName
String* mGetLevel3Budget_BudgetName
Int32 mSetLevel3Budget_EndYearMonthyyyymm
Int32* mGetLevel3Budget_EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel3Budget_TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel3Budget_TwelveMonthSequence
ArrayOf<const String&> mSetLevel3Budget_IncomeItemTypeIds
ArrayOf<String>* mGetLevel3Budget_IncomeItemTypeIds
ArrayOf<Double> mSetLevel3Budget_JanRevenues
ArrayOf<Double>* mGetLevel3Budget_JanRevenues
ArrayOf<Double> mSetLevel3Budget_FebRevenues
ArrayOf<Double>* mGetLevel3Budget_FebRevenues
ArrayOf<Double> mSetLevel3Budget_MarRevenues
ArrayOf<Double>* mGetLevel3Budget_MarRevenues
ArrayOf<Double> mSetLevel3Budget_AprRevenues
ArrayOf<Double>* mGetLevel3Budget_AprRevenues
ArrayOf<Double> mSetLevel3Budget_MayRevenues
ArrayOf<Double>* mGetLevel3Budget_MayRevenues
ArrayOf<Double> mSetLevel3Budget_JunRevenues
ArrayOf<Double>* mGetLevel3Budget_JunRevenues
ArrayOf<Double> mSetLevel3Budget_JulRevenues
ArrayOf<Double>* mGetLevel3Budget_JulRevenues
ArrayOf<Double> mSetLevel3Budget_AugRevenues
ArrayOf<Double>* mGetLevel3Budget_AugRevenues
ArrayOf<Double> mSetLevel3Budget_SepRevenues
ArrayOf<Double>* mGetLevel3Budget_SepRevenues
ArrayOf<Double> mSetLevel3Budget_OctRevenues
ArrayOf<Double>* mGetLevel3Budget_OctRevenues
ArrayOf<Double> mSetLevel3Budget_NovRevenues
ArrayOf<Double>* mGetLevel3Budget_NovRevenues
ArrayOf<Double> mSetLevel3Budget_DecRevenues
ArrayOf<Double>* mGetLevel3Budget_DecRevenues
ArrayOf<const String&> mSetLevel3Budget_JanItemTypeIds
ArrayOf<String>* mGetLevel3Budget_JanItemTypeIds
ArrayOf<const String&> mSetLevel3Budget_FebItemTypeIds
ArrayOf<String>* mGetLevel3Budget_FebItemTypeIds
ArrayOf<const String&> mSetLevel3Budget_MarItemTypeIds
ArrayOf<String>* mGetLevel3Budget_MarItemTypeIds
ArrayOf<const String&> mSetLevel3Budget_AprItemTypeIds
ArrayOf<String>* mGetLevel3Budget_AprItemTypeIds
ArrayOf<const String&> mSetLevel3Budget_MayItemTypeIds
ArrayOf<String>* mGetLevel3Budget_MayItemTypeIds
ArrayOf<const String&> mSetLevel3Budget_JunItemTypeIds
ArrayOf<String>* mGetLevel3Budget_JunItemTypeIds
ArrayOf<const String&> mSetLevel3Budget_JulItemTypeIds
ArrayOf<String>* mGetLevel3Budget_JulItemTypeIds
ArrayOf<const String&> mSetLevel3Budget_AugItemTypeIds
ArrayOf<String>* mGetLevel3Budget_AugItemTypeIds
ArrayOf<const String&> mSetLevel3Budget_SepItemTypeIds
ArrayOf<String>* mGetLevel3Budget_SepItemTypeIds
ArrayOf<const String&> mSetLevel3Budget_OctItemTypeIds
ArrayOf<String>* mGetLevel3Budget_OctItemTypeIds
ArrayOf<const String&> mSetLevel3Budget_NovItemTypeIds
ArrayOf<String>* mGetLevel3Budget_NovItemTypeIds
ArrayOf<const String&> mSetLevel3Budget_DecItemTypeIds
ArrayOf<String>* mGetLevel3Budget_DecItemTypeIds
ArrayOf<Double> mSetLevel3Budget_JanCostsItems
ArrayOf<Double>* mGetLevel3Budget_JanCostsItems
ArrayOf<Double> mSetLevel3Budget_FebCostsItems
ArrayOf<Double>* mGetLevel3Budget_FebCostsItems
ArrayOf<Double> mSetLevel3Budget_MarCostsItems
ArrayOf<Double>* mGetLevel3Budget_MarCostsItems
ArrayOf<Double> mSetLevel3Budget_AprCostsItems
ArrayOf<Double>* mGetLevel3Budget_AprCostsItems
ArrayOf<Double> mSetLevel3Budget_MayCostsItems
ArrayOf<Double>* mGetLevel3Budget_MayCostsItems
ArrayOf<Double> mSetLevel3Budget_JunCostsItems
ArrayOf<Double>* mGetLevel3Budget_JunCostsItems
ArrayOf<Double> mSetLevel3Budget_JulCostsItems
ArrayOf<Double>* mGetLevel3Budget_JulCostsItems
ArrayOf<Double> mSetLevel3Budget_AugCostsItems
ArrayOf<Double>* mGetLevel3Budget_AugCostsItems
ArrayOf<Double> mSetLevel3Budget_SepCostsItems
ArrayOf<Double>* mGetLevel3Budget_SepCostsItems
ArrayOf<Double> mSetLevel3Budget_OctCostsItems
ArrayOf<Double>* mGetLevel3Budget_OctCostsItems
ArrayOf<Double> mSetLevel3Budget_NovCostsItems
ArrayOf<Double>* mGetLevel3Budget_NovCostsItems
ArrayOf<Double> mSetLevel3Budget_DecCostsItems
ArrayOf<Double>* mGetLevel3Budget_DecCostsItems
ArrayOf<const String&> mSetLevel3Budget_JanJobTypeIds
ArrayOf<String>* mGetLevel3Budget_JanJobTypeIds
ArrayOf<const String&> mSetLevel3Budget_FebJobTypeIds
ArrayOf<String>* mGetLevel3Budget_FebJobTypeIds
ArrayOf<const String&> mSetLevel3Budget_MarJobTypeIds
ArrayOf<String>* mGetLevel3Budget_MarJobTypeIds
ArrayOf<const String&> mSetLevel3Budget_AprJobTypeIds
ArrayOf<String>* mGetLevel3Budget_AprJobTypeIds
ArrayOf<const String&> mSetLevel3Budget_MayJobTypeIds
ArrayOf<String>* mGetLevel3Budget_MayJobTypeIds
ArrayOf<const String&> mSetLevel3Budget_JunJobTypeIds
ArrayOf<String>* mGetLevel3Budget_JunJobTypeIds
ArrayOf<const String&> mSetLevel3Budget_JulJobTypeIds
ArrayOf<String>* mGetLevel3Budget_JulJobTypeIds
ArrayOf<const String&> mSetLevel3Budget_AugJobTypeIds
ArrayOf<String>* mGetLevel3Budget_AugJobTypeIds
ArrayOf<const String&> mSetLevel3Budget_SepJobTypeIds
ArrayOf<String>* mGetLevel3Budget_SepJobTypeIds
ArrayOf<const String&> mSetLevel3Budget_OctJobTypeIds
ArrayOf<String>* mGetLevel3Budget_OctJobTypeIds
ArrayOf<const String&> mSetLevel3Budget_NovJobTypeIds
ArrayOf<String>* mGetLevel3Budget_NovJobTypeIds
ArrayOf<const String&> mSetLevel3Budget_DecJobTypeIds
ArrayOf<String>* mGetLevel3Budget_DecJobTypeIds
ArrayOf<Double> mSetLevel3Budget_JanCostsJobs
ArrayOf<Double>* mGetLevel3Budget_JanCostsJobs
ArrayOf<Double> mSetLevel3Budget_FebCostsJobs
ArrayOf<Double>* mGetLevel3Budget_FebCostsJobs
ArrayOf<Double> mSetLevel3Budget_MarCostsJobs
ArrayOf<Double>* mGetLevel3Budget_MarCostsJobs
ArrayOf<Double> mSetLevel3Budget_AprCostsJobs
ArrayOf<Double>* mGetLevel3Budget_AprCostsJobs
ArrayOf<Double> mSetLevel3Budget_MayCostsJobs
ArrayOf<Double>* mGetLevel3Budget_MayCostsJobs
ArrayOf<Double> mSetLevel3Budget_JunCostsJobs
ArrayOf<Double>* mGetLevel3Budget_JunCostsJobs
ArrayOf<Double> mSetLevel3Budget_JulCostsJobs
ArrayOf<Double>* mGetLevel3Budget_JulCostsJobs
ArrayOf<Double> mSetLevel3Budget_AugCostsJobs
ArrayOf<Double>* mGetLevel3Budget_AugCostsJobs
ArrayOf<Double> mSetLevel3Budget_SepCostsJobs
ArrayOf<Double>* mGetLevel3Budget_SepCostsJobs
ArrayOf<Double> mSetLevel3Budget_OctCostsJobs
ArrayOf<Double>* mGetLevel3Budget_OctCostsJobs
ArrayOf<Double> mSetLevel3Budget_NovCostsJobs
ArrayOf<Double>* mGetLevel3Budget_NovCostsJobs
ArrayOf<Double> mSetLevel3Budget_DecCostsJobs
ArrayOf<Double>* mGetLevel3Budget_DecCostsJobs
ArrayOf<const String&> mSetLevel3Budget_JanServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_JanServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget_FebServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_FebServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget_MarServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_MarServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget_AprServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_AprServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget_MayServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_MayServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget_JunServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_JunServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget_JulServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_JulServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget_AugServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_AugServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget_SepServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_SepServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget_OctServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_OctServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget_NovServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_NovServiceTypeIds
ArrayOf<const String&> mSetLevel3Budget_DecServiceTypeIds
ArrayOf<String>* mGetLevel3Budget_DecServiceTypeIds
ArrayOf<Double> mSetLevel3Budget_JanCostsServices
ArrayOf<Double>* mGetLevel3Budget_JanCostsServices
ArrayOf<Double> mSetLevel3Budget_FebCostsServices
ArrayOf<Double>* mGetLevel3Budget_FebCostsServices
ArrayOf<Double> mSetLevel3Budget_MarCostsServices
ArrayOf<Double>* mGetLevel3Budget_MarCostsServices
ArrayOf<Double> mSetLevel3Budget_AprCostsServices
ArrayOf<Double>* mGetLevel3Budget_AprCostsServices
ArrayOf<Double> mSetLevel3Budget_MayCostsServices
ArrayOf<Double>* mGetLevel3Budget_MayCostsServices
ArrayOf<Double> mSetLevel3Budget_JunCostsServices
ArrayOf<Double>* mGetLevel3Budget_JunCostsServices
ArrayOf<Double> mSetLevel3Budget_JulCostsServices
ArrayOf<Double>* mGetLevel3Budget_JulCostsServices
ArrayOf<Double> mSetLevel3Budget_AugCostsServices
ArrayOf<Double>* mGetLevel3Budget_AugCostsServices
ArrayOf<Double> mSetLevel3Budget_SepCostsServices
ArrayOf<Double>* mGetLevel3Budget_SepCostsServices
ArrayOf<Double> mSetLevel3Budget_OctCostsServices
ArrayOf<Double>* mGetLevel3Budget_OctCostsServices
ArrayOf<Double> mSetLevel3Budget_NovCostsServices
ArrayOf<Double>* mGetLevel3Budget_NovCostsServices
ArrayOf<Double> mSetLevel3Budget_DecCostsServices
ArrayOf<Double>* mGetLevel3Budget_DecCostsServices
ArrayOf<Double> mSetLevel3Budget_TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel3Budget_TwelveTotalMonthlyCosts
Double mSetLevel3Budget_YearCostThisBudgetId
Double* mGetLevel3Budget_YearCostThisBudgetId
Double mSetLevel3Budget_NetProfitLossThisLevel3BudgetId
Double* mGetLevel3Budget_NetProfitLossThisLevel3BudgetId
Int32 mSetLevel3Budget_LinkingInternalBudgetNum
Int32* mGetLevel3Budget_LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel3Budget_CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel3Budget_CustomerIds
ArrayOf<CProperty.property> mSetLevel3Budget_PropertyIds
ArrayOf<CProperty.property>* mGetLevel3Budget_PropertyIds
ArrayOf<CProperty.program> mSetLevel3Budget_ProgramIds
ArrayOf<CProperty.program>* mGetLevel3Budget_ProgramIds
ArrayOf<CProperty.project> mSetLevel3Budget_ProjectIds
ArrayOf<CProperty.project>* mGetLevel3Budget_ProjectIds
CFinance.level4Budget mSetLevel3Budget_LinkedToLevel4BudgetId
CFinance.level4Budget* mGetLevel3Budget_LinkedToLevel4BudgetId
CFinance.masterSetRegister mSetLevel3Budget_MasterSetId
CFinance.masterSetRegister* mGetLevel3Budget_MasterSetId
CRegister.businessChannelOwner mSetLevel3Budget_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel3Budget_BusinessChannelOwnerId
const String& mSetLevel4Budget_Level4BudgetId
String* mGetLevel4Budget_Level4BudgetId
const String& mSetLevel4Budget_BudgetName
String* mGetLevel4Budget_BudgetName
Int32 mSetLevel4Budget_EndYearMonthyyyymm
Int32* mGetLevel4Budget_EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel4Budget_TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel4Budget_TwelveMonthSequence
ArrayOf<const String&> mSetLevel4Budget_IncomeItemTypeIds
ArrayOf<String>* mGetLevel4Budget_IncomeItemTypeIds
ArrayOf<Double> mSetLevel4Budget_JanRevenues
ArrayOf<Double>* mGetLevel4Budget_JanRevenues
ArrayOf<Double> mSetLevel4Budget_FebRevenues
ArrayOf<Double>* mGetLevel4Budget_FebRevenues
ArrayOf<Double> mSetLevel4Budget_MarRevenues
ArrayOf<Double>* mGetLevel4Budget_MarRevenues
ArrayOf<Double> mSetLevel4Budget_AprRevenues
ArrayOf<Double>* mGetLevel4Budget_AprRevenues
ArrayOf<Double> mSetLevel4Budget_MayRevenues
ArrayOf<Double>* mGetLevel4Budget_MayRevenues
ArrayOf<Double> mSetLevel4Budget_JunRevenues
ArrayOf<Double>* mGetLevel4Budget_JunRevenues
ArrayOf<Double> mSetLevel4Budget_JulRevenues
ArrayOf<Double>* mGetLevel4Budget_JulRevenues
ArrayOf<Double> mSetLevel4Budget_AugRevenues
ArrayOf<Double>* mGetLevel4Budget_AugRevenues
ArrayOf<Double> mSetLevel4Budget_SepRevenues
ArrayOf<Double>* mGetLevel4Budget_SepRevenues
ArrayOf<Double> mSetLevel4Budget_OctRevenues
ArrayOf<Double>* mGetLevel4Budget_OctRevenues
ArrayOf<Double> mSetLevel4Budget_NovRevenues
ArrayOf<Double>* mGetLevel4Budget_NovRevenues
ArrayOf<Double> mSetLevel4Budget_DecRevenues
ArrayOf<Double>* mGetLevel4Budget_DecRevenues
ArrayOf<const String&> mSetLevel4Budget_JanItemTypeIds
ArrayOf<String>* mGetLevel4Budget_JanItemTypeIds
ArrayOf<const String&> mSetLevel4Budget_FebItemTypeIds
ArrayOf<String>* mGetLevel4Budget_FebItemTypeIds
ArrayOf<const String&> mSetLevel4Budget_MarItemTypeIds
ArrayOf<String>* mGetLevel4Budget_MarItemTypeIds
ArrayOf<const String&> mSetLevel4Budget_AprItemTypeIds
ArrayOf<String>* mGetLevel4Budget_AprItemTypeIds
ArrayOf<const String&> mSetLevel4Budget_MayItemTypeIds
ArrayOf<String>* mGetLevel4Budget_MayItemTypeIds
ArrayOf<const String&> mSetLevel4Budget_JunItemTypeIds
ArrayOf<String>* mGetLevel4Budget_JunItemTypeIds
ArrayOf<const String&> mSetLevel4Budget_JulItemTypeIds
ArrayOf<String>* mGetLevel4Budget_JulItemTypeIds
ArrayOf<const String&> mSetLevel4Budget_AugItemTypeIds
ArrayOf<String>* mGetLevel4Budget_AugItemTypeIds
ArrayOf<const String&> mSetLevel4Budget_SepItemTypeIds
ArrayOf<String>* mGetLevel4Budget_SepItemTypeIds
ArrayOf<const String&> mSetLevel4Budget_OctItemTypeIds
ArrayOf<String>* mGetLevel4Budget_OctItemTypeIds
ArrayOf<const String&> mSetLevel4Budget_NovItemTypeIds
ArrayOf<String>* mGetLevel4Budget_NovItemTypeIds
ArrayOf<const String&> mSetLevel4Budget_DecItemTypeIds
ArrayOf<String>* mGetLevel4Budget_DecItemTypeIds
ArrayOf<Double> mSetLevel4Budget_JanCostsItems
ArrayOf<Double>* mGetLevel4Budget_JanCostsItems
ArrayOf<Double> mSetLevel4Budget_FebCostsItems
ArrayOf<Double>* mGetLevel4Budget_FebCostsItems
ArrayOf<Double> mSetLevel4Budget_MarCostsItems
ArrayOf<Double>* mGetLevel4Budget_MarCostsItems
ArrayOf<Double> mSetLevel4Budget_AprCostsItems
ArrayOf<Double>* mGetLevel4Budget_AprCostsItems
ArrayOf<Double> mSetLevel4Budget_MayCostsItems
ArrayOf<Double>* mGetLevel4Budget_MayCostsItems
ArrayOf<Double> mSetLevel4Budget_JunCostsItems
ArrayOf<Double>* mGetLevel4Budget_JunCostsItems
ArrayOf<Double> mSetLevel4Budget_JulCostsItems
ArrayOf<Double>* mGetLevel4Budget_JulCostsItems
ArrayOf<Double> mSetLevel4Budget_AugCostsItems
ArrayOf<Double>* mGetLevel4Budget_AugCostsItems
ArrayOf<Double> mSetLevel4Budget_SepCostsItems
ArrayOf<Double>* mGetLevel4Budget_SepCostsItems
ArrayOf<Double> mSetLevel4Budget_OctCostsItems
ArrayOf<Double>* mGetLevel4Budget_OctCostsItems
ArrayOf<Double> mSetLevel4Budget_NovCostsItems
ArrayOf<Double>* mGetLevel4Budget_NovCostsItems
ArrayOf<Double> mSetLevel4Budget_DecCostsItems
ArrayOf<Double>* mGetLevel4Budget_DecCostsItems
ArrayOf<const String&> mSetLevel4Budget_JanJobTypeIds
ArrayOf<String>* mGetLevel4Budget_JanJobTypeIds
ArrayOf<const String&> mSetLevel4Budget_FebJobTypeIds
ArrayOf<String>* mGetLevel4Budget_FebJobTypeIds
ArrayOf<const String&> mSetLevel4Budget_MarJobTypeIds
ArrayOf<String>* mGetLevel4Budget_MarJobTypeIds
ArrayOf<const String&> mSetLevel4Budget_AprJobTypeIds
ArrayOf<String>* mGetLevel4Budget_AprJobTypeIds
ArrayOf<const String&> mSetLevel4Budget_MayJobTypeIds
ArrayOf<String>* mGetLevel4Budget_MayJobTypeIds
ArrayOf<const String&> mSetLevel4Budget_JunJobTypeIds
ArrayOf<String>* mGetLevel4Budget_JunJobTypeIds
ArrayOf<const String&> mSetLevel4Budget_JulJobTypeIds
ArrayOf<String>* mGetLevel4Budget_JulJobTypeIds
ArrayOf<const String&> mSetLevel4Budget_AugJobTypeIds
ArrayOf<String>* mGetLevel4Budget_AugJobTypeIds
ArrayOf<const String&> mSetLevel4Budget_SepJobTypeIds
ArrayOf<String>* mGetLevel4Budget_SepJobTypeIds
ArrayOf<const String&> mSetLevel4Budget_OctJobTypeIds
ArrayOf<String>* mGetLevel4Budget_OctJobTypeIds
ArrayOf<const String&> mSetLevel4Budget_NovJobTypeIds
ArrayOf<String>* mGetLevel4Budget_NovJobTypeIds
ArrayOf<const String&> mSetLevel4Budget_DecJobTypeIds
ArrayOf<String>* mGetLevel4Budget_DecJobTypeIds
ArrayOf<Double> mSetLevel4Budget_JanCostsJobs
ArrayOf<Double>* mGetLevel4Budget_JanCostsJobs
ArrayOf<Double> mSetLevel4Budget_FebCostsJobs
ArrayOf<Double>* mGetLevel4Budget_FebCostsJobs
ArrayOf<Double> mSetLevel4Budget_MarCostsJobs
ArrayOf<Double>* mGetLevel4Budget_MarCostsJobs
ArrayOf<Double> mSetLevel4Budget_AprCostsJobs
ArrayOf<Double>* mGetLevel4Budget_AprCostsJobs
ArrayOf<Double> mSetLevel4Budget_MayCostsJobs
ArrayOf<Double>* mGetLevel4Budget_MayCostsJobs
ArrayOf<Double> mSetLevel4Budget_JunCostsJobs
ArrayOf<Double>* mGetLevel4Budget_JunCostsJobs
ArrayOf<Double> mSetLevel4Budget_JulCostsJobs
ArrayOf<Double>* mGetLevel4Budget_JulCostsJobs
ArrayOf<Double> mSetLevel4Budget_AugCostsJobs
ArrayOf<Double>* mGetLevel4Budget_AugCostsJobs
ArrayOf<Double> mSetLevel4Budget_SepCostsJobs
ArrayOf<Double>* mGetLevel4Budget_SepCostsJobs
ArrayOf<Double> mSetLevel4Budget_OctCostsJobs
ArrayOf<Double>* mGetLevel4Budget_OctCostsJobs
ArrayOf<Double> mSetLevel4Budget_NovCostsJobs
ArrayOf<Double>* mGetLevel4Budget_NovCostsJobs
ArrayOf<Double> mSetLevel4Budget_DecCostsJobs
ArrayOf<Double>* mGetLevel4Budget_DecCostsJobs
ArrayOf<const String&> mSetLevel4Budget_JanServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_JanServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget_FebServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_FebServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget_MarServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_MarServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget_AprServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_AprServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget_MayServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_MayServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget_JunServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_JunServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget_JulServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_JulServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget_AugServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_AugServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget_SepServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_SepServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget_OctServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_OctServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget_NovServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_NovServiceTypeIds
ArrayOf<const String&> mSetLevel4Budget_DecServiceTypeIds
ArrayOf<String>* mGetLevel4Budget_DecServiceTypeIds
ArrayOf<Double> mSetLevel4Budget_JanCostsServices
ArrayOf<Double>* mGetLevel4Budget_JanCostsServices
ArrayOf<Double> mSetLevel4Budget_FebCostsServices
ArrayOf<Double>* mGetLevel4Budget_FebCostsServices
ArrayOf<Double> mSetLevel4Budget_MarCostsServices
ArrayOf<Double>* mGetLevel4Budget_MarCostsServices
ArrayOf<Double> mSetLevel4Budget_AprCostsServices
ArrayOf<Double>* mGetLevel4Budget_AprCostsServices
ArrayOf<Double> mSetLevel4Budget_MayCostsServices
ArrayOf<Double>* mGetLevel4Budget_MayCostsServices
ArrayOf<Double> mSetLevel4Budget_JunCostsServices
ArrayOf<Double>* mGetLevel4Budget_JunCostsServices
ArrayOf<Double> mSetLevel4Budget_JulCostsServices
ArrayOf<Double>* mGetLevel4Budget_JulCostsServices
ArrayOf<Double> mSetLevel4Budget_AugCostsServices
ArrayOf<Double>* mGetLevel4Budget_AugCostsServices
ArrayOf<Double> mSetLevel4Budget_SepCostsServices
ArrayOf<Double>* mGetLevel4Budget_SepCostsServices
ArrayOf<Double> mSetLevel4Budget_OctCostsServices
ArrayOf<Double>* mGetLevel4Budget_OctCostsServices
ArrayOf<Double> mSetLevel4Budget_NovCostsServices
ArrayOf<Double>* mGetLevel4Budget_NovCostsServices
ArrayOf<Double> mSetLevel4Budget_DecCostsServices
ArrayOf<Double>* mGetLevel4Budget_DecCostsServices
ArrayOf<Double> mSetLevel4Budget_TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel4Budget_TwelveTotalMonthlyCosts
Double mSetLevel4Budget_YearCostThisBudgetId
Double* mGetLevel4Budget_YearCostThisBudgetId
Double mSetLevel4Budget_NetProfitLossThisLevel4BudgetId
Double* mGetLevel4Budget_NetProfitLossThisLevel4BudgetId
Int32 mSetLevel4Budget_LinkingInternalBudgetNum
Int32* mGetLevel4Budget_LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel4Budget_CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel4Budget_CustomerIds
ArrayOf<CProperty.property> mSetLevel4Budget_PropertyIds
ArrayOf<CProperty.property>* mGetLevel4Budget_PropertyIds
ArrayOf<CProperty.program> mSetLevel4Budget_ProgramIds
ArrayOf<CProperty.program>* mGetLevel4Budget_ProgramIds
ArrayOf<CProperty.project> mSetLevel4Budget_ProjectIds
ArrayOf<CProperty.project>* mGetLevel4Budget_ProjectIds
CFinance.level5Budget mSetLevel4Budget_LinkedToLevel5BudgetId
CFinance.level5Budget* mGetLevel4Budget_LinkedToLevel5BudgetId
CFinance.masterSetRegister mSetLevel4Budget_MasterSetId
CFinance.masterSetRegister* mGetLevel4Budget_MasterSetId
CRegister.businessChannelOwner mSetLevel4Budget_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel4Budget_BusinessChannelOwnerId
const String& mSetLevel5Budget_Level5BudgetId
String* mGetLevel5Budget_Level5BudgetId
const String& mSetLevel5Budget_BudgetName
String* mGetLevel5Budget_BudgetName
Int32 mSetLevel5Budget_EndYearMonthyyyymm
Int32* mGetLevel5Budget_EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel5Budget_TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel5Budget_TwelveMonthSequence
ArrayOf<const String&> mSetLevel5Budget_IncomeItemTypeIds
ArrayOf<String>* mGetLevel5Budget_IncomeItemTypeIds
ArrayOf<Double> mSetLevel5Budget_JanRevenues
ArrayOf<Double>* mGetLevel5Budget_JanRevenues
ArrayOf<Double> mSetLevel5Budget_FebRevenues
ArrayOf<Double>* mGetLevel5Budget_FebRevenues
ArrayOf<Double> mSetLevel5Budget_MarRevenues
ArrayOf<Double>* mGetLevel5Budget_MarRevenues
ArrayOf<Double> mSetLevel5Budget_AprRevenues
ArrayOf<Double>* mGetLevel5Budget_AprRevenues
ArrayOf<Double> mSetLevel5Budget_MayRevenues
ArrayOf<Double>* mGetLevel5Budget_MayRevenues
ArrayOf<Double> mSetLevel5Budget_JunRevenues
ArrayOf<Double>* mGetLevel5Budget_JunRevenues
ArrayOf<Double> mSetLevel5Budget_JulRevenues
ArrayOf<Double>* mGetLevel5Budget_JulRevenues
ArrayOf<Double> mSetLevel5Budget_AugRevenues
ArrayOf<Double>* mGetLevel5Budget_AugRevenues
ArrayOf<Double> mSetLevel5Budget_SepRevenues
ArrayOf<Double>* mGetLevel5Budget_SepRevenues
ArrayOf<Double> mSetLevel5Budget_OctRevenues
ArrayOf<Double>* mGetLevel5Budget_OctRevenues
ArrayOf<Double> mSetLevel5Budget_NovRevenues
ArrayOf<Double>* mGetLevel5Budget_NovRevenues
ArrayOf<Double> mSetLevel5Budget_DecRevenues
ArrayOf<Double>* mGetLevel5Budget_DecRevenues
ArrayOf<const String&> mSetLevel5Budget_JanItemTypeIds
ArrayOf<String>* mGetLevel5Budget_JanItemTypeIds
ArrayOf<const String&> mSetLevel5Budget_FebItemTypeIds
ArrayOf<String>* mGetLevel5Budget_FebItemTypeIds
ArrayOf<const String&> mSetLevel5Budget_MarItemTypeIds
ArrayOf<String>* mGetLevel5Budget_MarItemTypeIds
ArrayOf<const String&> mSetLevel5Budget_AprItemTypeIds
ArrayOf<String>* mGetLevel5Budget_AprItemTypeIds
ArrayOf<const String&> mSetLevel5Budget_MayItemTypeIds
ArrayOf<String>* mGetLevel5Budget_MayItemTypeIds
ArrayOf<const String&> mSetLevel5Budget_JunItemTypeIds
ArrayOf<String>* mGetLevel5Budget_JunItemTypeIds
ArrayOf<const String&> mSetLevel5Budget_JulItemTypeIds
ArrayOf<String>* mGetLevel5Budget_JulItemTypeIds
ArrayOf<const String&> mSetLevel5Budget_AugItemTypeIds
ArrayOf<String>* mGetLevel5Budget_AugItemTypeIds
ArrayOf<const String&> mSetLevel5Budget_SepItemTypeIds
ArrayOf<String>* mGetLevel5Budget_SepItemTypeIds
ArrayOf<const String&> mSetLevel5Budget_OctItemTypeIds
ArrayOf<String>* mGetLevel5Budget_OctItemTypeIds
ArrayOf<const String&> mSetLevel5Budget_NovItemTypeIds
ArrayOf<String>* mGetLevel5Budget_NovItemTypeIds
ArrayOf<const String&> mSetLevel5Budget_DecItemTypeIds
ArrayOf<String>* mGetLevel5Budget_DecItemTypeIds
ArrayOf<Double> mSetLevel5Budget_JanCostsItems
ArrayOf<Double>* mGetLevel5Budget_JanCostsItems
ArrayOf<Double> mSetLevel5Budget_FebCostsItems
ArrayOf<Double>* mGetLevel5Budget_FebCostsItems
ArrayOf<Double> mSetLevel5Budget_MarCostsItems
ArrayOf<Double>* mGetLevel5Budget_MarCostsItems
ArrayOf<Double> mSetLevel5Budget_AprCostsItems
ArrayOf<Double>* mGetLevel5Budget_AprCostsItems
ArrayOf<Double> mSetLevel5Budget_MayCostsItems
ArrayOf<Double>* mGetLevel5Budget_MayCostsItems
ArrayOf<Double> mSetLevel5Budget_JunCostsItems
ArrayOf<Double>* mGetLevel5Budget_JunCostsItems
ArrayOf<Double> mSetLevel5Budget_JulCostsItems
ArrayOf<Double>* mGetLevel5Budget_JulCostsItems
ArrayOf<Double> mSetLevel5Budget_AugCostsItems
ArrayOf<Double>* mGetLevel5Budget_AugCostsItems
ArrayOf<Double> mSetLevel5Budget_SepCostsItems
ArrayOf<Double>* mGetLevel5Budget_SepCostsItems
ArrayOf<Double> mSetLevel5Budget_OctCostsItems
ArrayOf<Double>* mGetLevel5Budget_OctCostsItems
ArrayOf<Double> mSetLevel5Budget_NovCostsItems
ArrayOf<Double>* mGetLevel5Budget_NovCostsItems
ArrayOf<Double> mSetLevel5Budget_DecCostsItems
ArrayOf<Double>* mGetLevel5Budget_DecCostsItems
ArrayOf<const String&> mSetLevel5Budget_JanJobTypeIds
ArrayOf<String>* mGetLevel5Budget_JanJobTypeIds
ArrayOf<const String&> mSetLevel5Budget_FebJobTypeIds
ArrayOf<String>* mGetLevel5Budget_FebJobTypeIds
ArrayOf<const String&> mSetLevel5Budget_MarJobTypeIds
ArrayOf<String>* mGetLevel5Budget_MarJobTypeIds
ArrayOf<const String&> mSetLevel5Budget_AprJobTypeIds
ArrayOf<String>* mGetLevel5Budget_AprJobTypeIds
ArrayOf<const String&> mSetLevel5Budget_MayJobTypeIds
ArrayOf<String>* mGetLevel5Budget_MayJobTypeIds
ArrayOf<const String&> mSetLevel5Budget_JunJobTypeIds
ArrayOf<String>* mGetLevel5Budget_JunJobTypeIds
ArrayOf<const String&> mSetLevel5Budget_JulJobTypeIds
ArrayOf<String>* mGetLevel5Budget_JulJobTypeIds
ArrayOf<const String&> mSetLevel5Budget_AugJobTypeIds
ArrayOf<String>* mGetLevel5Budget_AugJobTypeIds
ArrayOf<const String&> mSetLevel5Budget_SepJobTypeIds
ArrayOf<String>* mGetLevel5Budget_SepJobTypeIds
ArrayOf<const String&> mSetLevel5Budget_OctJobTypeIds
ArrayOf<String>* mGetLevel5Budget_OctJobTypeIds
ArrayOf<const String&> mSetLevel5Budget_NovJobTypeIds
ArrayOf<String>* mGetLevel5Budget_NovJobTypeIds
ArrayOf<const String&> mSetLevel5Budget_DecJobTypeIds
ArrayOf<String>* mGetLevel5Budget_DecJobTypeIds
ArrayOf<Double> mSetLevel5Budget_JanCostsJobs
ArrayOf<Double>* mGetLevel5Budget_JanCostsJobs
ArrayOf<Double> mSetLevel5Budget_FebCostsJobs
ArrayOf<Double>* mGetLevel5Budget_FebCostsJobs
ArrayOf<Double> mSetLevel5Budget_MarCostsJobs
ArrayOf<Double>* mGetLevel5Budget_MarCostsJobs
ArrayOf<Double> mSetLevel5Budget_AprCostsJobs
ArrayOf<Double>* mGetLevel5Budget_AprCostsJobs
ArrayOf<Double> mSetLevel5Budget_MayCostsJobs
ArrayOf<Double>* mGetLevel5Budget_MayCostsJobs
ArrayOf<Double> mSetLevel5Budget_JunCostsJobs
ArrayOf<Double>* mGetLevel5Budget_JunCostsJobs
ArrayOf<Double> mSetLevel5Budget_JulCostsJobs
ArrayOf<Double>* mGetLevel5Budget_JulCostsJobs
ArrayOf<Double> mSetLevel5Budget_AugCostsJobs
ArrayOf<Double>* mGetLevel5Budget_AugCostsJobs
ArrayOf<Double> mSetLevel5Budget_SepCostsJobs
ArrayOf<Double>* mGetLevel5Budget_SepCostsJobs
ArrayOf<Double> mSetLevel5Budget_OctCostsJobs
ArrayOf<Double>* mGetLevel5Budget_OctCostsJobs
ArrayOf<Double> mSetLevel5Budget_NovCostsJobs
ArrayOf<Double>* mGetLevel5Budget_NovCostsJobs
ArrayOf<Double> mSetLevel5Budget_DecCostsJobs
ArrayOf<Double>* mGetLevel5Budget_DecCostsJobs
ArrayOf<const String&> mSetLevel5Budget_JanServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_JanServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget_FebServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_FebServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget_MarServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_MarServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget_AprServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_AprServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget_MayServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_MayServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget_JunServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_JunServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget_JulServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_JulServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget_AugServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_AugServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget_SepServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_SepServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget_OctServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_OctServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget_NovServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_NovServiceTypeIds
ArrayOf<const String&> mSetLevel5Budget_DecServiceTypeIds
ArrayOf<String>* mGetLevel5Budget_DecServiceTypeIds
ArrayOf<Double> mSetLevel5Budget_JanCostsServices
ArrayOf<Double>* mGetLevel5Budget_JanCostsServices
ArrayOf<Double> mSetLevel5Budget_FebCostsServices
ArrayOf<Double>* mGetLevel5Budget_FebCostsServices
ArrayOf<Double> mSetLevel5Budget_MarCostsServices
ArrayOf<Double>* mGetLevel5Budget_MarCostsServices
ArrayOf<Double> mSetLevel5Budget_AprCostsServices
ArrayOf<Double>* mGetLevel5Budget_AprCostsServices
ArrayOf<Double> mSetLevel5Budget_MayCostsServices
ArrayOf<Double>* mGetLevel5Budget_MayCostsServices
ArrayOf<Double> mSetLevel5Budget_JunCostsServices
ArrayOf<Double>* mGetLevel5Budget_JunCostsServices
ArrayOf<Double> mSetLevel5Budget_JulCostsServices
ArrayOf<Double>* mGetLevel5Budget_JulCostsServices
ArrayOf<Double> mSetLevel5Budget_AugCostsServices
ArrayOf<Double>* mGetLevel5Budget_AugCostsServices
ArrayOf<Double> mSetLevel5Budget_SepCostsServices
ArrayOf<Double>* mGetLevel5Budget_SepCostsServices
ArrayOf<Double> mSetLevel5Budget_OctCostsServices
ArrayOf<Double>* mGetLevel5Budget_OctCostsServices
ArrayOf<Double> mSetLevel5Budget_NovCostsServices
ArrayOf<Double>* mGetLevel5Budget_NovCostsServices
ArrayOf<Double> mSetLevel5Budget_DecCostsServices
ArrayOf<Double>* mGetLevel5Budget_DecCostsServices
ArrayOf<Double> mSetLevel5Budget_TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel5Budget_TwelveTotalMonthlyCosts
Double mSetLevel5Budget_YearCostThisBudgetId
Double* mGetLevel5Budget_YearCostThisBudgetId
Double mSetLevel5Budget_NetProfitLossThisLevel5BudgetId
Double* mGetLevel5Budget_NetProfitLossThisLevel5BudgetId
Int32 mSetLevel5Budget_LinkingInternalBudgetNum
Int32* mGetLevel5Budget_LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel5Budget_CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel5Budget_CustomerIds
ArrayOf<CProperty.property> mSetLevel5Budget_PropertyIds
ArrayOf<CProperty.property>* mGetLevel5Budget_PropertyIds
ArrayOf<CProperty.program> mSetLevel5Budget_ProgramIds
ArrayOf<CProperty.program>* mGetLevel5Budget_ProgramIds
ArrayOf<CProperty.project> mSetLevel5Budget_ProjectIds
ArrayOf<CProperty.project>* mGetLevel5Budget_ProjectIds
CFinance.level6Budget mSetLevel5Budget_LinkedToLevel6BudgetId
CFinance.level6Budget* mGetLevel5Budget_LinkedToLevel6BudgetId
CFinance.masterSetRegister mSetLevel5Budget_MasterSetId
CFinance.masterSetRegister* mGetLevel5Budget_MasterSetId
CRegister.businessChannelOwner mSetLevel5Budget_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel5Budget_BusinessChannelOwnerId
const String& mSetLevel6Budget_Level6BudgetId
String* mGetLevel6Budget_Level6BudgetId
const String& mSetLevel6Budget_BudgetName
String* mGetLevel6Budget_BudgetName
Int32 mSetLevel6Budget_EndYearMonthyyyymm
Int32* mGetLevel6Budget_EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetLevel6Budget_TwelveMonthSequence
ArrayOf<CHelper.month>* mGetLevel6Budget_TwelveMonthSequence
ArrayOf<const String&> mSetLevel6Budget_IncomeItemTypeIds
ArrayOf<String>* mGetLevel6Budget_IncomeItemTypeIds
ArrayOf<Double> mSetLevel6Budget_JanRevenues
ArrayOf<Double>* mGetLevel6Budget_JanRevenues
ArrayOf<Double> mSetLevel6Budget_FebRevenues
ArrayOf<Double>* mGetLevel6Budget_FebRevenues
ArrayOf<Double> mSetLevel6Budget_MarRevenues
ArrayOf<Double>* mGetLevel6Budget_MarRevenues
ArrayOf<Double> mSetLevel6Budget_AprRevenues
ArrayOf<Double>* mGetLevel6Budget_AprRevenues
ArrayOf<Double> mSetLevel6Budget_MayRevenues
ArrayOf<Double>* mGetLevel6Budget_MayRevenues
ArrayOf<Double> mSetLevel6Budget_JunRevenues
ArrayOf<Double>* mGetLevel6Budget_JunRevenues
ArrayOf<Double> mSetLevel6Budget_JulRevenues
ArrayOf<Double>* mGetLevel6Budget_JulRevenues
ArrayOf<Double> mSetLevel6Budget_AugRevenues
ArrayOf<Double>* mGetLevel6Budget_AugRevenues
ArrayOf<Double> mSetLevel6Budget_SepRevenues
ArrayOf<Double>* mGetLevel6Budget_SepRevenues
ArrayOf<Double> mSetLevel6Budget_OctRevenues
ArrayOf<Double>* mGetLevel6Budget_OctRevenues
ArrayOf<Double> mSetLevel6Budget_NovRevenues
ArrayOf<Double>* mGetLevel6Budget_NovRevenues
ArrayOf<Double> mSetLevel6Budget_DecRevenues
ArrayOf<Double>* mGetLevel6Budget_DecRevenues
ArrayOf<const String&> mSetLevel6Budget_JanItemTypeIds
ArrayOf<String>* mGetLevel6Budget_JanItemTypeIds
ArrayOf<const String&> mSetLevel6Budget_FebItemTypeIds
ArrayOf<String>* mGetLevel6Budget_FebItemTypeIds
ArrayOf<const String&> mSetLevel6Budget_MarItemTypeIds
ArrayOf<String>* mGetLevel6Budget_MarItemTypeIds
ArrayOf<const String&> mSetLevel6Budget_AprItemTypeIds
ArrayOf<String>* mGetLevel6Budget_AprItemTypeIds
ArrayOf<const String&> mSetLevel6Budget_MayItemTypeIds
ArrayOf<String>* mGetLevel6Budget_MayItemTypeIds
ArrayOf<const String&> mSetLevel6Budget_JunItemTypeIds
ArrayOf<String>* mGetLevel6Budget_JunItemTypeIds
ArrayOf<const String&> mSetLevel6Budget_JulItemTypeIds
ArrayOf<String>* mGetLevel6Budget_JulItemTypeIds
ArrayOf<const String&> mSetLevel6Budget_AugItemTypeIds
ArrayOf<String>* mGetLevel6Budget_AugItemTypeIds
ArrayOf<const String&> mSetLevel6Budget_SepItemTypeIds
ArrayOf<String>* mGetLevel6Budget_SepItemTypeIds
ArrayOf<const String&> mSetLevel6Budget_OctItemTypeIds
ArrayOf<String>* mGetLevel6Budget_OctItemTypeIds
ArrayOf<const String&> mSetLevel6Budget_NovItemTypeIds
ArrayOf<String>* mGetLevel6Budget_NovItemTypeIds
ArrayOf<const String&> mSetLevel6Budget_DecItemTypeIds
ArrayOf<String>* mGetLevel6Budget_DecItemTypeIds
ArrayOf<Double> mSetLevel6Budget_JanCostsItems
ArrayOf<Double>* mGetLevel6Budget_JanCostsItems
ArrayOf<Double> mSetLevel6Budget_FebCostsItems
ArrayOf<Double>* mGetLevel6Budget_FebCostsItems
ArrayOf<Double> mSetLevel6Budget_MarCostsItems
ArrayOf<Double>* mGetLevel6Budget_MarCostsItems
ArrayOf<Double> mSetLevel6Budget_AprCostsItems
ArrayOf<Double>* mGetLevel6Budget_AprCostsItems
ArrayOf<Double> mSetLevel6Budget_MayCostsItems
ArrayOf<Double>* mGetLevel6Budget_MayCostsItems
ArrayOf<Double> mSetLevel6Budget_JunCostsItems
ArrayOf<Double>* mGetLevel6Budget_JunCostsItems
ArrayOf<Double> mSetLevel6Budget_JulCostsItems
ArrayOf<Double>* mGetLevel6Budget_JulCostsItems
ArrayOf<Double> mSetLevel6Budget_AugCostsItems
ArrayOf<Double>* mGetLevel6Budget_AugCostsItems
ArrayOf<Double> mSetLevel6Budget_SepCostsItems
ArrayOf<Double>* mGetLevel6Budget_SepCostsItems
ArrayOf<Double> mSetLevel6Budget_OctCostsItems
ArrayOf<Double>* mGetLevel6Budget_OctCostsItems
ArrayOf<Double> mSetLevel6Budget_NovCostsItems
ArrayOf<Double>* mGetLevel6Budget_NovCostsItems
ArrayOf<Double> mSetLevel6Budget_DecCostsItems
ArrayOf<Double>* mGetLevel6Budget_DecCostsItems
ArrayOf<const String&> mSetLevel6Budget_JanJobTypeIds
ArrayOf<String>* mGetLevel6Budget_JanJobTypeIds
ArrayOf<const String&> mSetLevel6Budget_FebJobTypeIds
ArrayOf<String>* mGetLevel6Budget_FebJobTypeIds
ArrayOf<const String&> mSetLevel6Budget_MarJobTypeIds
ArrayOf<String>* mGetLevel6Budget_MarJobTypeIds
ArrayOf<const String&> mSetLevel6Budget_AprJobTypeIds
ArrayOf<String>* mGetLevel6Budget_AprJobTypeIds
ArrayOf<const String&> mSetLevel6Budget_MayJobTypeIds
ArrayOf<String>* mGetLevel6Budget_MayJobTypeIds
ArrayOf<const String&> mSetLevel6Budget_JunJobTypeIds
ArrayOf<String>* mGetLevel6Budget_JunJobTypeIds
ArrayOf<const String&> mSetLevel6Budget_JulJobTypeIds
ArrayOf<String>* mGetLevel6Budget_JulJobTypeIds
ArrayOf<const String&> mSetLevel6Budget_AugJobTypeIds
ArrayOf<String>* mGetLevel6Budget_AugJobTypeIds
ArrayOf<const String&> mSetLevel6Budget_SepJobTypeIds
ArrayOf<String>* mGetLevel6Budget_SepJobTypeIds
ArrayOf<const String&> mSetLevel6Budget_OctJobTypeIds
ArrayOf<String>* mGetLevel6Budget_OctJobTypeIds
ArrayOf<const String&> mSetLevel6Budget_NovJobTypeIds
ArrayOf<String>* mGetLevel6Budget_NovJobTypeIds
ArrayOf<const String&> mSetLevel6Budget_DecJobTypeIds
ArrayOf<String>* mGetLevel6Budget_DecJobTypeIds
ArrayOf<Double> mSetLevel6Budget_JanCostsJobs
ArrayOf<Double>* mGetLevel6Budget_JanCostsJobs
ArrayOf<Double> mSetLevel6Budget_FebCostsJobs
ArrayOf<Double>* mGetLevel6Budget_FebCostsJobs
ArrayOf<Double> mSetLevel6Budget_MarCostsJobs
ArrayOf<Double>* mGetLevel6Budget_MarCostsJobs
ArrayOf<Double> mSetLevel6Budget_AprCostsJobs
ArrayOf<Double>* mGetLevel6Budget_AprCostsJobs
ArrayOf<Double> mSetLevel6Budget_MayCostsJobs
ArrayOf<Double>* mGetLevel6Budget_MayCostsJobs
ArrayOf<Double> mSetLevel6Budget_JunCostsJobs
ArrayOf<Double>* mGetLevel6Budget_JunCostsJobs
ArrayOf<Double> mSetLevel6Budget_JulCostsJobs
ArrayOf<Double>* mGetLevel6Budget_JulCostsJobs
ArrayOf<Double> mSetLevel6Budget_AugCostsJobs
ArrayOf<Double>* mGetLevel6Budget_AugCostsJobs
ArrayOf<Double> mSetLevel6Budget_SepCostsJobs
ArrayOf<Double>* mGetLevel6Budget_SepCostsJobs
ArrayOf<Double> mSetLevel6Budget_OctCostsJobs
ArrayOf<Double>* mGetLevel6Budget_OctCostsJobs
ArrayOf<Double> mSetLevel6Budget_NovCostsJobs
ArrayOf<Double>* mGetLevel6Budget_NovCostsJobs
ArrayOf<Double> mSetLevel6Budget_DecCostsJobs
ArrayOf<Double>* mGetLevel6Budget_DecCostsJobs
ArrayOf<const String&> mSetLevel6Budget_JanServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_JanServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget_FebServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_FebServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget_MarServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_MarServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget_AprServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_AprServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget_MayServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_MayServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget_JunServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_JunServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget_JulServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_JulServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget_AugServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_AugServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget_SepServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_SepServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget_OctServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_OctServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget_NovServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_NovServiceTypeIds
ArrayOf<const String&> mSetLevel6Budget_DecServiceTypeIds
ArrayOf<String>* mGetLevel6Budget_DecServiceTypeIds
ArrayOf<Double> mSetLevel6Budget_JanCostsServices
ArrayOf<Double>* mGetLevel6Budget_JanCostsServices
ArrayOf<Double> mSetLevel6Budget_FebCostsServices
ArrayOf<Double>* mGetLevel6Budget_FebCostsServices
ArrayOf<Double> mSetLevel6Budget_MarCostsServices
ArrayOf<Double>* mGetLevel6Budget_MarCostsServices
ArrayOf<Double> mSetLevel6Budget_AprCostsServices
ArrayOf<Double>* mGetLevel6Budget_AprCostsServices
ArrayOf<Double> mSetLevel6Budget_MayCostsServices
ArrayOf<Double>* mGetLevel6Budget_MayCostsServices
ArrayOf<Double> mSetLevel6Budget_JunCostsServices
ArrayOf<Double>* mGetLevel6Budget_JunCostsServices
ArrayOf<Double> mSetLevel6Budget_JulCostsServices
ArrayOf<Double>* mGetLevel6Budget_JulCostsServices
ArrayOf<Double> mSetLevel6Budget_AugCostsServices
ArrayOf<Double>* mGetLevel6Budget_AugCostsServices
ArrayOf<Double> mSetLevel6Budget_SepCostsServices
ArrayOf<Double>* mGetLevel6Budget_SepCostsServices
ArrayOf<Double> mSetLevel6Budget_OctCostsServices
ArrayOf<Double>* mGetLevel6Budget_OctCostsServices
ArrayOf<Double> mSetLevel6Budget_NovCostsServices
ArrayOf<Double>* mGetLevel6Budget_NovCostsServices
ArrayOf<Double> mSetLevel6Budget_DecCostsServices
ArrayOf<Double>* mGetLevel6Budget_DecCostsServices
ArrayOf<Double> mSetLevel6Budget_TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetLevel6Budget_TwelveTotalMonthlyCosts
Double mSetLevel6Budget_YearCostThisBudgetId
Double* mGetLevel6Budget_YearCostThisBudgetId
Double mSetLevel6Budget_NetProfitLossThisLevel6BudgetId
Double* mGetLevel6Budget_NetProfitLossThisLevel6BudgetId
Int32 mSetLevel6Budget_LinkingInternalBudgetNum
Int32* mGetLevel6Budget_LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetLevel6Budget_CustomerIds
ArrayOf<CCustomer.customer>* mGetLevel6Budget_CustomerIds
ArrayOf<CProperty.property> mSetLevel6Budget_PropertyIds
ArrayOf<CProperty.property>* mGetLevel6Budget_PropertyIds
ArrayOf<CProperty.program> mSetLevel6Budget_ProgramIds
ArrayOf<CProperty.program>* mGetLevel6Budget_ProgramIds
ArrayOf<CProperty.project> mSetLevel6Budget_ProjectIds
ArrayOf<CProperty.project>* mGetLevel6Budget_ProjectIds
CFinance.hyperBudget mSetLevel6Budget_LinkedToHyperBudgetId
CFinance.hyperBudget* mGetLevel6Budget_LinkedToHyperBudgetId
CFinance.masterSetRegister mSetLevel6Budget_MasterSetId
CFinance.masterSetRegister* mGetLevel6Budget_MasterSetId
CRegister.businessChannelOwner mSetLevel6Budget_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetLevel6Budget_BusinessChannelOwnerId
const String& mSetHyperBudget_HyperBudgetId
String* mGetHyperBudget_HyperBudgetId
const String& mSetHyperBudget_BudgetName
String* mGetHyperBudget_BudgetName
Int32 mSetHyperBudget_EndYearMonthyyyymm
Int32* mGetHyperBudget_EndYearMonthyyyymm
ArrayOf<CHelper.month> mSetHyperBudget_TwelveMonthSequence
ArrayOf<CHelper.month>* mGetHyperBudget_TwelveMonthSequence
ArrayOf<const String&> mSetHyperBudget_IncomeItemTypeIds
ArrayOf<String>* mGetHyperBudget_IncomeItemTypeIds
ArrayOf<Double> mSetHyperBudget_JanRevenues
ArrayOf<Double>* mGetHyperBudget_JanRevenues
ArrayOf<Double> mSetHyperBudget_FebRevenues
ArrayOf<Double>* mGetHyperBudget_FebRevenues
ArrayOf<Double> mSetHyperBudget_MarRevenues
ArrayOf<Double>* mGetHyperBudget_MarRevenues
ArrayOf<Double> mSetHyperBudget_AprRevenues
ArrayOf<Double>* mGetHyperBudget_AprRevenues
ArrayOf<Double> mSetHyperBudget_MayRevenues
ArrayOf<Double>* mGetHyperBudget_MayRevenues
ArrayOf<Double> mSetHyperBudget_JunRevenues
ArrayOf<Double>* mGetHyperBudget_JunRevenues
ArrayOf<Double> mSetHyperBudget_JulRevenues
ArrayOf<Double>* mGetHyperBudget_JulRevenues
ArrayOf<Double> mSetHyperBudget_AugRevenues
ArrayOf<Double>* mGetHyperBudget_AugRevenues
ArrayOf<Double> mSetHyperBudget_SepRevenues
ArrayOf<Double>* mGetHyperBudget_SepRevenues
ArrayOf<Double> mSetHyperBudget_OctRevenues
ArrayOf<Double>* mGetHyperBudget_OctRevenues
ArrayOf<Double> mSetHyperBudget_NovRevenues
ArrayOf<Double>* mGetHyperBudget_NovRevenues
ArrayOf<Double> mSetHyperBudget_DecRevenues
ArrayOf<Double>* mGetHyperBudget_DecRevenues
ArrayOf<const String&> mSetHyperBudget_JanItemTypeIds
ArrayOf<String>* mGetHyperBudget_JanItemTypeIds
ArrayOf<const String&> mSetHyperBudget_FebItemTypeIds
ArrayOf<String>* mGetHyperBudget_FebItemTypeIds
ArrayOf<const String&> mSetHyperBudget_MarItemTypeIds
ArrayOf<String>* mGetHyperBudget_MarItemTypeIds
ArrayOf<const String&> mSetHyperBudget_AprItemTypeIds
ArrayOf<String>* mGetHyperBudget_AprItemTypeIds
ArrayOf<const String&> mSetHyperBudget_MayItemTypeIds
ArrayOf<String>* mGetHyperBudget_MayItemTypeIds
ArrayOf<const String&> mSetHyperBudget_JunItemTypeIds
ArrayOf<String>* mGetHyperBudget_JunItemTypeIds
ArrayOf<const String&> mSetHyperBudget_JulItemTypeIds
ArrayOf<String>* mGetHyperBudget_JulItemTypeIds
ArrayOf<const String&> mSetHyperBudget_AugItemTypeIds
ArrayOf<String>* mGetHyperBudget_AugItemTypeIds
ArrayOf<const String&> mSetHyperBudget_SepItemTypeIds
ArrayOf<String>* mGetHyperBudget_SepItemTypeIds
ArrayOf<const String&> mSetHyperBudget_OctItemTypeIds
ArrayOf<String>* mGetHyperBudget_OctItemTypeIds
ArrayOf<const String&> mSetHyperBudget_NovItemTypeIds
ArrayOf<String>* mGetHyperBudget_NovItemTypeIds
ArrayOf<const String&> mSetHyperBudget_DecItemTypeIds
ArrayOf<String>* mGetHyperBudget_DecItemTypeIds
ArrayOf<Double> mSetHyperBudget_JanCostsItems
ArrayOf<Double>* mGetHyperBudget_JanCostsItems
ArrayOf<Double> mSetHyperBudget_FebCostsItems
ArrayOf<Double>* mGetHyperBudget_FebCostsItems
ArrayOf<Double> mSetHyperBudget_MarCostsItems
ArrayOf<Double>* mGetHyperBudget_MarCostsItems
ArrayOf<Double> mSetHyperBudget_AprCostsItems
ArrayOf<Double>* mGetHyperBudget_AprCostsItems
ArrayOf<Double> mSetHyperBudget_MayCostsItems
ArrayOf<Double>* mGetHyperBudget_MayCostsItems
ArrayOf<Double> mSetHyperBudget_JunCostsItems
ArrayOf<Double>* mGetHyperBudget_JunCostsItems
ArrayOf<Double> mSetHyperBudget_JulCostsItems
ArrayOf<Double>* mGetHyperBudget_JulCostsItems
ArrayOf<Double> mSetHyperBudget_AugCostsItems
ArrayOf<Double>* mGetHyperBudget_AugCostsItems
ArrayOf<Double> mSetHyperBudget_SepCostsItems
ArrayOf<Double>* mGetHyperBudget_SepCostsItems
ArrayOf<Double> mSetHyperBudget_OctCostsItems
ArrayOf<Double>* mGetHyperBudget_OctCostsItems
ArrayOf<Double> mSetHyperBudget_NovCostsItems
ArrayOf<Double>* mGetHyperBudget_NovCostsItems
ArrayOf<Double> mSetHyperBudget_DecCostsItems
ArrayOf<Double>* mGetHyperBudget_DecCostsItems
ArrayOf<const String&> mSetHyperBudget_JanJobTypeIds
ArrayOf<String>* mGetHyperBudget_JanJobTypeIds
ArrayOf<const String&> mSetHyperBudget_FebJobTypeIds
ArrayOf<String>* mGetHyperBudget_FebJobTypeIds
ArrayOf<const String&> mSetHyperBudget_MarJobTypeIds
ArrayOf<String>* mGetHyperBudget_MarJobTypeIds
ArrayOf<const String&> mSetHyperBudget_AprJobTypeIds
ArrayOf<String>* mGetHyperBudget_AprJobTypeIds
ArrayOf<const String&> mSetHyperBudget_MayJobTypeIds
ArrayOf<String>* mGetHyperBudget_MayJobTypeIds
ArrayOf<const String&> mSetHyperBudget_JunJobTypeIds
ArrayOf<String>* mGetHyperBudget_JunJobTypeIds
ArrayOf<const String&> mSetHyperBudget_JulJobTypeIds
ArrayOf<String>* mGetHyperBudget_JulJobTypeIds
ArrayOf<const String&> mSetHyperBudget_AugJobTypeIds
ArrayOf<String>* mGetHyperBudget_AugJobTypeIds
ArrayOf<const String&> mSetHyperBudget_SepJobTypeIds
ArrayOf<String>* mGetHyperBudget_SepJobTypeIds
ArrayOf<const String&> mSetHyperBudget_OctJobTypeIds
ArrayOf<String>* mGetHyperBudget_OctJobTypeIds
ArrayOf<const String&> mSetHyperBudget_NovJobTypeIds
ArrayOf<String>* mGetHyperBudget_NovJobTypeIds
ArrayOf<const String&> mSetHyperBudget_DecJobTypeIds
ArrayOf<String>* mGetHyperBudget_DecJobTypeIds
ArrayOf<Double> mSetHyperBudget_JanCostsJobs
ArrayOf<Double>* mGetHyperBudget_JanCostsJobs
ArrayOf<Double> mSetHyperBudget_FebCostsJobs
ArrayOf<Double>* mGetHyperBudget_FebCostsJobs
ArrayOf<Double> mSetHyperBudget_MarCostsJobs
ArrayOf<Double>* mGetHyperBudget_MarCostsJobs
ArrayOf<Double> mSetHyperBudget_AprCostsJobs
ArrayOf<Double>* mGetHyperBudget_AprCostsJobs
ArrayOf<Double> mSetHyperBudget_MayCostsJobs
ArrayOf<Double>* mGetHyperBudget_MayCostsJobs
ArrayOf<Double> mSetHyperBudget_JunCostsJobs
ArrayOf<Double>* mGetHyperBudget_JunCostsJobs
ArrayOf<Double> mSetHyperBudget_JulCostsJobs
ArrayOf<Double>* mGetHyperBudget_JulCostsJobs
ArrayOf<Double> mSetHyperBudget_AugCostsJobs
ArrayOf<Double>* mGetHyperBudget_AugCostsJobs
ArrayOf<Double> mSetHyperBudget_SepCostsJobs
ArrayOf<Double>* mGetHyperBudget_SepCostsJobs
ArrayOf<Double> mSetHyperBudget_OctCostsJobs
ArrayOf<Double>* mGetHyperBudget_OctCostsJobs
ArrayOf<Double> mSetHyperBudget_NovCostsJobs
ArrayOf<Double>* mGetHyperBudget_NovCostsJobs
ArrayOf<Double> mSetHyperBudget_DecCostsJobs
ArrayOf<Double>* mGetHyperBudget_DecCostsJobs
ArrayOf<const String&> mSetHyperBudget_JanServiceTypeIds
ArrayOf<String>* mGetHyperBudget_JanServiceTypeIds
ArrayOf<const String&> mSetHyperBudget_FebServiceTypeIds
ArrayOf<String>* mGetHyperBudget_FebServiceTypeIds
ArrayOf<const String&> mSetHyperBudget_MarServiceTypeIds
ArrayOf<String>* mGetHyperBudget_MarServiceTypeIds
ArrayOf<const String&> mSetHyperBudget_AprServiceTypeIds
ArrayOf<String>* mGetHyperBudget_AprServiceTypeIds
ArrayOf<const String&> mSetHyperBudget_MayServiceTypeIds
ArrayOf<String>* mGetHyperBudget_MayServiceTypeIds
ArrayOf<const String&> mSetHyperBudget_JunServiceTypeIds
ArrayOf<String>* mGetHyperBudget_JunServiceTypeIds
ArrayOf<const String&> mSetHyperBudget_JulServiceTypeIds
ArrayOf<String>* mGetHyperBudget_JulServiceTypeIds
ArrayOf<const String&> mSetHyperBudget_AugServiceTypeIds
ArrayOf<String>* mGetHyperBudget_AugServiceTypeIds
ArrayOf<const String&> mSetHyperBudget_SepServiceTypeIds
ArrayOf<String>* mGetHyperBudget_SepServiceTypeIds
ArrayOf<const String&> mSetHyperBudget_OctServiceTypeIds
ArrayOf<String>* mGetHyperBudget_OctServiceTypeIds
ArrayOf<const String&> mSetHyperBudget_NovServiceTypeIds
ArrayOf<String>* mGetHyperBudget_NovServiceTypeIds
ArrayOf<const String&> mSetHyperBudget_DecServiceTypeIds
ArrayOf<String>* mGetHyperBudget_DecServiceTypeIds
ArrayOf<Double> mSetHyperBudget_JanCostsServices
ArrayOf<Double>* mGetHyperBudget_JanCostsServices
ArrayOf<Double> mSetHyperBudget_FebCostsServices
ArrayOf<Double>* mGetHyperBudget_FebCostsServices
ArrayOf<Double> mSetHyperBudget_MarCostsServices
ArrayOf<Double>* mGetHyperBudget_MarCostsServices
ArrayOf<Double> mSetHyperBudget_AprCostsServices
ArrayOf<Double>* mGetHyperBudget_AprCostsServices
ArrayOf<Double> mSetHyperBudget_MayCostsServices
ArrayOf<Double>* mGetHyperBudget_MayCostsServices
ArrayOf<Double> mSetHyperBudget_JunCostsServices
ArrayOf<Double>* mGetHyperBudget_JunCostsServices
ArrayOf<Double> mSetHyperBudget_JulCostsServices
ArrayOf<Double>* mGetHyperBudget_JulCostsServices
ArrayOf<Double> mSetHyperBudget_AugCostsServices
ArrayOf<Double>* mGetHyperBudget_AugCostsServices
ArrayOf<Double> mSetHyperBudget_SepCostsServices
ArrayOf<Double>* mGetHyperBudget_SepCostsServices
ArrayOf<Double> mSetHyperBudget_OctCostsServices
ArrayOf<Double>* mGetHyperBudget_OctCostsServices
ArrayOf<Double> mSetHyperBudget_NovCostsServices
ArrayOf<Double>* mGetHyperBudget_NovCostsServices
ArrayOf<Double> mSetHyperBudget_DecCostsServices
ArrayOf<Double>* mGetHyperBudget_DecCostsServices
ArrayOf<Double> mSetHyperBudget_TwelveTotalMonthlyCosts
ArrayOf<Double>* mGetHyperBudget_TwelveTotalMonthlyCosts
Double mSetHyperBudget_YearCostThisBudgetId
Double* mGetHyperBudget_YearCostThisBudgetId
Double mSetHyperBudget_NetProfitLossThisHyperBudgetId
Double* mGetHyperBudget_NetProfitLossThisHyperBudgetId
Int32 mSetHyperBudget_LinkingInternalBudgetNum
Int32* mGetHyperBudget_LinkingInternalBudgetNum
ArrayOf<CCustomer.customer> mSetHyperBudget_CustomerIds
ArrayOf<CCustomer.customer>* mGetHyperBudget_CustomerIds
ArrayOf<CProperty.property> mSetHyperBudget_PropertyIds
ArrayOf<CProperty.property>* mGetHyperBudget_PropertyIds
ArrayOf<CProperty.program> mSetHyperBudget_ProgramIds
ArrayOf<CProperty.program>* mGetHyperBudget_ProgramIds
ArrayOf<CProperty.project> mSetHyperBudget_ProjectIds
ArrayOf<CProperty.project>* mGetHyperBudget_ProjectIds
CFinance.masterSetRegister mSetHyperBudget_MasterSetId
CFinance.masterSetRegister* mGetHyperBudget_MasterSetId
CRegister.businessChannelOwner mSetHyperBudget_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetHyperBudget_BusinessChannelOwnerId
const String& mSetInvoice_InvoiceId
String* mGetInvoice_InvoiceId
const String& mSetInvoice_InvoiceDate
String* mGetInvoice_InvoiceDate
Double mSetInvoice_InvoiceAmount
Double* mGetInvoice_InvoiceAmount
ArrayOf<const String&> mSetInvoice_DocRefs
ArrayOf<String>* mGetInvoice_DocRefs
const String& mSetInvoice_PaidDate
String* mGetInvoice_PaidDate
ArrayOf<const String&> mSetInvoice_GenLedgeFinTxIds
ArrayOf<String>* mGetInvoice_GenLedgeFinTxIds
ArrayOf<const String&> mSetInvoice_MasLedgeFinTxIds
ArrayOf<String>* mGetInvoice_MasLedgeFinTxIds
Int32 mSetInvoice_GenLedgeFinTxNum
Int32* mGetInvoice_GenLedgeFinTxNum
Int32 mSetInvoice_MasLedgeFinTxNum
Int32* mGetInvoice_MasLedgeFinTxNum
ArrayOf<const String&> mSetInvoice_FeesAndChargesIds
ArrayOf<String>* mGetInvoice_FeesAndChargesIds
ArrayOf<const String&> mSetInvoice_ChargeDates
ArrayOf<String>* mGetInvoice_ChargeDates
ArrayOf<CCustomer.customer> mSetInvoice_Customers
ArrayOf<CCustomer.customer>* mGetInvoice_Customers
ArrayOf<CProperty.propertyOwner> mSetInvoice_PropertyOwnerIds
ArrayOf<CProperty.propertyOwner>* mGetInvoice_PropertyOwnerIds
CProperty.tenant mSetInvoice_TenancyId
CProperty.tenant* mGetInvoice_TenancyId
ArrayOf<CAdministration.item> mSetInvoice_ItemIds
ArrayOf<CAdministration.item>* mGetInvoice_ItemIds
ArrayOf<CAdministration.job> mSetInvoice_JobIds
ArrayOf<CAdministration.job>* mGetInvoice_JobIds
ArrayOf<CAdministration.service> mSetInvoice_ServiceIds
ArrayOf<CAdministration.service>* mGetInvoice_ServiceIds
ArrayOf<CFinance.masterSalesOrder> mSetInvoice_MasterSalesOrderIds
ArrayOf<CFinance.masterSalesOrder>* mGetInvoice_MasterSalesOrderIds
masLedgeFinTxJoin mSetInvoice_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetInvoice_MasLedgeFinTxJoinId
CRegister.businessChannelOwner mSetInvoice_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetInvoice_BusinessChannelOwnerId
CAdministration.branch mSetInvoice_BranchId
CAdministration.branch* mGetInvoice_BranchId
CAdministration.department mSetInvoice_DeptId
CAdministration.department* mGetInvoice_DeptId
const String& mSetBill_BillId
String* mGetBill_BillId
const String& mSetBill_BillCodeScanned
String* mGetBill_BillCodeScanned
const String& mSetBill_BillDate
String* mGetBill_BillDate
Double mSetBill_BillAmount
Double* mGetBill_BillAmount
ArrayOf<const String&> mSetBill_DocRefs
ArrayOf<String>* mGetBill_DocRefs
const String& mSetBill_PaidDate
String* mGetBill_PaidDate
ArrayOf<const String&> mSetBill_GenLedgeFinTxIds
ArrayOf<String>* mGetBill_GenLedgeFinTxIds
ArrayOf<const String&> mSetBill_MasLedgeFinTxIds
ArrayOf<String>* mGetBill_MasLedgeFinTxIds
Int32 mSetBill_GenLedgeFinTxNum
Int32* mGetBill_GenLedgeFinTxNum
Int32 mSetBill_MasLedgeFinTxNum
Int32* mGetBill_MasLedgeFinTxNum
Boolean mSetBill_Passed
Boolean* mGetBill_Passed
CSupplier.supplier mSetBill_SupplierId
CSupplier.supplier* mGetBill_SupplierId
ArrayOf<CAdministration.item> mSetBill_ItemIds
ArrayOf<CAdministration.item>* mGetBill_ItemIds
ArrayOf<CAdministration.job> mSetBill_JobIds
ArrayOf<CAdministration.job>* mGetBill_JobIds
ArrayOf<CAdministration.service> mSetBill_ServiceIds
ArrayOf<CAdministration.service>* mGetBill_ServiceIds
ArrayOf<CFinance.purchaseOrder> mSetBill_PurchOrderIds
ArrayOf<CFinance.purchaseOrder>* mGetBill_PurchOrderIds
masLedgeFinTxJoin mSetBill_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetBill_MasLedgeFinTxJoinId
CRegister.businessChannelOwner mSetBill_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetBill_BusinessChannelOwnerId
CAdministration.branch mSetBill_BranchId
CAdministration.branch* mGetBill_BranchId
CAdministration.department mSetBill_DeptId
CAdministration.department* mGetBill_DeptId
const String& mSetFeesAndCharges_FeeChargeId
String* mGetFeesAndCharges_FeeChargeId
const String& mSetFeesAndCharges_FeeChargeName
String* mGetFeesAndCharges_FeeChargeName
const String& mSetFeesAndCharges_FeeChargeCode
String* mGetFeesAndCharges_FeeChargeCode
const String& mSetFeesAndCharges_FeeChargeDescription
String* mGetFeesAndCharges_FeeChargeDescription
Double mSetFeesAndCharges_FeeChargeRate
Double* mGetFeesAndCharges_FeeChargeRate
const String& mSetFeesAndCharges_FeeChargeRateUnits
String* mGetFeesAndCharges_FeeChargeRateUnits
CHelper.billingInterval mSetFeesAndCharges_PaymentInterval
CHelper.billingInterval* mGetFeesAndCharges_PaymentInterval
CRegister.businessChannelOwner mSetFeesAndCharges_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetFeesAndCharges_BusinessChannelOwnerId
ArrayOf<CAdministration.service> mSetFeesAndCharges_ServiceIds
ArrayOf<CAdministration.service>* mGetFeesAndCharges_ServiceIds
ArrayOf<CAdministration.item> mSetFeesAndCharges_ItemIds
ArrayOf<CAdministration.item>* mGetFeesAndCharges_ItemIds
ArrayOf<CAdministration.itemType> mSetFeesAndCharges_ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetFeesAndCharges_ItemTypeIds
const String& mSetPurchaseOrder_PurchOrderId
String* mGetPurchaseOrder_PurchOrderId
const String& mSetPurchaseOrder_MRQIdIfRentalProperty
String* mGetPurchaseOrder_MRQIdIfRentalProperty
Boolean mSetPurchaseOrder_DamageCausedByCustomerTenantOthers
Boolean* mGetPurchaseOrder_DamageCausedByCustomerTenantOthers
Boolean mSetPurchaseOrder_OurResponsibility
Boolean* mGetPurchaseOrder_OurResponsibility
ArrayOf<const String&> mSetPurchaseOrder_SummaryDescriptionOfProblemItemised
ArrayOf<String>* mGetPurchaseOrder_SummaryDescriptionOfProblemItemised
Double mSetPurchaseOrder_QuotedEstimateCost
Double* mGetPurchaseOrder_QuotedEstimateCost
const String& mSetPurchaseOrder_ExpectedCompletionDate
String* mGetPurchaseOrder_ExpectedCompletionDate
ArrayOf<Boolean> mSetPurchaseOrder_WorkCheckedPassed
ArrayOf<Boolean>* mGetPurchaseOrder_WorkCheckedPassed
Double mSetPurchaseOrder_TotalMaintPurchOrderAmount
Double* mGetPurchaseOrder_TotalMaintPurchOrderAmount
Int32 mSetPurchaseOrder_MasLedgeFinTxNumReturned
Int32* mGetPurchaseOrder_MasLedgeFinTxNumReturned
CRegister.businessChannelOwner mSetPurchaseOrder_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetPurchaseOrder_BusinessChannelOwnerId
CProperty.property mSetPurchaseOrder_PropertyId
CProperty.property* mGetPurchaseOrder_PropertyId
CAdministration.branch mSetPurchaseOrder_BranchId
CAdministration.branch* mGetPurchaseOrder_BranchId
CAdministration.department mSetPurchaseOrder_DeptId
CAdministration.department* mGetPurchaseOrder_DeptId
CSupplier.supplier mSetPurchaseOrder_SupplierId
CSupplier.supplier* mGetPurchaseOrder_SupplierId
ArrayOf<CAdministration.itemType> mSetPurchaseOrder_ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetPurchaseOrder_ItemTypeIds
ArrayOf<CAdministration.item> mSetPurchaseOrder_ItemIds
ArrayOf<CAdministration.item>* mGetPurchaseOrder_ItemIds
ArrayOf<CAdministration.serviceType> mSetPurchaseOrder_ServiceTypeIds
ArrayOf<CAdministration.serviceType>* mGetPurchaseOrder_ServiceTypeIds
ArrayOf<CAdministration.service> mSetPurchaseOrder_ServiceIds
ArrayOf<CAdministration.service>* mGetPurchaseOrder_ServiceIds
ArrayOf<CAdministration.jobType> mSetPurchaseOrder_JobTypeIds
ArrayOf<CAdministration.jobType>* mGetPurchaseOrder_JobTypeIds
ArrayOf<CAdministration.job> mSetPurchaseOrder_JobIds
ArrayOf<CAdministration.job>* mGetPurchaseOrder_JobIds
ArrayOf<CFinance.masterLedgerExpense> mSetPurchaseOrder_MasterLedgerExpenseIds
ArrayOf<CFinance.masterLedgerExpense>* mGetPurchaseOrder_MasterLedgerExpenseIds
masLedgeFinTxJoin mSetPurchaseOrder_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetPurchaseOrder_MasLedgeFinTxJoinId
ArrayOf<CAdministration.documents> mSetPurchaseOrder_DocRefIds
ArrayOf<CAdministration.documents>* mGetPurchaseOrder_DocRefIds
ArrayOf<CAdministration.images> mSetPurchaseOrder_ImageRefIds
ArrayOf<CAdministration.images>* mGetPurchaseOrder_ImageRefIds
const String& mSetMasterSalesOrder_MasterSalesOrderId
String* mGetMasterSalesOrder_MasterSalesOrderId
ArrayOf<Double> mSetMasterSalesOrder_ItemQuantities
ArrayOf<Double>* mGetMasterSalesOrder_ItemQuantities
ArrayOf<Double> mSetMasterSalesOrder_ItemWeights
ArrayOf<Double>* mGetMasterSalesOrder_ItemWeights
ArrayOf<Double> mSetMasterSalesOrder_ItemPrices
ArrayOf<Double>* mGetMasterSalesOrder_ItemPrices
Double mSetMasterSalesOrder_ItemTotalPrice
Double* mGetMasterSalesOrder_ItemTotalPrice
Double mSetMasterSalesOrder_ItemTotalWeight
Double* mGetMasterSalesOrder_ItemTotalWeight
ArrayOf<Double> mSetMasterSalesOrder_ProductQuantities
ArrayOf<Double>* mGetMasterSalesOrder_ProductQuantities
ArrayOf<Double> mSetMasterSalesOrder_ProductWeights
ArrayOf<Double>* mGetMasterSalesOrder_ProductWeights
ArrayOf<Double> mSetMasterSalesOrder_ProductsPrices
ArrayOf<Double>* mGetMasterSalesOrder_ProductsPrices
Double mSetMasterSalesOrder_ProductsTotalPrice
Double* mGetMasterSalesOrder_ProductsTotalPrice
Double mSetMasterSalesOrder_ProductsTotalWeight
Double* mGetMasterSalesOrder_ProductsTotalWeight
ArrayOf<Double> mSetMasterSalesOrder_ServicePriceRates
ArrayOf<Double>* mGetMasterSalesOrder_ServicePriceRates
Double mSetMasterSalesOrder_ServiceEstimatedTotalPrice
Double* mGetMasterSalesOrder_ServiceEstimatedTotalPrice
ArrayOf<Double> mSetMasterSalesOrder_JobPriceRates
ArrayOf<Double>* mGetMasterSalesOrder_JobPriceRates
Double mSetMasterSalesOrder_JobsEstimatedTotalPrice
Double* mGetMasterSalesOrder_JobsEstimatedTotalPrice
Double mSetMasterSalesOrder_TotalOrderPrice
Double* mGetMasterSalesOrder_TotalOrderPrice
CRegister.businessChannelOwner mSetMasterSalesOrder_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMasterSalesOrder_BusinessChannelOwnerId
CAdministration.branch mSetMasterSalesOrder_BranchId
CAdministration.branch* mGetMasterSalesOrder_BranchId
CAdministration.department mSetMasterSalesOrder_DeptId
CAdministration.department* mGetMasterSalesOrder_DeptId
ArrayOf<CCustomer.customer> mSetMasterSalesOrder_Customers
ArrayOf<CCustomer.customer>* mGetMasterSalesOrder_Customers
ArrayOf<CAdministration.itemType> mSetMasterSalesOrder_ItemTypeIds
ArrayOf<CAdministration.itemType>* mGetMasterSalesOrder_ItemTypeIds
ArrayOf<CAdministration.item> mSetMasterSalesOrder_ItemIds
ArrayOf<CAdministration.item>* mGetMasterSalesOrder_ItemIds
ArrayOf<CAdministration.serviceType> mSetMasterSalesOrder_ServiceTypeIds
ArrayOf<CAdministration.serviceType>* mGetMasterSalesOrder_ServiceTypeIds
ArrayOf<CAdministration.service> mSetMasterSalesOrder_ServiceIds
ArrayOf<CAdministration.service>* mGetMasterSalesOrder_ServiceIds
ArrayOf<CAdministration.jobType> mSetMasterSalesOrder_JobTypeIds
ArrayOf<CAdministration.jobType>* mGetMasterSalesOrder_JobTypeIds
ArrayOf<CAdministration.job> mSetMasterSalesOrder_JobIds
ArrayOf<CAdministration.job>* mGetMasterSalesOrder_JobIds
ArrayOf<CFinance.masterLedgerIncome> mSetMasterSalesOrder_MasterLedgerIncomeId
ArrayOf<CFinance.masterLedgerIncome>* mGetMasterSalesOrder_MasterLedgerIncomeId
masLedgeFinTxJoin mSetMasterSalesOrder_MasLedgeFinTxJoinId
masLedgeFinTxJoin* mGetMasterSalesOrder_MasLedgeFinTxJoinId
ArrayOf<CAdministration.documents> mSetMasterSalesOrder_DocRefIds
ArrayOf<CAdministration.documents>* mGetMasterSalesOrder_DocRefIds
ArrayOf<CAdministration.images> mSetMasterSalesOrder_ImageRefIds
ArrayOf<CAdministration.images>* mGetMasterSalesOrder_ImageRefIds
ArrayOf<CAdministration.video> mSetMasterSalesOrder_VideoRefIds
ArrayOf<CAdministration.video>* mGetMasterSalesOrder_VideoRefIds
const String& mSetTaxReferenceTable_TaxReferenceId
String* mGetTaxReferenceTable_TaxReferenceId
ArrayOf<CHelper.ausState> mSetTaxReferenceTable_AusStates
ArrayOf<CHelper.ausState>* mGetTaxReferenceTable_AusStates
const String& mSetTaxReferenceTable_Description
String* mGetTaxReferenceTable_Description
ArrayOf<const String&> mSetTaxReferenceTable_Notes
ArrayOf<String>* mGetTaxReferenceTable_Notes
Double mSetTaxReferenceTable_TaxRatePerCent
Double* mGetTaxReferenceTable_TaxRatePerCent
CHelper.taxCode mSetTaxReferenceTable_TaxCode
CHelper.taxCode* mGetTaxReferenceTable_TaxCode
ArrayOf<CAdministration.documents> mSetTaxReferenceTable_DocRefIds
ArrayOf<CAdministration.documents>* mGetTaxReferenceTable_DocRefIds
CRegister.businessChannelOwner mSetTaxReferenceTable_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetTaxReferenceTable_BusinessChannelOwnerId
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

