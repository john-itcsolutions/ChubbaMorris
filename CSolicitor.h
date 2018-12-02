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


class CSolicitor
    : public Object
    , public ICH
    , public IComparable
{
public:
    CAR_INTERFACE_DECL()    // The class which implements a CAR interface requires macros CAR_INTERFACE_DECL/CAR_INTERFACE_IMPL.

    CSolicitor();               // If a member needs to be initialized, the constructor must be explicitly declared 

    virtual ~CSolicitor();

    CARAPI constructor();   // CAR constructor for subclass inheritance.

     // IComparable interface function
    //
    CARAPI CompareTo(
        /* [in] */ IInterface* another,
        /* [out] */ Int32* result);

    // ICH interface function
    //
   

   CARAPI SetSolicitor_SolicitorId(
     /* [in] */ const String& CSolicitor.solicitor.solicitorId);

    CARAPI GetSolicitor_SolicitorId(
     /* [out] */ String* CSolicitor.solicitor.solicitorId);


   CARAPI SetSolicitor_ABN(
     /* [in] */ const String& CSolicitor.solicitor.aBN);

    CARAPI GetSolicitor_ABN(
     /* [out] */ String* CSolicitor.solicitor.aBN);


   CARAPI SetSolicitor_CompanyName(
     /* [in] */ const String& CSolicitor.solicitor.companyName);

    CARAPI GetSolicitor_CompanyName(
     /* [out] */ String* CSolicitor.solicitor.companyName);


   CARAPI SetSolicitor_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.contactFirstNameList);

    CARAPI GetSolicitor_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.contactFirstNameList);


   CARAPI SetSolicitor_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.contactLastNameList);

    CARAPI GetSolicitor_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.contactLastNameList);


   CARAPI SetSolicitor_OfficelAddresses(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.officelAddresses);

    CARAPI GetSolicitor_OfficelAddresses(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.officelAddresses);


   CARAPI SetSolicitor_PostalAddresses(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.postalAddresses);

    CARAPI GetSolicitor_PostalAddresses(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.postalAddresses);


   CARAPI SetSolicitor_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.emailAddresses);

    CARAPI GetSolicitor_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.emailAddresses);


   CARAPI SetSolicitor_MobilePhone(
     /* [in] */ ArrayOf<Int32> CSolicitor.solicitor.mobilePhone);

    CARAPI GetSolicitor_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CSolicitor.solicitor.mobilePhone);


   CARAPI SetSolicitor_WorkPhone(
     /* [in] */ ArrayOf<Int32> CSolicitor.solicitor.workPhone);

    CARAPI GetSolicitor_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CSolicitor.solicitor.workPhone);


   CARAPI SetSolicitor_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.contactedWithDetails);

    CARAPI GetSolicitor_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.contactedWithDetails);


   CARAPI SetSolicitor_PropertyId(
     /* [in] */ CProperty.property CSolicitor.solicitor.propertyId);

    CARAPI GetSolicitor_PropertyId(
     /* [out] */ CProperty.property* CSolicitor.solicitor.propertyId);


   CARAPI SetSolicitor_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CSolicitor.solicitor.docRefIds);

    CARAPI GetSolicitor_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CSolicitor.solicitor.docRefIds);


   CARAPI SetSolicitor_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CSolicitor.solicitor.imageRefIds);

    CARAPI GetSolicitor_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CSolicitor.solicitor.imageRefIds);


   CARAPI SetSolicitor_BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CSolicitor.solicitor.businessDirectorIds);

    CARAPI GetSolicitor_BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CSolicitor.solicitor.businessDirectorIds);


   CARAPI SetSolicitor_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CSolicitor.solicitor.businessChannelOwnerId);

    CARAPI GetSolicitor_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CSolicitor.solicitor.businessChannelOwnerId);




protected:
    // Member variables
const String& mSetSolicitor_SolicitorId
String* mGetSolicitor_SolicitorId
const String& mSetSolicitor_ABN
String* mGetSolicitor_ABN
const String& mSetSolicitor_CompanyName
String* mGetSolicitor_CompanyName
ArrayOf<const String&> mSetSolicitor_ContactFirstNameList
ArrayOf<String>* mGetSolicitor_ContactFirstNameList
ArrayOf<const String&> mSetSolicitor_ContactLastNameList
ArrayOf<String>* mGetSolicitor_ContactLastNameList
ArrayOf<const String&> mSetSolicitor_OfficelAddresses
ArrayOf<String>* mGetSolicitor_OfficelAddresses
ArrayOf<const String&> mSetSolicitor_PostalAddresses
ArrayOf<String>* mGetSolicitor_PostalAddresses
ArrayOf<const String&> mSetSolicitor_EmailAddresses
ArrayOf<String>* mGetSolicitor_EmailAddresses
ArrayOf<Int32> mSetSolicitor_MobilePhone
ArrayOf<Int32>* mGetSolicitor_MobilePhone
ArrayOf<Int32> mSetSolicitor_WorkPhone
ArrayOf<Int32>* mGetSolicitor_WorkPhone
ArrayOf<const String&> mSetSolicitor_ContactedWithDetails
ArrayOf<String>* mGetSolicitor_ContactedWithDetails
CProperty.property mSetSolicitor_PropertyId
CProperty.property* mGetSolicitor_PropertyId
ArrayOf<CAdministration.documents> mSetSolicitor_DocRefIds
ArrayOf<CAdministration.documents>* mGetSolicitor_DocRefIds
ArrayOf<CAdministration.images> mSetSolicitor_ImageRefIds
ArrayOf<CAdministration.images>* mGetSolicitor_ImageRefIds
ArrayOf<CAdministration.businessDirector> mSetSolicitor_BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetSolicitor_BusinessDirectorIds
CRegister.businessChannelOwner mSetSolicitor_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSolicitor_BusinessChannelOwnerId
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

