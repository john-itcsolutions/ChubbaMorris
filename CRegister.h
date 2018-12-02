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


class CRegister
    : public Object
    , public ICH
    , public IComparable
{
public:
    CAR_INTERFACE_DECL()    // The class which implements a CAR interface requires macros CAR_INTERFACE_DECL/CAR_INTERFACE_IMPL.

    CRegister();               // If a member needs to be initialized, the constructor must be explicitly declared 

    virtual ~CRegister();

    CARAPI constructor();   // CAR constructor for subclass inheritance.

     // IComparable interface function
    //
    CARAPI CompareTo(
        /* [in] */ IInterface* another,
        /* [out] */ Int32* result);

    // ICH interface function
    //
  
   CARAPI SetSideChainOperator_SideChainOperatorId(
     /* [in] */ const String& CRegister.sideChainOperator.sideChainOperatorId);

    CARAPI GetSideChainOperator_SideChainOperatorId(
     /* [out] */ String* CRegister.sideChainOperator.sideChainOperatorId);


   CARAPI SetSideChainOperator_EquivalentBusinessChannelOwnerId(
     /* [in] */ const String& CRegister.sideChainOperator.equivalentBusinessChannelOwnerId);

    CARAPI GetSideChainOperator_EquivalentBusinessChannelOwnerId(
     /* [out] */ String* CRegister.sideChainOperator.equivalentBusinessChannelOwnerId);


   CARAPI SetSideChainOperator_BankName(
     /* [in] */ const String& CRegister.sideChainOperator.bankName);

    CARAPI GetSideChainOperator_BankName(
     /* [out] */ String* CRegister.sideChainOperator.bankName);


   CARAPI SetSideChainOperator_BankBSB(
     /* [in] */ const String& CRegister.sideChainOperator.bankBSB);

    CARAPI GetSideChainOperator_BankBSB(
     /* [out] */ String* CRegister.sideChainOperator.bankBSB);


   CARAPI SetSideChainOperator_BankAccNum(
     /* [in] */ const String& CRegister.sideChainOperator.bankAccNum);

    CARAPI GetSideChainOperator_BankAccNum(
     /* [out] */ String* CRegister.sideChainOperator.bankAccNum);


   CARAPI SetSideChainOperator_BusinessName(
     /* [in] */ const String& CRegister.sideChainOperator.businessName);

    CARAPI GetSideChainOperator_BusinessName(
     /* [out] */ String* CRegister.sideChainOperator.businessName);


   CARAPI SetSideChainOperator_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegister.sideChainOperator.contactFirstNameList);

    CARAPI GetSideChainOperator_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegister.sideChainOperator.contactFirstNameList);


   CARAPI SetSideChainOperator_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegister.sideChainOperator.contactLastNameList);

    CARAPI GetSideChainOperator_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegister.sideChainOperator.contactLastNameList);


   CARAPI SetSideChainOperator_StreetAddress(
     /* [in] */ const String& CRegister.sideChainOperator.streetAddress);

    CARAPI GetSideChainOperator_StreetAddress(
     /* [out] */ String* CRegister.sideChainOperator.streetAddress);


   CARAPI SetSideChainOperator_PostalAddress(
     /* [in] */ const String& CRegister.sideChainOperator.postalAddress);

    CARAPI GetSideChainOperator_PostalAddress(
     /* [out] */ String* CRegister.sideChainOperator.postalAddress);


   CARAPI SetSideChainOperator_EmailAddressList(
     /* [in] */ ArrayOf<const String&> CRegister.sideChainOperator.emailAddressList);

    CARAPI GetSideChainOperator_EmailAddressList(
     /* [out, callee] */ ArrayOf<String>* CRegister.sideChainOperator.emailAddressList);


   CARAPI SetSideChainOperator_WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegister.sideChainOperator.workPhone);

    CARAPI GetSideChainOperator_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.sideChainOperator.workPhone);


   CARAPI SetSideChainOperator_MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegister.sideChainOperator.mobilePhone);

    CARAPI GetSideChainOperator_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.sideChainOperator.mobilePhone);


   CARAPI SetSideChainOperator_HomePhone(
     /* [in] */ ArrayOf<Int32> CRegister.sideChainOperator.homePhone);

    CARAPI GetSideChainOperator_HomePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.sideChainOperator.homePhone);


   CARAPI SetSideChainOperator_ATOTFN(
     /* [in] */ const String& CRegister.sideChainOperator.aTOTFN);

    CARAPI GetSideChainOperator_ATOTFN(
     /* [out] */ String* CRegister.sideChainOperator.aTOTFN);


   CARAPI SetSideChainOperator_ABN(
     /* [in] */ const String& CRegister.sideChainOperator.aBN);

    CARAPI GetSideChainOperator_ABN(
     /* [out] */ String* CRegister.sideChainOperator.aBN);


   CARAPI SetSideChainOperator_ACN(
     /* [in] */ const String& CRegister.sideChainOperator.aCN);

    CARAPI GetSideChainOperator_ACN(
     /* [out] */ String* CRegister.sideChainOperator.aCN);


   CARAPI SetSideChainOperator_StartTaxYear(
     /* [in] */ const String& CRegister.sideChainOperator.startTaxYear);

    CARAPI GetSideChainOperator_StartTaxYear(
     /* [out] */ String* CRegister.sideChainOperator.startTaxYear);


   CARAPI SetSideChainOperator_NextFinTxNum(
     /* [in] */ Int32 CRegister.sideChainOperator.nextFinTxNum);

    CARAPI GetSideChainOperator_NextFinTxNum(
     /* [out] */ Int32* CRegister.sideChainOperator.nextFinTxNum);


   CARAPI SetSideChainOperator_NextJobNumPerformed(
     /* [in] */ Int32 CRegister.sideChainOperator.nextJobNumPerformed);

    CARAPI GetSideChainOperator_NextJobNumPerformed(
     /* [out] */ Int32* CRegister.sideChainOperator.nextJobNumPerformed);


   CARAPI SetSideChainOperator_NextLinkingInternalBudgetNum(
     /* [in] */ Int32 CRegister.sideChainOperator.nextLinkingInternalBudgetNum);

    CARAPI GetSideChainOperator_NextLinkingInternalBudgetNum(
     /* [out] */ Int32* CRegister.sideChainOperator.nextLinkingInternalBudgetNum);


   CARAPI SetSideChainOperator_ChartOfAccountsIds(
     /* [in] */ ArrayOf<CFinance.chartOfAccounts> CRegister.sideChainOperator.chartOfAccountsIds);

    CARAPI GetSideChainOperator_ChartOfAccountsIds(
     /* [out, callee] */ ArrayOf<CFinance.chartOfAccounts>* CRegister.sideChainOperator.chartOfAccountsIds);


   CARAPI SetSideChainOperator_ChartOfClassesIds(
     /* [in] */ ArrayOf<CFinance.chartOfClasses> CRegister.sideChainOperator.chartOfClassesIds);

    CARAPI GetSideChainOperator_ChartOfClassesIds(
     /* [out, callee] */ ArrayOf<CFinance.chartOfClasses>* CRegister.sideChainOperator.chartOfClassesIds);


   CARAPI SetSideChainOperator_BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CRegister.sideChainOperator.businessDirectorIds);

    CARAPI GetSideChainOperator_BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CRegister.sideChainOperator.businessDirectorIds);


   CARAPI SetSideChainOperator_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegister.sideChainOperator.docRefIds);

    CARAPI GetSideChainOperator_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegister.sideChainOperator.docRefIds);


   CARAPI SetSideChainOperator_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegister.sideChainOperator.imageRefIds);

    CARAPI GetSideChainOperator_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegister.sideChainOperator.imageRefIds);


   CARAPI SetBusinessChannelOwner_BusinessChannelOwnerId(
     /* [in] */ const String& CRegister.businessChannelOwner.businessChannelOwnerId);

    CARAPI GetBusinessChannelOwner_BusinessChannelOwnerId(
     /* [out] */ String* CRegister.businessChannelOwner.businessChannelOwnerId);


   CARAPI SetBusinessChannelOwner_LinkedToThisSideChainOperatorId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisSideChainOperatorId);

    CARAPI GetBusinessChannelOwner_LinkedToThisSideChainOperatorId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisSideChainOperatorId);


   CARAPI SetBusinessChannelOwner_LinkedToThisSupplierId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisSupplierId);

    CARAPI GetBusinessChannelOwner_LinkedToThisSupplierId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisSupplierId);


   CARAPI SetBusinessChannelOwner_LinkedToThisSolicitorId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisSolicitorId);

    CARAPI GetBusinessChannelOwner_LinkedToThisSolicitorId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisSolicitorId);


   CARAPI SetBusinessChannelOwner_LinkedToThisEmployeeId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisEmployeeId);

    CARAPI GetBusinessChannelOwner_LinkedToThisEmployeeId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisEmployeeId);


   CARAPI SetBusinessChannelOwner_LinkedToThisCustomerId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisCustomerId);

    CARAPI GetBusinessChannelOwner_LinkedToThisCustomerId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisCustomerId);


   CARAPI SetBusinessChannelOwner_LinkedToThisStakeholderId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisStakeholderId);

    CARAPI GetBusinessChannelOwner_LinkedToThisStakeholderId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisStakeholderId);


   CARAPI SetBusinessChannelOwner_LinkedToThisRegulatorId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisRegulatorId);

    CARAPI GetBusinessChannelOwner_LinkedToThisRegulatorId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisRegulatorId);

   CARAPI SetBusinessChannelOwner_LinkedToThisBankId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisBankId);

    CARAPI GetBusinessChannelOwner_LinkedToThisBankId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisBankId);


   CARAPI SetBusinessChannelOwner_BankName(
     /* [in] */ const String& CRegister.businessChannelOwner.bankName);

    CARAPI GetBusinessChannelOwner_BankName(
     /* [out] */ String* CRegister.businessChannelOwner.bankName);


   CARAPI SetBusinessChannelOwner_BankBSB(
     /* [in] */ const String& CRegister.businessChannelOwner.bankBSB);

    CARAPI GetBusinessChannelOwner_BankBSB(
     /* [out] */ String* CRegister.businessChannelOwner.bankBSB);


   CARAPI SetBusinessChannelOwner_BankAccNum(
     /* [in] */ const String& CRegister.businessChannelOwner.bankAccNum);

    CARAPI GetBusinessChannelOwner_BankAccNum(
     /* [out] */ String* CRegister.businessChannelOwner.bankAccNum);


   CARAPI SetBusinessChannelOwner_AllBranchIds(
     /* [in] */ ArrayOf<const String&> CRegister.businessChannelOwner.allBranchIds);

    CARAPI GetBusinessChannelOwner_AllBranchIds(
     /* [out, callee] */ ArrayOf<String>* CRegister.businessChannelOwner.allBranchIds);


   CARAPI SetBusinessChannelOwner_BusinessName(
     /* [in] */ const String& CRegister.businessChannelOwner.businessName);

    CARAPI GetBusinessChannelOwner_BusinessName(
     /* [out] */ String* CRegister.businessChannelOwner.businessName);


   CARAPI SetBusinessChannelOwner_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegister.businessChannelOwner.contactFirstNameList);

    CARAPI GetBusinessChannelOwner_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegister.businessChannelOwner.contactFirstNameList);


   CARAPI SetBusinessChannelOwner_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegister.businessChannelOwner.contactLastNameList);

    CARAPI GetBusinessChannelOwner_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegister.businessChannelOwner.contactLastNameList);


   CARAPI SetBusinessChannelOwner_StreetAddress(
     /* [in] */ const String& CRegister.businessChannelOwner.streetAddress);

    CARAPI GetBusinessChannelOwner_StreetAddress(
     /* [out] */ String* CRegister.businessChannelOwner.streetAddress);


   CARAPI SetBusinessChannelOwner_PostalAddress(
     /* [in] */ const String& CRegister.businessChannelOwner.postalAddress);

    CARAPI GetBusinessChannelOwner_PostalAddress(
     /* [out] */ String* CRegister.businessChannelOwner.postalAddress);


   CARAPI SetBusinessChannelOwner_EmailAddressList(
     /* [in] */ ArrayOf<const String&> CRegister.businessChannelOwner.emailAddressList);

    CARAPI GetBusinessChannelOwner_EmailAddressList(
     /* [out, callee] */ ArrayOf<String>* CRegister.businessChannelOwner.emailAddressList);


   CARAPI SetBusinessChannelOwner_WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegister.businessChannelOwner.workPhone);

    CARAPI GetBusinessChannelOwner_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.businessChannelOwner.workPhone);


   CARAPI SetBusinessChannelOwner_MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegister.businessChannelOwner.mobilePhone);

    CARAPI GetBusinessChannelOwner_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.businessChannelOwner.mobilePhone);


   CARAPI SetBusinessChannelOwner_HomePhone(
     /* [in] */ ArrayOf<Int32> CRegister.businessChannelOwner.homePhone);

    CARAPI GetBusinessChannelOwner_HomePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.businessChannelOwner.homePhone);


   CARAPI SetBusinessChannelOwner_ATOTFN(
     /* [in] */ const String& CRegister.businessChannelOwner.aTOTFN);

    CARAPI GetBusinessChannelOwner_ATOTFN(
     /* [out] */ String* CRegister.businessChannelOwner.aTOTFN);


   CARAPI SetBusinessChannelOwner_ABN(
     /* [in] */ const String& CRegister.businessChannelOwner.aBN);

    CARAPI GetBusinessChannelOwner_ABN(
     /* [out] */ String* CRegister.businessChannelOwner.aBN);


   CARAPI SetBusinessChannelOwner_ACN(
     /* [in] */ const String& CRegister.businessChannelOwner.aCN);

    CARAPI GetBusinessChannelOwner_ACN(
     /* [out] */ String* CRegister.businessChannelOwner.aCN);


   CARAPI SetBusinessChannelOwner_StartTaxYear(
     /* [in] */ const String& CRegister.businessChannelOwner.startTaxYear);

    CARAPI GetBusinessChannelOwner_StartTaxYear(
     /* [out] */ String* CRegister.businessChannelOwner.startTaxYear);


   CARAPI SetBusinessChannelOwner_NextFinTxNum(
     /* [in] */ Int32 CRegister.businessChannelOwner.nextFinTxNum);

    CARAPI GetBusinessChannelOwner_NextFinTxNum(
     /* [out] */ Int32* CRegister.businessChannelOwner.nextFinTxNum);


   CARAPI SetBusinessChannelOwner_NextJobNumPerformed(
     /* [in] */ Int32 CRegister.businessChannelOwner.nextJobNumPerformed);

    CARAPI GetBusinessChannelOwner_NextJobNumPerformed(
     /* [out] */ Int32* CRegister.businessChannelOwner.nextJobNumPerformed);


   CARAPI SetBusinessChannelOwner_NextLinkingInternalBudgetNum(
     /* [in] */ Int32 CRegister.businessChannelOwner.nextLinkingInternalBudgetNum);

    CARAPI GetBusinessChannelOwner_NextLinkingInternalBudgetNum(
     /* [out] */ Int32* CRegister.businessChannelOwner.nextLinkingInternalBudgetNum);


   CARAPI SetBusinessChannelOwner_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegister.businessChannelOwner.contactedWithDetails);

    CARAPI GetBusinessChannelOwner_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegister.businessChannelOwner.contactedWithDetails);


   CARAPI SetBusinessChannelOwner_Active(
     /* [in] */ Boolean CRegister.businessChannelOwner.active);

    CARAPI GetBusinessChannelOwner_Active(
     /* [out] */ Boolean* CRegister.businessChannelOwner.active);


   CARAPI SetBusinessChannelOwner_ChartOfAccountsIds(
     /* [in] */ ArrayOf<CFinance.chartOfAccounts> CRegister.businessChannelOwner.chartOfAccountsIds);

    CARAPI GetBusinessChannelOwner_ChartOfAccountsIds(
     /* [out, callee] */ ArrayOf<CFinance.chartOfAccounts>* CRegister.businessChannelOwner.chartOfAccountsIds);


   CARAPI SetBusinessChannelOwner_ChartOfClassesIds(
     /* [in] */ ArrayOf<CFinance.chartOfClasses> CRegister.businessChannelOwner.chartOfClassesIds);

    CARAPI GetBusinessChannelOwner_ChartOfClassesIds(
     /* [out, callee] */ ArrayOf<CFinance.chartOfClasses>* CRegister.businessChannelOwner.chartOfClassesIds);


   CARAPI SetBusinessChannelOwner_BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CRegister.businessChannelOwner.businessDirectorIds);

    CARAPI GetBusinessChannelOwner_BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CRegister.businessChannelOwner.businessDirectorIds);


   CARAPI SetBusinessChannelOwner_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegister.businessChannelOwner.docRefIds);

    CARAPI GetBusinessChannelOwner_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegister.businessChannelOwner.docRefIds);


   CARAPI SetBusinessChannelOwner_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegister.businessChannelOwner.imageRefIds);

    CARAPI GetBusinessChannelOwner_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegister.businessChannelOwner.imageRefIds);


