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


class CHelper
    : public Object
    , public ICH
    , public IComparable
{
public:
    CAR_INTERFACE_DECL()    // The class which implements a CAR interface requires macros CAR_INTERFACE_DECL/CAR_INTERFACE_IMPL.

    CHelper();               // If a member needs to be initialized, the constructor must be explicitly declared 

    virtual ~CHelper();

    CARAPI constructor();   // CAR constructor for subclass inheritance.

     // IComparable interface function
    //
    CARAPI CompareTo(
        /* [in] */ IInterface* another,
        /* [out, callee] */ Int32* result);

    // ICH interface function
    //
    $CARAPI

  CARAPI GetAusState(
   /* [out, callee] */ ArrayOf<String>* CHelper.ausState);

  CARAPI GetDayOfWeek(
   /* [out, callee] */ ArrayOf<String>* CHelper.dayOfWeek);

  CARAPI GetWeekDay(
   /* [out, callee] */ ArrayOf<String>* CHelper.weekDay);

  CARAPI GetMonth(
   /* [out, callee] */ ArrayOf<String>* CHelper.month);

  CARAPI GetThirtyOneDaymonth(
   /* [out, callee] */ ArrayOf<String>* CHelper.thirtyOneDaymonth);

  CARAPI GetThirtyDaymonth(
   /* [out, callee] */ ArrayOf<String>* CHelper.thirtyDaymonth);

  CARAPI GetTwentyEightDaymonth(
   /* [out, callee] */ ArrayOf<String>* CHelper.twentyEightDaymonth);

  CARAPI GetLeapmonth(
   /* [out, callee] */ ArrayOf<String>* CHelper.leapmonth);

  CARAPI GetRiskLikelihoodOfOccurrenceRating(
   /* [out, callee] */ ArrayOf<String>* CHelper.riskLikelihoodOfOccurrenceRating);

  CARAPI GetRiskConsequence(
   /* [out, callee] */ ArrayOf<String>* CHelper.riskConsequence);

  CARAPI GetResidualRiskLevel(
   /* [out, callee] */ ArrayOf<String>* CHelper.residualRiskLevel);

  CARAPI GetGovLevel(
   /* [out, callee] */ ArrayOf<String>* CHelper.govLevel);

  CARAPI GetPhysicalStateWhenIdle(
   /* [out, callee] */ ArrayOf<String>* CHelper.physicalStateWhenIdle);

  CARAPI GetFragility(
   /* [out, callee] */ ArrayOf<String>* CHelper.fragility);

  CARAPI GetToxicity(
   /* [out, callee] */ ArrayOf<String>* CHelper.toxicity);

  CARAPI GetCorrosiveness(
   /* [out, callee] */ ArrayOf<String>* CHelper.corrosiveness);

  CARAPI GetLedgerTitle(
   /* [out, callee] */ ArrayOf<String>* CHelper.ledgerTitle);

  CARAPI GetTaxCode(
   /* [out, callee] */ ArrayOf<String>* CHelper.taxCode);

  CARAPI GetRelationship(
   /* [out, callee] */ ArrayOf<String>* CHelper.relationship);

  CARAPI GetPropertyTradingBasis(
   /* [out, callee] */ ArrayOf<String>* CHelper.propertyTradingBasis);

  CARAPI GetAdvertisingMedium(
   /* [out, callee] */ ArrayOf<String>* CHelper.advertisingMedium);

  CARAPI GetAmenities(
   /* [out, callee] */ ArrayOf<String>* CHelper.amenities);

  CARAPI GetPropertyType(
   /* [out, callee] */ ArrayOf<String>* CHelper.propertyType);

  CARAPI GetBillingInterval(
   /* [out, callee] */ ArrayOf<String>* CHelper.billingInterval);

  CARAPI GetInspectionStatus(
   /* [out, callee] */ ArrayOf<String>* CHelper.inspectionStatus);

  CARAPI GetLeaseType(
   /* [out, callee] */ ArrayOf<String>* CHelper.leaseType);

  CARAPI GetLeaseArrangement(
   /* [out, callee] */ ArrayOf<String>* CHelper.leaseArrangement);

  CARAPI GetLeasingTerm(
   /* [out, callee] */ ArrayOf<String>* CHelper.leasingTerm);

  CARAPI GetInspectionTerm(
   /* [out, callee] */ ArrayOf<String>* CHelper.inspectionTerm);

protected:
    // Member variables
ArrayOf<String>* mGetAusState
ArrayOf<String>* mGetDayOfWeek
ArrayOf<String>* mGetWeekDay
ArrayOf<String>* mGetMonth
ArrayOf<String>* mGetThirtyOneDaymonth
ArrayOf<String>* mGetThirtyDaymonth
ArrayOf<String>* mGetTwentyEightDaymonth
ArrayOf<String>* mGetLeapmonth
ArrayOf<String>* mGetRiskLikelihoodOfOccurrenceRating
ArrayOf<String>* mGetRiskConsequence
ArrayOf<String>* mGetResidualRiskLevel
ArrayOf<String>* mGetGovLevel
ArrayOf<String>* mGetPhysicalStateWhenIdle
ArrayOf<String>* mGetFragility
ArrayOf<String>* mGetToxicity
ArrayOf<String>* mGetCorrosiveness
ArrayOf<String>* mGetLedgerTitle
ArrayOf<String>* mGetTaxCode
ArrayOf<String>* mGetRelationship
ArrayOf<String>* mGetPropertyTradingBasis
ArrayOf<String>* mGetAdvertisingMedium
ArrayOf<String>* mGetAmenities
ArrayOf<String>* mGetPropertyType
ArrayOf<String>* mGetBillingInterval
ArrayOf<String>* mGetInspectionStatus
ArrayOf<String>* mGetLeaseType
ArrayOf<String>* mGetLeaseArrangement
ArrayOf<String>* mGetLeasingTerm
ArrayOf<String>* mGetInspectionTerm
};

} // ChubbaMorris
} // Elastos

#endif //__CHUBBAMORRIS_CLASS_H__

