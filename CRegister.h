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
  
   CARAPI SetSideChainOperator.SideChainOperatorId(
     /* [in] */ const String& CRegister.sideChainOperator.sideChainOperatorId);

    CARAPI GetSideChainOperator.SideChainOperatorId(
     /* [out] */ String* CRegister.sideChainOperator.sideChainOperatorId);


   CARAPI SetSideChainOperator.EquivalentBusinessChannelOwnerId(
     /* [in] */ const String& CRegister.sideChainOperator.equivalentBusinessChannelOwnerId);

    CARAPI GetSideChainOperator.EquivalentBusinessChannelOwnerId(
     /* [out] */ String* CRegister.sideChainOperator.equivalentBusinessChannelOwnerId);


   CARAPI SetSideChainOperator.BankName(
     /* [in] */ const String& CRegister.sideChainOperator.bankName);

    CARAPI GetSideChainOperator.BankName(
     /* [out] */ String* CRegister.sideChainOperator.bankName);


   CARAPI SetSideChainOperator.BankBSB(
     /* [in] */ const String& CRegister.sideChainOperator.bankBSB);

    CARAPI GetSideChainOperator.BankBSB(
     /* [out] */ String* CRegister.sideChainOperator.bankBSB);


   CARAPI SetSideChainOperator.BankAccNum(
     /* [in] */ const String& CRegister.sideChainOperator.bankAccNum);

    CARAPI GetSideChainOperator.BankAccNum(
     /* [out] */ String* CRegister.sideChainOperator.bankAccNum);


   CARAPI SetSideChainOperator.BusinessName(
     /* [in] */ const String& CRegister.sideChainOperator.businessName);

    CARAPI GetSideChainOperator.BusinessName(
     /* [out] */ String* CRegister.sideChainOperator.businessName);


   CARAPI SetSideChainOperator.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegister.sideChainOperator.contactFirstNameList);

    CARAPI GetSideChainOperator.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegister.sideChainOperator.contactFirstNameList);


   CARAPI SetSideChainOperator.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegister.sideChainOperator.contactLastNameList);

    CARAPI GetSideChainOperator.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegister.sideChainOperator.contactLastNameList);


   CARAPI SetSideChainOperator.StreetAddress(
     /* [in] */ const String& CRegister.sideChainOperator.streetAddress);

    CARAPI GetSideChainOperator.StreetAddress(
     /* [out] */ String* CRegister.sideChainOperator.streetAddress);


   CARAPI SetSideChainOperator.PostalAddress(
     /* [in] */ const String& CRegister.sideChainOperator.postalAddress);

    CARAPI GetSideChainOperator.PostalAddress(
     /* [out] */ String* CRegister.sideChainOperator.postalAddress);


   CARAPI SetSideChainOperator.EmailAddressList(
     /* [in] */ ArrayOf<const String&> CRegister.sideChainOperator.emailAddressList);

    CARAPI GetSideChainOperator.EmailAddressList(
     /* [out, callee] */ ArrayOf<String>* CRegister.sideChainOperator.emailAddressList);


   CARAPI SetSideChainOperator.WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegister.sideChainOperator.workPhone);

    CARAPI GetSideChainOperator.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.sideChainOperator.workPhone);


   CARAPI SetSideChainOperator.MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegister.sideChainOperator.mobilePhone);

    CARAPI GetSideChainOperator.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.sideChainOperator.mobilePhone);


   CARAPI SetSideChainOperator.HomePhone(
     /* [in] */ ArrayOf<Int32> CRegister.sideChainOperator.homePhone);

    CARAPI GetSideChainOperator.HomePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.sideChainOperator.homePhone);


   CARAPI SetSideChainOperator.ATOTFN(
     /* [in] */ const String& CRegister.sideChainOperator.aTOTFN);

    CARAPI GetSideChainOperator.ATOTFN(
     /* [out] */ String* CRegister.sideChainOperator.aTOTFN);


   CARAPI SetSideChainOperator.ABN(
     /* [in] */ const String& CRegister.sideChainOperator.aBN);

    CARAPI GetSideChainOperator.ABN(
     /* [out] */ String* CRegister.sideChainOperator.aBN);


   CARAPI SetSideChainOperator.ACN(
     /* [in] */ const String& CRegister.sideChainOperator.aCN);

    CARAPI GetSideChainOperator.ACN(
     /* [out] */ String* CRegister.sideChainOperator.aCN);


   CARAPI SetSideChainOperator.StartTaxYear(
     /* [in] */ const String& CRegister.sideChainOperator.startTaxYear);

    CARAPI GetSideChainOperator.StartTaxYear(
     /* [out] */ String* CRegister.sideChainOperator.startTaxYear);


   CARAPI SetSideChainOperator.NextFinTxNum(
     /* [in] */ Int32 CRegister.sideChainOperator.nextFinTxNum);

    CARAPI GetSideChainOperator.NextFinTxNum(
     /* [out] */ Int32* CRegister.sideChainOperator.nextFinTxNum);


   CARAPI SetSideChainOperator.NextJobNumPerformed(
     /* [in] */ Int32 CRegister.sideChainOperator.nextJobNumPerformed);

    CARAPI GetSideChainOperator.NextJobNumPerformed(
     /* [out] */ Int32* CRegister.sideChainOperator.nextJobNumPerformed);


   CARAPI SetSideChainOperator.NextLinkingInternalBudgetNum(
     /* [in] */ Int32 CRegister.sideChainOperator.nextLinkingInternalBudgetNum);

    CARAPI GetSideChainOperator.NextLinkingInternalBudgetNum(
     /* [out] */ Int32* CRegister.sideChainOperator.nextLinkingInternalBudgetNum);


   CARAPI SetSideChainOperator.ChartOfAccountsIds(
     /* [in] */ ArrayOf<CFinance.chartOfAccounts> CRegister.sideChainOperator.chartOfAccountsIds);

    CARAPI GetSideChainOperator.ChartOfAccountsIds(
     /* [out, callee] */ ArrayOf<CFinance.chartOfAccounts>* CRegister.sideChainOperator.chartOfAccountsIds);


   CARAPI SetSideChainOperator.ChartOfClassesIds(
     /* [in] */ ArrayOf<CFinance.chartOfClasses> CRegister.sideChainOperator.chartOfClassesIds);

    CARAPI GetSideChainOperator.ChartOfClassesIds(
     /* [out, callee] */ ArrayOf<CFinance.chartOfClasses>* CRegister.sideChainOperator.chartOfClassesIds);


   CARAPI SetSideChainOperator.BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CRegister.sideChainOperator.businessDirectorIds);

    CARAPI GetSideChainOperator.BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CRegister.sideChainOperator.businessDirectorIds);


   CARAPI SetSideChainOperator.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegister.sideChainOperator.docRefIds);

    CARAPI GetSideChainOperator.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegister.sideChainOperator.docRefIds);


   CARAPI SetSideChainOperator.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegister.sideChainOperator.imageRefIds);

    CARAPI GetSideChainOperator.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegister.sideChainOperator.imageRefIds);


   CARAPI SetBusinessChannelOwner.BusinessChannelOwnerId(
     /* [in] */ const String& CRegister.businessChannelOwner.businessChannelOwnerId);

    CARAPI GetBusinessChannelOwner.BusinessChannelOwnerId(
     /* [out] */ String* CRegister.businessChannelOwner.businessChannelOwnerId);


   CARAPI SetBusinessChannelOwner.LinkedToThisSideChainOperatorId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisSideChainOperatorId);

    CARAPI GetBusinessChannelOwner.LinkedToThisSideChainOperatorId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisSideChainOperatorId);


   CARAPI SetBusinessChannelOwner.LinkedToThisSupplierId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisSupplierId);

    CARAPI GetBusinessChannelOwner.LinkedToThisSupplierId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisSupplierId);


   CARAPI SetBusinessChannelOwner.LinkedToThisSolicitorId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisSolicitorId);

    CARAPI GetBusinessChannelOwner.LinkedToThisSolicitorId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisSolicitorId);


   CARAPI SetBusinessChannelOwner.LinkedToThisEmployeeId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisEmployeeId);

    CARAPI GetBusinessChannelOwner.LinkedToThisEmployeeId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisEmployeeId);


   CARAPI SetBusinessChannelOwner.LinkedToThisCustomerId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisCustomerId);

    CARAPI GetBusinessChannelOwner.LinkedToThisCustomerId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisCustomerId);


   CARAPI SetBusinessChannelOwner.LinkedToThisStakeholderId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisStakeholderId);

    CARAPI GetBusinessChannelOwner.LinkedToThisStakeholderId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisStakeholderId);


   CARAPI SetBusinessChannelOwner.LinkedToThisRegulatorId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisRegulatorId);

    CARAPI GetBusinessChannelOwner.LinkedToThisRegulatorId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisRegulatorId);

   CARAPI SetBusinessChannelOwner.LinkedToThisBankId(
     /* [in] */ const String& CRegister.businessChannelOwner.linkedToThisBankId);

    CARAPI GetBusinessChannelOwner.LinkedToThisBankId(
     /* [out] */ String* CRegister.businessChannelOwner.linkedToThisBankId);


   CARAPI SetBusinessChannelOwner.BankName(
     /* [in] */ const String& CRegister.businessChannelOwner.bankName);

    CARAPI GetBusinessChannelOwner.BankName(
     /* [out] */ String* CRegister.businessChannelOwner.bankName);


   CARAPI SetBusinessChannelOwner.BankBSB(
     /* [in] */ const String& CRegister.businessChannelOwner.bankBSB);

    CARAPI GetBusinessChannelOwner.BankBSB(
     /* [out] */ String* CRegister.businessChannelOwner.bankBSB);


   CARAPI SetBusinessChannelOwner.BankAccNum(
     /* [in] */ const String& CRegister.businessChannelOwner.bankAccNum);

    CARAPI GetBusinessChannelOwner.BankAccNum(
     /* [out] */ String* CRegister.businessChannelOwner.bankAccNum);


   CARAPI SetBusinessChannelOwner.AllBranchIds(
     /* [in] */ ArrayOf<const String&> CRegister.businessChannelOwner.allBranchIds);

    CARAPI GetBusinessChannelOwner.AllBranchIds(
     /* [out, callee] */ ArrayOf<String>* CRegister.businessChannelOwner.allBranchIds);


   CARAPI SetBusinessChannelOwner.BusinessName(
     /* [in] */ const String& CRegister.businessChannelOwner.businessName);

    CARAPI GetBusinessChannelOwner.BusinessName(
     /* [out] */ String* CRegister.businessChannelOwner.businessName);


   CARAPI SetBusinessChannelOwner.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CRegister.businessChannelOwner.contactFirstNameList);

    CARAPI GetBusinessChannelOwner.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CRegister.businessChannelOwner.contactFirstNameList);


   CARAPI SetBusinessChannelOwner.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CRegister.businessChannelOwner.contactLastNameList);

    CARAPI GetBusinessChannelOwner.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CRegister.businessChannelOwner.contactLastNameList);


   CARAPI SetBusinessChannelOwner.StreetAddress(
     /* [in] */ const String& CRegister.businessChannelOwner.streetAddress);

    CARAPI GetBusinessChannelOwner.StreetAddress(
     /* [out] */ String* CRegister.businessChannelOwner.streetAddress);


   CARAPI SetBusinessChannelOwner.PostalAddress(
     /* [in] */ const String& CRegister.businessChannelOwner.postalAddress);

    CARAPI GetBusinessChannelOwner.PostalAddress(
     /* [out] */ String* CRegister.businessChannelOwner.postalAddress);


   CARAPI SetBusinessChannelOwner.EmailAddressList(
     /* [in] */ ArrayOf<const String&> CRegister.businessChannelOwner.emailAddressList);

    CARAPI GetBusinessChannelOwner.EmailAddressList(
     /* [out, callee] */ ArrayOf<String>* CRegister.businessChannelOwner.emailAddressList);


   CARAPI SetBusinessChannelOwner.WorkPhone(
     /* [in] */ ArrayOf<Int32> CRegister.businessChannelOwner.workPhone);

    CARAPI GetBusinessChannelOwner.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.businessChannelOwner.workPhone);


   CARAPI SetBusinessChannelOwner.MobilePhone(
     /* [in] */ ArrayOf<Int32> CRegister.businessChannelOwner.mobilePhone);

    CARAPI GetBusinessChannelOwner.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.businessChannelOwner.mobilePhone);


   CARAPI SetBusinessChannelOwner.HomePhone(
     /* [in] */ ArrayOf<Int32> CRegister.businessChannelOwner.homePhone);

    CARAPI GetBusinessChannelOwner.HomePhone(
     /* [out, callee] */ ArrayOf<Int32>* CRegister.businessChannelOwner.homePhone);


   CARAPI SetBusinessChannelOwner.ATOTFN(
     /* [in] */ const String& CRegister.businessChannelOwner.aTOTFN);

    CARAPI GetBusinessChannelOwner.ATOTFN(
     /* [out] */ String* CRegister.businessChannelOwner.aTOTFN);


   CARAPI SetBusinessChannelOwner.ABN(
     /* [in] */ const String& CRegister.businessChannelOwner.aBN);

    CARAPI GetBusinessChannelOwner.ABN(
     /* [out] */ String* CRegister.businessChannelOwner.aBN);


   CARAPI SetBusinessChannelOwner.ACN(
     /* [in] */ const String& CRegister.businessChannelOwner.aCN);

    CARAPI GetBusinessChannelOwner.ACN(
     /* [out] */ String* CRegister.businessChannelOwner.aCN);


   CARAPI SetBusinessChannelOwner.StartTaxYear(
     /* [in] */ const String& CRegister.businessChannelOwner.startTaxYear);

    CARAPI GetBusinessChannelOwner.StartTaxYear(
     /* [out] */ String* CRegister.businessChannelOwner.startTaxYear);


   CARAPI SetBusinessChannelOwner.NextFinTxNum(
     /* [in] */ Int32 CRegister.businessChannelOwner.nextFinTxNum);

    CARAPI GetBusinessChannelOwner.NextFinTxNum(
     /* [out] */ Int32* CRegister.businessChannelOwner.nextFinTxNum);


   CARAPI SetBusinessChannelOwner.NextJobNumPerformed(
     /* [in] */ Int32 CRegister.businessChannelOwner.nextJobNumPerformed);

    CARAPI GetBusinessChannelOwner.NextJobNumPerformed(
     /* [out] */ Int32* CRegister.businessChannelOwner.nextJobNumPerformed);


   CARAPI SetBusinessChannelOwner.NextLinkingInternalBudgetNum(
     /* [in] */ Int32 CRegister.businessChannelOwner.nextLinkingInternalBudgetNum);

    CARAPI GetBusinessChannelOwner.NextLinkingInternalBudgetNum(
     /* [out] */ Int32* CRegister.businessChannelOwner.nextLinkingInternalBudgetNum);


   CARAPI SetBusinessChannelOwner.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CRegister.businessChannelOwner.contactedWithDetails);

    CARAPI GetBusinessChannelOwner.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CRegister.businessChannelOwner.contactedWithDetails);


   CARAPI SetBusinessChannelOwner.Active(
     /* [in] */ Boolean CRegister.businessChannelOwner.active);

    CARAPI GetBusinessChannelOwner.Active(
     /* [out] */ Boolean* CRegister.businessChannelOwner.active);


   CARAPI SetBusinessChannelOwner.ChartOfAccountsIds(
     /* [in] */ ArrayOf<CFinance.chartOfAccounts> CRegister.businessChannelOwner.chartOfAccountsIds);

    CARAPI GetBusinessChannelOwner.ChartOfAccountsIds(
     /* [out, callee] */ ArrayOf<CFinance.chartOfAccounts>* CRegister.businessChannelOwner.chartOfAccountsIds);


   CARAPI SetBusinessChannelOwner.ChartOfClassesIds(
     /* [in] */ ArrayOf<CFinance.chartOfClasses> CRegister.businessChannelOwner.chartOfClassesIds);

    CARAPI GetBusinessChannelOwner.ChartOfClassesIds(
     /* [out, callee] */ ArrayOf<CFinance.chartOfClasses>* CRegister.businessChannelOwner.chartOfClassesIds);


   CARAPI SetBusinessChannelOwner.BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CRegister.businessChannelOwner.businessDirectorIds);

    CARAPI GetBusinessChannelOwner.BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CRegister.businessChannelOwner.businessDirectorIds);


   CARAPI SetBusinessChannelOwner.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CRegister.businessChannelOwner.docRefIds);

    CARAPI GetBusinessChannelOwner.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CRegister.businessChannelOwner.docRefIds);


   CARAPI SetBusinessChannelOwner.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CRegister.businessChannelOwner.imageRefIds);

    CARAPI GetBusinessChannelOwner.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CRegister.businessChannelOwner.imageRefIds);


