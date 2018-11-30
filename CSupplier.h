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


class CSupplier
    : public Object
    , public ICH
    , public IComparable
{
public:
    CAR_INTERFACE_DECL()    // The class which implements a CAR interface requires macros CAR_INTERFACE_DECL/CAR_INTERFACE_IMPL.

    CSupplier();               // If a member needs to be initialized, the constructor must be explicitly declared 

    virtual ~CSupplier();

    CARAPI constructor();   // CAR constructor for subclass inheritance.

     // IComparable interface function
    //
    CARAPI CompareTo(
        /* [in] */ IInterface* another,
        /* [out] */ Int32* result);

    // ICH interface function
    //
   

    CARAPI SetSupplier.SupplierId(
     /* [in] */ const String& CSupplier.supplier.supplierId);

    CARAPI GetSupplier.SupplierId(
     /* [out] */ String* CSupplier.supplier.supplierId);


   CARAPI SetSupplier.ABN(
     /* [in] */ const String& CSupplier.supplier.aBN);

    CARAPI GetSupplier.ABN(
     /* [out] */ String* CSupplier.supplier.aBN);


   CARAPI SetSupplier.SupplierName(
     /* [in] */ const String& CSupplier.supplier.supplierName);

    CARAPI GetSupplier.SupplierName(
     /* [out] */ String* CSupplier.supplier.supplierName);


   CARAPI SetSupplier.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.supplier.contactFirstNameList);

    CARAPI GetSupplier.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.supplier.contactFirstNameList);


   CARAPI SetSupplier.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.supplier.contactLastNameList);

    CARAPI GetSupplier.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.supplier.contactLastNameList);


   CARAPI SetSupplier.ResidentialAddress(
     /* [in] */ const String& CSupplier.supplier.residentialAddress);

    CARAPI GetSupplier.ResidentialAddress(
     /* [out] */ String* CSupplier.supplier.residentialAddress);


   CARAPI SetSupplier.PostalAddress(
     /* [in] */ const String& CSupplier.supplier.postalAddress);

    CARAPI GetSupplier.PostalAddress(
     /* [out] */ String* CSupplier.supplier.postalAddress);


   CARAPI SetSupplier.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CSupplier.supplier.emailAddresses);

    CARAPI GetSupplier.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CSupplier.supplier.emailAddresses);


   CARAPI SetSupplier.MobilePhone(
     /* [in] */ ArrayOf<Int32> CSupplier.supplier.mobilePhone);

    CARAPI GetSupplier.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.supplier.mobilePhone);


   CARAPI SetSupplier.WorkPhone(
     /* [in] */ ArrayOf<Int32> CSupplier.supplier.workPhone);

    CARAPI GetSupplier.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.supplier.workPhone);


   CARAPI SetSupplier.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CSupplier.supplier.contactedWithDetails);

    CARAPI GetSupplier.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CSupplier.supplier.contactedWithDetails);


   CARAPI SetSupplier.JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CSupplier.supplier.jobTypeIds);

    CARAPI GetSupplier.JobTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.jobType>* CSupplier.supplier.jobTypeIds);


   CARAPI SetSupplier.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CSupplier.supplier.serviceIds);

    CARAPI GetSupplier.ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CSupplier.supplier.serviceIds);


   CARAPI SetSupplier.SupplierTypeId(
     /* [in] */ CSupplier.supplierType CSupplier.supplier.supplierTypeId);

    CARAPI GetSupplier.SupplierTypeId(
     /* [out] */ CSupplier.supplierType* CSupplier.supplier.supplierTypeId);


   CARAPI SetSupplier.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CSupplier.supplier.docRefIds);

    CARAPI GetSupplier.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CSupplier.supplier.docRefIds);


   CARAPI SetSupplier.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CSupplier.supplier.imageRefIds);

    CARAPI GetSupplier.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CSupplier.supplier.imageRefIds);


   CARAPI SetSupplier.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CSupplier.supplier.businessChannelOwnerId);

    CARAPI GetSupplier.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CSupplier.supplier.businessChannelOwnerId);


   CARAPI SetSupplierType.SupplierTypeId(
     /* [in] */ const String& CSupplier.supplierType.supplierTypeId);

    CARAPI GetSupplierType.SupplierTypeId(
     /* [out] */ String* CSupplier.supplierType.supplierTypeId);


   CARAPI SetSupplierType.Description(
     /* [in] */ const String& CSupplier.supplierType.description);

    CARAPI GetSupplierType.Description(
     /* [out] */ String* CSupplier.supplierType.description);


   CARAPI SetSupplierType.SuppTypeName(
     /* [in] */ const String& CSupplier.supplierType.suppTypeName);

    CARAPI GetSupplierType.SuppTypeName(
     /* [out] */ String* CSupplier.supplierType.suppTypeName);


   CARAPI SetSupplierType.ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CSupplier.supplierType.serviceIds);

    CARAPI GetSupplierType.ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CSupplier.supplierType.serviceIds);


   CARAPI SetSupplierType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CSupplier.supplierType.businessChannelOwnerId);

    CARAPI GetSupplierType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CSupplier.supplierType.businessChannelOwnerId);


   CARAPI SetSupplierType.BranchId(
     /* [in] */ CAdministration.branch CSupplier.supplierType.branchId);

    CARAPI GetSupplierType.BranchId(
     /* [out] */ CAdministration.branch* CSupplier.supplierType.branchId);


   CARAPI SetSupplierType.DeptId(
     /* [in] */ CAdministration.department CSupplier.supplierType.deptId);

    CARAPI GetSupplierType.DeptId(
     /* [out] */ CAdministration.department* CSupplier.supplierType.deptId);


   CARAPI SetSupplierType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CSupplier.supplierType.docRefIds);

    CARAPI GetSupplierType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CSupplier.supplierType.docRefIds);


   CARAPI SetSupplierType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CSupplier.supplierType.imageRefIds);

    CARAPI GetSupplierType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CSupplier.supplierType.imageRefIds);


   CARAPI SetSupplierType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CSupplier.supplierType.videoRefIds);

    CARAPI GetSupplierType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CSupplier.supplierType.videoRefIds);


   CARAPI SetSuperannuationFund.InsureFundId(
     /* [in] */ const String& CSupplier.superannuationFund.superFundId);

    CARAPI GetSuperannuationFund.InsureFundId(
     /* [out] */ String* CSupplier.superannuationFund.superFundId);


   CARAPI SetSuperannuationFund.SuperannuationCompanyName(
     /* [in] */ const String& CSupplier.superannuationFund.SuperannuationCompanyName);

    CARAPI GetSuperannuationFund.SuperannuationCompanyName(
     /* [out] */ String* CSupplier.superannuationFund.SuperannuationCompanyName);


   CARAPI SetSuperannuationFund.LinkedToThisSupplierId(
     /* [in] */ const String& CSupplier.superannuationFund.linkedToThisSupplierId);

    CARAPI GetSuperannuationFund.LinkedToThisSupplierId(
     /* [out] */ String* CSupplier.superannuationFund.linkedToThisSupplierId);


   CARAPI SetSuperannuationFund.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.superannuationFund.contactFirstNameList);

    CARAPI GetSuperannuationFund.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.superannuationFund.contactFirstNameList);


   CARAPI SetSuperannuationFund.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.superannuationFund.contactLastNameList);

    CARAPI GetSuperannuationFund.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.superannuationFund.contactLastNameList);


   CARAPI SetSuperannuationFund.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CSupplier.superannuationFund.emailAddresses);

    CARAPI GetSuperannuationFund.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CSupplier.superannuationFund.emailAddresses);


   CARAPI SetSuperannuationFund.MobilePhone(
     /* [in] */ ArrayOf<Int32> CSupplier.superannuationFund.mobilePhone);

    CARAPI GetSuperannuationFund.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.superannuationFund.mobilePhone);


   CARAPI SetSuperannuationFund.WorkPhone(
     /* [in] */ ArrayOf<Int32> CSupplier.superannuationFund.workPhone);

    CARAPI GetSuperannuationFund.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.superannuationFund.workPhone);


   CARAPI SetSuperannuationFund.ABN(
     /* [in] */ const String& CSupplier.superannuationFund.aBN);

    CARAPI GetSuperannuationFund.ABN(
     /* [out] */ String* CSupplier.superannuationFund.aBN);


   CARAPI SetSuperannuationFund.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CSupplier.superannuationFund.docRefIds);

    CARAPI GetSuperannuationFund.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CSupplier.superannuationFund.docRefIds);


   CARAPI SetSuperannuationFund.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CSupplier.superannuationFund.imageRefIds);

    CARAPI GetSuperannuationFund.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CSupplier.superannuationFund.imageRefIds);


   CARAPI SetSuperannuationFund.SupplierId(
     /* [in] */ CSupplier.supplier CSupplier.superannuationFund.supplierId);

    CARAPI GetSuperannuationFund.SupplierId(
     /* [out] */ CSupplier.supplier* CSupplier.superannuationFund.supplierId);


   CARAPI SetSuperannuationFund.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CSupplier.superannuationFund.businessChannelOwnerId);

    CARAPI GetSuperannuationFund.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CSupplier.superannuationFund.businessChannelOwnerId);


   CARAPI SetInsuranceFund.InsureFundId(
     /* [in] */ const String& CSupplier.insuranceFund.insureFundId);

    CARAPI GetInsuranceFund.InsureFundId(
     /* [out] */ String* CSupplier.insuranceFund.insureFundId);


   CARAPI SetInsuranceFund.InsuranceCompanyName(
     /* [in] */ const String& CSupplier.insuranceFund.insuranceCompanyName);

    CARAPI GetInsuranceFund.InsuranceCompanyName(
     /* [out] */ String* CSupplier.insuranceFund.insuranceCompanyName);


   CARAPI SetInsuranceFund.LinkedToThisSupplierId(
     /* [in] */ const String& CSupplier.insuranceFund.linkedToThisSupplierId);

    CARAPI GetInsuranceFund.LinkedToThisSupplierId(
     /* [out] */ String* CSupplier.insuranceFund.linkedToThisSupplierId);


   CARAPI SetInsuranceFund.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.insuranceFund.contactFirstNameList);

    CARAPI GetInsuranceFund.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.insuranceFund.contactFirstNameList);


   CARAPI SetInsuranceFund.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.insuranceFund.contactLastNameList);

    CARAPI GetInsuranceFund.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.insuranceFund.contactLastNameList);


   CARAPI SetInsuranceFund.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CSupplier.insuranceFund.emailAddresses);

    CARAPI GetInsuranceFund.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CSupplier.insuranceFund.emailAddresses);


   CARAPI SetInsuranceFund.MobilePhone(
     /* [in] */ ArrayOf<Int32> CSupplier.insuranceFund.mobilePhone);

    CARAPI GetInsuranceFund.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.insuranceFund.mobilePhone);


   CARAPI SetInsuranceFund.WorkPhone(
     /* [in] */ ArrayOf<Int32> CSupplier.insuranceFund.workPhone);

    CARAPI GetInsuranceFund.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.insuranceFund.workPhone);


   CARAPI SetInsuranceFund.ABN(
     /* [in] */ const String& CSupplier.insuranceFund.aBN);

    CARAPI GetInsuranceFund.ABN(
     /* [out] */ String* CSupplier.insuranceFund.aBN);


   CARAPI SetInsuranceFund.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CSupplier.insuranceFund.docRefIds);

    CARAPI GetInsuranceFund.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CSupplier.insuranceFund.docRefIds);


   CARAPI SetInsuranceFund.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CSupplier.insuranceFund.imageRefIds);

    CARAPI GetInsuranceFund.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CSupplier.insuranceFund.imageRefIds);


   CARAPI SetInsuranceFund.SupplierId(
     /* [in] */ CSupplier.supplier CSupplier.insuranceFund.supplierId);

    CARAPI GetInsuranceFund.SupplierId(
     /* [out] */ CSupplier.supplier* CSupplier.insuranceFund.supplierId);


   CARAPI SetInsuranceFund.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CSupplier.insuranceFund.businessChannelOwnerId);

    CARAPI GetInsuranceFund.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CSupplier.insuranceFund.businessChannelOwnerId);


   CARAPI SetDistributor.DistributorId(
     /* [in] */ const String& CSupplier.distributor.distributorId);

    CARAPI GetDistributor.DistributorId(
     /* [out] */ String* CSupplier.distributor.distributorId);


   CARAPI SetDistributor.DistributorName(
     /* [in] */ const String& CSupplier.distributor.distributorName);

    CARAPI GetDistributor.DistributorName(
     /* [out] */ String* CSupplier.distributor.distributorName);


   CARAPI SetDistributor.ABN(
     /* [in] */ const String& CSupplier.distributor.aBN);

    CARAPI GetDistributor.ABN(
     /* [out] */ String* CSupplier.distributor.aBN);


   CARAPI SetDistributor.ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.distributor.contactFirstNameList);

    CARAPI GetDistributor.ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.distributor.contactFirstNameList);


   CARAPI SetDistributor.ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.distributor.contactLastNameList);

    CARAPI GetDistributor.ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.distributor.contactLastNameList);


   CARAPI SetDistributor.StreetAddress(
     /* [in] */ const String& CSupplier.distributor.streetAddress);

    CARAPI GetDistributor.StreetAddress(
     /* [out] */ String* CSupplier.distributor.streetAddress);


   CARAPI SetDistributor.PostalAddress(
     /* [in] */ const String& CSupplier.distributor.postalAddress);

    CARAPI GetDistributor.PostalAddress(
     /* [out] */ String* CSupplier.distributor.postalAddress);


   CARAPI SetDistributor.EmailAddresses(
     /* [in] */ ArrayOf<const String&> CSupplier.distributor.emailAddresses);

    CARAPI GetDistributor.EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CSupplier.distributor.emailAddresses);


   CARAPI SetDistributor.WebAddress(
     /* [in] */ const String& CSupplier.distributor.webAddress);

    CARAPI GetDistributor.WebAddress(
     /* [out] */ String* CSupplier.distributor.webAddress);


   CARAPI SetDistributor.MobilePhone(
     /* [in] */ ArrayOf<Int32> CSupplier.distributor.mobilePhone);

    CARAPI GetDistributor.MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.distributor.mobilePhone);


   CARAPI SetDistributor.WorkPhone(
     /* [in] */ ArrayOf<Int32> CSupplier.distributor.workPhone);

    CARAPI GetDistributor.WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.distributor.workPhone);


   CARAPI SetDistributor.ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CSupplier.distributor.contactedWithDetails);

    CARAPI GetDistributor.ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CSupplier.distributor.contactedWithDetails);



