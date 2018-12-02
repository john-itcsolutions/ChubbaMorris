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
   

    CARAPI SetSupplier_SupplierId(
     /* [in] */ const String& CSupplier.supplier.supplierId);

    CARAPI GetSupplier_SupplierId(
     /* [out] */ String* CSupplier.supplier.supplierId);


   CARAPI SetSupplier_ABN(
     /* [in] */ const String& CSupplier.supplier.aBN);

    CARAPI GetSupplier_ABN(
     /* [out] */ String* CSupplier.supplier.aBN);


   CARAPI SetSupplier_SupplierName(
     /* [in] */ const String& CSupplier.supplier.supplierName);

    CARAPI GetSupplier_SupplierName(
     /* [out] */ String* CSupplier.supplier.supplierName);


   CARAPI SetSupplier_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.supplier.contactFirstNameList);

    CARAPI GetSupplier_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.supplier.contactFirstNameList);


   CARAPI SetSupplier_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.supplier.contactLastNameList);

    CARAPI GetSupplier_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.supplier.contactLastNameList);


   CARAPI SetSupplier_ResidentialAddress(
     /* [in] */ const String& CSupplier.supplier.residentialAddress);

    CARAPI GetSupplier_ResidentialAddress(
     /* [out] */ String* CSupplier.supplier.residentialAddress);


   CARAPI SetSupplier_PostalAddress(
     /* [in] */ const String& CSupplier.supplier.postalAddress);

    CARAPI GetSupplier_PostalAddress(
     /* [out] */ String* CSupplier.supplier.postalAddress);


   CARAPI SetSupplier_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CSupplier.supplier.emailAddresses);

    CARAPI GetSupplier_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CSupplier.supplier.emailAddresses);


   CARAPI SetSupplier_MobilePhone(
     /* [in] */ ArrayOf<Int32> CSupplier.supplier.mobilePhone);

    CARAPI GetSupplier_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.supplier.mobilePhone);


   CARAPI SetSupplier_WorkPhone(
     /* [in] */ ArrayOf<Int32> CSupplier.supplier.workPhone);

    CARAPI GetSupplier_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.supplier.workPhone);


   CARAPI SetSupplier_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CSupplier.supplier.contactedWithDetails);

    CARAPI GetSupplier_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CSupplier.supplier.contactedWithDetails);


   CARAPI SetSupplier_JobTypeIds(
     /* [in] */ ArrayOf<CAdministration.jobType> CSupplier.supplier.jobTypeIds);

    CARAPI GetSupplier_JobTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.jobType>* CSupplier.supplier.jobTypeIds);


   CARAPI SetSupplier_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CSupplier.supplier.serviceIds);

    CARAPI GetSupplier_ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CSupplier.supplier.serviceIds);


   CARAPI SetSupplier_SupplierTypeId(
     /* [in] */ CSupplier.supplierType CSupplier.supplier.supplierTypeId);

    CARAPI GetSupplier_SupplierTypeId(
     /* [out] */ CSupplier.supplierType* CSupplier.supplier.supplierTypeId);


   CARAPI SetSupplier_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CSupplier.supplier.docRefIds);

    CARAPI GetSupplier_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CSupplier.supplier.docRefIds);


   CARAPI SetSupplier_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CSupplier.supplier.imageRefIds);

    CARAPI GetSupplier_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CSupplier.supplier.imageRefIds);


   CARAPI SetSupplier_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CSupplier.supplier.businessChannelOwnerId);

    CARAPI GetSupplier_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CSupplier.supplier.businessChannelOwnerId);


   CARAPI SetSupplierType_SupplierTypeId(
     /* [in] */ const String& CSupplier.supplierType.supplierTypeId);

    CARAPI GetSupplierType_SupplierTypeId(
     /* [out] */ String* CSupplier.supplierType.supplierTypeId);


   CARAPI SetSupplierType_Description(
     /* [in] */ const String& CSupplier.supplierType.description);

    CARAPI GetSupplierType_Description(
     /* [out] */ String* CSupplier.supplierType.description);


   CARAPI SetSupplierType_SuppTypeName(
     /* [in] */ const String& CSupplier.supplierType.suppTypeName);

    CARAPI GetSupplierType_SuppTypeName(
     /* [out] */ String* CSupplier.supplierType.suppTypeName);


   CARAPI SetSupplierType_ServiceIds(
     /* [in] */ ArrayOf<CAdministration.service> CSupplier.supplierType.serviceIds);

    CARAPI GetSupplierType_ServiceIds(
     /* [out, callee] */ ArrayOf<CAdministration.service>* CSupplier.supplierType.serviceIds);


   CARAPI SetSupplierType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CSupplier.supplierType.businessChannelOwnerId);

    CARAPI GetSupplierType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CSupplier.supplierType.businessChannelOwnerId);


   CARAPI SetSupplierType_BranchId(
     /* [in] */ CAdministration.branch CSupplier.supplierType.branchId);

    CARAPI GetSupplierType_BranchId(
     /* [out] */ CAdministration.branch* CSupplier.supplierType.branchId);


   CARAPI SetSupplierType_DeptId(
     /* [in] */ CAdministration.department CSupplier.supplierType.deptId);

    CARAPI GetSupplierType_DeptId(
     /* [out] */ CAdministration.department* CSupplier.supplierType.deptId);


   CARAPI SetSupplierType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CSupplier.supplierType.docRefIds);

    CARAPI GetSupplierType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CSupplier.supplierType.docRefIds);


   CARAPI SetSupplierType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CSupplier.supplierType.imageRefIds);

    CARAPI GetSupplierType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CSupplier.supplierType.imageRefIds);


   CARAPI SetSupplierType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CSupplier.supplierType.videoRefIds);

    CARAPI GetSupplierType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CSupplier.supplierType.videoRefIds);


   CARAPI SetSuperannuationFund_InsureFundId(
     /* [in] */ const String& CSupplier.superannuationFund.superFundId);

    CARAPI GetSuperannuationFund_InsureFundId(
     /* [out] */ String* CSupplier.superannuationFund.superFundId);


   CARAPI SetSuperannuationFund_SuperannuationCompanyName(
     /* [in] */ const String& CSupplier.superannuationFund.SuperannuationCompanyName);

    CARAPI GetSuperannuationFund_SuperannuationCompanyName(
     /* [out] */ String* CSupplier.superannuationFund.SuperannuationCompanyName);


   CARAPI SetSuperannuationFund_LinkedToThisSupplierId(
     /* [in] */ const String& CSupplier.superannuationFund.linkedToThisSupplierId);

    CARAPI GetSuperannuationFund_LinkedToThisSupplierId(
     /* [out] */ String* CSupplier.superannuationFund.linkedToThisSupplierId);


   CARAPI SetSuperannuationFund_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.superannuationFund.contactFirstNameList);

    CARAPI GetSuperannuationFund_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.superannuationFund.contactFirstNameList);


   CARAPI SetSuperannuationFund_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.superannuationFund.contactLastNameList);

    CARAPI GetSuperannuationFund_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.superannuationFund.contactLastNameList);


   CARAPI SetSuperannuationFund_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CSupplier.superannuationFund.emailAddresses);

    CARAPI GetSuperannuationFund_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CSupplier.superannuationFund.emailAddresses);


   CARAPI SetSuperannuationFund_MobilePhone(
     /* [in] */ ArrayOf<Int32> CSupplier.superannuationFund.mobilePhone);

    CARAPI GetSuperannuationFund_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.superannuationFund.mobilePhone);


   CARAPI SetSuperannuationFund_WorkPhone(
     /* [in] */ ArrayOf<Int32> CSupplier.superannuationFund.workPhone);

    CARAPI GetSuperannuationFund_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.superannuationFund.workPhone);


   CARAPI SetSuperannuationFund_ABN(
     /* [in] */ const String& CSupplier.superannuationFund.aBN);

    CARAPI GetSuperannuationFund_ABN(
     /* [out] */ String* CSupplier.superannuationFund.aBN);


   CARAPI SetSuperannuationFund_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CSupplier.superannuationFund.docRefIds);

    CARAPI GetSuperannuationFund_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CSupplier.superannuationFund.docRefIds);


   CARAPI SetSuperannuationFund_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CSupplier.superannuationFund.imageRefIds);

    CARAPI GetSuperannuationFund_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CSupplier.superannuationFund.imageRefIds);


   CARAPI SetSuperannuationFund_SupplierId(
     /* [in] */ CSupplier.supplier CSupplier.superannuationFund.supplierId);

    CARAPI GetSuperannuationFund_SupplierId(
     /* [out] */ CSupplier.supplier* CSupplier.superannuationFund.supplierId);


   CARAPI SetSuperannuationFund_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CSupplier.superannuationFund.businessChannelOwnerId);

    CARAPI GetSuperannuationFund_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CSupplier.superannuationFund.businessChannelOwnerId);


   CARAPI SetInsuranceFund_InsureFundId(
     /* [in] */ const String& CSupplier.insuranceFund.insureFundId);

    CARAPI GetInsuranceFund_InsureFundId(
     /* [out] */ String* CSupplier.insuranceFund.insureFundId);


   CARAPI SetInsuranceFund_InsuranceCompanyName(
     /* [in] */ const String& CSupplier.insuranceFund.insuranceCompanyName);

    CARAPI GetInsuranceFund_InsuranceCompanyName(
     /* [out] */ String* CSupplier.insuranceFund.insuranceCompanyName);


   CARAPI SetInsuranceFund_LinkedToThisSupplierId(
     /* [in] */ const String& CSupplier.insuranceFund.linkedToThisSupplierId);

    CARAPI GetInsuranceFund_LinkedToThisSupplierId(
     /* [out] */ String* CSupplier.insuranceFund.linkedToThisSupplierId);


   CARAPI SetInsuranceFund_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.insuranceFund.contactFirstNameList);

    CARAPI GetInsuranceFund_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.insuranceFund.contactFirstNameList);


   CARAPI SetInsuranceFund_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.insuranceFund.contactLastNameList);

    CARAPI GetInsuranceFund_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.insuranceFund.contactLastNameList);


   CARAPI SetInsuranceFund_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CSupplier.insuranceFund.emailAddresses);

    CARAPI GetInsuranceFund_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CSupplier.insuranceFund.emailAddresses);


   CARAPI SetInsuranceFund_MobilePhone(
     /* [in] */ ArrayOf<Int32> CSupplier.insuranceFund.mobilePhone);

    CARAPI GetInsuranceFund_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.insuranceFund.mobilePhone);


   CARAPI SetInsuranceFund_WorkPhone(
     /* [in] */ ArrayOf<Int32> CSupplier.insuranceFund.workPhone);

    CARAPI GetInsuranceFund_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.insuranceFund.workPhone);


   CARAPI SetInsuranceFund_ABN(
     /* [in] */ const String& CSupplier.insuranceFund.aBN);

    CARAPI GetInsuranceFund_ABN(
     /* [out] */ String* CSupplier.insuranceFund.aBN);


   CARAPI SetInsuranceFund_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CSupplier.insuranceFund.docRefIds);

    CARAPI GetInsuranceFund_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CSupplier.insuranceFund.docRefIds);


   CARAPI SetInsuranceFund_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CSupplier.insuranceFund.imageRefIds);

    CARAPI GetInsuranceFund_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CSupplier.insuranceFund.imageRefIds);


   CARAPI SetInsuranceFund_SupplierId(
     /* [in] */ CSupplier.supplier CSupplier.insuranceFund.supplierId);

    CARAPI GetInsuranceFund_SupplierId(
     /* [out] */ CSupplier.supplier* CSupplier.insuranceFund.supplierId);


   CARAPI SetInsuranceFund_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CSupplier.insuranceFund.businessChannelOwnerId);

    CARAPI GetInsuranceFund_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CSupplier.insuranceFund.businessChannelOwnerId);


   CARAPI SetDistributor_DistributorId(
     /* [in] */ const String& CSupplier.distributor.distributorId);

    CARAPI GetDistributor_DistributorId(
     /* [out] */ String* CSupplier.distributor.distributorId);


   CARAPI SetDistributor_DistributorName(
     /* [in] */ const String& CSupplier.distributor.distributorName);

    CARAPI GetDistributor_DistributorName(
     /* [out] */ String* CSupplier.distributor.distributorName);


   CARAPI SetDistributor_ABN(
     /* [in] */ const String& CSupplier.distributor.aBN);

    CARAPI GetDistributor_ABN(
     /* [out] */ String* CSupplier.distributor.aBN);


   CARAPI SetDistributor_ContactFirstNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.distributor.contactFirstNameList);

    CARAPI GetDistributor_ContactFirstNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.distributor.contactFirstNameList);


   CARAPI SetDistributor_ContactLastNameList(
     /* [in] */ ArrayOf<const String&> CSupplier.distributor.contactLastNameList);

    CARAPI GetDistributor_ContactLastNameList(
     /* [out, callee] */ ArrayOf<String>* CSupplier.distributor.contactLastNameList);


   CARAPI SetDistributor_StreetAddress(
     /* [in] */ const String& CSupplier.distributor.streetAddress);

    CARAPI GetDistributor_StreetAddress(
     /* [out] */ String* CSupplier.distributor.streetAddress);


   CARAPI SetDistributor_PostalAddress(
     /* [in] */ const String& CSupplier.distributor.postalAddress);

    CARAPI GetDistributor_PostalAddress(
     /* [out] */ String* CSupplier.distributor.postalAddress);


   CARAPI SetDistributor_EmailAddresses(
     /* [in] */ ArrayOf<const String&> CSupplier.distributor.emailAddresses);

    CARAPI GetDistributor_EmailAddresses(
     /* [out, callee] */ ArrayOf<String>* CSupplier.distributor.emailAddresses);


   CARAPI SetDistributor_WebAddress(
     /* [in] */ const String& CSupplier.distributor.webAddress);

    CARAPI GetDistributor_WebAddress(
     /* [out] */ String* CSupplier.distributor.webAddress);


   CARAPI SetDistributor_MobilePhone(
     /* [in] */ ArrayOf<Int32> CSupplier.distributor.mobilePhone);

    CARAPI GetDistributor_MobilePhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.distributor.mobilePhone);


   CARAPI SetDistributor_WorkPhone(
     /* [in] */ ArrayOf<Int32> CSupplier.distributor.workPhone);

    CARAPI GetDistributor_WorkPhone(
     /* [out, callee] */ ArrayOf<Int32>* CSupplier.distributor.workPhone);


   CARAPI SetDistributor_ContactedWithDetails(
     /* [in] */ ArrayOf<const String&> CSupplier.distributor.contactedWithDetails);

    CARAPI GetDistributor_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* CSupplier.distributor.contactedWithDetails);



