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
   

   CARAPI SetSolicitor.SolicitorId(
     /* [in] */ const String& CSolicitor.solicitor.solicitorId);

    CARAPI GetSolicitor.SolicitorId(
     /* [out] */ String* CSolicitor.solicitor.solicitorId);


   CARAPI SetSolicitor.ABN(
     /* [in] */ const String& CSolicitor.solicitor.aBN);

    CARAPI GetSolicitor.ABN(
     /* [out] */ String* CSolicitor.solicitor.aBN);


   CARAPI SetSolicitor.CompanyName(
     /* [in] */ const String& CSolicitor.solicitor.companyName);

    CARAPI GetSolicitor.CompanyName(
     /* [out] */ String* CSolicitor.solicitor.companyName);


   CARAPI SetSolicitor.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.contactFirstNameList);

    CARAPI GetSolicitor.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.contactFirstNameList);


   CARAPI SetSolicitor.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.contactLastNameList);

    CARAPI GetSolicitor.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.contactLastNameList);


   CARAPI SetSolicitor.OfficelAddresses(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.officelAddresses);

    CARAPI GetSolicitor.OfficelAddresses(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.officelAddresses);


   CARAPI SetSolicitor.PostalAddresses(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.postalAddresses);

    CARAPI GetSolicitor.PostalAddresses(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.postalAddresses);


   CARAPI SetSolicitor.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.emailAddresses);

    CARAPI GetSolicitor.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.emailAddresses);


   CARAPI SetSolicitor.MobilePhone(
     /* [in] */ ArrayOf<Int32> CSolicitor.solicitor.mobilePhone);

    CARAPI GetSolicitor.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CSolicitor.solicitor.mobilePhone);


   CARAPI SetSolicitor.WorkPhone(
     /* [in] */ ArrayOf<Int32> CSolicitor.solicitor.workPhone);

    CARAPI GetSolicitor.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CSolicitor.solicitor.workPhone);


   CARAPI SetSolicitor.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CSolicitor.solicitor.contactedWithDetails);

    CARAPI GetSolicitor.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CSolicitor.solicitor.contactedWithDetails);


   CARAPI SetSolicitor.PropertyId(
     /* [in] */ CProperty.property CSolicitor.solicitor.propertyId);

    CARAPI GetSolicitor.PropertyId(
     /* [out] */ CProperty.property* CSolicitor.solicitor.propertyId);


   CARAPI SetSolicitor.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CSolicitor.solicitor.docRefIds);

    CARAPI GetSolicitor.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CSolicitor.solicitor.docRefIds);


   CARAPI SetSolicitor.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CSolicitor.solicitor.imageRefIds);

    CARAPI GetSolicitor.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CSolicitor.solicitor.imageRefIds);


   CARAPI SetSolicitor.BusinessDirectorIds(
     /* [in] */ ArrayOf<CAdministration.businessDirector> CSolicitor.solicitor.businessDirectorIds);

    CARAPI GetSolicitor.BusinessDirectorIds(
     /* [out, callee] */ ArrayOf<CAdministration.businessDirector>* CSolicitor.solicitor.businessDirectorIds);


   CARAPI SetSolicitor.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CSolicitor.solicitor.businessChannelOwnerId);

    CARAPI GetSolicitor.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CSolicitor.solicitor.businessChannelOwnerId);




protected:
    // Member variables
const String& mSetSolicitor.SolicitorId
String* mGetSolicitor.SolicitorId
const String& mSetSolicitor.ABN
String* mGetSolicitor.ABN
const String& mSetSolicitor.CompanyName
String* mGetSolicitor.CompanyName
ArrayOf<const String&> mSetSolicitor.ContactFirstNameList
ArrayOf<String>* mGetSolicitor.ContactFirstNameList
ArrayOf<const String&> mSetSolicitor.ContactLastNameList
ArrayOf<String>* mGetSolicitor.ContactLastNameList
ArrayOf<const String&> mSetSolicitor.OfficelAddresses
ArrayOf<String>* mGetSolicitor.OfficelAddresses
ArrayOf<const String&> mSetSolicitor.PostalAddresses
ArrayOf<String>* mGetSolicitor.PostalAddresses
ArrayOf<const String&> mSetSolicitor.EmailAddresses
ArrayOf<String>* mGetSolicitor.EmailAddresses
ArrayOf<Int32> mSetSolicitor.MobilePhone
ArrayOf<Int32>* mGetSolicitor.MobilePhone
ArrayOf<Int32> mSetSolicitor.WorkPhone
ArrayOf<Int32>* mGetSolicitor.WorkPhone
ArrayOf<const String&> mSetSolicitor.ContactedWithDetails
ArrayOf<String>* mGetSolicitor.ContactedWithDetails
CProperty.property mSetSolicitor.PropertyId
CProperty.property* mGetSolicitor.PropertyId
ArrayOf<CAdministration.documents> mSetSolicitor.DocRefIds
ArrayOf<CAdministration.documents>* mGetSolicitor.DocRefIds
ArrayOf<CAdministration.images> mSetSolicitor.ImageRefIds
ArrayOf<CAdministration.images>* mGetSolicitor.ImageRefIds
ArrayOf<CAdministration.businessDirector> mSetSolicitor.BusinessDirectorIds
ArrayOf<CAdministration.businessDirector>* mGetSolicitor.BusinessDirectorIds
CRegister.businessChannelOwner mSetSolicitor.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSolicitor.BusinessChannelOwnerId
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

