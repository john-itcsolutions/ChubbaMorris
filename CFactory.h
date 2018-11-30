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
  

   CARAPI SetMaterial.MaterialId(
     /* [in] */ const String& CFactory.material.materialId);

    CARAPI GetMaterial.MaterialId(
     /* [out] */ String* CFactory.material.materialId);


   CARAPI SetMaterial.Hazardous(
     /* [in] */ Boolean CFactory.material.hazardous);

    CARAPI GetMaterial.Hazardous(
     /* [out] */ Boolean* CFactory.material.hazardous);


   CARAPI SetMaterial.MaterialName(
     /* [in] */ const String& CFactory.material.materialName);

    CARAPI GetMaterial.MaterialName(
     /* [out] */ String* CFactory.material.materialName);


   CARAPI SetMaterial.MaterialDescription(
     /* [in] */ const String& CFactory.material.materialDescription);

    CARAPI GetMaterial.MaterialDescription(
     /* [out] */ String* CFactory.material.materialDescription);


   CARAPI SetMaterial.QCCheckedPassed(
     /* [in] */ Boolean CFactory.material.qCCheckedPassed);

    CARAPI GetMaterial.QCCheckedPassed(
     /* [out] */ Boolean* CFactory.material.qCCheckedPassed);


   CARAPI SetMaterial.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.material.businessChannelOwnerId);

    CARAPI GetMaterial.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.material.businessChannelOwnerId);


   CARAPI SetMaterial.ItemId(
     /* [in] */ CAdministration.item CFactory.material.itemId);

    CARAPI GetMaterial.ItemId(
     /* [out] */ CAdministration.item* CFactory.material.itemId);


   CARAPI SetMaterial.SupplierId(
     /* [in] */ CSupplier.supplier CFactory.material.supplierId);

    CARAPI GetMaterial.SupplierId(
     /* [out] */ CSupplier.supplier* CFactory.material.supplierId);


   CARAPI SetMaterial.MaterialTypeId(
     /* [in] */ CFactory.materialType CFactory.material.materialTypeId);

    CARAPI GetMaterial.MaterialTypeId(
     /* [out] */ CFactory.materialType* CFactory.material.materialTypeId);


   CARAPI SetMaterial.PartId(
     /* [in] */ CFactory.part CFactory.material.PartId);

    CARAPI GetMaterial.PartId(
     /* [out] */ CFactory.part* CFactory.material.PartId);


   CARAPI SetMaterial.MinorSubAssemblyId(
     /* [in] */ CFactory.minorsubassembly CFactory.material.minorsubassemblyId);

    CARAPI GetMaterial.MinorSubAssemblyId(
     /* [out] */ CFactory.minorsubassembly* CFactory.material.minorsubassemblyId);


   CARAPI SetMaterial.SubAssemblyId(
     /* [in] */ CFactory.subassembly CFactory.material.subassemblyId);

    CARAPI GetMaterial.SubAssemblyId(
     /* [out] */ CFactory.subassembly* CFactory.material.subassemblyId);


   CARAPI SetMaterial.MajorSubAssemblyId(
     /* [in] */ CFactory.majorsubassembly CFactory.material.majorsubassemblyId);

    CARAPI GetMaterial.MajorSubAssemblyId(
     /* [out] */ CFactory.majorsubassembly* CFactory.material.majorsubassemblyId);


   CARAPI SetMaterial.LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CFactory.material.lesserassemblyId);

    CARAPI GetMaterial.LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CFactory.material.lesserassemblyId);


   CARAPI SetMaterial.AssemblyId(
     /* [in] */ CFactory.assembly CFactory.material.assemblyId);

    CARAPI GetMaterial.AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.material.assemblyId);


   CARAPI SetMaterial.GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.material.greaterassemblyId);

    CARAPI GetMaterial.GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.material.greaterassemblyId);


   CARAPI SetMaterial.ProductId(
     /* [in] */ CFactory.product CFactory.material.productId);

    CARAPI GetMaterial.ProductId(
     /* [out] */ CFactory.product* CFactory.material.productId);


   CARAPI SetMaterial.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.material.docRefIds);

    CARAPI GetMaterial.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.material.docRefIds);


   CARAPI SetMaterial.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.material.imageRefIds);

    CARAPI GetMaterial.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.material.imageRefIds);


   CARAPI SetMaterial.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.material.videoRefIds);

    CARAPI GetMaterial.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.material.videoRefIds);


   CARAPI SetMaterialType.MaterialTypeId(
     /* [in] */ const String& CFactory.materialType.materialTypeId);

    CARAPI GetMaterialType.MaterialTypeId(
     /* [out] */ String* CFactory.materialType.materialTypeId);


   CARAPI SetMaterialType.MaterialDescription(
     /* [in] */ const String& CFactory.materialType.materialDescription);

    CARAPI GetMaterialType.MaterialDescription(
     /* [out] */ String* CFactory.materialType.materialDescription);


   CARAPI SetMaterialType.MaterialSafetyDataRefs(
     /* [in] */ ArrayOf<const String&> CFactory.materialType.materialSafetyDataRefs);

    CARAPI GetMaterialType.MaterialSafetyDataRefs(
     /* [out, callee] */ ArrayOf<String>* CFactory.materialType.materialSafetyDataRefs);


   CARAPI SetMaterialType.MaterialCode(
     /* [in] */ const String& CFactory.materialType.materialCode);

    CARAPI GetMaterialType.MaterialCode(
     /* [out] */ String* CFactory.materialType.materialCode);


   CARAPI SetMaterialType.UnitsOfMeasurement(
     /* [in] */ const String& CFactory.materialType.UnitsOfMeasurement);

    CARAPI GetMaterialType.UnitsOfMeasurement(
     /* [out] */ String* CFactory.materialType.UnitsOfMeasurement);


   CARAPI SetMaterialType.RemainingAmount(
     /* [in] */ Double CFactory.materialType.remainingAmount);

    CARAPI GetMaterialType.RemainingAmount(
     /* [out] */ Double* CFactory.materialType.remainingAmount);


   CARAPI SetMaterialType.Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.materialType.corrosiveness);

    CARAPI GetMaterialType.Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.materialType.corrosiveness);


   CARAPI SetMaterialType.Toxicity(
     /* [in] */ CHelper.toxicity CFactory.materialType.toxicity);

    CARAPI GetMaterialType.Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.materialType.toxicity);


   CARAPI SetMaterialType.Fragility(
     /* [in] */ CHelper.fragility CFactory.materialType.fragility);

    CARAPI GetMaterialType.Fragility(
     /* [out] */ CHelper.fragility* CFactory.materialType.fragility);


   CARAPI SetMaterialType.PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.materialType.PhysicalStateWhenIdle);

    CARAPI GetMaterialType.PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.materialType.PhysicalStateWhenIdle);


   CARAPI SetMaterialType.RemainingNum(
     /* [in] */ Double CFactory.materialType.remainingNum);

    CARAPI GetMaterialType.RemainingNum(
     /* [out] */ Double* CFactory.materialType.remainingNum);


   CARAPI SetMaterialType.RawMaterialStockReorderCARAPI SetPoint(
     /* [in] */ Double CFactory.materialType.materialReorderCARAPI SetPoint);

    CARAPI GetMaterialType.RawMaterialStockReorderCARAPI SetPoint(
     /* [out] */ Double* CFactory.materialType.materialReorderCARAPI SetPoint);


   CARAPI SetMaterialType.RawMaterialStockReorderCode(
     /* [in] */ const String& CFactory.materialType.materialReorderCode);

    CARAPI GetMaterialType.RawMaterialStockReorderCode(
     /* [out] */ String* CFactory.materialType.materialReorderCode);


   CARAPI SetMaterialType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.materialType.businessChannelOwnerId);

    CARAPI GetMaterialType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.materialType.businessChannelOwnerId);


   CARAPI SetMaterialType.ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.materialType.itemTypeId);

    CARAPI GetMaterialType.ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.materialType.itemTypeId);


   CARAPI SetMaterialType.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.materialType.supplierIds);

    CARAPI GetMaterialType.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.materialType.supplierIds);


   CARAPI SetMaterialType.PartTypeIds(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.materialType.partTypeIds);

    CARAPI GetMaterialType.PartTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.materialType.partTypeIds);


   CARAPI SetMaterialType.MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.materialType.minorsubassemblyTypeIds);

    CARAPI GetMaterialType.MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.materialType.minorsubassemblyTypeIds);


   CARAPI SetMaterialType.SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.materialType.subassemblyTypeIds);

    CARAPI GetMaterialType.SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.materialType.subassemblyTypeIds);


   CARAPI SetMaterialType.MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.materialType.majorsubassemblyTypeIds);

    CARAPI GetMaterialType.MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.materialType.majorsubassemblyTypeIds);


   CARAPI SetMaterialType.LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.materialType.lesserassemblyTypeIds);

    CARAPI GetMaterialType.LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.materialType.lesserassemblyTypeIds);


   CARAPI SetMaterialType.AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.materialType.assemblyTypeIds);

    CARAPI GetMaterialType.AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.materialType.assemblyTypeIds);


   CARAPI SetMaterialType.GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.materialType.greaterassemblyTypeIds);

    CARAPI GetMaterialType.GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.materialType.greaterassemblyTypeIds);


   CARAPI SetMaterialType.ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.materialType.productTypeIds);

    CARAPI GetMaterialType.ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.materialType.productTypeIds);


   CARAPI SetMaterialType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.materialType.docRefIds);

    CARAPI GetMaterialType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.materialType.docRefIds);


   CARAPI SetMaterialType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.materialType.imageRefIds);

    CARAPI GetMaterialType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.materialType.imageRefIds);


   CARAPI SetMaterialType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.materialType.videoRefIds);

    CARAPI GetMaterialType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.materialType.videoRefIds);


   CARAPI SetPart.PartId(
     /* [in] */ const String& CFactory.part.partId);

    CARAPI GetPart.PartId(
     /* [out] */ String* CFactory.part.partId);


   CARAPI SetPart.Hazardous(
     /* [in] */ Boolean CFactory.part.hazardous);

    CARAPI GetPart.Hazardous(
     /* [out] */ Boolean* CFactory.part.hazardous);


   CARAPI SetPart.PartName(
     /* [in] */ const String& CFactory.part.partName);

    CARAPI GetPart.PartName(
     /* [out] */ String* CFactory.part.partName);


   CARAPI SetPart.PartDescription(
     /* [in] */ const String& CFactory.part.partDescription);

    CARAPI GetPart.PartDescription(
     /* [out] */ String* CFactory.part.partDescription);


   CARAPI SetPart.QCCheckedPassed(
     /* [in] */ Boolean CFactory.part.qCCheckedPassed);

    CARAPI GetPart.QCCheckedPassed(
     /* [out] */ Boolean* CFactory.part.qCCheckedPassed);


   CARAPI SetPart.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.part.businessChannelOwnerId);

    CARAPI GetPart.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.part.businessChannelOwnerId);


   CARAPI SetPart.MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.part.materialIds);

    CARAPI GetPart.MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.part.materialIds);


   CARAPI SetPart.PartTypeId(
     /* [in] */ CFactory.partType CFactory.part.partTypeId);

    CARAPI GetPart.PartTypeId(
     /* [out] */ CFactory.partType* CFactory.part.partTypeId);


   CARAPI SetPart.ItemId(
     /* [in] */ CAdministration.item CFactory.part.itemId);

    CARAPI GetPart.ItemId(
     /* [out] */ CAdministration.item* CFactory.part.itemId);


   CARAPI SetPart.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.part.supplierIds);

    CARAPI GetPart.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.part.supplierIds);


   CARAPI SetPart.MinorSubAssemblyId(
     /* [in] */ CFactory.minorsubassembly CFactory.part.minorsubassemblyId);

    CARAPI GetPart.MinorSubAssemblyId(
     /* [out] */ CFactory.minorsubassembly* CFactory.part.minorsubassemblyId);


   CARAPI SetPart.SubAssemblyId(
     /* [in] */ CFactory.subassembly CFactory.part.subassemblyId);

    CARAPI GetPart.SubAssemblyId(
     /* [out] */ CFactory.subassembly* CFactory.part.subassemblyId);


   CARAPI SetPart.MajorSubAssemblyId(
     /* [in] */ CFactory.majorsubassembly CFactory.part.majorsubassemblyId);

    CARAPI GetPart.MajorSubAssemblyId(
     /* [out] */ CFactory.majorsubassembly* CFactory.part.majorsubassemblyId);


   CARAPI SetPart.LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CFactory.part.lesserassemblyId);

    CARAPI GetPart.LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CFactory.part.lesserassemblyId);


   CARAPI SetPart.AssemblyId(
     /* [in] */ CFactory.assembly CFactory.part.assemblyId);

    CARAPI GetPart.AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.part.assemblyId);


   CARAPI SetPart.GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.part.greaterassemblyId);

    CARAPI GetPart.GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.part.greaterassemblyId);


   CARAPI SetPart.ProductId(
     /* [in] */ CFactory.product CFactory.part.productId);

    CARAPI GetPart.ProductId(
     /* [out] */ CFactory.product* CFactory.part.productId);


   CARAPI SetPart.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.part.docRefIds);

    CARAPI GetPart.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.part.docRefIds);


   CARAPI SetPart.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.part.imageRefIds);

    CARAPI GetPart.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.part.imageRefIds);


   CARAPI SetPart.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.part.videoRefIds);

    CARAPI GetPart.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.part.videoRefIds);


   CARAPI SetPartType.PartTypeId(
     /* [in] */ const String& CFactory.partType.partTypeId);

    CARAPI GetPartType.PartTypeId(
     /* [out] */ String* CFactory.partType.partTypeId);


   CARAPI SetPartType.PartDescription(
     /* [in] */ const String& CFactory.partType.partDescription);

    CARAPI GetPartType.PartDescription(
     /* [out] */ String* CFactory.partType.partDescription);


   CARAPI SetPartType.PartCode(
     /* [in] */ const String& CFactory.partType.partCode);

    CARAPI GetPartType.PartCode(
     /* [out] */ String* CFactory.partType.partCode);


   CARAPI SetPartType.Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.partType.corrosiveness);

    CARAPI GetPartType.Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.partType.corrosiveness);


   CARAPI SetPartType.Toxicity(
     /* [in] */ CHelper.toxicity CFactory.partType.toxicity);

    CARAPI GetPartType.Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.partType.toxicity);


   CARAPI SetPartType.Fragility(
     /* [in] */ CHelper.fragility CFactory.partType.fragility);

    CARAPI GetPartType.Fragility(
     /* [out] */ CHelper.fragility* CFactory.partType.fragility);


   CARAPI SetPartType.PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.partType.PhysicalStateWhenIdle);

    CARAPI GetPartType.PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.partType.PhysicalStateWhenIdle);


   CARAPI SetPartType.RemainingNum(
     /* [in] */ Int32 CFactory.partType.remainingNum);

    CARAPI GetPartType.RemainingNum(
     /* [out] */ Int32* CFactory.partType.remainingNum);


   CARAPI SetPartType.PartReorderCARAPI SetPoint(
     /* [in] */ Int32 CFactory.partType.partReorderCARAPI SetPoint);

    CARAPI GetPartType.PartReorderCARAPI SetPoint(
     /* [out] */ Int32* CFactory.partType.partReorderCARAPI SetPoint);


   CARAPI SetPartType.PartReorderCode(
     /* [in] */ const String& CFactory.partType.partReorderCode);

    CARAPI GetPartType.PartReorderCode(
     /* [out] */ String* CFactory.partType.partReorderCode);


   CARAPI SetPartType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.partType.businessChannelOwnerId);

    CARAPI GetPartType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.partType.businessChannelOwnerId);


   CARAPI SetPartType.ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.partType.itemTypeId);

    CARAPI GetPartType.ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.partType.itemTypeId);


   CARAPI SetPartType.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.partType.supplierIds);

    CARAPI GetPartType.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.partType.supplierIds);


   CARAPI SetPartType.MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.partType.materialTypeIds);

    CARAPI GetPartType.MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.partType.materialTypeIds);


   CARAPI SetPartType.MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.partType.minorsubassemblyTypeIds);

    CARAPI GetPartType.MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.partType.minorsubassemblyTypeIds);


   CARAPI SetPartType.SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.partType.subassemblyTypeIds);

    CARAPI GetPartType.SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.partType.subassemblyTypeIds);


   CARAPI SetPartType.MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.partType.majorsubassemblyTypeIds);

    CARAPI GetPartType.MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.partType.majorsubassemblyTypeIds);


   CARAPI SetPartType.LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.partType.lesserassemblyTypeIds);

    CARAPI GetPartType.LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.partType.lesserassemblyTypeIds);


   CARAPI SetPartType.AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.partType.assemblyTypeIds);

    CARAPI GetPartType.AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.partType.assemblyTypeIds);


   CARAPI SetPartType.GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.partType.greaterassemblyTypeIds);

    CARAPI GetPartType.GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.partType.greaterassemblyTypeIds);


   CARAPI SetPartType.ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.partType.productTypeIds);

    CARAPI GetPartType.ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.partType.productTypeIds);


   CARAPI SetPartType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.partType.docRefIds);

    CARAPI GetPartType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.partType.docRefIds);


   CARAPI SetPartType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.partType.imageRefIds);

    CARAPI GetPartType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.partType.imageRefIds);


   CARAPI SetPartType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.partType.videoRefIds);

    CARAPI GetPartType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.partType.videoRefIds);


   CARAPI SetMinorSubAssembly.MinorSubAssyId(
     /* [in] */ const String& CFactory.minorsubassembly.minorSubAssyId);

    CARAPI GetMinorSubAssembly.MinorSubAssyId(
     /* [out] */ String* CFactory.minorsubassembly.minorSubAssyId);


   CARAPI SetMinorSubAssembly.Hazardous(
     /* [in] */ Boolean CFactory.minorsubassembly.hazardous);

    CARAPI GetMinorSubAssembly.Hazardous(
     /* [out] */ Boolean* CFactory.minorsubassembly.hazardous);


   CARAPI SetMinorSubAssembly.MinorSubAssemblyName(
     /* [in] */ const String& CFactory.minorsubassembly.minorsubassemblyName);

    CARAPI GetMinorSubAssembly.MinorSubAssemblyName(
     /* [out] */ String* CFactory.minorsubassembly.minorsubassemblyName);


   CARAPI SetMinorSubAssembly.MinorSubAssemblyDescription(
     /* [in] */ const String& CFactory.minorsubassembly.minorsubassemblyDescription);

    CARAPI GetMinorSubAssembly.MinorSubAssemblyDescription(
     /* [out] */ String* CFactory.minorsubassembly.minorsubassemblyDescription);


   CARAPI SetMinorSubAssembly.QCCheckedPassed(
     /* [in] */ Boolean CFactory.minorsubassembly.qCCheckedPassed);

    CARAPI GetMinorSubAssembly.QCCheckedPassed(
     /* [out] */ Boolean* CFactory.minorsubassembly.qCCheckedPassed);


   CARAPI SetMinorSubAssembly.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.minorsubassembly.businessChannelOwnerId);

    CARAPI GetMinorSubAssembly.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.minorsubassembly.businessChannelOwnerId);


   CARAPI SetMinorSubAssembly.MinorSubAssemblyTypeId(
     /* [in] */ CFactory.minorsubassembly CFactory.minorsubassembly.minorsubassemblyTypeId);

    CARAPI GetMinorSubAssembly.MinorSubAssemblyTypeId(
     /* [out] */ CFactory.minorsubassembly* CFactory.minorsubassembly.minorsubassemblyTypeId);


   CARAPI SetMinorSubAssembly.ItemId(
     /* [in] */ CAdministration.item CFactory.minorsubassembly.itemId);

    CARAPI GetMinorSubAssembly.ItemId(
     /* [out] */ CAdministration.item* CFactory.minorsubassembly.itemId);


   CARAPI SetMinorSubAssembly.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.minorsubassembly.supplierIds);

    CARAPI GetMinorSubAssembly.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.minorsubassembly.supplierIds);


   CARAPI SetMinorSubAssembly.MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.minorsubassembly.materialIds);

    CARAPI GetMinorSubAssembly.MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.minorsubassembly.materialIds);


   CARAPI SetMinorSubAssembly.PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.minorsubassembly.partIds);

    CARAPI GetMinorSubAssembly.PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.minorsubassembly.partIds);


   CARAPI SetMinorSubAssembly.SubAssemblyId(
     /* [in] */ CFactory.subassembly CFactory.minorsubassembly.subassemblyId);

    CARAPI GetMinorSubAssembly.SubAssemblyId(
     /* [out] */ CFactory.subassembly* CFactory.minorsubassembly.subassemblyId);


   CARAPI SetMinorSubAssembly.MajorSubAssemblyId(
     /* [in] */ CFactory.majorsubassembly CFactory.minorsubassembly.majorsubassemblyId);

    CARAPI GetMinorSubAssembly.MajorSubAssemblyId(
     /* [out] */ CFactory.majorsubassembly* CFactory.minorsubassembly.majorsubassemblyId);


   CARAPI SetMinorSubAssembly.LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CFactory.minorsubassembly.lesserassemblyId);

    CARAPI GetMinorSubAssembly.LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CFactory.minorsubassembly.lesserassemblyId);


   CARAPI SetMinorSubAssembly.AssemblyId(
     /* [in] */ CFactory.assembly CFactory.minorsubassembly.assemblyId);

    CARAPI GetMinorSubAssembly.AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.minorsubassembly.assemblyId);


   CARAPI SetMinorSubAssembly.GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.minorsubassembly.greaterassemblyId);

    CARAPI GetMinorSubAssembly.GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.minorsubassembly.greaterassemblyId);


   CARAPI SetMinorSubAssembly.ProductId(
     /* [in] */ CFactory.product CFactory.minorsubassembly.productId);

    CARAPI GetMinorSubAssembly.ProductId(
     /* [out] */ CFactory.product* CFactory.minorsubassembly.productId);


   CARAPI SetMinorSubAssembly.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.minorsubassembly.docRefIds);

    CARAPI GetMinorSubAssembly.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.minorsubassembly.docRefIds);


   CARAPI SetMinorSubAssembly.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.minorsubassembly.imageRefIds);

    CARAPI GetMinorSubAssembly.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.minorsubassembly.imageRefIds);


   CARAPI SetMinorSubAssembly.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.minorsubassembly.videoRefIds);

    CARAPI GetMinorSubAssembly.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.minorsubassembly.videoRefIds);


   CARAPI SetMinorSubAssemblyType.MinorSubAssemblyTypeId(
     /* [in] */ const String& CFactory.minorsubassemblyType.minorsubassemblyTypeId);

    CARAPI GetMinorSubAssemblyType.MinorSubAssemblyTypeId(
     /* [out] */ String* CFactory.minorsubassemblyType.minorsubassemblyTypeId);


   CARAPI SetMinorSubAssemblyType.MinorSubAssemblyDescription(
     /* [in] */ const String& CFactory.minorsubassemblyType.minorsubassemblyDescription);

    CARAPI GetMinorSubAssemblyType.MinorSubAssemblyDescription(
     /* [out] */ String* CFactory.minorsubassemblyType.minorsubassemblyDescription);


   CARAPI SetMinorSubAssemblyType.MinorSubAssemblyCode(
     /* [in] */ const String& CFactory.minorsubassemblyType.minorsubassemblyCode);

    CARAPI GetMinorSubAssemblyType.MinorSubAssemblyCode(
     /* [out] */ String* CFactory.minorsubassemblyType.minorsubassemblyCode);


   CARAPI SetMinorSubAssemblyType.Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.minorsubassemblyType.corrosiveness);

    CARAPI GetMinorSubAssemblyType.Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.minorsubassemblyType.corrosiveness);


   CARAPI SetMinorSubAssemblyType.Toxicity(
     /* [in] */ CHelper.toxicity CFactory.minorsubassemblyType.toxicity);

    CARAPI GetMinorSubAssemblyType.Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.minorsubassemblyType.toxicity);


   CARAPI SetMinorSubAssemblyType.Fragility(
     /* [in] */ CHelper.fragility CFactory.minorsubassemblyType.fragility);

    CARAPI GetMinorSubAssemblyType.Fragility(
     /* [out] */ CHelper.fragility* CFactory.minorsubassemblyType.fragility);


   CARAPI SetMinorSubAssemblyType.PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.minorsubassemblyType.PhysicalStateWhenIdle);

    CARAPI GetMinorSubAssemblyType.PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.minorsubassemblyType.PhysicalStateWhenIdle);


   CARAPI SetMinorSubAssemblyType.RemainingNum(
     /* [in] */ Int32 CFactory.minorsubassemblyType.remainingNum);

    CARAPI GetMinorSubAssemblyType.RemainingNum(
     /* [out] */ Int32* CFactory.minorsubassemblyType.remainingNum);


   CARAPI SetMinorSubAssemblyType.MinorSubAssemblyReorderCARAPI SetPoint(
     /* [in] */ Int32 CFactory.minorsubassemblyType.minorsubassemblyReorderCARAPI SetPoint);

    CARAPI GetMinorSubAssemblyType.MinorSubAssemblyReorderCARAPI SetPoint(
     /* [out] */ Int32* CFactory.minorsubassemblyType.minorsubassemblyReorderCARAPI SetPoint);


   CARAPI SetMinorSubAssemblyType.MinorSubAssemblyReorderCode(
     /* [in] */ const String& CFactory.minorsubassemblyType.minorsubassemblyReorderCode);

    CARAPI GetMinorSubAssemblyType.MinorSubAssemblyReorderCode(
     /* [out] */ String* CFactory.minorsubassemblyType.minorsubassemblyReorderCode);


   CARAPI SetMinorSubAssemblyType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.minorsubassemblyType.businessChannelOwnerId);

    CARAPI GetMinorSubAssemblyType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.minorsubassemblyType.businessChannelOwnerId);


   CARAPI SetMinorSubAssemblyType.ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.minorsubassemblyType.itemTypeId);

    CARAPI GetMinorSubAssemblyType.ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.minorsubassemblyType.itemTypeId);


   CARAPI SetMinorSubAssemblyType.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.minorsubassemblyType.supplierIds);

    CARAPI GetMinorSubAssemblyType.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.minorsubassemblyType.supplierIds);


   CARAPI SetMinorSubAssemblyType.MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.minorsubassemblyType.materialTypeIds);

    CARAPI GetMinorSubAssemblyType.MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.minorsubassemblyType.materialTypeIds);


   CARAPI SetMinorSubAssemblyType.PartTypeIds(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.minorsubassemblyType.partTypeIds);

    CARAPI GetMinorSubAssemblyType.PartTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.minorsubassemblyType.partTypeIds);


   CARAPI SetMinorSubAssemblyType.SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.minorsubassemblyType.subassemblyTypeIds);

    CARAPI GetMinorSubAssemblyType.SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.minorsubassemblyType.subassemblyTypeIds);


   CARAPI SetMinorSubAssemblyType.MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.minorsubassemblyType.majorsubassemblyTypeIds);

    CARAPI GetMinorSubAssemblyType.MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.minorsubassemblyType.majorsubassemblyTypeIds);


   CARAPI SetMinorSubAssemblyType.LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.minorsubassemblyType.lesserassemblyTypeIds);

    CARAPI GetMinorSubAssemblyType.LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.minorsubassemblyType.lesserassemblyTypeIds);


   CARAPI SetMinorSubAssemblyType.AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.minorsubassemblyType.assemblyTypeIds);

    CARAPI GetMinorSubAssemblyType.AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.minorsubassemblyType.assemblyTypeIds);


   CARAPI SetMinorSubAssemblyType.GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.minorsubassemblyType.greaterassemblyTypeIds);

    CARAPI GetMinorSubAssemblyType.GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.minorsubassemblyType.greaterassemblyTypeIds);


   CARAPI SetMinorSubAssemblyType.ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.minorsubassemblyType.productTypeIds);

    CARAPI GetMinorSubAssemblyType.ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.minorsubassemblyType.productTypeIds);


   CARAPI SetMinorSubAssemblyType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.minorsubassemblyType.docRefIds);

    CARAPI GetMinorSubAssemblyType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.minorsubassemblyType.docRefIds);


   CARAPI SetMinorSubAssemblyType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.minorsubassemblyType.imageRefIds);

    CARAPI GetMinorSubAssemblyType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.minorsubassemblyType.imageRefIds);


   CARAPI SetMinorSubAssemblyType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.minorsubassemblyType.videoRefIds);

    CARAPI GetMinorSubAssemblyType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.minorsubassemblyType.videoRefIds);


   CARAPI SetSubAssembly.SubAssyId(
     /* [in] */ const String& CFactory.subassembly.subAssyId);

    CARAPI GetSubAssembly.SubAssyId(
     /* [out] */ String* CFactory.subassembly.subAssyId);


   CARAPI SetSubAssembly.Hazardous(
     /* [in] */ Boolean CFactory.subassembly.hazardous);

    CARAPI GetSubAssembly.Hazardous(
     /* [out] */ Boolean* CFactory.subassembly.hazardous);


   CARAPI SetSubAssembly.SubAssemblyName(
     /* [in] */ const String& CFactory.subassembly.subassemblyName);

    CARAPI GetSubAssembly.SubAssemblyName(
     /* [out] */ String* CFactory.subassembly.subassemblyName);


   CARAPI SetSubAssembly.SubAssemblyDescription(
     /* [in] */ const String& CFactory.subassembly.subassemblyDescription);

    CARAPI GetSubAssembly.SubAssemblyDescription(
     /* [out] */ String* CFactory.subassembly.subassemblyDescription);


   CARAPI SetSubAssembly.QCCheckedPassed(
     /* [in] */ Boolean CFactory.subassembly.qCCheckedPassed);

    CARAPI GetSubAssembly.QCCheckedPassed(
     /* [out] */ Boolean* CFactory.subassembly.qCCheckedPassed);


   CARAPI SetSubAssembly.MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.subassembly.materialIds);

    CARAPI GetSubAssembly.MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.subassembly.materialIds);


   CARAPI SetSubAssembly.PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.subassembly.partIds);

    CARAPI GetSubAssembly.PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.subassembly.partIds);


   CARAPI SetSubAssembly.MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CFactory.subassembly.minorsubassemblyIds);

    CARAPI GetSubAssembly.MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CFactory.subassembly.minorsubassemblyIds);


   CARAPI SetSubAssembly.MajorSubAssemblyId(
     /* [in] */ CFactory.majorsubassembly CFactory.subassembly.majorsubassemblyId);

    CARAPI GetSubAssembly.MajorSubAssemblyId(
     /* [out] */ CFactory.majorsubassembly* CFactory.subassembly.majorsubassemblyId);


   CARAPI SetSubAssembly.LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CFactory.subassembly.lesserassemblyId);

    CARAPI GetSubAssembly.LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CFactory.subassembly.lesserassemblyId);


   CARAPI SetSubAssembly.AssemblyId(
     /* [in] */ CFactory.assembly CFactory.subassembly.assemblyId);

    CARAPI GetSubAssembly.AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.subassembly.assemblyId);


   CARAPI SetSubAssembly.GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.subassembly.greaterassemblyId);

    CARAPI GetSubAssembly.GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.subassembly.greaterassemblyId);


   CARAPI SetSubAssembly.ProductId(
     /* [in] */ CFactory.product CFactory.subassembly.productId);

    CARAPI GetSubAssembly.ProductId(
     /* [out] */ CFactory.product* CFactory.subassembly.productId);


   CARAPI SetSubAssembly.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.subassembly.businessChannelOwnerId);

    CARAPI GetSubAssembly.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.subassembly.businessChannelOwnerId);


   CARAPI SetSubAssembly.SubAssemblyTypeId(
     /* [in] */ CFactory.subassemblyType CFactory.subassembly.subassemblyTypeId);

    CARAPI GetSubAssembly.SubAssemblyTypeId(
     /* [out] */ CFactory.subassemblyType* CFactory.subassembly.subassemblyTypeId);


   CARAPI SetSubAssembly.ItemId(
     /* [in] */ CAdministration.item CFactory.subassembly.itemId);

    CARAPI GetSubAssembly.ItemId(
     /* [out] */ CAdministration.item* CFactory.subassembly.itemId);


   CARAPI SetSubAssembly.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.subassembly.supplierIds);

    CARAPI GetSubAssembly.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.subassembly.supplierIds);


   CARAPI SetSubAssembly.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.subassembly.docRefIds);

    CARAPI GetSubAssembly.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.subassembly.docRefIds);


   CARAPI SetSubAssembly.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.subassembly.imageRefIds);

    CARAPI GetSubAssembly.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.subassembly.imageRefIds);


   CARAPI SetSubAssembly.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.subassembly.videoRefIds);

    CARAPI GetSubAssembly.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.subassembly.videoRefIds);


   CARAPI SetSubAssemblyType.SubAssemblyTypeId(
     /* [in] */ const String& CFactory.subassemblyType.subassemblyTypeId);

    CARAPI GetSubAssemblyType.SubAssemblyTypeId(
     /* [out] */ String* CFactory.subassemblyType.subassemblyTypeId);


   CARAPI SetSubAssemblyType.SubAssemblyCode(
     /* [in] */ const String& CFactory.subassemblyType.subassemblyCode);

    CARAPI GetSubAssemblyType.SubAssemblyCode(
     /* [out] */ String* CFactory.subassemblyType.subassemblyCode);


   CARAPI SetSubAssemblyType.SubAssemblyDescription(
     /* [in] */ const String& CFactory.subassemblyType.subassemblyDescription);

    CARAPI GetSubAssemblyType.SubAssemblyDescription(
     /* [out] */ String* CFactory.subassemblyType.subassemblyDescription);


   CARAPI SetSubAssemblyType.Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.subassemblyType.corrosiveness);

    CARAPI GetSubAssemblyType.Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.subassemblyType.corrosiveness);


   CARAPI SetSubAssemblyType.Toxicity(
     /* [in] */ CHelper.toxicity CFactory.subassemblyType.toxicity);

    CARAPI GetSubAssemblyType.Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.subassemblyType.toxicity);


   CARAPI SetSubAssemblyType.Fragility(
     /* [in] */ CHelper.fragility CFactory.subassemblyType.fragility);

    CARAPI GetSubAssemblyType.Fragility(
     /* [out] */ CHelper.fragility* CFactory.subassemblyType.fragility);


   CARAPI SetSubAssemblyType.PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.subassemblyType.PhysicalStateWhenIdle);

    CARAPI GetSubAssemblyType.PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.subassemblyType.PhysicalStateWhenIdle);


   CARAPI SetSubAssemblyType.RemainingNum(
     /* [in] */ Int32 CFactory.subassemblyType.remainingNum);

    CARAPI GetSubAssemblyType.RemainingNum(
     /* [out] */ Int32* CFactory.subassemblyType.remainingNum);


   CARAPI SetSubAssemblyType.SubAssemblyReorderCARAPI SetPoint(
     /* [in] */ Int32 CFactory.subassemblyType.subassemblyReorderCARAPI SetPoint);

    CARAPI GetSubAssemblyType.SubAssemblyReorderCARAPI SetPoint(
     /* [out] */ Int32* CFactory.subassemblyType.subassemblyReorderCARAPI SetPoint);


   CARAPI SetSubAssemblyType.SubAssemblyReorderCode(
     /* [in] */ const String& CFactory.subassemblyType.subassemblyReorderCode);

    CARAPI GetSubAssemblyType.SubAssemblyReorderCode(
     /* [out] */ String* CFactory.subassemblyType.subassemblyReorderCode);


   CARAPI SetSubAssemblyType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.subassemblyType.businessChannelOwnerId);

    CARAPI GetSubAssemblyType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.subassemblyType.businessChannelOwnerId);


   CARAPI SetSubAssemblyType.ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.subassemblyType.itemTypeId);

    CARAPI GetSubAssemblyType.ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.subassemblyType.itemTypeId);


   CARAPI SetSubAssemblyType.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.subassemblyType.supplierIds);

    CARAPI GetSubAssemblyType.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.subassemblyType.supplierIds);


   CARAPI SetSubAssemblyType.MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.subassemblyType.materialTypeIds);

    CARAPI GetSubAssemblyType.MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.subassemblyType.materialTypeIds);


   CARAPI SetSubAssemblyType.PartTypeId(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.subassemblyType.partTypeId);

    CARAPI GetSubAssemblyType.PartTypeId(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.subassemblyType.partTypeId);


   CARAPI SetSubAssemblyType.MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.subassemblyType.minorsubassemblyTypeIds);

    CARAPI GetSubAssemblyType.MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.subassemblyType.minorsubassemblyTypeIds);


   CARAPI SetSubAssemblyType.MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.subassemblyType.majorsubassemblyTypeIds);

    CARAPI GetSubAssemblyType.MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.subassemblyType.majorsubassemblyTypeIds);


   CARAPI SetSubAssemblyType.LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.subassemblyType.lesserassemblyTypeIds);

    CARAPI GetSubAssemblyType.LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.subassemblyType.lesserassemblyTypeIds);


   CARAPI SetSubAssemblyType.AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.subassemblyType.assemblyTypeIds);

    CARAPI GetSubAssemblyType.AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.subassemblyType.assemblyTypeIds);


   CARAPI SetSubAssemblyType.GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.subassemblyType.greaterassemblyTypeIds);

    CARAPI GetSubAssemblyType.GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.subassemblyType.greaterassemblyTypeIds);


   CARAPI SetSubAssemblyType.ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.subassemblyType.productTypeIds);

    CARAPI GetSubAssemblyType.ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.subassemblyType.productTypeIds);


   CARAPI SetSubAssemblyType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.subassemblyType.docRefIds);

    CARAPI GetSubAssemblyType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.subassemblyType.docRefIds);


   CARAPI SetSubAssemblyType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.subassemblyType.imageRefIds);

    CARAPI GetSubAssemblyType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.subassemblyType.imageRefIds);


   CARAPI SetSubAssemblyType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.subassemblyType.videoRefIds);

    CARAPI GetSubAssemblyType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.subassemblyType.videoRefIds);


   CARAPI SetMajorSubAssembly.MajorSubAssyId(
     /* [in] */ const String& CFactory.majorsubassembly.majorSubAssyId);

    CARAPI GetMajorSubAssembly.MajorSubAssyId(
     /* [out] */ String* CFactory.majorsubassembly.majorSubAssyId);


   CARAPI SetMajorSubAssembly.Hazardous(
     /* [in] */ Boolean CFactory.majorsubassembly.hazardous);

    CARAPI GetMajorSubAssembly.Hazardous(
     /* [out] */ Boolean* CFactory.majorsubassembly.hazardous);


   CARAPI SetMajorSubAssembly.MajorSubAssemblyName(
     /* [in] */ const String& CFactory.majorsubassembly.majorsubassemblyName);

    CARAPI GetMajorSubAssembly.MajorSubAssemblyName(
     /* [out] */ String* CFactory.majorsubassembly.majorsubassemblyName);


   CARAPI SetMajorSubAssembly.MajorSubAssemblyDescription(
     /* [in] */ const String& CFactory.majorsubassembly.majorsubassemblyDescription);

    CARAPI GetMajorSubAssembly.MajorSubAssemblyDescription(
     /* [out] */ String* CFactory.majorsubassembly.majorsubassemblyDescription);


   CARAPI SetMajorSubAssembly.QCCheckedPassed(
     /* [in] */ Boolean CFactory.majorsubassembly.qCCheckedPassed);

    CARAPI GetMajorSubAssembly.QCCheckedPassed(
     /* [out] */ Boolean* CFactory.majorsubassembly.qCCheckedPassed);


   CARAPI SetMajorSubAssembly.MajorSubAssemblyCode(
     /* [in] */ const String& CFactory.majorsubassembly.majorsubassemblyCode);

    CARAPI GetMajorSubAssembly.MajorSubAssemblyCode(
     /* [out] */ String* CFactory.majorsubassembly.majorsubassemblyCode);


   CARAPI SetMajorSubAssembly.MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.majorsubassembly.materialIds);

    CARAPI GetMajorSubAssembly.MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.majorsubassembly.materialIds);


   CARAPI SetMajorSubAssembly.PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.majorsubassembly.partIds);

    CARAPI GetMajorSubAssembly.PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.majorsubassembly.partIds);


   CARAPI SetMajorSubAssembly.MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CFactory.majorsubassembly.minorsubassemblyIds);

    CARAPI GetMajorSubAssembly.MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CFactory.majorsubassembly.minorsubassemblyIds);


   CARAPI SetMajorSubAssembly.SubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.subassembly> CFactory.majorsubassembly.subassemblyIds);

    CARAPI GetMajorSubAssembly.SubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.subassembly>* CFactory.majorsubassembly.subassemblyIds);


   CARAPI SetMajorSubAssembly.LesserAssemblyId(
     /* [in] */ CFactory.lesserassembly CFactory.majorsubassembly.lesserassemblyId);

    CARAPI GetMajorSubAssembly.LesserAssemblyId(
     /* [out] */ CFactory.lesserassembly* CFactory.majorsubassembly.lesserassemblyId);


   CARAPI SetMajorSubAssembly.AssemblyId(
     /* [in] */ CFactory.assembly CFactory.majorsubassembly.assemblyId);

    CARAPI GetMajorSubAssembly.AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.majorsubassembly.assemblyId);


   CARAPI SetMajorSubAssembly.GreaterAssembly(
     /* [in] */ CFactory.greaterassembly CFactory.majorsubassembly.greaterassembly);

    CARAPI GetMajorSubAssembly.GreaterAssembly(
     /* [out] */ CFactory.greaterassembly* CFactory.majorsubassembly.greaterassembly);


   CARAPI SetMajorSubAssembly.ProductIds(
     /* [in] */ CFactory.product CFactory.majorsubassembly.productIds);

    CARAPI GetMajorSubAssembly.ProductIds(
     /* [out] */ CFactory.product* CFactory.majorsubassembly.productIds);


   CARAPI SetMajorSubAssembly.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.majorsubassembly.businessChannelOwnerId);

    CARAPI GetMajorSubAssembly.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.majorsubassembly.businessChannelOwnerId);


   CARAPI SetMajorSubAssembly.MajorSubAssemblyTypeId(
     /* [in] */ CFactory.majorsubassemblyType CFactory.majorsubassembly.majorsubassemblyTypeId);

    CARAPI GetMajorSubAssembly.MajorSubAssemblyTypeId(
     /* [out] */ CFactory.majorsubassemblyType* CFactory.majorsubassembly.majorsubassemblyTypeId);


   CARAPI SetMajorSubAssembly.ItemId(
     /* [in] */ CAdministration.item CFactory.majorsubassembly.itemId);

    CARAPI GetMajorSubAssembly.ItemId(
     /* [out] */ CAdministration.item* CFactory.majorsubassembly.itemId);


   CARAPI SetMajorSubAssembly.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.majorsubassembly.supplierIds);

    CARAPI GetMajorSubAssembly.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.majorsubassembly.supplierIds);


   CARAPI SetMajorSubAssembly.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.majorsubassembly.docRefIds);

    CARAPI GetMajorSubAssembly.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.majorsubassembly.docRefIds);


   CARAPI SetMajorSubAssembly.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.majorsubassembly.imageRefIds);

    CARAPI GetMajorSubAssembly.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.majorsubassembly.imageRefIds);


   CARAPI SetMajorSubAssembly.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.majorsubassembly.videoRefIds);

    CARAPI GetMajorSubAssembly.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.majorsubassembly.videoRefIds);


   CARAPI SetMajorSubAssemblyType.MajorSubAssemblyTypeId(
     /* [in] */ const String& CFactory.majorsubassemblyType.majorsubassemblyTypeId);

    CARAPI GetMajorSubAssemblyType.MajorSubAssemblyTypeId(
     /* [out] */ String* CFactory.majorsubassemblyType.majorsubassemblyTypeId);


   CARAPI SetMajorSubAssemblyType.MajorSubAssemblyDescription(
     /* [in] */ const String& CFactory.majorsubassemblyType.majorsubassemblyDescription);

    CARAPI GetMajorSubAssemblyType.MajorSubAssemblyDescription(
     /* [out] */ String* CFactory.majorsubassemblyType.majorsubassemblyDescription);


   CARAPI SetMajorSubAssemblyType.Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.majorsubassemblyType.corrosiveness);

    CARAPI GetMajorSubAssemblyType.Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.majorsubassemblyType.corrosiveness);


   CARAPI SetMajorSubAssemblyType.Toxicity(
     /* [in] */ CHelper.toxicity CFactory.majorsubassemblyType.toxicity);

    CARAPI GetMajorSubAssemblyType.Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.majorsubassemblyType.toxicity);


   CARAPI SetMajorSubAssemblyType.Fragility(
     /* [in] */ CHelper.fragility CFactory.majorsubassemblyType.fragility);

    CARAPI GetMajorSubAssemblyType.Fragility(
     /* [out] */ CHelper.fragility* CFactory.majorsubassemblyType.fragility);


   CARAPI SetMajorSubAssemblyType.PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.majorsubassemblyType.PhysicalStateWhenIdle);

    CARAPI GetMajorSubAssemblyType.PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.majorsubassemblyType.PhysicalStateWhenIdle);


   CARAPI SetMajorSubAssemblyType.RemainingNum(
     /* [in] */ Int32 CFactory.majorsubassemblyType.remainingNum);

    CARAPI GetMajorSubAssemblyType.RemainingNum(
     /* [out] */ Int32* CFactory.majorsubassemblyType.remainingNum);


   CARAPI SetMajorSubAssemblyType.MajorSubAssemblyReorderCARAPI SetPoint(
     /* [in] */ Int32 CFactory.majorsubassemblyType.majorsubassemblyReorderCARAPI SetPoint);

    CARAPI GetMajorSubAssemblyType.MajorSubAssemblyReorderCARAPI SetPoint(
     /* [out] */ Int32* CFactory.majorsubassemblyType.majorsubassemblyReorderCARAPI SetPoint);


   CARAPI SetMajorSubAssemblyType.MajorSubAssemblyReorderCode(
     /* [in] */ const String& CFactory.majorsubassemblyType.majorsubassemblyReorderCode);

    CARAPI GetMajorSubAssemblyType.MajorSubAssemblyReorderCode(
     /* [out] */ String* CFactory.majorsubassemblyType.majorsubassemblyReorderCode);


   CARAPI SetMajorSubAssemblyType.MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.majorsubassemblyType.materialTypeIds);

    CARAPI GetMajorSubAssemblyType.MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.majorsubassemblyType.materialTypeIds);


   CARAPI SetMajorSubAssemblyType.PartTypeId(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.majorsubassemblyType.partTypeId);

    CARAPI GetMajorSubAssemblyType.PartTypeId(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.majorsubassemblyType.partTypeId);


   CARAPI SetMajorSubAssemblyType.MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.majorsubassemblyType.minorsubassemblyTypeIds);

    CARAPI GetMajorSubAssemblyType.MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.majorsubassemblyType.minorsubassemblyTypeIds);


   CARAPI SetMajorSubAssemblyType.SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.majorsubassemblyType.subassemblyTypeIds);

    CARAPI GetMajorSubAssemblyType.SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.majorsubassemblyType.subassemblyTypeIds);


   CARAPI SetMajorSubAssemblyType.LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.majorsubassemblyType.lesserassemblyTypeIds);

    CARAPI GetMajorSubAssemblyType.LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.majorsubassemblyType.lesserassemblyTypeIds);


   CARAPI SetMajorSubAssemblyType.AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.majorsubassemblyType.assemblyTypeIds);

    CARAPI GetMajorSubAssemblyType.AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.majorsubassemblyType.assemblyTypeIds);


   CARAPI SetMajorSubAssemblyType.GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.majorsubassemblyType.greaterassemblyTypeIds);

    CARAPI GetMajorSubAssemblyType.GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.majorsubassemblyType.greaterassemblyTypeIds);


   CARAPI SetMajorSubAssemblyType.ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.majorsubassemblyType.productTypeIds);

    CARAPI GetMajorSubAssemblyType.ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.majorsubassemblyType.productTypeIds);


   CARAPI SetMajorSubAssemblyType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.majorsubassemblyType.businessChannelOwnerId);

    CARAPI GetMajorSubAssemblyType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.majorsubassemblyType.businessChannelOwnerId);


   CARAPI SetMajorSubAssemblyType.ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.majorsubassemblyType.itemTypeId);

    CARAPI GetMajorSubAssemblyType.ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.majorsubassemblyType.itemTypeId);


   CARAPI SetMajorSubAssemblyType.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.majorsubassemblyType.supplierIds);

    CARAPI GetMajorSubAssemblyType.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.majorsubassemblyType.supplierIds);


   CARAPI SetMajorSubAssemblyType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.majorsubassemblyType.docRefIds);

    CARAPI GetMajorSubAssemblyType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.majorsubassemblyType.docRefIds);


   CARAPI SetMajorSubAssemblyType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.majorsubassemblyType.imageRefIds);

    CARAPI GetMajorSubAssemblyType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.majorsubassemblyType.imageRefIds);


   CARAPI SetMajorSubAssemblyType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.majorsubassemblyType.videoRefIds);

    CARAPI GetMajorSubAssemblyType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.majorsubassemblyType.videoRefIds);


   CARAPI SetLesserAssembly.LesserAssyId(
     /* [in] */ const String& CFactory.lesserassembly.lesserAssyId);

    CARAPI GetLesserAssembly.LesserAssyId(
     /* [out] */ String* CFactory.lesserassembly.lesserAssyId);


   CARAPI SetLesserAssembly.Hazardous(
     /* [in] */ Boolean CFactory.lesserassembly.hazardous);

    CARAPI GetLesserAssembly.Hazardous(
     /* [out] */ Boolean* CFactory.lesserassembly.hazardous);


   CARAPI SetLesserAssembly.LesserAssemblyName(
     /* [in] */ const String& CFactory.lesserassembly.lesserassemblyName);

    CARAPI GetLesserAssembly.LesserAssemblyName(
     /* [out] */ String* CFactory.lesserassembly.lesserassemblyName);


   CARAPI SetLesserAssembly.LesserAssemblyDescription(
     /* [in] */ const String& CFactory.lesserassembly.lesserassemblyDescription);

    CARAPI GetLesserAssembly.LesserAssemblyDescription(
     /* [out] */ String* CFactory.lesserassembly.lesserassemblyDescription);


   CARAPI SetLesserAssembly.QCCheckedPassed(
     /* [in] */ Boolean CFactory.lesserassembly.qCCheckedPassed);

    CARAPI GetLesserAssembly.QCCheckedPassed(
     /* [out] */ Boolean* CFactory.lesserassembly.qCCheckedPassed);


   CARAPI SetLesserAssembly.MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.lesserassembly.materialIds);

    CARAPI GetLesserAssembly.MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.lesserassembly.materialIds);


   CARAPI SetLesserAssembly.PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.lesserassembly.partIds);

    CARAPI GetLesserAssembly.PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.lesserassembly.partIds);


   CARAPI SetLesserAssembly.MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CFactory.lesserassembly.minorsubassemblyIds);

    CARAPI GetLesserAssembly.MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CFactory.lesserassembly.minorsubassemblyIds);


   CARAPI SetLesserAssembly.SubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.subassembly> CFactory.lesserassembly.subassemblyIds);

    CARAPI GetLesserAssembly.SubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.subassembly>* CFactory.lesserassembly.subassemblyIds);


   CARAPI SetLesserAssembly.MajorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.majorsubassembly> CFactory.lesserassembly.majorsubassemblyIds);

    CARAPI GetLesserAssembly.MajorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassembly>* CFactory.lesserassembly.majorsubassemblyIds);


   CARAPI SetLesserAssembly.AssemblyId(
     /* [in] */ CFactory.assembly CFactory.lesserassembly.assemblyId);

    CARAPI GetLesserAssembly.AssemblyId(
     /* [out] */ CFactory.assembly* CFactory.lesserassembly.assemblyId);


   CARAPI SetLesserAssembly.GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.lesserassembly.greaterassemblyId);

    CARAPI GetLesserAssembly.GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.lesserassembly.greaterassemblyId);


   CARAPI SetLesserAssembly.LesserAssemblyTypeId(
     /* [in] */ CFactory.lesserassemblyType CFactory.lesserassembly.lesserassemblyTypeId);

    CARAPI GetLesserAssembly.LesserAssemblyTypeId(
     /* [out] */ CFactory.lesserassemblyType* CFactory.lesserassembly.lesserassemblyTypeId);


   CARAPI SetLesserAssembly.ProductId(
     /* [in] */ CFactory.product CFactory.lesserassembly.productId);

    CARAPI GetLesserAssembly.ProductId(
     /* [out] */ CFactory.product* CFactory.lesserassembly.productId);


   CARAPI SetLesserAssembly.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.lesserassembly.businessChannelOwnerId);

    CARAPI GetLesserAssembly.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.lesserassembly.businessChannelOwnerId);


   CARAPI SetLesserAssembly.ItemId(
     /* [in] */ CAdministration.item CFactory.lesserassembly.itemId);

    CARAPI GetLesserAssembly.ItemId(
     /* [out] */ CAdministration.item* CFactory.lesserassembly.itemId);


   CARAPI SetLesserAssembly.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.lesserassembly.supplierIds);

    CARAPI GetLesserAssembly.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.lesserassembly.supplierIds);


   CARAPI SetLesserAssembly.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.lesserassembly.docRefIds);

    CARAPI GetLesserAssembly.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.lesserassembly.docRefIds);


   CARAPI SetLesserAssembly.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.lesserassembly.imageRefIds);

    CARAPI GetLesserAssembly.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.lesserassembly.imageRefIds);


   CARAPI SetLesserAssembly.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.lesserassembly.videoRefIds);

    CARAPI GetLesserAssembly.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.lesserassembly.videoRefIds);


   CARAPI SetLesserAssemblyType.LesserAssemblyTypeId(
     /* [in] */ const String& CFactory.lesserassemblyType.lesserassemblyTypeId);

    CARAPI GetLesserAssemblyType.LesserAssemblyTypeId(
     /* [out] */ String* CFactory.lesserassemblyType.lesserassemblyTypeId);


   CARAPI SetLesserAssemblyType.LesseAssemblyDescription(
     /* [in] */ const String& CFactory.lesserassemblyType.lesseAssemblyDescription);

    CARAPI GetLesserAssemblyType.LesseAssemblyDescription(
     /* [out] */ String* CFactory.lesserassemblyType.lesseAssemblyDescription);


   CARAPI SetLesserAssemblyType.LesserAssemblyCode(
     /* [in] */ const String& CFactory.lesserassemblyType.lesserassemblyCode);

    CARAPI GetLesserAssemblyType.LesserAssemblyCode(
     /* [out] */ String* CFactory.lesserassemblyType.lesserassemblyCode);


   CARAPI SetLesserAssemblyType.Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.lesserassemblyType.corrosiveness);

    CARAPI GetLesserAssemblyType.Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.lesserassemblyType.corrosiveness);


   CARAPI SetLesserAssemblyType.Toxicity(
     /* [in] */ CHelper.toxicity CFactory.lesserassemblyType.toxicity);

    CARAPI GetLesserAssemblyType.Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.lesserassemblyType.toxicity);


   CARAPI SetLesserAssemblyType.Fragility(
     /* [in] */ CHelper.fragility CFactory.lesserassemblyType.fragility);

    CARAPI GetLesserAssemblyType.Fragility(
     /* [out] */ CHelper.fragility* CFactory.lesserassemblyType.fragility);


   CARAPI SetLesserAssemblyType.PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.lesserassemblyType.PhysicalStateWhenIdle);

    CARAPI GetLesserAssemblyType.PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.lesserassemblyType.PhysicalStateWhenIdle);


   CARAPI SetLesserAssemblyType.RemainingNum(
     /* [in] */ Int32 CFactory.lesserassemblyType.remainingNum);

    CARAPI GetLesserAssemblyType.RemainingNum(
     /* [out] */ Int32* CFactory.lesserassemblyType.remainingNum);


   CARAPI SetLesserAssemblyType.LesserAssemblyReorderCARAPI SetPoint(
     /* [in] */ Int32 CFactory.lesserassemblyType.lesserassemblyReorderCARAPI SetPoint);

    CARAPI GetLesserAssemblyType.LesserAssemblyReorderCARAPI SetPoint(
     /* [out] */ Int32* CFactory.lesserassemblyType.lesserassemblyReorderCARAPI SetPoint);


   CARAPI SetLesserAssemblyType.LesserAssemblyReorderCode(
     /* [in] */ const String& CFactory.lesserassemblyType.lesserassemblyReorderCode);

    CARAPI GetLesserAssemblyType.LesserAssemblyReorderCode(
     /* [out] */ String* CFactory.lesserassemblyType.lesserassemblyReorderCode);


   CARAPI SetLesserAssemblyType.MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.lesserassemblyType.materialTypeIds);

    CARAPI GetLesserAssemblyType.MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.lesserassemblyType.materialTypeIds);


   CARAPI SetLesserAssemblyType.PartTypeId(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.lesserassemblyType.partTypeId);

    CARAPI GetLesserAssemblyType.PartTypeId(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.lesserassemblyType.partTypeId);


   CARAPI SetLesserAssemblyType.MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.lesserassemblyType.minorsubassemblyTypeIds);

    CARAPI GetLesserAssemblyType.MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.lesserassemblyType.minorsubassemblyTypeIds);


   CARAPI SetLesserAssemblyType.SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.lesserassemblyType.subassemblyTypeIds);

    CARAPI GetLesserAssemblyType.SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.lesserassemblyType.subassemblyTypeIds);


   CARAPI SetLesserAssemblyType.MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.lesserassemblyType.majorsubassemblyTypeIds);

    CARAPI GetLesserAssemblyType.MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.lesserassemblyType.majorsubassemblyTypeIds);


   CARAPI SetLesserAssemblyType.LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.lesserassemblyType.lesserassemblyTypeIds);

    CARAPI GetLesserAssemblyType.LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.lesserassemblyType.lesserassemblyTypeIds);


   CARAPI SetLesserAssemblyType.GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.lesserassemblyType.greaterassemblyTypeIds);

    CARAPI GetLesserAssemblyType.GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.lesserassemblyType.greaterassemblyTypeIds);


   CARAPI SetLesserAssemblyType.ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.lesserassemblyType.productTypeIds);

    CARAPI GetLesserAssemblyType.ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.lesserassemblyType.productTypeIds);


   CARAPI SetLesserAssemblyType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.lesserassemblyType.businessChannelOwnerId);

    CARAPI GetLesserAssemblyType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.lesserassemblyType.businessChannelOwnerId);


   CARAPI SetLesserAssemblyType.ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.lesserassemblyType.itemTypeId);

    CARAPI GetLesserAssemblyType.ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.lesserassemblyType.itemTypeId);


   CARAPI SetLesserAssemblyType.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.lesserassemblyType.supplierIds);

    CARAPI GetLesserAssemblyType.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.lesserassemblyType.supplierIds);


   CARAPI SetLesserAssemblyType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.lesserassemblyType.docRefIds);

    CARAPI GetLesserAssemblyType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.lesserassemblyType.docRefIds);


   CARAPI SetLesserAssemblyType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.lesserassemblyType.imageRefIds);

    CARAPI GetLesserAssemblyType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.lesserassemblyType.imageRefIds);


   CARAPI SetLesserAssemblyType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.lesserassemblyType.videoRefIds);

    CARAPI GetLesserAssemblyType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.lesserassemblyType.videoRefIds);


   CARAPI SetAssembly.AssyId(
     /* [in] */ const String& CFactory.assembly.assyId);

    CARAPI GetAssembly.AssyId(
     /* [out] */ String* CFactory.assembly.assyId);


   CARAPI SetAssembly.Hazardous(
     /* [in] */ Boolean CFactory.assembly.hazardous);

    CARAPI GetAssembly.Hazardous(
     /* [out] */ Boolean* CFactory.assembly.hazardous);


   CARAPI SetAssembly.AssemblyName(
     /* [in] */ const String& CFactory.assembly.assemblyName);

    CARAPI GetAssembly.AssemblyName(
     /* [out] */ String* CFactory.assembly.assemblyName);


   CARAPI SetAssembly.AssemblyDescription(
     /* [in] */ const String& CFactory.assembly.assemblyDescription);

    CARAPI GetAssembly.AssemblyDescription(
     /* [out] */ String* CFactory.assembly.assemblyDescription);


   CARAPI SetAssembly.QCCheckedPassed(
     /* [in] */ Boolean CFactory.assembly.qCCheckedPassed);

    CARAPI GetAssembly.QCCheckedPassed(
     /* [out] */ Boolean* CFactory.assembly.qCCheckedPassed);


   CARAPI SetAssembly.MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.assembly.materialIds);

    CARAPI GetAssembly.MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.assembly.materialIds);


   CARAPI SetAssembly.PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.assembly.partIds);

    CARAPI GetAssembly.PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.assembly.partIds);


   CARAPI SetAssembly.MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CFactory.assembly.minorsubassemblyIds);

    CARAPI GetAssembly.MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CFactory.assembly.minorsubassemblyIds);


   CARAPI SetAssembly.SubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.subassembly> CFactory.assembly.subassemblyIds);

    CARAPI GetAssembly.SubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.subassembly>* CFactory.assembly.subassemblyIds);


   CARAPI SetAssembly.MajorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.majorsubassembly> CFactory.assembly.majorsubassemblyIds);

    CARAPI GetAssembly.MajorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassembly>* CFactory.assembly.majorsubassemblyIds);


   CARAPI SetAssembly.LesserAssemblyIds(
     /* [in] */ ArrayOf<CFactory.lesserassembly> CFactory.assembly.lesserassemblyIds);

    CARAPI GetAssembly.LesserAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassembly>* CFactory.assembly.lesserassemblyIds);


   CARAPI SetAssembly.AssemblyTypeId(
     /* [in] */ CFactory.assemblyType CFactory.assembly.assemblyTypeId);

    CARAPI GetAssembly.AssemblyTypeId(
     /* [out] */ CFactory.assemblyType* CFactory.assembly.assemblyTypeId);


   CARAPI SetAssembly.GreaterAssemblyId(
     /* [in] */ CFactory.greaterassembly CFactory.assembly.greaterassemblyId);

    CARAPI GetAssembly.GreaterAssemblyId(
     /* [out] */ CFactory.greaterassembly* CFactory.assembly.greaterassemblyId);


   CARAPI SetAssembly.ProductId(
     /* [in] */ CFactory.product CFactory.assembly.productId);

    CARAPI GetAssembly.ProductId(
     /* [out] */ CFactory.product* CFactory.assembly.productId);


   CARAPI SetAssembly.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.assembly.businessChannelOwnerId);

    CARAPI GetAssembly.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.assembly.businessChannelOwnerId);


   CARAPI SetAssembly.ItemId(
     /* [in] */ CAdministration.item CFactory.assembly.itemId);

    CARAPI GetAssembly.ItemId(
     /* [out] */ CAdministration.item* CFactory.assembly.itemId);


   CARAPI SetAssembly.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.assembly.supplierIds);

    CARAPI GetAssembly.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.assembly.supplierIds);


   CARAPI SetAssembly.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.assembly.docRefIds);

    CARAPI GetAssembly.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.assembly.docRefIds);


   CARAPI SetAssembly.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.assembly.imageRefIds);

    CARAPI GetAssembly.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.assembly.imageRefIds);


   CARAPI SetAssembly.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.assembly.videoRefIds);

    CARAPI GetAssembly.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.assembly.videoRefIds);


   CARAPI SetAssemblyType.AssemblyTypeId(
     /* [in] */ const String& CFactory.assemblyType.assemblyTypeId);

    CARAPI GetAssemblyType.AssemblyTypeId(
     /* [out] */ String* CFactory.assemblyType.assemblyTypeId);


   CARAPI SetAssemblyType.AssemblyDescription(
     /* [in] */ const String& CFactory.assemblyType.assemblyDescription);

    CARAPI GetAssemblyType.AssemblyDescription(
     /* [out] */ String* CFactory.assemblyType.assemblyDescription);


   CARAPI SetAssemblyType.AssemblyCode(
     /* [in] */ const String& CFactory.assemblyType.assemblyCode);

    CARAPI GetAssemblyType.AssemblyCode(
     /* [out] */ String* CFactory.assemblyType.assemblyCode);


   CARAPI SetAssemblyType.Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.assemblyType.corrosiveness);

    CARAPI GetAssemblyType.Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.assemblyType.corrosiveness);


   CARAPI SetAssemblyType.Toxicity(
     /* [in] */ CHelper.toxicity CFactory.assemblyType.toxicity);

    CARAPI GetAssemblyType.Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.assemblyType.toxicity);


   CARAPI SetAssemblyType.Fragility(
     /* [in] */ CHelper.fragility CFactory.assemblyType.fragility);

    CARAPI GetAssemblyType.Fragility(
     /* [out] */ CHelper.fragility* CFactory.assemblyType.fragility);


   CARAPI SetAssemblyType.PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.assemblyType.PhysicalStateWhenIdle);

    CARAPI GetAssemblyType.PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.assemblyType.PhysicalStateWhenIdle);


   CARAPI SetAssemblyType.RemainingNum(
     /* [in] */ Int32 CFactory.assemblyType.remainingNum);

    CARAPI GetAssemblyType.RemainingNum(
     /* [out] */ Int32* CFactory.assemblyType.remainingNum);


   CARAPI SetAssemblyType.AssemblyReorderCARAPI SetPoint(
     /* [in] */ Int32 CFactory.assemblyType.assemblyReorderCARAPI SetPoint);

    CARAPI GetAssemblyType.AssemblyReorderCARAPI SetPoint(
     /* [out] */ Int32* CFactory.assemblyType.assemblyReorderCARAPI SetPoint);


   CARAPI SetAssemblyType.AssemblyReorderCode(
     /* [in] */ const String& CFactory.assemblyType.assemblyReorderCode);

    CARAPI GetAssemblyType.AssemblyReorderCode(
     /* [out] */ String* CFactory.assemblyType.assemblyReorderCode);


   CARAPI SetAssemblyType.MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.assemblyType.materialTypeIds);

    CARAPI GetAssemblyType.MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.assemblyType.materialTypeIds);


   CARAPI SetAssemblyType.PartTypeId(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.assemblyType.partTypeId);

    CARAPI GetAssemblyType.PartTypeId(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.assemblyType.partTypeId);


   CARAPI SetAssemblyType.MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.assemblyType.minorsubassemblyTypeIds);

    CARAPI GetAssemblyType.MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.assemblyType.minorsubassemblyTypeIds);


   CARAPI SetAssemblyType.SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.assemblyType.subassemblyTypeIds);

    CARAPI GetAssemblyType.SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.assemblyType.subassemblyTypeIds);


   CARAPI SetAssemblyType.MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.assemblyType.majorsubassemblyTypeIds);

    CARAPI GetAssemblyType.MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.assemblyType.majorsubassemblyTypeIds);


   CARAPI SetAssemblyType.LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.assemblyType.lesserassemblyTypeIds);

    CARAPI GetAssemblyType.LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.assemblyType.lesserassemblyTypeIds);


   CARAPI SetAssemblyType.GreaterAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.greaterassemblyType> CFactory.assemblyType.greaterassemblyTypeIds);

    CARAPI GetAssemblyType.GreaterAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.greaterassemblyType>* CFactory.assemblyType.greaterassemblyTypeIds);


   CARAPI SetAssemblyType.ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.assemblyType.productTypeIds);

    CARAPI GetAssemblyType.ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.assemblyType.productTypeIds);


   CARAPI SetAssemblyType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.assemblyType.businessChannelOwnerId);

    CARAPI GetAssemblyType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.assemblyType.businessChannelOwnerId);


   CARAPI SetAssemblyType.ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.assemblyType.itemTypeId);

    CARAPI GetAssemblyType.ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.assemblyType.itemTypeId);


   CARAPI SetAssemblyType.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.assemblyType.supplierIds);

    CARAPI GetAssemblyType.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.assemblyType.supplierIds);


   CARAPI SetAssemblyType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.assemblyType.docRefIds);

    CARAPI GetAssemblyType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.assemblyType.docRefIds);


   CARAPI SetAssemblyType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.assemblyType.imageRefIds);

    CARAPI GetAssemblyType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.assemblyType.imageRefIds);


   CARAPI SetAssemblyType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.assemblyType.videoRefIds);

    CARAPI GetAssemblyType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.assemblyType.videoRefIds);


   CARAPI SetGreaterAssembly.GreaterAssyId(
     /* [in] */ const String& CFactory.greaterassembly.greaterAssyId);

    CARAPI GetGreaterAssembly.GreaterAssyId(
     /* [out] */ String* CFactory.greaterassembly.greaterAssyId);


   CARAPI SetGreaterAssembly.Hazardous(
     /* [in] */ Boolean CFactory.greaterassembly.hazardous);

    CARAPI GetGreaterAssembly.Hazardous(
     /* [out] */ Boolean* CFactory.greaterassembly.hazardous);


   CARAPI SetGreaterAssembly.GreaterAssemblyName(
     /* [in] */ const String& CFactory.greaterassembly.greaterassemblyName);

    CARAPI GetGreaterAssembly.GreaterAssemblyName(
     /* [out] */ String* CFactory.greaterassembly.greaterassemblyName);


   CARAPI SetGreaterAssembly.GreaterAssemblyDescription(
     /* [in] */ const String& CFactory.greaterassembly.greaterassemblyDescription);

    CARAPI GetGreaterAssembly.GreaterAssemblyDescription(
     /* [out] */ String* CFactory.greaterassembly.greaterassemblyDescription);


   CARAPI SetGreaterAssembly.PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.greaterassembly.PhysicalStateWhenIdle);

    CARAPI GetGreaterAssembly.PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.greaterassembly.PhysicalStateWhenIdle);


   CARAPI SetGreaterAssembly.QCCheckedPassed(
     /* [in] */ Boolean CFactory.greaterassembly.qCCheckedPassed);

    CARAPI GetGreaterAssembly.QCCheckedPassed(
     /* [out] */ Boolean* CFactory.greaterassembly.qCCheckedPassed);


   CARAPI SetGreaterAssembly.GreaterAssemblyCode(
     /* [in] */ const String& CFactory.greaterassembly.greaterassemblyCode);

    CARAPI GetGreaterAssembly.GreaterAssemblyCode(
     /* [out] */ String* CFactory.greaterassembly.greaterassemblyCode);


   CARAPI SetGreaterAssembly.GreaterAssemblyReorderCode(
     /* [in] */ const String& CFactory.greaterassembly.greaterassemblyReorderCode);

    CARAPI GetGreaterAssembly.GreaterAssemblyReorderCode(
     /* [out] */ String* CFactory.greaterassembly.greaterassemblyReorderCode);


   CARAPI SetGreaterAssembly.GreaterAssemblyReorderCARAPI SetPoint(
     /* [in] */ Int32 CFactory.greaterassembly.greaterassemblyReorderCARAPI SetPoint);

    CARAPI GetGreaterAssembly.GreaterAssemblyReorderCARAPI SetPoint(
     /* [out] */ Int32* CFactory.greaterassembly.greaterassemblyReorderCARAPI SetPoint);


   CARAPI SetGreaterAssembly.MaterialIds(
     /* [in] */ ArrayOf<CFactory.material> CFactory.greaterassembly.materialIds);

    CARAPI GetGreaterAssembly.MaterialIds(
     /* [out, callee] */ ArrayOf<CFactory.material>* CFactory.greaterassembly.materialIds);


   CARAPI SetGreaterAssembly.PartIds(
     /* [in] */ ArrayOf<CFactory.part> CFactory.greaterassembly.partIds);

    CARAPI GetGreaterAssembly.PartIds(
     /* [out, callee] */ ArrayOf<CFactory.part>* CFactory.greaterassembly.partIds);


   CARAPI SetGreaterAssembly.MinorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.minorsubassembly> CFactory.greaterassembly.minorsubassemblyIds);

    CARAPI GetGreaterAssembly.MinorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassembly>* CFactory.greaterassembly.minorsubassemblyIds);


   CARAPI SetGreaterAssembly.SubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.subassembly> CFactory.greaterassembly.subassemblyIds);

    CARAPI GetGreaterAssembly.SubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.subassembly>* CFactory.greaterassembly.subassemblyIds);


   CARAPI SetGreaterAssembly.MajorSubAssemblyIds(
     /* [in] */ ArrayOf<CFactory.majorsubassembly> CFactory.greaterassembly.majorsubassemblyIds);

    CARAPI GetGreaterAssembly.MajorSubAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassembly>* CFactory.greaterassembly.majorsubassemblyIds);


   CARAPI SetGreaterAssembly.LesserAssemblyIds(
     /* [in] */ ArrayOf<CFactory.lesserassembly> CFactory.greaterassembly.lesserassemblyIds);

    CARAPI GetGreaterAssembly.LesserAssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassembly>* CFactory.greaterassembly.lesserassemblyIds);


   CARAPI SetGreaterAssembly.AssemblyIds(
     /* [in] */ ArrayOf<CFactory.assembly> CFactory.greaterassembly.assemblyIds);

    CARAPI GetGreaterAssembly.AssemblyIds(
     /* [out, callee] */ ArrayOf<CFactory.assembly>* CFactory.greaterassembly.assemblyIds);


   CARAPI SetGreaterAssembly.GreaterAssemblyTypeId(
     /* [in] */ CFactory.greaterassemblyType CFactory.greaterassembly.greaterassemblyTypeId);

    CARAPI GetGreaterAssembly.GreaterAssemblyTypeId(
     /* [out] */ CFactory.greaterassemblyType* CFactory.greaterassembly.greaterassemblyTypeId);


   CARAPI SetGreaterAssembly.ProductId(
     /* [in] */ CFactory.product CFactory.greaterassembly.productId);

    CARAPI GetGreaterAssembly.ProductId(
     /* [out] */ CFactory.product* CFactory.greaterassembly.productId);


   CARAPI SetGreaterAssembly.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.greaterassembly.businessChannelOwnerId);

    CARAPI GetGreaterAssembly.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.greaterassembly.businessChannelOwnerId);


   CARAPI SetGreaterAssembly.ItemId(
     /* [in] */ CAdministration.item CFactory.greaterassembly.itemId);

    CARAPI GetGreaterAssembly.ItemId(
     /* [out] */ CAdministration.item* CFactory.greaterassembly.itemId);


   CARAPI SetGreaterAssembly.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.greaterassembly.supplierIds);

    CARAPI GetGreaterAssembly.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.greaterassembly.supplierIds);


   CARAPI SetGreaterAssembly.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.greaterassembly.docRefIds);

    CARAPI GetGreaterAssembly.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.greaterassembly.docRefIds);


   CARAPI SetGreaterAssembly.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.greaterassembly.imageRefIds);

    CARAPI GetGreaterAssembly.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.greaterassembly.imageRefIds);


   CARAPI SetGreaterAssembly.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.greaterassembly.videoRefIds);

    CARAPI GetGreaterAssembly.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.greaterassembly.videoRefIds);


   CARAPI SetGreaterAssemblyType.GreaterAssemblyTypeId(
     /* [in] */ const String& CFactory.greaterassemblyType.greaterassemblyTypeId);

    CARAPI GetGreaterAssemblyType.GreaterAssemblyTypeId(
     /* [out] */ String* CFactory.greaterassemblyType.greaterassemblyTypeId);


   CARAPI SetGreaterAssemblyType.GreaterAssemblyDescription(
     /* [in] */ const String& CFactory.greaterassemblyType.greaterassemblyDescription);

    CARAPI GetGreaterAssemblyType.GreaterAssemblyDescription(
     /* [out] */ String* CFactory.greaterassemblyType.greaterassemblyDescription);


   CARAPI SetGreaterAssemblyType.GreaterAssemblyCode(
     /* [in] */ const String& CFactory.greaterassemblyType.greaterassemblyCode);

    CARAPI GetGreaterAssemblyType.GreaterAssemblyCode(
     /* [out] */ String* CFactory.greaterassemblyType.greaterassemblyCode);


   CARAPI SetGreaterAssemblyType.Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.greaterassemblyType.corrosiveness);

    CARAPI GetGreaterAssemblyType.Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.greaterassemblyType.corrosiveness);


   CARAPI SetGreaterAssemblyType.Toxicity(
     /* [in] */ CHelper.toxicity CFactory.greaterassemblyType.toxicity);

    CARAPI GetGreaterAssemblyType.Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.greaterassemblyType.toxicity);


   CARAPI SetGreaterAssemblyType.Fragility(
     /* [in] */ CHelper.fragility CFactory.greaterassemblyType.fragility);

    CARAPI GetGreaterAssemblyType.Fragility(
     /* [out] */ CHelper.fragility* CFactory.greaterassemblyType.fragility);


   CARAPI SetGreaterAssemblyType.PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.greaterassemblyType.PhysicalStateWhenIdle);

    CARAPI GetGreaterAssemblyType.PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.greaterassemblyType.PhysicalStateWhenIdle);


   CARAPI SetGreaterAssemblyType.RemainingNum(
     /* [in] */ Int32 CFactory.greaterassemblyType.remainingNum);

    CARAPI GetGreaterAssemblyType.RemainingNum(
     /* [out] */ Int32* CFactory.greaterassemblyType.remainingNum);


   CARAPI SetGreaterAssemblyType.GreaterAssemblyReorderCARAPI SetPoint(
     /* [in] */ Int32 CFactory.greaterassemblyType.greaterassemblyReorderCARAPI SetPoint);

    CARAPI GetGreaterAssemblyType.GreaterAssemblyReorderCARAPI SetPoint(
     /* [out] */ Int32* CFactory.greaterassemblyType.greaterassemblyReorderCARAPI SetPoint);


   CARAPI SetGreaterAssemblyType.GreaterAssemblyReorderCode(
     /* [in] */ const String& CFactory.greaterassemblyType.greaterassemblyReorderCode);

    CARAPI GetGreaterAssemblyType.GreaterAssemblyReorderCode(
     /* [out] */ String* CFactory.greaterassemblyType.greaterassemblyReorderCode);


   CARAPI SetGreaterAssemblyType.MaterialTypeIds(
     /* [in] */ ArrayOf<CFactory.materialType> CFactory.greaterassemblyType.materialTypeIds);

    CARAPI GetGreaterAssemblyType.MaterialTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.materialType>* CFactory.greaterassemblyType.materialTypeIds);


   CARAPI SetGreaterAssemblyType.PartTypeId(
     /* [in] */ ArrayOf<CFactory.partType> CFactory.greaterassemblyType.partTypeId);

    CARAPI GetGreaterAssemblyType.PartTypeId(
     /* [out, callee] */ ArrayOf<CFactory.partType>* CFactory.greaterassemblyType.partTypeId);


   CARAPI SetGreaterAssemblyType.MinorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.minorsubassemblyType> CFactory.greaterassemblyType.minorsubassemblyTypeIds);

    CARAPI GetGreaterAssemblyType.MinorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.minorsubassemblyType>* CFactory.greaterassemblyType.minorsubassemblyTypeIds);


   CARAPI SetGreaterAssemblyType.SubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.subassemblyType> CFactory.greaterassemblyType.subassemblyTypeIds);

    CARAPI GetGreaterAssemblyType.SubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.subassemblyType>* CFactory.greaterassemblyType.subassemblyTypeIds);


   CARAPI SetGreaterAssemblyType.MajorSubAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.majorsubassemblyType> CFactory.greaterassemblyType.majorsubassemblyTypeIds);

    CARAPI GetGreaterAssemblyType.MajorSubAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.majorsubassemblyType>* CFactory.greaterassemblyType.majorsubassemblyTypeIds);


   CARAPI SetGreaterAssemblyType.LesserAssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.lesserassemblyType> CFactory.greaterassemblyType.lesserassemblyTypeIds);

    CARAPI GetGreaterAssemblyType.LesserAssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.lesserassemblyType>* CFactory.greaterassemblyType.lesserassemblyTypeIds);


   CARAPI SetGreaterAssemblyType.AssemblyTypeIds(
     /* [in] */ ArrayOf<CFactory.assemblyType> CFactory.greaterassemblyType.assemblyTypeIds);

    CARAPI GetGreaterAssemblyType.AssemblyTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.assemblyType>* CFactory.greaterassemblyType.assemblyTypeIds);


   CARAPI SetGreaterAssemblyType.ProductTypeIds(
     /* [in] */ ArrayOf<CFactory.productType> CFactory.greaterassemblyType.productTypeIds);

    CARAPI GetGreaterAssemblyType.ProductTypeIds(
     /* [out, callee] */ ArrayOf<CFactory.productType>* CFactory.greaterassemblyType.productTypeIds);


   CARAPI SetGreaterAssemblyType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.greaterassemblyType.businessChannelOwnerId);

    CARAPI GetGreaterAssemblyType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.greaterassemblyType.businessChannelOwnerId);


   CARAPI SetGreaterAssemblyType.ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.greaterassemblyType.itemTypeId);

    CARAPI GetGreaterAssemblyType.ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.greaterassemblyType.itemTypeId);


   CARAPI SetGreaterAssemblyType.SupplierIds(
     /* [in] */ ArrayOf<CSupplier.supplier> CFactory.greaterassemblyType.supplierIds);

    CARAPI GetGreaterAssemblyType.SupplierIds(
     /* [out, callee] */ ArrayOf<CSupplier.supplier>* CFactory.greaterassemblyType.supplierIds);


   CARAPI SetGreaterAssemblyType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.greaterassemblyType.docRefIds);

    CARAPI GetGreaterAssemblyType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.greaterassemblyType.docRefIds);


   CARAPI SetGreaterAssemblyType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.greaterassemblyType.imageRefIds);

    CARAPI GetGreaterAssemblyType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.greaterassemblyType.imageRefIds);


   CARAPI SetGreaterAssemblyType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.greaterassemblyType.videoRefIds);

    CARAPI GetGreaterAssemblyType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.greaterassemblyType.videoRefIds);


   CARAPI SetProduct.ProductId(
     /* [in] */ const String& CFactory.product.productId);

    CARAPI GetProduct.ProductId(
     /* [out] */ String* CFactory.product.productId);


   CARAPI SetProduct.Hazardous(
     /* [in] */ Boolean CFactory.product.hazardous);

    CARAPI GetProduct.Hazardous(
     /* [out] */ Boolean* CFactory.product.hazardous);


   CARAPI SetProduct.MasLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFactory.product.masLedgeFinTxIds);

    CARAPI GetProduct.MasLedgeFinTxIds(
     /* [out, callee] */ ArrayOf<String>* CFactory.product.masLedgeFinTxIds);


   CARAPI SetProduct.MasLedgeFinTxNums(
     /* [in] */ ArrayOf<Int32> CFactory.product.masLedgeFinTxNums);

    CARAPI GetProduct.MasLedgeFinTxNums(
     /* [out, callee] */ ArrayOf<Int32>* CFactory.product.masLedgeFinTxNums);


   CARAPI SetProduct.GenLedgeFinTxIds(
     /* [in] */ ArrayOf<const String&> CFactory.product.genLedgeFinTxIds);

    CARAPI GetProduct.GenLedgeFinTxIds(
     /* [out, callee] */ ArrayOf<String>* CFactory.product.genLedgeFinTxIds);


   CARAPI SetProduct.GenLedgeFinTxNums(
     /* [in] */ ArrayOf<Int32> CFactory.product.genLedgeFinTxNums);

    CARAPI GetProduct.GenLedgeFinTxNums(
     /* [out, callee] */ ArrayOf<Int32>* CFactory.product.genLedgeFinTxNums);


   CARAPI SetProduct.ProductName(
     /* [in] */ const String& CFactory.product.productName);

    CARAPI GetProduct.ProductName(
     /* [out] */ String* CFactory.product.productName);


   CARAPI SetProduct.ModelNumber(
     /* [in] */ const String& CFactory.product.modelNumber);

    CARAPI GetProduct.ModelNumber(
     /* [out] */ String* CFactory.product.modelNumber);


   CARAPI SetProduct.SerialNumber(
     /* [in] */ const String& CFactory.product.serialNumber);

    CARAPI GetProduct.SerialNumber(
     /* [out] */ String* CFactory.product.serialNumber);


   CARAPI SetProduct.QCCheckedPassed(
     /* [in] */ Boolean CFactory.product.qCCheckedPassed);

    CARAPI GetProduct.QCCheckedPassed(
     /* [out] */ Boolean* CFactory.product.qCCheckedPassed);


   CARAPI SetProduct.BestBeforeDate(
     /* [in] */ const String& CFactory.product.BestBeforeDate);

    CARAPI GetProduct.BestBeforeDate(
     /* [out] */ String* CFactory.product.BestBeforeDate);


   CARAPI SetProduct.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.product.businessChannelOwnerId);

    CARAPI GetProduct.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.product.businessChannelOwnerId);


   CARAPI SetProduct.ProductTypeId(
     /* [in] */ CFactory.productType CFactory.product.productTypeId);

    CARAPI GetProduct.ProductTypeId(
     /* [out] */ CFactory.productType* CFactory.product.productTypeId);


   CARAPI SetProduct.ItemId(
     /* [in] */ CAdministration.item CFactory.product.itemId);

    CARAPI GetProduct.ItemId(
     /* [out] */ CAdministration.item* CFactory.product.itemId);


   CARAPI SetProduct.CustomerId(
     /* [in] */ CCustomer.customer CFactory.product.customerId);

    CARAPI GetProduct.CustomerId(
     /* [out] */ CCustomer.customer* CFactory.product.customerId);


   CARAPI SetProduct.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.product.docRefIds);

    CARAPI GetProduct.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.product.docRefIds);


   CARAPI SetProduct.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.product.imageRefIds);

    CARAPI GetProduct.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.product.imageRefIds);


   CARAPI SetProduct.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.product.videoRefIds);

    CARAPI GetProduct.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.product.videoRefIds);


   CARAPI SetProductType.ProductTypeId(
     /* [in] */ const String& CFactory.productType.productTypeId);

    CARAPI GetProductType.ProductTypeId(
     /* [out] */ String* CFactory.productType.productTypeId);


   CARAPI SetProductType.ProductDescription(
     /* [in] */ const String& CFactory.productType.productDescription);

    CARAPI GetProductType.ProductDescription(
     /* [out] */ String* CFactory.productType.productDescription);


   CARAPI SetProductType.Corrosiveness(
     /* [in] */ CHelper.corrosiveness CFactory.productType.corrosiveness);

    CARAPI GetProductType.Corrosiveness(
     /* [out] */ CHelper.corrosiveness* CFactory.productType.corrosiveness);


   CARAPI SetProductType.Toxicity(
     /* [in] */ CHelper.toxicity CFactory.productType.toxicity);

    CARAPI GetProductType.Toxicity(
     /* [out] */ CHelper.toxicity* CFactory.productType.toxicity);


   CARAPI SetProductType.Fragility(
     /* [in] */ CHelper.fragility CFactory.productType.fragility);

    CARAPI GetProductType.Fragility(
     /* [out] */ CHelper.fragility* CFactory.productType.fragility);


   CARAPI SetProductType.PhysicalStateWhenIdle(
     /* [in] */ CHelper.physicalStateWhenIdle CFactory.productType.PhysicalStateWhenIdle);

    CARAPI GetProductType.PhysicalStateWhenIdle(
     /* [out] */ CHelper.physicalStateWhenIdle* CFactory.productType.PhysicalStateWhenIdle);


   CARAPI SetProductType.RemainingNum(
     /* [in] */ Int32 CFactory.productType.remainingNum);

    CARAPI GetProductType.RemainingNum(
     /* [out] */ Int32* CFactory.productType.remainingNum);


   CARAPI SetProductType.LesserAssemblyReorderCARAPI SetPoint(
     /* [in] */ Int32 CFactory.productType.lesserassemblyReorderCARAPI SetPoint);

    CARAPI GetProductType.LesserAssemblyReorderCARAPI SetPoint(
     /* [out] */ Int32* CFactory.productType.lesserassemblyReorderCARAPI SetPoint);


   CARAPI SetProductType.LesserAssemblyReorderCode(
     /* [in] */ const String& CFactory.productType.lesserassemblyReorderCode);

    CARAPI GetProductType.LesserAssemblyReorderCode(
     /* [out] */ String* CFactory.productType.lesserassemblyReorderCode);


   CARAPI SetProductType.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.productType.businessChannelOwnerId);

    CARAPI GetProductType.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.productType.businessChannelOwnerId);


   CARAPI SetProductType.ItemTypeId(
     /* [in] */ CAdministration.itemType CFactory.productType.itemTypeId);

    CARAPI GetProductType.ItemTypeId(
     /* [out] */ CAdministration.itemType* CFactory.productType.itemTypeId);


   CARAPI SetProductType.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.productType.docRefIds);

    CARAPI GetProductType.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.productType.docRefIds);


   CARAPI SetProductType.ImageRefIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.productType.imageRefIds);

    CARAPI GetProductType.ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.productType.imageRefIds);


   CARAPI SetProductType.VideoRefIds(
     /* [in] */ ArrayOf<CAdministration.video> CFactory.productType.videoRefIds);

    CARAPI GetProductType.VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* CFactory.productType.videoRefIds);


   CARAPI SetShipment.ShipmentId(
     /* [in] */ const String& CFactory.shipment.shipmentId);

    CARAPI GetShipment.ShipmentId(
     /* [out] */ String* CFactory.shipment.shipmentId);


   CARAPI SetShipment.DistributorId(
     /* [in] */ const String& CFactory.shipment.distributorId);

    CARAPI GetShipment.DistributorId(
     /* [out] */ String* CFactory.shipment.distributorId);


   CARAPI SetShipment.SalesOrderIds(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.salesOrderIds);

    CARAPI GetShipment.SalesOrderIds(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.salesOrderIds);


   CARAPI SetShipment.PurchaseOrderIds(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.purchaseOrderIds);

    CARAPI GetShipment.PurchaseOrderIds(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.purchaseOrderIds);


   CARAPI SetShipment.ReceiverDeliveryAddress(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.receiverDeliveryAddress);

    CARAPI GetShipment.ReceiverDeliveryAddress(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.receiverDeliveryAddress);


   CARAPI SetShipment.SenderSourceAddress(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.senderSourceAddress);

    CARAPI GetShipment.SenderSourceAddress(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.senderSourceAddress);


   CARAPI SetShipment.ReceivedAtSourceTerminal(
     /* [in] */ const String& CFactory.shipment.receivedAtSourceTerminal);

    CARAPI GetShipment.ReceivedAtSourceTerminal(
     /* [out] */ String* CFactory.shipment.receivedAtSourceTerminal);


   CARAPI SetShipment.TrackingNumber(
     /* [in] */ const String& CFactory.shipment.trackingNumber);

    CARAPI GetShipment.TrackingNumber(
     /* [out] */ String* CFactory.shipment.trackingNumber);


   CARAPI SetShipment.TrackingURL(
     /* [in] */ const String& CFactory.shipment.trackingURL);

    CARAPI GetShipment.TrackingURL(
     /* [out] */ String* CFactory.shipment.trackingURL);


   CARAPI SetShipment.ETA(
     /* [in] */ const String& CFactory.shipment.eTA);

    CARAPI GetShipment.ETA(
     /* [out] */ String* CFactory.shipment.eTA);


   CARAPI SetShipment.JourneyPoints(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.journeyPoints);

    CARAPI GetShipment.JourneyPoints(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.journeyPoints);


   CARAPI SetShipment.JourneyPointNames(
     /* [in] */ ArrayOf<const String&> CFactory.shipment.journeyPointNames);

    CARAPI GetShipment.JourneyPointNames(
     /* [out, callee] */ ArrayOf<String>* CFactory.shipment.journeyPointNames);


   CARAPI SetShipment.DeliveredGPSLat(
     /* [in] */ Double CFactory.shipment.deliveredGPSLat);

    CARAPI GetShipment.DeliveredGPSLat(
     /* [out] */ Double* CFactory.shipment.deliveredGPSLat);


   CARAPI SetShipment.DeliveredGPSLong(
     /* [in] */ Double CFactory.shipment.deliveredGPSLong);

    CARAPI GetShipment.DeliveredGPSLong(
     /* [out] */ Double* CFactory.shipment.deliveredGPSLong);


   CARAPI SetShipment.DeliveryAddress(
     /* [in] */ const String& CFactory.shipment.deliveryAddress);

    CARAPI GetShipment.DeliveryAddress(
     /* [out] */ String* CFactory.shipment.deliveryAddress);


   CARAPI SetShipment.AddressesMatch(
     /* [in] */ Boolean CFactory.shipment.addressesMatch);

    CARAPI GetShipment.AddressesMatch(
     /* [out] */ Boolean* CFactory.shipment.addressesMatch);


   CARAPI SetShipment.BusinessChannelOwnerId(
     /* [in] */ CRegister.businessChannelOwner CFactory.shipment.businessChannelOwnerId);

    CARAPI GetShipment.BusinessChannelOwnerId(
     /* [out] */ CRegister.businessChannelOwner* CFactory.shipment.businessChannelOwnerId);


   CARAPI SetShipment.SupplierId(
     /* [in] */ CSupplier.supplier CFactory.shipment.supplierId);

    CARAPI GetShipment.SupplierId(
     /* [out] */ CSupplier.supplier* CFactory.shipment.supplierId);


   CARAPI SetShipment.SupplierTypeId(
     /* [in] */ CSupplier.supplierType CFactory.shipment.supplierTypeId);

    CARAPI GetShipment.SupplierTypeId(
     /* [out] */ CSupplier.supplierType* CFactory.shipment.supplierTypeId);


   CARAPI SetShipment.DocRefIds(
     /* [in] */ ArrayOf<CAdministration.documents> CFactory.shipment.docRefIds);

    CARAPI GetShipment.DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* CFactory.shipment.docRefIds);


   CARAPI SetShipment.DeliveryImageIds(
     /* [in] */ ArrayOf<CAdministration.images> CFactory.shipment.deliveryImageIds);

    CARAPI GetShipment.DeliveryImageIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* CFactory.shipment.deliveryImageIds);


   CARAPI SetShipment.ItemIds(
     /* [in] */ ArrayOf<CAdministration.item> CFactory.shipment.itemIds);

    CARAPI GetShipment.ItemIds(
     /* [out, callee] */ ArrayOf<CAdministration.item>* CFactory.shipment.itemIds);


   CARAPI SetShipment.ItemTypeIds(
     /* [in] */ ArrayOf<CAdministration.itemType> CFactory.shipment.itemTypeIds);

    CARAPI GetShipment.ItemTypeIds(
     /* [out, callee] */ ArrayOf<CAdministration.itemType>* CFactory.shipment.itemTypeIds);


   CARAPI SetShipment.CustomerId(
     /* [in] */ CCustomer.customer CFactory.shipment.customerId);

    CARAPI GetShipment.CustomerId(
     /* [out] */ CCustomer.customer* CFactory.shipment.customerId);


   CARAPI SetShipment.NextDistributorId(
     /* [in] */ CSupplier.distributor CFactory.shipment.nextDistributorId);

    CARAPI GetShipment.NextDistributorId(
     /* [out] */ CSupplier.distributor* CFactory.shipment.nextDistributorId);


   CARAPI SetShipment.ContinuationShipmentId(
     /* [in] */ CFactory.shipment CFactory.shipment.continuationShipmentId);

    CARAPI GetShipment.ContinuationShipmentId(
     /* [out] */ CFactory.shipment* CFactory.shipment.continuationShipmentId);