protected:
    // Member variables
const String& mSetSupplier_SupplierId
String* mGetSupplier_SupplierId
const String& mSetSupplier_ABN
String* mGetSupplier_ABN
const String& mSetSupplier_SupplierName
String* mGetSupplier_SupplierName
ArrayOf<const String&> mSetSupplier_ContactFirstNameList
ArrayOf<String>* mGetSupplier_ContactFirstNameList
ArrayOf<const String&> mSetSupplier_ContactLastNameList
ArrayOf<String>* mGetSupplier_ContactLastNameList
const String& mSetSupplier_ResidentialAddress
String* mGetSupplier_ResidentialAddress
const String& mSetSupplier_PostalAddress
String* mGetSupplier_PostalAddress
ArrayOf<const String&> mSetSupplier_EmailAddresses
ArrayOf<String>* mGetSupplier_EmailAddresses
ArrayOf<Int32> mSetSupplier_MobilePhone
ArrayOf<Int32>* mGetSupplier_MobilePhone
ArrayOf<Int32> mSetSupplier_WorkPhone
ArrayOf<Int32>* mGetSupplier_WorkPhone
ArrayOf<const String&> mSetSupplier_ContactedWithDetails
ArrayOf<String>* mGetSupplier_ContactedWithDetails
ArrayOf<CAdministration.jobType> mSetSupplier_JobTypeIds
ArrayOf<CAdministration.jobType>* mGetSupplier_JobTypeIds
ArrayOf<CAdministration.service> mSetSupplier_ServiceIds
ArrayOf<CAdministration.service>* mGetSupplier_ServiceIds
CSupplier.supplierType mSetSupplier_SupplierTypeId
CSupplier.supplierType* mGetSupplier_SupplierTypeId
ArrayOf<CAdministration.documents> mSetSupplier_DocRefIds
ArrayOf<CAdministration.documents>* mGetSupplier_DocRefIds
ArrayOf<CAdministration.images> mSetSupplier_ImageRefIds
ArrayOf<CAdministration.images>* mGetSupplier_ImageRefIds
CRegister.businessChannelOwner mSetSupplier_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSupplier_BusinessChannelOwnerId
const String& mSetSupplierType_SupplierTypeId
String* mGetSupplierType_SupplierTypeId
const String& mSetSupplierType_Description
String* mGetSupplierType_Description
const String& mSetSupplierType_SuppTypeName
String* mGetSupplierType_SuppTypeName
ArrayOf<CAdministration.service> mSetSupplierType_ServiceIds
ArrayOf<CAdministration.service>* mGetSupplierType_ServiceIds
CRegister.businessChannelOwner mSetSupplierType_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSupplierType_BusinessChannelOwnerId
CAdministration.branch mSetSupplierType_BranchId
CAdministration.branch* mGetSupplierType_BranchId
CAdministration.department mSetSupplierType_DeptId
CAdministration.department* mGetSupplierType_DeptId
ArrayOf<CAdministration.documents> mSetSupplierType_DocRefIds
ArrayOf<CAdministration.documents>* mGetSupplierType_DocRefIds
ArrayOf<CAdministration.images> mSetSupplierType_ImageRefIds
ArrayOf<CAdministration.images>* mGetSupplierType_ImageRefIds
ArrayOf<CAdministration.video> mSetSupplierType_VideoRefIds
ArrayOf<CAdministration.video>* mGetSupplierType_VideoRefIds
const String& mSetSuperannuationFund_InsureFundId
String* mGetSuperannuationFund_InsureFundId
const String& mSetSuperannuationFund_SuperannuationCompanyName
String* mGetSuperannuationFund_SuperannuationCompanyName
const String& mSetSuperannuationFund_LinkedToThisSupplierId
String* mGetSuperannuationFund_LinkedToThisSupplierId
ArrayOf<const String&> mSetSuperannuationFund_ContactFirstNameList
ArrayOf<String>* mGetSuperannuationFund_ContactFirstNameList
ArrayOf<const String&> mSetSuperannuationFund_ContactLastNameList
ArrayOf<String>* mGetSuperannuationFund_ContactLastNameList
ArrayOf<const String&> mSetSuperannuationFund_EmailAddresses
ArrayOf<String>* mGetSuperannuationFund_EmailAddresses
ArrayOf<Int32> mSetSuperannuationFund_MobilePhone
ArrayOf<Int32>* mGetSuperannuationFund_MobilePhone
ArrayOf<Int32> mSetSuperannuationFund_WorkPhone
ArrayOf<Int32>* mGetSuperannuationFund_WorkPhone
const String& mSetSuperannuationFund_ABN
String* mGetSuperannuationFund_ABN
ArrayOf<CAdministration.documents> mSetSuperannuationFund_DocRefIds
ArrayOf<CAdministration.documents>* mGetSuperannuationFund_DocRefIds
ArrayOf<CAdministration.images> mSetSuperannuationFund_ImageRefIds
ArrayOf<CAdministration.images>* mGetSuperannuationFund_ImageRefIds
CSupplier.supplier mSetSuperannuationFund_SupplierId
CSupplier.supplier* mGetSuperannuationFund_SupplierId
CRegister.businessChannelOwner mSetSuperannuationFund_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetSuperannuationFund_BusinessChannelOwnerId
const String& mSetInsuranceFund_InsureFundId
String* mGetInsuranceFund_InsureFundId
const String& mSetInsuranceFund_InsuranceCompanyName
String* mGetInsuranceFund_InsuranceCompanyName
const String& mSetInsuranceFund_LinkedToThisSupplierId
String* mGetInsuranceFund_LinkedToThisSupplierId
ArrayOf<const String&> mSetInsuranceFund_ContactFirstNameList
ArrayOf<String>* mGetInsuranceFund_ContactFirstNameList
ArrayOf<const String&> mSetInsuranceFund_ContactLastNameList
ArrayOf<String>* mGetInsuranceFund_ContactLastNameList
ArrayOf<const String&> mSetInsuranceFund_EmailAddresses
ArrayOf<String>* mGetInsuranceFund_EmailAddresses
ArrayOf<Int32> mSetInsuranceFund_MobilePhone
ArrayOf<Int32>* mGetInsuranceFund_MobilePhone
ArrayOf<Int32> mSetInsuranceFund_WorkPhone
ArrayOf<Int32>* mGetInsuranceFund_WorkPhone
const String& mSetInsuranceFund_ABN
String* mGetInsuranceFund_ABN
ArrayOf<CAdministration.documents> mSetInsuranceFund_DocRefIds
ArrayOf<CAdministration.documents>* mGetInsuranceFund_DocRefIds
ArrayOf<CAdministration.images> mSetInsuranceFund_ImageRefIds
ArrayOf<CAdministration.images>* mGetInsuranceFund_ImageRefIds
CSupplier.supplier mSetInsuranceFund_SupplierId
CSupplier.supplier* mGetInsuranceFund_SupplierId
CRegister.businessChannelOwner mSetInsuranceFund_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetInsuranceFund_BusinessChannelOwnerId
const String& mSetDistributor_DistributorId
String* mGetDistributor_DistributorId
const String& mSetDistributor_DistributorName
String* mGetDistributor_DistributorName
const String& mSetDistributor_ABN
String* mGetDistributor_ABN
ArrayOf<const String&> mSetDistributor_ContactFirstNameList
ArrayOf<String>* mGetDistributor_ContactFirstNameList
ArrayOf<const String&> mSetDistributor_ContactLastNameList
ArrayOf<String>* mGetDistributor_ContactLastNameList
const String& mSetDistributor_StreetAddress
String* mGetDistributor_StreetAddress
const String& mSetDistributor_PostalAddress
String* mGetDistributor_PostalAddress
ArrayOf<const String&> mSetDistributor_EmailAddresses
ArrayOf<String>* mGetDistributor_EmailAddresses
const String& mSetDistributor_WebAddress
String* mGetDistributor_WebAddress
ArrayOf<Int32> mSetDistributor_MobilePhone
ArrayOf<Int32>* mGetDistributor_MobilePhone
ArrayOf<Int32> mSetDistributor_WorkPhone
ArrayOf<Int32>* mGetDistributor_WorkPhone
ArrayOf<const String&> mSetDistributor_ContactedWithDetails
ArrayOf<String>* mGetDistributor_ContactedWithDetails
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

