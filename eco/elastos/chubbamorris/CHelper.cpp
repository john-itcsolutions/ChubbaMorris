#include "elastos/chubbamorris/CHelper.h"
#include <stdio.h>

using Elastos::Core::EIID_IComparable;

namespace Elastos {
namespace ChubbaMorris {

// The class which implements a CAR interface requires macros CAR_INTERFACE_IMPL/CAR_INTERFACE_IMPL
CAR_INTERFACE_IMPL(CHelper, Object, ICH, IComparable)

// Initialize member variables using member initialization lists.
CHelper::CHelper()
    : mGetAusState(["String"])
    , mGetDayOfWeek(["String"])
    , mGetWeekDay(["String"])
    , mGetMonth(["String"])
    , mGetThirtyOneDaymonth(["String"])
    , mGetThirtyDaymonth(["String"])
    , mGetTwentyEightDaymonth(["String"])
    , mGetLeapmonth(["String"])
    , mGetRiskLikelihoodOfOccurrenceRating(["String"])
    , mGetRiskConsequence(["String"])
    , mGetResidualRiskLevel(["String"])
    , mGetGovLevel(["String"])
    , mGetPhysicalStateWhenIdle(["String"])
    , mGetFragility(["String"])
    , mGetToxicity(["String"])
    , mGetCorrosiveness(["String"])
    , mGetLedgerTitle(["String"])
    , mGetTaxCode(["String"])
    , mGetRelationship(["String"])
    , mGetPropertyTradingBasis(["String"])
    , mGetAdvertisingMedium(["String"])
    , mGetAmenities(["String"])
    , mGetPropertyType(["String"])
    , mGetBillingInterval(["String"])
    , mGetInspectionStatus(["String"])
    , mGetLeaseType(["String"])
    , mGetLeaseArrangement(["String"])
    , mGetLeasingTerm(["String"])
    , mGetInspectionTerm(["String"])
{
}

CHelper::~CHelper()
{
    // 
}

ECode CHelper::constructor()
{
    return NOERROR;
}

ECode CHelper::CompareTo(
    /* [in] */ IInterface* another,
    /* [out] */ Int32* result)
{
    VALIDATE_NOT_NULL(result);

    ICHelper* oa = ICH::Probe(another);
    if (oa == NULL) {
        *result = 1;
        return E_CLASS_CAST_EXCEPTION;
    }

    CHelper* a = (CHelper*)oa;
    *result = mName.Compare(a->mName);
    return NOERROR;
}

ECode CHelper::SetName(
    /* [in] */ const String& name)
{
    mName = name;
    return NOERROR;
}

ECode CHelper::GetName(
    /* [out] */ String* name)
{
    VALIDATE_NOT_NULL(name)
    *name = mName;
    return NOERROR;
}

ECode CHelper::SetAge(
    /* [in] */ Int32 age)
{
    mAge = age;
    return NOERROR;
}

ECode CHelper::GetAge(
    /* [out] */ Int32* age)
{
    VALIDATE_NOT_NULL(age)
    *age = mAge;
    return NOERROR;
}

ECode CHelper::CanFly(
    /* [out] */ Boolean* canFly)
{
    VALIDATE_NOT_NULL(canFly);
    *canFly = FALSE;
    return NOERROR;
}

} // ChubbaMorris
} // Elastos