protected:
    // Member variables
const String& mSetSupplier.SupplierId
String* mGetSupplier.SupplierId
const String& mSetSupplier.ABN
String* mGetSupplier.ABN
const String& mSetSupplier.SupplierName
String* mGetSupplier.SupplierName
ArrayOf<const String&> mSetSupplier.ContactFirstNameList
ArrayOf<String>* mGetSupplier.ContactFirstNameList
ArrayOf<const String&> mSetSupplier.ContactLastNameList
ArrayOf<String>* mGetSupplier.ContactLastNameList
const String& mSetSupplier.ResidentialAddress
String* mGetSupplier.ResidentialAddress
const String& mSetSupplier.PostalAddress
String* mGetSupplier.PostalAddress
ArrayOf<const String&> mSetSupplier.EmailAddresses
ArrayOf<String>* mGetSupplier.EmailAddresses
ArrayOf<Int32> mSetSupplier.MobilePhone
ArrayOf<Int32>* mGetSupplier.MobilePhone
ArrayOf<Int32> mSetSupplier.WorkPhone
ArrayOf<Int32>* mGetSupplier.WorkPhone
ArrayOf<const String&> mSetSupplier.ContactedWithDetails
ArrayOf<String>* mGetSupplier.ContactedWithDetails
ArrayOf<CAdministration.jobType> mSetSupplier.JobTypeIds
ArrayOf<CAdministration.jobType>* mGetSupplier.JobTypeIds
ArrayOf<CAdministration.service> mSetSupplier.ServiceIds
ArrayOf<CAdministration.service>* mGetSupplier.ServiceIds
CSupplier.supplierType mSetSupplier.SupplierTypeId
CSupplier.supplierType* mGetSupplier.SupplierTypeId
ArrayOf<CAdministration.documents> mSetSupplier.DocRefIds
ArrayOf<CAdministration.documents>* mGetSupplier.DocRefIds
ArrayOf<CAdministration.images> mSetSupplier.ImageRefIds
ArrayOf<CAdministration.images>* mGetSupplier.ImageRefIds
CRegister.businessChannelOwner mSetSupplier.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSupplier.BusinessChannelOwnerId
const String& mSetSupplierType.SupplierTypeId
String* mGetSupplierType.SupplierTypeId
const String& mSetSupplierType.Description
String* mGetSupplierType.Description
const String& mSetSupplierType.SuppTypeName
String* mGetSupplierType.SuppTypeName
ArrayOf<CAdministration.service> mSetSupplierType.ServiceIds
ArrayOf<CAdministration.service>* mGetSupplierType.ServiceIds
CRegister.businessChannelOwner mSetSupplierType.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSupplierType.BusinessChannelOwnerId
CAdministration.branch mSetSupplierType.BranchId
CAdministration.branch* mGetSupplierType.BranchId
CAdministration.department mSetSupplierType.DeptId
CAdministration.department* mGetSupplierType.DeptId
ArrayOf<CAdministration.documents> mSetSupplierType.DocRefIds
ArrayOf<CAdministration.documents>* mGetSupplierType.DocRefIds
ArrayOf<CAdministration.images> mSetSupplierType.ImageRefIds
ArrayOf<CAdministration.images>* mGetSupplierType.ImageRefIds
ArrayOf<CAdministration.video> mSetSupplierType.VideoRefIds
ArrayOf<CAdministration.video>* mGetSupplierType.VideoRefIds
const String& mSetSuperannuationFund.InsureFundId
String* mGetSuperannuationFund.InsureFundId
const String& mSetSuperannuationFund.SuperannuationCompanyName
String* mGetSuperannuationFund.SuperannuationCompanyName
const String& mSetSuperannuationFund.LinkedToThisSupplierId
String* mGetSuperannuationFund.LinkedToThisSupplierId
ArrayOf<const String&> mSetSuperannuationFund.ContactFirstNameList
ArrayOf<String>* mGetSuperannuationFund.ContactFirstNameList
ArrayOf<const String&> mSetSuperannuationFund.ContactLastNameList
ArrayOf<String>* mGetSuperannuationFund.ContactLastNameList
ArrayOf<const String&> mSetSuperannuationFund.EmailAddresses
ArrayOf<String>* mGetSuperannuationFund.EmailAddresses
ArrayOf<Int32> mSetSuperannuationFund.MobilePhone
ArrayOf<Int32>* mGetSuperannuationFund.MobilePhone
ArrayOf<Int32> mSetSuperannuationFund.WorkPhone
ArrayOf<Int32>* mGetSuperannuationFund.WorkPhone
const String& mSetSuperannuationFund.ABN
String* mGetSuperannuationFund.ABN
ArrayOf<CAdministration.documents> mSetSuperannuationFund.DocRefIds
ArrayOf<CAdministration.documents>* mGetSuperannuationFund.DocRefIds
ArrayOf<CAdministration.images> mSetSuperannuationFund.ImageRefIds
ArrayOf<CAdministration.images>* mGetSuperannuationFund.ImageRefIds
CSupplier.supplier mSetSuperannuationFund.SupplierId
CSupplier.supplier* mGetSuperannuationFund.SupplierId
CRegister.businessChannelOwner mSetSuperannuationFund.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSuperannuationFund.BusinessChannelOwnerId
const String& mSetInsuranceFund.InsureFundId
String* mGetInsuranceFund.InsureFundId
const String& mSetInsuranceFund.InsuranceCompanyName
String* mGetInsuranceFund.InsuranceCompanyName
const String& mSetInsuranceFund.LinkedToThisSupplierId
String* mGetInsuranceFund.LinkedToThisSupplierId
ArrayOf<const String&> mSetInsuranceFund.ContactFirstNameList
ArrayOf<String>* mGetInsuranceFund.ContactFirstNameList
ArrayOf<const String&> mSetInsuranceFund.ContactLastNameList
ArrayOf<String>* mGetInsuranceFund.ContactLastNameList
ArrayOf<const String&> mSetInsuranceFund.EmailAddresses
ArrayOf<String>* mGetInsuranceFund.EmailAddresses
ArrayOf<Int32> mSetInsuranceFund.MobilePhone
ArrayOf<Int32>* mGetInsuranceFund.MobilePhone
ArrayOf<Int32> mSetInsuranceFund.WorkPhone
ArrayOf<Int32>* mGetInsuranceFund.WorkPhone
const String& mSetInsuranceFund.ABN
String* mGetInsuranceFund.ABN
ArrayOf<CAdministration.documents> mSetInsuranceFund.DocRefIds
ArrayOf<CAdministration.documents>* mGetInsuranceFund.DocRefIds
ArrayOf<CAdministration.images> mSetInsuranceFund.ImageRefIds
ArrayOf<CAdministration.images>* mGetInsuranceFund.ImageRefIds
CSupplier.supplier mSetInsuranceFund.SupplierId
CSupplier.supplier* mGetInsuranceFund.SupplierId
CRegister.businessChannelOwner mSetInsuranceFund.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetInsuranceFund.BusinessChannelOwnerId
const String& mSetDistributor.DistributorId
String* mGetDistributor.DistributorId
const String& mSetDistributor.DistributorName
String* mGetDistributor.DistributorName
const String& mSetDistributor.ABN
String* mGetDistributor.ABN
ArrayOf<const String&> mSetDistributor.ContactFirstNameList
ArrayOf<String>* mGetDistributor.ContactFirstNameList
ArrayOf<const String&> mSetDistributor.ContactLastNameList
ArrayOf<String>* mGetDistributor.ContactLastNameList
const String& mSetDistributor.StreetAddress
String* mGetDistributor.StreetAddress
const String& mSetDistributor.PostalAddress
String* mGetDistributor.PostalAddress
ArrayOf<const String&> mSetDistributor.EmailAddresses
ArrayOf<String>* mGetDistributor.EmailAddresses
const String& mSetDistributor.WebAddress
String* mGetDistributor.WebAddress
ArrayOf<Int32> mSetDistributor.MobilePhone
ArrayOf<Int32>* mGetDistributor.MobilePhone
ArrayOf<Int32> mSetDistributor.WorkPhone
ArrayOf<Int32>* mGetDistributor.WorkPhone
ArrayOf<const String&> mSetDistributor.ContactedWithDetails
ArrayOf<String>* mGetDistributor.ContactedWithDetails
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

