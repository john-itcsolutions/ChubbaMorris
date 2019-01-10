#include "elastos/chubbamorris/CSupplier.h"
#include <stdio.h>

using Elastos::Core::EIID_IComparable;

namespace Elastos {
namespace ChubbaMorris {

// The class which implements a CAR interface requires macros CAR_INTERFACE_IMPL/CAR_INTERFACE_IMPL
CAR_INTERFACE_IMPL(CSupplier, Object, ICH, IComparable)

// Initialize member variables using member initialization lists.
CSupplier::CSupplier()
    : mSetSupplier_SupplierId("String")
    , mGetSupplier_SupplierId("String")
    , mSetSupplier_ABN("String")
    , mGetSupplier_ABN("String")
    , mSetSupplier_SupplierName("String")
    , mGetSupplier_SupplierName("String")
    , mSetSupplier_ContactFirstNameList(["String"])
    , mGetSupplier_ContactFirstNameList(["String"])
    , mSetSupplier_ContactLastNameList(["String"])
    , mGetSupplier_ContactLastNameList(["String"])
    , mSetSupplier_ResidentialAddress("String")
    , mGetSupplier_ResidentialAddress("String")
    , mSetSupplier_PostalAddress("String")
    , mGetSupplier_PostalAddress("String")
    , mSetSupplier_EmailAddresses(["String"])
    , mGetSupplier_EmailAddresses(["String"])
    , mSetSupplier_MobilePhone(["String"])
    , mGetSupplier_MobilePhone(["String"])
    , mSetSupplier_WorkPhone(["String"])
    , mGetSupplier_WorkPhone(["String"])
    , mSetSupplier_ContactedWithDetails(["String"])
    , mGetSupplier_ContactedWithDetails(["String"])
    , mSetSupplier_JobTypeIds(["String"])
    , mGetSupplier_JobTypeIds(["String"])
    , mSetSupplier_ServiceIds(["String"])
    , mGetSupplier_ServiceIds(["String"])
    , mSetSupplier_SupplierTypeId("String")
    , mGetSupplier_SupplierTypeId("String")
    , mSetSupplier_DocRefIds(["String"])
    , mGetSupplier_DocRefIds(["String"])
    , mSetSupplier_ImageRefIds(["String"])
    , mGetSupplier_ImageRefIds(["String"])
    , mSetSupplier_BusinessChannelOwnerId("String")
    , mGetSupplier_BusinessChannelOwnerId("String")
    , mSetSupplierType_SupplierTypeId("String")
    , mGetSupplierType_SupplierTypeId("String")
    , mSetSupplierType_Description("String")
    , mGetSupplierType_Description("String")
    , mSetSupplierType_SuppTypeName("String")
    , mGetSupplierType_SuppTypeName("String")
    , mSetSupplierType_ServiceIds(["String"])
    , mGetSupplierType_ServiceIds(["String"])
    , mSetSupplierType_BusinessChannelOwnerId("String")
    , mGetSupplierType_BusinessChannelOwnerId("String")
    , mSetSupplierType_BranchId("String")
    , mGetSupplierType_BranchId("String")
    , mSetSupplierType_DeptId("String")
    , mGetSupplierType_DeptId("String")
    , mSetSupplierType_DocRefIds(["String"])
    , mGetSupplierType_DocRefIds(["String"])
    , mSetSupplierType_ImageRefIds(["String"])
    , mGetSupplierType_ImageRefIds(["String"])
    , mSetSupplierType_VideoRefIds(["String"])
    , mGetSupplierType_VideoRefIds(["String"])
    , mSetSuperannuationFund_InsureFundId("String")
    , mGetSuperannuationFund_InsureFundId("String")
    , mSetSuperannuationFund_SuperannuationCompanyName("String")
    , mGetSuperannuationFund_SuperannuationCompanyName("String")
    , mSetSuperannuationFund_LinkedToThisSupplierId("String")
    , mGetSuperannuationFund_LinkedToThisSupplierId("String")
    , mSetSuperannuationFund_ContactFirstNameList(["String"])
    , mGetSuperannuationFund_ContactFirstNameList(["String"])
    , mSetSuperannuationFund_ContactLastNameList(["String"])
    , mGetSuperannuationFund_ContactLastNameList(["String"])
    , mSetSuperannuationFund_EmailAddresses(["String"])
    , mGetSuperannuationFund_EmailAddresses(["String"])
    , mSetSuperannuationFund_MobilePhone(["String"])
    , mGetSuperannuationFund_MobilePhone(["String"])
    , mSetSuperannuationFund_WorkPhone(["String"])
    , mGetSuperannuationFund_WorkPhone(["String"])
    , mSetSuperannuationFund_ABN("String")
    , mGetSuperannuationFund_ABN("String")
    , mSetSuperannuationFund_DocRefIds(["String"])
    , mGetSuperannuationFund_DocRefIds(["String"])
    , mSetSuperannuationFund_ImageRefIds(["String"])
    , mGetSuperannuationFund_ImageRefIds(["String"])
    , mSetSuperannuationFund_SupplierId("String")
    , mGetSuperannuationFund_SupplierId("String")
    , mSetSuperannuationFund_BusinessChannelOwnerId("String")
    , mGetSuperannuationFund_BusinessChannelOwnerId("String")
    , mSetInsuranceFund_InsureFundId("String")
    , mGetInsuranceFund_InsureFundId("String")
    , mSetInsuranceFund_InsuranceCompanyName("String")
    , mGetInsuranceFund_InsuranceCompanyName("String")
    , mSetInsuranceFund_LinkedToThisSupplierId("String")
    , mGetInsuranceFund_LinkedToThisSupplierId("String")
    , mSetInsuranceFund_ContactFirstNameList(["String"])
    , mGetInsuranceFund_ContactFirstNameList(["String"])
    , mSetInsuranceFund_ContactLastNameList(["String"])
    , mGetInsuranceFund_ContactLastNameList(["String"])
    , mSetInsuranceFund_EmailAddresses(["String"])
    , mGetInsuranceFund_EmailAddresses(["String"])
    , mSetInsuranceFund_MobilePhone(["String"])
    , mGetInsuranceFund_MobilePhone(["String"])
    , mSetInsuranceFund_WorkPhone(["String"])
    , mGetInsuranceFund_WorkPhone(["String"])
    , mSetInsuranceFund_ABN("String")
    , mGetInsuranceFund_ABN("String")
    , mSetInsuranceFund_DocRefIds(["String"])
    , mGetInsuranceFund_DocRefIds(["String"])
    , mSetInsuranceFund_ImageRefIds(["String"])
    , mGetInsuranceFund_ImageRefIds(["String"])
    , mSetInsuranceFund_SupplierId("String")
    , mGetInsuranceFund_SupplierId("String")
    , mSetInsuranceFund_BusinessChannelOwnerId("String")
    , mGetInsuranceFund_BusinessChannelOwnerId("String")
    , mSetDistributor_DistributorId("String")
    , mGetDistributor_DistributorId("String")
    , mSetDistributor_DistributorName("String")
    , mGetDistributor_DistributorName("String")
    , mSetDistributor_ABN("String")
    , mGetDistributor_ABN("String")
    , mSetDistributor_ContactFirstNameList(["String"])
    , mGetDistributor_ContactFirstNameList(["String"])
    , mSetDistributor_ContactLastNameList(["String"])
    , mGetDistributor_ContactLastNameList(["String"])
    , mSetDistributor_StreetAddress("String")
    , mGetDistributor_StreetAddress("String")
    , mSetDistributor_PostalAddress("String")
    , mGetDistributor_PostalAddress("String")
    , mSetDistributor_EmailAddresses(["String"])
    , mGetDistributor_EmailAddresses(["String"])
    , mSetDistributor_WebAddress("String")
    , mGetDistributor_WebAddress("String")
    , mSetDistributor_MobilePhone(["String"])
    , mGetDistributor_MobilePhone(["String"])
    , mSetDistributor_WorkPhone(["String"])
    , mGetDistributor_WorkPhone(["String"])
    , mSetDistributor_ContactedWithDetails(["String"])
    , mGetDistributor_ContactedWithDetails(["String"])
{
}

CSupplier::~CSupplier()
{
    // 
}

ECode CSupplier::constructor()
{
    return NOERROR;
}

ECode CSupplier::CompareTo(
    /* [in] */ IInterface* another,
    /* [out] */ Int32* result)
{
    VALIDATE_NOT_NULL(result);

    ICSupplier* oa = ICH::Probe(another);
    if (oa == NULL) {
        *result = 1;
        return E_CLASS_CAST_EXCEPTION;
    }

    CSupplier* a = (CSupplier*)oa;
    *result = mName.Compare(a->mName);
    return NOERROR;
}

ECode CSupplier::SetName(
    /* [in] */ const String& name)
{
    mName = name;
    return NOERROR;
}

ECode CSupplier::GetName(
    /* [out] */ String* name)
{
    VALIDATE_NOT_NULL(name)
    *name = mName;
    return NOERROR;
}

ECode CSupplier::SetAge(
    /* [in] */ Int32 age)
{
    mAge = age;
    return NOERROR;
}

ECode CSupplier::GetAge(
    /* [out] */ Int32* age)
{
    VALIDATE_NOT_NULL(age)
    *age = mAge;
    return NOERROR;
}

ECode CSupplier::CanFly(
    /* [out] */ Boolean* canFly)
{
    VALIDATE_NOT_NULL(canFly);
    *canFly = FALSE;
    return NOERROR;
}

} // ChubbaMorris
} // Elastos

