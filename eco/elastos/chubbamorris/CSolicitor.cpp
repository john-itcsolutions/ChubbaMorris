#include "elastos/chubbamorris/CSolicitor.h"
#include <stdio.h>

using Elastos::Core::EIID_IComparable;

namespace Elastos {
namespace ChubbaMorris {

// The class which implements a CAR interface requires macros CAR_INTERFACE_IMPL/CAR_INTERFACE_IMPL
CAR_INTERFACE_IMPL(CSolicitor, Object, ICH, IComparable)

// Initialize member variables using member initialization lists.
CSolicitor::CSolicitor()
    : mSetSolicitor_SolicitorId("String")
    , mGetSolicitor_SolicitorId("String")
    , mSetSolicitor_ABN("String")
    , mGetSolicitor_ABN("String")
    , mSetSolicitor_CompanyName("String")
    , mGetSolicitor_CompanyName("String")
    , mSetSolicitor_ContactFirstNameList(["String"])
    , mGetSolicitor_ContactFirstNameList(["String"])
    , mSetSolicitor_ContactLastNameList(["String"])
    , mGetSolicitor_ContactLastNameList(["String"])
    , mSetSolicitor_OfficelAddresses(["String"])
    , mGetSolicitor_OfficelAddresses(["String"])
    , mSetSolicitor_PostalAddresses(["String"])
    , mGetSolicitor_PostalAddresses(["String"])
    , mSetSolicitor_EmailAddresses(["String"])
    , mGetSolicitor_EmailAddresses(["String"])
    , mSetSolicitor_MobilePhone(["String"])
    , mGetSolicitor_MobilePhone(["String"])
    , mSetSolicitor_WorkPhone(["String"])
    , mGetSolicitor_WorkPhone(["String"])
    , mSetSolicitor_ContactedWithDetails(["String"])
    , mGetSolicitor_ContactedWithDetails(["String"])
    , mSetSolicitor_PropertyId("String")
    , mGetSolicitor_PropertyId("String")
    , mSetSolicitor_DocRefIds(["String"])
    , mGetSolicitor_DocRefIds(["String"])
    , mSetSolicitor_ImageRefIds(["String"])
    , mGetSolicitor_ImageRefIds(["String"])
    , mSetSolicitor_BusinessDirectorIds(["String"])
    , mGetSolicitor_BusinessDirectorIds(["String"])
    , mSetSolicitor_BusinessChannelOwnerId("String")
    , mGetSolicitor_BusinessChannelOwnerId("String")
{
}

CSolicitor::~CSolicitor()
{
    // 
}

ECode CSolicitor::constructor()
{
    return NOERROR;
}

ECode CSolicitor::CompareTo(
    /* [in] */ IInterface* another,
    /* [out] */ Int32* result)
{
    VALIDATE_NOT_NULL(result);

    ICSolicitor* oa = ICH::Probe(another);
    if (oa == NULL) {
        *result = 1;
        return E_CLASS_CAST_EXCEPTION;
    }

    CSolicitor* a = (CSolicitor*)oa;
    *result = mName.Compare(a->mName);
    return NOERROR;
}

ECode CSolicitor::SetName(
    /* [in] */ const String& name)
{
    mName = name;
    return NOERROR;
}

ECode CSolicitor::GetName(
    /* [out] */ String* name)
{
    VALIDATE_NOT_NULL(name)
    *name = mName;
    return NOERROR;
}

ECode CSolicitor::SetAge(
    /* [in] */ Int32 age)
{
    mAge = age;
    return NOERROR;
}

ECode CSolicitor::GetAge(
    /* [out] */ Int32* age)
{
    VALIDATE_NOT_NULL(age)
    *age = mAge;
    return NOERROR;
}

ECode CSolicitor::CanFly(
    /* [out] */ Boolean* canFly)
{
    VALIDATE_NOT_NULL(canFly);
    *canFly = FALSE;
    return NOERROR;
}

} // ChubbaMorris
} // Elastos

