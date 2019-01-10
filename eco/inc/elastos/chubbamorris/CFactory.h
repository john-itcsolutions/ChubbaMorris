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


class CFactory
    : public Object
    , public ICH
    , public IComparable
{
public:
    CAR_INTERFACE_DECL()    // The class which implements a CAR interface requires macros CAR_INTERFACE_DECL/CAR_INTERFACE_IMPL.

    CFactory();               // If a member needs to be initialized, the constructor must be explicitly declared 

    virtual ~CFactory();

    CARAPI constructor();   // CAR constructor for subclass inheritance.

     // IComparable interface function
    //
    CARAPI CompareTo(
        /* [in] */ IInterface* another,
        /* [out] */ Int32* result);

    // ICH interface function
    //
  

   CARAPI SetMaterial_MaterialId(
     /* [in] */ const String& CFactory.material.materialId);

    CARAPI GetMaterial_MaterialId(
     /* [out] */ String* CFactory.material.materialId);


   CARAPI SetMaterial_Hazardous(
     /* [in] */ Boolean CFactory.material.hazardous);

    CARAPI GetMaterial_Hazardous(
     /* [out] */ Boolean* CFactory.material.hazardous);


   CARAPI SetMaterial_MaterialName(
     /* [in] */ const String& CFactory.material.materialName);

    CARAPI GetMaterial_MaterialName(
     /* [out] */ String* CFactory.material.materialName);


   CARAPI SetMaterial_MaterialDescription(
     /* [in] */ const String& CFactory.material.materialDescription);

    CARAPI GetMaterial_MaterialDescription(
     /* [out] */ String* CFactory.material.materialDescription);


   CARAPI SetMaterial_QCCheckedPassed(
     /* [in] */ Boolean CFactory.material.qCCheckedPassed);

    CARAPI GetMaterial_QCCheckedPassed(
     /* [out] */ Boolean* CFactory.material.qCCheckedPassed);


   CARAPI SetMaterial_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.material.businessChannelOwnerId);

    CARAPI GetMaterial_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.material.businessChannelOwnerId);


   CARAPI SetMaterial_ItemId(
     /* [in] */ CAdministration.item CFactory.material.itemId);

    CARAPI GetMaterial_ItemId(
     /* [out] */ CAdministration.item* CFactory.material.itemId);


   CARAPI SetMaterial_SupplierId(
     /* [in] */ CSupplier.supplier CFactory.material.supplierId);

    CARAPI GetMaterial_SupplierId(
     /* [out] */ CSupplier.supplier* CFactory.material.supplierId);


   CARAPI SetMaterial_MaterialTypeId(
     /* [in] */ CFactory.materialType CFactory.material.materialTypeId);

    CARAPI GetMaterial_MaterialTypeId(
     /* [out] */ CFactory.materialType* CFactory.material.materialTypeId);


   CARAPI SetMaterial_PartId(
     /* [in] */ CFactory.part CFactory.material.PartId);

    CARAPI GetMaterial_PartId(
     /* [out] */ CFactory.part* CFactory.material.PartId);


   CARAPI SetMaterial_MinorSubAssemblyId(
     /* [in] */ CFactory.minorsubassembly CFactory.material.minorsubassemblyId);

    CARAPI GetMaterial_MinorSubAssemblyId(
     /* [out] */ CFactory.minorsubassembly* CFactory.material.minorsubassemblyId);


   CARAPI SetMaterial_SubAssemblyId(
     /* [in] */ CFactory.subassembly CFactory.material.subassemblyId);

    CARAPI GetMaterial_SubAssemblyId(
     /* [out] */ CFactory.subassembly* CFactory.material.subassemblyId);


   CARAPI SetMaterial_MajorSubAssemblyId(
     /* [in] */ CFactory.majorsubassembly CFactory.material.majorsubassemblyId);

    CARAPI GetMaterial_MajorSubAssemblyId(
     /* [out] */ CFactory.majorsubassembly* CFactory.material.majorsubassemblyId);


   CARAPI SetMaterial_LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CFactory.material.lesserassemblyId);

    CARAPI GetMaterial_LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CFactory.material.lesserassemblyId);


   CARAPI SetMaterial_AssemblyId(
     /* [in] */ CFactory.assembly CFactory.material.assemblyId);

    CARAPI GetMaterial_AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.material.assemblyId);


   CARAPI SetMaterial_GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.material.greaterassemblyId);

    CARAPI GetMaterial_GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.material.greaterassemblyId);


   CARAPI SetMaterial_ProductId(
     /* [in] */ CFactory.product CFactory.material.productId);

    CARAPI GetMaterial_ProductId(
     /* [out] */ CFactory.product* CFactory.material.productId);


   CARAPI SetMaterial_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.material.docRefIds);

    CARAPI GetMaterial_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.material.docRefIds);


   CARAPI SetMaterial_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.material.imageRefIds);

    CARAPI GetMaterial_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.material.imageRefIds);


   CARAPI SetMaterial_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.material.videoRefIds);

    CARAPI GetMaterial_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.material.videoRefIds);


   CARAPI SetMaterialType_MaterialTypeId(
     /* [in] */ const String& CFactory.materialType.materialTypeId);

    CARAPI GetMaterialType_MaterialTypeId(
     /* [out] */ String* CFactory.materialType.materialTypeId);


   CARAPI SetMaterialType_MaterialDescription(
     /* [in] */ const String& CFactory.materialType.materialDescription);

    CARAPI GetMaterialType_MaterialDescription(
     /* [out] */ String* CFactory.materialType.materialDescription);


   CARAPI SetMaterialType_MaterialSafetyDataRefs(
     /* [in] */ ArrayOf<const String&> CFactory.materialType.materialSafetyDataRefs);

    CARAPI GetMaterialType_MaterialSafetyDataRefs(
     /* [out, callee] */ ArrayOf<String>* CFactory.materialType.materialSafetyDataRefs);


   CARAPI SetMaterialType_MaterialCode(
     /* [in] */ const String& CFactory.materialType.materialCode);

    CARAPI GetMaterialType_MaterialCode(
     /* [out] */ String* CFactory.materialType.materialCode);


   CARAPI SetMaterialType_UnitsOfMeasurement(
     /* [in] */ const String& CFactory.materialType.UnitsOfMeasurement);

    CARAPI GetMaterialType_UnitsOfMeasurement(
     /* [out] */ String* CFactory.materialType.UnitsOfMeasurement);


   CARAPI SetMaterialType_RemainingAmount(
     /* [in] */ Double CFactory.materialType.remainingAmount);

    CARAPI GetMaterialType_RemainingAmount(
     /* [out] */ Double* CFactory.materialType.remainingAmount);


   CARAPI SetMaterialType_Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.materialType.corrosiveness);

    CARAPI GetMaterialType_Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.materialType.corrosiveness);


   CARAPI SetMaterialType_Toxicity(
     /* [in] */ CHelper.toxicity CFactory.materialType.toxicity);

    CARAPI GetMaterialType_Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.materialType.toxicity);


   CARAPI SetMaterialType_Fragility(
     /* [in] */ CHelper.fragility CFactory.materialType.fragility);

    CARAPI GetMaterialType_Fragility(
     /* [out] */ CHelper.fragility* CFactory.materialType.fragility);


   CARAPI SetMaterialType_PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.materialType.PhysicalStateWhenIdle);

    CARAPI GetMaterialType_PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.materialType.PhysicalStateWhenIdle);


   CARAPI SetMaterialType_RemainingNum(
     /* [in] */ Double CFactory.materialType.remainingNum);

    CARAPI GetMaterialType_RemainingNum(
     /* [out] */ Double* CFactory.materialType.remainingNum);


   CARAPI SetMaterialType_RawMaterialStockReorderSetPoint(
     /* [in] */ Double CFactory.materialType.materialReorderSetPoint);

    CARAPI GetMaterialType_RawMaterialStockReorderSetPoint(
     /* [out] */ Double* CFactory.materialType.materialReorderSetPoint);


   CARAPI SetMaterialType_RawMaterialStockReorderCode(
     /* [in] */ const String& CFactory.materialType.materialReorderCode);

    CARAPI GetMaterialType_RawMaterialStockReorderCode(
     /* [out] */ String* CFactory.materialType.materialReorderCode);


   CARAPI SetMaterialType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.materialType.businessChannelOwnerId);

    CARAPI GetMaterialType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.materialType.businessChannelOwnerId);


   CARAPI SetMaterialType_ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.materialType.itemTypeId);

    CARAPI GetMaterialType_ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.materialType.itemTypeId);


   CARAPI SetMaterialType_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.materialType.supplierIds);

    CARAPI GetMaterialType_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.materialType.supplierIds);


   CARAPI SetMaterialType_PartTypeIds(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.materialType.partTypeIds);

    CARAPI GetMaterialType_PartTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.materialType.partTypeIds);


   CARAPI SetMaterialType_MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.materialType.minorsubassemblyTypeIds);

    CARAPI GetMaterialType_MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.materialType.minorsubassemblyTypeIds);


   CARAPI SetMaterialType_SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.materialType.subassemblyTypeIds);

    CARAPI GetMaterialType_SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.materialType.subassemblyTypeIds);


   CARAPI SetMaterialType_MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.materialType.majorsubassemblyTypeIds);

    CARAPI GetMaterialType_MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.materialType.majorsubassemblyTypeIds);


   CARAPI SetMaterialType_LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.materialType.lesserassemblyTypeIds);

    CARAPI GetMaterialType_LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.materialType.lesserassemblyTypeIds);


   CARAPI SetMaterialType_AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.materialType.assemblyTypeIds);

    CARAPI GetMaterialType_AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.materialType.assemblyTypeIds);


   CARAPI SetMaterialType_GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.materialType.greaterassemblyTypeIds);

    CARAPI GetMaterialType_GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.materialType.greaterassemblyTypeIds);


   CARAPI SetMaterialType_ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.materialType.productTypeIds);

    CARAPI GetMaterialType_ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.materialType.productTypeIds);


   CARAPI SetMaterialType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.materialType.docRefIds);

    CARAPI GetMaterialType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.materialType.docRefIds);


   CARAPI SetMaterialType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.materialType.imageRefIds);

    CARAPI GetMaterialType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.materialType.imageRefIds);


   CARAPI SetMaterialType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.materialType.videoRefIds);

    CARAPI GetMaterialType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.materialType.videoRefIds);


   CARAPI SetPart_PartId(
     /* [in] */ const String& CFactory.part.partId);

    CARAPI GetPart_PartId(
     /* [out] */ String* CFactory.part.partId);


   CARAPI SetPart_Hazardous(
     /* [in] */ Boolean CFactory.part.hazardous);

    CARAPI GetPart_Hazardous(
     /* [out] */ Boolean* CFactory.part.hazardous);


   CARAPI SetPart_PartName(
     /* [in] */ const String& CFactory.part.partName);

    CARAPI GetPart_PartName(
     /* [out] */ String* CFactory.part.partName);


   CARAPI SetPart_PartDescription(
     /* [in] */ const String& CFactory.part.partDescription);

    CARAPI GetPart_PartDescription(
     /* [out] */ String* CFactory.part.partDescription);


   CARAPI SetPart_QCCheckedPassed(
     /* [in] */ Boolean CFactory.part.qCCheckedPassed);

    CARAPI GetPart_QCCheckedPassed(
     /* [out] */ Boolean* CFactory.part.qCCheckedPassed);


   CARAPI SetPart_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.part.businessChannelOwnerId);

    CARAPI GetPart_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.part.businessChannelOwnerId);


   CARAPI SetPart_MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.part.materialIds);

    CARAPI GetPart_MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.part.materialIds);


   CARAPI SetPart_PartTypeId(
     /* [in] */ CFactory.partType CFactory.part.partTypeId);

    CARAPI GetPart_PartTypeId(
     /* [out] */ CFactory.partType* CFactory.part.partTypeId);


   CARAPI SetPart_ItemId(
     /* [in] */ CAdministration.item CFactory.part.itemId);

    CARAPI GetPart_ItemId(
     /* [out] */ CAdministration.item* CFactory.part.itemId);


   CARAPI SetPart_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.part.supplierIds);

    CARAPI GetPart_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.part.supplierIds);


   CARAPI SetPart_MinorSubAssemblyId(
     /* [in] */ CFactory.minorsubassembly CFactory.part.minorsubassemblyId);

    CARAPI GetPart_MinorSubAssemblyId(
     /* [out] */ CFactory.minorsubassembly* CFactory.part.minorsubassemblyId);


   CARAPI SetPart_SubAssemblyId(
     /* [in] */ CFactory.subassembly CFactory.part.subassemblyId);

    CARAPI GetPart_SubAssemblyId(
     /* [out] */ CFactory.subassembly* CFactory.part.subassemblyId);


   CARAPI SetPart_MajorSubAssemblyId(
     /* [in] */ CFactory.majorsubassembly CFactory.part.majorsubassemblyId);

    CARAPI GetPart_MajorSubAssemblyId(
     /* [out] */ CFactory.majorsubassembly* CFactory.part.majorsubassemblyId);


   CARAPI SetPart_LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CFactory.part.lesserassemblyId);

    CARAPI GetPart_LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CFactory.part.lesserassemblyId);


   CARAPI SetPart_AssemblyId(
     /* [in] */ CFactory.assembly CFactory.part.assemblyId);

    CARAPI GetPart_AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.part.assemblyId);


   CARAPI SetPart_GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.part.greaterassemblyId);

    CARAPI GetPart_GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.part.greaterassemblyId);


   CARAPI SetPart_ProductId(
     /* [in] */ CFactory.product CFactory.part.productId);

    CARAPI GetPart_ProductId(
     /* [out] */ CFactory.product* CFactory.part.productId);


   CARAPI SetPart_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.part.docRefIds);

    CARAPI GetPart_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.part.docRefIds);


   CARAPI SetPart_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.part.imageRefIds);

    CARAPI GetPart_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.part.imageRefIds);


   CARAPI SetPart_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.part.videoRefIds);

    CARAPI GetPart_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.part.videoRefIds);


   CARAPI SetPartType_PartTypeId(
     /* [in] */ const String& CFactory.partType.partTypeId);

    CARAPI GetPartType_PartTypeId(
     /* [out] */ String* CFactory.partType.partTypeId);


   CARAPI SetPartType_PartDescription(
     /* [in] */ const String& CFactory.partType.partDescription);

    CARAPI GetPartType_PartDescription(
     /* [out] */ String* CFactory.partType.partDescription);


   CARAPI SetPartType_PartCode(
     /* [in] */ const String& CFactory.partType.partCode);

    CARAPI GetPartType_PartCode(
     /* [out] */ String* CFactory.partType.partCode);


   CARAPI SetPartType_Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.partType.corrosiveness);

    CARAPI GetPartType_Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.partType.corrosiveness);


   CARAPI SetPartType_Toxicity(
     /* [in] */ CHelper.toxicity CFactory.partType.toxicity);

    CARAPI GetPartType_Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.partType.toxicity);


   CARAPI SetPartType_Fragility(
     /* [in] */ CHelper.fragility CFactory.partType.fragility);

    CARAPI GetPartType_Fragility(
     /* [out] */ CHelper.fragility* CFactory.partType.fragility);


   CARAPI SetPartType_PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.partType.PhysicalStateWhenIdle);

    CARAPI GetPartType_PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.partType.PhysicalStateWhenIdle);


   CARAPI SetPartType_RemainingNum(
     /* [in] */ Int32 CFactory.partType.remainingNum);

    CARAPI GetPartType_RemainingNum(
     /* [out] */ Int32* CFactory.partType.remainingNum);


   CARAPI SetPartType_PartReorderSetPoint(
     /* [in] */ Int32 CFactory.partType.partReorderSetPoint);

    CARAPI GetPartType_PartReorderSetPoint(
     /* [out] */ Int32* CFactory.partType.partReorderSetPoint);


   CARAPI SetPartType_PartReorderCode(
     /* [in] */ const String& CFactory.partType.partReorderCode);

    CARAPI GetPartType_PartReorderCode(
     /* [out] */ String* CFactory.partType.partReorderCode);


   CARAPI SetPartType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.partType.businessChannelOwnerId);

    CARAPI GetPartType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.partType.businessChannelOwnerId);


   CARAPI SetPartType_ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.partType.itemTypeId);

    CARAPI GetPartType_ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.partType.itemTypeId);


   CARAPI SetPartType_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.partType.supplierIds);

    CARAPI GetPartType_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.partType.supplierIds);


   CARAPI SetPartType_MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.partType.materialTypeIds);

    CARAPI GetPartType_MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.partType.materialTypeIds);


   CARAPI SetPartType_MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.partType.minorsubassemblyTypeIds);

    CARAPI GetPartType_MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.partType.minorsubassemblyTypeIds);


   CARAPI SetPartType_SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.partType.subassemblyTypeIds);

    CARAPI GetPartType_SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.partType.subassemblyTypeIds);


   CARAPI SetPartType_MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.partType.majorsubassemblyTypeIds);

    CARAPI GetPartType_MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.partType.majorsubassemblyTypeIds);


   CARAPI SetPartType_LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.partType.lesserassemblyTypeIds);

    CARAPI GetPartType_LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.partType.lesserassemblyTypeIds);


   CARAPI SetPartType_AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.partType.assemblyTypeIds);

    CARAPI GetPartType_AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.partType.assemblyTypeIds);


   CARAPI SetPartType_GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.partType.greaterassemblyTypeIds);

    CARAPI GetPartType_GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.partType.greaterassemblyTypeIds);


   CARAPI SetPartType_ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.partType.productTypeIds);

    CARAPI GetPartType_ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.partType.productTypeIds);


   CARAPI SetPartType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.partType.docRefIds);

    CARAPI GetPartType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.partType.docRefIds);


   CARAPI SetPartType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.partType.imageRefIds);

    CARAPI GetPartType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.partType.imageRefIds);


   CARAPI SetPartType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.partType.videoRefIds);

    CARAPI GetPartType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.partType.videoRefIds);


   CARAPI SetMinorSubAssembly_MinorSubAssyId(
     /* [in] */ const String& CFactory.minorsubassembly.minorSubAssyId);

    CARAPI GetMinorSubAssembly_MinorSubAssyId(
     /* [out] */ String* CFactory.minorsubassembly.minorSubAssyId);


   CARAPI SetMinorSubAssembly_Hazardous(
     /* [in] */ Boolean CFactory.minorsubassembly.hazardous);

    CARAPI GetMinorSubAssembly_Hazardous(
     /* [out] */ Boolean* CFactory.minorsubassembly.hazardous);


   CARAPI SetMinorSubAssembly_MinorSubAssemblyName(
     /* [in] */ const String& CFactory.minorsubassembly.minorsubassemblyName);

    CARAPI GetMinorSubAssembly_MinorSubAssemblyName(
     /* [out] */ String* CFactory.minorsubassembly.minorsubassemblyName);


   CARAPI SetMinorSubAssembly_MinorSubAssemblyDescription(
     /* [in] */ const String& CFactory.minorsubassembly.minorsubassemblyDescription);

    CARAPI GetMinorSubAssembly_MinorSubAssemblyDescription(
     /* [out] */ String* CFactory.minorsubassembly.minorsubassemblyDescription);


   CARAPI SetMinorSubAssembly_QCCheckedPassed(
     /* [in] */ Boolean CFactory.minorsubassembly.qCCheckedPassed);

    CARAPI GetMinorSubAssembly_QCCheckedPassed(
     /* [out] */ Boolean* CFactory.minorsubassembly.qCCheckedPassed);


   CARAPI SetMinorSubAssembly_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.minorsubassembly.businessChannelOwnerId);

    CARAPI GetMinorSubAssembly_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.minorsubassembly.businessChannelOwnerId);


   CARAPI SetMinorSubAssembly_MinorSubAssemblyTypeId(
     /* [in] */ CFactory.minorsubassembly CFactory.minorsubassembly.minorsubassemblyTypeId);

    CARAPI GetMinorSubAssembly_MinorSubAssemblyTypeId(
     /* [out] */ CFactory.minorsubassembly* CFactory.minorsubassembly.minorsubassemblyTypeId);


   CARAPI SetMinorSubAssembly_ItemId(
     /* [in] */ CAdministration.item CFactory.minorsubassembly.itemId);

    CARAPI GetMinorSubAssembly_ItemId(
     /* [out] */ CAdministration.item* CFactory.minorsubassembly.itemId);


   CARAPI SetMinorSubAssembly_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.minorsubassembly.supplierIds);

    CARAPI GetMinorSubAssembly_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.minorsubassembly.supplierIds);


   CARAPI SetMinorSubAssembly_MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.minorsubassembly.materialIds);

    CARAPI GetMinorSubAssembly_MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.minorsubassembly.materialIds);


   CARAPI SetMinorSubAssembly_PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.minorsubassembly.partIds);

    CARAPI GetMinorSubAssembly_PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.minorsubassembly.partIds);


   CARAPI SetMinorSubAssembly_SubAssemblyId(
     /* [in] */ CFactory.subassembly CFactory.minorsubassembly.subassemblyId);

    CARAPI GetMinorSubAssembly_SubAssemblyId(
     /* [out] */ CFactory.subassembly* CFactory.minorsubassembly.subassemblyId);


   CARAPI SetMinorSubAssembly_MajorSubAssemblyId(
     /* [in] */ CFactory.majorsubassembly CFactory.minorsubassembly.majorsubassemblyId);

    CARAPI GetMinorSubAssembly_MajorSubAssemblyId(
     /* [out] */ CFactory.majorsubassembly* CFactory.minorsubassembly.majorsubassemblyId);


   CARAPI SetMinorSubAssembly_LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CFactory.minorsubassembly.lesserassemblyId);

    CARAPI GetMinorSubAssembly_LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CFactory.minorsubassembly.lesserassemblyId);


   CARAPI SetMinorSubAssembly_AssemblyId(
     /* [in] */ CFactory.assembly CFactory.minorsubassembly.assemblyId);

    CARAPI GetMinorSubAssembly_AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.minorsubassembly.assemblyId);


   CARAPI SetMinorSubAssembly_GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.minorsubassembly.greaterassemblyId);

    CARAPI GetMinorSubAssembly_GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.minorsubassembly.greaterassemblyId);


   CARAPI SetMinorSubAssembly_ProductId(
     /* [in] */ CFactory.product CFactory.minorsubassembly.productId);

    CARAPI GetMinorSubAssembly_ProductId(
     /* [out] */ CFactory.product* CFactory.minorsubassembly.productId);


   CARAPI SetMinorSubAssembly_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.minorsubassembly.docRefIds);

    CARAPI GetMinorSubAssembly_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.minorsubassembly.docRefIds);


   CARAPI SetMinorSubAssembly_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.minorsubassembly.imageRefIds);

    CARAPI GetMinorSubAssembly_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.minorsubassembly.imageRefIds);


   CARAPI SetMinorSubAssembly_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.minorsubassembly.videoRefIds);

    CARAPI GetMinorSubAssembly_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.minorsubassembly.videoRefIds);


   CARAPI SetMinorSubAssemblyType_MinorSubAssemblyTypeId(
     /* [in] */ const String& CFactory.minorsubassemblyType.minorsubassemblyTypeId);

    CARAPI GetMinorSubAssemblyType_MinorSubAssemblyTypeId(
     /* [out] */ String* CFactory.minorsubassemblyType.minorsubassemblyTypeId);


   CARAPI SetMinorSubAssemblyType_MinorSubAssemblyDescription(
     /* [in] */ const String& CFactory.minorsubassemblyType.minorsubassemblyDescription);

    CARAPI GetMinorSubAssemblyType_MinorSubAssemblyDescription(
     /* [out] */ String* CFactory.minorsubassemblyType.minorsubassemblyDescription);


   CARAPI SetMinorSubAssemblyType_MinorSubAssemblyCode(
     /* [in] */ const String& CFactory.minorsubassemblyType.minorsubassemblyCode);

    CARAPI GetMinorSubAssemblyType_MinorSubAssemblyCode(
     /* [out] */ String* CFactory.minorsubassemblyType.minorsubassemblyCode);


   CARAPI SetMinorSubAssemblyType_Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.minorsubassemblyType.corrosiveness);

    CARAPI GetMinorSubAssemblyType_Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.minorsubassemblyType.corrosiveness);


   CARAPI SetMinorSubAssemblyType_Toxicity(
     /* [in] */ CHelper.toxicity CFactory.minorsubassemblyType.toxicity);

    CARAPI GetMinorSubAssemblyType_Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.minorsubassemblyType.toxicity);


   CARAPI SetMinorSubAssemblyType_Fragility(
     /* [in] */ CHelper.fragility CFactory.minorsubassemblyType.fragility);

    CARAPI GetMinorSubAssemblyType_Fragility(
     /* [out] */ CHelper.fragility* CFactory.minorsubassemblyType.fragility);


   CARAPI SetMinorSubAssemblyType_PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.minorsubassemblyType.PhysicalStateWhenIdle);

    CARAPI GetMinorSubAssemblyType_PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.minorsubassemblyType.PhysicalStateWhenIdle);


   CARAPI SetMinorSubAssemblyType_RemainingNum(
     /* [in] */ Int32 CFactory.minorsubassemblyType.remainingNum);

    CARAPI GetMinorSubAssemblyType_RemainingNum(
     /* [out] */ Int32* CFactory.minorsubassemblyType.remainingNum);


   CARAPI SetMinorSubAssemblyType_MinorSubAssemblyReorderSetPoint(
     /* [in] */ Int32 CFactory.minorsubassemblyType.minorsubassemblyReorderSetPoint);

    CARAPI GetMinorSubAssemblyType_MinorSubAssemblyReorderSetPoint(
     /* [out] */ Int32* CFactory.minorsubassemblyType.minorsubassemblyReorderSetPoint);


   CARAPI SetMinorSubAssemblyType_MinorSubAssemblyReorderCode(
     /* [in] */ const String& CFactory.minorsubassemblyType.minorsubassemblyReorderCode);

    CARAPI GetMinorSubAssemblyType_MinorSubAssemblyReorderCode(
     /* [out] */ String* CFactory.minorsubassemblyType.minorsubassemblyReorderCode);


   CARAPI SetMinorSubAssemblyType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.minorsubassemblyType.businessChannelOwnerId);

    CARAPI GetMinorSubAssemblyType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.minorsubassemblyType.businessChannelOwnerId);


   CARAPI SetMinorSubAssemblyType_ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.minorsubassemblyType.itemTypeId);

    CARAPI GetMinorSubAssemblyType_ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.minorsubassemblyType.itemTypeId);


   CARAPI SetMinorSubAssemblyType_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.minorsubassemblyType.supplierIds);

    CARAPI GetMinorSubAssemblyType_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.minorsubassemblyType.supplierIds);


   CARAPI SetMinorSubAssemblyType_MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.minorsubassemblyType.materialTypeIds);

    CARAPI GetMinorSubAssemblyType_MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.minorsubassemblyType.materialTypeIds);


   CARAPI SetMinorSubAssemblyType_PartTypeIds(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.minorsubassemblyType.partTypeIds);

    CARAPI GetMinorSubAssemblyType_PartTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.minorsubassemblyType.partTypeIds);


   CARAPI SetMinorSubAssemblyType_SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.minorsubassemblyType.subassemblyTypeIds);

    CARAPI GetMinorSubAssemblyType_SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.minorsubassemblyType.subassemblyTypeIds);


   CARAPI SetMinorSubAssemblyType_MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.minorsubassemblyType.majorsubassemblyTypeIds);

    CARAPI GetMinorSubAssemblyType_MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.minorsubassemblyType.majorsubassemblyTypeIds);


   CARAPI SetMinorSubAssemblyType_LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.minorsubassemblyType.lesserassemblyTypeIds);

    CARAPI GetMinorSubAssemblyType_LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.minorsubassemblyType.lesserassemblyTypeIds);


   CARAPI SetMinorSubAssemblyType_AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.minorsubassemblyType.assemblyTypeIds);

    CARAPI GetMinorSubAssemblyType_AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.minorsubassemblyType.assemblyTypeIds);


   CARAPI SetMinorSubAssemblyType_GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.minorsubassemblyType.greaterassemblyTypeIds);

    CARAPI GetMinorSubAssemblyType_GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.minorsubassemblyType.greaterassemblyTypeIds);


   CARAPI SetMinorSubAssemblyType_ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.minorsubassemblyType.productTypeIds);

    CARAPI GetMinorSubAssemblyType_ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.minorsubassemblyType.productTypeIds);


   CARAPI SetMinorSubAssemblyType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.minorsubassemblyType.docRefIds);

    CARAPI GetMinorSubAssemblyType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.minorsubassemblyType.docRefIds);


   CARAPI SetMinorSubAssemblyType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.minorsubassemblyType.imageRefIds);

    CARAPI GetMinorSubAssemblyType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.minorsubassemblyType.imageRefIds);


   CARAPI SetMinorSubAssemblyType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.minorsubassemblyType.videoRefIds);

    CARAPI GetMinorSubAssemblyType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.minorsubassemblyType.videoRefIds);


   CARAPI SetSubAssembly_SubAssyId(
     /* [in] */ const String& CFactory.subassembly.subAssyId);

    CARAPI GetSubAssembly_SubAssyId(
     /* [out] */ String* CFactory.subassembly.subAssyId);


   CARAPI SetSubAssembly_Hazardous(
     /* [in] */ Boolean CFactory.subassembly.hazardous);

    CARAPI GetSubAssembly_Hazardous(
     /* [out] */ Boolean* CFactory.subassembly.hazardous);


   CARAPI SetSubAssembly_SubAssemblyName(
     /* [in] */ const String& CFactory.subassembly.subassemblyName);

    CARAPI GetSubAssembly_SubAssemblyName(
     /* [out] */ String* CFactory.subassembly.subassemblyName);


   CARAPI SetSubAssembly_SubAssemblyDescription(
     /* [in] */ const String& CFactory.subassembly.subassemblyDescription);

    CARAPI GetSubAssembly_SubAssemblyDescription(
     /* [out] */ String* CFactory.subassembly.subassemblyDescription);


   CARAPI SetSubAssembly_QCCheckedPassed(
     /* [in] */ Boolean CFactory.subassembly.qCCheckedPassed);

    CARAPI GetSubAssembly_QCCheckedPassed(
     /* [out] */ Boolean* CFactory.subassembly.qCCheckedPassed);


   CARAPI SetSubAssembly_MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.subassembly.materialIds);

    CARAPI GetSubAssembly_MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.subassembly.materialIds);


   CARAPI SetSubAssembly_PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.subassembly.partIds);

    CARAPI GetSubAssembly_PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.subassembly.partIds);


   CARAPI SetSubAssembly_MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CFactory.subassembly.minorsubassemblyIds);

    CARAPI GetSubAssembly_MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CFactory.subassembly.minorsubassemblyIds);


   CARAPI SetSubAssembly_MajorSubAssemblyId(
     /* [in] */ CFactory.majorsubassembly CFactory.subassembly.majorsubassemblyId);

    CARAPI GetSubAssembly_MajorSubAssemblyId(
     /* [out] */ CFactory.majorsubassembly* CFactory.subassembly.majorsubassemblyId);


   CARAPI SetSubAssembly_LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CFactory.subassembly.lesserassemblyId);

    CARAPI GetSubAssembly_LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CFactory.subassembly.lesserassemblyId);


   CARAPI SetSubAssembly_AssemblyId(
     /* [in] */ CFactory.assembly CFactory.subassembly.assemblyId);

    CARAPI GetSubAssembly_AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.subassembly.assemblyId);


   CARAPI SetSubAssembly_GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.subassembly.greaterassemblyId);

    CARAPI GetSubAssembly_GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.subassembly.greaterassemblyId);


   CARAPI SetSubAssembly_ProductId(
     /* [in] */ CFactory.product CFactory.subassembly.productId);

    CARAPI GetSubAssembly_ProductId(
     /* [out] */ CFactory.product* CFactory.subassembly.productId);


   CARAPI SetSubAssembly_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.subassembly.businessChannelOwnerId);

    CARAPI GetSubAssembly_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.subassembly.businessChannelOwnerId);


   CARAPI SetSubAssembly_SubAssemblyTypeId(
     /* [in] */ CFactory.subassemblyType CFactory.subassembly.subassemblyTypeId);

    CARAPI GetSubAssembly_SubAssemblyTypeId(
     /* [out] */ CFactory.subassemblyType* CFactory.subassembly.subassemblyTypeId);


   CARAPI SetSubAssembly_ItemId(
     /* [in] */ CAdministration.item CFactory.subassembly.itemId);

    CARAPI GetSubAssembly_ItemId(
     /* [out] */ CAdministration.item* CFactory.subassembly.itemId);


   CARAPI SetSubAssembly_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.subassembly.supplierIds);

    CARAPI GetSubAssembly_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.subassembly.supplierIds);


   CARAPI SetSubAssembly_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.subassembly.docRefIds);

    CARAPI GetSubAssembly_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.subassembly.docRefIds);


   CARAPI SetSubAssembly_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.subassembly.imageRefIds);

    CARAPI GetSubAssembly_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.subassembly.imageRefIds);


   CARAPI SetSubAssembly_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.subassembly.videoRefIds);

    CARAPI GetSubAssembly_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.subassembly.videoRefIds);


   CARAPI SetSubAssemblyType_SubAssemblyTypeId(
     /* [in] */ const String& CFactory.subassemblyType.subassemblyTypeId);

    CARAPI GetSubAssemblyType_SubAssemblyTypeId(
     /* [out] */ String* CFactory.subassemblyType.subassemblyTypeId);


   CARAPI SetSubAssemblyType_SubAssemblyCode(
     /* [in] */ const String& CFactory.subassemblyType.subassemblyCode);

    CARAPI GetSubAssemblyType_SubAssemblyCode(
     /* [out] */ String* CFactory.subassemblyType.subassemblyCode);


   CARAPI SetSubAssemblyType_SubAssemblyDescription(
     /* [in] */ const String& CFactory.subassemblyType.subassemblyDescription);

    CARAPI GetSubAssemblyType_SubAssemblyDescription(
     /* [out] */ String* CFactory.subassemblyType.subassemblyDescription);


   CARAPI SetSubAssemblyType_Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.subassemblyType.corrosiveness);

    CARAPI GetSubAssemblyType_Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.subassemblyType.corrosiveness);


   CARAPI SetSubAssemblyType_Toxicity(
     /* [in] */ CHelper.toxicity CFactory.subassemblyType.toxicity);

    CARAPI GetSubAssemblyType_Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.subassemblyType.toxicity);


   CARAPI SetSubAssemblyType_Fragility(
     /* [in] */ CHelper.fragility CFactory.subassemblyType.fragility);

    CARAPI GetSubAssemblyType_Fragility(
     /* [out] */ CHelper.fragility* CFactory.subassemblyType.fragility);


   CARAPI SetSubAssemblyType_PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.subassemblyType.PhysicalStateWhenIdle);

    CARAPI GetSubAssemblyType_PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.subassemblyType.PhysicalStateWhenIdle);


   CARAPI SetSubAssemblyType_RemainingNum(
     /* [in] */ Int32 CFactory.subassemblyType.remainingNum);

    CARAPI GetSubAssemblyType_RemainingNum(
     /* [out] */ Int32* CFactory.subassemblyType.remainingNum);


   CARAPI SetSubAssemblyType_SubAssemblyReorderSetPoint(
     /* [in] */ Int32 CFactory.subassemblyType.subassemblyReorderSetPoint);

    CARAPI GetSubAssemblyType_SubAssemblyReorderSetPoint(
     /* [out] */ Int32* CFactory.subassemblyType.subassemblyReorderSetPoint);


   CARAPI SetSubAssemblyType_SubAssemblyReorderCode(
     /* [in] */ const String& CFactory.subassemblyType.subassemblyReorderCode);

    CARAPI GetSubAssemblyType_SubAssemblyReorderCode(
     /* [out] */ String* CFactory.subassemblyType.subassemblyReorderCode);


   CARAPI SetSubAssemblyType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.subassemblyType.businessChannelOwnerId);

    CARAPI GetSubAssemblyType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.subassemblyType.businessChannelOwnerId);


   CARAPI SetSubAssemblyType_ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.subassemblyType.itemTypeId);

    CARAPI GetSubAssemblyType_ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.subassemblyType.itemTypeId);


   CARAPI SetSubAssemblyType_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.subassemblyType.supplierIds);

    CARAPI GetSubAssemblyType_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.subassemblyType.supplierIds);


   CARAPI SetSubAssemblyType_MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.subassemblyType.materialTypeIds);

    CARAPI GetSubAssemblyType_MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.subassemblyType.materialTypeIds);


   CARAPI SetSubAssemblyType_PartTypeId(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.subassemblyType.partTypeId);

    CARAPI GetSubAssemblyType_PartTypeId(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.subassemblyType.partTypeId);


   CARAPI SetSubAssemblyType_MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.subassemblyType.minorsubassemblyTypeIds);

    CARAPI GetSubAssemblyType_MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.subassemblyType.minorsubassemblyTypeIds);


   CARAPI SetSubAssemblyType_MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.subassemblyType.majorsubassemblyTypeIds);

    CARAPI GetSubAssemblyType_MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.subassemblyType.majorsubassemblyTypeIds);


   CARAPI SetSubAssemblyType_LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.subassemblyType.lesserassemblyTypeIds);

    CARAPI GetSubAssemblyType_LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.subassemblyType.lesserassemblyTypeIds);


   CARAPI SetSubAssemblyType_AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.subassemblyType.assemblyTypeIds);

    CARAPI GetSubAssemblyType_AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.subassemblyType.assemblyTypeIds);


   CARAPI SetSubAssemblyType_GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.subassemblyType.greaterassemblyTypeIds);

    CARAPI GetSubAssemblyType_GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.subassemblyType.greaterassemblyTypeIds);


   CARAPI SetSubAssemblyType_ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.subassemblyType.productTypeIds);

    CARAPI GetSubAssemblyType_ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.subassemblyType.productTypeIds);


   CARAPI SetSubAssemblyType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.subassemblyType.docRefIds);

    CARAPI GetSubAssemblyType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.subassemblyType.docRefIds);


   CARAPI SetSubAssemblyType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.subassemblyType.imageRefIds);

    CARAPI GetSubAssemblyType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.subassemblyType.imageRefIds);


   CARAPI SetSubAssemblyType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.subassemblyType.videoRefIds);

    CARAPI GetSubAssemblyType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.subassemblyType.videoRefIds);


   CARAPI SetMajorSubAssembly_MajorSubAssyId(
     /* [in] */ const String& CFactory.majorsubassembly.majorSubAssyId);

    CARAPI GetMajorSubAssembly_MajorSubAssyId(
     /* [out] */ String* CFactory.majorsubassembly.majorSubAssyId);


   CARAPI SetMajorSubAssembly_Hazardous(
     /* [in] */ Boolean CFactory.majorsubassembly.hazardous);

    CARAPI GetMajorSubAssembly_Hazardous(
     /* [out] */ Boolean* CFactory.majorsubassembly.hazardous);


   CARAPI SetMajorSubAssembly_MajorSubAssemblyName(
     /* [in] */ const String& CFactory.majorsubassembly.majorsubassemblyName);

    CARAPI GetMajorSubAssembly_MajorSubAssemblyName(
     /* [out] */ String* CFactory.majorsubassembly.majorsubassemblyName);


   CARAPI SetMajorSubAssembly_MajorSubAssemblyDescription(
     /* [in] */ const String& CFactory.majorsubassembly.majorsubassemblyDescription);

    CARAPI GetMajorSubAssembly_MajorSubAssemblyDescription(
     /* [out] */ String* CFactory.majorsubassembly.majorsubassemblyDescription);


   CARAPI SetMajorSubAssembly_QCCheckedPassed(
     /* [in] */ Boolean CFactory.majorsubassembly.qCCheckedPassed);

    CARAPI GetMajorSubAssembly_QCCheckedPassed(
     /* [out] */ Boolean* CFactory.majorsubassembly.qCCheckedPassed);


   CARAPI SetMajorSubAssembly_MajorSubAssemblyCode(
     /* [in] */ const String& CFactory.majorsubassembly.majorsubassemblyCode);

    CARAPI GetMajorSubAssembly_MajorSubAssemblyCode(
     /* [out] */ String* CFactory.majorsubassembly.majorsubassemblyCode);


   CARAPI SetMajorSubAssembly_MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.majorsubassembly.materialIds);

    CARAPI GetMajorSubAssembly_MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.majorsubassembly.materialIds);


   CARAPI SetMajorSubAssembly_PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.majorsubassembly.partIds);

    CARAPI GetMajorSubAssembly_PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.majorsubassembly.partIds);


   CARAPI SetMajorSubAssembly_MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CFactory.majorsubassembly.minorsubassemblyIds);

    CARAPI GetMajorSubAssembly_MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CFactory.majorsubassembly.minorsubassemblyIds);


   CARAPI SetMajorSubAssembly_SubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.subassembly> CFactory.majorsubassembly.subassemblyIds);

    CARAPI GetMajorSubAssembly_SubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.subassembly>* CFactory.majorsubassembly.subassemblyIds);


   CARAPI SetMajorSubAssembly_LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CFactory.majorsubassembly.lesserassemblyId);

    CARAPI GetMajorSubAssembly_LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CFactory.majorsubassembly.lesserassemblyId);


   CARAPI SetMajorSubAssembly_AssemblyId(
     /* [in] */ CFactory.assembly CFactory.majorsubassembly.assemblyId);

    CARAPI GetMajorSubAssembly_AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.majorsubassembly.assemblyId);


   CARAPI SetMajorSubAssembly_GreaterAssembly(
     /* [in] */ CFactory.greaterassembly CFactory.majorsubassembly.greaterassembly);

    CARAPI GetMajorSubAssembly_GreaterAssembly(
     /* [out] */ CFactory.greaterassembly* CFactory.majorsubassembly.greaterassembly);


   CARAPI SetMajorSubAssembly_ProductIds(
     /* [in] */ CFactory.product CFactory.majorsubassembly.productIds);

    CARAPI GetMajorSubAssembly_ProductIds(
     /* [out] */ CFactory.product* CFactory.majorsubassembly.productIds);


   CARAPI SetMajorSubAssembly_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.majorsubassembly.businessChannelOwnerId);

    CARAPI GetMajorSubAssembly_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.majorsubassembly.businessChannelOwnerId);


   CARAPI SetMajorSubAssembly_MajorSubAssemblyTypeId(
     /* [in] */ CFactory.majorsubassemblyType CFactory.majorsubassembly.majorsubassemblyTypeId);

    CARAPI GetMajorSubAssembly_MajorSubAssemblyTypeId(
     /* [out] */ CFactory.majorsubassemblyType* CFactory.majorsubassembly.majorsubassemblyTypeId);


   CARAPI SetMajorSubAssembly_ItemId(
     /* [in] */ CAdministration.item CFactory.majorsubassembly.itemId);

    CARAPI GetMajorSubAssembly_ItemId(
     /* [out] */ CAdministration.item* CFactory.majorsubassembly.itemId);


   CARAPI SetMajorSubAssembly_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.majorsubassembly.supplierIds);

    CARAPI GetMajorSubAssembly_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.majorsubassembly.supplierIds);


   CARAPI SetMajorSubAssembly_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.majorsubassembly.docRefIds);

    CARAPI GetMajorSubAssembly_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.majorsubassembly.docRefIds);


   CARAPI SetMajorSubAssembly_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.majorsubassembly.imageRefIds);

    CARAPI GetMajorSubAssembly_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.majorsubassembly.imageRefIds);


   CARAPI SetMajorSubAssembly_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.majorsubassembly.videoRefIds);

    CARAPI GetMajorSubAssembly_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.majorsubassembly.videoRefIds);


   CARAPI SetMajorSubAssemblyType_MajorSubAssemblyTypeId(
     /* [in] */ const String& CFactory.majorsubassemblyType.majorsubassemblyTypeId);

    CARAPI GetMajorSubAssemblyType_MajorSubAssemblyTypeId(
     /* [out] */ String* CFactory.majorsubassemblyType.majorsubassemblyTypeId);


   CARAPI SetMajorSubAssemblyType_MajorSubAssemblyDescription(
     /* [in] */ const String& CFactory.majorsubassemblyType.majorsubassemblyDescription);

    CARAPI GetMajorSubAssemblyType_MajorSubAssemblyDescription(
     /* [out] */ String* CFactory.majorsubassemblyType.majorsubassemblyDescription);


   CARAPI SetMajorSubAssemblyType_Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.majorsubassemblyType.corrosiveness);

    CARAPI GetMajorSubAssemblyType_Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.majorsubassemblyType.corrosiveness);


   CARAPI SetMajorSubAssemblyType_Toxicity(
     /* [in] */ CHelper.toxicity CFactory.majorsubassemblyType.toxicity);

    CARAPI GetMajorSubAssemblyType_Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.majorsubassemblyType.toxicity);


   CARAPI SetMajorSubAssemblyType_Fragility(
     /* [in] */ CHelper.fragility CFactory.majorsubassemblyType.fragility);

    CARAPI GetMajorSubAssemblyType_Fragility(
     /* [out] */ CHelper.fragility* CFactory.majorsubassemblyType.fragility);


   CARAPI SetMajorSubAssemblyType_PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.majorsubassemblyType.PhysicalStateWhenIdle);

    CARAPI GetMajorSubAssemblyType_PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.majorsubassemblyType.PhysicalStateWhenIdle);


   CARAPI SetMajorSubAssemblyType_RemainingNum(
     /* [in] */ Int32 CFactory.majorsubassemblyType.remainingNum);

    CARAPI GetMajorSubAssemblyType_RemainingNum(
     /* [out] */ Int32* CFactory.majorsubassemblyType.remainingNum);


   CARAPI SetMajorSubAssemblyType_MajorSubAssemblyReorderSetPoint(
     /* [in] */ Int32 CFactory.majorsubassemblyType.majorsubassemblyReorderSetPoint);

    CARAPI GetMajorSubAssemblyType_MajorSubAssemblyReorderSetPoint(
     /* [out] */ Int32* CFactory.majorsubassemblyType.majorsubassemblyReorderSetPoint);


   CARAPI SetMajorSubAssemblyType_MajorSubAssemblyReorderCode(
     /* [in] */ const String& CFactory.majorsubassemblyType.majorsubassemblyReorderCode);

    CARAPI GetMajorSubAssemblyType_MajorSubAssemblyReorderCode(
     /* [out] */ String* CFactory.majorsubassemblyType.majorsubassemblyReorderCode);


   CARAPI SetMajorSubAssemblyType_MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.majorsubassemblyType.materialTypeIds);

    CARAPI GetMajorSubAssemblyType_MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.majorsubassemblyType.materialTypeIds);


   CARAPI SetMajorSubAssemblyType_PartTypeId(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.majorsubassemblyType.partTypeId);

    CARAPI GetMajorSubAssemblyType_PartTypeId(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.majorsubassemblyType.partTypeId);


   CARAPI SetMajorSubAssemblyType_MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.majorsubassemblyType.minorsubassemblyTypeIds);

    CARAPI GetMajorSubAssemblyType_MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.majorsubassemblyType.minorsubassemblyTypeIds);


   CARAPI SetMajorSubAssemblyType_SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.majorsubassemblyType.subassemblyTypeIds);

    CARAPI GetMajorSubAssemblyType_SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.majorsubassemblyType.subassemblyTypeIds);


   CARAPI SetMajorSubAssemblyType_LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.majorsubassemblyType.lesserassemblyTypeIds);

    CARAPI GetMajorSubAssemblyType_LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.majorsubassemblyType.lesserassemblyTypeIds);


   CARAPI SetMajorSubAssemblyType_AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.majorsubassemblyType.assemblyTypeIds);

    CARAPI GetMajorSubAssemblyType_AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.majorsubassemblyType.assemblyTypeIds);


   CARAPI SetMajorSubAssemblyType_GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.majorsubassemblyType.greaterassemblyTypeIds);

    CARAPI GetMajorSubAssemblyType_GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.majorsubassemblyType.greaterassemblyTypeIds);


   CARAPI SetMajorSubAssemblyType_ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.majorsubassemblyType.productTypeIds);

    CARAPI GetMajorSubAssemblyType_ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.majorsubassemblyType.productTypeIds);


   CARAPI SetMajorSubAssemblyType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.majorsubassemblyType.businessChannelOwnerId);

    CARAPI GetMajorSubAssemblyType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.majorsubassemblyType.businessChannelOwnerId);


   CARAPI SetMajorSubAssemblyType_ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.majorsubassemblyType.itemTypeId);

    CARAPI GetMajorSubAssemblyType_ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.majorsubassemblyType.itemTypeId);


   CARAPI SetMajorSubAssemblyType_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.majorsubassemblyType.supplierIds);

    CARAPI GetMajorSubAssemblyType_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.majorsubassemblyType.supplierIds);


   CARAPI SetMajorSubAssemblyType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.majorsubassemblyType.docRefIds);

    CARAPI GetMajorSubAssemblyType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.majorsubassemblyType.docRefIds);


   CARAPI SetMajorSubAssemblyType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.majorsubassemblyType.imageRefIds);

    CARAPI GetMajorSubAssemblyType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.majorsubassemblyType.imageRefIds);


   CARAPI SetMajorSubAssemblyType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.majorsubassemblyType.videoRefIds);

    CARAPI GetMajorSubAssemblyType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.majorsubassemblyType.videoRefIds);


   CARAPI SetLesserAssembly_LesserAssyId(
     /* [in] */ const String& CFactory.lesserassembly.lesserAssyId);

    CARAPI GetLesserAssembly_LesserAssyId(
     /* [out] */ String* CFactory.lesserassembly.lesserAssyId);


   CARAPI SetLesserAssembly_Hazardous(
     /* [in] */ Boolean CFactory.lesserassembly.hazardous);

    CARAPI GetLesserAssembly_Hazardous(
     /* [out] */ Boolean* CFactory.lesserassembly.hazardous);


   CARAPI SetLesserAssembly_LesserAssemblyName(
     /* [in] */ const String& CFactory.lesserassembly.lesserassemblyName);

    CARAPI GetLesserAssembly_LesserAssemblyName(
     /* [out] */ String* CFactory.lesserassembly.lesserassemblyName);


   CARAPI SetLesserAssembly_LesserAssemblyDescription(
     /* [in] */ const String& CFactory.lesserassembly.lesserassemblyDescription);

    CARAPI GetLesserAssembly_LesserAssemblyDescription(
     /* [out] */ String* CFactory.lesserassembly.lesserassemblyDescription);


   CARAPI SetLesserAssembly_QCCheckedPassed(
     /* [in] */ Boolean CFactory.lesserassembly.qCCheckedPassed);

    CARAPI GetLesserAssembly_QCCheckedPassed(
     /* [out] */ Boolean* CFactory.lesserassembly.qCCheckedPassed);


   CARAPI SetLesserAssembly_MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.lesserassembly.materialIds);

    CARAPI GetLesserAssembly_MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.lesserassembly.materialIds);


   CARAPI SetLesserAssembly_PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.lesserassembly.partIds);

    CARAPI GetLesserAssembly_PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.lesserassembly.partIds);


   CARAPI SetLesserAssembly_MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CFactory.lesserassembly.minorsubassemblyIds);

    CARAPI GetLesserAssembly_MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CFactory.lesserassembly.minorsubassemblyIds);


   CARAPI SetLesserAssembly_SubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.subassembly> CFactory.lesserassembly.subassemblyIds);

    CARAPI GetLesserAssembly_SubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.subassembly>* CFactory.lesserassembly.subassemblyIds);


   CARAPI SetLesserAssembly_MajorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.majorsubassembly> CFactory.lesserassembly.majorsubassemblyIds);

    CARAPI GetLesserAssembly_MajorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassembly>* CFactory.lesserassembly.majorsubassemblyIds);


   CARAPI SetLesserAssembly_AssemblyId(
     /* [in] */ CFactory.assembly CFactory.lesserassembly.assemblyId);

    CARAPI GetLesserAssembly_AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.lesserassembly.assemblyId);


   CARAPI SetLesserAssembly_GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.lesserassembly.greaterassemblyId);

    CARAPI GetLesserAssembly_GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.lesserassembly.greaterassemblyId);


   CARAPI SetLesserAssembly_LesserAssemblyTypeId(
     /* [in] */ CFactory.lesserassemblyType CFactory.lesserassembly.lesserassemblyTypeId);

    CARAPI GetLesserAssembly_LesserAssemblyTypeId(
     /* [out] */ CFactory.lesserassemblyType* CFactory.lesserassembly.lesserassemblyTypeId);


   CARAPI SetLesserAssembly_ProductId(
     /* [in] */ CFactory.product CFactory.lesserassembly.productId);

    CARAPI GetLesserAssembly_ProductId(
     /* [out] */ CFactory.product* CFactory.lesserassembly.productId);


   CARAPI SetLesserAssembly_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.lesserassembly.businessChannelOwnerId);

    CARAPI GetLesserAssembly_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.lesserassembly.businessChannelOwnerId);


   CARAPI SetLesserAssembly_ItemId(
     /* [in] */ CAdministration.item CFactory.lesserassembly.itemId);

    CARAPI GetLesserAssembly_ItemId(
     /* [out] */ CAdministration.item* CFactory.lesserassembly.itemId);


   CARAPI SetLesserAssembly_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.lesserassembly.supplierIds);

    CARAPI GetLesserAssembly_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.lesserassembly.supplierIds);


   CARAPI SetLesserAssembly_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.lesserassembly.docRefIds);

    CARAPI GetLesserAssembly_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.lesserassembly.docRefIds);


   CARAPI SetLesserAssembly_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.lesserassembly.imageRefIds);

    CARAPI GetLesserAssembly_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.lesserassembly.imageRefIds);


   CARAPI SetLesserAssembly_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.lesserassembly.videoRefIds);

    CARAPI GetLesserAssembly_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.lesserassembly.videoRefIds);


   CARAPI SetLesserAssemblyType_LesserAssemblyTypeId(
     /* [in] */ const String& CFactory.lesserassemblyType.lesserassemblyTypeId);

    CARAPI GetLesserAssemblyType_LesserAssemblyTypeId(
     /* [out] */ String* CFactory.lesserassemblyType.lesserassemblyTypeId);


   CARAPI SetLesserAssemblyType_LesseAssemblyDescription(
     /* [in] */ const String& CFactory.lesserassemblyType.lesseAssemblyDescription);

    CARAPI GetLesserAssemblyType_LesseAssemblyDescription(
     /* [out] */ String* CFactory.lesserassemblyType.lesseAssemblyDescription);


   CARAPI SetLesserAssemblyType_LesserAssemblyCode(
     /* [in] */ const String& CFactory.lesserassemblyType.lesserassemblyCode);

    CARAPI GetLesserAssemblyType_LesserAssemblyCode(
     /* [out] */ String* CFactory.lesserassemblyType.lesserassemblyCode);


   CARAPI SetLesserAssemblyType_Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.lesserassemblyType.corrosiveness);

    CARAPI GetLesserAssemblyType_Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.lesserassemblyType.corrosiveness);


   CARAPI SetLesserAssemblyType_Toxicity(
     /* [in] */ CHelper.toxicity CFactory.lesserassemblyType.toxicity);

    CARAPI GetLesserAssemblyType_Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.lesserassemblyType.toxicity);


   CARAPI SetLesserAssemblyType_Fragility(
     /* [in] */ CHelper.fragility CFactory.lesserassemblyType.fragility);

    CARAPI GetLesserAssemblyType_Fragility(
     /* [out] */ CHelper.fragility* CFactory.lesserassemblyType.fragility);


   CARAPI SetLesserAssemblyType_PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.lesserassemblyType.PhysicalStateWhenIdle);

    CARAPI GetLesserAssemblyType_PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.lesserassemblyType.PhysicalStateWhenIdle);


   CARAPI SetLesserAssemblyType_RemainingNum(
     /* [in] */ Int32 CFactory.lesserassemblyType.remainingNum);

    CARAPI GetLesserAssemblyType_RemainingNum(
     /* [out] */ Int32* CFactory.lesserassemblyType.remainingNum);


   CARAPI SetLesserAssemblyType_LesserAssemblyReorderSetPoint(
     /* [in] */ Int32 CFactory.lesserassemblyType.lesserassemblyReorderSetPoint);

    CARAPI GetLesserAssemblyType_LesserAssemblyReorderSetPoint(
     /* [out] */ Int32* CFactory.lesserassemblyType.lesserassemblyReorderSetPoint);


   CARAPI SetLesserAssemblyType_LesserAssemblyReorderCode(
     /* [in] */ const String& CFactory.lesserassemblyType.lesserassemblyReorderCode);

    CARAPI GetLesserAssemblyType_LesserAssemblyReorderCode(
     /* [out] */ String* CFactory.lesserassemblyType.lesserassemblyReorderCode);


   CARAPI SetLesserAssemblyType_MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.lesserassemblyType.materialTypeIds);

    CARAPI GetLesserAssemblyType_MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.lesserassemblyType.materialTypeIds);


   CARAPI SetLesserAssemblyType_PartTypeId(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.lesserassemblyType.partTypeId);

    CARAPI GetLesserAssemblyType_PartTypeId(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.lesserassemblyType.partTypeId);


   CARAPI SetLesserAssemblyType_MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.lesserassemblyType.minorsubassemblyTypeIds);

    CARAPI GetLesserAssemblyType_MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.lesserassemblyType.minorsubassemblyTypeIds);


   CARAPI SetLesserAssemblyType_SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.lesserassemblyType.subassemblyTypeIds);

    CARAPI GetLesserAssemblyType_SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.lesserassemblyType.subassemblyTypeIds);


   CARAPI SetLesserAssemblyType_MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.lesserassemblyType.majorsubassemblyTypeIds);

    CARAPI GetLesserAssemblyType_MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.lesserassemblyType.majorsubassemblyTypeIds);


   CARAPI SetLesserAssemblyType_LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.lesserassemblyType.lesserassemblyTypeIds);

    CARAPI GetLesserAssemblyType_LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.lesserassemblyType.lesserassemblyTypeIds);


   CARAPI SetLesserAssemblyType_GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.lesserassemblyType.greaterassemblyTypeIds);

    CARAPI GetLesserAssemblyType_GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.lesserassemblyType.greaterassemblyTypeIds);


   CARAPI SetLesserAssemblyType_ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.lesserassemblyType.productTypeIds);

    CARAPI GetLesserAssemblyType_ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.lesserassemblyType.productTypeIds);


   CARAPI SetLesserAssemblyType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.lesserassemblyType.businessChannelOwnerId);

    CARAPI GetLesserAssemblyType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.lesserassemblyType.businessChannelOwnerId);


   CARAPI SetLesserAssemblyType_ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.lesserassemblyType.itemTypeId);

    CARAPI GetLesserAssemblyType_ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.lesserassemblyType.itemTypeId);


   CARAPI SetLesserAssemblyType_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.lesserassemblyType.supplierIds);

    CARAPI GetLesserAssemblyType_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.lesserassemblyType.supplierIds);


   CARAPI SetLesserAssemblyType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.lesserassemblyType.docRefIds);

    CARAPI GetLesserAssemblyType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.lesserassemblyType.docRefIds);


   CARAPI SetLesserAssemblyType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.lesserassemblyType.imageRefIds);

    CARAPI GetLesserAssemblyType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.lesserassemblyType.imageRefIds);


   CARAPI SetLesserAssemblyType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.lesserassemblyType.videoRefIds);

    CARAPI GetLesserAssemblyType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.lesserassemblyType.videoRefIds);


   CARAPI SetAssembly_AssyId(
     /* [in] */ const String& CFactory.assembly.assyId);

    CARAPI GetAssembly_AssyId(
     /* [out] */ String* CFactory.assembly.assyId);


   CARAPI SetAssembly_Hazardous(
     /* [in] */ Boolean CFactory.assembly.hazardous);

    CARAPI GetAssembly_Hazardous(
     /* [out] */ Boolean* CFactory.assembly.hazardous);


   CARAPI SetAssembly_AssemblyName(
     /* [in] */ const String& CFactory.assembly.assemblyName);

    CARAPI GetAssembly_AssemblyName(
     /* [out] */ String* CFactory.assembly.assemblyName);


   CARAPI SetAssembly_AssemblyDescription(
     /* [in] */ const String& CFactory.assembly.assemblyDescription);

    CARAPI GetAssembly_AssemblyDescription(
     /* [out] */ String* CFactory.assembly.assemblyDescription);


   CARAPI SetAssembly_QCCheckedPassed(
     /* [in] */ Boolean CFactory.assembly.qCCheckedPassed);

    CARAPI GetAssembly_QCCheckedPassed(
     /* [out] */ Boolean* CFactory.assembly.qCCheckedPassed);


   CARAPI SetAssembly_MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.assembly.materialIds);

    CARAPI GetAssembly_MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.assembly.materialIds);


   CARAPI SetAssembly_PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.assembly.partIds);

    CARAPI GetAssembly_PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.assembly.partIds);


   CARAPI SetAssembly_MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CFactory.assembly.minorsubassemblyIds);

    CARAPI GetAssembly_MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CFactory.assembly.minorsubassemblyIds);


   CARAPI SetAssembly_SubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.subassembly> CFactory.assembly.subassemblyIds);

    CARAPI GetAssembly_SubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.subassembly>* CFactory.assembly.subassemblyIds);


   CARAPI SetAssembly_MajorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.majorsubassembly> CFactory.assembly.majorsubassemblyIds);

    CARAPI GetAssembly_MajorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassembly>* CFactory.assembly.majorsubassemblyIds);


   CARAPI SetAssembly_LesserAssemblyIds(
     /* [in] */ ArrayOf<CFactory.lesserassembly> CFactory.assembly.lesserassemblyIds);

    CARAPI GetAssembly_LesserAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassembly>* CFactory.assembly.lesserassemblyIds);


   CARAPI SetAssembly_AssemblyTypeId(
     /* [in] */ CFactory.assemblyType CFactory.assembly.assemblyTypeId);

    CARAPI GetAssembly_AssemblyTypeId(
     /* [out] */ CFactory.assemblyType* CFactory.assembly.assemblyTypeId);


   CARAPI SetAssembly_GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.assembly.greaterassemblyId);

    CARAPI GetAssembly_GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.assembly.greaterassemblyId);


   CARAPI SetAssembly_ProductId(
     /* [in] */ CFactory.product CFactory.assembly.productId);

    CARAPI GetAssembly_ProductId(
     /* [out] */ CFactory.product* CFactory.assembly.productId);


   CARAPI SetAssembly_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.assembly.businessChannelOwnerId);

    CARAPI GetAssembly_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.assembly.businessChannelOwnerId);


   CARAPI SetAssembly_ItemId(
     /* [in] */ CAdministration.item CFactory.assembly.itemId);

    CARAPI GetAssembly_ItemId(
     /* [out] */ CAdministration.item* CFactory.assembly.itemId);


   CARAPI SetAssembly_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.assembly.supplierIds);

    CARAPI GetAssembly_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.assembly.supplierIds);


   CARAPI SetAssembly_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.assembly.docRefIds);

    CARAPI GetAssembly_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.assembly.docRefIds);


   CARAPI SetAssembly_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.assembly.imageRefIds);

    CARAPI GetAssembly_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.assembly.imageRefIds);


   CARAPI SetAssembly_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.assembly.videoRefIds);

    CARAPI GetAssembly_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.assembly.videoRefIds);


   CARAPI SetAssemblyType_AssemblyTypeId(
     /* [in] */ const String& CFactory.assemblyType.assemblyTypeId);

    CARAPI GetAssemblyType_AssemblyTypeId(
     /* [out] */ String* CFactory.assemblyType.assemblyTypeId);


   CARAPI SetAssemblyType_AssemblyDescription(
     /* [in] */ const String& CFactory.assemblyType.assemblyDescription);

    CARAPI GetAssemblyType_AssemblyDescription(
     /* [out] */ String* CFactory.assemblyType.assemblyDescription);


   CARAPI SetAssemblyType_AssemblyCode(
     /* [in] */ const String& CFactory.assemblyType.assemblyCode);

    CARAPI GetAssemblyType_AssemblyCode(
     /* [out] */ String* CFactory.assemblyType.assemblyCode);


   CARAPI SetAssemblyType_Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.assemblyType.corrosiveness);

    CARAPI GetAssemblyType_Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.assemblyType.corrosiveness);


   CARAPI SetAssemblyType_Toxicity(
     /* [in] */ CHelper.toxicity CFactory.assemblyType.toxicity);

    CARAPI GetAssemblyType_Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.assemblyType.toxicity);


   CARAPI SetAssemblyType_Fragility(
     /* [in] */ CHelper.fragility CFactory.assemblyType.fragility);

    CARAPI GetAssemblyType_Fragility(
     /* [out] */ CHelper.fragility* CFactory.assemblyType.fragility);


   CARAPI SetAssemblyType_PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.assemblyType.PhysicalStateWhenIdle);

    CARAPI GetAssemblyType_PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.assemblyType.PhysicalStateWhenIdle);


   CARAPI SetAssemblyType_RemainingNum(
     /* [in] */ Int32 CFactory.assemblyType.remainingNum);

    CARAPI GetAssemblyType_RemainingNum(
     /* [out] */ Int32* CFactory.assemblyType.remainingNum);


   CARAPI SetAssemblyType_AssemblyReorderSetPoint(
     /* [in] */ Int32 CFactory.assemblyType.assemblyReorderSetPoint);

    CARAPI GetAssemblyType_AssemblyReorderSetPoint(
     /* [out] */ Int32* CFactory.assemblyType.assemblyReorderSetPoint);


   CARAPI SetAssemblyType_AssemblyReorderCode(
     /* [in] */ const String& CFactory.assemblyType.assemblyReorderCode);

    CARAPI GetAssemblyType_AssemblyReorderCode(
     /* [out] */ String* CFactory.assemblyType.assemblyReorderCode);


   CARAPI SetAssemblyType_MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.assemblyType.materialTypeIds);

    CARAPI GetAssemblyType_MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.assemblyType.materialTypeIds);


   CARAPI SetAssemblyType_PartTypeId(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.assemblyType.partTypeId);

    CARAPI GetAssemblyType_PartTypeId(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.assemblyType.partTypeId);


   CARAPI SetAssemblyType_MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.assemblyType.minorsubassemblyTypeIds);

    CARAPI GetAssemblyType_MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.assemblyType.minorsubassemblyTypeIds);


   CARAPI SetAssemblyType_SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.assemblyType.subassemblyTypeIds);

    CARAPI GetAssemblyType_SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.assemblyType.subassemblyTypeIds);


   CARAPI SetAssemblyType_MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.assemblyType.majorsubassemblyTypeIds);

    CARAPI GetAssemblyType_MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.assemblyType.majorsubassemblyTypeIds);


   CARAPI SetAssemblyType_LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.assemblyType.lesserassemblyTypeIds);

    CARAPI GetAssemblyType_LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.assemblyType.lesserassemblyTypeIds);


   CARAPI SetAssemblyType_GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.assemblyType.greaterassemblyTypeIds);

    CARAPI GetAssemblyType_GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.assemblyType.greaterassemblyTypeIds);


   CARAPI SetAssemblyType_ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.assemblyType.productTypeIds);

    CARAPI GetAssemblyType_ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.assemblyType.productTypeIds);


   CARAPI SetAssemblyType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.assemblyType.businessChannelOwnerId);

    CARAPI GetAssemblyType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.assemblyType.businessChannelOwnerId);


   CARAPI SetAssemblyType_ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.assemblyType.itemTypeId);

    CARAPI GetAssemblyType_ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.assemblyType.itemTypeId);


   CARAPI SetAssemblyType_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.assemblyType.supplierIds);

    CARAPI GetAssemblyType_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.assemblyType.supplierIds);


   CARAPI SetAssemblyType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.assemblyType.docRefIds);

    CARAPI GetAssemblyType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.assemblyType.docRefIds);


   CARAPI SetAssemblyType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.assemblyType.imageRefIds);

    CARAPI GetAssemblyType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.assemblyType.imageRefIds);


   CARAPI SetAssemblyType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.assemblyType.videoRefIds);

    CARAPI GetAssemblyType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.assemblyType.videoRefIds);


   CARAPI SetGreaterAssembly_GreaterAssyId(
     /* [in] */ const String& CFactory.greaterassembly.greaterAssyId);

    CARAPI GetGreaterAssembly_GreaterAssyId(
     /* [out] */ String* CFactory.greaterassembly.greaterAssyId);


   CARAPI SetGreaterAssembly_Hazardous(
     /* [in] */ Boolean CFactory.greaterassembly.hazardous);

    CARAPI GetGreaterAssembly_Hazardous(
     /* [out] */ Boolean* CFactory.greaterassembly.hazardous);


   CARAPI SetGreaterAssembly_GreaterAssemblyName(
     /* [in] */ const String& CFactory.greaterassembly.greaterassemblyName);

    CARAPI GetGreaterAssembly_GreaterAssemblyName(
     /* [out] */ String* CFactory.greaterassembly.greaterassemblyName);


   CARAPI SetGreaterAssembly_GreaterAssemblyDescription(
     /* [in] */ const String& CFactory.greaterassembly.greaterassemblyDescription);

    CARAPI GetGreaterAssembly_GreaterAssemblyDescription(
     /* [out] */ String* CFactory.greaterassembly.greaterassemblyDescription);


   CARAPI SetGreaterAssembly_PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.greaterassembly.PhysicalStateWhenIdle);

    CARAPI GetGreaterAssembly_PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.greaterassembly.PhysicalStateWhenIdle);


   CARAPI SetGreaterAssembly_QCCheckedPassed(
     /* [in] */ Boolean CFactory.greaterassembly.qCCheckedPassed);

    CARAPI GetGreaterAssembly_QCCheckedPassed(
     /* [out] */ Boolean* CFactory.greaterassembly.qCCheckedPassed);


   CARAPI SetGreaterAssembly_GreaterAssemblyCode(
     /* [in] */ const String& CFactory.greaterassembly.greaterassemblyCode);

    CARAPI GetGreaterAssembly_GreaterAssemblyCode(
     /* [out] */ String* CFactory.greaterassembly.greaterassemblyCode);


   CARAPI SetGreaterAssembly_GreaterAssemblyReorderCode(
     /* [in] */ const String& CFactory.greaterassembly.greaterassemblyReorderCode);

    CARAPI GetGreaterAssembly_GreaterAssemblyReorderCode(
     /* [out] */ String* CFactory.greaterassembly.greaterassemblyReorderCode);


   CARAPI SetGreaterAssembly_GreaterAssemblyReorderSetPoint(
     /* [in] */ Int32 CFactory.greaterassembly.greaterassemblyReorderSetPoint);

    CARAPI GetGreaterAssembly_GreaterAssemblyReorderSetPoint(
     /* [out] */ Int32* CFactory.greaterassembly.greaterassemblyReorderSetPoint);


   CARAPI SetGreaterAssembly_MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.greaterassembly.materialIds);

    CARAPI GetGreaterAssembly_MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.greaterassembly.materialIds);


   CARAPI SetGreaterAssembly_PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.greaterassembly.partIds);

    CARAPI GetGreaterAssembly_PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.greaterassembly.partIds);


   CARAPI SetGreaterAssembly_MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CFactory.greaterassembly.minorsubassemblyIds);

    CARAPI GetGreaterAssembly_MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CFactory.greaterassembly.minorsubassemblyIds);


   CARAPI SetGreaterAssembly_SubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.subassembly> CFactory.greaterassembly.subassemblyIds);

    CARAPI GetGreaterAssembly_SubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.subassembly>* CFactory.greaterassembly.subassemblyIds);


   CARAPI SetGreaterAssembly_MajorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.majorsubassembly> CFactory.greaterassembly.majorsubassemblyIds);

    CARAPI GetGreaterAssembly_MajorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassembly>* CFactory.greaterassembly.majorsubassemblyIds);


   CARAPI SetGreaterAssembly_LesserAssemblyIds(
     /* [in] */ ArrayOf<CFactory.lesserassembly> CFactory.greaterassembly.lesserassemblyIds);

    CARAPI GetGreaterAssembly_LesserAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassembly>* CFactory.greaterassembly.lesserassemblyIds);


   CARAPI SetGreaterAssembly_AssemblyIds(
     /* [in] */ ArrayOf<CFactory.assembly> CFactory.greaterassembly.assemblyIds);

    CARAPI GetGreaterAssembly_AssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.assembly>* CFactory.greaterassembly.assemblyIds);


   CARAPI SetGreaterAssembly_GreaterAssemblyTypeId(
     /* [in] */ CFactory.greaterassemblyType CFactory.greaterassembly.greaterassemblyTypeId);

    CARAPI GetGreaterAssembly_GreaterAssemblyTypeId(
     /* [out] */ CFactory.greaterassemblyType* CFactory.greaterassembly.greaterassemblyTypeId);


   CARAPI SetGreaterAssembly_ProductId(
     /* [in] */ CFactory.product CFactory.greaterassembly.productId);

    CARAPI GetGreaterAssembly_ProductId(
     /* [out] */ CFactory.product* CFactory.greaterassembly.productId);


   CARAPI SetGreaterAssembly_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.greaterassembly.businessChannelOwnerId);

    CARAPI GetGreaterAssembly_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.greaterassembly.businessChannelOwnerId);


   CARAPI SetGreaterAssembly_ItemId(
     /* [in] */ CAdministration.item CFactory.greaterassembly.itemId);

    CARAPI GetGreaterAssembly_ItemId(
     /* [out] */ CAdministration.item* CFactory.greaterassembly.itemId);


   CARAPI SetGreaterAssembly_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.greaterassembly.supplierIds);

    CARAPI GetGreaterAssembly_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.greaterassembly.supplierIds);


   CARAPI SetGreaterAssembly_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.greaterassembly.docRefIds);

    CARAPI GetGreaterAssembly_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.greaterassembly.docRefIds);


   CARAPI SetGreaterAssembly_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.greaterassembly.imageRefIds);

    CARAPI GetGreaterAssembly_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.greaterassembly.imageRefIds);


   CARAPI SetGreaterAssembly_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.greaterassembly.videoRefIds);

    CARAPI GetGreaterAssembly_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.greaterassembly.videoRefIds);


   CARAPI SetGreaterAssemblyType_GreaterAssemblyTypeId(
     /* [in] */ const String& CFactory.greaterassemblyType.greaterassemblyTypeId);

    CARAPI GetGreaterAssemblyType_GreaterAssemblyTypeId(
     /* [out] */ String* CFactory.greaterassemblyType.greaterassemblyTypeId);


   CARAPI SetGreaterAssemblyType_GreaterAssemblyDescription(
     /* [in] */ const String& CFactory.greaterassemblyType.greaterassemblyDescription);

    CARAPI GetGreaterAssemblyType_GreaterAssemblyDescription(
     /* [out] */ String* CFactory.greaterassemblyType.greaterassemblyDescription);


   CARAPI SetGreaterAssemblyType_GreaterAssemblyCode(
     /* [in] */ const String& CFactory.greaterassemblyType.greaterassemblyCode);

    CARAPI GetGreaterAssemblyType_GreaterAssemblyCode(
     /* [out] */ String* CFactory.greaterassemblyType.greaterassemblyCode);


   CARAPI SetGreaterAssemblyType_Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.greaterassemblyType.corrosiveness);

    CARAPI GetGreaterAssemblyType_Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.greaterassemblyType.corrosiveness);


   CARAPI SetGreaterAssemblyType_Toxicity(
     /* [in] */ CHelper.toxicity CFactory.greaterassemblyType.toxicity);

    CARAPI GetGreaterAssemblyType_Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.greaterassemblyType.toxicity);


   CARAPI SetGreaterAssemblyType_Fragility(
     /* [in] */ CHelper.fragility CFactory.greaterassemblyType.fragility);

    CARAPI GetGreaterAssemblyType_Fragility(
     /* [out] */ CHelper.fragility* CFactory.greaterassemblyType.fragility);


   CARAPI SetGreaterAssemblyType_PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.greaterassemblyType.PhysicalStateWhenIdle);

    CARAPI GetGreaterAssemblyType_PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.greaterassemblyType.PhysicalStateWhenIdle);


   CARAPI SetGreaterAssemblyType_RemainingNum(
     /* [in] */ Int32 CFactory.greaterassemblyType.remainingNum);

    CARAPI GetGreaterAssemblyType_RemainingNum(
     /* [out] */ Int32* CFactory.greaterassemblyType.remainingNum);


   CARAPI SetGreaterAssemblyType_GreaterAssemblyReorderSetPoint(
     /* [in] */ Int32 CFactory.greaterassemblyType.greaterassemblyReorderSetPoint);

    CARAPI GetGreaterAssemblyType_GreaterAssemblyReorderSetPoint(
     /* [out] */ Int32* CFactory.greaterassemblyType.greaterassemblyReorderSetPoint);


   CARAPI SetGreaterAssemblyType_GreaterAssemblyReorderCode(
     /* [in] */ const String& CFactory.greaterassemblyType.greaterassemblyReorderCode);

    CARAPI GetGreaterAssemblyType_GreaterAssemblyReorderCode(
     /* [out] */ String* CFactory.greaterassemblyType.greaterassemblyReorderCode);


   CARAPI SetGreaterAssemblyType_MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.greaterassemblyType.materialTypeIds);

    CARAPI GetGreaterAssemblyType_MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.greaterassemblyType.materialTypeIds);


   CARAPI SetGreaterAssemblyType_PartTypeId(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.greaterassemblyType.partTypeId);

    CARAPI GetGreaterAssemblyType_PartTypeId(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.greaterassemblyType.partTypeId);


   CARAPI SetGreaterAssemblyType_MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.greaterassemblyType.minorsubassemblyTypeIds);

    CARAPI GetGreaterAssemblyType_MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.greaterassemblyType.minorsubassemblyTypeIds);


   CARAPI SetGreaterAssemblyType_SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.greaterassemblyType.subassemblyTypeIds);

    CARAPI GetGreaterAssemblyType_SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.greaterassemblyType.subassemblyTypeIds);


   CARAPI SetGreaterAssemblyType_MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.greaterassemblyType.majorsubassemblyTypeIds);

    CARAPI GetGreaterAssemblyType_MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.greaterassemblyType.majorsubassemblyTypeIds);


   CARAPI SetGreaterAssemblyType_LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.greaterassemblyType.lesserassemblyTypeIds);

    CARAPI GetGreaterAssemblyType_LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.greaterassemblyType.lesserassemblyTypeIds);


   CARAPI SetGreaterAssemblyType_AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.greaterassemblyType.assemblyTypeIds);

    CARAPI GetGreaterAssemblyType_AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.greaterassemblyType.assemblyTypeIds);


   CARAPI SetGreaterAssemblyType_ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.greaterassemblyType.productTypeIds);

    CARAPI GetGreaterAssemblyType_ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.greaterassemblyType.productTypeIds);


   CARAPI SetGreaterAssemblyType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.greaterassemblyType.businessChannelOwnerId);

    CARAPI GetGreaterAssemblyType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.greaterassemblyType.businessChannelOwnerId);


   CARAPI SetGreaterAssemblyType_ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.greaterassemblyType.itemTypeId);

    CARAPI GetGreaterAssemblyType_ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.greaterassemblyType.itemTypeId);


   CARAPI SetGreaterAssemblyType_SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.greaterassemblyType.supplierIds);

    CARAPI GetGreaterAssemblyType_SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.greaterassemblyType.supplierIds);


   CARAPI SetGreaterAssemblyType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.greaterassemblyType.docRefIds);

    CARAPI GetGreaterAssemblyType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.greaterassemblyType.docRefIds);


   CARAPI SetGreaterAssemblyType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.greaterassemblyType.imageRefIds);

    CARAPI GetGreaterAssemblyType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.greaterassemblyType.imageRefIds);


   CARAPI SetGreaterAssemblyType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.greaterassemblyType.videoRefIds);

    CARAPI GetGreaterAssemblyType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.greaterassemblyType.videoRefIds);


   CARAPI SetProduct_ProductId(
     /* [in] */ const String& CFactory.product.productId);

    CARAPI GetProduct_ProductId(
     /* [out] */ String* CFactory.product.productId);


   CARAPI SetProduct_Hazardous(
     /* [in] */ Boolean CFactory.product.hazardous);

    CARAPI GetProduct_Hazardous(
     /* [out] */ Boolean* CFactory.product.hazardous);


   CARAPI SetProduct_MasLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFactory.product.masLedgeFinTxIds);

    CARAPI GetProduct_MasLedgeFinTxIds(
     /* [out, callee] */ ArrayOf<String>* CFactory.product.masLedgeFinTxIds);


   CARAPI SetProduct_MasLedgeFinTxNums(
     /* [in] */ ArrayOf<Int32> CFactory.product.masLedgeFinTxNums);

    CARAPI GetProduct_MasLedgeFinTxNums(
     /* [out, callee] */ ArrayOf<Int32>* CFactory.product.masLedgeFinTxNums);


   CARAPI SetProduct_GenLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFactory.product.genLedgeFinTxIds);

    CARAPI GetProduct_GenLedgeFinTxIds(
     /* [out, callee] */ ArrayOf<String>* CFactory.product.genLedgeFinTxIds);


   CARAPI SetProduct_GenLedgeFinTxNums(
     /* [in] */ ArrayOf<Int32> CFactory.product.genLedgeFinTxNums);

    CARAPI GetProduct_GenLedgeFinTxNums(
     /* [out, callee] */ ArrayOf<Int32>* CFactory.product.genLedgeFinTxNums);


   CARAPI SetProduct_ProductName(
     /* [in] */ const String& CFactory.product.productName);

    CARAPI GetProduct_ProductName(
     /* [out] */ String* CFactory.product.productName);


   CARAPI SetProduct_ModelNumber(
     /* [in] */ const String& CFactory.product.modelNumber);

    CARAPI GetProduct_ModelNumber(
     /* [out] */ String* CFactory.product.modelNumber);


   CARAPI SetProduct_SerialNumber(
     /* [in] */ const String& CFactory.product.serialNumber);

    CARAPI GetProduct_SerialNumber(
     /* [out] */ String* CFactory.product.serialNumber);


   CARAPI SetProduct_QCCheckedPassed(
     /* [in] */ Boolean CFactory.product.qCCheckedPassed);

    CARAPI GetProduct_QCCheckedPassed(
     /* [out] */ Boolean* CFactory.product.qCCheckedPassed);


   CARAPI SetProduct_BestBeforeDate(
     /* [in] */ const String& CFactory.product.BestBeforeDate);

    CARAPI GetProduct_BestBeforeDate(
     /* [out] */ String* CFactory.product.BestBeforeDate);


   CARAPI SetProduct_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.product.businessChannelOwnerId);

    CARAPI GetProduct_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.product.businessChannelOwnerId);


   CARAPI SetProduct_ProductTypeId(
     /* [in] */ CFactory.productType CFactory.product.productTypeId);

    CARAPI GetProduct_ProductTypeId(
     /* [out] */ CFactory.productType* CFactory.product.productTypeId);


   CARAPI SetProduct_ItemId(
     /* [in] */ CAdministration.item CFactory.product.itemId);

    CARAPI GetProduct_ItemId(
     /* [out] */ CAdministration.item* CFactory.product.itemId);


   CARAPI SetProduct_CustomerId(
     /* [in] */ CCustomer.customer CFactory.product.customerId);

    CARAPI GetProduct_CustomerId(
     /* [out] */ CCustomer.customer* CFactory.product.customerId);


   CARAPI SetProduct_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.product.docRefIds);

    CARAPI GetProduct_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.product.docRefIds);


   CARAPI SetProduct_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.product.imageRefIds);

    CARAPI GetProduct_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.product.imageRefIds);


   CARAPI SetProduct_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.product.videoRefIds);

    CARAPI GetProduct_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.product.videoRefIds);


   CARAPI SetProductType_ProductTypeId(
     /* [in] */ const String& CFactory.productType.productTypeId);

    CARAPI GetProductType_ProductTypeId(
     /* [out] */ String* CFactory.productType.productTypeId);


   CARAPI SetProductType_ProductDescription(
     /* [in] */ const String& CFactory.productType.productDescription);

    CARAPI GetProductType_ProductDescription(
     /* [out] */ String* CFactory.productType.productDescription);


   CARAPI SetProductType_Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.productType.corrosiveness);

    CARAPI GetProductType_Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.productType.corrosiveness);


   CARAPI SetProductType_Toxicity(
     /* [in] */ CHelper.toxicity CFactory.productType.toxicity);

    CARAPI GetProductType_Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.productType.toxicity);


   CARAPI SetProductType_Fragility(
     /* [in] */ CHelper.fragility CFactory.productType.fragility);

    CARAPI GetProductType_Fragility(
     /* [out] */ CHelper.fragility* CFactory.productType.fragility);


   CARAPI SetProductType_PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.productType.PhysicalStateWhenIdle);

    CARAPI GetProductType_PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.productType.PhysicalStateWhenIdle);


   CARAPI SetProductType_RemainingNum(
     /* [in] */ Int32 CFactory.productType.remainingNum);

    CARAPI GetProductType_RemainingNum(
     /* [out] */ Int32* CFactory.productType.remainingNum);


   CARAPI SetProductType_LesserAssemblyReorderSetPoint(
     /* [in] */ Int32 CFactory.productType.lesserassemblyReorderSetPoint);

    CARAPI GetProductType_LesserAssemblyReorderSetPoint(
     /* [out] */ Int32* CFactory.productType.lesserassemblyReorderSetPoint);


   CARAPI SetProductType_LesserAssemblyReorderCode(
     /* [in] */ const String& CFactory.productType.lesserassemblyReorderCode);

    CARAPI GetProductType_LesserAssemblyReorderCode(
     /* [out] */ String* CFactory.productType.lesserassemblyReorderCode);


   CARAPI SetProductType_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.productType.businessChannelOwnerId);

    CARAPI GetProductType_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.productType.businessChannelOwnerId);


   CARAPI SetProductType_ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.productType.itemTypeId);

    CARAPI GetProductType_ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.productType.itemTypeId);


   CARAPI SetProductType_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.productType.docRefIds);

    CARAPI GetProductType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.productType.docRefIds);


   CARAPI SetProductType_ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.productType.imageRefIds);

    CARAPI GetProductType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.productType.imageRefIds);


   CARAPI SetProductType_VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.productType.videoRefIds);

    CARAPI GetProductType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.productType.videoRefIds);


   CARAPI SetShipment_ShipmentId(
     /* [in] */ const String& CFactory.shipment.shipmentId);

    CARAPI GetShipment_ShipmentId(
     /* [out] */ String* CFactory.shipment.shipmentId);


   CARAPI SetShipment_DistributorId(
     /* [in] */ const String& CFactory.shipment.distributorId);

    CARAPI GetShipment_DistributorId(
     /* [out] */ String* CFactory.shipment.distributorId);


   CARAPI SetShipment_SalesOrderIds(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.salesOrderIds);

    CARAPI GetShipment_SalesOrderIds(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.salesOrderIds);


   CARAPI SetShipment_PurchaseOrderIds(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.purchaseOrderIds);

    CARAPI GetShipment_PurchaseOrderIds(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.purchaseOrderIds);


   CARAPI SetShipment_ReceiverDeliveryAddress(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.receiverDeliveryAddress);

    CARAPI GetShipment_ReceiverDeliveryAddress(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.receiverDeliveryAddress);


   CARAPI SetShipment_SenderSourceAddress(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.senderSourceAddress);

    CARAPI GetShipment_SenderSourceAddress(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.senderSourceAddress);


   CARAPI SetShipment_ReceivedAtSourceTerminal(
     /* [in] */ const String& CFactory.shipment.receivedAtSourceTerminal);

    CARAPI GetShipment_ReceivedAtSourceTerminal(
     /* [out] */ String* CFactory.shipment.receivedAtSourceTerminal);


   CARAPI SetShipment_TrackingNumber(
     /* [in] */ const String& CFactory.shipment.trackingNumber);

    CARAPI GetShipment_TrackingNumber(
     /* [out] */ String* CFactory.shipment.trackingNumber);


   CARAPI SetShipment_TrackingURL(
     /* [in] */ const String& CFactory.shipment.trackingURL);

    CARAPI GetShipment_TrackingURL(
     /* [out] */ String* CFactory.shipment.trackingURL);


   CARAPI SetShipment_ETA(
     /* [in] */ const String& CFactory.shipment.eTA);

    CARAPI GetShipment_ETA(
     /* [out] */ String* CFactory.shipment.eTA);


   CARAPI SetShipment_JourneyPoints(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.journeyPoints);

    CARAPI GetShipment_JourneyPoints(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.journeyPoints);


   CARAPI SetShipment_JourneyPointNames(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.journeyPointNames);

    CARAPI GetShipment_JourneyPointNames(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.journeyPointNames);


   CARAPI SetShipment_DeliveredGPSLat(
     /* [in] */ Double CFactory.shipment.deliveredGPSLat);

    CARAPI GetShipment_DeliveredGPSLat(
     /* [out] */ Double* CFactory.shipment.deliveredGPSLat);


   CARAPI SetShipment_DeliveredGPSLong(
     /* [in] */ Double CFactory.shipment.deliveredGPSLong);

    CARAPI GetShipment_DeliveredGPSLong(
     /* [out] */ Double* CFactory.shipment.deliveredGPSLong);


   CARAPI SetShipment_DeliveryAddress(
     /* [in] */ const String& CFactory.shipment.deliveryAddress);

    CARAPI GetShipment_DeliveryAddress(
     /* [out] */ String* CFactory.shipment.deliveryAddress);


   CARAPI SetShipment_AddressesMatch(
     /* [in] */ Boolean CFactory.shipment.addressesMatch);

    CARAPI GetShipment_AddressesMatch(
     /* [out] */ Boolean* CFactory.shipment.addressesMatch);


   CARAPI SetShipment_BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.shipment.businessChannelOwnerId);

    CARAPI GetShipment_BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.shipment.businessChannelOwnerId);


   CARAPI SetShipment_SupplierId(
     /* [in] */ CSupplier.supplier CFactory.shipment.supplierId);

    CARAPI GetShipment_SupplierId(
     /* [out] */ CSupplier.supplier* CFactory.shipment.supplierId);


   CARAPI SetShipment_SupplierTypeId(
     /* [in] */ CSupplier.supplierType CFactory.shipment.supplierTypeId);

    CARAPI GetShipment_SupplierTypeId(
     /* [out] */ CSupplier.supplierType* CFactory.shipment.supplierTypeId);


   CARAPI SetShipment_DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.shipment.docRefIds);

    CARAPI GetShipment_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.shipment.docRefIds);


   CARAPI SetShipment_DeliveryImageIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.shipment.deliveryImageIds);

    CARAPI GetShipment_DeliveryImageIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.shipment.deliveryImageIds);


   CARAPI SetShipment_ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFactory.shipment.itemIds);

    CARAPI GetShipment_ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CFactory.shipment.itemIds);


   CARAPI SetShipment_ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CFactory.shipment.itemTypeIds);

    CARAPI GetShipment_ItemTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CFactory.shipment.itemTypeIds);


   CARAPI SetShipment_CustomerId(
     /* [in] */ CCustomer.customer CFactory.shipment.customerId);

    CARAPI GetShipment_CustomerId(
     /* [out] */ CCustomer.customer* CFactory.shipment.customerId);


   CARAPI SetShipment_NextDistributorId(
     /* [in] */ CSupplier.distributor CFactory.shipment.nextDistributorId);

    CARAPI GetShipment_NextDistributorId(
     /* [out] */ CSupplier.distributor* CFactory.shipment.nextDistributorId);


   CARAPI SetShipment_ContinuationShipmentId(
     /* [in] */ CFactory.shipment CFactory.shipment.continuationShipmentId);

    CARAPI GetShipment_ContinuationShipmentId(
     /* [out] */ CFactory.shipment* CFactory.shipment.continuationShipmentId);