protected:
    // Member variables
const String& mSetSideChainOperator_SideChainOperatorId
String* mGetSideChainOperator_SideChainOperatorId
const String& mSetSideChainOperator_EquivalentBusinessChannelOwnerId
String* mGetSideChainOperator_EquivalentBusinessChannelOwnerId
const String& mSetSideChainOperator_BankName
String* mGetSideChainOperator_BankName
const String& mSetSideChainOperator_BankBSB
String* mGetSideChainOperator_BankBSB
const String& mSetSideChainOperator_BankAccNum
String* mGetSideChainOperator_BankAccNum
const String& mSetSideChainOperator_BusinessName
String* mGetSideChainOperator_BusinessName
ArrayOf<const String&> mSetSideChainOperator_ContactFirstNameList
ArrayOf<String>* mGetSideChainOperator_ContactFirstNameList
ArrayOf<const String&> mSetSideChainOperator_ContactLastNameList
ArrayOf<String>* mGetSideChainOperator_ContactLastNameList
const String& mSetSideChainOperator_StreetAddress
String* mGetSideChainOperator_StreetAddress
const String& mSetSideChainOperator_PostalAddress
String* mGetSideChainOperator_PostalAddress
ArrayOf<const String&> mSetSideChainOperator_EmailAddressList
ArrayOf<String>* mGetSideChainOperator_EmailAddressList
ArrayOf<Int32> mSetSideChainOperator_WorkPhone
ArrayOf<Int32>* mGetSideChainOperator_WorkPhone
ArrayOf<Int32> mSetSideChainOperator_MobilePhone
ArrayOf<Int32>* mGetSideChainOperator_MobilePhone
ArrayOf<Int32> mSetSideChainOperator_HomePhone
ArrayOf<Int32>* mGetSideChainOperator_HomePhone
const String& mSetSideChainOperator_ATOTFN
String* mGetSideChainOperator_ATOTFN
const String& mSetSideChainOperator_ABN
String* mGetSideChainOperator_ABN
const String& mSetSideChainOperator_ACN
String* mGetSideChainOperator_ACN
const String& mSetSideChainOperator_StartTaxYear
String* mGetSideChainOperator_StartTaxYear
Int32 mSetSideChainOperator_NextFinTxNum
Int32* mGetSideChainOperator_NextFinTxNum
Int32 mSetSideChainOperator_NextJobNumPerformed
Int32* mGetSideChainOperator_NextJobNumPerformed
Int32 mSetSideChainOperator_NextLinkingInternalBudgetNum
Int32* mGetSideChainOperator_NextLinkingInternalBudgetNum
ArrayOf<CFinance.chartOfAccounts> mSetSideChainOperator_ChartOfAccountsIds
ArrayOf<CFinance.chartOfAccounts>* mGetSideChainOperator_ChartOfAccountsIds
ArrayOf<CFinance.chartOfClasses> mSetSideChainOperator_ChartOfClassesIds
ArrayOf<CFinance.chartOfClasses>* mGetSideChainOperator_ChartOfClassesIds
ArrayOf<CAdministration.businessDirector> mSetSideChainOperator_BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetSideChainOperator_BusinessDirectorIds
ArrayOf<CAdministration.documents> mSetSideChainOperator_DocRefIds
ArrayOf<CAdministration.documents>* mGetSideChainOperator_DocRefIds
ArrayOf<CAdministration.images> mSetSideChainOperator_ImageRefIds
ArrayOf<CAdministration.images>* mGetSideChainOperator_ImageRefIds
const String& mSetBusinessChannelOwner_BusinessChannelOwnerId
String* mGetBusinessChannelOwner_BusinessChannelOwnerId
const String& mSetBusinessChannelOwner_LinkedToThisSideChainOperatorId
String* mGetBusinessChannelOwner_LinkedToThisSideChainOperatorId
const String& mSetBusinessChannelOwner_LinkedToThisSupplierId
String* mGetBusinessChannelOwner_LinkedToThisSupplierId
const String& mSetBusinessChannelOwner_LinkedToThisSolicitorId
String* mGetBusinessChannelOwner_LinkedToThisSolicitorId
const String& mSetBusinessChannelOwner_LinkedToThisEmployeeId
String* mGetBusinessChannelOwner_LinkedToThisEmployeeId
const String& mSetBusinessChannelOwner_LinkedToThisCustomerId
String* mGetBusinessChannelOwner_LinkedToThisCustomerId
const String& mSetBusinessChannelOwner_LinkedToThisStakeholderId
String* mGetBusinessChannelOwner_LinkedToThisStakeholderId
const String& mSetBusinessChannelOwner_LinkedToThisRegulatorId
String* mGetBusinessChannelOwner_LinkedToThisRegulatorId
const String& mSetBusinessChannelOwner_LinkedToThisBankId
String* mGetBusinessChannelOwner_LinkedToThisBankId
const String& mSetBusinessChannelOwner_BankName
String* mGetBusinessChannelOwner_BankName
const String& mSetBusinessChannelOwner_BankBSB
String* mGetBusinessChannelOwner_BankBSB
const String& mSetBusinessChannelOwner_BankAccNum
String* mGetBusinessChannelOwner_BankAccNum
ArrayOf<const String&> mSetBusinessChannelOwner_AllBranchIds
ArrayOf<String>* mGetBusinessChannelOwner_AllBranchIds
const String& mSetBusinessChannelOwner_BusinessName
String* mGetBusinessChannelOwner_BusinessName
ArrayOf<const String&> mSetBusinessChannelOwner_ContactFirstNameList
ArrayOf<String>* mGetBusinessChannelOwner_ContactFirstNameList
ArrayOf<const String&> mSetBusinessChannelOwner_ContactLastNameList
ArrayOf<String>* mGetBusinessChannelOwner_ContactLastNameList
const String& mSetBusinessChannelOwner_StreetAddress
String* mGetBusinessChannelOwner_StreetAddress
const String& mSetBusinessChannelOwner_PostalAddress
String* mGetBusinessChannelOwner_PostalAddress
ArrayOf<const String&> mSetBusinessChannelOwner_EmailAddressList
ArrayOf<String>* mGetBusinessChannelOwner_EmailAddressList
ArrayOf<Int32> mSetBusinessChannelOwner_WorkPhone
ArrayOf<Int32>* mGetBusinessChannelOwner_WorkPhone
ArrayOf<Int32> mSetBusinessChannelOwner_MobilePhone
ArrayOf<Int32>* mGetBusinessChannelOwner_MobilePhone
ArrayOf<Int32> mSetBusinessChannelOwner_HomePhone
ArrayOf<Int32>* mGetBusinessChannelOwner_HomePhone
const String& mSetBusinessChannelOwner_ATOTFN
String* mGetBusinessChannelOwner_ATOTFN
const String& mSetBusinessChannelOwner_ABN
String* mGetBusinessChannelOwner_ABN
const String& mSetBusinessChannelOwner_ACN
String* mGetBusinessChannelOwner_ACN
const String& mSetBusinessChannelOwner_StartTaxYear
String* mGetBusinessChannelOwner_StartTaxYear
Int32 mSetBusinessChannelOwner_NextFinTxNum
Int32* mGetBusinessChannelOwner_NextFinTxNum
Int32 mSetBusinessChannelOwner_NextJobNumPerformed
Int32* mGetBusinessChannelOwner_NextJobNumPerformed
Int32 mSetBusinessChannelOwner_NextLinkingInternalBudgetNum
Int32* mGetBusinessChannelOwner_NextLinkingInternalBudgetNum
ArrayOf<const String&> mSetBusinessChannelOwner_ContactedWithDetails
ArrayOf<String>* mGetBusinessChannelOwner_ContactedWithDetails
Boolean mSetBusinessChannelOwner_Active
Boolean* mGetBusinessChannelOwner_Active
ArrayOf<CFinance.chartOfAccounts> mSetBusinessChannelOwner_ChartOfAccountsIds
ArrayOf<CFinance.chartOfAccounts>* mGetBusinessChannelOwner_ChartOfAccountsIds
ArrayOf<CFinance.chartOfClasses> mSetBusinessChannelOwner_ChartOfClassesIds
ArrayOf<CFinance.chartOfClasses>* mGetBusinessChannelOwner_ChartOfClassesIds
ArrayOf<CAdministration.businessDirector> mSetBusinessChannelOwner_BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetBusinessChannelOwner_BusinessDirectorIds
ArrayOf<CAdministration.documents> mSetBusinessChannelOwner_DocRefIds
ArrayOf<CAdministration.documents>* mGetBusinessChannelOwner_DocRefIds
ArrayOf<CAdministration.images> mSetBusinessChannelOwner_ImageRefIds
ArrayOf<CAdministration.images>* mGetBusinessChannelOwner_ImageRefIds
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