protected:
    // Member variables
const String& mSetSideChainOperator.SideChainOperatorId
String* mGetSideChainOperator.SideChainOperatorId
const String& mSetSideChainOperator.EquivalentBusinessChannelOwnerId
String* mGetSideChainOperator.EquivalentBusinessChannelOwnerId
const String& mSetSideChainOperator.BankName
String* mGetSideChainOperator.BankName
const String& mSetSideChainOperator.BankBSB
String* mGetSideChainOperator.BankBSB
const String& mSetSideChainOperator.BankAccNum
String* mGetSideChainOperator.BankAccNum
const String& mSetSideChainOperator.BusinessName
String* mGetSideChainOperator.BusinessName
ArrayOf<const String&> mSetSideChainOperator.ContactFirstNameList
ArrayOf<String>* mGetSideChainOperator.ContactFirstNameList
ArrayOf<const String&> mSetSideChainOperator.ContactLastNameList
ArrayOf<String>* mGetSideChainOperator.ContactLastNameList
const String& mSetSideChainOperator.StreetAddress
String* mGetSideChainOperator.StreetAddress
const String& mSetSideChainOperator.PostalAddress
String* mGetSideChainOperator.PostalAddress
ArrayOf<const String&> mSetSideChainOperator.EmailAddressList
ArrayOf<String>* mGetSideChainOperator.EmailAddressList
ArrayOf<Int32> mSetSideChainOperator.WorkPhone
ArrayOf<Int32>* mGetSideChainOperator.WorkPhone
ArrayOf<Int32> mSetSideChainOperator.MobilePhone
ArrayOf<Int32>* mGetSideChainOperator.MobilePhone
ArrayOf<Int32> mSetSideChainOperator.HomePhone
ArrayOf<Int32>* mGetSideChainOperator.HomePhone
const String& mSetSideChainOperator.ATOTFN
String* mGetSideChainOperator.ATOTFN
const String& mSetSideChainOperator.ABN
String* mGetSideChainOperator.ABN
const String& mSetSideChainOperator.ACN
String* mGetSideChainOperator.ACN
const String& mSetSideChainOperator.StartTaxYear
String* mGetSideChainOperator.StartTaxYear
Int32 mSetSideChainOperator.NextFinTxNum
Int32* mGetSideChainOperator.NextFinTxNum
Int32 mSetSideChainOperator.NextJobNumPerformed
Int32* mGetSideChainOperator.NextJobNumPerformed
Int32 mSetSideChainOperator.NextLinkingInternalBudgetNum
Int32* mGetSideChainOperator.NextLinkingInternalBudgetNum
ArrayOf<CFinance.chartOfAccounts> mSetSideChainOperator.ChartOfAccountsIds
ArrayOf<CFinance.chartOfAccounts>* mGetSideChainOperator.ChartOfAccountsIds
ArrayOf<CFinance.chartOfClasses> mSetSideChainOperator.ChartOfClassesIds
ArrayOf<CFinance.chartOfClasses>* mGetSideChainOperator.ChartOfClassesIds
ArrayOf<CAdministration.businessDirector> mSetSideChainOperator.BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetSideChainOperator.BusinessDirectorIds
ArrayOf<CAdministration.documents> mSetSideChainOperator.DocRefIds
ArrayOf<CAdministration.documents>* mGetSideChainOperator.DocRefIds
ArrayOf<CAdministration.images> mSetSideChainOperator.ImageRefIds
ArrayOf<CAdministration.images>* mGetSideChainOperator.ImageRefIds
const String& mSetBusinessChannelOwner.BusinessChannelOwnerId
String* mGetBusinessChannelOwner.BusinessChannelOwnerId
const String& mSetBusinessChannelOwner.LinkedToThisSideChainOperatorId
String* mGetBusinessChannelOwner.LinkedToThisSideChainOperatorId
const String& mSetBusinessChannelOwner.LinkedToThisSupplierId
String* mGetBusinessChannelOwner.LinkedToThisSupplierId
const String& mSetBusinessChannelOwner.LinkedToThisSolicitorId
String* mGetBusinessChannelOwner.LinkedToThisSolicitorId
const String& mSetBusinessChannelOwner.LinkedToThisEmployeeId
String* mGetBusinessChannelOwner.LinkedToThisEmployeeId
const String& mSetBusinessChannelOwner.LinkedToThisCustomerId
String* mGetBusinessChannelOwner.LinkedToThisCustomerId
const String& mSetBusinessChannelOwner.LinkedToThisStakeholderId
String* mGetBusinessChannelOwner.LinkedToThisStakeholderId
const String& mSetBusinessChannelOwner.LinkedToThisRegulatorId
String* mGetBusinessChannelOwner.LinkedToThisRegulatorId
const String& mSetBusinessChannelOwner.LinkedToThisBankId
String* mGetBusinessChannelOwner.LinkedToThisBankId
const String& mSetBusinessChannelOwner.BankName
String* mGetBusinessChannelOwner.BankName
const String& mSetBusinessChannelOwner.BankBSB
String* mGetBusinessChannelOwner.BankBSB
const String& mSetBusinessChannelOwner.BankAccNum
String* mGetBusinessChannelOwner.BankAccNum
ArrayOf<const String&> mSetBusinessChannelOwner.AllBranchIds
ArrayOf<String>* mGetBusinessChannelOwner.AllBranchIds
const String& mSetBusinessChannelOwner.BusinessName
String* mGetBusinessChannelOwner.BusinessName
ArrayOf<const String&> mSetBusinessChannelOwner.ContactFirstNameList
ArrayOf<String>* mGetBusinessChannelOwner.ContactFirstNameList
ArrayOf<const String&> mSetBusinessChannelOwner.ContactLastNameList
ArrayOf<String>* mGetBusinessChannelOwner.ContactLastNameList
const String& mSetBusinessChannelOwner.StreetAddress
String* mGetBusinessChannelOwner.StreetAddress
const String& mSetBusinessChannelOwner.PostalAddress
String* mGetBusinessChannelOwner.PostalAddress
ArrayOf<const String&> mSetBusinessChannelOwner.EmailAddressList
ArrayOf<String>* mGetBusinessChannelOwner.EmailAddressList
ArrayOf<Int32> mSetBusinessChannelOwner.WorkPhone
ArrayOf<Int32>* mGetBusinessChannelOwner.WorkPhone
ArrayOf<Int32> mSetBusinessChannelOwner.MobilePhone
ArrayOf<Int32>* mGetBusinessChannelOwner.MobilePhone
ArrayOf<Int32> mSetBusinessChannelOwner.HomePhone
ArrayOf<Int32>* mGetBusinessChannelOwner.HomePhone
const String& mSetBusinessChannelOwner.ATOTFN
String* mGetBusinessChannelOwner.ATOTFN
const String& mSetBusinessChannelOwner.ABN
String* mGetBusinessChannelOwner.ABN
const String& mSetBusinessChannelOwner.ACN
String* mGetBusinessChannelOwner.ACN
const String& mSetBusinessChannelOwner.StartTaxYear
String* mGetBusinessChannelOwner.StartTaxYear
Int32 mSetBusinessChannelOwner.NextFinTxNum
Int32* mGetBusinessChannelOwner.NextFinTxNum
Int32 mSetBusinessChannelOwner.NextJobNumPerformed
Int32* mGetBusinessChannelOwner.NextJobNumPerformed
Int32 mSetBusinessChannelOwner.NextLinkingInternalBudgetNum
Int32* mGetBusinessChannelOwner.NextLinkingInternalBudgetNum
ArrayOf<const String&> mSetBusinessChannelOwner.ContactedWithDetails
ArrayOf<String>* mGetBusinessChannelOwner.ContactedWithDetails
Boolean mSetBusinessChannelOwner.Active
Boolean* mGetBusinessChannelOwner.Active
ArrayOf<CFinance.chartOfAccounts> mSetBusinessChannelOwner.ChartOfAccountsIds
ArrayOf<CFinance.chartOfAccounts>* mGetBusinessChannelOwner.ChartOfAccountsIds
ArrayOf<CFinance.chartOfClasses> mSetBusinessChannelOwner.ChartOfClassesIds
ArrayOf<CFinance.chartOfClasses>* mGetBusinessChannelOwner.ChartOfClassesIds
ArrayOf<CAdministration.businessDirector> mSetBusinessChannelOwner.BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetBusinessChannelOwner.BusinessDirectorIds
ArrayOf<CAdministration.documents> mSetBusinessChannelOwner.DocRefIds
ArrayOf<CAdministration.documents>* mGetBusinessChannelOwner.DocRefIds
ArrayOf<CAdministration.images> mSetBusinessChannelOwner.ImageRefIds
ArrayOf<CAdministration.images>* mGetBusinessChannelOwner.ImageRefIds
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

