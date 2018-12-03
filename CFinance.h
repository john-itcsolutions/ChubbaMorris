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


   CARAPI SetMasterAssetRegister_MasterAsset(
     /* [in] */ const String& CFinance.masterAssetRegister.masterAssetId);

    CARAPI GetMasterAssetRegister_MasterAsset(
     /* [out] */ String* CFinance.masterAssetRegister.masterAssetId);


   CARAPI SetMasterAssetRegister_AssetType(
     /* [in] */ const String& CFinance.masterAssetRegister.assetTypeId);

    CARAPI GetMasterAssetRegister_AssetType(
     /* [out] */ String* CFinance.masterAssetRegister.assetTypeId);


   CARAPI SetMasterAssetRegister_AssetType(
     /* [in] */ const String& CFinance.masterAssetRegister.assetName);

    CARAPI GetMasterAssetRegister_AssetType(
     /* [out] */ String* CFinance.masterAssetRegister.assetName);


   CARAPI SetMasterAssetRegister_AssetType(
     /* [in] */ const String& CFinance.masterAssetRegister.assetDescription);

    CARAPI GetMasterAssetRegister_AssetType(
     /* [out] */ String* CFinance.masterAssetRegister.assetDescription);


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


   CARAPI SetMasterAssetRegister_MasterAsset(
     /* [in] */ CFinance.masterAssetType CFinance.masterAssetRegister.masterAssetTypeId);

    CARAPI GetMasterAssetRegister_MasterAsset(
     /* [out] */ CFinance.masterAssetType* CFinance.masterAssetRegister.masterAssetTypeId);


   CARAPI SetMasterAsset( SetType.MasterAsset( SetTypeId(
     /* [in] */ const String& CFinance.masterAssetType.masterAssetTypeId);

    CARAPI GetMasterAsset( SetType.MasterAsset( SetTypeId(
     /* [out] */ String* CFinance.masterAssetType.masterAssetTypeId);


   CARAPI SetMasterAsset( SetType.AsCARAPI SetName(
     /* [in] */ const String& CFinance.masterAssetType.assetName);

    CARAPI GetMasterAsset( SetType.AsCARAPI SetName(
     /* [out] */ String* CFinance.masterAssetType.assetName);


   CARAPI SetMasterAsset( SetType.AsCARAPI SetDescription(
     /* [in] */ const String& CFinance.masterAssetType.assetDescription);

    CARAPI GetMasterAsset( SetType.AsCARAPI SetDescription(
     /* [out] */ String* CFinance.masterAssetType.assetDescription);


   CARAPI SetMasterAsset( SetType.InspectionTerm(
     /* [in] */ CHelper.inspectionTerm CFinance.masterAssetType.inspectionTerm);

    CARAPI GetMasterAsset( SetType.InspectionTerm(
     /* [out] */ CHelper.inspectionTerm* CFinance.masterAssetType.inspectionTerm);


   CARAPI SetMasterAsset( SetType.ValueOfN(
     /* [in] */ Int32 CFinance.masterAssetType.valueOfN);

    CARAPI GetMasterAsset( SetType.ValueOfN(
     /* [out] */ Int32* CFinance.masterAssetType.valueOfN);


   CARAPI SetMasterAsset( SetType.DocRefs(
     /* [in] */ ArrayOf<CAdministration.documents> CFinance.masterAssetType.docRefs);

    CARAPI GetMasterAsset( SetType.DocRefs(
     [out, callee] ArrayOf<CAdministration.documents>* CFinance.masterAssetType.docRefs);


   CARAPI SetMasterAsset( SetType.ImageRefs(
     /* [in] */ ArrayOf<CAdministration.images> CFinance.masterAssetType.imageRefs);

    CARAPI GetMasterAsset( SetType.ImageRefs(
     [out, callee] ArrayOf<CAdministration.images>* CFinance.masterAssetType.imageRefs);


   CARAPI SetMasterAsset( SetType.AudioRefIds(
     /* [in] */ ArrayOf<CAdministration.audio> CFinance.masterAssetType.audioRefIds);

    CARAPI GetMasterAsset( SetType.AudioRefIds(
     [out, callee] ArrayOf<CAdministration.audio>* CFinance.masterAssetType.audioRefIds);


   CARAPI SetMasterAsset( SetType.VideoRefs(
     /* [in] */ ArrayOf<CAdministration.video> CFinance.masterAssetType.videoRefs);

    CARAPI GetMasterAsset( SetType.VideoRefs(
     [out, callee] ArrayOf<CAdministration.video>* CFinance.masterAssetType.videoRefs);


   CARAPI SetMasterAsset( SetType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterAssetType.businessChannelOwnerId);

    CARAPI GetMasterAsset( SetType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterAssetType.businessChannelOwnerId);


   CARAPI SetMasterAsset( SetType.BranchId(
     /* [in] */ CAdministration.branch CFinance.masterAssetType.branchId);

    CARAPI GetMasterAsset( SetType.BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterAssetType.branchId);


   CARAPI SetMasterAsset( SetType.DeptId(
     /* [in] */ CAdministration.department CFinance.masterAssetType.deptId);

    CARAPI GetMasterAsset( SetType.DeptId(
     /* [out] */ CAdministration.department* CFinance.masterAssetType.deptId);


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


   CARAPI SetMasterLedgerAsset_MasterLedgerAssetId(
     /* [in] */ const String& CFinance.masterLedgerAsset.masterLedgerAssetId);

    CARAPI GetMasterLedgerAsset_MasterLedgerAssetId(
     /* [out] */ String* CFinance.masterLedgerAsset.masterLedgerAssetId);


   CARAPI SetMasterLedgerAsset_BankBSB(
     /* [in] */ const String& CFinance.masterLedgerAsset.bankBSB);

    CARAPI GetMasterLedgerAsset_BankBSB(
     /* [out] */ String* CFinance.masterLedgerAsset.bankBSB);


   CARAPI SetMasterLedgerAsset_BankAccountNumber(
     /* [in] */ const String& CFinance.masterLedgerAsset.bankAccountNumber);

    CARAPI GetMasterLedgerAsset_BankAccountNumber(
     /* [out] */ String* CFinance.masterLedgerAsset.bankAccountNumber);


   CARAPI SetMasterLedgerAsset_NameOnBankAccount(
     /* [in] */ const String& CFinance.masterLedgerAsset.nameOnBankAccount);

    CARAPI GetMasterLedgerAsset_NameOnBankAccount(
     /* [out] */ String* CFinance.masterLedgerAsset.nameOnBankAccount);


   CARAPI SetMasterLedgerAsset_Description(
     /* [in] */ const String& CFinance.masterLedgerAsset.description);

    CARAPI GetMasterLedgerAsset_Description(
     /* [out] */ String* CFinance.masterLedgerAsset.description);


   CARAPI SetMasterLedgerAsset_DocRefs(
     /* [in] */ ArrayOf<const String&> CFinance.masterLedgerAsset.docRefs);

    CARAPI GetMasterLedgerAsset_DocRefs(
     [out, callee] ArrayOf<String>* CFinance.masterLedgerAsset.docRefs);


   CARAPI SetMasterLedgerAsset_FeeId(
     /* [in] */ const String& CFinance.masterLedgerAsset.feeId);

    CARAPI GetMasterLedgerAsset_FeeId(
     /* [out] */ String* CFinance.masterLedgerAsset.feeId);


   CARAPI SetMasterLedgerAsset_MasLedgeFinTxNum(
     /* [in] */ Int32 CFinance.masterLedgerAsset.masLedgeFinTxNum);

    CARAPI GetMasterLedgerAsset_MasLedgeFinTxNum(
     /* [out] */ Int32* CFinance.masterLedgerAsset.masLedgeFinTxNum);


   CARAPI SetMasterLedgerAsset_Level1AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsset.level1AccountName);

    CARAPI GetMasterLedgerAsset_Level1AccountName(
     /* [out] */ String* CFinance.masterLedgerAsset.level1AccountName);


   CARAPI SetMasterLedgerAsset_Level1AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsset.level1AccountNum);

    CARAPI GetMasterLedgerAsset_Level1AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsset.level1AccountNum);


   CARAPI SetMasterLedgerAsset_Level2AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsset.level2AccountName);

    CARAPI GetMasterLedgerAsset_Level2AccountName(
     /* [out] */ String* CFinance.masterLedgerAsset.level2AccountName);


   CARAPI SetMasterLedgerAsset_Level2AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsset.level2AccountNum);

    CARAPI GetMasterLedgerAsset_Level2AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsset.level2AccountNum);


   CARAPI SetMasterLedgerAsset_Level3AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsset.level3AccountName);

    CARAPI GetMasterLedgerAsset_Level3AccountName(
     /* [out] */ String* CFinance.masterLedgerAsset.level3AccountName);


   CARAPI SetMasterLedgerAsset_Level3AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsset.level3AccountNum);

    CARAPI GetMasterLedgerAsset_Level3AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsset.level3AccountNum);


   CARAPI SetMasterLedgerAsset_Level4AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsset.level4AccountName);

    CARAPI GetMasterLedgerAsset_Level4AccountName(
     /* [out] */ String* CFinance.masterLedgerAsset.level4AccountName);


   CARAPI SetMasterLedgerAsset_Level4AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsset.level4AccountNum);

    CARAPI GetMasterLedgerAsset_Level4AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsset.level4AccountNum);


   CARAPI SetMasterLedgerAsset_Level5AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsset.level5AccountName);

    CARAPI GetMasterLedgerAsset_Level5AccountName(
     /* [out] */ String* CFinance.masterLedgerAsset.level5AccountName);


   CARAPI SetMasterLedgerAsset_Level5AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsset.level5AccountNum);

    CARAPI GetMasterLedgerAsset_Level5AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsset.level5AccountNum);


   CARAPI SetMasterLedgerAsset_Level6AccountName(
     /* [in] */ const String& CFinance.masterLedgerAsset.level6AccountName);

    CARAPI GetMasterLedgerAsset_Level6AccountName(
     /* [out] */ String* CFinance.masterLedgerAsset.level6AccountName);


   CARAPI SetMasterLedgerAsset_Level6AccountNum(
     /* [in] */ const String& CFinance.masterLedgerAsset.level6AccountNum);

    CARAPI GetMasterLedgerAsset_Level6AccountNum(
     /* [out] */ String* CFinance.masterLedgerAsset.level6AccountNum);


   CARAPI SetMasterLedgerAsset_Level1ClassName(
     /* [in] */ const String& CFinance.masterLedgerAsset.level1ClassName);

    CARAPI GetMasterLedgerAsset_Level1ClassName(
     /* [out] */ String* CFinance.masterLedgerAsset.level1ClassName);


   CARAPI SetMasterLedgerAsset_Level2ClassName(
     /* [in] */ const String& CFinance.masterLedgerAsset.level2ClassName);

    CARAPI GetMasterLedgerAsset_Level2ClassName(
     /* [out] */ String* CFinance.masterLedgerAsset.level2ClassName);


   CARAPI SetMasterLedgerAsset_Level3ClassName(
     /* [in] */ const String& CFinance.masterLedgerAsset.level3ClassName);

    CARAPI GetMasterLedgerAsset_Level3ClassName(
     /* [out] */ String* CFinance.masterLedgerAsset.level3ClassName);


   CARAPI SetMasterLedgerAsset_TransactionEffective(
     /* [in] */ const String& CFinance.masterLedgerAsset.transactionEffective);

    CARAPI GetMasterLedgerAsset_TransactionEffective(
     /* [out] */ String* CFinance.masterLedgerAsset.transactionEffective);


   CARAPI SetMasterLedgerAsset_MasLedgeFinTxId(
     /* [in] */ const String& CFinance.masterLedgerAsset.masLedgeFinTxId);

    CARAPI GetMasterLedgerAsset_MasLedgeFinTxId(
     /* [out] */ String* CFinance.masterLedgerAsset.masLedgeFinTxId);


   CARAPI SetMasterLedgerAsset_Cr(
     /* [in] */ Double CFinance.masterLedgerAsset.cr);

    CARAPI GetMasterLedgerAsset_Cr(
     /* [out] */ Double* CFinance.masterLedgerAsset.cr);


   CARAPI SetMasterLedgerAsset_Dr(
     /* [in] */ Double CFinance.masterLedgerAsset.dr);

    CARAPI GetMasterLedgerAsset_Dr(
     /* [out] */ Double* CFinance.masterLedgerAsset.dr);


   CARAPI SetMasterLedgerAsset_Bal(
     /* [in] */ Double CFinance.masterLedgerAsset.bal);

    CARAPI GetMasterLedgerAsset_Bal(
     /* [out] */ Double* CFinance.masterLedgerAsset.bal);


   CARAPI SetMasterLedgerAsset_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.masterLedgerAsset.businessChannelOwnerId);

    CARAPI GetMasterLedgerAsset_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.masterLedgerAsset.businessChannelOwnerId);


   CARAPI SetMasterLedgerAsset_MasLedgeFinTxJoinId(
     /* [in] */ masLedgeFinTxJoin CFinance.masterLedgerAsset.masLedgeFinTxJoinId);

    CARAPI GetMasterLedgerAsset_MasLedgeFinTxJoinId(
     /* [out] */ masLedgeFinTxJoin* CFinance.masterLedgerAsset.masLedgeFinTxJoinId);


   CARAPI SetMasterLedgerAsset_ChartOfAccountsId(
     /* [in] */ CFinance.chartOfAccounts CFinance.masterLedgerAsset.chartOfAccountsId);

    CARAPI GetMasterLedgerAsset_ChartOfAccountsId(
     /* [out] */ CFinance.chartOfAccounts* CFinance.masterLedgerAsset.chartOfAccountsId);


   CARAPI SetMasterLedgerAsset_ChartOfClassesId(
     /* [in] */ CFinance.chartOfClasses CFinance.masterLedgerAsset.chartOfClassesId);

    CARAPI GetMasterLedgerAsset_ChartOfClassesId(
     /* [out] */ CFinance.chartOfClasses* CFinance.masterLedgerAsset.chartOfClassesId);


   CARAPI SetMasterLedgerAsset_BranchId(
     /* [in] */ CAdministration.branch CFinance.masterLedgerAsset.branchId);

    CARAPI GetMasterLedgerAsset_BranchId(
     /* [out] */ CAdministration.branch* CFinance.masterLedgerAsset.branchId);


   CARAPI SetMasterLedgerAsset_DepartmentId(
     /* [in] */ CAdministration.department CFinance.masterLedgerAsset.departmentId);

    CARAPI GetMasterLedgerAsset_DepartmentId(
     /* [out] */ CAdministration.department* CFinance.masterLedgerAsset.departmentId);


   CARAPI SetMasterLedgerAsset_BankId(
     /* [in] */ CFinance.bank CFinance.masterLedgerAsset.bankId);

    CARAPI GetMasterLedgerAsset_BankId(
     /* [out] */ CFinance.bank* CFinance.masterLedgerAsset.bankId);


   CARAPI SetMasterLedgerAsset_ProgramId(
     /* [in] */ CProperty.program CFinance.masterLedgerAsset.programId);

    CARAPI GetMasterLedgerAsset_ProgramId(
     /* [out] */ CProperty.program* CFinance.masterLedgerAsset.programId);


   CARAPI SetMasterLedgerAsset_ProjectId(
     /* [in] */ CProperty.project CFinance.masterLedgerAsset.projectId);

    CARAPI GetMasterLedgerAsset_ProjectId(
     /* [out] */ CProperty.project* CFinance.masterLedgerAsset.projectId);


   CARAPI SetMasterLedgerAsset_ItemId(
     /* [in] */ CAdministration.item CFinance.masterLedgerAsset.itemId);

    CARAPI GetMasterLedgerAsset_ItemId(
     /* [out] */ CAdministration.item* CFinance.masterLedgerAsset.itemId);


   CARAPI SetMasterLedgerAsset_JobId(
     /* [in] */ CAdministration.job CFinance.masterLedgerAsset.jobId);

    CARAPI GetMasterLedgerAsset_JobId(
     /* [out] */ CAdministration.job* CFinance.masterLedgerAsset.jobId);


   CARAPI SetMasterLedgerAsset_ServiceId(
     /* [in] */ CAdministration.service CFinance.masterLedgerAsset.serviceId);

    CARAPI GetMasterLedgerAsset_ServiceId(
     /* [out] */ CAdministration.service* CFinance.masterLedgerAsset.serviceId);


   CARAPI SetMasterLedgerAsset_CustomerId(
     /* [in] */ CCustomer.customer CFinance.masterLedgerAsset.customerId);

    CARAPI GetMasterLedgerAsset_CustomerId(
     /* [out] */ CCustomer.customer* CFinance.masterLedgerAsset.customerId);


   CARAPI SetMasterLedgerAsset_SupplierId(
     /* [in] */ CSupplier.supplier CFinance.masterLedgerAsset.supplierId);

    CARAPI GetMasterLedgerAsset_SupplierId(
     /* [out] */ CSupplier.supplier* CFinance.masterLedgerAsset.supplierId);


   CARAPI SetMasterLedgerAsset_PurchOrderId(
     /* [in] */ realEstatePurchOrders CFinance.masterLedgerAsset.purchOrderId);

    CARAPI GetMasterLedgerAsset_PurchOrderId(
     /* [out] */ realEstatePurchOrders* CFinance.masterLedgerAsset.purchOrderId);


   CARAPI SetMasterLedgerAsset_MasterSalesOrderId(
     /* [in] */ CFinance.masterSalesOrder CFinance.masterLedgerAsset.masterSalesOrderId);

    CARAPI GetMasterLedgerAsset_MasterSalesOrderId(
     /* [out] */ CFinance.masterSalesOrder* CFinance.masterLedgerAsset.masterSalesOrderId);


   CARAPI SetMasterLedgerAsset_InvoiceId(
     /* [in] */ CFinance.invoice CFinance.masterLedgerAsset.invoiceId);

    CARAPI GetMasterLedgerAsset_InvoiceId(
     /* [out] */ CFinance.invoice* CFinance.masterLedgerAsset.invoiceId);


   CARAPI SetMasterLedgerAsset_BillId(
     /* [in] */ CFinance.bill CFinance.masterLedgerAsset.billId);

    CARAPI GetMasterLedgerAsset_BillId(
     /* [out] */ CFinance.bill* CFinance.masterLedgerAsset.billId);


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


   CARAPI SetLevel1Budget_Level1BudgetId(
     /* [in] */ const String& CFinance.level1Budget.level1BudgetId);

    CARAPI GetLevel1Budget_Level1BudgetId(
     /* [out] */ String* CFinance.level1Budget.level1BudgetId);


   CARAPI SetLevel1Budget_BudgetName(
     /* [in] */ const String& CFinance.level1Budget.budCARAPI GetName);

    CARAPI GetLevel1Budget_BudgetName(
     /* [out] */ String* CFinance.level1Budget.budCARAPI GetName);


   CARAPI SetLevel1Budget_EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level1Budget.endYearMonthyyyymm);

    CARAPI GetLevel1Budget_EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level1Budget.endYearMonthyyyymm);


   CARAPI SetLevel1Budget_TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level1Budget.twelveMonthSequence);

    CARAPI GetLevel1Budget_TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level1Budget.twelveMonthSequence);


   CARAPI SetLevel1Budget_IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.incomeItemTypeIds);

    CARAPI GetLevel1Budget_IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.incomeItemTypeIds);


   CARAPI SetLevel1Budget_JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.janRevenues);

    CARAPI GetLevel1Budget_JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.janRevenues);


   CARAPI SetLevel1Budget_FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.febRevenues);

    CARAPI GetLevel1Budget_FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.febRevenues);


   CARAPI SetLevel1Budget_MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.marRevenues);

    CARAPI GetLevel1Budget_MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.marRevenues);


   CARAPI SetLevel1Budget_AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.aprRevenues);

    CARAPI GetLevel1Budget_AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.aprRevenues);


   CARAPI SetLevel1Budget_MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.mayRevenues);

    CARAPI GetLevel1Budget_MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.mayRevenues);


   CARAPI SetLevel1Budget_JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.junRevenues);

    CARAPI GetLevel1Budget_JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.junRevenues);


   CARAPI SetLevel1Budget_JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.julRevenues);

    CARAPI GetLevel1Budget_JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.julRevenues);


   CARAPI SetLevel1Budget_AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.augRevenues);

    CARAPI GetLevel1Budget_AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.augRevenues);


   CARAPI SetLevel1Budget_SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.sepRevenues);

    CARAPI GetLevel1Budget_SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.sepRevenues);


   CARAPI SetLevel1Budget_OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.octRevenues);

    CARAPI GetLevel1Budget_OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.octRevenues);


   CARAPI SetLevel1Budget_NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.novRevenues);

    CARAPI GetLevel1Budget_NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.novRevenues);


   CARAPI SetLevel1Budget_DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.decRevenues);

    CARAPI GetLevel1Budget_DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.decRevenues);


   CARAPI SetLevel1Budget_JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.janItemTypeIds);

    CARAPI GetLevel1Budget_JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.janItemTypeIds);


   CARAPI SetLevel1Budget_FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.febItemTypeIds);

    CARAPI GetLevel1Budget_FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.febItemTypeIds);


   CARAPI SetLevel1Budget_MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.marItemTypeIds);

    CARAPI GetLevel1Budget_MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.marItemTypeIds);


   CARAPI SetLevel1Budget_AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.aprItemTypeIds);

    CARAPI GetLevel1Budget_AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.aprItemTypeIds);


   CARAPI SetLevel1Budget_MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.mayItemTypeIds);

    CARAPI GetLevel1Budget_MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.mayItemTypeIds);


   CARAPI SetLevel1Budget_JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.junItemTypeIds);

    CARAPI GetLevel1Budget_JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.junItemTypeIds);


   CARAPI SetLevel1Budget_JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.julItemTypeIds);

    CARAPI GetLevel1Budget_JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.julItemTypeIds);


   CARAPI SetLevel1Budget_AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.augItemTypeIds);

    CARAPI GetLevel1Budget_AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.augItemTypeIds);


   CARAPI SetLevel1Budget_SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.sepItemTypeIds);

    CARAPI GetLevel1Budget_SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.sepItemTypeIds);


   CARAPI SetLevel1Budget_OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.octItemTypeIds);

    CARAPI GetLevel1Budget_OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.octItemTypeIds);


   CARAPI SetLevel1Budget_NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.novItemTypeIds);

    CARAPI GetLevel1Budget_NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.novItemTypeIds);


   CARAPI SetLevel1Budget_DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.decItemTypeIds);

    CARAPI GetLevel1Budget_DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.decItemTypeIds);


   CARAPI SetLevel1Budget_JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.janCostsItems);

    CARAPI GetLevel1Budget_JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.janCostsItems);


   CARAPI SetLevel1Budget_FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.febCostsItems);

    CARAPI GetLevel1Budget_FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.febCostsItems);


   CARAPI SetLevel1Budget_MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.marCostsItems);

    CARAPI GetLevel1Budget_MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.marCostsItems);


   CARAPI SetLevel1Budget_AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.aprCostsItems);

    CARAPI GetLevel1Budget_AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.aprCostsItems);


   CARAPI SetLevel1Budget_MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.mayCostsItems);

    CARAPI GetLevel1Budget_MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.mayCostsItems);


   CARAPI SetLevel1Budget_JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.junCostsItems);

    CARAPI GetLevel1Budget_JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.junCostsItems);


   CARAPI SetLevel1Budget_JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.julCostsItems);

    CARAPI GetLevel1Budget_JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.julCostsItems);


   CARAPI SetLevel1Budget_AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.augCostsItems);

    CARAPI GetLevel1Budget_AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.augCostsItems);


   CARAPI SetLevel1Budget_SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.sepCostsItems);

    CARAPI GetLevel1Budget_SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.sepCostsItems);


   CARAPI SetLevel1Budget_OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.octCostsItems);

    CARAPI GetLevel1Budget_OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.octCostsItems);


   CARAPI SetLevel1Budget_NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.novCostsItems);

    CARAPI GetLevel1Budget_NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.novCostsItems);


   CARAPI SetLevel1Budget_DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.decCostsItems);

    CARAPI GetLevel1Budget_DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.decCostsItems);


   CARAPI SetLevel1Budget_JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.janJobTypeIds);

    CARAPI GetLevel1Budget_JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.janJobTypeIds);


   CARAPI SetLevel1Budget_FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.febJobTypeIds);

    CARAPI GetLevel1Budget_FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.febJobTypeIds);


   CARAPI SetLevel1Budget_MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.marJobTypeIds);

    CARAPI GetLevel1Budget_MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.marJobTypeIds);


   CARAPI SetLevel1Budget_AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.aprJobTypeIds);

    CARAPI GetLevel1Budget_AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.aprJobTypeIds);


   CARAPI SetLevel1Budget_MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.mayJobTypeIds);

    CARAPI GetLevel1Budget_MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.mayJobTypeIds);


   CARAPI SetLevel1Budget_JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.junJobTypeIds);

    CARAPI GetLevel1Budget_JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.junJobTypeIds);


   CARAPI SetLevel1Budget_JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.julJobTypeIds);

    CARAPI GetLevel1Budget_JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.julJobTypeIds);


   CARAPI SetLevel1Budget_AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.augJobTypeIds);

    CARAPI GetLevel1Budget_AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.augJobTypeIds);


   CARAPI SetLevel1Budget_SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.sepJobTypeIds);

    CARAPI GetLevel1Budget_SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.sepJobTypeIds);


   CARAPI SetLevel1Budget_OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.octJobTypeIds);

    CARAPI GetLevel1Budget_OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.octJobTypeIds);


   CARAPI SetLevel1Budget_NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.novJobTypeIds);

    CARAPI GetLevel1Budget_NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.novJobTypeIds);


   CARAPI SetLevel1Budget_DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.decJobTypeIds);

    CARAPI GetLevel1Budget_DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.decJobTypeIds);


   CARAPI SetLevel1Budget_JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.janCostsJobs);

    CARAPI GetLevel1Budget_JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.janCostsJobs);


   CARAPI SetLevel1Budget_FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.febCostsJobs);

    CARAPI GetLevel1Budget_FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.febCostsJobs);


   CARAPI SetLevel1Budget_MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.marCostsJobs);

    CARAPI GetLevel1Budget_MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.marCostsJobs);


   CARAPI SetLevel1Budget_AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.aprCostsJobs);

    CARAPI GetLevel1Budget_AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.aprCostsJobs);


   CARAPI SetLevel1Budget_MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.mayCostsJobs);

    CARAPI GetLevel1Budget_MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.mayCostsJobs);


   CARAPI SetLevel1Budget_JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.junCostsJobs);

    CARAPI GetLevel1Budget_JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.junCostsJobs);


   CARAPI SetLevel1Budget_JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.julCostsJobs);

    CARAPI GetLevel1Budget_JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.julCostsJobs);


   CARAPI SetLevel1Budget_AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.augCostsJobs);

    CARAPI GetLevel1Budget_AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.augCostsJobs);


   CARAPI SetLevel1Budget_SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.sepCostsJobs);

    CARAPI GetLevel1Budget_SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.sepCostsJobs);


   CARAPI SetLevel1Budget_OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.octCostsJobs);

    CARAPI GetLevel1Budget_OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.octCostsJobs);


   CARAPI SetLevel1Budget_NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.novCostsJobs);

    CARAPI GetLevel1Budget_NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.novCostsJobs);


   CARAPI SetLevel1Budget_DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.decCostsJobs);

    CARAPI GetLevel1Budget_DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.decCostsJobs);


   CARAPI SetLevel1Budget_JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.janServiceTypeIds);

    CARAPI GetLevel1Budget_JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.janServiceTypeIds);


   CARAPI SetLevel1Budget_FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.febServiceTypeIds);

    CARAPI GetLevel1Budget_FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.febServiceTypeIds);


   CARAPI SetLevel1Budget_MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.marServiceTypeIds);

    CARAPI GetLevel1Budget_MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.marServiceTypeIds);


   CARAPI SetLevel1Budget_AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.aprServiceTypeIds);

    CARAPI GetLevel1Budget_AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.aprServiceTypeIds);


   CARAPI SetLevel1Budget_MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.mayServiceTypeIds);

    CARAPI GetLevel1Budget_MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.mayServiceTypeIds);


   CARAPI SetLevel1Budget_JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.junServiceTypeIds);

    CARAPI GetLevel1Budget_JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.junServiceTypeIds);


   CARAPI SetLevel1Budget_JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.julServiceTypeIds);

    CARAPI GetLevel1Budget_JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.julServiceTypeIds);


   CARAPI SetLevel1Budget_AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.augServiceTypeIds);

    CARAPI GetLevel1Budget_AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.augServiceTypeIds);


   CARAPI SetLevel1Budget_SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.sepServiceTypeIds);

    CARAPI GetLevel1Budget_SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.sepServiceTypeIds);


   CARAPI SetLevel1Budget_OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.octServiceTypeIds);

    CARAPI GetLevel1Budget_OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.octServiceTypeIds);


   CARAPI SetLevel1Budget_NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.novServiceTypeIds);

    CARAPI GetLevel1Budget_NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.novServiceTypeIds);


   CARAPI SetLevel1Budget_DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level1Budget.decServiceTypeIds);

    CARAPI GetLevel1Budget_DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level1Budget.decServiceTypeIds);


   CARAPI SetLevel1Budget_JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.janCostsServices);

    CARAPI GetLevel1Budget_JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.janCostsServices);


   CARAPI SetLevel1Budget_FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.febCostsServices);

    CARAPI GetLevel1Budget_FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.febCostsServices);


   CARAPI SetLevel1Budget_MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.marCostsServices);

    CARAPI GetLevel1Budget_MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.marCostsServices);


   CARAPI SetLevel1Budget_AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.aprCostsServices);

    CARAPI GetLevel1Budget_AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.aprCostsServices);


   CARAPI SetLevel1Budget_MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.mayCostsServices);

    CARAPI GetLevel1Budget_MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.mayCostsServices);


   CARAPI SetLevel1Budget_JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.junCostsServices);

    CARAPI GetLevel1Budget_JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.junCostsServices);


   CARAPI SetLevel1Budget_JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.julCostsServices);

    CARAPI GetLevel1Budget_JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.julCostsServices);


   CARAPI SetLevel1Budget_AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.augCostsServices);

    CARAPI GetLevel1Budget_AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.augCostsServices);


   CARAPI SetLevel1Budget_SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.sepCostsServices);

    CARAPI GetLevel1Budget_SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.sepCostsServices);


   CARAPI SetLevel1Budget_OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.octCostsServices);

    CARAPI GetLevel1Budget_OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.octCostsServices);


   CARAPI SetLevel1Budget_NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.novCostsServices);

    CARAPI GetLevel1Budget_NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.novCostsServices);


   CARAPI SetLevel1Budget_DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.decCostsServices);

    CARAPI GetLevel1Budget_DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.decCostsServices);


   CARAPI SetLevel1Budget_TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level1Budget.twelveTotalMonthlyCosts);

    CARAPI GetLevel1Budget_TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level1Budget.twelveTotalMonthlyCosts);


   CARAPI SetLevel1Budget_YearCostThisBudgetId(
     /* [in] */ Double CFinance.level1Budget.yearCostThisBudgetId);

    CARAPI GetLevel1Budget_YearCostThisBudgetId(
     /* [out] */ Double* CFinance.level1Budget.yearCostThisBudgetId);


   CARAPI SetLevel1Budget_NetProfitLossThisLevel1BudgetId(
     /* [in] */ Double CFinance.level1Budget.netProfitLossThisLevel1BudgetId);

    CARAPI GetLevel1Budget_NetProfitLossThisLevel1BudgetId(
     /* [out] */ Double* CFinance.level1Budget.netProfitLossThisLevel1BudgetId);


   CARAPI SetLevel1Budget_LinkingInternalBudgetNum(
     /* [in] */ Int32 CFinance.level1Budget.linkingInternalBudgetNum);

    CARAPI GetLevel1Budget_LinkingInternalBudgetNum(
     /* [out] */ Int32* CFinance.level1Budget.linkingInternalBudgetNum);


   CARAPI SetLevel1Budget_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level1Budget.customerIds);

    CARAPI GetLevel1Budget_CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level1Budget.customerIds);


   CARAPI SetLevel1Budget_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level1Budget.propertyIds);

    CARAPI GetLevel1Budget_PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level1Budget.propertyIds);


   CARAPI SetLevel1Budget_ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level1Budget.programIds);

    CARAPI GetLevel1Budget_ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level1Budget.programIds);


   CARAPI SetLevel1Budget_ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level1Budget.projectIds);

    CARAPI GetLevel1Budget_ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level1Budget.projectIds);


   CARAPI SetLevel1Budget_LinkedToLevel2BudgetId(
     /* [in] */ CFinance.level2Budget CFinance.level1Budget.linkedToLevel2BudgetId);

    CARAPI GetLevel1Budget_LinkedToLevel2BudgetId(
     /* [out] */ CFinance.level2Budget* CFinance.level1Budget.linkedToLevel2BudgetId);


   CARAPI SetLevel1Budget_MasterAsset( SetId(
     /* [in] */ CFinance.masterAssetRegister CFinance.level1Budget.masterAssetId);

    CARAPI GetLevel1Budget_MasterAsset( SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level1Budget.masterAssetId);


   CARAPI SetLevel1Budget_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level1Budget.businessChannelOwnerId);

    CARAPI GetLevel1Budget_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level1Budget.businessChannelOwnerId);





   CARAPI SetLevel2Budget_Level2BudgetId(
     /* [in] */ const String& CFinance.level2Budget.level2BudgetId);

    CARAPI GetLevel2Budget_Level2BudgetId(
     /* [out] */ String* CFinance.level2Budget.level2BudgetId);


   CARAPI SetLevel2Budget_BudgetName(
     /* [in] */ const String& CFinance.level2Budget.budCARAPI GetName);

    CARAPI GetLevel2Budget_BudgetName(
     /* [out] */ String* CFinance.level2Budget.budCARAPI GetName);


   CARAPI SetLevel2Budget_EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level2Budget.endYearMonthyyyymm);

    CARAPI GetLevel2Budget_EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level2Budget.endYearMonthyyyymm);


   CARAPI SetLevel2Budget_TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level2Budget.twelveMonthSequence);

    CARAPI GetLevel2Budget_TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level2Budget.twelveMonthSequence);


   CARAPI SetLevel2Budget_IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.incomeItemTypeIds);

    CARAPI GetLevel2Budget_IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.incomeItemTypeIds);


   CARAPI SetLevel2Budget_JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.janRevenues);

    CARAPI GetLevel2Budget_JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.janRevenues);


   CARAPI SetLevel2Budget_FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.febRevenues);

    CARAPI GetLevel2Budget_FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.febRevenues);


   CARAPI SetLevel2Budget_MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.marRevenues);

    CARAPI GetLevel2Budget_MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.marRevenues);


   CARAPI SetLevel2Budget_AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.aprRevenues);

    CARAPI GetLevel2Budget_AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.aprRevenues);


   CARAPI SetLevel2Budget_MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.mayRevenues);

    CARAPI GetLevel2Budget_MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.mayRevenues);


   CARAPI SetLevel2Budget_JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.junRevenues);

    CARAPI GetLevel2Budget_JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.junRevenues);


   CARAPI SetLevel2Budget_JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.julRevenues);

    CARAPI GetLevel2Budget_JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.julRevenues);


   CARAPI SetLevel2Budget_AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.augRevenues);

    CARAPI GetLevel2Budget_AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.augRevenues);


   CARAPI SetLevel2Budget_SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.sepRevenues);

    CARAPI GetLevel2Budget_SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.sepRevenues);


   CARAPI SetLevel2Budget_OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.octRevenues);

    CARAPI GetLevel2Budget_OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.octRevenues);


   CARAPI SetLevel2Budget_NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.novRevenues);

    CARAPI GetLevel2Budget_NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.novRevenues);


   CARAPI SetLevel2Budget_DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.decRevenues);

    CARAPI GetLevel2Budget_DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.decRevenues);


   CARAPI SetLevel2Budget_JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.janItemTypeIds);

    CARAPI GetLevel2Budget_JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.janItemTypeIds);


   CARAPI SetLevel2Budget_FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.febItemTypeIds);

    CARAPI GetLevel2Budget_FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.febItemTypeIds);


   CARAPI SetLevel2Budget_MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.marItemTypeIds);

    CARAPI GetLevel2Budget_MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.marItemTypeIds);


   CARAPI SetLevel2Budget_AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.aprItemTypeIds);

    CARAPI GetLevel2Budget_AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.aprItemTypeIds);


   CARAPI SetLevel2Budget_MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.mayItemTypeIds);

    CARAPI GetLevel2Budget_MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.mayItemTypeIds);


   CARAPI SetLevel2Budget_JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.junItemTypeIds);

    CARAPI GetLevel2Budget_JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.junItemTypeIds);


   CARAPI SetLevel2Budget_JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.julItemTypeIds);

    CARAPI GetLevel2Budget_JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.julItemTypeIds);


   CARAPI SetLevel2Budget_AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.augItemTypeIds);

    CARAPI GetLevel2Budget_AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.augItemTypeIds);


   CARAPI SetLevel2Budget_SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.sepItemTypeIds);

    CARAPI GetLevel2Budget_SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.sepItemTypeIds);


   CARAPI SetLevel2Budget_OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.octItemTypeIds);

    CARAPI GetLevel2Budget_OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.octItemTypeIds);


   CARAPI SetLevel2Budget_NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.novItemTypeIds);

    CARAPI GetLevel2Budget_NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.novItemTypeIds);


   CARAPI SetLevel2Budget_DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.decItemTypeIds);

    CARAPI GetLevel2Budget_DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.decItemTypeIds);


   CARAPI SetLevel2Budget_JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.janCostsItems);

    CARAPI GetLevel2Budget_JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.janCostsItems);


   CARAPI SetLevel2Budget_FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.febCostsItems);

    CARAPI GetLevel2Budget_FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.febCostsItems);


   CARAPI SetLevel2Budget_MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.marCostsItems);

    CARAPI GetLevel2Budget_MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.marCostsItems);


   CARAPI SetLevel2Budget_AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.aprCostsItems);

    CARAPI GetLevel2Budget_AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.aprCostsItems);


   CARAPI SetLevel2Budget_MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.mayCostsItems);

    CARAPI GetLevel2Budget_MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.mayCostsItems);


   CARAPI SetLevel2Budget_JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.junCostsItems);

    CARAPI GetLevel2Budget_JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.junCostsItems);


   CARAPI SetLevel2Budget_JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.julCostsItems);

    CARAPI GetLevel2Budget_JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.julCostsItems);


   CARAPI SetLevel2Budget_AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.augCostsItems);

    CARAPI GetLevel2Budget_AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.augCostsItems);


   CARAPI SetLevel2Budget_SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.sepCostsItems);

    CARAPI GetLevel2Budget_SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.sepCostsItems);


   CARAPI SetLevel2Budget_OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.octCostsItems);

    CARAPI GetLevel2Budget_OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.octCostsItems);


   CARAPI SetLevel2Budget_NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.novCostsItems);

    CARAPI GetLevel2Budget_NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.novCostsItems);


   CARAPI SetLevel2Budget_DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.decCostsItems);

    CARAPI GetLevel2Budget_DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.decCostsItems);


   CARAPI SetLevel2Budget_JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.janJobTypeIds);

    CARAPI GetLevel2Budget_JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.janJobTypeIds);


   CARAPI SetLevel2Budget_FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.febJobTypeIds);

    CARAPI GetLevel2Budget_FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.febJobTypeIds);


   CARAPI SetLevel2Budget_MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.marJobTypeIds);

    CARAPI GetLevel2Budget_MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.marJobTypeIds);


   CARAPI SetLevel2Budget_AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.aprJobTypeIds);

    CARAPI GetLevel2Budget_AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.aprJobTypeIds);


   CARAPI SetLevel2Budget_MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.mayJobTypeIds);

    CARAPI GetLevel2Budget_MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.mayJobTypeIds);


   CARAPI SetLevel2Budget_JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.junJobTypeIds);

    CARAPI GetLevel2Budget_JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.junJobTypeIds);


   CARAPI SetLevel2Budget_JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.julJobTypeIds);

    CARAPI GetLevel2Budget_JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.julJobTypeIds);


   CARAPI SetLevel2Budget_AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.augJobTypeIds);

    CARAPI GetLevel2Budget_AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.augJobTypeIds);


   CARAPI SetLevel2Budget_SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.sepJobTypeIds);

    CARAPI GetLevel2Budget_SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.sepJobTypeIds);


   CARAPI SetLevel2Budget_OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.octJobTypeIds);

    CARAPI GetLevel2Budget_OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.octJobTypeIds);


   CARAPI SetLevel2Budget_NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.novJobTypeIds);

    CARAPI GetLevel2Budget_NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.novJobTypeIds);


   CARAPI SetLevel2Budget_DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.decJobTypeIds);

    CARAPI GetLevel2Budget_DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.decJobTypeIds);


   CARAPI SetLevel2Budget_JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.janCostsJobs);

    CARAPI GetLevel2Budget_JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.janCostsJobs);


   CARAPI SetLevel2Budget_FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.febCostsJobs);

    CARAPI GetLevel2Budget_FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.febCostsJobs);


   CARAPI SetLevel2Budget_MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.marCostsJobs);

    CARAPI GetLevel2Budget_MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.marCostsJobs);


   CARAPI SetLevel2Budget_AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.aprCostsJobs);

    CARAPI GetLevel2Budget_AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.aprCostsJobs);


   CARAPI SetLevel2Budget_MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.mayCostsJobs);

    CARAPI GetLevel2Budget_MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.mayCostsJobs);


   CARAPI SetLevel2Budget_JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.junCostsJobs);

    CARAPI GetLevel2Budget_JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.junCostsJobs);


   CARAPI SetLevel2Budget_JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.julCostsJobs);

    CARAPI GetLevel2Budget_JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.julCostsJobs);


   CARAPI SetLevel2Budget_AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.augCostsJobs);

    CARAPI GetLevel2Budget_AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.augCostsJobs);


   CARAPI SetLevel2Budget_SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.sepCostsJobs);

    CARAPI GetLevel2Budget_SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.sepCostsJobs);


   CARAPI SetLevel2Budget_OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.octCostsJobs);

    CARAPI GetLevel2Budget_OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.octCostsJobs);


   CARAPI SetLevel2Budget_NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.novCostsJobs);

    CARAPI GetLevel2Budget_NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.novCostsJobs);


   CARAPI SetLevel2Budget_DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.decCostsJobs);

    CARAPI GetLevel2Budget_DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.decCostsJobs);


   CARAPI SetLevel2Budget_JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.janServiceTypeIds);

    CARAPI GetLevel2Budget_JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.janServiceTypeIds);


   CARAPI SetLevel2Budget_FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.febServiceTypeIds);

    CARAPI GetLevel2Budget_FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.febServiceTypeIds);


   CARAPI SetLevel2Budget_MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.marServiceTypeIds);

    CARAPI GetLevel2Budget_MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.marServiceTypeIds);


   CARAPI SetLevel2Budget_AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.aprServiceTypeIds);

    CARAPI GetLevel2Budget_AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.aprServiceTypeIds);


   CARAPI SetLevel2Budget_MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.mayServiceTypeIds);

    CARAPI GetLevel2Budget_MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.mayServiceTypeIds);


   CARAPI SetLevel2Budget_JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.junServiceTypeIds);

    CARAPI GetLevel2Budget_JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.junServiceTypeIds);


   CARAPI SetLevel2Budget_JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.julServiceTypeIds);

    CARAPI GetLevel2Budget_JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.julServiceTypeIds);


   CARAPI SetLevel2Budget_AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.augServiceTypeIds);

    CARAPI GetLevel2Budget_AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.augServiceTypeIds);


   CARAPI SetLevel2Budget_SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.sepServiceTypeIds);

    CARAPI GetLevel2Budget_SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.sepServiceTypeIds);


   CARAPI SetLevel2Budget_OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.octServiceTypeIds);

    CARAPI GetLevel2Budget_OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.octServiceTypeIds);


   CARAPI SetLevel2Budget_NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.novServiceTypeIds);

    CARAPI GetLevel2Budget_NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.novServiceTypeIds);


   CARAPI SetLevel2Budget_DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level2Budget.decServiceTypeIds);

    CARAPI GetLevel2Budget_DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level2Budget.decServiceTypeIds);


   CARAPI SetLevel2Budget_JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.janCostsServices);

    CARAPI GetLevel2Budget_JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.janCostsServices);


   CARAPI SetLevel2Budget_FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.febCostsServices);

    CARAPI GetLevel2Budget_FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.febCostsServices);


   CARAPI SetLevel2Budget_MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.marCostsServices);

    CARAPI GetLevel2Budget_MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.marCostsServices);


   CARAPI SetLevel2Budget_AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.aprCostsServices);

    CARAPI GetLevel2Budget_AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.aprCostsServices);


   CARAPI SetLevel2Budget_MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.mayCostsServices);

    CARAPI GetLevel2Budget_MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.mayCostsServices);


   CARAPI SetLevel2Budget_JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.junCostsServices);

    CARAPI GetLevel2Budget_JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.junCostsServices);


   CARAPI SetLevel2Budget_JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.julCostsServices);

    CARAPI GetLevel2Budget_JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.julCostsServices);


   CARAPI SetLevel2Budget_AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.augCostsServices);

    CARAPI GetLevel2Budget_AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.augCostsServices);


   CARAPI SetLevel2Budget_SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.sepCostsServices);

    CARAPI GetLevel2Budget_SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.sepCostsServices);


   CARAPI SetLevel2Budget_OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.octCostsServices);

    CARAPI GetLevel2Budget_OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.octCostsServices);


   CARAPI SetLevel2Budget_NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.novCostsServices);

    CARAPI GetLevel2Budget_NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.novCostsServices);


   CARAPI SetLevel2Budget_DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.decCostsServices);

    CARAPI GetLevel2Budget_DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.decCostsServices);


   CARAPI SetLevel2Budget_TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level2Budget.twelveTotalMonthlyCosts);

    CARAPI GetLevel2Budget_TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level2Budget.twelveTotalMonthlyCosts);


   CARAPI SetLevel2Budget_YearCostThisBudgetId(
     /* [in] */ Double CFinance.level2Budget.yearCostThisBudgetId);

    CARAPI GetLevel2Budget_YearCostThisBudgetId(
     /* [out] */ Double* CFinance.level2Budget.yearCostThisBudgetId);


   CARAPI SetLevel2Budget_NetProfitLossThisLevel2BudgetId(
     /* [in] */ Double CFinance.level2Budget.netProfitLossThisLevel2BudgetId);

    CARAPI GetLevel2Budget_NetProfitLossThisLevel2BudgetId(
     /* [out] */ Double* CFinance.level2Budget.netProfitLossThisLevel2BudgetId);


   CARAPI SetLevel2Budget_LinkingInternalBudgetNum(
     /* [in] */ Int32 CFinance.level2Budget.linkingInternalBudgetNum);

    CARAPI GetLevel2Budget_LinkingInternalBudgetNum(
     /* [out] */ Int32* CFinance.level2Budget.linkingInternalBudgetNum);


   CARAPI SetLevel2Budget_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level2Budget.customerIds);

    CARAPI GetLevel2Budget_CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level2Budget.customerIds);


   CARAPI SetLevel2Budget_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level2Budget.propertyIds);

    CARAPI GetLevel2Budget_PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level2Budget.propertyIds);


   CARAPI SetLevel2Budget_ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level2Budget.programIds);

    CARAPI GetLevel2Budget_ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level2Budget.programIds);


   CARAPI SetLevel2Budget_ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level2Budget.projectIds);

    CARAPI GetLevel2Budget_ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level2Budget.projectIds);


   CARAPI SetLevel2Budget_LinkedToLevel3BudgetId(
     /* [in] */ CFinance.level3Budget CFinance.level2Budget.linkedToLevel3BudgetId);

    CARAPI GetLevel2Budget_LinkedToLevel3BudgetId(
     /* [out] */ CFinance.level3Budget* CFinance.level2Budget.linkedToLevel3BudgetId);


   CARAPI SetLevel2Budget_MasterAsset( SetId(
     /* [in] */ CFinance.masterAssetRegister CFinance.level2Budget.masterAssetId);

    CARAPI GetLevel2Budget_MasterAsset( SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level2Budget.masterAssetId);


   CARAPI SetLevel2Budget_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level2Budget.businessChannelOwnerId);

    CARAPI GetLevel2Budget_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level2Budget.businessChannelOwnerId);





   CARAPI SetLevel3Budget_Level3BudgetId(
     /* [in] */ const String& CFinance.level3Budget.level3BudgetId);

    CARAPI GetLevel3Budget_Level3BudgetId(
     /* [out] */ String* CFinance.level3Budget.level3BudgetId);


   CARAPI SetLevel3Budget_BudgetName(
     /* [in] */ const String& CFinance.level3Budget.budCARAPI GetName);

    CARAPI GetLevel3Budget_BudgetName(
     /* [out] */ String* CFinance.level3Budget.budCARAPI GetName);


   CARAPI SetLevel3Budget_EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level3Budget.endYearMonthyyyymm);

    CARAPI GetLevel3Budget_EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level3Budget.endYearMonthyyyymm);


   CARAPI SetLevel3Budget_TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level3Budget.twelveMonthSequence);

    CARAPI GetLevel3Budget_TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level3Budget.twelveMonthSequence);


   CARAPI SetLevel3Budget_IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.incomeItemTypeIds);

    CARAPI GetLevel3Budget_IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.incomeItemTypeIds);


   CARAPI SetLevel3Budget_JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.janRevenues);

    CARAPI GetLevel3Budget_JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.janRevenues);


   CARAPI SetLevel3Budget_FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.febRevenues);

    CARAPI GetLevel3Budget_FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.febRevenues);


   CARAPI SetLevel3Budget_MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.marRevenues);

    CARAPI GetLevel3Budget_MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.marRevenues);


   CARAPI SetLevel3Budget_AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.aprRevenues);

    CARAPI GetLevel3Budget_AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.aprRevenues);


   CARAPI SetLevel3Budget_MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.mayRevenues);

    CARAPI GetLevel3Budget_MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.mayRevenues);


   CARAPI SetLevel3Budget_JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.junRevenues);

    CARAPI GetLevel3Budget_JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.junRevenues);


   CARAPI SetLevel3Budget_JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.julRevenues);

    CARAPI GetLevel3Budget_JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.julRevenues);


   CARAPI SetLevel3Budget_AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.augRevenues);

    CARAPI GetLevel3Budget_AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.augRevenues);


   CARAPI SetLevel3Budget_SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.sepRevenues);

    CARAPI GetLevel3Budget_SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.sepRevenues);


   CARAPI SetLevel3Budget_OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.octRevenues);

    CARAPI GetLevel3Budget_OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.octRevenues);


   CARAPI SetLevel3Budget_NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.novRevenues);

    CARAPI GetLevel3Budget_NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.novRevenues);


   CARAPI SetLevel3Budget_DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.decRevenues);

    CARAPI GetLevel3Budget_DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.decRevenues);


   CARAPI SetLevel3Budget_JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.janItemTypeIds);

    CARAPI GetLevel3Budget_JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.janItemTypeIds);


   CARAPI SetLevel3Budget_FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.febItemTypeIds);

    CARAPI GetLevel3Budget_FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.febItemTypeIds);


   CARAPI SetLevel3Budget_MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.marItemTypeIds);

    CARAPI GetLevel3Budget_MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.marItemTypeIds);


   CARAPI SetLevel3Budget_AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.aprItemTypeIds);

    CARAPI GetLevel3Budget_AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.aprItemTypeIds);


   CARAPI SetLevel3Budget_MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.mayItemTypeIds);

    CARAPI GetLevel3Budget_MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.mayItemTypeIds);


   CARAPI SetLevel3Budget_JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.junItemTypeIds);

    CARAPI GetLevel3Budget_JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.junItemTypeIds);


   CARAPI SetLevel3Budget_JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.julItemTypeIds);

    CARAPI GetLevel3Budget_JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.julItemTypeIds);


   CARAPI SetLevel3Budget_AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.augItemTypeIds);

    CARAPI GetLevel3Budget_AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.augItemTypeIds);


   CARAPI SetLevel3Budget_SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.sepItemTypeIds);

    CARAPI GetLevel3Budget_SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.sepItemTypeIds);


   CARAPI SetLevel3Budget_OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.octItemTypeIds);

    CARAPI GetLevel3Budget_OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.octItemTypeIds);


   CARAPI SetLevel3Budget_NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.novItemTypeIds);

    CARAPI GetLevel3Budget_NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.novItemTypeIds);


   CARAPI SetLevel3Budget_DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.decItemTypeIds);

    CARAPI GetLevel3Budget_DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.decItemTypeIds);


   CARAPI SetLevel3Budget_JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.janCostsItems);

    CARAPI GetLevel3Budget_JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.janCostsItems);


   CARAPI SetLevel3Budget_FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.febCostsItems);

    CARAPI GetLevel3Budget_FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.febCostsItems);


   CARAPI SetLevel3Budget_MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.marCostsItems);

    CARAPI GetLevel3Budget_MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.marCostsItems);


   CARAPI SetLevel3Budget_AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.aprCostsItems);

    CARAPI GetLevel3Budget_AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.aprCostsItems);


   CARAPI SetLevel3Budget_MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.mayCostsItems);

    CARAPI GetLevel3Budget_MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.mayCostsItems);


   CARAPI SetLevel3Budget_JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.junCostsItems);

    CARAPI GetLevel3Budget_JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.junCostsItems);


   CARAPI SetLevel3Budget_JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.julCostsItems);

    CARAPI GetLevel3Budget_JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.julCostsItems);


   CARAPI SetLevel3Budget_AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.augCostsItems);

    CARAPI GetLevel3Budget_AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.augCostsItems);


   CARAPI SetLevel3Budget_SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.sepCostsItems);

    CARAPI GetLevel3Budget_SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.sepCostsItems);


   CARAPI SetLevel3Budget_OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.octCostsItems);

    CARAPI GetLevel3Budget_OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.octCostsItems);


   CARAPI SetLevel3Budget_NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.novCostsItems);

    CARAPI GetLevel3Budget_NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.novCostsItems);


   CARAPI SetLevel3Budget_DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.decCostsItems);

    CARAPI GetLevel3Budget_DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.decCostsItems);


   CARAPI SetLevel3Budget_JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.janJobTypeIds);

    CARAPI GetLevel3Budget_JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.janJobTypeIds);


   CARAPI SetLevel3Budget_FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.febJobTypeIds);

    CARAPI GetLevel3Budget_FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.febJobTypeIds);


   CARAPI SetLevel3Budget_MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.marJobTypeIds);

    CARAPI GetLevel3Budget_MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.marJobTypeIds);


   CARAPI SetLevel3Budget_AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.aprJobTypeIds);

    CARAPI GetLevel3Budget_AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.aprJobTypeIds);


   CARAPI SetLevel3Budget_MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.mayJobTypeIds);

    CARAPI GetLevel3Budget_MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.mayJobTypeIds);


   CARAPI SetLevel3Budget_JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.junJobTypeIds);

    CARAPI GetLevel3Budget_JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.junJobTypeIds);


   CARAPI SetLevel3Budget_JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.julJobTypeIds);

    CARAPI GetLevel3Budget_JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.julJobTypeIds);


   CARAPI SetLevel3Budget_AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.augJobTypeIds);

    CARAPI GetLevel3Budget_AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.augJobTypeIds);


   CARAPI SetLevel3Budget_SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.sepJobTypeIds);

    CARAPI GetLevel3Budget_SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.sepJobTypeIds);


   CARAPI SetLevel3Budget_OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.octJobTypeIds);

    CARAPI GetLevel3Budget_OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.octJobTypeIds);


   CARAPI SetLevel3Budget_NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.novJobTypeIds);

    CARAPI GetLevel3Budget_NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.novJobTypeIds);


   CARAPI SetLevel3Budget_DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.decJobTypeIds);

    CARAPI GetLevel3Budget_DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.decJobTypeIds);


   CARAPI SetLevel3Budget_JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.janCostsJobs);

    CARAPI GetLevel3Budget_JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.janCostsJobs);


   CARAPI SetLevel3Budget_FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.febCostsJobs);

    CARAPI GetLevel3Budget_FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.febCostsJobs);


   CARAPI SetLevel3Budget_MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.marCostsJobs);

    CARAPI GetLevel3Budget_MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.marCostsJobs);


   CARAPI SetLevel3Budget_AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.aprCostsJobs);

    CARAPI GetLevel3Budget_AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.aprCostsJobs);


   CARAPI SetLevel3Budget_MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.mayCostsJobs);

    CARAPI GetLevel3Budget_MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.mayCostsJobs);


   CARAPI SetLevel3Budget_JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.junCostsJobs);

    CARAPI GetLevel3Budget_JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.junCostsJobs);


   CARAPI SetLevel3Budget_JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.julCostsJobs);

    CARAPI GetLevel3Budget_JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.julCostsJobs);


   CARAPI SetLevel3Budget_AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.augCostsJobs);

    CARAPI GetLevel3Budget_AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.augCostsJobs);


   CARAPI SetLevel3Budget_SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.sepCostsJobs);

    CARAPI GetLevel3Budget_SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.sepCostsJobs);


   CARAPI SetLevel3Budget_OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.octCostsJobs);

    CARAPI GetLevel3Budget_OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.octCostsJobs);


   CARAPI SetLevel3Budget_NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.novCostsJobs);

    CARAPI GetLevel3Budget_NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.novCostsJobs);


   CARAPI SetLevel3Budget_DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.decCostsJobs);

    CARAPI GetLevel3Budget_DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.decCostsJobs);


   CARAPI SetLevel3Budget_JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.janServiceTypeIds);

    CARAPI GetLevel3Budget_JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.janServiceTypeIds);


   CARAPI SetLevel3Budget_FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.febServiceTypeIds);

    CARAPI GetLevel3Budget_FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.febServiceTypeIds);


   CARAPI SetLevel3Budget_MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.marServiceTypeIds);

    CARAPI GetLevel3Budget_MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.marServiceTypeIds);


   CARAPI SetLevel3Budget_AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.aprServiceTypeIds);

    CARAPI GetLevel3Budget_AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.aprServiceTypeIds);


   CARAPI SetLevel3Budget_MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.mayServiceTypeIds);

    CARAPI GetLevel3Budget_MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.mayServiceTypeIds);


   CARAPI SetLevel3Budget_JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.junServiceTypeIds);

    CARAPI GetLevel3Budget_JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.junServiceTypeIds);


   CARAPI SetLevel3Budget_JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.julServiceTypeIds);

    CARAPI GetLevel3Budget_JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.julServiceTypeIds);


   CARAPI SetLevel3Budget_AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.augServiceTypeIds);

    CARAPI GetLevel3Budget_AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.augServiceTypeIds);


   CARAPI SetLevel3Budget_SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.sepServiceTypeIds);

    CARAPI GetLevel3Budget_SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.sepServiceTypeIds);


   CARAPI SetLevel3Budget_OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.octServiceTypeIds);

    CARAPI GetLevel3Budget_OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.octServiceTypeIds);


   CARAPI SetLevel3Budget_NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.novServiceTypeIds);

    CARAPI GetLevel3Budget_NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.novServiceTypeIds);


   CARAPI SetLevel3Budget_DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level3Budget.decServiceTypeIds);

    CARAPI GetLevel3Budget_DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level3Budget.decServiceTypeIds);


   CARAPI SetLevel3Budget_JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.janCostsServices);

    CARAPI GetLevel3Budget_JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.janCostsServices);


   CARAPI SetLevel3Budget_FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.febCostsServices);

    CARAPI GetLevel3Budget_FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.febCostsServices);


   CARAPI SetLevel3Budget_MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.marCostsServices);

    CARAPI GetLevel3Budget_MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.marCostsServices);


   CARAPI SetLevel3Budget_AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.aprCostsServices);

    CARAPI GetLevel3Budget_AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.aprCostsServices);


   CARAPI SetLevel3Budget_MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.mayCostsServices);

    CARAPI GetLevel3Budget_MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.mayCostsServices);


   CARAPI SetLevel3Budget_JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.junCostsServices);

    CARAPI GetLevel3Budget_JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.junCostsServices);


   CARAPI SetLevel3Budget_JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.julCostsServices);

    CARAPI GetLevel3Budget_JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.julCostsServices);


   CARAPI SetLevel3Budget_AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.augCostsServices);

    CARAPI GetLevel3Budget_AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.augCostsServices);


   CARAPI SetLevel3Budget_SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.sepCostsServices);

    CARAPI GetLevel3Budget_SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.sepCostsServices);


   CARAPI SetLevel3Budget_OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.octCostsServices);

    CARAPI GetLevel3Budget_OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.octCostsServices);


   CARAPI SetLevel3Budget_NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.novCostsServices);

    CARAPI GetLevel3Budget_NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.novCostsServices);


   CARAPI SetLevel3Budget_DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.decCostsServices);

    CARAPI GetLevel3Budget_DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.decCostsServices);


   CARAPI SetLevel3Budget_TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level3Budget.twelveTotalMonthlyCosts);

    CARAPI GetLevel3Budget_TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level3Budget.twelveTotalMonthlyCosts);


   CARAPI SetLevel3Budget_YearCostThisBudgetId(
     /* [in] */ Double CFinance.level3Budget.yearCostThisBudgetId);

    CARAPI GetLevel3Budget_YearCostThisBudgetId(
     /* [out] */ Double* CFinance.level3Budget.yearCostThisBudgetId);


   CARAPI SetLevel3Budget_NetProfitLossThisLevel3BudgetId(
     /* [in] */ Double CFinance.level3Budget.netProfitLossThisLevel3BudgetId);

    CARAPI GetLevel3Budget_NetProfitLossThisLevel3BudgetId(
     /* [out] */ Double* CFinance.level3Budget.netProfitLossThisLevel3BudgetId);


   CARAPI SetLevel3Budget_LinkingInternalBudgetNum(
     /* [in] */ Int32 CFinance.level3Budget.linkingInternalBudgetNum);

    CARAPI GetLevel3Budget_LinkingInternalBudgetNum(
     /* [out] */ Int32* CFinance.level3Budget.linkingInternalBudgetNum);


   CARAPI SetLevel3Budget_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level3Budget.customerIds);

    CARAPI GetLevel3Budget_CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level3Budget.customerIds);


   CARAPI SetLevel3Budget_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level3Budget.propertyIds);

    CARAPI GetLevel3Budget_PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level3Budget.propertyIds);


   CARAPI SetLevel3Budget_ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level3Budget.programIds);

    CARAPI GetLevel3Budget_ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level3Budget.programIds);


   CARAPI SetLevel3Budget_ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level3Budget.projectIds);

    CARAPI GetLevel3Budget_ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level3Budget.projectIds);


   CARAPI SetLevel3Budget_LinkedToLevel4BudgetId(
     /* [in] */ CFinance.level4Budget CFinance.level3Budget.linkedToLevel4BudgetId);

    CARAPI GetLevel3Budget_LinkedToLevel4BudgetId(
     /* [out] */ CFinance.level4Budget* CFinance.level3Budget.linkedToLevel4BudgetId);


   CARAPI SetLevel3Budget_MasterAsset( SetId(
     /* [in] */ CFinance.masterAssetRegister CFinance.level3Budget.masterAssetId);

    CARAPI GetLevel3Budget_MasterAsset( SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level3Budget.masterAssetId);


   CARAPI SetLevel3Budget_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level3Budget.businessChannelOwnerId);

    CARAPI GetLevel3Budget_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level3Budget.businessChannelOwnerId);





   CARAPI SetLevel4Budget_Level4BudgetId(
     /* [in] */ const String& CFinance.level4Budget.level4BudgetId);

    CARAPI GetLevel4Budget_Level4BudgetId(
     /* [out] */ String* CFinance.level4Budget.level4BudgetId);


   CARAPI SetLevel4Budget_BudgetName(
     /* [in] */ const String& CFinance.level4Budget.budCARAPI GetName);

    CARAPI GetLevel4Budget_BudgetName(
     /* [out] */ String* CFinance.level4Budget.budCARAPI GetName);


   CARAPI SetLevel4Budget_EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level4Budget.endYearMonthyyyymm);

    CARAPI GetLevel4Budget_EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level4Budget.endYearMonthyyyymm);


   CARAPI SetLevel4Budget_TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level4Budget.twelveMonthSequence);

    CARAPI GetLevel4Budget_TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level4Budget.twelveMonthSequence);


   CARAPI SetLevel4Budget_IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.incomeItemTypeIds);

    CARAPI GetLevel4Budget_IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.incomeItemTypeIds);


   CARAPI SetLevel4Budget_JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.janRevenues);

    CARAPI GetLevel4Budget_JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.janRevenues);


   CARAPI SetLevel4Budget_FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.febRevenues);

    CARAPI GetLevel4Budget_FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.febRevenues);


   CARAPI SetLevel4Budget_MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.marRevenues);

    CARAPI GetLevel4Budget_MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.marRevenues);


   CARAPI SetLevel4Budget_AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.aprRevenues);

    CARAPI GetLevel4Budget_AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.aprRevenues);


   CARAPI SetLevel4Budget_MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.mayRevenues);

    CARAPI GetLevel4Budget_MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.mayRevenues);


   CARAPI SetLevel4Budget_JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.junRevenues);

    CARAPI GetLevel4Budget_JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.junRevenues);


   CARAPI SetLevel4Budget_JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.julRevenues);

    CARAPI GetLevel4Budget_JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.julRevenues);


   CARAPI SetLevel4Budget_AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.augRevenues);

    CARAPI GetLevel4Budget_AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.augRevenues);


   CARAPI SetLevel4Budget_SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.sepRevenues);

    CARAPI GetLevel4Budget_SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.sepRevenues);


   CARAPI SetLevel4Budget_OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.octRevenues);

    CARAPI GetLevel4Budget_OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.octRevenues);


   CARAPI SetLevel4Budget_NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.novRevenues);

    CARAPI GetLevel4Budget_NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.novRevenues);


   CARAPI SetLevel4Budget_DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.decRevenues);

    CARAPI GetLevel4Budget_DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.decRevenues);


   CARAPI SetLevel4Budget_JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.janItemTypeIds);

    CARAPI GetLevel4Budget_JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.janItemTypeIds);


   CARAPI SetLevel4Budget_FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.febItemTypeIds);

    CARAPI GetLevel4Budget_FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.febItemTypeIds);


   CARAPI SetLevel4Budget_MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.marItemTypeIds);

    CARAPI GetLevel4Budget_MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.marItemTypeIds);


   CARAPI SetLevel4Budget_AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.aprItemTypeIds);

    CARAPI GetLevel4Budget_AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.aprItemTypeIds);


   CARAPI SetLevel4Budget_MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.mayItemTypeIds);

    CARAPI GetLevel4Budget_MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.mayItemTypeIds);


   CARAPI SetLevel4Budget_JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.junItemTypeIds);

    CARAPI GetLevel4Budget_JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.junItemTypeIds);


   CARAPI SetLevel4Budget_JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.julItemTypeIds);

    CARAPI GetLevel4Budget_JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.julItemTypeIds);


   CARAPI SetLevel4Budget_AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.augItemTypeIds);

    CARAPI GetLevel4Budget_AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.augItemTypeIds);


   CARAPI SetLevel4Budget_SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.sepItemTypeIds);

    CARAPI GetLevel4Budget_SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.sepItemTypeIds);


   CARAPI SetLevel4Budget_OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.octItemTypeIds);

    CARAPI GetLevel4Budget_OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.octItemTypeIds);


   CARAPI SetLevel4Budget_NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.novItemTypeIds);

    CARAPI GetLevel4Budget_NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.novItemTypeIds);


   CARAPI SetLevel4Budget_DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.decItemTypeIds);

    CARAPI GetLevel4Budget_DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.decItemTypeIds);


   CARAPI SetLevel4Budget_JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.janCostsItems);

    CARAPI GetLevel4Budget_JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.janCostsItems);


   CARAPI SetLevel4Budget_FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.febCostsItems);

    CARAPI GetLevel4Budget_FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.febCostsItems);


   CARAPI SetLevel4Budget_MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.marCostsItems);

    CARAPI GetLevel4Budget_MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.marCostsItems);


   CARAPI SetLevel4Budget_AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.aprCostsItems);

    CARAPI GetLevel4Budget_AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.aprCostsItems);


   CARAPI SetLevel4Budget_MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.mayCostsItems);

    CARAPI GetLevel4Budget_MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.mayCostsItems);


   CARAPI SetLevel4Budget_JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.junCostsItems);

    CARAPI GetLevel4Budget_JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.junCostsItems);


   CARAPI SetLevel4Budget_JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.julCostsItems);

    CARAPI GetLevel4Budget_JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.julCostsItems);


   CARAPI SetLevel4Budget_AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.augCostsItems);

    CARAPI GetLevel4Budget_AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.augCostsItems);


   CARAPI SetLevel4Budget_SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.sepCostsItems);

    CARAPI GetLevel4Budget_SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.sepCostsItems);


   CARAPI SetLevel4Budget_OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.octCostsItems);

    CARAPI GetLevel4Budget_OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.octCostsItems);


   CARAPI SetLevel4Budget_NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.novCostsItems);

    CARAPI GetLevel4Budget_NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.novCostsItems);


   CARAPI SetLevel4Budget_DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.decCostsItems);

    CARAPI GetLevel4Budget_DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.decCostsItems);


   CARAPI SetLevel4Budget_JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.janJobTypeIds);

    CARAPI GetLevel4Budget_JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.janJobTypeIds);


   CARAPI SetLevel4Budget_FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.febJobTypeIds);

    CARAPI GetLevel4Budget_FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.febJobTypeIds);


   CARAPI SetLevel4Budget_MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.marJobTypeIds);

    CARAPI GetLevel4Budget_MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.marJobTypeIds);


   CARAPI SetLevel4Budget_AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.aprJobTypeIds);

    CARAPI GetLevel4Budget_AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.aprJobTypeIds);


   CARAPI SetLevel4Budget_MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.mayJobTypeIds);

    CARAPI GetLevel4Budget_MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.mayJobTypeIds);


   CARAPI SetLevel4Budget_JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.junJobTypeIds);

    CARAPI GetLevel4Budget_JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.junJobTypeIds);


   CARAPI SetLevel4Budget_JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.julJobTypeIds);

    CARAPI GetLevel4Budget_JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.julJobTypeIds);


   CARAPI SetLevel4Budget_AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.augJobTypeIds);

    CARAPI GetLevel4Budget_AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.augJobTypeIds);


   CARAPI SetLevel4Budget_SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.sepJobTypeIds);

    CARAPI GetLevel4Budget_SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.sepJobTypeIds);


   CARAPI SetLevel4Budget_OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.octJobTypeIds);

    CARAPI GetLevel4Budget_OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.octJobTypeIds);


   CARAPI SetLevel4Budget_NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.novJobTypeIds);

    CARAPI GetLevel4Budget_NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.novJobTypeIds);


   CARAPI SetLevel4Budget_DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.decJobTypeIds);

    CARAPI GetLevel4Budget_DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.decJobTypeIds);


   CARAPI SetLevel4Budget_JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.janCostsJobs);

    CARAPI GetLevel4Budget_JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.janCostsJobs);


   CARAPI SetLevel4Budget_FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.febCostsJobs);

    CARAPI GetLevel4Budget_FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.febCostsJobs);


   CARAPI SetLevel4Budget_MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.marCostsJobs);

    CARAPI GetLevel4Budget_MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.marCostsJobs);


   CARAPI SetLevel4Budget_AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.aprCostsJobs);

    CARAPI GetLevel4Budget_AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.aprCostsJobs);


   CARAPI SetLevel4Budget_MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.mayCostsJobs);

    CARAPI GetLevel4Budget_MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.mayCostsJobs);


   CARAPI SetLevel4Budget_JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.junCostsJobs);

    CARAPI GetLevel4Budget_JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.junCostsJobs);


   CARAPI SetLevel4Budget_JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.julCostsJobs);

    CARAPI GetLevel4Budget_JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.julCostsJobs);


   CARAPI SetLevel4Budget_AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.augCostsJobs);

    CARAPI GetLevel4Budget_AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.augCostsJobs);


   CARAPI SetLevel4Budget_SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.sepCostsJobs);

    CARAPI GetLevel4Budget_SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.sepCostsJobs);


   CARAPI SetLevel4Budget_OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.octCostsJobs);

    CARAPI GetLevel4Budget_OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.octCostsJobs);


   CARAPI SetLevel4Budget_NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.novCostsJobs);

    CARAPI GetLevel4Budget_NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.novCostsJobs);


   CARAPI SetLevel4Budget_DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.decCostsJobs);

    CARAPI GetLevel4Budget_DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.decCostsJobs);


   CARAPI SetLevel4Budget_JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.janServiceTypeIds);

    CARAPI GetLevel4Budget_JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.janServiceTypeIds);


   CARAPI SetLevel4Budget_FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.febServiceTypeIds);

    CARAPI GetLevel4Budget_FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.febServiceTypeIds);


   CARAPI SetLevel4Budget_MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.marServiceTypeIds);

    CARAPI GetLevel4Budget_MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.marServiceTypeIds);


   CARAPI SetLevel4Budget_AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.aprServiceTypeIds);

    CARAPI GetLevel4Budget_AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.aprServiceTypeIds);


   CARAPI SetLevel4Budget_MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.mayServiceTypeIds);

    CARAPI GetLevel4Budget_MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.mayServiceTypeIds);


   CARAPI SetLevel4Budget_JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.junServiceTypeIds);

    CARAPI GetLevel4Budget_JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.junServiceTypeIds);


   CARAPI SetLevel4Budget_JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.julServiceTypeIds);

    CARAPI GetLevel4Budget_JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.julServiceTypeIds);


   CARAPI SetLevel4Budget_AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.augServiceTypeIds);

    CARAPI GetLevel4Budget_AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.augServiceTypeIds);


   CARAPI SetLevel4Budget_SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.sepServiceTypeIds);

    CARAPI GetLevel4Budget_SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.sepServiceTypeIds);


   CARAPI SetLevel4Budget_OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.octServiceTypeIds);

    CARAPI GetLevel4Budget_OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.octServiceTypeIds);


   CARAPI SetLevel4Budget_NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.novServiceTypeIds);

    CARAPI GetLevel4Budget_NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.novServiceTypeIds);


   CARAPI SetLevel4Budget_DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level4Budget.decServiceTypeIds);

    CARAPI GetLevel4Budget_DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level4Budget.decServiceTypeIds);


   CARAPI SetLevel4Budget_JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.janCostsServices);

    CARAPI GetLevel4Budget_JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.janCostsServices);


   CARAPI SetLevel4Budget_FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.febCostsServices);

    CARAPI GetLevel4Budget_FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.febCostsServices);


   CARAPI SetLevel4Budget_MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.marCostsServices);

    CARAPI GetLevel4Budget_MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.marCostsServices);


   CARAPI SetLevel4Budget_AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.aprCostsServices);

    CARAPI GetLevel4Budget_AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.aprCostsServices);


   CARAPI SetLevel4Budget_MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.mayCostsServices);

    CARAPI GetLevel4Budget_MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.mayCostsServices);


   CARAPI SetLevel4Budget_JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.junCostsServices);

    CARAPI GetLevel4Budget_JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.junCostsServices);


   CARAPI SetLevel4Budget_JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.julCostsServices);

    CARAPI GetLevel4Budget_JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.julCostsServices);


   CARAPI SetLevel4Budget_AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.augCostsServices);

    CARAPI GetLevel4Budget_AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.augCostsServices);


   CARAPI SetLevel4Budget_SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.sepCostsServices);

    CARAPI GetLevel4Budget_SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.sepCostsServices);


   CARAPI SetLevel4Budget_OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.octCostsServices);

    CARAPI GetLevel4Budget_OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.octCostsServices);


   CARAPI SetLevel4Budget_NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.novCostsServices);

    CARAPI GetLevel4Budget_NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.novCostsServices);


   CARAPI SetLevel4Budget_DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.decCostsServices);

    CARAPI GetLevel4Budget_DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.decCostsServices);


   CARAPI SetLevel4Budget_TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level4Budget.twelveTotalMonthlyCosts);

    CARAPI GetLevel4Budget_TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level4Budget.twelveTotalMonthlyCosts);


   CARAPI SetLevel4Budget_YearCostThisBudgetId(
     /* [in] */ Double CFinance.level4Budget.yearCostThisBudgetId);

    CARAPI GetLevel4Budget_YearCostThisBudgetId(
     /* [out] */ Double* CFinance.level4Budget.yearCostThisBudgetId);


   CARAPI SetLevel4Budget_NetProfitLossThisLevel4BudgetId(
     /* [in] */ Double CFinance.level4Budget.netProfitLossThisLevel4BudgetId);

    CARAPI GetLevel4Budget_NetProfitLossThisLevel4BudgetId(
     /* [out] */ Double* CFinance.level4Budget.netProfitLossThisLevel4BudgetId);


   CARAPI SetLevel4Budget_LinkingInternalBudgetNum(
     /* [in] */ Int32 CFinance.level4Budget.linkingInternalBudgetNum);

    CARAPI GetLevel4Budget_LinkingInternalBudgetNum(
     /* [out] */ Int32* CFinance.level4Budget.linkingInternalBudgetNum);


   CARAPI SetLevel4Budget_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level4Budget.customerIds);

    CARAPI GetLevel4Budget_CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level4Budget.customerIds);


   CARAPI SetLevel4Budget_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level4Budget.propertyIds);

    CARAPI GetLevel4Budget_PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level4Budget.propertyIds);


   CARAPI SetLevel4Budget_ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level4Budget.programIds);

    CARAPI GetLevel4Budget_ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level4Budget.programIds);


   CARAPI SetLevel4Budget_ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level4Budget.projectIds);

    CARAPI GetLevel4Budget_ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level4Budget.projectIds);


   CARAPI SetLevel4Budget_LinkedToLevel5BudgetId(
     /* [in] */ CFinance.level5Budget CFinance.level4Budget.linkedToLevel5BudgetId);

    CARAPI GetLevel4Budget_LinkedToLevel5BudgetId(
     /* [out] */ CFinance.level5Budget* CFinance.level4Budget.linkedToLevel5BudgetId);


   CARAPI SetLevel4Budget_MasterAsset( SetId(
     /* [in] */ CFinance.masterAssetRegister CFinance.level4Budget.masterAssetId);

    CARAPI GetLevel4Budget_MasterAsset( SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level4Budget.masterAssetId);


   CARAPI SetLevel4Budget_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level4Budget.businessChannelOwnerId);

    CARAPI GetLevel4Budget_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level4Budget.businessChannelOwnerId);


   CARAPI SetLevel5Budget_Level5BudgetId(
     /* [in] */ const String& CFinance.level5Budget.level5BudgetId);

    CARAPI GetLevel5Budget_Level5BudgetId(
     /* [out] */ String* CFinance.level5Budget.level5BudgetId);


   CARAPI SetLevel5Budget_BudgetName(
     /* [in] */ const String& CFinance.level5Budget.budCARAPI GetName);

    CARAPI GetLevel5Budget_BudgetName(
     /* [out] */ String* CFinance.level5Budget.budCARAPI GetName);


   CARAPI SetLevel5Budget_EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level5Budget.endYearMonthyyyymm);

    CARAPI GetLevel5Budget_EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level5Budget.endYearMonthyyyymm);


   CARAPI SetLevel5Budget_TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level5Budget.twelveMonthSequence);

    CARAPI GetLevel5Budget_TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level5Budget.twelveMonthSequence);


   CARAPI SetLevel5Budget_IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.incomeItemTypeIds);

    CARAPI GetLevel5Budget_IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.incomeItemTypeIds);


   CARAPI SetLevel5Budget_JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.janRevenues);

    CARAPI GetLevel5Budget_JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.janRevenues);


   CARAPI SetLevel5Budget_FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.febRevenues);

    CARAPI GetLevel5Budget_FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.febRevenues);


   CARAPI SetLevel5Budget_MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.marRevenues);

    CARAPI GetLevel5Budget_MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.marRevenues);


   CARAPI SetLevel5Budget_AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.aprRevenues);

    CARAPI GetLevel5Budget_AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.aprRevenues);


   CARAPI SetLevel5Budget_MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.mayRevenues);

    CARAPI GetLevel5Budget_MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.mayRevenues);


   CARAPI SetLevel5Budget_JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.junRevenues);

    CARAPI GetLevel5Budget_JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.junRevenues);


   CARAPI SetLevel5Budget_JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.julRevenues);

    CARAPI GetLevel5Budget_JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.julRevenues);


   CARAPI SetLevel5Budget_AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.augRevenues);

    CARAPI GetLevel5Budget_AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.augRevenues);


   CARAPI SetLevel5Budget_SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.sepRevenues);

    CARAPI GetLevel5Budget_SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.sepRevenues);


   CARAPI SetLevel5Budget_OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.octRevenues);

    CARAPI GetLevel5Budget_OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.octRevenues);


   CARAPI SetLevel5Budget_NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.novRevenues);

    CARAPI GetLevel5Budget_NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.novRevenues);


   CARAPI SetLevel5Budget_DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.decRevenues);

    CARAPI GetLevel5Budget_DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.decRevenues);


   CARAPI SetLevel5Budget_JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.janItemTypeIds);

    CARAPI GetLevel5Budget_JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.janItemTypeIds);


   CARAPI SetLevel5Budget_FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.febItemTypeIds);

    CARAPI GetLevel5Budget_FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.febItemTypeIds);


   CARAPI SetLevel5Budget_MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.marItemTypeIds);

    CARAPI GetLevel5Budget_MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.marItemTypeIds);


   CARAPI SetLevel5Budget_AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.aprItemTypeIds);

    CARAPI GetLevel5Budget_AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.aprItemTypeIds);


   CARAPI SetLevel5Budget_MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.mayItemTypeIds);

    CARAPI GetLevel5Budget_MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.mayItemTypeIds);


   CARAPI SetLevel5Budget_JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.junItemTypeIds);

    CARAPI GetLevel5Budget_JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.junItemTypeIds);


   CARAPI SetLevel5Budget_JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.julItemTypeIds);

    CARAPI GetLevel5Budget_JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.julItemTypeIds);


   CARAPI SetLevel5Budget_AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.augItemTypeIds);

    CARAPI GetLevel5Budget_AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.augItemTypeIds);


   CARAPI SetLevel5Budget_SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.sepItemTypeIds);

    CARAPI GetLevel5Budget_SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.sepItemTypeIds);


   CARAPI SetLevel5Budget_OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.octItemTypeIds);

    CARAPI GetLevel5Budget_OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.octItemTypeIds);


   CARAPI SetLevel5Budget_NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.novItemTypeIds);

    CARAPI GetLevel5Budget_NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.novItemTypeIds);


   CARAPI SetLevel5Budget_DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.decItemTypeIds);

    CARAPI GetLevel5Budget_DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.decItemTypeIds);


   CARAPI SetLevel5Budget_JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.janCostsItems);

    CARAPI GetLevel5Budget_JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.janCostsItems);


   CARAPI SetLevel5Budget_FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.febCostsItems);

    CARAPI GetLevel5Budget_FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.febCostsItems);


   CARAPI SetLevel5Budget_MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.marCostsItems);

    CARAPI GetLevel5Budget_MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.marCostsItems);


   CARAPI SetLevel5Budget_AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.aprCostsItems);

    CARAPI GetLevel5Budget_AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.aprCostsItems);


   CARAPI SetLevel5Budget_MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.mayCostsItems);

    CARAPI GetLevel5Budget_MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.mayCostsItems);


   CARAPI SetLevel5Budget_JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.junCostsItems);

    CARAPI GetLevel5Budget_JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.junCostsItems);


   CARAPI SetLevel5Budget_JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.julCostsItems);

    CARAPI GetLevel5Budget_JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.julCostsItems);


   CARAPI SetLevel5Budget_AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.augCostsItems);

    CARAPI GetLevel5Budget_AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.augCostsItems);


   CARAPI SetLevel5Budget_SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.sepCostsItems);

    CARAPI GetLevel5Budget_SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.sepCostsItems);


   CARAPI SetLevel5Budget_OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.octCostsItems);

    CARAPI GetLevel5Budget_OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.octCostsItems);


   CARAPI SetLevel5Budget_NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.novCostsItems);

    CARAPI GetLevel5Budget_NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.novCostsItems);


   CARAPI SetLevel5Budget_DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.decCostsItems);

    CARAPI GetLevel5Budget_DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.decCostsItems);


   CARAPI SetLevel5Budget_JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.janJobTypeIds);

    CARAPI GetLevel5Budget_JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.janJobTypeIds);


   CARAPI SetLevel5Budget_FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.febJobTypeIds);

    CARAPI GetLevel5Budget_FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.febJobTypeIds);


   CARAPI SetLevel5Budget_MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.marJobTypeIds);

    CARAPI GetLevel5Budget_MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.marJobTypeIds);


   CARAPI SetLevel5Budget_AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.aprJobTypeIds);

    CARAPI GetLevel5Budget_AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.aprJobTypeIds);


   CARAPI SetLevel5Budget_MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.mayJobTypeIds);

    CARAPI GetLevel5Budget_MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.mayJobTypeIds);


   CARAPI SetLevel5Budget_JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.junJobTypeIds);

    CARAPI GetLevel5Budget_JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.junJobTypeIds);


   CARAPI SetLevel5Budget_JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.julJobTypeIds);

    CARAPI GetLevel5Budget_JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.julJobTypeIds);


   CARAPI SetLevel5Budget_AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.augJobTypeIds);

    CARAPI GetLevel5Budget_AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.augJobTypeIds);


   CARAPI SetLevel5Budget_SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.sepJobTypeIds);

    CARAPI GetLevel5Budget_SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.sepJobTypeIds);


   CARAPI SetLevel5Budget_OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.octJobTypeIds);

    CARAPI GetLevel5Budget_OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.octJobTypeIds);


   CARAPI SetLevel5Budget_NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.novJobTypeIds);

    CARAPI GetLevel5Budget_NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.novJobTypeIds);


   CARAPI SetLevel5Budget_DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.decJobTypeIds);

    CARAPI GetLevel5Budget_DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.decJobTypeIds);


   CARAPI SetLevel5Budget_JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.janCostsJobs);

    CARAPI GetLevel5Budget_JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.janCostsJobs);


   CARAPI SetLevel5Budget_FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.febCostsJobs);

    CARAPI GetLevel5Budget_FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.febCostsJobs);


   CARAPI SetLevel5Budget_MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.marCostsJobs);

    CARAPI GetLevel5Budget_MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.marCostsJobs);


   CARAPI SetLevel5Budget_AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.aprCostsJobs);

    CARAPI GetLevel5Budget_AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.aprCostsJobs);


   CARAPI SetLevel5Budget_MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.mayCostsJobs);

    CARAPI GetLevel5Budget_MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.mayCostsJobs);


   CARAPI SetLevel5Budget_JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.junCostsJobs);

    CARAPI GetLevel5Budget_JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.junCostsJobs);


   CARAPI SetLevel5Budget_JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.julCostsJobs);

    CARAPI GetLevel5Budget_JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.julCostsJobs);


   CARAPI SetLevel5Budget_AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.augCostsJobs);

    CARAPI GetLevel5Budget_AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.augCostsJobs);


   CARAPI SetLevel5Budget_SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.sepCostsJobs);

    CARAPI GetLevel5Budget_SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.sepCostsJobs);


   CARAPI SetLevel5Budget_OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.octCostsJobs);

    CARAPI GetLevel5Budget_OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.octCostsJobs);


   CARAPI SetLevel5Budget_NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.novCostsJobs);

    CARAPI GetLevel5Budget_NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.novCostsJobs);


   CARAPI SetLevel5Budget_DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.decCostsJobs);

    CARAPI GetLevel5Budget_DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.decCostsJobs);


   CARAPI SetLevel5Budget_JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.janServiceTypeIds);

    CARAPI GetLevel5Budget_JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.janServiceTypeIds);


   CARAPI SetLevel5Budget_FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.febServiceTypeIds);

    CARAPI GetLevel5Budget_FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.febServiceTypeIds);


   CARAPI SetLevel5Budget_MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.marServiceTypeIds);

    CARAPI GetLevel5Budget_MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.marServiceTypeIds);


   CARAPI SetLevel5Budget_AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.aprServiceTypeIds);

    CARAPI GetLevel5Budget_AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.aprServiceTypeIds);


   CARAPI SetLevel5Budget_MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.mayServiceTypeIds);

    CARAPI GetLevel5Budget_MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.mayServiceTypeIds);


   CARAPI SetLevel5Budget_JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.junServiceTypeIds);

    CARAPI GetLevel5Budget_JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.junServiceTypeIds);


   CARAPI SetLevel5Budget_JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.julServiceTypeIds);

    CARAPI GetLevel5Budget_JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.julServiceTypeIds);


   CARAPI SetLevel5Budget_AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.augServiceTypeIds);

    CARAPI GetLevel5Budget_AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.augServiceTypeIds);


   CARAPI SetLevel5Budget_SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.sepServiceTypeIds);

    CARAPI GetLevel5Budget_SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.sepServiceTypeIds);


   CARAPI SetLevel5Budget_OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.octServiceTypeIds);

    CARAPI GetLevel5Budget_OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.octServiceTypeIds);


   CARAPI SetLevel5Budget_NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.novServiceTypeIds);

    CARAPI GetLevel5Budget_NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.novServiceTypeIds);


   CARAPI SetLevel5Budget_DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level5Budget.decServiceTypeIds);

    CARAPI GetLevel5Budget_DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level5Budget.decServiceTypeIds);


   CARAPI SetLevel5Budget_JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.janCostsServices);

    CARAPI GetLevel5Budget_JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.janCostsServices);


   CARAPI SetLevel5Budget_FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.febCostsServices);

    CARAPI GetLevel5Budget_FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.febCostsServices);


   CARAPI SetLevel5Budget_MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.marCostsServices);

    CARAPI GetLevel5Budget_MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.marCostsServices);


   CARAPI SetLevel5Budget_AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.aprCostsServices);

    CARAPI GetLevel5Budget_AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.aprCostsServices);


   CARAPI SetLevel5Budget_MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.mayCostsServices);

    CARAPI GetLevel5Budget_MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.mayCostsServices);


   CARAPI SetLevel5Budget_JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.junCostsServices);

    CARAPI GetLevel5Budget_JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.junCostsServices);


   CARAPI SetLevel5Budget_JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.julCostsServices);

    CARAPI GetLevel5Budget_JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.julCostsServices);


   CARAPI SetLevel5Budget_AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.augCostsServices);

    CARAPI GetLevel5Budget_AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.augCostsServices);


   CARAPI SetLevel5Budget_SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.sepCostsServices);

    CARAPI GetLevel5Budget_SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.sepCostsServices);


   CARAPI SetLevel5Budget_OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.octCostsServices);

    CARAPI GetLevel5Budget_OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.octCostsServices);


   CARAPI SetLevel5Budget_NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.novCostsServices);

    CARAPI GetLevel5Budget_NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.novCostsServices);


   CARAPI SetLevel5Budget_DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.decCostsServices);

    CARAPI GetLevel5Budget_DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.decCostsServices);


   CARAPI SetLevel5Budget_TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level5Budget.twelveTotalMonthlyCosts);

    CARAPI GetLevel5Budget_TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level5Budget.twelveTotalMonthlyCosts);


   CARAPI SetLevel5Budget_YearCostThisBudgetId(
     /* [in] */ Double CFinance.level5Budget.yearCostThisBudgetId);

    CARAPI GetLevel5Budget_YearCostThisBudgetId(
     /* [out] */ Double* CFinance.level5Budget.yearCostThisBudgetId);


   CARAPI SetLevel5Budget_NetProfitLossThisLevel5BudgetId(
     /* [in] */ Double CFinance.level5Budget.netProfitLossThisLevel5BudgetId);

    CARAPI GetLevel5Budget_NetProfitLossThisLevel5BudgetId(
     /* [out] */ Double* CFinance.level5Budget.netProfitLossThisLevel5BudgetId);


   CARAPI SetLevel5Budget_LinkingInternalBudgetNum(
     /* [in] */ Int32 CFinance.level5Budget.linkingInternalBudgetNum);

    CARAPI GetLevel5Budget_LinkingInternalBudgetNum(
     /* [out] */ Int32* CFinance.level5Budget.linkingInternalBudgetNum);


   CARAPI SetLevel5Budget_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level5Budget.customerIds);

    CARAPI GetLevel5Budget_CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level5Budget.customerIds);


   CARAPI SetLevel5Budget_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level5Budget.propertyIds);

    CARAPI GetLevel5Budget_PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level5Budget.propertyIds);


   CARAPI SetLevel5Budget_ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level5Budget.programIds);

    CARAPI GetLevel5Budget_ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level5Budget.programIds);


   CARAPI SetLevel5Budget_ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level5Budget.projectIds);

    CARAPI GetLevel5Budget_ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level5Budget.projectIds);


   CARAPI SetLevel5Budget_LinkedToLevel6BudgetId(
     /* [in] */ CFinance.level6Budget CFinance.level5Budget.linkedToLevel6BudgetId);

    CARAPI GetLevel5Budget_LinkedToLevel6BudgetId(
     /* [out] */ CFinance.level6Budget* CFinance.level5Budget.linkedToLevel6BudgetId);


   CARAPI SetLevel5Budget_MasterAsset( SetId(
     /* [in] */ CFinance.masterAssetRegister CFinance.level5Budget.masterAssetId);

    CARAPI GetLevel5Budget_MasterAsset( SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level5Budget.masterAssetId);


   CARAPI SetLevel5Budget_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level5Budget.businessChannelOwnerId);

    CARAPI GetLevel5Budget_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level5Budget.businessChannelOwnerId);





   CARAPI SetLevel6Budget_Level6BudgetId(
     /* [in] */ const String& CFinance.level6Budget.level6BudgetId);

    CARAPI GetLevel6Budget_Level6BudgetId(
     /* [out] */ String* CFinance.level6Budget.level6BudgetId);


   CARAPI SetLevel6Budget_BudgetName(
     /* [in] */ const String& CFinance.level6Budget.budCARAPI GetName);

    CARAPI GetLevel6Budget_BudgetName(
     /* [out] */ String* CFinance.level6Budget.budCARAPI GetName);


   CARAPI SetLevel6Budget_EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.level6Budget.endYearMonthyyyymm);

    CARAPI GetLevel6Budget_EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.level6Budget.endYearMonthyyyymm);


   CARAPI SetLevel6Budget_TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.level6Budget.twelveMonthSequence);

    CARAPI GetLevel6Budget_TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.level6Budget.twelveMonthSequence);


   CARAPI SetLevel6Budget_IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.incomeItemTypeIds);

    CARAPI GetLevel6Budget_IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.incomeItemTypeIds);


   CARAPI SetLevel6Budget_JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.janRevenues);

    CARAPI GetLevel6Budget_JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.janRevenues);


   CARAPI SetLevel6Budget_FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.febRevenues);

    CARAPI GetLevel6Budget_FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.febRevenues);


   CARAPI SetLevel6Budget_MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.marRevenues);

    CARAPI GetLevel6Budget_MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.marRevenues);


   CARAPI SetLevel6Budget_AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.aprRevenues);

    CARAPI GetLevel6Budget_AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.aprRevenues);


   CARAPI SetLevel6Budget_MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.mayRevenues);

    CARAPI GetLevel6Budget_MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.mayRevenues);


   CARAPI SetLevel6Budget_JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.junRevenues);

    CARAPI GetLevel6Budget_JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.junRevenues);


   CARAPI SetLevel6Budget_JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.julRevenues);

    CARAPI GetLevel6Budget_JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.julRevenues);


   CARAPI SetLevel6Budget_AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.augRevenues);

    CARAPI GetLevel6Budget_AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.augRevenues);


   CARAPI SetLevel6Budget_SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.sepRevenues);

    CARAPI GetLevel6Budget_SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.sepRevenues);


   CARAPI SetLevel6Budget_OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.octRevenues);

    CARAPI GetLevel6Budget_OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.octRevenues);


   CARAPI SetLevel6Budget_NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.novRevenues);

    CARAPI GetLevel6Budget_NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.novRevenues);


   CARAPI SetLevel6Budget_DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.decRevenues);

    CARAPI GetLevel6Budget_DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.decRevenues);


   CARAPI SetLevel6Budget_JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.janItemTypeIds);

    CARAPI GetLevel6Budget_JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.janItemTypeIds);


   CARAPI SetLevel6Budget_FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.febItemTypeIds);

    CARAPI GetLevel6Budget_FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.febItemTypeIds);


   CARAPI SetLevel6Budget_MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.marItemTypeIds);

    CARAPI GetLevel6Budget_MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.marItemTypeIds);


   CARAPI SetLevel6Budget_AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.aprItemTypeIds);

    CARAPI GetLevel6Budget_AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.aprItemTypeIds);


   CARAPI SetLevel6Budget_MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.mayItemTypeIds);

    CARAPI GetLevel6Budget_MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.mayItemTypeIds);


   CARAPI SetLevel6Budget_JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.junItemTypeIds);

    CARAPI GetLevel6Budget_JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.junItemTypeIds);


   CARAPI SetLevel6Budget_JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.julItemTypeIds);

    CARAPI GetLevel6Budget_JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.julItemTypeIds);


   CARAPI SetLevel6Budget_AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.augItemTypeIds);

    CARAPI GetLevel6Budget_AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.augItemTypeIds);


   CARAPI SetLevel6Budget_SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.sepItemTypeIds);

    CARAPI GetLevel6Budget_SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.sepItemTypeIds);


   CARAPI SetLevel6Budget_OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.octItemTypeIds);

    CARAPI GetLevel6Budget_OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.octItemTypeIds);


   CARAPI SetLevel6Budget_NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.novItemTypeIds);

    CARAPI GetLevel6Budget_NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.novItemTypeIds);


   CARAPI SetLevel6Budget_DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.decItemTypeIds);

    CARAPI GetLevel6Budget_DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.decItemTypeIds);


   CARAPI SetLevel6Budget_JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.janCostsItems);

    CARAPI GetLevel6Budget_JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.janCostsItems);


   CARAPI SetLevel6Budget_FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.febCostsItems);

    CARAPI GetLevel6Budget_FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.febCostsItems);


   CARAPI SetLevel6Budget_MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.marCostsItems);

    CARAPI GetLevel6Budget_MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.marCostsItems);


   CARAPI SetLevel6Budget_AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.aprCostsItems);

    CARAPI GetLevel6Budget_AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.aprCostsItems);


   CARAPI SetLevel6Budget_MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.mayCostsItems);

    CARAPI GetLevel6Budget_MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.mayCostsItems);


   CARAPI SetLevel6Budget_JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.junCostsItems);

    CARAPI GetLevel6Budget_JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.junCostsItems);


   CARAPI SetLevel6Budget_JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.julCostsItems);

    CARAPI GetLevel6Budget_JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.julCostsItems);


   CARAPI SetLevel6Budget_AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.augCostsItems);

    CARAPI GetLevel6Budget_AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.augCostsItems);


   CARAPI SetLevel6Budget_SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.sepCostsItems);

    CARAPI GetLevel6Budget_SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.sepCostsItems);


   CARAPI SetLevel6Budget_OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.octCostsItems);

    CARAPI GetLevel6Budget_OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.octCostsItems);


   CARAPI SetLevel6Budget_NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.novCostsItems);

    CARAPI GetLevel6Budget_NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.novCostsItems);


   CARAPI SetLevel6Budget_DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.decCostsItems);

    CARAPI GetLevel6Budget_DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.decCostsItems);


   CARAPI SetLevel6Budget_JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.janJobTypeIds);

    CARAPI GetLevel6Budget_JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.janJobTypeIds);


   CARAPI SetLevel6Budget_FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.febJobTypeIds);

    CARAPI GetLevel6Budget_FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.febJobTypeIds);


   CARAPI SetLevel6Budget_MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.marJobTypeIds);

    CARAPI GetLevel6Budget_MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.marJobTypeIds);


   CARAPI SetLevel6Budget_AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.aprJobTypeIds);

    CARAPI GetLevel6Budget_AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.aprJobTypeIds);


   CARAPI SetLevel6Budget_MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.mayJobTypeIds);

    CARAPI GetLevel6Budget_MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.mayJobTypeIds);


   CARAPI SetLevel6Budget_JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.junJobTypeIds);

    CARAPI GetLevel6Budget_JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.junJobTypeIds);


   CARAPI SetLevel6Budget_JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.julJobTypeIds);

    CARAPI GetLevel6Budget_JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.julJobTypeIds);


   CARAPI SetLevel6Budget_AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.augJobTypeIds);

    CARAPI GetLevel6Budget_AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.augJobTypeIds);


   CARAPI SetLevel6Budget_SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.sepJobTypeIds);

    CARAPI GetLevel6Budget_SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.sepJobTypeIds);


   CARAPI SetLevel6Budget_OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.octJobTypeIds);

    CARAPI GetLevel6Budget_OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.octJobTypeIds);


   CARAPI SetLevel6Budget_NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.novJobTypeIds);

    CARAPI GetLevel6Budget_NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.novJobTypeIds);


   CARAPI SetLevel6Budget_DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.decJobTypeIds);

    CARAPI GetLevel6Budget_DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.decJobTypeIds);


   CARAPI SetLevel6Budget_JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.janCostsJobs);

    CARAPI GetLevel6Budget_JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.janCostsJobs);


   CARAPI SetLevel6Budget_FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.febCostsJobs);

    CARAPI GetLevel6Budget_FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.febCostsJobs);


   CARAPI SetLevel6Budget_MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.marCostsJobs);

    CARAPI GetLevel6Budget_MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.marCostsJobs);


   CARAPI SetLevel6Budget_AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.aprCostsJobs);

    CARAPI GetLevel6Budget_AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.aprCostsJobs);


   CARAPI SetLevel6Budget_MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.mayCostsJobs);

    CARAPI GetLevel6Budget_MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.mayCostsJobs);


   CARAPI SetLevel6Budget_JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.junCostsJobs);

    CARAPI GetLevel6Budget_JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.junCostsJobs);


   CARAPI SetLevel6Budget_JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.julCostsJobs);

    CARAPI GetLevel6Budget_JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.julCostsJobs);


   CARAPI SetLevel6Budget_AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.augCostsJobs);

    CARAPI GetLevel6Budget_AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.augCostsJobs);


   CARAPI SetLevel6Budget_SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.sepCostsJobs);

    CARAPI GetLevel6Budget_SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.sepCostsJobs);


   CARAPI SetLevel6Budget_OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.octCostsJobs);

    CARAPI GetLevel6Budget_OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.octCostsJobs);


   CARAPI SetLevel6Budget_NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.novCostsJobs);

    CARAPI GetLevel6Budget_NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.novCostsJobs);


   CARAPI SetLevel6Budget_DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.decCostsJobs);

    CARAPI GetLevel6Budget_DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.decCostsJobs);


   CARAPI SetLevel6Budget_JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.janServiceTypeIds);

    CARAPI GetLevel6Budget_JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.janServiceTypeIds);


   CARAPI SetLevel6Budget_FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.febServiceTypeIds);

    CARAPI GetLevel6Budget_FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.febServiceTypeIds);


   CARAPI SetLevel6Budget_MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.marServiceTypeIds);

    CARAPI GetLevel6Budget_MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.marServiceTypeIds);


   CARAPI SetLevel6Budget_AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.aprServiceTypeIds);

    CARAPI GetLevel6Budget_AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.aprServiceTypeIds);


   CARAPI SetLevel6Budget_MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.mayServiceTypeIds);

    CARAPI GetLevel6Budget_MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.mayServiceTypeIds);


   CARAPI SetLevel6Budget_JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.junServiceTypeIds);

    CARAPI GetLevel6Budget_JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.junServiceTypeIds);


   CARAPI SetLevel6Budget_JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.julServiceTypeIds);

    CARAPI GetLevel6Budget_JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.julServiceTypeIds);


   CARAPI SetLevel6Budget_AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.augServiceTypeIds);

    CARAPI GetLevel6Budget_AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.augServiceTypeIds);


   CARAPI SetLevel6Budget_SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.sepServiceTypeIds);

    CARAPI GetLevel6Budget_SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.sepServiceTypeIds);


   CARAPI SetLevel6Budget_OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.octServiceTypeIds);

    CARAPI GetLevel6Budget_OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.octServiceTypeIds);


   CARAPI SetLevel6Budget_NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.novServiceTypeIds);

    CARAPI GetLevel6Budget_NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.novServiceTypeIds);


   CARAPI SetLevel6Budget_DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.level6Budget.decServiceTypeIds);

    CARAPI GetLevel6Budget_DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.level6Budget.decServiceTypeIds);


   CARAPI SetLevel6Budget_JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.janCostsServices);

    CARAPI GetLevel6Budget_JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.janCostsServices);


   CARAPI SetLevel6Budget_FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.febCostsServices);

    CARAPI GetLevel6Budget_FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.febCostsServices);


   CARAPI SetLevel6Budget_MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.marCostsServices);

    CARAPI GetLevel6Budget_MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.marCostsServices);


   CARAPI SetLevel6Budget_AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.aprCostsServices);

    CARAPI GetLevel6Budget_AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.aprCostsServices);


   CARAPI SetLevel6Budget_MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.mayCostsServices);

    CARAPI GetLevel6Budget_MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.mayCostsServices);


   CARAPI SetLevel6Budget_JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.junCostsServices);

    CARAPI GetLevel6Budget_JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.junCostsServices);


   CARAPI SetLevel6Budget_JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.julCostsServices);

    CARAPI GetLevel6Budget_JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.julCostsServices);


   CARAPI SetLevel6Budget_AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.augCostsServices);

    CARAPI GetLevel6Budget_AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.augCostsServices);


   CARAPI SetLevel6Budget_SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.sepCostsServices);

    CARAPI GetLevel6Budget_SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.sepCostsServices);


   CARAPI SetLevel6Budget_OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.octCostsServices);

    CARAPI GetLevel6Budget_OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.octCostsServices);


   CARAPI SetLevel6Budget_NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.novCostsServices);

    CARAPI GetLevel6Budget_NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.novCostsServices);


   CARAPI SetLevel6Budget_DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.decCostsServices);

    CARAPI GetLevel6Budget_DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.decCostsServices);


   CARAPI SetLevel6Budget_TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.level6Budget.twelveTotalMonthlyCosts);

    CARAPI GetLevel6Budget_TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.level6Budget.twelveTotalMonthlyCosts);


   CARAPI SetLevel6Budget_YearCostThisBudgetId(
     /* [in] */ Double CFinance.level6Budget.yearCostThisBudgetId);

    CARAPI GetLevel6Budget_YearCostThisBudgetId(
     /* [out] */ Double* CFinance.level6Budget.yearCostThisBudgetId);


   CARAPI SetLevel6Budget_NetProfitLossThisLevel6BudgetId(
     /* [in] */ Double CFinance.level6Budget.netProfitLossThisLevel6BudgetId);

    CARAPI GetLevel6Budget_NetProfitLossThisLevel6BudgetId(
     /* [out] */ Double* CFinance.level6Budget.netProfitLossThisLevel6BudgetId);


   CARAPI SetLevel6Budget_LinkingInternalBudgetNum(
     /* [in] */ Int32 CFinance.level6Budget.linkingInternalBudgetNum);

    CARAPI GetLevel6Budget_LinkingInternalBudgetNum(
     /* [out] */ Int32* CFinance.level6Budget.linkingInternalBudgetNum);


   CARAPI SetLevel6Budget_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.level6Budget.customerIds);

    CARAPI GetLevel6Budget_CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.level6Budget.customerIds);


   CARAPI SetLevel6Budget_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.level6Budget.propertyIds);

    CARAPI GetLevel6Budget_PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.level6Budget.propertyIds);


   CARAPI SetLevel6Budget_ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.level6Budget.programIds);

    CARAPI GetLevel6Budget_ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.level6Budget.programIds);


   CARAPI SetLevel6Budget_ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.level6Budget.projectIds);

    CARAPI GetLevel6Budget_ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.level6Budget.projectIds);


   CARAPI SetLevel6Budget_LinkedToHyperBudgetId(
     /* [in] */ CFinance.hyperBudget CFinance.level6Budget.linkedToHyperBudgetId);

    CARAPI GetLevel6Budget_LinkedToHyperBudgetId(
     /* [out] */ CFinance.hyperBudget* CFinance.level6Budget.linkedToHyperBudgetId);


   CARAPI SetLevel6Budget_MasterAsset( SetId(
     /* [in] */ CFinance.masterAssetRegister CFinance.level6Budget.masterAssetId);

    CARAPI GetLevel6Budget_MasterAsset( SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.level6Budget.masterAssetId);


   CARAPI SetLevel6Budget_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.level6Budget.businessChannelOwnerId);

    CARAPI GetLevel6Budget_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.level6Budget.businessChannelOwnerId);





   CARAPI SetHyperBudget_HyperBudgetId(
     /* [in] */ const String& CFinance.hyperBudget.hyperBudgetId);

    CARAPI GetHyperBudget_HyperBudgetId(
     /* [out] */ String* CFinance.hyperBudget.hyperBudgetId);


   CARAPI SetHyperBudget_BudgetName(
     /* [in] */ const String& CFinance.hyperBudget.budCARAPI GetName);

    CARAPI GetHyperBudget_BudgetName(
     /* [out] */ String* CFinance.hyperBudget.budCARAPI GetName);


   CARAPI SetHyperBudget_EndYearMonthyyyymm(
     /* [in] */ Int32 CFinance.hyperBudget.endYearMonthyyyymm);

    CARAPI GetHyperBudget_EndYearMonthyyyymm(
     /* [out] */ Int32* CFinance.hyperBudget.endYearMonthyyyymm);


   CARAPI SetHyperBudget_TwelveMonthSequence(
     /* [in] */ ArrayOf<CHelper.month> CFinance.hyperBudget.twelveMonthSequence);

    CARAPI GetHyperBudget_TwelveMonthSequence(
     [out, callee] ArrayOf<CHelper.month>* CFinance.hyperBudget.twelveMonthSequence);


   CARAPI SetHyperBudget_IncomeItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.incomeItemTypeIds);

    CARAPI GetHyperBudget_IncomeItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.incomeItemTypeIds);


   CARAPI SetHyperBudget_JanRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.janRevenues);

    CARAPI GetHyperBudget_JanRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.janRevenues);


   CARAPI SetHyperBudget_FebRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.febRevenues);

    CARAPI GetHyperBudget_FebRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.febRevenues);


   CARAPI SetHyperBudget_MarRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.marRevenues);

    CARAPI GetHyperBudget_MarRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.marRevenues);


   CARAPI SetHyperBudget_AprRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.aprRevenues);

    CARAPI GetHyperBudget_AprRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.aprRevenues);


   CARAPI SetHyperBudget_MayRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.mayRevenues);

    CARAPI GetHyperBudget_MayRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.mayRevenues);


   CARAPI SetHyperBudget_JunRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.junRevenues);

    CARAPI GetHyperBudget_JunRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.junRevenues);


   CARAPI SetHyperBudget_JulRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.julRevenues);

    CARAPI GetHyperBudget_JulRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.julRevenues);


   CARAPI SetHyperBudget_AugRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.augRevenues);

    CARAPI GetHyperBudget_AugRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.augRevenues);


   CARAPI SetHyperBudget_SepRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.sepRevenues);

    CARAPI GetHyperBudget_SepRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.sepRevenues);


   CARAPI SetHyperBudget_OctRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.octRevenues);

    CARAPI GetHyperBudget_OctRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.octRevenues);


   CARAPI SetHyperBudget_NovRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.novRevenues);

    CARAPI GetHyperBudget_NovRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.novRevenues);


   CARAPI SetHyperBudget_DecRevenues(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.decRevenues);

    CARAPI GetHyperBudget_DecRevenues(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.decRevenues);


   CARAPI SetHyperBudget_JanItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.janItemTypeIds);

    CARAPI GetHyperBudget_JanItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.janItemTypeIds);


   CARAPI SetHyperBudget_FebItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.febItemTypeIds);

    CARAPI GetHyperBudget_FebItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.febItemTypeIds);


   CARAPI SetHyperBudget_MarItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.marItemTypeIds);

    CARAPI GetHyperBudget_MarItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.marItemTypeIds);


   CARAPI SetHyperBudget_AprItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.aprItemTypeIds);

    CARAPI GetHyperBudget_AprItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.aprItemTypeIds);


   CARAPI SetHyperBudget_MayItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.mayItemTypeIds);

    CARAPI GetHyperBudget_MayItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.mayItemTypeIds);


   CARAPI SetHyperBudget_JunItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.junItemTypeIds);

    CARAPI GetHyperBudget_JunItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.junItemTypeIds);


   CARAPI SetHyperBudget_JulItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.julItemTypeIds);

    CARAPI GetHyperBudget_JulItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.julItemTypeIds);


   CARAPI SetHyperBudget_AugItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.augItemTypeIds);

    CARAPI GetHyperBudget_AugItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.augItemTypeIds);


   CARAPI SetHyperBudget_SepItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.sepItemTypeIds);

    CARAPI GetHyperBudget_SepItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.sepItemTypeIds);


   CARAPI SetHyperBudget_OctItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.octItemTypeIds);

    CARAPI GetHyperBudget_OctItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.octItemTypeIds);


   CARAPI SetHyperBudget_NovItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.novItemTypeIds);

    CARAPI GetHyperBudget_NovItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.novItemTypeIds);


   CARAPI SetHyperBudget_DecItemTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.decItemTypeIds);

    CARAPI GetHyperBudget_DecItemTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.decItemTypeIds);


   CARAPI SetHyperBudget_JanCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.janCostsItems);

    CARAPI GetHyperBudget_JanCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.janCostsItems);


   CARAPI SetHyperBudget_FebCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.febCostsItems);

    CARAPI GetHyperBudget_FebCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.febCostsItems);


   CARAPI SetHyperBudget_MarCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.marCostsItems);

    CARAPI GetHyperBudget_MarCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.marCostsItems);


   CARAPI SetHyperBudget_AprCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.aprCostsItems);

    CARAPI GetHyperBudget_AprCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.aprCostsItems);


   CARAPI SetHyperBudget_MayCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.mayCostsItems);

    CARAPI GetHyperBudget_MayCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.mayCostsItems);


   CARAPI SetHyperBudget_JunCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.junCostsItems);

    CARAPI GetHyperBudget_JunCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.junCostsItems);


   CARAPI SetHyperBudget_JulCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.julCostsItems);

    CARAPI GetHyperBudget_JulCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.julCostsItems);


   CARAPI SetHyperBudget_AugCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.augCostsItems);

    CARAPI GetHyperBudget_AugCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.augCostsItems);


   CARAPI SetHyperBudget_SepCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.sepCostsItems);

    CARAPI GetHyperBudget_SepCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.sepCostsItems);


   CARAPI SetHyperBudget_OctCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.octCostsItems);

    CARAPI GetHyperBudget_OctCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.octCostsItems);


   CARAPI SetHyperBudget_NovCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.novCostsItems);

    CARAPI GetHyperBudget_NovCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.novCostsItems);


   CARAPI SetHyperBudget_DecCostsItems(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.decCostsItems);

    CARAPI GetHyperBudget_DecCostsItems(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.decCostsItems);


   CARAPI SetHyperBudget_JanJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.janJobTypeIds);

    CARAPI GetHyperBudget_JanJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.janJobTypeIds);


   CARAPI SetHyperBudget_FebJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.febJobTypeIds);

    CARAPI GetHyperBudget_FebJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.febJobTypeIds);


   CARAPI SetHyperBudget_MarJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.marJobTypeIds);

    CARAPI GetHyperBudget_MarJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.marJobTypeIds);


   CARAPI SetHyperBudget_AprJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.aprJobTypeIds);

    CARAPI GetHyperBudget_AprJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.aprJobTypeIds);


   CARAPI SetHyperBudget_MayJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.mayJobTypeIds);

    CARAPI GetHyperBudget_MayJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.mayJobTypeIds);


   CARAPI SetHyperBudget_JunJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.junJobTypeIds);

    CARAPI GetHyperBudget_JunJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.junJobTypeIds);


   CARAPI SetHyperBudget_JulJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.julJobTypeIds);

    CARAPI GetHyperBudget_JulJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.julJobTypeIds);


   CARAPI SetHyperBudget_AugJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.augJobTypeIds);

    CARAPI GetHyperBudget_AugJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.augJobTypeIds);


   CARAPI SetHyperBudget_SepJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.sepJobTypeIds);

    CARAPI GetHyperBudget_SepJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.sepJobTypeIds);


   CARAPI SetHyperBudget_OctJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.octJobTypeIds);

    CARAPI GetHyperBudget_OctJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.octJobTypeIds);


   CARAPI SetHyperBudget_NovJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.novJobTypeIds);

    CARAPI GetHyperBudget_NovJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.novJobTypeIds);


   CARAPI SetHyperBudget_DecJobTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.decJobTypeIds);

    CARAPI GetHyperBudget_DecJobTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.decJobTypeIds);


   CARAPI SetHyperBudget_JanCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.janCostsJobs);

    CARAPI GetHyperBudget_JanCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.janCostsJobs);


   CARAPI SetHyperBudget_FebCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.febCostsJobs);

    CARAPI GetHyperBudget_FebCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.febCostsJobs);


   CARAPI SetHyperBudget_MarCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.marCostsJobs);

    CARAPI GetHyperBudget_MarCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.marCostsJobs);


   CARAPI SetHyperBudget_AprCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.aprCostsJobs);

    CARAPI GetHyperBudget_AprCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.aprCostsJobs);


   CARAPI SetHyperBudget_MayCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.mayCostsJobs);

    CARAPI GetHyperBudget_MayCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.mayCostsJobs);


   CARAPI SetHyperBudget_JunCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.junCostsJobs);

    CARAPI GetHyperBudget_JunCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.junCostsJobs);


   CARAPI SetHyperBudget_JulCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.julCostsJobs);

    CARAPI GetHyperBudget_JulCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.julCostsJobs);


   CARAPI SetHyperBudget_AugCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.augCostsJobs);

    CARAPI GetHyperBudget_AugCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.augCostsJobs);


   CARAPI SetHyperBudget_SepCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.sepCostsJobs);

    CARAPI GetHyperBudget_SepCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.sepCostsJobs);


   CARAPI SetHyperBudget_OctCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.octCostsJobs);

    CARAPI GetHyperBudget_OctCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.octCostsJobs);


   CARAPI SetHyperBudget_NovCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.novCostsJobs);

    CARAPI GetHyperBudget_NovCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.novCostsJobs);


   CARAPI SetHyperBudget_DecCostsJobs(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.decCostsJobs);

    CARAPI GetHyperBudget_DecCostsJobs(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.decCostsJobs);


   CARAPI SetHyperBudget_JanServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.janServiceTypeIds);

    CARAPI GetHyperBudget_JanServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.janServiceTypeIds);


   CARAPI SetHyperBudget_FebServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.febServiceTypeIds);

    CARAPI GetHyperBudget_FebServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.febServiceTypeIds);


   CARAPI SetHyperBudget_MarServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.marServiceTypeIds);

    CARAPI GetHyperBudget_MarServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.marServiceTypeIds);


   CARAPI SetHyperBudget_AprServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.aprServiceTypeIds);

    CARAPI GetHyperBudget_AprServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.aprServiceTypeIds);


   CARAPI SetHyperBudget_MayServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.mayServiceTypeIds);

    CARAPI GetHyperBudget_MayServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.mayServiceTypeIds);


   CARAPI SetHyperBudget_JunServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.junServiceTypeIds);

    CARAPI GetHyperBudget_JunServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.junServiceTypeIds);


   CARAPI SetHyperBudget_JulServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.julServiceTypeIds);

    CARAPI GetHyperBudget_JulServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.julServiceTypeIds);


   CARAPI SetHyperBudget_AugServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.augServiceTypeIds);

    CARAPI GetHyperBudget_AugServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.augServiceTypeIds);


   CARAPI SetHyperBudget_SepServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.sepServiceTypeIds);

    CARAPI GetHyperBudget_SepServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.sepServiceTypeIds);


   CARAPI SetHyperBudget_OctServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.octServiceTypeIds);

    CARAPI GetHyperBudget_OctServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.octServiceTypeIds);


   CARAPI SetHyperBudget_NovServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.novServiceTypeIds);

    CARAPI GetHyperBudget_NovServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.novServiceTypeIds);


   CARAPI SetHyperBudget_DecServiceTypeIds(
     /* [in] */ ArrayOf<const String&> CFinance.hyperBudget.decServiceTypeIds);

    CARAPI GetHyperBudget_DecServiceTypeIds(
     [out, callee] ArrayOf<String>* CFinance.hyperBudget.decServiceTypeIds);


   CARAPI SetHyperBudget_JanCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.janCostsServices);

    CARAPI GetHyperBudget_JanCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.janCostsServices);


   CARAPI SetHyperBudget_FebCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.febCostsServices);

    CARAPI GetHyperBudget_FebCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.febCostsServices);


   CARAPI SetHyperBudget_MarCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.marCostsServices);

    CARAPI GetHyperBudget_MarCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.marCostsServices);


   CARAPI SetHyperBudget_AprCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.aprCostsServices);

    CARAPI GetHyperBudget_AprCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.aprCostsServices);


   CARAPI SetHyperBudget_MayCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.mayCostsServices);

    CARAPI GetHyperBudget_MayCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.mayCostsServices);


   CARAPI SetHyperBudget_JunCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.junCostsServices);

    CARAPI GetHyperBudget_JunCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.junCostsServices);


   CARAPI SetHyperBudget_JulCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.julCostsServices);

    CARAPI GetHyperBudget_JulCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.julCostsServices);


   CARAPI SetHyperBudget_AugCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.augCostsServices);

    CARAPI GetHyperBudget_AugCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.augCostsServices);


   CARAPI SetHyperBudget_SepCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.sepCostsServices);

    CARAPI GetHyperBudget_SepCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.sepCostsServices);


   CARAPI SetHyperBudget_OctCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.octCostsServices);

    CARAPI GetHyperBudget_OctCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.octCostsServices);


   CARAPI SetHyperBudget_NovCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.novCostsServices);

    CARAPI GetHyperBudget_NovCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.novCostsServices);


   CARAPI SetHyperBudget_DecCostsServices(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.decCostsServices);

    CARAPI GetHyperBudget_DecCostsServices(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.decCostsServices);


   CARAPI SetHyperBudget_TwelveTotalMonthlyCosts(
     /* [in] */ ArrayOf<Double> CFinance.hyperBudget.twelveTotalMonthlyCosts);

    CARAPI GetHyperBudget_TwelveTotalMonthlyCosts(
     [out, callee] ArrayOf<Double>* CFinance.hyperBudget.twelveTotalMonthlyCosts);


   CARAPI SetHyperBudget_YearCostThisBudgetId(
     /* [in] */ Double CFinance.hyperBudget.yearCostThisBudgetId);

    CARAPI GetHyperBudget_YearCostThisBudgetId(
     /* [out] */ Double* CFinance.hyperBudget.yearCostThisBudgetId);


   CARAPI SetHyperBudget_NetProfitLossThisHyperBudgetId(
     /* [in] */ Double CFinance.hyperBudget.netProfitLossThisHyperBudgetId);

    CARAPI GetHyperBudget_NetProfitLossThisHyperBudgetId(
     /* [out] */ Double* CFinance.hyperBudget.netProfitLossThisHyperBudgetId);


   CARAPI SetHyperBudget_LinkingInternalBudgetNum(
     /* [in] */ Int32 CFinance.hyperBudget.linkingInternalBudgetNum);

    CARAPI GetHyperBudget_LinkingInternalBudgetNum(
     /* [out] */ Int32* CFinance.hyperBudget.linkingInternalBudgetNum);


   CARAPI SetHyperBudget_CustomerIds(
     /* [in] */ ArrayOf<CCustomer.customer> CFinance.hyperBudget.customerIds);

    CARAPI GetHyperBudget_CustomerIds(
     [out, callee] ArrayOf<CCustomer.customer>* CFinance.hyperBudget.customerIds);


   CARAPI SetHyperBudget_PropertyIds(
     /* [in] */ ArrayOf<CProperty.property> CFinance.hyperBudget.propertyIds);

    CARAPI GetHyperBudget_PropertyIds(
     [out, callee] ArrayOf<CProperty.property>* CFinance.hyperBudget.propertyIds);


   CARAPI SetHyperBudget_ProgramIds(
     /* [in] */ ArrayOf<CProperty.program> CFinance.hyperBudget.programIds);

    CARAPI GetHyperBudget_ProgramIds(
     [out, callee] ArrayOf<CProperty.program>* CFinance.hyperBudget.programIds);


   CARAPI SetHyperBudget_ProjectIds(
     /* [in] */ ArrayOf<CProperty.project> CFinance.hyperBudget.projectIds);

    CARAPI GetHyperBudget_ProjectIds(
     [out, callee] ArrayOf<CProperty.project>* CFinance.hyperBudget.projectIds);


   CARAPI SetHyperBudget_MasterAsset( SetId(
     /* [in] */ CFinance.masterAssetRegister CFinance.hyperBudget.masterAssetId);

    CARAPI GetHyperBudget_MasterAsset( SetId(
     /* [out] */ CFinance.masterAssetRegister* CFinance.hyperBudget.masterAssetId);


   CARAPI SetHyperBudget_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFinance.hyperBudget.businessChannelOwnerId);

    CARAPI GetHyperBudget_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFinance.hyperBudget.businessChannelOwnerId);


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