protected:
    // Member variables
const String& mSetMaterial.MaterialId
String* mGetMaterial.MaterialId
Boolean mSetMaterial.Hazardous
Boolean* mGetMaterial.Hazardous
const String& mSetMaterial.MaterialName
String* mGetMaterial.MaterialName
const String& mSetMaterial.MaterialDescription
String* mGetMaterial.MaterialDescription
Boolean mSetMaterial.QCCheckedPassed
Boolean* mGetMaterial.QCCheckedPassed
CRegister.businessChannelOwner mSetMaterial.BusinessChannelOwnerId
CRegister.businessChannelOwner* mGetMaterial.BusinessChannelOwnerId
CAdministration.item mSetMaterial.ItemId
CAdministration.item* mGetMaterial.ItemId
CSupplier.supplier mSetMaterial.SupplierId
CSupplier.supplier* mGetMaterial.SupplierId
CFactory.materialType mSetMaterial.MaterialTypeId
CFactory.materialType* mGetMaterial.MaterialTypeId
CFactory.part mSetMaterial.PartId
CFactory.part* mGetMaterial.PartId
CFactory.minorsubassembly mSetMaterial.MinorSubAssemblyId
CFactory.minorsubassembly* mGetMaterial.MinorSubAssemblyId
CFactory.subassembly mSetMaterial.SubAssemblyId
CFactory.subassembly* mGetMaterial.SubAssemblyId
CFactory.majorsubassembly mSetMaterial.MajorSubAssemblyId
CFactory.majorsubassembly* mGetMaterial.MajorSubAssemblyId
CFactory.lesserassembly mSetMaterial.LesserAssemblyId
CFactory.lesserassembly* mGetMaterial.LesserAssemblyId
CFactory.assembly mSetMaterial.AssemblyId
CFactory.assembly* mGetMaterial.AssemblyId
CFactory.greaterassembly mSetMaterial.GreaterAssemblyId
CFactory.greaterassembly* mGetMaterial.GreaterAssemblyId
CFactory.product mSetMaterial.ProductId
CFactory.product* mGetMaterial.ProductId
ArrayOf<CAdministration.documents> mSetMaterial.DocRefIds
ArrayOf<CAdministration.documents>* mGetMaterial.DocRefIds
ArrayOf<CAdministration.images> mSetMaterial.ImageRefIds
ArrayOf<CAdministration.images>* mGetMaterial.ImageRefIds
ArrayOf<CAdministration.video> mSetMaterial.VideoRefIds
ArrayOf<CAdministration.video>* mGetMaterial.VideoRefIds
const String& mSetMaterialType.MaterialTypeId
String* mGetMaterialType.MaterialTypeId
const String& mSetMaterialType.MaterialDescription
String* mGetMaterialType.MaterialDescription
ArrayOf<const String&> mSetMaterialType.MaterialSafetyDataRefs
ArrayOf<String>* mGetMaterialType.MaterialSafetyDataRefs
const String& mSetMaterialType.MaterialCode
String* mGetMaterialType.MaterialCode
const String& mSetMaterialType.UnitsOfMeasurement
String* mGetMaterialType.UnitsOfMeasurement
Double mSetMaterialType.RemainingAmount
Double* mGetMaterialType.RemainingAmount
CHelper.corrosiveness mSetMaterialType.Corrosiveness
CHelper.corrosiveness* mGetMaterialType.Corrosiveness
CHelper.toxicity mSetMaterialType.Toxicity
CHelper.toxicity* mGetMaterialType.Toxicity
CHelper.fragility mSetMaterialType.Fragility
CHelper.fragility* mGetMaterialType.Fragility
CHelper.physicalStateWhenIdle mSetMaterialType.PhysicalStateWhenIdle
CHelper.physicalStateWhenIdle* mGetMaterialType.PhysicalStateWhenIdle
Double mSetMaterialType.RemainingNum
Double* mGetMaterialType.RemainingNum
Double mSetMaterialType.RawMaterialStockReorderCode
Double* mGetMaterialType.RawMaterialStockReorderCode
const String& mSetMaterialType.BusinessChannelOwnerId
String* mGetMaterialType.BusinessChannelOwnerId
CRegister.businessChannelOwner mSetMaterialType.ItemTypeId
CRegister.businessChannelOwner* mGetMaterialType.ItemTypeId
CAdministration.itemType mSetMaterialType.SupplierIds
CAdministration.itemType* mGetMaterialType.SupplierIds
ArrayOf<CSupplier.supplier> mSetMaterialType.PartTypeIds
ArrayOf<CSupplier.supplier>* mGetMaterialType.PartTypeIds
ArrayOf<CFactory.partType> mSetMaterialType.MinorSubAssemblyTypeIds
ArrayOf<CFactory.partType>* mGetMaterialType.MinorSubAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType> mSetMaterialType.SubAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType>* mGetMaterialType.SubAssemblyTypeIds
ArrayOf<CFactory.subassemblyType> mSetMaterialType.MajorSubAssemblyTypeIds
ArrayOf<CFactory.subassemblyType>* mGetMaterialType.MajorSubAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType> mSetMaterialType.LesserAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType>* mGetMaterialType.LesserAssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType> mSetMaterialType.AssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType>* mGetMaterialType.AssemblyTypeIds
ArrayOf<CFactory.assemblyType> mSetMaterialType.GreaterAssemblyTypeIds
ArrayOf<CFactory.assemblyType>* mGetMaterialType.GreaterAssemblyTypeIds
ArrayOf<CFactory.greaterassemblyType> mSetMaterialType.ProductTypeIds
ArrayOf<CFactory.greaterassemblyType>* mGetMaterialType.ProductTypeIds
ArrayOf<CFactory.productType> mSetMaterialType.DocRefIds
ArrayOf<CFactory.productType>* mGetMaterialType.DocRefIds
ArrayOf<CAdministration.documents> mSetMaterialType.ImageRefIds
ArrayOf<CAdministration.documents>* mGetMaterialType.ImageRefIds
ArrayOf<CAdministration.images> mSetMaterialType.VideoRefIds
ArrayOf<CAdministration.images>* mGetMaterialType.VideoRefIds
ArrayOf<CAdministration.video> mSetPart.PartId
ArrayOf<CAdministration.video>* mGetPart.PartId
const String& mSetPart.Hazardous
String* mGetPart.Hazardous
Boolean mSetPart.PartName
Boolean* mGetPart.PartName
const String& mSetPart.PartDescription
String* mGetPart.PartDescription
const String& mSetPart.QCCheckedPassed
String* mGetPart.QCCheckedPassed
Boolean mSetPart.BusinessChannelOwnerId
Boolean* mGetPart.BusinessChannelOwnerId
CRegister.businessChannelOwner mSetPart.MaterialIds
CRegister.businessChannelOwner* mGetPart.MaterialIds
ArrayOf<CFactory.material> mSetPart.PartTypeId
ArrayOf<CFactory.material>* mGetPart.PartTypeId
CFactory.partType mSetPart.ItemId
CFactory.partType* mGetPart.ItemId
CAdministration.item mSetPart.SupplierIds
CAdministration.item* mGetPart.SupplierIds
ArrayOf<CSupplier.supplier> mSetPart.MinorSubAssemblyId
ArrayOf<CSupplier.supplier>* mGetPart.MinorSubAssemblyId
CFactory.minorsubassembly mSetPart.SubAssemblyId
CFactory.minorsubassembly* mGetPart.SubAssemblyId
CFactory.subassembly mSetPart.MajorSubAssemblyId
CFactory.subassembly* mGetPart.MajorSubAssemblyId
CFactory.majorsubassembly mSetPart.LesserAssemblyId
CFactory.majorsubassembly* mGetPart.LesserAssemblyId
CFactory.lesserassembly mSetPart.AssemblyId
CFactory.lesserassembly* mGetPart.AssemblyId
CFactory.assembly mSetPart.GreaterAssemblyId
CFactory.assembly* mGetPart.GreaterAssemblyId
CFactory.greaterassembly mSetPart.ProductId
CFactory.greaterassembly* mGetPart.ProductId
CFactory.product mSetPart.DocRefIds
CFactory.product* mGetPart.DocRefIds
ArrayOf<CAdministration.documents> mSetPart.ImageRefIds
ArrayOf<CAdministration.documents>* mGetPart.ImageRefIds
ArrayOf<CAdministration.images> mSetPart.VideoRefIds
ArrayOf<CAdministration.images>* mGetPart.VideoRefIds
ArrayOf<CAdministration.video> mSetPartType.PartTypeId
ArrayOf<CAdministration.video>* mGetPartType.PartTypeId
const String& mSetPartType.PartDescription
String* mGetPartType.PartDescription
const String& mSetPartType.PartCode
String* mGetPartType.PartCode
const String& mSetPartType.Corrosiveness
String* mGetPartType.Corrosiveness
CHelper.corrosiveness mSetPartType.Toxicity
CHelper.corrosiveness* mGetPartType.Toxicity
CHelper.toxicity mSetPartType.Fragility
CHelper.toxicity* mGetPartType.Fragility
CHelper.fragility mSetPartType.PhysicalStateWhenIdle
CHelper.fragility* mGetPartType.PhysicalStateWhenIdle
CHelper.physicalStateWhenIdle mSetPartType.RemainingNum
CHelper.physicalStateWhenIdle* mGetPartType.RemainingNum
Int32 mSetPartType.PartReorderCode
Int32* mGetPartType.PartReorderCode
Int32 mSetPartType.BusinessChannelOwnerId
Int32* mGetPartType.BusinessChannelOwnerId
const String& mSetPartType.ItemTypeId
String* mGetPartType.ItemTypeId
CRegister.businessChannelOwner mSetPartType.SupplierIds
CRegister.businessChannelOwner* mGetPartType.SupplierIds
CAdministration.itemType mSetPartType.MaterialTypeIds
CAdministration.itemType* mGetPartType.MaterialTypeIds
ArrayOf<CSupplier.supplier> mSetPartType.MinorSubAssemblyTypeIds
ArrayOf<CSupplier.supplier>* mGetPartType.MinorSubAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetPartType.SubAssemblyTypeIds
ArrayOf<CFactory.materialType>* mGetPartType.SubAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType> mSetPartType.MajorSubAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType>* mGetPartType.MajorSubAssemblyTypeIds
ArrayOf<CFactory.subassemblyType> mSetPartType.LesserAssemblyTypeIds
ArrayOf<CFactory.subassemblyType>* mGetPartType.LesserAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType> mSetPartType.AssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType>* mGetPartType.AssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType> mSetPartType.GreaterAssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType>* mGetPartType.GreaterAssemblyTypeIds
ArrayOf<CFactory.assemblyType> mSetPartType.ProductTypeIds
ArrayOf<CFactory.assemblyType>* mGetPartType.ProductTypeIds
ArrayOf<CFactory.greaterassemblyType> mSetPartType.DocRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetPartType.DocRefIds
ArrayOf<CFactory.productType> mSetPartType.ImageRefIds
ArrayOf<CFactory.productType>* mGetPartType.ImageRefIds
ArrayOf<CAdministration.documents> mSetPartType.VideoRefIds
ArrayOf<CAdministration.documents>* mGetPartType.VideoRefIds
ArrayOf<CAdministration.images> mSetMinorSubAssembly.MinorSubAssyId
ArrayOf<CAdministration.images>* mGetMinorSubAssembly.MinorSubAssyId
ArrayOf<CAdministration.video> mSetMinorSubAssembly.Hazardous
ArrayOf<CAdministration.video>* mGetMinorSubAssembly.Hazardous
const String& mSetMinorSubAssembly.MinorSubAssemblyName
String* mGetMinorSubAssembly.MinorSubAssemblyName
Boolean mSetMinorSubAssembly.MinorSubAssemblyDescription
Boolean* mGetMinorSubAssembly.MinorSubAssemblyDescription
const String& mSetMinorSubAssembly.QCCheckedPassed
String* mGetMinorSubAssembly.QCCheckedPassed
const String& mSetMinorSubAssembly.BusinessChannelOwnerId
String* mGetMinorSubAssembly.BusinessChannelOwnerId
Boolean mSetMinorSubAssembly.MinorSubAssemblyTypeId
Boolean* mGetMinorSubAssembly.MinorSubAssemblyTypeId
CRegister.businessChannelOwner mSetMinorSubAssembly.ItemId
CRegister.businessChannelOwner* mGetMinorSubAssembly.ItemId
CFactory.minorsubassembly mSetMinorSubAssembly.SupplierIds
CFactory.minorsubassembly* mGetMinorSubAssembly.SupplierIds
CAdministration.item mSetMinorSubAssembly.MaterialIds
CAdministration.item* mGetMinorSubAssembly.MaterialIds
ArrayOf<CSupplier.supplier> mSetMinorSubAssembly.PartIds
ArrayOf<CSupplier.supplier>* mGetMinorSubAssembly.PartIds
ArrayOf<CFactory.material> mSetMinorSubAssembly.SubAssemblyId
ArrayOf<CFactory.material>* mGetMinorSubAssembly.SubAssemblyId
ArrayOf<CFactory.part> mSetMinorSubAssembly.MajorSubAssemblyId
ArrayOf<CFactory.part>* mGetMinorSubAssembly.MajorSubAssemblyId
CFactory.subassembly mSetMinorSubAssembly.LesserAssemblyId
CFactory.subassembly* mGetMinorSubAssembly.LesserAssemblyId
CFactory.majorsubassembly mSetMinorSubAssembly.AssemblyId
CFactory.majorsubassembly* mGetMinorSubAssembly.AssemblyId
CFactory.lesserassembly mSetMinorSubAssembly.GreaterAssemblyId
CFactory.lesserassembly* mGetMinorSubAssembly.GreaterAssemblyId
CFactory.assembly mSetMinorSubAssembly.ProductId
CFactory.assembly* mGetMinorSubAssembly.ProductId
CFactory.greaterassembly mSetMinorSubAssembly.DocRefIds
CFactory.greaterassembly* mGetMinorSubAssembly.DocRefIds
CFactory.product mSetMinorSubAssembly.ImageRefIds
CFactory.product* mGetMinorSubAssembly.ImageRefIds
ArrayOf<CAdministration.documents> mSetMinorSubAssembly.VideoRefIds
ArrayOf<CAdministration.documents>* mGetMinorSubAssembly.VideoRefIds
ArrayOf<CAdministration.images> mSetMinorSubAssemblyType.MinorSubAssemblyTypeId
ArrayOf<CAdministration.images>* mGetMinorSubAssemblyType.MinorSubAssemblyTypeId
ArrayOf<CAdministration.video> mSetMinorSubAssemblyType.MinorSubAssemblyDescription
ArrayOf<CAdministration.video>* mGetMinorSubAssemblyType.MinorSubAssemblyDescription
const String& mSetMinorSubAssemblyType.MinorSubAssemblyCode
String* mGetMinorSubAssemblyType.MinorSubAssemblyCode
const String& mSetMinorSubAssemblyType.Corrosiveness
String* mGetMinorSubAssemblyType.Corrosiveness
const String& mSetMinorSubAssemblyType.Toxicity
String* mGetMinorSubAssemblyType.Toxicity
CHelper.corrosiveness mSetMinorSubAssemblyType.Fragility
CHelper.corrosiveness* mGetMinorSubAssemblyType.Fragility
CHelper.toxicity mSetMinorSubAssemblyType.PhysicalStateWhenIdle
CHelper.toxicity* mGetMinorSubAssemblyType.PhysicalStateWhenIdle
CHelper.fragility mSetMinorSubAssemblyType.RemainingNum
CHelper.fragility* mGetMinorSubAssemblyType.RemainingNum
CHelper.physicalStateWhenIdle mSetMinorSubAssemblyType.MinorSubAssemblyReorderCode
CHelper.physicalStateWhenIdle* mGetMinorSubAssemblyType.MinorSubAssemblyReorderCode
Int32 mSetMinorSubAssemblyType.BusinessChannelOwnerId
Int32* mGetMinorSubAssemblyType.BusinessChannelOwnerId
Int32 mSetMinorSubAssemblyType.ItemTypeId
Int32* mGetMinorSubAssemblyType.ItemTypeId
const String& mSetMinorSubAssemblyType.SupplierIds
String* mGetMinorSubAssemblyType.SupplierIds
CRegister.businessChannelOwner mSetMinorSubAssemblyType.MaterialTypeIds
CRegister.businessChannelOwner* mGetMinorSubAssemblyType.MaterialTypeIds
CAdministration.itemType mSetMinorSubAssemblyType.PartTypeIds
CAdministration.itemType* mGetMinorSubAssemblyType.PartTypeIds
ArrayOf<CSupplier.supplier> mSetMinorSubAssemblyType.SubAssemblyTypeIds
ArrayOf<CSupplier.supplier>* mGetMinorSubAssemblyType.SubAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetMinorSubAssemblyType.MajorSubAssemblyTypeIds
ArrayOf<CFactory.materialType>* mGetMinorSubAssemblyType.MajorSubAssemblyTypeIds
ArrayOf<CFactory.partType> mSetMinorSubAssemblyType.LesserAssemblyTypeIds
ArrayOf<CFactory.partType>* mGetMinorSubAssemblyType.LesserAssemblyTypeIds
ArrayOf<CFactory.subassemblyType> mSetMinorSubAssemblyType.AssemblyTypeIds
ArrayOf<CFactory.subassemblyType>* mGetMinorSubAssemblyType.AssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType> mSetMinorSubAssemblyType.GreaterAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType>* mGetMinorSubAssemblyType.GreaterAssemblyTypeIds
ArrayOf<CFactory.lesserassemblyType> mSetMinorSubAssemblyType.ProductTypeIds
ArrayOf<CFactory.lesserassemblyType>* mGetMinorSubAssemblyType.ProductTypeIds
ArrayOf<CFactory.assemblyType> mSetMinorSubAssemblyType.DocRefIds
ArrayOf<CFactory.assemblyType>* mGetMinorSubAssemblyType.DocRefIds
ArrayOf<CFactory.greaterassemblyType> mSetMinorSubAssemblyType.ImageRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetMinorSubAssemblyType.ImageRefIds
ArrayOf<CFactory.productType> mSetMinorSubAssemblyType.VideoRefIds
ArrayOf<CFactory.productType>* mGetMinorSubAssemblyType.VideoRefIds
ArrayOf<CAdministration.documents> mSetSubAssembly.SubAssyId
ArrayOf<CAdministration.documents>* mGetSubAssembly.SubAssyId
ArrayOf<CAdministration.images> mSetSubAssembly.Hazardous
ArrayOf<CAdministration.images>* mGetSubAssembly.Hazardous
ArrayOf<CAdministration.video> mSetSubAssembly.SubAssemblyName
ArrayOf<CAdministration.video>* mGetSubAssembly.SubAssemblyName
const String& mSetSubAssembly.SubAssemblyDescription
String* mGetSubAssembly.SubAssemblyDescription
Boolean mSetSubAssembly.QCCheckedPassed
Boolean* mGetSubAssembly.QCCheckedPassed
const String& mSetSubAssembly.MaterialIds
String* mGetSubAssembly.MaterialIds
const String& mSetSubAssembly.PartIds
String* mGetSubAssembly.PartIds
Boolean mSetSubAssembly.MinorSubAssemblyIds
Boolean* mGetSubAssembly.MinorSubAssemblyIds
ArrayOf<CFactory.material> mSetSubAssembly.MajorSubAssemblyId
ArrayOf<CFactory.material>* mGetSubAssembly.MajorSubAssemblyId
ArrayOf<CFactory.part> mSetSubAssembly.LesserAssemblyId
ArrayOf<CFactory.part>* mGetSubAssembly.LesserAssemblyId
ArrayOf<CFactory.minorsubassembly> mSetSubAssembly.AssemblyId
ArrayOf<CFactory.minorsubassembly>* mGetSubAssembly.AssemblyId
CFactory.majorsubassembly mSetSubAssembly.GreaterAssemblyId
CFactory.majorsubassembly* mGetSubAssembly.GreaterAssemblyId
CFactory.lesserassembly mSetSubAssembly.ProductId
CFactory.lesserassembly* mGetSubAssembly.ProductId
CFactory.assembly mSetSubAssembly.BusinessChannelOwnerId
CFactory.assembly* mGetSubAssembly.BusinessChannelOwnerId
CFactory.greaterassembly mSetSubAssembly.SubAssemblyTypeId
CFactory.greaterassembly* mGetSubAssembly.SubAssemblyTypeId
CFactory.product mSetSubAssembly.ItemId
CFactory.product* mGetSubAssembly.ItemId
CRegister.businessChannelOwner mSetSubAssembly.SupplierIds
CRegister.businessChannelOwner* mGetSubAssembly.SupplierIds
CFactory.subassemblyType mSetSubAssembly.DocRefIds
CFactory.subassemblyType* mGetSubAssembly.DocRefIds
CAdministration.item mSetSubAssembly.ImageRefIds
CAdministration.item* mGetSubAssembly.ImageRefIds
ArrayOf<CSupplier.supplier> mSetSubAssembly.VideoRefIds
ArrayOf<CSupplier.supplier>* mGetSubAssembly.VideoRefIds
ArrayOf<CAdministration.documents> mSetSubAssemblyType.SubAssemblyTypeId
ArrayOf<CAdministration.documents>* mGetSubAssemblyType.SubAssemblyTypeId
ArrayOf<CAdministration.images> mSetSubAssemblyType.SubAssemblyCode
ArrayOf<CAdministration.images>* mGetSubAssemblyType.SubAssemblyCode
ArrayOf<CAdministration.video> mSetSubAssemblyType.SubAssemblyDescription
ArrayOf<CAdministration.video>* mGetSubAssemblyType.SubAssemblyDescription
const String& mSetSubAssemblyType.Corrosiveness
String* mGetSubAssemblyType.Corrosiveness
const String& mSetSubAssemblyType.Toxicity
String* mGetSubAssemblyType.Toxicity
const String& mSetSubAssemblyType.Fragility
String* mGetSubAssemblyType.Fragility
CHelper.corrosiveness mSetSubAssemblyType.PhysicalStateWhenIdle
CHelper.corrosiveness* mGetSubAssemblyType.PhysicalStateWhenIdle
CHelper.toxicity mSetSubAssemblyType.RemainingNum
CHelper.toxicity* mGetSubAssemblyType.RemainingNum
CHelper.fragility mSetSubAssemblyType.SubAssemblyReorderCode
CHelper.fragility* mGetSubAssemblyType.SubAssemblyReorderCode
CHelper.physicalStateWhenIdle mSetSubAssemblyType.BusinessChannelOwnerId
CHelper.physicalStateWhenIdle* mGetSubAssemblyType.BusinessChannelOwnerId
Int32 mSetSubAssemblyType.ItemTypeId
Int32* mGetSubAssemblyType.ItemTypeId
Int32 mSetSubAssemblyType.SupplierIds
Int32* mGetSubAssemblyType.SupplierIds
const String& mSetSubAssemblyType.MaterialTypeIds
String* mGetSubAssemblyType.MaterialTypeIds
CRegister.businessChannelOwner mSetSubAssemblyType.PartTypeId
CRegister.businessChannelOwner* mGetSubAssemblyType.PartTypeId
CAdministration.itemType mSetSubAssemblyType.MinorSubAssemblyTypeIds
CAdministration.itemType* mGetSubAssemblyType.MinorSubAssemblyTypeIds
ArrayOf<CSupplier.supplier> mSetSubAssemblyType.MajorSubAssemblyTypeIds
ArrayOf<CSupplier.supplier>* mGetSubAssemblyType.MajorSubAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetSubAssemblyType.LesserAssemblyTypeIds
ArrayOf<CFactory.materialType>* mGetSubAssemblyType.LesserAssemblyTypeIds
ArrayOf<CFactory.partType> mSetSubAssemblyType.AssemblyTypeIds
ArrayOf<CFactory.partType>* mGetSubAssemblyType.AssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType> mSetSubAssemblyType.GreaterAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType>* mGetSubAssemblyType.GreaterAssemblyTypeIds
ArrayOf<CFactory.majorsubassemblyType> mSetSubAssemblyType.ProductTypeIds
ArrayOf<CFactory.majorsubassemblyType>* mGetSubAssemblyType.ProductTypeIds
ArrayOf<CFactory.lesserassemblyType> mSetSubAssemblyType.DocRefIds
ArrayOf<CFactory.lesserassemblyType>* mGetSubAssemblyType.DocRefIds
ArrayOf<CFactory.assemblyType> mSetSubAssemblyType.ImageRefIds
ArrayOf<CFactory.assemblyType>* mGetSubAssemblyType.ImageRefIds
ArrayOf<CFactory.greaterassemblyType> mSetSubAssemblyType.VideoRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetSubAssemblyType.VideoRefIds
ArrayOf<CFactory.productType> mSetMajorSubAssembly.MajorSubAssyId
ArrayOf<CFactory.productType>* mGetMajorSubAssembly.MajorSubAssyId
ArrayOf<CAdministration.documents> mSetMajorSubAssembly.Hazardous
ArrayOf<CAdministration.documents>* mGetMajorSubAssembly.Hazardous
ArrayOf<CAdministration.images> mSetMajorSubAssembly.MajorSubAssemblyName
ArrayOf<CAdministration.images>* mGetMajorSubAssembly.MajorSubAssemblyName
ArrayOf<CAdministration.video> mSetMajorSubAssembly.MajorSubAssemblyDescription
ArrayOf<CAdministration.video>* mGetMajorSubAssembly.MajorSubAssemblyDescription
const String& mSetMajorSubAssembly.QCCheckedPassed
String* mGetMajorSubAssembly.QCCheckedPassed
Boolean mSetMajorSubAssembly.MajorSubAssemblyCode
Boolean* mGetMajorSubAssembly.MajorSubAssemblyCode
const String& mSetMajorSubAssembly.MaterialIds
String* mGetMajorSubAssembly.MaterialIds
const String& mSetMajorSubAssembly.PartIds
String* mGetMajorSubAssembly.PartIds
Boolean mSetMajorSubAssembly.MinorSubAssemblyIds
Boolean* mGetMajorSubAssembly.MinorSubAssemblyIds
const String& mSetMajorSubAssembly.SubAssemblyIds
String* mGetMajorSubAssembly.SubAssemblyIds
ArrayOf<CFactory.material> mSetMajorSubAssembly.LesserAssemblyId
ArrayOf<CFactory.material>* mGetMajorSubAssembly.LesserAssemblyId
ArrayOf<CFactory.part> mSetMajorSubAssembly.AssemblyId
ArrayOf<CFactory.part>* mGetMajorSubAssembly.AssemblyId
ArrayOf<CFactory.minorsubassembly> mSetMajorSubAssembly.GreaterAssembly
ArrayOf<CFactory.minorsubassembly>* mGetMajorSubAssembly.GreaterAssembly
ArrayOf<CFactory.subassembly> mSetMajorSubAssembly.ProductIds
ArrayOf<CFactory.subassembly>* mGetMajorSubAssembly.ProductIds
CFactory.lesserassembly mSetMajorSubAssembly.BusinessChannelOwnerId
CFactory.lesserassembly* mGetMajorSubAssembly.BusinessChannelOwnerId
CFactory.assembly mSetMajorSubAssembly.MajorSubAssemblyTypeId
CFactory.assembly* mGetMajorSubAssembly.MajorSubAssemblyTypeId
CFactory.greaterassembly mSetMajorSubAssembly.ItemId
CFactory.greaterassembly* mGetMajorSubAssembly.ItemId
CFactory.product mSetMajorSubAssembly.SupplierIds
CFactory.product* mGetMajorSubAssembly.SupplierIds
CRegister.businessChannelOwner mSetMajorSubAssembly.DocRefIds
CRegister.businessChannelOwner* mGetMajorSubAssembly.DocRefIds
CFactory.majorsubassemblyType mSetMajorSubAssembly.ImageRefIds
CFactory.majorsubassemblyType* mGetMajorSubAssembly.ImageRefIds
CAdministration.item mSetMajorSubAssembly.VideoRefIds
CAdministration.item* mGetMajorSubAssembly.VideoRefIds
ArrayOf<CSupplier.supplier> mSetMajorSubAssemblyType.MajorSubAssemblyTypeId
ArrayOf<CSupplier.supplier>* mGetMajorSubAssemblyType.MajorSubAssemblyTypeId
ArrayOf<CAdministration.documents> mSetMajorSubAssemblyType.MajorSubAssemblyDescription
ArrayOf<CAdministration.documents>* mGetMajorSubAssemblyType.MajorSubAssemblyDescription
ArrayOf<CAdministration.images> mSetMajorSubAssemblyType.Corrosiveness
ArrayOf<CAdministration.images>* mGetMajorSubAssemblyType.Corrosiveness
ArrayOf<CAdministration.video> mSetMajorSubAssemblyType.Toxicity
ArrayOf<CAdministration.video>* mGetMajorSubAssemblyType.Toxicity
const String& mSetMajorSubAssemblyType.Fragility
String* mGetMajorSubAssemblyType.Fragility
const String& mSetMajorSubAssemblyType.PhysicalStateWhenIdle
String* mGetMajorSubAssemblyType.PhysicalStateWhenIdle
CHelper.corrosiveness mSetMajorSubAssemblyType.RemainingNum
CHelper.corrosiveness* mGetMajorSubAssemblyType.RemainingNum
CHelper.toxicity mSetMajorSubAssemblyType.MajorSubAssemblyReorderCode
CHelper.toxicity* mGetMajorSubAssemblyType.MajorSubAssemblyReorderCode
CHelper.fragility mSetMajorSubAssemblyType.MaterialTypeIds
CHelper.fragility* mGetMajorSubAssemblyType.MaterialTypeIds
CHelper.physicalStateWhenIdle mSetMajorSubAssemblyType.PartTypeId
CHelper.physicalStateWhenIdle* mGetMajorSubAssemblyType.PartTypeId
Int32 mSetMajorSubAssemblyType.MinorSubAssemblyTypeIds
Int32* mGetMajorSubAssemblyType.MinorSubAssemblyTypeIds
Int32 mSetMajorSubAssemblyType.SubAssemblyTypeIds
Int32* mGetMajorSubAssemblyType.SubAssemblyTypeIds
const String& mSetMajorSubAssemblyType.LesserAssemblyTypeIds
String* mGetMajorSubAssemblyType.LesserAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetMajorSubAssemblyType.AssemblyTypeIds
ArrayOf<CFactory.materialType>* mGetMajorSubAssemblyType.AssemblyTypeIds
ArrayOf<CFactory.partType> mSetMajorSubAssemblyType.GreaterAssemblyTypeIds
ArrayOf<CFactory.partType>* mGetMajorSubAssemblyType.GreaterAssemblyTypeIds
ArrayOf<CFactory.minorsubassemblyType> mSetMajorSubAssemblyType.ProductTypeIds
ArrayOf<CFactory.minorsubassemblyType>* mGetMajorSubAssemblyType.ProductTypeIds
ArrayOf<CFactory.subassemblyType> mSetMajorSubAssemblyType.BusinessChannelOwnerId
ArrayOf<CFactory.subassemblyType>* mGetMajorSubAssemblyType.BusinessChannelOwnerId
ArrayOf<CFactory.lesserassemblyType> mSetMajorSubAssemblyType.ItemTypeId
ArrayOf<CFactory.lesserassemblyType>* mGetMajorSubAssemblyType.ItemTypeId
ArrayOf<CFactory.assemblyType> mSetMajorSubAssemblyType.SupplierIds
ArrayOf<CFactory.assemblyType>* mGetMajorSubAssemblyType.SupplierIds
ArrayOf<CFactory.greaterassemblyType> mSetMajorSubAssemblyType.DocRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetMajorSubAssemblyType.DocRefIds
ArrayOf<CFactory.productType> mSetMajorSubAssemblyType.ImageRefIds
ArrayOf<CFactory.productType>* mGetMajorSubAssemblyType.ImageRefIds
CRegister.businessChannelOwner mSetMajorSubAssemblyType.VideoRefIds
CRegister.businessChannelOwner* mGetMajorSubAssemblyType.VideoRefIds
CAdministration.itemType mSetLesserAssembly.LesserAssyId
CAdministration.itemType* mGetLesserAssembly.LesserAssyId
ArrayOf<CSupplier.supplier> mSetLesserAssembly.Hazardous
ArrayOf<CSupplier.supplier>* mGetLesserAssembly.Hazardous
ArrayOf<CAdministration.documents> mSetLesserAssembly.LesserAssemblyName
ArrayOf<CAdministration.documents>* mGetLesserAssembly.LesserAssemblyName
ArrayOf<CAdministration.images> mSetLesserAssembly.LesserAssemblyDescription
ArrayOf<CAdministration.images>* mGetLesserAssembly.LesserAssemblyDescription
ArrayOf<CAdministration.video> mSetLesserAssembly.QCCheckedPassed
ArrayOf<CAdministration.video>* mGetLesserAssembly.QCCheckedPassed
const String& mSetLesserAssembly.MaterialIds
String* mGetLesserAssembly.MaterialIds
Boolean mSetLesserAssembly.PartIds
Boolean* mGetLesserAssembly.PartIds
const String& mSetLesserAssembly.MinorSubAssemblyIds
String* mGetLesserAssembly.MinorSubAssemblyIds
const String& mSetLesserAssembly.SubAssemblyIds
String* mGetLesserAssembly.SubAssemblyIds
Boolean mSetLesserAssembly.MajorSubAssemblyIds
Boolean* mGetLesserAssembly.MajorSubAssemblyIds
ArrayOf<CFactory.material> mSetLesserAssembly.AssemblyId
ArrayOf<CFactory.material>* mGetLesserAssembly.AssemblyId
ArrayOf<CFactory.part> mSetLesserAssembly.GreaterAssemblyId
ArrayOf<CFactory.part>* mGetLesserAssembly.GreaterAssemblyId
ArrayOf<CFactory.minorsubassembly> mSetLesserAssembly.LesserAssemblyTypeId
ArrayOf<CFactory.minorsubassembly>* mGetLesserAssembly.LesserAssemblyTypeId
ArrayOf<CFactory.subassembly> mSetLesserAssembly.ProductId
ArrayOf<CFactory.subassembly>* mGetLesserAssembly.ProductId
ArrayOf<CFactory.majorsubassembly> mSetLesserAssembly.BusinessChannelOwnerId
ArrayOf<CFactory.majorsubassembly>* mGetLesserAssembly.BusinessChannelOwnerId
CFactory.assembly mSetLesserAssembly.ItemId
CFactory.assembly* mGetLesserAssembly.ItemId
CFactory.greaterassembly mSetLesserAssembly.SupplierIds
CFactory.greaterassembly* mGetLesserAssembly.SupplierIds
CFactory.lesserassemblyType mSetLesserAssembly.DocRefIds
CFactory.lesserassemblyType* mGetLesserAssembly.DocRefIds
CFactory.product mSetLesserAssembly.ImageRefIds
CFactory.product* mGetLesserAssembly.ImageRefIds
CRegister.businessChannelOwner mSetLesserAssembly.VideoRefIds
CRegister.businessChannelOwner* mGetLesserAssembly.VideoRefIds
CAdministration.item mSetLesserAssemblyType.LesserAssemblyTypeId
CAdministration.item* mGetLesserAssemblyType.LesserAssemblyTypeId
ArrayOf<CSupplier.supplier> mSetLesserAssemblyType.LesseAssemblyDescription
ArrayOf<CSupplier.supplier>* mGetLesserAssemblyType.LesseAssemblyDescription
ArrayOf<CAdministration.documents> mSetLesserAssemblyType.LesserAssemblyCode
ArrayOf<CAdministration.documents>* mGetLesserAssemblyType.LesserAssemblyCode
ArrayOf<CAdministration.images> mSetLesserAssemblyType.Corrosiveness
ArrayOf<CAdministration.images>* mGetLesserAssemblyType.Corrosiveness
ArrayOf<CAdministration.video> mSetLesserAssemblyType.Toxicity
ArrayOf<CAdministration.video>* mGetLesserAssemblyType.Toxicity
const String& mSetLesserAssemblyType.Fragility
String* mGetLesserAssemblyType.Fragility
const String& mSetLesserAssemblyType.PhysicalStateWhenIdle
String* mGetLesserAssemblyType.PhysicalStateWhenIdle
const String& mSetLesserAssemblyType.RemainingNum
String* mGetLesserAssemblyType.RemainingNum
CHelper.corrosiveness mSetLesserAssemblyType.LesserAssemblyReorderCode
CHelper.corrosiveness* mGetLesserAssemblyType.LesserAssemblyReorderCode
CHelper.toxicity mSetLesserAssemblyType.MaterialTypeIds
CHelper.toxicity* mGetLesserAssemblyType.MaterialTypeIds
CHelper.fragility mSetLesserAssemblyType.PartTypeId
CHelper.fragility* mGetLesserAssemblyType.PartTypeId
CHelper.physicalStateWhenIdle mSetLesserAssemblyType.MinorSubAssemblyTypeIds
CHelper.physicalStateWhenIdle* mGetLesserAssemblyType.MinorSubAssemblyTypeIds
Int32 mSetLesserAssemblyType.SubAssemblyTypeIds
Int32* mGetLesserAssemblyType.SubAssemblyTypeIds
Int32 mSetLesserAssemblyType.MajorSubAssemblyTypeIds
Int32* mGetLesserAssemblyType.MajorSubAssemblyTypeIds
const String& mSetLesserAssemblyType.LesserAssemblyTypeIds
String* mGetLesserAssemblyType.LesserAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetLesserAssemblyType.GreaterAssemblyTypeIds
ArrayOf<CFactory.materialType>* mGetLesserAssemblyType.GreaterAssemblyTypeIds
ArrayOf<CFactory.partType> mSetLesserAssemblyType.ProductTypeIds
ArrayOf<CFactory.partType>* mGetLesserAssemblyType.ProductTypeIds
ArrayOf<CFactory.minorsubassemblyType> mSetLesserAssemblyType.BusinessChannelOwnerId
ArrayOf<CFactory.minorsubassemblyType>* mGetLesserAssemblyType.BusinessChannelOwnerId
ArrayOf<CFactory.subassemblyType> mSetLesserAssemblyType.ItemTypeId
ArrayOf<CFactory.subassemblyType>* mGetLesserAssemblyType.ItemTypeId
ArrayOf<CFactory.majorsubassemblyType> mSetLesserAssemblyType.SupplierIds
ArrayOf<CFactory.majorsubassemblyType>* mGetLesserAssemblyType.SupplierIds
ArrayOf<CFactory.lesserassemblyType> mSetLesserAssemblyType.DocRefIds
ArrayOf<CFactory.lesserassemblyType>* mGetLesserAssemblyType.DocRefIds
ArrayOf<CFactory.greaterassemblyType> mSetLesserAssemblyType.ImageRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetLesserAssemblyType.ImageRefIds
ArrayOf<CFactory.productType> mSetLesserAssemblyType.VideoRefIds
ArrayOf<CFactory.productType>* mGetLesserAssemblyType.VideoRefIds
CRegister.businessChannelOwner mSetAssembly.AssyId
CRegister.businessChannelOwner* mGetAssembly.AssyId
CAdministration.itemType mSetAssembly.Hazardous
CAdministration.itemType* mGetAssembly.Hazardous
ArrayOf<CSupplier.supplier> mSetAssembly.AssemblyName
ArrayOf<CSupplier.supplier>* mGetAssembly.AssemblyName
ArrayOf<CAdministration.documents> mSetAssembly.AssemblyDescription
ArrayOf<CAdministration.documents>* mGetAssembly.AssemblyDescription
ArrayOf<CAdministration.images> mSetAssembly.QCCheckedPassed
ArrayOf<CAdministration.images>* mGetAssembly.QCCheckedPassed
ArrayOf<CAdministration.video> mSetAssembly.MaterialIds
ArrayOf<CAdministration.video>* mGetAssembly.MaterialIds
const String& mSetAssembly.PartIds
String* mGetAssembly.PartIds
Boolean mSetAssembly.MinorSubAssemblyIds
Boolean* mGetAssembly.MinorSubAssemblyIds
const String& mSetAssembly.SubAssemblyIds
String* mGetAssembly.SubAssemblyIds
const String& mSetAssembly.MajorSubAssemblyIds
String* mGetAssembly.MajorSubAssemblyIds
Boolean mSetAssembly.LesserAssemblyIds
Boolean* mGetAssembly.LesserAssemblyIds
ArrayOf<CFactory.material> mSetAssembly.AssemblyTypeId
ArrayOf<CFactory.material>* mGetAssembly.AssemblyTypeId
ArrayOf<CFactory.part> mSetAssembly.GreaterAssemblyId
ArrayOf<CFactory.part>* mGetAssembly.GreaterAssemblyId
ArrayOf<CFactory.minorsubassembly> mSetAssembly.ProductId
ArrayOf<CFactory.minorsubassembly>* mGetAssembly.ProductId
ArrayOf<CFactory.subassembly> mSetAssembly.BusinessChannelOwnerId
ArrayOf<CFactory.subassembly>* mGetAssembly.BusinessChannelOwnerId
ArrayOf<CFactory.majorsubassembly> mSetAssembly.ItemId
ArrayOf<CFactory.majorsubassembly>* mGetAssembly.ItemId
ArrayOf<CFactory.lesserassembly> mSetAssembly.SupplierIds
ArrayOf<CFactory.lesserassembly>* mGetAssembly.SupplierIds
CFactory.assemblyType mSetAssembly.DocRefIds
CFactory.assemblyType* mGetAssembly.DocRefIds
CFactory.greaterassembly mSetAssembly.ImageRefIds
CFactory.greaterassembly* mGetAssembly.ImageRefIds
CFactory.product mSetAssembly.VideoRefIds
CFactory.product* mGetAssembly.VideoRefIds
CRegister.businessChannelOwner mSetAssemblyType.AssemblyTypeId
CRegister.businessChannelOwner* mGetAssemblyType.AssemblyTypeId
CAdministration.item mSetAssemblyType.AssemblyDescription
CAdministration.item* mGetAssemblyType.AssemblyDescription
ArrayOf<CSupplier.supplier> mSetAssemblyType.AssemblyCode
ArrayOf<CSupplier.supplier>* mGetAssemblyType.AssemblyCode
ArrayOf<CAdministration.documents> mSetAssemblyType.Corrosiveness
ArrayOf<CAdministration.documents>* mGetAssemblyType.Corrosiveness
ArrayOf<CAdministration.images> mSetAssemblyType.Toxicity
ArrayOf<CAdministration.images>* mGetAssemblyType.Toxicity
ArrayOf<CAdministration.video> mSetAssemblyType.Fragility
ArrayOf<CAdministration.video>* mGetAssemblyType.Fragility
const String& mSetAssemblyType.PhysicalStateWhenIdle
String* mGetAssemblyType.PhysicalStateWhenIdle
const String& mSetAssemblyType.RemainingNum
String* mGetAssemblyType.RemainingNum
const String& mSetAssemblyType.AssemblyReorderCode
String* mGetAssemblyType.AssemblyReorderCode
CHelper.corrosiveness mSetAssemblyType.MaterialTypeIds
CHelper.corrosiveness* mGetAssemblyType.MaterialTypeIds
CHelper.toxicity mSetAssemblyType.PartTypeId
CHelper.toxicity* mGetAssemblyType.PartTypeId
CHelper.fragility mSetAssemblyType.MinorSubAssemblyTypeIds
CHelper.fragility* mGetAssemblyType.MinorSubAssemblyTypeIds
CHelper.physicalStateWhenIdle mSetAssemblyType.SubAssemblyTypeIds
CHelper.physicalStateWhenIdle* mGetAssemblyType.SubAssemblyTypeIds
Int32 mSetAssemblyType.MajorSubAssemblyTypeIds
Int32* mGetAssemblyType.MajorSubAssemblyTypeIds
Int32 mSetAssemblyType.LesserAssemblyTypeIds
Int32* mGetAssemblyType.LesserAssemblyTypeIds
const String& mSetAssemblyType.GreaterAssemblyTypeIds
String* mGetAssemblyType.GreaterAssemblyTypeIds
ArrayOf<CFactory.materialType> mSetAssemblyType.ProductTypeIds
ArrayOf<CFactory.materialType>* mGetAssemblyType.ProductTypeIds
ArrayOf<CFactory.partType> mSetAssemblyType.BusinessChannelOwnerId
ArrayOf<CFactory.partType>* mGetAssemblyType.BusinessChannelOwnerId
ArrayOf<CFactory.minorsubassemblyType> mSetAssemblyType.ItemTypeId
ArrayOf<CFactory.minorsubassemblyType>* mGetAssemblyType.ItemTypeId
ArrayOf<CFactory.subassemblyType> mSetAssemblyType.SupplierIds
ArrayOf<CFactory.subassemblyType>* mGetAssemblyType.SupplierIds
ArrayOf<CFactory.majorsubassemblyType> mSetAssemblyType.DocRefIds
ArrayOf<CFactory.majorsubassemblyType>* mGetAssemblyType.DocRefIds
ArrayOf<CFactory.lesserassemblyType> mSetAssemblyType.ImageRefIds
ArrayOf<CFactory.lesserassemblyType>* mGetAssemblyType.ImageRefIds
ArrayOf<CFactory.greaterassemblyType> mSetAssemblyType.VideoRefIds
ArrayOf<CFactory.greaterassemblyType>* mGetAssemblyType.VideoRefIds
ArrayOf<CFactory.productType> mSetGreaterAssembly.GreaterAssyId
ArrayOf<CFactory.productType>* mGetGreaterAssembly.GreaterAssyId
CRegister.businessChannelOwner mSetGreaterAssembly.Hazardous
CRegister.businessChannelOwner* mGetGreaterAssembly.Hazardous
CAdministration.itemType mSetGreaterAssembly.GreaterAssemblyName
CAdministration.itemType* mGetGreaterAssembly.GreaterAssemblyName
ArrayOf<CSupplier.supplier> mSetGreaterAssembly.GreaterAssemblyDescription
ArrayOf<CSupplier.supplier>* mGetGreaterAssembly.GreaterAssemblyDescription
ArrayOf<CAdministration.documents> mSetGreaterAssembly.PhysicalStateWhenIdle
ArrayOf<CAdministration.documents>* mGetGreaterAssembly.PhysicalStateWhenIdle
ArrayOf<CAdministration.images> mSetGreaterAssembly.QCCheckedPassed
ArrayOf<CAdministration.images>* mGetGreaterAssembly.QCCheckedPassed
ArrayOf<CAdministration.video> mSetGreaterAssembly.GreaterAssemblyCode
ArrayOf<CAdministration.video>* mGetGreaterAssembly.GreaterAssemblyCode
const String& mSetGreaterAssembly.GreaterAssemblyReorderCode
String* mGetGreaterAssembly.GreaterAssemblyReorderCode
Boolean mSetGreaterAssembly.MaterialIds
Boolean* mGetGreaterAssembly.MaterialIds
const String& mSetGreaterAssembly.PartIds
String* mGetGreaterAssembly.PartIds
const String& mSetGreaterAssembly.MinorSubAssemblyIds
String* mGetGreaterAssembly.MinorSubAssemblyIds
CHelper.physicalStateWhenIdle mSetGreaterAssembly.SubAssemblyIds
CHelper.physicalStateWhenIdle* mGetGreaterAssembly.SubAssemblyIds
Boolean mSetGreaterAssembly.MajorSubAssemblyIds
Boolean* mGetGreaterAssembly.MajorSubAssemblyIds
const String& mSetGreaterAssembly.LesserAssemblyIds
String* mGetGreaterAssembly.LesserAssemblyIds
const String& mSetGreaterAssembly.AssemblyIds
String* mGetGreaterAssembly.AssemblyIds
Int32 mSetGreaterAssembly.GreaterAssemblyTypeId
Int32* mGetGreaterAssembly.GreaterAssemblyTypeId
ArrayOf<CFactory.material> mSetGreaterAssembly.ProductId
ArrayOf<CFactory.material>* mGetGreaterAssembly.ProductId
ArrayOf<CFactory.part> mSetGreaterAssembly.BusinessChannelOwnerId
ArrayOf<CFactory.part>* mGetGreaterAssembly.BusinessChannelOwnerId
ArrayOf<CFactory.minorsubassembly> mSetGreaterAssembly.ItemId
ArrayOf<CFactory.minorsubassembly>* mGetGreaterAssembly.ItemId
ArrayOf<CFactory.subassembly> mSetGreaterAssembly.SupplierIds
ArrayOf<CFactory.subassembly>* mGetGreaterAssembly.SupplierIds
ArrayOf<CFactory.majorsubassembly> mSetGreaterAssembly.DocRefIds
ArrayOf<CFactory.majorsubassembly>* mGetGreaterAssembly.DocRefIds
ArrayOf<CFactory.lesserassembly> mSetGreaterAssembly.ImageRefIds
ArrayOf<CFactory.lesserassembly>* mGetGreaterAssembly.ImageRefIds
ArrayOf<CFactory.assembly> mSetGreaterAssembly.VideoRefIds
ArrayOf<CFactory.assembly>* mGetGreaterAssembly.VideoRefIds
CFactory.greaterassemblyType mSetGreaterAssemblyType.GreaterAssemblyTypeId
CFactory.greaterassemblyType* mGetGreaterAssemblyType.GreaterAssemblyTypeId
CFactory.product mSetGreaterAssemblyType.GreaterAssemblyDescription
CFactory.product* mGetGreaterAssemblyType.GreaterAssemblyDescription
CRegister.businessChannelOwner mSetGreaterAssemblyType.GreaterAssemblyCode
CRegister.businessChannelOwner* mGetGreaterAssemblyType.GreaterAssemblyCode
CAdministration.item mSetGreaterAssemblyType.Corrosiveness
CAdministration.item* mGetGreaterAssemblyType.Corrosiveness
ArrayOf<CSupplier.supplier> mSetGreaterAssemblyType.Toxicity
ArrayOf<CSupplier.supplier>* mGetGreaterAssemblyType.Toxicity
ArrayOf<CAdministration.documents> mSetGreaterAssemblyType.Fragility
ArrayOf<CAdministration.documents>* mGetGreaterAssemblyType.Fragility
ArrayOf<CAdministration.images> mSetGreaterAssemblyType.PhysicalStateWhenIdle
ArrayOf<CAdministration.images>* mGetGreaterAssemblyType.PhysicalStateWhenIdle
ArrayOf<CAdministration.video> mSetGreaterAssemblyType.RemainingNum
ArrayOf<CAdministration.video>* mGetGreaterAssemblyType.RemainingNum
const String& mSetGreaterAssemblyType.GreaterAssemblyReorderCode
String* mGetGreaterAssemblyType.GreaterAssemblyReorderCode
const String& mSetGreaterAssemblyType.MaterialTypeIds
String* mGetGreaterAssemblyType.MaterialTypeIds
const String& mSetGreaterAssemblyType.PartTypeId
String* mGetGreaterAssemblyType.PartTypeId
CHelper.corrosiveness mSetGreaterAssemblyType.MinorSubAssemblyTypeIds
CHelper.corrosiveness* mGetGreaterAssemblyType.MinorSubAssemblyTypeIds
CHelper.toxicity mSetGreaterAssemblyType.SubAssemblyTypeIds
CHelper.toxicity* mGetGreaterAssemblyType.SubAssemblyTypeIds
CHelper.fragility mSetGreaterAssemblyType.MajorSubAssemblyTypeIds
CHelper.fragility* mGetGreaterAssemblyType.MajorSubAssemblyTypeIds
CHelper.physicalStateWhenIdle mSetGreaterAssemblyType.LesserAssemblyTypeIds
CHelper.physicalStateWhenIdle* mGetGreaterAssemblyType.LesserAssemblyTypeIds
Int32 mSetGreaterAssemblyType.AssemblyTypeIds
Int32* mGetGreaterAssemblyType.AssemblyTypeIds
Int32 mSetGreaterAssemblyType.ProductTypeIds
Int32* mGetGreaterAssemblyType.ProductTypeIds
const String& mSetGreaterAssemblyType.BusinessChannelOwnerId
String* mGetGreaterAssemblyType.BusinessChannelOwnerId
ArrayOf<CFactory.materialType> mSetGreaterAssemblyType.ItemTypeId
ArrayOf<CFactory.materialType>* mGetGreaterAssemblyType.ItemTypeId
ArrayOf<CFactory.partType> mSetGreaterAssemblyType.SupplierIds
ArrayOf<CFactory.partType>* mGetGreaterAssemblyType.SupplierIds
ArrayOf<CFactory.minorsubassemblyType> mSetGreaterAssemblyType.DocRefIds
ArrayOf<CFactory.minorsubassemblyType>* mGetGreaterAssemblyType.DocRefIds
ArrayOf<CFactory.subassemblyType> mSetGreaterAssemblyType.ImageRefIds
ArrayOf<CFactory.subassemblyType>* mGetGreaterAssemblyType.ImageRefIds
ArrayOf<CFactory.majorsubassemblyType> mSetGreaterAssemblyType.VideoRefIds
ArrayOf<CFactory.majorsubassemblyType>* mGetGreaterAssemblyType.VideoRefIds
ArrayOf<CFactory.lesserassemblyType> mSetProduct.ProductId
ArrayOf<CFactory.lesserassemblyType>* mGetProduct.ProductId
ArrayOf<CFactory.assemblyType> mSetProduct.Hazardous
ArrayOf<CFactory.assemblyType>* mGetProduct.Hazardous
ArrayOf<CFactory.productType> mSetProduct.MasLedgeFinTxIds
ArrayOf<CFactory.productType>* mGetProduct.MasLedgeFinTxIds
CRegister.businessChannelOwner mSetProduct.MasLedgeFinTxNums
CRegister.businessChannelOwner* mGetProduct.MasLedgeFinTxNums
CAdministration.itemType mSetProduct.GenLedgeFinTxIds
CAdministration.itemType* mGetProduct.GenLedgeFinTxIds
ArrayOf<CSupplier.supplier> mSetProduct.GenLedgeFinTxNums
ArrayOf<CSupplier.supplier>* mGetProduct.GenLedgeFinTxNums
ArrayOf<CAdministration.documents> mSetProduct.ProductName
ArrayOf<CAdministration.documents>* mGetProduct.ProductName
ArrayOf<CAdministration.images> mSetProduct.ModelNumber
ArrayOf<CAdministration.images>* mGetProduct.ModelNumber
ArrayOf<CAdministration.video> mSetProduct.SerialNumber
ArrayOf<CAdministration.video>* mGetProduct.SerialNumber
const String& mSetProduct.QCCheckedPassed
String* mGetProduct.QCCheckedPassed
Boolean mSetProduct.BestBeforeDate
Boolean* mGetProduct.BestBeforeDate
ArrayOf<const String&> mSetProduct.BusinessChannelOwnerId
ArrayOf<String>* mGetProduct.BusinessChannelOwnerId
ArrayOf<Int32> mSetProduct.ProductTypeId
ArrayOf<Int32>* mGetProduct.ProductTypeId
ArrayOf<const String&> mSetProduct.ItemId
ArrayOf<String>* mGetProduct.ItemId
ArrayOf<Int32> mSetProduct.CustomerId
ArrayOf<Int32>* mGetProduct.CustomerId
const String& mSetProduct.DocRefIds
String* mGetProduct.DocRefIds
const String& mSetProduct.ImageRefIds
String* mGetProduct.ImageRefIds
const String& mSetProduct.VideoRefIds
String* mGetProduct.VideoRefIds
Boolean mSetProductType.ProductTypeId
Boolean* mGetProductType.ProductTypeId
const String& mSetProductType.ProductDescription
String* mGetProductType.ProductDescription
CRegister.businessChannelOwner mSetProductType.Corrosiveness
CRegister.businessChannelOwner* mGetProductType.Corrosiveness
CFactory.productType mSetProductType.Toxicity
CFactory.productType* mGetProductType.Toxicity
CAdministration.item mSetProductType.Fragility
CAdministration.item* mGetProductType.Fragility
CCustomer.customer mSetProductType.PhysicalStateWhenIdle
CCustomer.customer* mGetProductType.PhysicalStateWhenIdle
ArrayOf<CAdministration.documents> mSetProductType.RemainingNum
ArrayOf<CAdministration.documents>* mGetProductType.RemainingNum
ArrayOf<CAdministration.images> mSetProductType.LesserAssemblyReorderCode
ArrayOf<CAdministration.images>* mGetProductType.LesserAssemblyReorderCode
ArrayOf<CAdministration.video> mSetProductType.BusinessChannelOwnerId
ArrayOf<CAdministration.video>* mGetProductType.BusinessChannelOwnerId
const String& mSetProductType.ItemTypeId
String* mGetProductType.ItemTypeId
const String& mSetProductType.DocRefIds
String* mGetProductType.DocRefIds
CHelper.corrosiveness mSetProductType.ImageRefIds
CHelper.corrosiveness* mGetProductType.ImageRefIds
CHelper.toxicity mSetProductType.VideoRefIds
CHelper.toxicity* mGetProductType.VideoRefIds
CHelper.fragility mSetShipment.ShipmentId
CHelper.fragility* mGetShipment.ShipmentId
CHelper.physicalStateWhenIdle mSetShipment.DistributorId
CHelper.physicalStateWhenIdle* mGetShipment.DistributorId
Int32 mSetShipment.SalesOrderIds
Int32* mGetShipment.SalesOrderIds
Int32 mSetShipment.PurchaseOrderIds
Int32* mGetShipment.PurchaseOrderIds
const String& mSetShipment.ReceiverDeliveryAddress
String* mGetShipment.ReceiverDeliveryAddress
CRegister.businessChannelOwner mSetShipment.SenderSourceAddress
CRegister.businessChannelOwner* mGetShipment.SenderSourceAddress
CAdministration.itemType mSetShipment.ReceivedAtSourceTerminal
CAdministration.itemType* mGetShipment.ReceivedAtSourceTerminal
ArrayOf<CAdministration.documents> mSetShipment.TrackingNumber
ArrayOf<CAdministration.documents>* mGetShipment.TrackingNumber
ArrayOf<CAdministration.images> mSetShipment.TrackingURL
ArrayOf<CAdministration.images>* mGetShipment.TrackingURL
ArrayOf<CAdministration.video> mSetShipment.ETA
ArrayOf<CAdministration.video>* mGetShipment.ETA
const String& mSetShipment.JourneyPoints
String* mGetShipment.JourneyPoints
const String& mSetShipment.JourneyPointNames
String* mGetShipment.JourneyPointNames
ArrayOf<const String&> mSetShipment.DeliveredGPSLat
ArrayOf<String>* mGetShipment.DeliveredGPSLat
ArrayOf<const String&> mSetShipment.DeliveredGPSLong
ArrayOf<String>* mGetShipment.DeliveredGPSLong
ArrayOf<const String&> mSetShipment.DeliveryAddress
ArrayOf<String>* mGetShipment.DeliveryAddress
ArrayOf<const String&> mSetShipment.AddressesMatch
ArrayOf<String>* mGetShipment.AddressesMatch
const String& mSetShipment.BusinessChannelOwnerId
String* mGetShipment.BusinessChannelOwnerId
const String& mSetShipment.SupplierId
String* mGetShipment.SupplierId
const String& mSetShipment.SupplierTypeId
String* mGetShipment.SupplierTypeId
const String& mSetShipment.DocRefIds
String* mGetShipment.DocRefIds
ArrayOf<const String&> mSetShipment.DeliveryImageIds
ArrayOf<String>* mGetShipment.DeliveryImageIds
ArrayOf<const String&> mSetShipment.ItemIds
ArrayOf<String>* mGetShipment.ItemIds
Double mSetShipment.ItemTypeIds
Double* mGetShipment.ItemTypeIds
Double mSetShipment.CustomerId
Double* mGetShipment.CustomerId
const String& mSetShipment.NextDistributorId
String* mGetShipment.NextDistributorId
Boolean mSetShipment.ContinuationShipmentId
Boolean* mGetShipment.ContinuationShipmentId
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

