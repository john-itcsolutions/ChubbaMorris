#include "elastos/chubbamorris/CRegister.h"
#include <stdio.h>

using Elastos::Core::EIID_IComparable;

namespace Elastos {
namespace ChubbaMorris {

// The class which implements a CAR interface requires macros CAR_INTERFACE_IMPL/CAR_INTERFACE_IMPL
CAR_INTERFACE_IMPL(CRegister, Object, ICH, IComparable)

// Initialize member variables using member initialization lists.
CRegister::CRegister()
    : mSetSideChainOperator_SideChainOperatorId("String")
    , mGetSideChainOperator_SideChainOperatorId(String)
    , mSetSideChainOperator_EquivalentBusinessChannelOwnerId("String")
    , mGetSideChainOperator_EquivalentBusinessChannelOwnerId(String)
    , mSetSideChainOperator_BankName("String")
    , mGetSideChainOperator_BankName(String)
    , mSetSideChainOperator_BankBSB("String")
    , mGetSideChainOperator_BankBSB(String)
    , mSetSideChainOperator_BankAccNum("String")
    , mGetSideChainOperator_BankAccNum(String)
    , mSetSideChainOperator_BusinessName("String")
    , mGetSideChainOperator_BusinessName(String)
    , mSetSideChainOperator_ContactFirstNameList(["String"])
    , mGetSideChainOperator_ContactFirstNameList(["String"])
    , mSetSideChainOperator_ContactLastNameList(["String"])
    , mGetSideChainOperator_ContactLastNameList(["String"])
    , mSetSideChainOperator_StreetAddress("String")
    , mGetSideChainOperator_StreetAddress(String)
    , mSetSideChainOperator_PostalAddress("String")
    , mGetSideChainOperator_PostalAddress(String)
    , mSetSideChainOperator_EmailAddressList(["String"])
    , mGetSideChainOperator_EmailAddressList(["String"])
    , mSetSideChainOperator_WorkPhone(["String"])
    , mGetSideChainOperator_WorkPhone(["String"])
    , mSetSideChainOperator_MobilePhone(["String"])
    , mGetSideChainOperator_MobilePhone(["String"])
    , mSetSideChainOperator_HomePhone(["String"])
    , mGetSideChainOperator_HomePhone(["String"])
    , mSetSideChainOperator_ATOTFN("String")
    , mGetSideChainOperator_ATOTFN(String)
    , mSetSideChainOperator_ABN("String")
    , mGetSideChainOperator_ABN(String)
    , mSetSideChainOperator_ACN("String")
    , mGetSideChainOperator_ACN(String)
    , mSetSideChainOperator_StartTaxYear("String")
    , mGetSideChainOperator_StartTaxYear(String)
    , mSetSideChainOperator_NextFinTxNum(0)
    , mGetSideChainOperator_NextFinTxNum(0)
    , mSetSideChainOperator_NextJobNumPerformed(0)
    , mGetSideChainOperator_NextJobNumPerformed(0)
    , mSetSideChainOperator_NextLinkingInternalBudgetNum(0)
    , mGetSideChainOperator_NextLinkingInternalBudgetNum(0)
    , mSetSideChainOperator_ChartOfAccountsIds(["String"])
    , mGetSideChainOperator_ChartOfAccountsIds(["String"])
    , mSetSideChainOperator_ChartOfClassesIds(["String"])
    , mGetSideChainOperator_ChartOfClassesIds(["String"])
    , mSetSideChainOperator_BusinessDirectorIds(["String"])
    , mGetSideChainOperator_BusinessDirectorIds(["String"])
    , mSetSideChainOperator_DocRefIds(["String"])
    , mGetSideChainOperator_DocRefIds(["String"])
    , mSetSideChainOperator_ImageRefIds(["String"])
    , mGetSideChainOperator_ImageRefIds(["String"])
    , mSetBusinessChannelOwner_BusinessChannelOwnerId("String")
    , mGetBusinessChannelOwner_BusinessChannelOwnerId(String)
    , mSetBusinessChannelOwner_LinkedToThisSideChainOperatorId("String")
    , mGetBusinessChannelOwner_LinkedToThisSideChainOperatorId(String)
    , mSetBusinessChannelOwner_LinkedToThisSupplierId("String")
    , mGetBusinessChannelOwner_LinkedToThisSupplierId(String)
    , mSetBusinessChannelOwner_LinkedToThisSolicitorId("String")
    , mGetBusinessChannelOwner_LinkedToThisSolicitorId(String)
    , mSetBusinessChannelOwner_LinkedToThisEmployeeId("String")
    , mGetBusinessChannelOwner_LinkedToThisEmployeeId(String)
    , mSetBusinessChannelOwner_LinkedToThisCustomerId("String")
    , mGetBusinessChannelOwner_LinkedToThisCustomerId(String)
    , mSetBusinessChannelOwner_LinkedToThisStakeholderId("String")
    , mGetBusinessChannelOwner_LinkedToThisStakeholderId(String)
    , mSetBusinessChannelOwner_LinkedToThisRegulatorId("String")
    , mGetBusinessChannelOwner_LinkedToThisRegulatorId(String)
    , mSetBusinessChannelOwner_LinkedToThisBankId("String")
    , mGetBusinessChannelOwner_LinkedToThisBankId(String)
    , mSetBusinessChannelOwner_BankName("String")
    , mGetBusinessChannelOwner_BankName(String)
    , mSetBusinessChannelOwner_BankBSB("String")
    , mGetBusinessChannelOwner_BankBSB(String)
    , mSetBusinessChannelOwner_BankAccNum("String")
    , mGetBusinessChannelOwner_BankAccNum(String)
    , mSetBusinessChannelOwner_AllBranchIds(["String"])
    , mGetBusinessChannelOwner_AllBranchIds(["String"])
    , mSetBusinessChannelOwner_BusinessName("String")
    , mGetBusinessChannelOwner_BusinessName(String)
    , mSetBusinessChannelOwner_ContactFirstNameList(["String"])
    , mGetBusinessChannelOwner_ContactFirstNameList(["String"])
    , mSetBusinessChannelOwner_ContactLastNameList(["String"])
    , mGetBusinessChannelOwner_ContactLastNameList(["String"])
    , mSetBusinessChannelOwner_StreetAddress("String")
    , mGetBusinessChannelOwner_StreetAddress(String)
    , mSetBusinessChannelOwner_PostalAddress("String")
    , mGetBusinessChannelOwner_PostalAddress(String)
    , mSetBusinessChannelOwner_EmailAddressList(["String"])
    , mGetBusinessChannelOwner_EmailAddressList(["String"])
    , mSetBusinessChannelOwner_WorkPhone(["String"])
    , mGetBusinessChannelOwner_WorkPhone(["String"])
    , mSetBusinessChannelOwner_MobilePhone(["String"])
    , mGetBusinessChannelOwner_MobilePhone(["String"])
    , mSetBusinessChannelOwner_HomePhone(["String"])
    , mGetBusinessChannelOwner_HomePhone(["String"])
    , mSetBusinessChannelOwner_ATOTFN("String")
    , mGetBusinessChannelOwner_ATOTFN(String)
    , mSetBusinessChannelOwner_ABN("String")
    , mGetBusinessChannelOwner_ABN(String)
    , mSetBusinessChannelOwner_ACN("String")
    , mGetBusinessChannelOwner_ACN(String)
    , mSetBusinessChannelOwner_StartTaxYear("String")
    , mGetBusinessChannelOwner_StartTaxYear(String)
    , mSetBusinessChannelOwner_NextFinTxNum(0)
    , mGetBusinessChannelOwner_NextFinTxNum(0)
    , mSetBusinessChannelOwner_NextJobNumPerformed(0)
    , mGetBusinessChannelOwner_NextJobNumPerformed(0)
    , mSetBusinessChannelOwner_NextLinkingInternalBudgetNum(0)
    , mGetBusinessChannelOwner_NextLinkingInternalBudgetNum(0)
    , mSetBusinessChannelOwner_ContactedWithDetails(["String"])
    , mGetBusinessChannelOwner_ContactedWithDetails(["String"])
    , mSetBusinessChannelOwner_Active(false)
    , mGetBusinessChannelOwner_Active(false)
    , mSetBusinessChannelOwner_ChartOfAccountsIds(["String"])
    , mGetBusinessChannelOwner_ChartOfAccountsIds(["String"])
    , mSetBusinessChannelOwner_ChartOfClassesIds(["String"])
    , mGetBusinessChannelOwner_ChartOfClassesIds(["String"])
    , mSetBusinessChannelOwner_BusinessDirectorIds(["String"])
    , mGetBusinessChannelOwner_BusinessDirectorIds(["String"])
    , mSetBusinessChannelOwner_DocRefIds(["String"])
    , mGetBusinessChannelOwner_DocRefIds(["String"])
    , mSetBusinessChannelOwner_ImageRefIds(["String"])
    , mGetBusinessChannelOwner_ImageRefIds(["String"])
{
}

CRegister::~CRegister()
{
    //
}

ECode CRegister::constructor()
{
    return NOERROR;
}

ECode CRegister::CompareTo(
    /* [in] */ IInterface* another,
    /* [out] */ Int32* result)
{
    VALIDATE_NOT_NULL(result);

    ICRegister* oa = ICH::Probe(another);
    if (oa == NULL) {
        *result = 1;
        return E_CLASS_CAST_EXCEPTION;
    }

    CRegister* a = (CRegister*)oa;
    *result = mName.Compare(a->mName);
    return NOERROR;
}

ECode CRegister::SetName(
    /* [in] */ const String& name)
{
    mName = name;
    return NOERROR;
}

ECode CRegister::GetName(
    /* [out] */ String* name)
{
    VALIDATE_NOT_NULL(name)
    *name = mName;
    return NOERROR;
}

ECode CRegister::SetAge(
    /* [in] */ Int32 age)
{
    mAge = age;
    return NOERROR;
}

ECode CRegister::GetAge(
    /* [out] */ Int32* age)
{
    VALIDATE_NOT_NULL(age)
    *age = mAge;
    return NOERROR;
}

ECode CRegister::CanFly(
    /* [out] */ Boolean* canFly)
{
    VALIDATE_NOT_NULL(canFly);
    *canFly = FALSE;
    return NOERROR;
}

} // ChubbaMorris
} // Elastos