protected:
    // Member variables
const String& mSetMaterial_MaterialId
String* mGetMaterial_MaterialId
Boolean mSetMaterial_Hazardous
Boolean* mGetMaterial_Hazardous
const String& mSetMaterial_MaterialName
String* mGetMaterial_MaterialName
const String& mSetMaterial_MaterialDescription
String* mGetMaterial_MaterialDescription
Boolean mSetMaterial_QCCheckedPassed
Boolean* mGetMaterial_QCCheckedPassed
CRegister.businessChannelOwner mSetMaterial_BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMaterial_BusinessChannelOwnerId
CAdministration.item mSetMaterial_ItemId
CAdministration.item* mGetMaterial_ItemId
CSupplier.supplier mSetMaterial_SupplierId
CSupplier.supplier* mGetMaterial_SupplierId
CFactory.materialType mSetMaterial_MaterialTypeId
CFactory.materialType* mGetMaterial_MaterialTypeId
CFactory.part mSetMaterial_PartId
CFactory.part* mGetMaterial_PartId
CFactory.minorsubassembly mSetMaterial_MinorSubAssemblyId
CFactory.minorsubassembly* mGetMaterial_MinorSubAssemblyId
CFactory.subassembly mSetMaterial_SubAssemblyId
CFactory.subassembly* mGetMaterial_SubAssemblyId
CFactory.majorsubassembly mSetMaterial_MajorSubAssemblyId
CFactory.majorsubassembly* mGetMaterial_MajorSubAssemblyId
CFactory.lesserassembly mSetMaterial_LesserAssemblyId
CFactory.lesserassembly* mGetMaterial_LesserAssemblyId
CFactory.assembly mSetMaterial_AssemblyId
CFactory.assembly* mGetMaterial_AssemblyId
CFactory.greaterassembly mSetMaterial_GreaterAssemblyId
CFactory.greaterassembly* mGetMaterial_GreaterAssemblyId
CFactory.product mSetMaterial_ProductId
CFactory.product* mGetMaterial_ProductId
ArrayOf<CAdministration.documents> mSetMaterial_DocRefIds
ArrayOf<CAdministration.documents>* mGetMaterial_DocRefIds
ArrayOf<CAdministration.images> mSetMaterial_ImageRefIds
ArrayOf<CAdministration.images>* mGetMaterial_ImageRefIds
ArrayOf<CAdministration.video> mSetMaterial_VideoRefIds
ArrayOf<CAdministration.video>* mGetMaterial_VideoRefIds
const String& mSetMaterialType_MaterialTypeId
String* mGetMaterialType_MaterialTypeId
const String& mSetMaterialType_MaterialDescription
String* mGetMaterialType_MaterialDescription
ArrayOf<const String&> mSetMaterialType_MaterialSafetyDataRefs
ArrayOf<String>* mGetMaterialType_MaterialSafetyDataRefs
const String& mSetMaterialType_MaterialCode
String* mGetMaterialType_MaterialCode
const String& mSetMaterialType_UnitsOfMeasurement
String* mGetMaterialType_UnitsOfMeasurement
Double mSetMaterialType_RemainingAmount
Double* mGetMaterialType_RemainingAmount
CHelper.corrosiveness mSetMaterialType_Corrosiveness
CHelper.corrosiveness* mGetMaterialType_Corrosiveness
CHelper.toxicity mSetMaterialType_Toxicity
CHelper.toxicity* mGetMaterialType_Toxicity
CHelper.fragility mSetMaterialType_Fragility
CHelper.fragility* mGetMaterialType_Fragility
CHelper.physicalStateWhenIdle mSetMaterialType_PhysicalStateWhenIdle
CHelper.physicalStateWhenIdle* mGetMaterialType_PhysicalStateWhenIdle
Double mSetMaterialType_RemainingNum
Double* mGetMaterialType_RemainingNum
Double mSetMaterialType_RawMaterialStockReorderCode
Double* mGetMaterialType_RawMaterialStockReorderCode
const String& mSetMaterialType_BusinessChannelOwnerId
String* mGetMaterialType_BusinessChannelOwnerId
CRegister.businessChannelOwner mSetMaterialType_ItemTypeId
CRegister.businessChannelOwner* mGetMaterialType_ItemTypeId
CAdministration.itemType mSetMaterialType_SupplierIds
CAdministration.itemType* mGetMaterialType_SupplierIds
ArrayOf<CSupplier.supplier> mSetMaterialType_PartTypeIds
ArrayOf<CSupplier.supplier>* mGetMaterialType_PartTypeIds
ArrayOf<CFactory.partType> mSetMaterialType_MinorSubAssemblyTypeIds
ArrayOf<CFactory.partType>* mGetMaterialType_MinorSubAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType> mSetMaterialType_SubAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType>* mGetMaterialType_SubAssemblyTypeIds
ArrayOf<CFactory.subassemblyType> mSetMaterialType_MajorSubAssemblyTypeIds
ArrayOf<CFactory.subassemblyType>* mGetMaterialType_MajorSubAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType> mSetMaterialType_LesserAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType>* mGetMaterialType_LesserAssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType> mSetMaterialType_AssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType>* mGetMaterialType_AssemblyTypeIds
ArrayOf<CFactory.assemblyType> mSetMaterialType_GreaterAssemblyTypeIds
ArrayOf<CFactory.assemblyType>* mGetMaterialType_GreaterAssemblyTypeIds
ArrayOf<CFactory.greaterassemblyType> mSetMaterialType_ProductTypeIds
ArrayOf<CFactory.greaterassemblyType>* mGetMaterialType_ProductTypeIds
ArrayOf<CFactory.productType> mSetMaterialType_DocRefIds
ArrayOf<CFactory.productType>* mGetMaterialType_DocRefIds
ArrayOf<CAdministration.documents> mSetMaterialType_ImageRefIds
ArrayOf<CAdministration.documents>* mGetMaterialType_ImageRefIds
ArrayOf<CAdministration.images> mSetMaterialType_VideoRefIds
ArrayOf<CAdministration.images>* mGetMaterialType_VideoRefIds
ArrayOf<CAdministration.video> mSetPart_PartId
ArrayOf<CAdministration.video>* mGetPart_PartId
const String& mSetPart_Hazardous
String* mGetPart_Hazardous
Boolean mSetPart_PartName
Boolean* mGetPart_PartName
const String& mSetPart_PartDescription
String* mGetPart_PartDescription
const String& mSetPart_QCCheckedPassed
String* mGetPart_QCCheckedPassed
Boolean mSetPart_BusinessChannelOwnerId
Boolean* mGetPart_BusinessChannelOwnerId
CRegister.businessChannelOwner mSetPart_MaterialIds
CRegister.businessChannelOwner* mGetPart_MaterialIds
ArrayOf<CFactory.material> mSetPart_PartTypeId
ArrayOf<CFactory.material>* mGetPart_PartTypeId
CFactory.partType mSetPart_ItemId
CFactory.partType* mGetPart_ItemId
CAdministration.item mSetPart_SupplierIds
CAdministration.item* mGetPart_SupplierIds
ArrayOf<CSupplier.supplier> mSetPart_MinorSubAssemblyId
ArrayOf<CSupplier.supplier>* mGetPart_MinorSubAssemblyId
CFactory.minorsubassembly mSetPart_SubAssemblyId
CFactory.minorsubassembly* mGetPart_SubAssemblyId
CFactory.subassembly mSetPart_MajorSubAssemblyId
CFactory.subassembly* mGetPart_MajorSubAssemblyId
CFactory.majorsubassembly mSetPart_LesserAssemblyId
CFactory.majorsubassembly* mGetPart_LesserAssemblyId
CFactory.lesserassembly mSetPart_AssemblyId
CFactory.lesserassembly* mGetPart_AssemblyId
CFactory.assembly mSetPart_GreaterAssemblyId
CFactory.assembly* mGetPart_GreaterAssemblyId
CFactory.greaterassembly mSetPart_ProductId
CFactory.greaterassembly* mGetPart_ProductId
CFactory.product mSetPart_DocRefIds
CFactory.product* mGetPart_DocRefIds
ArrayOf<CAdministration.documents> mSetPart_ImageRefIds
ArrayOf<CAdministration.documents>* mGetPart_ImageRefIds
ArrayOf<CAdministration.images> mSetPart_VideoRefIds
ArrayOf<CAdministration.images>* mGetPart_VideoRefIds
ArrayOf<CAdministration.video> mSetPartType_PartTypeId
ArrayOf<CAdministration.video>* mGetPartType_PartTypeId
const String& mSetPartType_PartDescription
String* mGetPartType_PartDescription
const String& mSetPartType_PartCode
String* mGetPartType_PartCode
const String& mSetPartType_Corrosiveness
String* mGetPartType_Corrosiveness
CHelper.corrosiveness mSetPartType_Toxicity
CHelper.corrosiveness* mGetPartType_Toxicity
CHelper.toxicity mSetPartType_Fragility
CHelper.toxicity* mGetPartType_Fragility
CHelper.fragility mSetPartType_PhysicalStateWhenIdle
CHelper.fragility* mGetPartType_PhysicalStateWhenIdle
CHelper.physicalStateWhenIdle mSetPartType_RemainingNum
CHelper.physicalStateWhenIdle* mGetPartType_RemainingNum
Int32 mSetPartType_PartReorderCode
Int32* mGetPartType_PartReorderCode
Int32 mSetPartType_BusinessChannelOwnerId
Int32* mGetPartType_BusinessChannelOwnerId
const String& mSetPartType_ItemTypeId
String* mGetPartType_ItemTypeId
CRegister.businessChannelOwner mSetPartType_SupplierIds
CRegister.businessChannelOwner* mGetPartType_SupplierIds
CAdministration.itemType mSetPartType_MaterialTypeIds
CAdministration.itemType* mGetPartType_MaterialTypeIds
ArrayOf<CSupplier.supplier> mSetPartType_MinorSubAssemblyTypeIds
ArrayOf<CSupplier.supplier>* mGetPartType_MinorSubAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetPartType_SubAssemblyTypeIds
ArrayOf<CFactory.materialType>* mGetPartType_SubAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType> mSetPartType_MajorSubAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType>* mGetPartType_MajorSubAssemblyTypeIds
ArrayOf<CFactory.subassemblyType> mSetPartType_LesserAssemblyTypeIds
ArrayOf<CFactory.subassemblyType>* mGetPartType_LesserAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType> mSetPartType_AssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType>* mGetPartType_AssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType> mSetPartType_GreaterAssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType>* mGetPartType_GreaterAssemblyTypeIds
ArrayOf<CFactory.assemblyType> mSetPartType_ProductTypeIds
ArrayOf<CFactory.assemblyType>* mGetPartType_ProductTypeIds
ArrayOf<CFactory.greaterassemblyType> mSetPartType_DocRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetPartType_DocRefIds
ArrayOf<CFactory.productType> mSetPartType_ImageRefIds
ArrayOf<CFactory.productType>* mGetPartType_ImageRefIds
ArrayOf<CAdministration.documents> mSetPartType_VideoRefIds
ArrayOf<CAdministration.documents>* mGetPartType_VideoRefIds
ArrayOf<CAdministration.images> mSetMinorSubAssembly_MinorSubAssyId
ArrayOf<CAdministration.images>* mGetMinorSubAssembly_MinorSubAssyId
ArrayOf<CAdministration.video> mSetMinorSubAssembly_Hazardous
ArrayOf<CAdministration.video>* mGetMinorSubAssembly_Hazardous
const String& mSetMinorSubAssembly_MinorSubAssemblyName
String* mGetMinorSubAssembly_MinorSubAssemblyName
Boolean mSetMinorSubAssembly_MinorSubAssemblyDescription
Boolean* mGetMinorSubAssembly_MinorSubAssemblyDescription
const String& mSetMinorSubAssembly_QCCheckedPassed
String* mGetMinorSubAssembly_QCCheckedPassed
const String& mSetMinorSubAssembly_BusinessChannelOwnerId
String* mGetMinorSubAssembly_BusinessChannelOwnerId
Boolean mSetMinorSubAssembly_MinorSubAssemblyTypeId
Boolean* mGetMinorSubAssembly_MinorSubAssemblyTypeId
CRegister.businessChannelOwner mSetMinorSubAssembly_ItemId
CRegister.businessChannelOwner* mGetMinorSubAssembly_ItemId
CFactory.minorsubassembly mSetMinorSubAssembly_SupplierIds
CFactory.minorsubassembly* mGetMinorSubAssembly_SupplierIds
CAdministration.item mSetMinorSubAssembly_MaterialIds
CAdministration.item* mGetMinorSubAssembly_MaterialIds
ArrayOf<CSupplier.supplier> mSetMinorSubAssembly_PartIds
ArrayOf<CSupplier.supplier>* mGetMinorSubAssembly_PartIds
ArrayOf<CFactory.material> mSetMinorSubAssembly_SubAssemblyId
ArrayOf<CFactory.material>* mGetMinorSubAssembly_SubAssemblyId
ArrayOf<CFactory.part> mSetMinorSubAssembly_MajorSubAssemblyId
ArrayOf<CFactory.part>* mGetMinorSubAssembly_MajorSubAssemblyId
CFactory.subassembly mSetMinorSubAssembly_LesserAssemblyId
CFactory.subassembly* mGetMinorSubAssembly_LesserAssemblyId
CFactory.majorsubassembly mSetMinorSubAssembly_AssemblyId
CFactory.majorsubassembly* mGetMinorSubAssembly_AssemblyId
CFactory.lesserassembly mSetMinorSubAssembly_GreaterAssemblyId
CFactory.lesserassembly* mGetMinorSubAssembly_GreaterAssemblyId
CFactory.assembly mSetMinorSubAssembly_ProductId
CFactory.assembly* mGetMinorSubAssembly_ProductId
CFactory.greaterassembly mSetMinorSubAssembly_DocRefIds
CFactory.greaterassembly* mGetMinorSubAssembly_DocRefIds
CFactory.product mSetMinorSubAssembly_ImageRefIds
CFactory.product* mGetMinorSubAssembly_ImageRefIds
ArrayOf<CAdministration.documents> mSetMinorSubAssembly_VideoRefIds
ArrayOf<CAdministration.documents>* mGetMinorSubAssembly_VideoRefIds
ArrayOf<CAdministration.images> mSetMinorSubAssemblyType_MinorSubAssemblyTypeId
ArrayOf<CAdministration.images>* mGetMinorSubAssemblyType_MinorSubAssemblyTypeId
ArrayOf<CAdministration.video> mSetMinorSubAssemblyType_MinorSubAssemblyDescription
ArrayOf<CAdministration.video>* mGetMinorSubAssemblyType_MinorSubAssemblyDescription
const String& mSetMinorSubAssemblyType_MinorSubAssemblyCode
String* mGetMinorSubAssemblyType_MinorSubAssemblyCode
const String& mSetMinorSubAssemblyType_Corrosiveness
String* mGetMinorSubAssemblyType_Corrosiveness
const String& mSetMinorSubAssemblyType_Toxicity
String* mGetMinorSubAssemblyType_Toxicity
CHelper.corrosiveness mSetMinorSubAssemblyType_Fragility
CHelper.corrosiveness* mGetMinorSubAssemblyType_Fragility
CHelper.toxicity mSetMinorSubAssemblyType_PhysicalStateWhenIdle
CHelper.toxicity* mGetMinorSubAssemblyType_PhysicalStateWhenIdle
CHelper.fragility mSetMinorSubAssemblyType_RemainingNum
CHelper.fragility* mGetMinorSubAssemblyType_RemainingNum
CHelper.physicalStateWhenIdle mSetMinorSubAssemblyType_MinorSubAssemblyReorderCode
CHelper.physicalStateWhenIdle* mGetMinorSubAssemblyType_MinorSubAssemblyReorderCode
Int32 mSetMinorSubAssemblyType_BusinessChannelOwnerId
Int32* mGetMinorSubAssemblyType_BusinessChannelOwnerId
Int32 mSetMinorSubAssemblyType_ItemTypeId
Int32* mGetMinorSubAssemblyType_ItemTypeId
const String& mSetMinorSubAssemblyType_SupplierIds
String* mGetMinorSubAssemblyType_SupplierIds
CRegister.businessChannelOwner mSetMinorSubAssemblyType_MaterialTypeIds
CRegister.businessChannelOwner* mGetMinorSubAssemblyType_MaterialTypeIds
CAdministration.itemType mSetMinorSubAssemblyType_PartTypeIds
CAdministration.itemType* mGetMinorSubAssemblyType_PartTypeIds
ArrayOf<CSupplier.supplier> mSetMinorSubAssemblyType_SubAssemblyTypeIds
ArrayOf<CSupplier.supplier>* mGetMinorSubAssemblyType_SubAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetMinorSubAssemblyType_MajorSubAssemblyTypeIds
ArrayOf<CFactory.materialType>* mGetMinorSubAssemblyType_MajorSubAssemblyTypeIds
ArrayOf<CFactory.partType> mSetMinorSubAssemblyType_LesserAssemblyTypeIds
ArrayOf<CFactory.partType>* mGetMinorSubAssemblyType_LesserAssemblyTypeIds
ArrayOf<CFactory.subassemblyType> mSetMinorSubAssemblyType_AssemblyTypeIds
ArrayOf<CFactory.subassemblyType>* mGetMinorSubAssemblyType_AssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType> mSetMinorSubAssemblyType_GreaterAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType>* mGetMinorSubAssemblyType_GreaterAssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType> mSetMinorSubAssemblyType_ProductTypeIds
ArrayOf<CFactory.lesserassemblyType>* mGetMinorSubAssemblyType_ProductTypeIds
ArrayOf<CFactory.assemblyType> mSetMinorSubAssemblyType_DocRefIds
ArrayOf<CFactory.assemblyType>* mGetMinorSubAssemblyType_DocRefIds
ArrayOf<CFactory.greaterassemblyType> mSetMinorSubAssemblyType_ImageRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetMinorSubAssemblyType_ImageRefIds
ArrayOf<CFactory.productType> mSetMinorSubAssemblyType_VideoRefIds
ArrayOf<CFactory.productType>* mGetMinorSubAssemblyType_VideoRefIds
ArrayOf<CAdministration.documents> mSetSubAssembly_SubAssyId
ArrayOf<CAdministration.documents>* mGetSubAssembly_SubAssyId
ArrayOf<CAdministration.images> mSetSubAssembly_Hazardous
ArrayOf<CAdministration.images>* mGetSubAssembly_Hazardous
ArrayOf<CAdministration.video> mSetSubAssembly_SubAssemblyName
ArrayOf<CAdministration.video>* mGetSubAssembly_SubAssemblyName
const String& mSetSubAssembly_SubAssemblyDescription
String* mGetSubAssembly_SubAssemblyDescription
Boolean mSetSubAssembly_QCCheckedPassed
Boolean* mGetSubAssembly_QCCheckedPassed
const String& mSetSubAssembly_MaterialIds
String* mGetSubAssembly_MaterialIds
const String& mSetSubAssembly_PartIds
String* mGetSubAssembly_PartIds
Boolean mSetSubAssembly_MinorSubAssemblyIds
Boolean* mGetSubAssembly_MinorSubAssemblyIds
ArrayOf<CFactory.material> mSetSubAssembly_MajorSubAssemblyId
ArrayOf<CFactory.material>* mGetSubAssembly_MajorSubAssemblyId
ArrayOf<CFactory.part> mSetSubAssembly_LesserAssemblyId
ArrayOf<CFactory.part>* mGetSubAssembly_LesserAssemblyId
ArrayOf<CFactory.minorsubassembly> mSetSubAssembly_AssemblyId
ArrayOf<CFactory.minorsubassembly>* mGetSubAssembly_AssemblyId
CFactory.majorsubassembly mSetSubAssembly_GreaterAssemblyId
CFactory.majorsubassembly* mGetSubAssembly_GreaterAssemblyId
CFactory.lesserassembly mSetSubAssembly_ProductId
CFactory.lesserassembly* mGetSubAssembly_ProductId
CFactory.assembly mSetSubAssembly_BusinessChannelOwnerId
CFactory.assembly* mGetSubAssembly_BusinessChannelOwnerId
CFactory.greaterassembly mSetSubAssembly_SubAssemblyTypeId
CFactory.greaterassembly* mGetSubAssembly_SubAssemblyTypeId
CFactory.product mSetSubAssembly_ItemId
CFactory.product* mGetSubAssembly_ItemId
CRegister.businessChannelOwner mSetSubAssembly_SupplierIds
CRegister.businessChannelOwner* mGetSubAssembly_SupplierIds
CFactory.subassemblyType mSetSubAssembly_DocRefIds
CFactory.subassemblyType* mGetSubAssembly_DocRefIds
CAdministration.item mSetSubAssembly_ImageRefIds
CAdministration.item* mGetSubAssembly_ImageRefIds
ArrayOf<CSupplier.supplier> mSetSubAssembly_VideoRefIds
ArrayOf<CSupplier.supplier>* mGetSubAssembly_VideoRefIds
ArrayOf<CAdministration.documents> mSetSubAssemblyType_SubAssemblyTypeId
ArrayOf<CAdministration.documents>* mGetSubAssemblyType_SubAssemblyTypeId
ArrayOf<CAdministration.images> mSetSubAssemblyType_SubAssemblyCode
ArrayOf<CAdministration.images>* mGetSubAssemblyType_SubAssemblyCode
ArrayOf<CAdministration.video> mSetSubAssemblyType_SubAssemblyDescription
ArrayOf<CAdministration.video>* mGetSubAssemblyType_SubAssemblyDescription
const String& mSetSubAssemblyType_Corrosiveness
String* mGetSubAssemblyType_Corrosiveness
const String& mSetSubAssemblyType_Toxicity
String* mGetSubAssemblyType_Toxicity
const String& mSetSubAssemblyType_Fragility
String* mGetSubAssemblyType_Fragility
CHelper.corrosiveness mSetSubAssemblyType_PhysicalStateWhenIdle
CHelper.corrosiveness* mGetSubAssemblyType_PhysicalStateWhenIdle
CHelper.toxicity mSetSubAssemblyType_RemainingNum
CHelper.toxicity* mGetSubAssemblyType_RemainingNum
CHelper.fragility mSetSubAssemblyType_SubAssemblyReorderCode
CHelper.fragility* mGetSubAssemblyType_SubAssemblyReorderCode
CHelper.physicalStateWhenIdle mSetSubAssemblyType_BusinessChannelOwnerId
CHelper.physicalStateWhenIdle* mGetSubAssemblyType_BusinessChannelOwnerId
Int32 mSetSubAssemblyType_ItemTypeId
Int32* mGetSubAssemblyType_ItemTypeId
Int32 mSetSubAssemblyType_SupplierIds
Int32* mGetSubAssemblyType_SupplierIds
const String& mSetSubAssemblyType_MaterialTypeIds
String* mGetSubAssemblyType_MaterialTypeIds
CRegister.businessChannelOwner mSetSubAssemblyType_PartTypeId
CRegister.businessChannelOwner* mGetSubAssemblyType_PartTypeId
CAdministration.itemType mSetSubAssemblyType_MinorSubAssemblyTypeIds
CAdministration.itemType* mGetSubAssemblyType_MinorSubAssemblyTypeIds
ArrayOf<CSupplier.supplier> mSetSubAssemblyType_MajorSubAssemblyTypeIds
ArrayOf<CSupplier.supplier>* mGetSubAssemblyType_MajorSubAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetSubAssemblyType_LesserAssemblyTypeIds
ArrayOf<CFactory.materialType>* mGetSubAssemblyType_LesserAssemblyTypeIds
ArrayOf<CFactory.partType> mSetSubAssemblyType_AssemblyTypeIds
ArrayOf<CFactory.partType>* mGetSubAssemblyType_AssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType> mSetSubAssemblyType_GreaterAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType>* mGetSubAssemblyType_GreaterAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType> mSetSubAssemblyType_ProductTypeIds
ArrayOf<CFactory.majorsubassemblyType>* mGetSubAssemblyType_ProductTypeIds
ArrayOf<CFactory.lesserassemblyType> mSetSubAssemblyType_DocRefIds
ArrayOf<CFactory.lesserassemblyType>* mGetSubAssemblyType_DocRefIds
ArrayOf<CFactory.assemblyType> mSetSubAssemblyType_ImageRefIds
ArrayOf<CFactory.assemblyType>* mGetSubAssemblyType_ImageRefIds
ArrayOf<CFactory.greaterassemblyType> mSetSubAssemblyType_VideoRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetSubAssemblyType_VideoRefIds
ArrayOf<CFactory.productType> mSetMajorSubAssembly_MajorSubAssyId
ArrayOf<CFactory.productType>* mGetMajorSubAssembly_MajorSubAssyId
ArrayOf<CAdministration.documents> mSetMajorSubAssembly_Hazardous
ArrayOf<CAdministration.documents>* mGetMajorSubAssembly_Hazardous
ArrayOf<CAdministration.images> mSetMajorSubAssembly_MajorSubAssemblyName
ArrayOf<CAdministration.images>* mGetMajorSubAssembly_MajorSubAssemblyName
ArrayOf<CAdministration.video> mSetMajorSubAssembly_MajorSubAssemblyDescription
ArrayOf<CAdministration.video>* mGetMajorSubAssembly_MajorSubAssemblyDescription
const String& mSetMajorSubAssembly_QCCheckedPassed
String* mGetMajorSubAssembly_QCCheckedPassed
Boolean mSetMajorSubAssembly_MajorSubAssemblyCode
Boolean* mGetMajorSubAssembly_MajorSubAssemblyCode
const String& mSetMajorSubAssembly_MaterialIds
String* mGetMajorSubAssembly_MaterialIds
const String& mSetMajorSubAssembly_PartIds
String* mGetMajorSubAssembly_PartIds
Boolean mSetMajorSubAssembly_MinorSubAssemblyIds
Boolean* mGetMajorSubAssembly_MinorSubAssemblyIds
const String& mSetMajorSubAssembly_SubAssemblyIds
String* mGetMajorSubAssembly_SubAssemblyIds
ArrayOf<CFactory.material> mSetMajorSubAssembly_LesserAssemblyId
ArrayOf<CFactory.material>* mGetMajorSubAssembly_LesserAssemblyId
ArrayOf<CFactory.part> mSetMajorSubAssembly_AssemblyId
ArrayOf<CFactory.part>* mGetMajorSubAssembly_AssemblyId
ArrayOf<CFactory.minorsubassembly> mSetMajorSubAssembly_GreaterAssembly
ArrayOf<CFactory.minorsubassembly>* mGetMajorSubAssembly_GreaterAssembly
ArrayOf<CFactory.subassembly> mSetMajorSubAssembly_ProductIds
ArrayOf<CFactory.subassembly>* mGetMajorSubAssembly_ProductIds
CFactory.lesserassembly mSetMajorSubAssembly_BusinessChannelOwnerId
CFactory.lesserassembly* mGetMajorSubAssembly_BusinessChannelOwnerId
CFactory.assembly mSetMajorSubAssembly_MajorSubAssemblyTypeId
CFactory.assembly* mGetMajorSubAssembly_MajorSubAssemblyTypeId
CFactory.greaterassembly mSetMajorSubAssembly_ItemId
CFactory.greaterassembly* mGetMajorSubAssembly_ItemId
CFactory.product mSetMajorSubAssembly_SupplierIds
CFactory.product* mGetMajorSubAssembly_SupplierIds
CRegister.businessChannelOwner mSetMajorSubAssembly_DocRefIds
CRegister.businessChannelOwner* mGetMajorSubAssembly_DocRefIds
CFactory.majorsubassemblyType mSetMajorSubAssembly_ImageRefIds
CFactory.majorsubassemblyType* mGetMajorSubAssembly_ImageRefIds
CAdministration.item mSetMajorSubAssembly_VideoRefIds
CAdministration.item* mGetMajorSubAssembly_VideoRefIds
ArrayOf<CSupplier.supplier> mSetMajorSubAssemblyType_MajorSubAssemblyTypeId
ArrayOf<CSupplier.supplier>* mGetMajorSubAssemblyType_MajorSubAssemblyTypeId
ArrayOf<CAdministration.documents> mSetMajorSubAssemblyType_MajorSubAssemblyDescription
ArrayOf<CAdministration.documents>* mGetMajorSubAssemblyType_MajorSubAssemblyDescription
ArrayOf<CAdministration.images> mSetMajorSubAssemblyType_Corrosiveness
ArrayOf<CAdministration.images>* mGetMajorSubAssemblyType_Corrosiveness
ArrayOf<CAdministration.video> mSetMajorSubAssemblyType_Toxicity
ArrayOf<CAdministration.video>* mGetMajorSubAssemblyType_Toxicity
const String& mSetMajorSubAssemblyType_Fragility
String* mGetMajorSubAssemblyType_Fragility
const String& mSetMajorSubAssemblyType_PhysicalStateWhenIdle
String* mGetMajorSubAssemblyType_PhysicalStateWhenIdle
CHelper.corrosiveness mSetMajorSubAssemblyType_RemainingNum
CHelper.corrosiveness* mGetMajorSubAssemblyType_RemainingNum
CHelper.toxicity mSetMajorSubAssemblyType_MajorSubAssemblyReorderCode
CHelper.toxicity* mGetMajorSubAssemblyType_MajorSubAssemblyReorderCode
CHelper.fragility mSetMajorSubAssemblyType_MaterialTypeIds
CHelper.fragility* mGetMajorSubAssemblyType_MaterialTypeIds
CHelper.physicalStateWhenIdle mSetMajorSubAssemblyType_PartTypeId
CHelper.physicalStateWhenIdle* mGetMajorSubAssemblyType_PartTypeId
Int32 mSetMajorSubAssemblyType_MinorSubAssemblyTypeIds
Int32* mGetMajorSubAssemblyType_MinorSubAssemblyTypeIds
Int32 mSetMajorSubAssemblyType_SubAssemblyTypeIds
Int32* mGetMajorSubAssemblyType_SubAssemblyTypeIds
const String& mSetMajorSubAssemblyType_LesserAssemblyTypeIds
String* mGetMajorSubAssemblyType_LesserAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetMajorSubAssemblyType_AssemblyTypeIds
ArrayOf<CFactory.materialType>* mGetMajorSubAssemblyType_AssemblyTypeIds
ArrayOf<CFactory.partType> mSetMajorSubAssemblyType_GreaterAssemblyTypeIds
ArrayOf<CFactory.partType>* mGetMajorSubAssemblyType_GreaterAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType> mSetMajorSubAssemblyType_ProductTypeIds
ArrayOf<CFactory.minorsubassemblyType>* mGetMajorSubAssemblyType_ProductTypeIds
ArrayOf<CFactory.subassemblyType> mSetMajorSubAssemblyType_BusinessChannelOwnerId
ArrayOf<CFactory.subassemblyType>* mGetMajorSubAssemblyType_BusinessChannelOwnerId
ArrayOf<CFactory.lesserassemblyType> mSetMajorSubAssemblyType_ItemTypeId
ArrayOf<CFactory.lesserassemblyType>* mGetMajorSubAssemblyType_ItemTypeId
ArrayOf<CFactory.assemblyType> mSetMajorSubAssemblyType_SupplierIds
ArrayOf<CFactory.assemblyType>* mGetMajorSubAssemblyType_SupplierIds
ArrayOf<CFactory.greaterassemblyType> mSetMajorSubAssemblyType_DocRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetMajorSubAssemblyType_DocRefIds
ArrayOf<CFactory.productType> mSetMajorSubAssemblyType_ImageRefIds
ArrayOf<CFactory.productType>* mGetMajorSubAssemblyType_ImageRefIds
CRegister.businessChannelOwner mSetMajorSubAssemblyType_VideoRefIds
CRegister.businessChannelOwner* mGetMajorSubAssemblyType_VideoRefIds
CAdministration.itemType mSetLesserAssembly_LesserAssyId
CAdministration.itemType* mGetLesserAssembly_LesserAssyId
ArrayOf<CSupplier.supplier> mSetLesserAssembly_Hazardous
ArrayOf<CSupplier.supplier>* mGetLesserAssembly_Hazardous
ArrayOf<CAdministration.documents> mSetLesserAssembly_LesserAssemblyName
ArrayOf<CAdministration.documents>* mGetLesserAssembly_LesserAssemblyName
ArrayOf<CAdministration.images> mSetLesserAssembly_LesserAssemblyDescription
ArrayOf<CAdministration.images>* mGetLesserAssembly_LesserAssemblyDescription
ArrayOf<CAdministration.video> mSetLesserAssembly_QCCheckedPassed
ArrayOf<CAdministration.video>* mGetLesserAssembly_QCCheckedPassed
const String& mSetLesserAssembly_MaterialIds
String* mGetLesserAssembly_MaterialIds
Boolean mSetLesserAssembly_PartIds
Boolean* mGetLesserAssembly_PartIds
const String& mSetLesserAssembly_MinorSubAssemblyIds
String* mGetLesserAssembly_MinorSubAssemblyIds
const String& mSetLesserAssembly_SubAssemblyIds
String* mGetLesserAssembly_SubAssemblyIds
Boolean mSetLesserAssembly_MajorSubAssemblyIds
Boolean* mGetLesserAssembly_MajorSubAssemblyIds
ArrayOf<CFactory.material> mSetLesserAssembly_AssemblyId
ArrayOf<CFactory.material>* mGetLesserAssembly_AssemblyId
ArrayOf<CFactory.part> mSetLesserAssembly_GreaterAssemblyId
ArrayOf<CFactory.part>* mGetLesserAssembly_GreaterAssemblyId
ArrayOf<CFactory.minorsubassembly> mSetLesserAssembly_LesserAssemblyTypeId
ArrayOf<CFactory.minorsubassembly>* mGetLesserAssembly_LesserAssemblyTypeId
ArrayOf<CFactory.subassembly> mSetLesserAssembly_ProductId
ArrayOf<CFactory.subassembly>* mGetLesserAssembly_ProductId
ArrayOf<CFactory.majorsubassembly> mSetLesserAssembly_BusinessChannelOwnerId
ArrayOf<CFactory.majorsubassembly>* mGetLesserAssembly_BusinessChannelOwnerId
CFactory.assembly mSetLesserAssembly_ItemId
CFactory.assembly* mGetLesserAssembly_ItemId
CFactory.greaterassembly mSetLesserAssembly_SupplierIds
CFactory.greaterassembly* mGetLesserAssembly_SupplierIds
CFactory.lesserassemblyType mSetLesserAssembly_DocRefIds
CFactory.lesserassemblyType* mGetLesserAssembly_DocRefIds
CFactory.product mSetLesserAssembly_ImageRefIds
CFactory.product* mGetLesserAssembly_ImageRefIds
CRegister.businessChannelOwner mSetLesserAssembly_VideoRefIds
CRegister.businessChannelOwner* mGetLesserAssembly_VideoRefIds
CAdministration.item mSetLesserAssemblyType_LesserAssemblyTypeId
CAdministration.item* mGetLesserAssemblyType_LesserAssemblyTypeId
ArrayOf<CSupplier.supplier> mSetLesserAssemblyType_LesseAssemblyDescription
ArrayOf<CSupplier.supplier>* mGetLesserAssemblyType_LesseAssemblyDescription
ArrayOf<CAdministration.documents> mSetLesserAssemblyType_LesserAssemblyCode
ArrayOf<CAdministration.documents>* mGetLesserAssemblyType_LesserAssemblyCode
ArrayOf<CAdministration.images> mSetLesserAssemblyType_Corrosiveness
ArrayOf<CAdministration.images>* mGetLesserAssemblyType_Corrosiveness
ArrayOf<CAdministration.video> mSetLesserAssemblyType_Toxicity
ArrayOf<CAdministration.video>* mGetLesserAssemblyType_Toxicity
const String& mSetLesserAssemblyType_Fragility
String* mGetLesserAssemblyType_Fragility
const String& mSetLesserAssemblyType_PhysicalStateWhenIdle
String* mGetLesserAssemblyType_PhysicalStateWhenIdle
const String& mSetLesserAssemblyType_RemainingNum
String* mGetLesserAssemblyType_RemainingNum
CHelper.corrosiveness mSetLesserAssemblyType_LesserAssemblyReorderCode
CHelper.corrosiveness* mGetLesserAssemblyType_LesserAssemblyReorderCode
CHelper.toxicity mSetLesserAssemblyType_MaterialTypeIds
CHelper.toxicity* mGetLesserAssemblyType_MaterialTypeIds
CHelper.fragility mSetLesserAssemblyType_PartTypeId
CHelper.fragility* mGetLesserAssemblyType_PartTypeId
CHelper.physicalStateWhenIdle mSetLesserAssemblyType_MinorSubAssemblyTypeIds
CHelper.physicalStateWhenIdle* mGetLesserAssemblyType_MinorSubAssemblyTypeIds
Int32 mSetLesserAssemblyType_SubAssemblyTypeIds
Int32* mGetLesserAssemblyType_SubAssemblyTypeIds
Int32 mSetLesserAssemblyType_MajorSubAssemblyTypeIds
Int32* mGetLesserAssemblyType_MajorSubAssemblyTypeIds
const String& mSetLesserAssemblyType_LesserAssemblyTypeIds
String* mGetLesserAssemblyType_LesserAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetLesserAssemblyType_GreaterAssemblyTypeIds
ArrayOf<CFactory.materialType>* mGetLesserAssemblyType_GreaterAssemblyTypeIds
ArrayOf<CFactory.partType> mSetLesserAssemblyType_ProductTypeIds
ArrayOf<CFactory.partType>* mGetLesserAssemblyType_ProductTypeIds
ArrayOf<CFactory.minorsubassemblyType> mSetLesserAssemblyType_BusinessChannelOwnerId
ArrayOf<CFactory.minorsubassemblyType>* mGetLesserAssemblyType_BusinessChannelOwnerId
ArrayOf<CFactory.subassemblyType> mSetLesserAssemblyType_ItemTypeId
ArrayOf<CFactory.subassemblyType>* mGetLesserAssemblyType_ItemTypeId
ArrayOf<CFactory.majorsubassemblyType> mSetLesserAssemblyType_SupplierIds
ArrayOf<CFactory.majorsubassemblyType>* mGetLesserAssemblyType_SupplierIds
ArrayOf<CFactory.lesserassemblyType> mSetLesserAssemblyType_DocRefIds
ArrayOf<CFactory.lesserassemblyType>* mGetLesserAssemblyType_DocRefIds
ArrayOf<CFactory.greaterassemblyType> mSetLesserAssemblyType_ImageRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetLesserAssemblyType_ImageRefIds
ArrayOf<CFactory.productType> mSetLesserAssemblyType_VideoRefIds
ArrayOf<CFactory.productType>* mGetLesserAssemblyType_VideoRefIds
CRegister.businessChannelOwner mSetAssembly_AssyId
CRegister.businessChannelOwner* mGetAssembly_AssyId
CAdministration.itemType mSetAssembly_Hazardous
CAdministration.itemType* mGetAssembly_Hazardous
ArrayOf<CSupplier.supplier> mSetAssembly_AssemblyName
ArrayOf<CSupplier.supplier>* mGetAssembly_AssemblyName
ArrayOf<CAdministration.documents> mSetAssembly_AssemblyDescription
ArrayOf<CAdministration.documents>* mGetAssembly_AssemblyDescription
ArrayOf<CAdministration.images> mSetAssembly_QCCheckedPassed
ArrayOf<CAdministration.images>* mGetAssembly_QCCheckedPassed
ArrayOf<CAdministration.video> mSetAssembly_MaterialIds
ArrayOf<CAdministration.video>* mGetAssembly_MaterialIds
const String& mSetAssembly_PartIds
String* mGetAssembly_PartIds
Boolean mSetAssembly_MinorSubAssemblyIds
Boolean* mGetAssembly_MinorSubAssemblyIds
const String& mSetAssembly_SubAssemblyIds
String* mGetAssembly_SubAssemblyIds
const String& mSetAssembly_MajorSubAssemblyIds
String* mGetAssembly_MajorSubAssemblyIds
Boolean mSetAssembly_LesserAssemblyIds
Boolean* mGetAssembly_LesserAssemblyIds
ArrayOf<CFactory.material> mSetAssembly_AssemblyTypeId
ArrayOf<CFactory.material>* mGetAssembly_AssemblyTypeId
ArrayOf<CFactory.part> mSetAssembly_GreaterAssemblyId
ArrayOf<CFactory.part>* mGetAssembly_GreaterAssemblyId
ArrayOf<CFactory.minorsubassembly> mSetAssembly_ProductId
ArrayOf<CFactory.minorsubassembly>* mGetAssembly_ProductId
ArrayOf<CFactory.subassembly> mSetAssembly_BusinessChannelOwnerId
ArrayOf<CFactory.subassembly>* mGetAssembly_BusinessChannelOwnerId
ArrayOf<CFactory.majorsubassembly> mSetAssembly_ItemId
ArrayOf<CFactory.majorsubassembly>* mGetAssembly_ItemId
ArrayOf<CFactory.lesserassembly> mSetAssembly_SupplierIds
ArrayOf<CFactory.lesserassembly>* mGetAssembly_SupplierIds
CFactory.assemblyType mSetAssembly_DocRefIds
CFactory.assemblyType* mGetAssembly_DocRefIds
CFactory.greaterassembly mSetAssembly_ImageRefIds
CFactory.greaterassembly* mGetAssembly_ImageRefIds
CFactory.product mSetAssembly_VideoRefIds
CFactory.product* mGetAssembly_VideoRefIds
CRegister.businessChannelOwner mSetAssemblyType_AssemblyTypeId
CRegister.businessChannelOwner* mGetAssemblyType_AssemblyTypeId
CAdministration.item mSetAssemblyType_AssemblyDescription
CAdministration.item* mGetAssemblyType_AssemblyDescription
ArrayOf<CSupplier.supplier> mSetAssemblyType_AssemblyCode
ArrayOf<CSupplier.supplier>* mGetAssemblyType_AssemblyCode
ArrayOf<CAdministration.documents> mSetAssemblyType_Corrosiveness
ArrayOf<CAdministration.documents>* mGetAssemblyType_Corrosiveness
ArrayOf<CAdministration.images> mSetAssemblyType_Toxicity
ArrayOf<CAdministration.images>* mGetAssemblyType_Toxicity
ArrayOf<CAdministration.video> mSetAssemblyType_Fragility
ArrayOf<CAdministration.video>* mGetAssemblyType_Fragility
const String& mSetAssemblyType_PhysicalStateWhenIdle
String* mGetAssemblyType_PhysicalStateWhenIdle
const String& mSetAssemblyType_RemainingNum
String* mGetAssemblyType_RemainingNum
const String& mSetAssemblyType_AssemblyReorderCode
String* mGetAssemblyType_AssemblyReorderCode
CHelper.corrosiveness mSetAssemblyType_MaterialTypeIds
CHelper.corrosiveness* mGetAssemblyType_MaterialTypeIds
CHelper.toxicity mSetAssemblyType_PartTypeId
CHelper.toxicity* mGetAssemblyType_PartTypeId
CHelper.fragility mSetAssemblyType_MinorSubAssemblyTypeIds
CHelper.fragility* mGetAssemblyType_MinorSubAssemblyTypeIds
CHelper.physicalStateWhenIdle mSetAssemblyType_SubAssemblyTypeIds
CHelper.physicalStateWhenIdle* mGetAssemblyType_SubAssemblyTypeIds
Int32 mSetAssemblyType_MajorSubAssemblyTypeIds
Int32* mGetAssemblyType_MajorSubAssemblyTypeIds
Int32 mSetAssemblyType_LesserAssemblyTypeIds
Int32* mGetAssemblyType_LesserAssemblyTypeIds
const String& mSetAssemblyType_GreaterAssemblyTypeIds
String* mGetAssemblyType_GreaterAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetAssemblyType_ProductTypeIds
ArrayOf<CFactory.materialType>* mGetAssemblyType_ProductTypeIds
ArrayOf<CFactory.partType> mSetAssemblyType_BusinessChannelOwnerId
ArrayOf<CFactory.partType>* mGetAssemblyType_BusinessChannelOwnerId
ArrayOf<CFactory.minorsubassemblyType> mSetAssemblyType_ItemTypeId
ArrayOf<CFactory.minorsubassemblyType>* mGetAssemblyType_ItemTypeId
ArrayOf<CFactory.subassemblyType> mSetAssemblyType_SupplierIds
ArrayOf<CFactory.subassemblyType>* mGetAssemblyType_SupplierIds
ArrayOf<CFactory.majorsubassemblyType> mSetAssemblyType_DocRefIds
ArrayOf<CFactory.majorsubassemblyType>* mGetAssemblyType_DocRefIds
ArrayOf<CFactory.lesserassemblyType> mSetAssemblyType_ImageRefIds
ArrayOf<CFactory.lesserassemblyType>* mGetAssemblyType_ImageRefIds
ArrayOf<CFactory.greaterassemblyType> mSetAssemblyType_VideoRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetAssemblyType_VideoRefIds
ArrayOf<CFactory.productType> mSetGreaterAssembly_GreaterAssyId
ArrayOf<CFactory.productType>* mGetGreaterAssembly_GreaterAssyId
CRegister.businessChannelOwner mSetGreaterAssembly_Hazardous
CRegister.businessChannelOwner* mGetGreaterAssembly_Hazardous
CAdministration.itemType mSetGreaterAssembly_GreaterAssemblyName
CAdministration.itemType* mGetGreaterAssembly_GreaterAssemblyName
ArrayOf<CSupplier.supplier> mSetGreaterAssembly_GreaterAssemblyDescription
ArrayOf<CSupplier.supplier>* mGetGreaterAssembly_GreaterAssemblyDescription
ArrayOf<CAdministration.documents> mSetGreaterAssembly_PhysicalStateWhenIdle
ArrayOf<CAdministration.documents>* mGetGreaterAssembly_PhysicalStateWhenIdle
ArrayOf<CAdministration.images> mSetGreaterAssembly_QCCheckedPassed
ArrayOf<CAdministration.images>* mGetGreaterAssembly_QCCheckedPassed
ArrayOf<CAdministration.video> mSetGreaterAssembly_GreaterAssemblyCode
ArrayOf<CAdministration.video>* mGetGreaterAssembly_GreaterAssemblyCode
const String& mSetGreaterAssembly_GreaterAssemblyReorderCode
String* mGetGreaterAssembly_GreaterAssemblyReorderCode
Boolean mSetGreaterAssembly_MaterialIds
Boolean* mGetGreaterAssembly_MaterialIds
const String& mSetGreaterAssembly_PartIds
String* mGetGreaterAssembly_PartIds
const String& mSetGreaterAssembly_MinorSubAssemblyIds
String* mGetGreaterAssembly_MinorSubAssemblyIds
CHelper.physicalStateWhenIdle mSetGreaterAssembly_SubAssemblyIds
CHelper.physicalStateWhenIdle* mGetGreaterAssembly_SubAssemblyIds
Boolean mSetGreaterAssembly_MajorSubAssemblyIds
Boolean* mGetGreaterAssembly_MajorSubAssemblyIds
const String& mSetGreaterAssembly_LesserAssemblyIds
String* mGetGreaterAssembly_LesserAssemblyIds
const String& mSetGreaterAssembly_AssemblyIds
String* mGetGreaterAssembly_AssemblyIds
Int32 mSetGreaterAssembly_GreaterAssemblyTypeId
Int32* mGetGreaterAssembly_GreaterAssemblyTypeId
ArrayOf<CFactory.material> mSetGreaterAssembly_ProductId
ArrayOf<CFactory.material>* mGetGreaterAssembly_ProductId
ArrayOf<CFactory.part> mSetGreaterAssembly_BusinessChannelOwnerId
ArrayOf<CFactory.part>* mGetGreaterAssembly_BusinessChannelOwnerId
ArrayOf<CFactory.minorsubassembly> mSetGreaterAssembly_ItemId
ArrayOf<CFactory.minorsubassembly>* mGetGreaterAssembly_ItemId
ArrayOf<CFactory.subassembly> mSetGreaterAssembly_SupplierIds
ArrayOf<CFactory.subassembly>* mGetGreaterAssembly_SupplierIds
ArrayOf<CFactory.majorsubassembly> mSetGreaterAssembly_DocRefIds
ArrayOf<CFactory.majorsubassembly>* mGetGreaterAssembly_DocRefIds
ArrayOf<CFactory.lesserassembly> mSetGreaterAssembly_ImageRefIds
ArrayOf<CFactory.lesserassembly>* mGetGreaterAssembly_ImageRefIds
ArrayOf<CFactory.assembly> mSetGreaterAssembly_VideoRefIds
ArrayOf<CFactory.assembly>* mGetGreaterAssembly_VideoRefIds
CFactory.greaterassemblyType mSetGreaterAssemblyType_GreaterAssemblyTypeId
CFactory.greaterassemblyType* mGetGreaterAssemblyType_GreaterAssemblyTypeId
CFactory.product mSetGreaterAssemblyType_GreaterAssemblyDescription
CFactory.product* mGetGreaterAssemblyType_GreaterAssemblyDescription
CRegister.businessChannelOwner mSetGreaterAssemblyType_GreaterAssemblyCode
CRegister.businessChannelOwner* mGetGreaterAssemblyType_GreaterAssemblyCode
CAdministration.item mSetGreaterAssemblyType_Corrosiveness
CAdministration.item* mGetGreaterAssemblyType_Corrosiveness
ArrayOf<CSupplier.supplier> mSetGreaterAssemblyType_Toxicity
ArrayOf<CSupplier.supplier>* mGetGreaterAssemblyType_Toxicity
ArrayOf<CAdministration.documents> mSetGreaterAssemblyType_Fragility
ArrayOf<CAdministration.documents>* mGetGreaterAssemblyType_Fragility
ArrayOf<CAdministration.images> mSetGreaterAssemblyType_PhysicalStateWhenIdle
ArrayOf<CAdministration.images>* mGetGreaterAssemblyType_PhysicalStateWhenIdle
ArrayOf<CAdministration.video> mSetGreaterAssemblyType_RemainingNum
ArrayOf<CAdministration.video>* mGetGreaterAssemblyType_RemainingNum
const String& mSetGreaterAssemblyType_GreaterAssemblyReorderCode
String* mGetGreaterAssemblyType_GreaterAssemblyReorderCode
const String& mSetGreaterAssemblyType_MaterialTypeIds
String* mGetGreaterAssemblyType_MaterialTypeIds
const String& mSetGreaterAssemblyType_PartTypeId
String* mGetGreaterAssemblyType_PartTypeId
CHelper.corrosiveness mSetGreaterAssemblyType_MinorSubAssemblyTypeIds
CHelper.corrosiveness* mGetGreaterAssemblyType_MinorSubAssemblyTypeIds
CHelper.toxicity mSetGreaterAssemblyType_SubAssemblyTypeIds
CHelper.toxicity* mGetGreaterAssemblyType_SubAssemblyTypeIds
CHelper.fragility mSetGreaterAssemblyType_MajorSubAssemblyTypeIds
CHelper.fragility* mGetGreaterAssemblyType_MajorSubAssemblyTypeIds
CHelper.physicalStateWhenIdle mSetGreaterAssemblyType_LesserAssemblyTypeIds
CHelper.physicalStateWhenIdle* mGetGreaterAssemblyType_LesserAssemblyTypeIds
Int32 mSetGreaterAssemblyType_AssemblyTypeIds
Int32* mGetGreaterAssemblyType_AssemblyTypeIds
Int32 mSetGreaterAssemblyType_ProductTypeIds
Int32* mGetGreaterAssemblyType_ProductTypeIds
const String& mSetGreaterAssemblyType_BusinessChannelOwnerId
String* mGetGreaterAssemblyType_BusinessChannelOwnerId
ArrayOf<CFactory.materialType> mSetGreaterAssemblyType_ItemTypeId
ArrayOf<CFactory.materialType>* mGetGreaterAssemblyType_ItemTypeId
ArrayOf<CFactory.partType> mSetGreaterAssemblyType_SupplierIds
ArrayOf<CFactory.partType>* mGetGreaterAssemblyType_SupplierIds
ArrayOf<CFactory.minorsubassemblyType> mSetGreaterAssemblyType_DocRefIds
ArrayOf<CFactory.minorsubassemblyType>* mGetGreaterAssemblyType_DocRefIds
ArrayOf<CFactory.subassemblyType> mSetGreaterAssemblyType_ImageRefIds
ArrayOf<CFactory.subassemblyType>* mGetGreaterAssemblyType_ImageRefIds
ArrayOf<CFactory.majorsubassemblyType> mSetGreaterAssemblyType_VideoRefIds
ArrayOf<CFactory.majorsubassemblyType>* mGetGreaterAssemblyType_VideoRefIds
ArrayOf<CFactory.lesserassemblyType> mSetProduct_ProductId
ArrayOf<CFactory.lesserassemblyType>* mGetProduct_ProductId
ArrayOf<CFactory.assemblyType> mSetProduct_Hazardous
ArrayOf<CFactory.assemblyType>* mGetProduct_Hazardous
ArrayOf<CFactory.productType> mSetProduct_MasLedgeFinTxIds
ArrayOf<CFactory.productType>* mGetProduct_MasLedgeFinTxIds
CRegister.businessChannelOwner mSetProduct_MasLedgeFinTxNums
CRegister.businessChannelOwner* mGetProduct_MasLedgeFinTxNums
CAdministration.itemType mSetProduct_GenLedgeFinTxIds
CAdministration.itemType* mGetProduct_GenLedgeFinTxIds
ArrayOf<CSupplier.supplier> mSetProduct_GenLedgeFinTxNums
ArrayOf<CSupplier.supplier>* mGetProduct_GenLedgeFinTxNums
ArrayOf<CAdministration.documents> mSetProduct_ProductName
ArrayOf<CAdministration.documents>* mGetProduct_ProductName
ArrayOf<CAdministration.images> mSetProduct_ModelNumber
ArrayOf<CAdministration.images>* mGetProduct_ModelNumber
ArrayOf<CAdministration.video> mSetProduct_SerialNumber
ArrayOf<CAdministration.video>* mGetProduct_SerialNumber
const String& mSetProduct_QCCheckedPassed
String* mGetProduct_QCCheckedPassed
Boolean mSetProduct_BestBeforeDate
Boolean* mGetProduct_BestBeforeDate
ArrayOf<const String&> mSetProduct_BusinessChannelOwnerId
ArrayOf<String>* mGetProduct_BusinessChannelOwnerId
ArrayOf<Int32> mSetProduct_ProductTypeId
ArrayOf<Int32>* mGetProduct_ProductTypeId
ArrayOf<const String&> mSetProduct_ItemId
ArrayOf<String>* mGetProduct_ItemId
ArrayOf<Int32> mSetProduct_CustomerId
ArrayOf<Int32>* mGetProduct_CustomerId
const String& mSetProduct_DocRefIds
String* mGetProduct_DocRefIds
const String& mSetProduct_ImageRefIds
String* mGetProduct_ImageRefIds
const String& mSetProduct_VideoRefIds
String* mGetProduct_VideoRefIds
Boolean mSetProductType_ProductTypeId
Boolean* mGetProductType_ProductTypeId
const String& mSetProductType_ProductDescription
String* mGetProductType_ProductDescription
CRegister.businessChannelOwner mSetProductType_Corrosiveness
CRegister.businessChannelOwner* mGetProductType_Corrosiveness
CFactory.productType mSetProductType_Toxicity
CFactory.productType* mGetProductType_Toxicity
CAdministration.item mSetProductType_Fragility
CAdministration.item* mGetProductType_Fragility
CCustomer.customer mSetProductType_PhysicalStateWhenIdle
CCustomer.customer* mGetProductType_PhysicalStateWhenIdle
ArrayOf<CAdministration.documents> mSetProductType_RemainingNum
ArrayOf<CAdministration.documents>* mGetProductType_RemainingNum
ArrayOf<CAdministration.images> mSetProductType_LesserAssemblyReorderCode
ArrayOf<CAdministration.images>* mGetProductType_LesserAssemblyReorderCode
ArrayOf<CAdministration.video> mSetProductType_BusinessChannelOwnerId
ArrayOf<CAdministration.video>* mGetProductType_BusinessChannelOwnerId
const String& mSetProductType_ItemTypeId
String* mGetProductType_ItemTypeId
const String& mSetProductType_DocRefIds
String* mGetProductType_DocRefIds
CHelper.corrosiveness mSetProductType_ImageRefIds
CHelper.corrosiveness* mGetProductType_ImageRefIds
CHelper.toxicity mSetProductType_VideoRefIds
CHelper.toxicity* mGetProductType_VideoRefIds
CHelper.fragility mSetShipment_ShipmentId
CHelper.fragility* mGetShipment_ShipmentId
CHelper.physicalStateWhenIdle mSetShipment_DistributorId
CHelper.physicalStateWhenIdle* mGetShipment_DistributorId
Int32 mSetShipment_SalesOrderIds
Int32* mGetShipment_SalesOrderIds
Int32 mSetShipment_PurchaseOrderIds
Int32* mGetShipment_PurchaseOrderIds
const String& mSetShipment_ReceiverDeliveryAddress
String* mGetShipment_ReceiverDeliveryAddress
CRegister.businessChannelOwner mSetShipment_SenderSourceAddress
CRegister.businessChannelOwner* mGetShipment_SenderSourceAddress
CAdministration.itemType mSetShipment_ReceivedAtSourceTerminal
CAdministration.itemType* mGetShipment_ReceivedAtSourceTerminal
ArrayOf<CAdministration.documents> mSetShipment_TrackingNumber
ArrayOf<CAdministration.documents>* mGetShipment_TrackingNumber
ArrayOf<CAdministration.images> mSetShipment_TrackingURL
ArrayOf<CAdministration.images>* mGetShipment_TrackingURL
ArrayOf<CAdministration.video> mSetShipment_ETA
ArrayOf<CAdministration.video>* mGetShipment_ETA
const String& mSetShipment_JourneyPoints
String* mGetShipment_JourneyPoints
const String& mSetShipment_JourneyPointNames
String* mGetShipment_JourneyPointNames
ArrayOf<const String&> mSetShipment_DeliveredGPSLat
ArrayOf<String>* mGetShipment_DeliveredGPSLat
ArrayOf<const String&> mSetShipment_DeliveredGPSLong
ArrayOf<String>* mGetShipment_DeliveredGPSLong
ArrayOf<const String&> mSetShipment_DeliveryAddress
ArrayOf<String>* mGetShipment_DeliveryAddress
ArrayOf<const String&> mSetShipment_AddressesMatch
ArrayOf<String>* mGetShipment_AddressesMatch
const String& mSetShipment_BusinessChannelOwnerId
String* mGetShipment_BusinessChannelOwnerId
const String& mSetShipment_SupplierId
String* mGetShipment_SupplierId
const String& mSetShipment_SupplierTypeId
String* mGetShipment_SupplierTypeId
const String& mSetShipment_DocRefIds
String* mGetShipment_DocRefIds
ArrayOf<const String&> mSetShipment_DeliveryImageIds
ArrayOf<String>* mGetShipment_DeliveryImageIds
ArrayOf<const String&> mSetShipment_ItemIds
ArrayOf<String>* mGetShipment_ItemIds
Double mSetShipment_ItemTypeIds
Double* mGetShipment_ItemTypeIds
Double mSetShipment_CustomerId
Double* mGetShipment_CustomerId
const String& mSetShipment_NextDistributorId
String* mGetShipment_NextDistributorId
Boolean mSetShipment_ContinuationShipmentId
Boolean* mGetShipment_ContinuationShipmentId
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

