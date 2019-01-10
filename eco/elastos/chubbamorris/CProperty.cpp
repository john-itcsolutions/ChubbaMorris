#include "elastos/chubbamorris/CProperty.h"
#include <stdio.h>

using Elastos::Core::EIID_IComparable;

namespace Elastos {
namespace ChubbaMorris {

// The class which implements a CAR interface requires macros CAR_INTERFACE_IMPL/CAR_INTERFACE_IMPL
CAR_INTERFACE_IMPL(CProperty, Object, ICH, IComparable)

// Initialize member variables using member initialization lists.
CProperty::CProperty()
    : mSetProperty_PropertyId("String")
    , mGetProperty_PropertyId("String")
    , mSetProperty_PropertyAddressString("String")
    , mGetProperty_PropertyAddressString("String")
    , mSetProperty_UnitNumber("String")
    , mGetProperty_UnitNumber("String")
    , mSetProperty_StreetNumber("String")
    , mGetProperty_StreetNumber("String")
    , mSetProperty_StreetName("String")
    , mGetProperty_StreetName("String")
    , mSetProperty_SuburbTown("String")
    , mGetProperty_SuburbTown("String")
    , mSetProperty_Postcode(0)
    , mGetProperty_Postcode(0)
    , mSetProperty_State(ACT)
    , mGetProperty_State(ACT)
    , mSetProperty_EnvelopeGreetings("String")
    , mGetProperty_EnvelopeGreetings("String")
    , mSetProperty_CorrespondenceFolderDocRef("String")
    , mGetProperty_CorrespondenceFolderDocRef("String")
    , mSetProperty_StartDateLatestLease("String")
    , mGetProperty_StartDateLatestLease("String")
    , mSetProperty_EndDateLatestLease("String")
    , mGetProperty_EndDateLatestLease("String")
    , mSetProperty_Occupied(false)
    , mGetProperty_Occupied(false)
    , mSetProperty_LocalGovArea("String")
    , mGetProperty_LocalGovArea("String")
    , mSetProperty_Zoning("String")
    , mGetProperty_Zoning("String")
    , mSetProperty_Lot("String")
    , mGetProperty_Lot("String")
    , mSetProperty_DP("String")
    , mGetProperty_DP("String")
    , mSetProperty_SP("String")
    , mGetProperty_SP("String")
    , mSetProperty_DCPNum("String")
    , mGetProperty_DCPNum("String")
    , mSetProperty_Parish("String")
    , mGetProperty_Parish("String")
    , mSetProperty_Description("String")
    , mGetProperty_Description("String")
    , mSetProperty_Lon(0)
    , mGetProperty_Lon(0)
    , mSetProperty_Lat(0)
    , mGetProperty_Lat(0)
    , mSetProperty_Elevation(0)
    , mGetProperty_Elevation(0)
    , mSetProperty_Liens(false)
    , mGetProperty_Liens(false)
    , mSetProperty_NumBedrooms(0)
    , mGetProperty_NumBedrooms(0)
    , mSetProperty_NumEnsuites(0)
    , mGetProperty_NumEnsuites(0)
    , mSetProperty_NumBathrooms(0)
    , mGetProperty_NumBathrooms(0)
    , mSetProperty_NumStoreys(0)
    , mGetProperty_NumStoreys(0)
    , mSetProperty_Furnished(false)
    , mGetProperty_Furnished(false)
    , mSetProperty_ConstructionTypeName("String")
    , mGetProperty_ConstructionTypeName("String")
    , mSetProperty_FolioCertCopyDocRef("String")
    , mGetProperty_FolioCertCopyDocRef("String")
    , mSetProperty_CopyOfDepositedPlanDocRef("String")
    , mGetProperty_CopyOfDepositedPlanDocRef("String")
    , mSetProperty_CopiesOfLiensDocrefs(["String"])
    , mGetProperty_CopiesOfLiensDocrefs(["String"])
    , mSetProperty_CopyOfBuildingCertDocRef("String")
    , mGetProperty_CopyOfBuildingCertDocRef("String")
    , mSetProperty_CopyOfInsuranceCertDocRef("String")
    , mGetProperty_CopyOfInsuranceCertDocRef("String")
    , mSetProperty_FolderContainingWarrantiesDocRef("String")
    , mGetProperty_FolderContainingWarrantiesDocRef("String")
    , mSetProperty_CopyOfPlanningCertSection149DEPADocRef("String")
    , mGetProperty_CopyOfPlanningCertSection149DEPADocRef("String")
    , mSetProperty_CopyOfSection88GCertDocRef("String")
    , mGetProperty_CopyOfSection88GCertDocRef("String")
    , mSetProperty_FolderContainingAdditionalAnnexuresDocRef("String")
    , mGetProperty_FolderContainingAdditionalAnnexuresDocRef("String")
    , mSetProperty_FolderContainingAdditionalDisclosuresDocRef("String")
    , mGetProperty_FolderContainingAdditionalDisclosuresDocRef("String")
    , mSetProperty_CopyOfSurveyReportsDocRefs(["String"])
    , mGetProperty_CopyOfSurveyReportsDocRefs(["String"])
    , mSetProperty_DrainageDiagsSewerRefSheetsDocRefs(["String"])
    , mGetProperty_DrainageDiagsSewerRefSheetsDocRefs(["String"])
    , mSetProperty_BuildingInspectionDocRefs(["String"])
    , mGetProperty_BuildingInspectionDocRefs(["String"])
    , mSetProperty_PestInspectionDocRefs(["String"])
    , mGetProperty_PestInspectionDocRefs(["String"])
    , mSetProperty_ProblemsWithPropertyDocRefs(["String"])
    , mGetProperty_ProblemsWithPropertyDocRefs(["String"])
    , mSetProperty_PropertyOwnerSharePercents([0])
    , mGetProperty_PropertyOwnerSharePercents([0])
    , mSetProperty_CapitalValue(0)
    , mGetProperty_CapitalValue(0)
    , mSetProperty_FloorPrice(0)
    , mGetProperty_FloorPrice(0)
    , mSetProperty_LatestBuyOfferPrice(0)
    , mGetProperty_LatestBuyOfferPrice(0)
    , mSetProperty_LatestBuyOfferDateTime("String")
    , mGetProperty_LatestBuyOfferDateTime("String")
    , mSetProperty_LatestBuyOfferPriceAccepted(false)
    , mGetProperty_LatestBuyOfferPriceAccepted(false)
    , mSetProperty_LatestBuyOfferNotes(["String"])
    , mGetProperty_LatestBuyOfferNotes(["String"])
    , mSetProperty_RentalValue(0)
    , mGetProperty_RentalValue(0)
    , mSetProperty_LandTotalSquareMetres(0)
    , mGetProperty_LandTotalSquareMetres(0)
    , mSetProperty_LandTotalHectares(0)
    , mGetProperty_LandTotalHectares(0)
    , mSetProperty_BuildingTotalSquareMetres(0)
    , mGetProperty_BuildingTotalSquareMetres(0)
    , mSetProperty_Amenities(["String"])
    , mGetProperty_Amenities(["String"])
    , mSetProperty_PropertyTradingBasis(Sale)
    , mGetProperty_PropertyTradingBasis(Sale)
    , mSetProperty_PropertyType(Apartment)
    , mGetProperty_PropertyType(Apartment)
    , mSetProperty_LeaseType(Hourly)
    , mGetProperty_LeaseType(Hourly)
    , mSetProperty_LeaseArrangement(Unitary)
    , mGetProperty_LeaseArrangement(Unitary)
    , mSetProperty_LeasingTerm(Hourly)
    , mGetProperty_LeasingTerm(Hourly)
    , mSetProperty_RentalPaymentInterval(Hourly)
    , mGetProperty_RentalPaymentInterval(Hourly)
    , mSetProperty_BusinessChannelOwnerId("String")
    , mGetProperty_BusinessChannelOwnerId("String")
    , mSetProperty_BranchId("String")
    , mGetProperty_BranchId("String")
    , mSetProperty_DeptId("String")
    , mGetProperty_DeptId("String")
    , mSetProperty_PropertyOwnerIds(["String"])
    , mGetProperty_PropertyOwnerIds(["String"])
    , mSetProperty_PropertyConstructionTypeId("String")
    , mGetProperty_PropertyConstructionTypeId("String")
    , mSetProperty_TenancyId("String")
    , mGetProperty_TenancyId("String")
    , mSetProperty_DocRefs(["String"])
    , mGetProperty_DocRefs(["String"])
    , mSetProperty_ImageRefs(["String"])
    , mGetProperty_ImageRefs(["String"])
    , mSetProperty_AudioRefIds(["String"])
    , mGetProperty_AudioRefIds(["String"])
    , mSetProperty_VideoRefs(["String"])
    , mGetProperty_VideoRefs(["String"])
    , mSetPropertyConstructionType_PropertyConstructionTypeId("String")
    , mGetPropertyConstructionType_PropertyConstructionTypeId("String")
    , mSetPropertyConstructionType_ConstructionTypeName("String")
    , mGetPropertyConstructionType_ConstructionTypeName("String")
    , mSetPropertyConstructionType_Description("String")
    , mGetPropertyConstructionType_Description("String")
    , mSetPropertyConstructionType_DocRefIds(["String"])
    , mGetPropertyConstructionType_DocRefIds(["String"])
    , mSetPropertyConstructionType_ImageRefIds(["String"])
    , mGetPropertyConstructionType_ImageRefIds(["String"])
    , mSetPropertyConstructionType_AudioRefIds(["String"])
    , mGetPropertyConstructionType_AudioRefIds(["String"])
    , mSetPropertyConstructionType_VideoRefIds(["String"])
    , mGetPropertyConstructionType_VideoRefIds(["String"])
    , mSetPropertyConstructionType_RiskIds(["String"])
    , mGetPropertyConstructionType_RiskIds(["String"])
    , mSetPropertyConstructionType_BusinessChannelOwnerId("String")
    , mGetPropertyConstructionType_BusinessChannelOwnerId("String")
    , mSetPropertyOwner_PropertyOwnerId("String")
    , mGetPropertyOwner_PropertyOwnerId("String")
    , mSetPropertyOwner_LinkedToThisCustomerId("String")
    , mGetPropertyOwner_LinkedToThisCustomerId("String")
    , mSetPropertyOwner_LinkedToThisSupplierId("String")
    , mGetPropertyOwner_LinkedToThisSupplierId("String")
    , mSetPropertyOwner_FirstName("String")
    , mGetPropertyOwner_FirstName("String")
    , mSetPropertyOwner_LastName("String")
    , mGetPropertyOwner_LastName("String")
    , mSetPropertyOwner_ResidentialAddress("String")
    , mGetPropertyOwner_ResidentialAddress("String")
    , mSetPropertyOwner_PostalAddress("String")
    , mGetPropertyOwner_PostalAddress("String")
    , mSetPropertyOwner_Email("String")
    , mGetPropertyOwner_Email("String")
    , mSetPropertyOwner_HomePhone(0)
    , mGetPropertyOwner_HomePhone(0)
    , mSetPropertyOwner_MobilePhone(0)
    , mGetPropertyOwner_MobilePhone(0)
    , mSetPropertyOwner_WorkPhone(0)
    , mGetPropertyOwner_WorkPhone(0)
    , mSetPropertyOwner_BankName("String")
    , mGetPropertyOwner_BankName("String")
    , mSetPropertyOwner_BankBSB(0)
    , mGetPropertyOwner_BankBSB(0)
    , mSetPropertyOwner_BankAccountNumber(0)
    , mGetPropertyOwner_BankAccountNumber(0)
    , mSetPropertyOwner_ContactedWithDetails(["String"])
    , mGetPropertyOwner_ContactedWithDetails(["String"])
    , mSetPropertyOwner_SharesPercents([0])
    , mGetPropertyOwner_SharesPercents([0])
    , mSetPropertyOwner_BusinessChannelOwnerId("String")
    , mGetPropertyOwner_BusinessChannelOwnerId("String")
    , mSetPropertyOwner_BranchId("String")
    , mGetPropertyOwner_BranchId("String")
    , mSetPropertyOwner_PropertyIds(["String"])
    , mGetPropertyOwner_PropertyIds(["String"])
    , mSetPropertyOwner_CustomerId("String")
    , mGetPropertyOwner_CustomerId("String")
    , mSetPropertyOwner_DocRefIds(["String"])
    , mGetPropertyOwner_DocRefIds(["String"])
    , mSetPropertyOwner_ImageRefIds(["String"])
    , mGetPropertyOwner_ImageRefIds(["String"])
    , mSetProgram_ProgramId("String")
    , mGetProgram_ProgramId("String")
    , mSetProgram_ProgramName("String")
    , mGetProgram_ProgramName("String")
    , mSetProgram_Description("String")
    , mGetProgram_Description("String")
    , mSetProgram_DocRefIds(["String"])
    , mGetProgram_DocRefIds(["String"])
    , mSetProgram_ImageRefIds(["String"])
    , mGetProgram_ImageRefIds(["String"])
    , mSetProgram_BusinessChannelOwnerId("String")
    , mGetProgram_BusinessChannelOwnerId("String")
    , mSetProgram_BranchId("String")
    , mGetProgram_BranchId("String")
    , mSetProgram_DeptId("String")
    , mGetProgram_DeptId("String")
    , mSetProject_ProjectId("String")
    , mGetProject_ProjectId("String")
    , mSetProject_ProjectName("String")
    , mGetProject_ProjectName("String")
    , mSetProject_Description("String")
    , mGetProject_Description("String")
    , mSetProject_DocRefIds(["String"])
    , mGetProject_DocRefIds(["String"])
    , mSetProject_ImageRefIds(["String"])
    , mGetProject_ImageRefIds(["String"])
    , mSetProject_BusinessChannelOwnerId("String")
    , mGetProject_BusinessChannelOwnerId("String")
    , mSetProject_BranchId("String")
    , mGetProject_BranchId("String")
    , mSetProject_DeptId("String")
    , mGetProject_DeptId("String")
    , mSetAdvertisingBudgetSchedule_AdvertScheduleId("String")
    , mGetAdvertisingBudgetSchedule_AdvertScheduleId("String")
    , mSetAdvertisingBudgetSchedule_AdvertisingMedium(Signage)
    , mGetAdvertisingBudgetSchedule_AdvertisingMedium(Signage)
    , mSetAdvertisingBudgetSchedule_PreviousSchedId("String")
    , mGetAdvertisingBudgetSchedule_PreviousSchedId("String")
    , mSetAdvertisingBudgetSchedule_month(Jan)
    , mGetAdvertisingBudgetSchedule_month(Jan)
    , mSetAdvertisingBudgetSchedule_BudgetedAmount(0)
    , mGetAdvertisingBudgetSchedule_BudgetedAmount(0)
    , mSetAdvertisingBudgetSchedule_RunDateTimes(["String"])
    , mGetAdvertisingBudgetSchedule_RunDateTimes(["String"])
    , mSetAdvertisingBudgetSchedule_PropertyId("String")
    , mGetAdvertisingBudgetSchedule_PropertyId("String")
    , mSetAdvertisingBudgetSchedule_PropertyOwnerIds(["String"])
    , mGetAdvertisingBudgetSchedule_PropertyOwnerIds(["String"])
    , mSetAdvertisingBudgetSchedule_AdvertDesignIds(["String"])
    , mGetAdvertisingBudgetSchedule_AdvertDesignIds(["String"])
    , mSetAdvertisingBudgetSchedule_BusinessChannelOwnerId("String")
    , mGetAdvertisingBudgetSchedule_BusinessChannelOwnerId("String")
    , mSetAdvertisingBudgetSchedule_BranchId("String")
    , mGetAdvertisingBudgetSchedule_BranchId("String")
    , mSetAdvertisingBudgetSchedule_DeptId("String")
    , mGetAdvertisingBudgetSchedule_DeptId("String")
    , mSetAllocation_AllocationId("String")
    , mGetAllocation_AllocationId("String")
    , mSetAllocation_ApplicationIds(["String"])
    , mGetAllocation_ApplicationIds(["String"])
    , mSetAllocation_DocRefs(["String"])
    , mGetAllocation_DocRefs(["String"])
    , mSetAllocation_Notes(["String"])
    , mGetAllocation_Notes(["String"])
    , mSetAllocation_DateOfEffect("String")
    , mGetAllocation_DateOfEffect("String")
    , mSetAllocation_PropertyId("String")
    , mGetAllocation_PropertyId("String")
    , mSetAllocation_SuccessfulApplicationId("String")
    , mGetAllocation_SuccessfulApplicationId("String")
    , mSetAllocation_SuccessfulTenancyId("String")
    , mGetAllocation_SuccessfulTenancyId("String")
    , mSetAllocation_BusinessChannelOwnerId("String")
    , mGetAllocation_BusinessChannelOwnerId("String")
    , mSetAllocation_BranchId("String")
    , mGetAllocation_BranchId("String")
    , mSetAllocation_DeptId("String")
    , mGetAllocation_DeptId("String")
    , mSetTenant_TenancyId("String")
    , mGetTenant_TenancyId("String")
    , mSetTenant_ABN("String")
    , mGetTenant_ABN("String")
    , mSetTenant_BusinessName("String")
    , mGetTenant_BusinessName("String")
    , mSetTenant_FirstName("String")
    , mGetTenant_FirstName("String")
    , mSetTenant_LastName("String")
    , mGetTenant_LastName("String")
    , mSetTenant_ResidentialAddress("String")
    , mGetTenant_ResidentialAddress("String")
    , mSetTenant_PostalAddress("String")
    , mGetTenant_PostalAddress("String")
    , mSetTenant_Email("String")
    , mGetTenant_Email("String")
    , mSetTenant_HomePhone(0)
    , mGetTenant_HomePhone(0)
    , mSetTenant_MobilePhone(0)
    , mGetTenant_MobilePhone(0)
    , mSetTenant_WorkPhone(0)
    , mGetTenant_WorkPhone(0)
    , mSetTenant_ContactedWithDetails(["String"])
    , mGetTenant_ContactedWithDetails(["String"])
    , mSetTenant_AllocationId("String")
    , mGetTenant_AllocationId("String")
    , mSetTenant_ApplicantIds(["String"])
    , mGetTenant_ApplicantIds(["String"])
    , mSetTenant_CustomerId("String")
    , mGetTenant_CustomerId("String")
    , mSetTenant_PropertyId("String")
    , mGetTenant_PropertyId("String")
    , mSetTenant_BranchId("String")
    , mGetTenant_BranchId("String")
    , mSetTenant_ChartOfAccountsId("String")
    , mGetTenant_ChartOfAccountsId("String")
    , mSetTenant_ChartOfClassesId("String")
    , mGetTenant_ChartOfClassesId("String")
    , mSetTenant_DocRefIds(["String"])
    , mGetTenant_DocRefIds(["String"])
    , mSetTenant_ImageRefIds(["String"])
    , mGetTenant_ImageRefIds(["String"])
    , mSetTenant_BusinessChannelOwnerId("String")
    , mGetTenant_BusinessChannelOwnerId("String")
    , mSetPropertyOwnerPropertyJoin_PropOwnerPropJoinId("String")
    , mGetPropertyOwnerPropertyJoin_PropOwnerPropJoinId("String")
    , mSetPropertyOwnerPropertyJoin_OwnershipPercentage(0)
    , mGetPropertyOwnerPropertyJoin_OwnershipPercentage(0)
    , mSetPropertyOwnerPropertyJoin_PropertyId("String")
    , mGetPropertyOwnerPropertyJoin_PropertyId("String")
    , mSetPropertyOwnerPropertyJoin_PropertyOwnerId("String")
    , mGetPropertyOwnerPropertyJoin_PropertyOwnerId("String")
    , mSetPropertyOwnerPropertyJoin_BusinessChannelOwnerId("String")
    , mGetPropertyOwnerPropertyJoin_BusinessChannelOwnerId("String")
    , mSetCustomerPropertyJoin_CustPropJoinId("String")
    , mGetCustomerPropertyJoin_CustPropJoinId("String")
    , mSetCustomerPropertyJoin_Relationship(Contact)
    , mGetCustomerPropertyJoin_Relationship(Contact)
    , mSetCustomerPropertyJoin_CustomerId("String")
    , mGetCustomerPropertyJoin_CustomerId("String")
    , mSetCustomerPropertyJoin_PropertyId("String")
    , mGetCustomerPropertyJoin_PropertyId("String")
    , mSetCustomerPropertyJoin_BusinessChannelOwnerId("String")
    , mGetCustomerPropertyJoin_BusinessChannelOwnerId("String")
    , mSetCustomerPropertyOwnerJoin_CustPropOwnerJoinId("String")
    , mGetCustomerPropertyOwnerJoin_CustPropOwnerJoinId("String")
    , mSetCustomerPropertyOwnerJoin_CustomerId("String")
    , mGetCustomerPropertyOwnerJoin_CustomerId("String")
    , mSetCustomerPropertyOwnerJoin_PropertyOwnerId("String")
    , mGetCustomerPropertyOwnerJoin_PropertyOwnerId("String")
    , mSetCustomerPropertyOwnerJoin_BusinessChannelOwnerId("String")
    , mGetCustomerPropertyOwnerJoin_BusinessChannelOwnerId("String")
    , mSetPropertyInspectionResidential_PropertyInspectionResId("String")
    , mGetPropertyInspectionResidential_PropertyInspectionResId("String")
    , mSetPropertyInspectionResidential_InspectionDates(["String"])
    , mGetPropertyInspectionResidential_InspectionDates(["String"])
    , mSetPropertyInspectionResidential_PropertyAddressString("String")
    , mGetPropertyInspectionResidential_PropertyAddressString("String")
    , mSetPropertyInspectionResidential_UnitNumber("String")
    , mGetPropertyInspectionResidential_UnitNumber("String")
    , mSetPropertyInspectionResidential_Bathroom(["String"])
    , mGetPropertyInspectionResidential_Bathroom(["String"])
    , mSetPropertyInspectionResidential_Bedroom(["String"])
    , mGetPropertyInspectionResidential_Bedroom(["String"])
    , mSetPropertyInspectionResidential_DiningRoom(["String"])
    , mGetPropertyInspectionResidential_DiningRoom(["String"])
    , mSetPropertyInspectionResidential_InternalDoorways(["String"])
    , mGetPropertyInspectionResidential_InternalDoorways(["String"])
    , mSetPropertyInspectionResidential_Driveways(["String"])
    , mGetPropertyInspectionResidential_Driveways(["String"])
    , mSetPropertyInspectionResidential_Ensuite(["String"])
    , mGetPropertyInspectionResidential_Ensuite(["String"])
    , mSetPropertyInspectionResidential_Entrance(["String"])
    , mGetPropertyInspectionResidential_Entrance(["String"])
    , mSetPropertyInspectionResidential_ExternalAreas(["String"])
    , mGetPropertyInspectionResidential_ExternalAreas(["String"])
    , mSetPropertyInspectionResidential_ExternalDoors(["String"])
    , mGetPropertyInspectionResidential_ExternalDoors(["String"])
    , mSetPropertyInspectionResidential_FamilyRoom(["String"])
    , mGetPropertyInspectionResidential_FamilyRoom(["String"])
    , mSetPropertyInspectionResidential_Fences(["String"])
    , mGetPropertyInspectionResidential_Fences(["String"])
    , mSetPropertyInspectionResidential_GarageCarport(["String"])
    , mGetPropertyInspectionResidential_GarageCarport(["String"])
    , mSetPropertyInspectionResidential_Gates(["String"])
    , mGetPropertyInspectionResidential_Gates(["String"])
    , mSetPropertyInspectionResidential_Gutterings(["String"])
    , mGetPropertyInspectionResidential_Gutterings(["String"])
    , mSetPropertyInspectionResidential_Hallway(["String"])
    , mGetPropertyInspectionResidential_Hallway(["String"])
    , mSetPropertyInspectionResidential_HotWater(["String"])
    , mGetPropertyInspectionResidential_HotWater(["String"])
    , mSetPropertyInspectionResidential_Kitchen(["String"])
    , mGetPropertyInspectionResidential_Kitchen(["String"])
    , mSetPropertyInspectionResidential_Laundry(["String"])
    , mGetPropertyInspectionResidential_Laundry(["String"])
    , mSetPropertyInspectionResidential_LetterBox(["String"])
    , mGetPropertyInspectionResidential_LetterBox(["String"])
    , mSetPropertyInspectionResidential_LivingRoom(["String"])
    , mGetPropertyInspectionResidential_LivingRoom(["String"])
    , mSetPropertyInspectionResidential_Notes(["String"])
    , mGetPropertyInspectionResidential_Notes(["String"])
    , mSetPropertyInspectionResidential_OtherItems(["String"])
    , mGetPropertyInspectionResidential_OtherItems(["String"])
    , mSetPropertyInspectionResidential_Pests(["String"])
    , mGetPropertyInspectionResidential_Pests(["String"])
    , mSetPropertyInspectionResidential_PetIssues(["String"])
    , mGetPropertyInspectionResidential_PetIssues(["String"])
    , mSetPropertyInspectionResidential_Plumbing(["String"])
    , mGetPropertyInspectionResidential_Plumbing(["String"])
    , mSetPropertyInspectionResidential_Pool(["String"])
    , mGetPropertyInspectionResidential_Pool(["String"])
    , mSetPropertyInspectionResidential_RecreationRoom(["String"])
    , mGetPropertyInspectionResidential_RecreationRoom(["String"])
    , mSetPropertyInspectionResidential_Roof(["String"])
    , mGetPropertyInspectionResidential_Roof(["String"])
    , mSetPropertyInspectionResidential_ScreenDoors(["String"])
    , mGetPropertyInspectionResidential_ScreenDoors(["String"])
    , mSetPropertyInspectionResidential_StructuralIntegrity(["String"])
    , mGetPropertyInspectionResidential_StructuralIntegrity(["String"])
    , mSetPropertyInspectionResidential_TennisCourt(["String"])
    , mGetPropertyInspectionResidential_TennisCourt(["String"])
    , mSetPropertyInspectionResidential_Toilet(["String"])
    , mGetPropertyInspectionResidential_Toilet(["String"])
    , mSetPropertyInspectionResidential_WiringElectrical(["String"])
    , mGetPropertyInspectionResidential_WiringElectrical(["String"])
    , mSetPropertyInspectionResidential_BusinessChannelOwnerId("String")
    , mGetPropertyInspectionResidential_BusinessChannelOwnerId("String")
    , mSetPropertyInspectionResidential_BranchId("String")
    , mGetPropertyInspectionResidential_BranchId("String")
    , mSetPropertyInspectionResidential_DeptId("String")
    , mGetPropertyInspectionResidential_DeptId("String")
    , mSetPropertyInspectionResidential_PropertyId("String")
    , mGetPropertyInspectionResidential_PropertyId("String")
    , mSetPropertyInspectionResidential_DocRefIds(["String"])
    , mGetPropertyInspectionResidential_DocRefIds(["String"])
    , mSetPropertyInspectionResidential_ImageRefIds(["String"])
    , mGetPropertyInspectionResidential_ImageRefIds(["String"])
    , mSetPropertyInspectionResidential_AudioRefIds(["String"])
    , mGetPropertyInspectionResidential_AudioRefIds(["String"])
    , mSetPropertyInspectionResidential_VideoRefIds(["String"])
    , mGetPropertyInspectionResidential_VideoRefIds(["String"])
    , mSetPropertyInspectionResidential_TenancyId("String")
    , mGetPropertyInspectionResidential_TenancyId("String")
    , mSetPropertyInspectionResidential_EmployeeIds(["String"])
    , mGetPropertyInspectionResidential_EmployeeIds(["String"])
    , mSetPropertyInspectionCommercial_PropertyInspectionCommercId("String")
    , mGetPropertyInspectionCommercial_PropertyInspectionCommercId("String")
    , mSetPropertyInspectionCommercial_InspectionDates(["String"])
    , mGetPropertyInspectionCommercial_InspectionDates(["String"])
    , mSetPropertyInspectionCommercial_PropertyAddressString("String")
    , mGetPropertyInspectionCommercial_PropertyAddressString("String")
    , mSetPropertyInspectionCommercial_UnitNumber("String")
    , mGetPropertyInspectionCommercial_UnitNumber("String")
    , mSetPropertyInspectionCommercial_AirConditioning(["String"])
    , mGetPropertyInspectionCommercial_AirConditioning(["String"])
    , mSetPropertyInspectionCommercial_DiningRoom(["String"])
    , mGetPropertyInspectionCommercial_DiningRoom(["String"])
    , mSetPropertyInspectionCommercial_InternalDoorways(["String"])
    , mGetPropertyInspectionCommercial_InternalDoorways(["String"])
    , mSetPropertyInspectionCommercial_Driveways(["String"])
    , mGetPropertyInspectionCommercial_Driveways(["String"])
    , mSetPropertyInspectionCommercial_Entrance(["String"])
    , mGetPropertyInspectionCommercial_Entrance(["String"])
    , mSetPropertyInspectionCommercial_ExternalAreas(["String"])
    , mGetPropertyInspectionCommercial_ExternalAreas(["String"])
    , mSetPropertyInspectionCommercial_ExternalDoors(["String"])
    , mGetPropertyInspectionCommercial_ExternalDoors(["String"])
    , mSetPropertyInspectionCommercial_FactorySpace(["String"])
    , mGetPropertyInspectionCommercial_FactorySpace(["String"])
    , mSetPropertyInspectionCommercial_Fences(["String"])
    , mGetPropertyInspectionCommercial_Fences(["String"])
    , mSetPropertyInspectionCommercial_GarageCarport(["String"])
    , mGetPropertyInspectionCommercial_GarageCarport(["String"])
    , mSetPropertyInspectionCommercial_Gates(["String"])
    , mGetPropertyInspectionCommercial_Gates(["String"])
    , mSetPropertyInspectionCommercial_Gutterings(["String"])
    , mGetPropertyInspectionCommercial_Gutterings(["String"])
    , mSetPropertyInspectionCommercial_Hallway(["String"])
    , mGetPropertyInspectionCommercial_Hallway(["String"])
    , mSetPropertyInspectionCommercial_Heating(["String"])
    , mGetPropertyInspectionCommercial_Heating(["String"])
    , mSetPropertyInspectionCommercial_HotWater(["String"])
    , mGetPropertyInspectionCommercial_HotWater(["String"])
    , mSetPropertyInspectionCommercial_Kitchen(["String"])
    , mGetPropertyInspectionCommercial_Kitchen(["String"])
    , mSetPropertyInspectionCommercial_Laundry(["String"])
    , mGetPropertyInspectionCommercial_Laundry(["String"])
    , mSetPropertyInspectionCommercial_Notes(["String"])
    , mGetPropertyInspectionCommercial_Notes(["String"])
    , mSetPropertyInspectionCommercial_OfficeSpace(["String"])
    , mGetPropertyInspectionCommercial_OfficeSpace(["String"])
    , mSetPropertyInspectionCommercial_ParkingSpaces(["String"])
    , mGetPropertyInspectionCommercial_ParkingSpaces(["String"])
    , mSetPropertyInspectionCommercial_OtherItems(["String"])
    , mGetPropertyInspectionCommercial_OtherItems(["String"])
    , mSetPropertyInspectionCommercial_Pests(["String"])
    , mGetPropertyInspectionCommercial_Pests(["String"])
    , mSetPropertyInspectionCommercial_OtherIssues(["String"])
    , mGetPropertyInspectionCommercial_OtherIssues(["String"])
    , mSetPropertyInspectionCommercial_Plumbing(["String"])
    , mGetPropertyInspectionCommercial_Plumbing(["String"])
    , mSetPropertyInspectionCommercial_RecreationRoom(["String"])
    , mGetPropertyInspectionCommercial_RecreationRoom(["String"])
    , mSetPropertyInspectionCommercial_RetailSpace(["String"])
    , mGetPropertyInspectionCommercial_RetailSpace(["String"])
    , mSetPropertyInspectionCommercial_Roof(["String"])
    , mGetPropertyInspectionCommercial_Roof(["String"])
    , mSetPropertyInspectionCommercial_ScreenDoors(["String"])
    , mGetPropertyInspectionCommercial_ScreenDoors(["String"])
    , mSetPropertyInspectionCommercial_StructuralIntegrity(["String"])
    , mGetPropertyInspectionCommercial_StructuralIntegrity(["String"])
    , mSetPropertyInspectionCommercial_Floors(["String"])
    , mGetPropertyInspectionCommercial_Floors(["String"])
    , mSetPropertyInspectionCommercial_Toilet(["String"])
    , mGetPropertyInspectionCommercial_Toilet(["String"])
    , mSetPropertyInspectionCommercial_VentilationIncludingFans(["String"])
    , mGetPropertyInspectionCommercial_VentilationIncludingFans(["String"])
    , mSetPropertyInspectionCommercial_WarehouseSpace(["String"])
    , mGetPropertyInspectionCommercial_WarehouseSpace(["String"])
    , mSetPropertyInspectionCommercial_Washroom(["String"])
    , mGetPropertyInspectionCommercial_Washroom(["String"])
    , mSetPropertyInspectionCommercial_WiringElectrical(["String"])
    , mGetPropertyInspectionCommercial_WiringElectrical(["String"])
    , mSetPropertyInspectionCommercial_BusinessChannelOwnerId("String")
    , mGetPropertyInspectionCommercial_BusinessChannelOwnerId("String")
    , mSetPropertyInspectionCommercial_BranchId("String")
    , mGetPropertyInspectionCommercial_BranchId("String")
    , mSetPropertyInspectionCommercial_DeptId("String")
    , mGetPropertyInspectionCommercial_DeptId("String")
    , mSetPropertyInspectionCommercial_PropertyId("String")
    , mGetPropertyInspectionCommercial_PropertyId("String")
    , mSetPropertyInspectionCommercial_TenancyId("String")
    , mGetPropertyInspectionCommercial_TenancyId("String")
    , mSetPropertyInspectionCommercial_EmployeeIds(["String"])
    , mGetPropertyInspectionCommercial_EmployeeIds(["String"])
    , mSetPropertyInspectionCommercial_DocRefIds(["String"])
    , mGetPropertyInspectionCommercial_DocRefIds(["String"])
    , mSetPropertyInspectionCommercial_ImageRefIds(["String"])
    , mGetPropertyInspectionCommercial_ImageRefIds(["String"])
    , mSetPropertyInspectionCommercial_AudioRefIds(["String"])
    , mGetPropertyInspectionCommercial_AudioRefIds(["String"])
    , mSetPropertyInspectionCommercial_VideoRefIds(["String"])
    , mGetPropertyInspectionCommercial_VideoRefIds(["String"])
    , mSetTenancyCaseManagement_TenancyCaseMngmntId("String")
    , mGetTenancyCaseManagement_TenancyCaseMngmntId("String")
    , mSetTenancyCaseManagement_SupervisorStaffId("String")
    , mGetTenancyCaseManagement_SupervisorStaffId("String")
    , mSetTenancyCaseManagement_TenantActionsInChronologicalOrder(["String"])
    , mGetTenancyCaseManagement_TenantActionsInChronologicalOrder(["String"])
    , mSetTenancyCaseManagement_DatesTimesOfEvents(["String"])
    , mGetTenancyCaseManagement_DatesTimesOfEvents(["String"])
    , mSetTenancyCaseManagement_OurResponsesInChronologicalOrder(["String"])
    , mGetTenancyCaseManagement_OurResponsesInChronologicalOrder(["String"])
    , mSetTenancyCaseManagement_DatesTimesOfResponses(["String"])
    , mGetTenancyCaseManagement_DatesTimesOfResponses(["String"])
    , mSetTenancyCaseManagement_Resolved(false)
    , mGetTenancyCaseManagement_Resolved(false)
    , mSetTenancyCaseManagement_BusinessChannelOwnerId("String")
    , mGetTenancyCaseManagement_BusinessChannelOwnerId("String")
    , mSetTenancyCaseManagement_PropertyId("String")
    , mGetTenancyCaseManagement_PropertyId("String")
    , mSetTenancyCaseManagement_BranchId("String")
    , mGetTenancyCaseManagement_BranchId("String")
    , mSetTenancyCaseManagement_TenancyId("String")
    , mGetTenancyCaseManagement_TenancyId("String")
    , mSetTenancyCaseManagement_CustomerIds(["String"])
    , mGetTenancyCaseManagement_CustomerIds(["String"])
    , mSetTenancyCaseManagement_EmployeeIds(["String"])
    , mGetTenancyCaseManagement_EmployeeIds(["String"])
    , mSetTenancyCaseManagement_DocRefIds(["String"])
    , mGetTenancyCaseManagement_DocRefIds(["String"])
    , mSetTenancyCaseManagement_ImageRefIds(["String"])
    , mGetTenancyCaseManagement_ImageRefIds(["String"])
    , 
{
}

CProperty::~CProperty()
{
    // 
}

ECode CProperty::constructor()
{
    return NOERROR;
}

ECode CProperty::CompareTo(
    /* [in] */ IInterface* another,
    /* [out] */ Int32* result)
{
    VALIDATE_NOT_NULL(result);

    ICProperty* oa = ICH::Probe(another);
    if (oa == NULL) {
        *result = 1;
        return E_CLASS_CAST_EXCEPTION;
    }

    CProperty* a = (CProperty*)oa;
    *result = mName.Compare(a->mName);
    return NOERROR;
}

   ECODE CProperty::SetProperty_PropertyId(
  /* [in] */ const String& property.propertyId);

{
   mProperty_PropertyId = property.propertyId;
   return NOERROR;
}

    ECODE CProperty::GetProperty_PropertyId(
  /* [out] */ String* property.propertyId);

{
   VALIDATE_NOT_NULL(property.propertyId)
   *property.propertyId = mProperty_PropertyId;
   return NOERROR;
}


   ECODE CProperty::SetProperty_PropertyAddressString(
  /* [in] */ const String& property.propertyAddressString);

{
   mProperty_PropertyAddressString = property.propertyAddressString;
   return NOERROR;
}

    ECODE CProperty::GetProperty_PropertyAddressString(
  /* [out] */ String* property.propertyAddressString);

{
   VALIDATE_NOT_NULL(property.propertyAddressString)
   *property.propertyAddressString = mProperty_PropertyAddressString;
   return NOERROR;
}


   ECODE CProperty::SetProperty_UnitNumber(
  /* [in] */ const String& property.unitNumber);

{
   mProperty_UnitNumber = property.unitNumber;
   return NOERROR;
}

    ECODE CProperty::GetProperty_UnitNumber(
  /* [out] */ String* property.unitNumber);

{
   VALIDATE_NOT_NULL(property.unitNumber)
   *property.unitNumber = mProperty_UnitNumber;
   return NOERROR;
}


   ECODE CProperty::SetProperty_StreetNumber(
  /* [in] */ const String& property.streetNumber);

{
   mProperty_StreetNumber = property.streetNumber;
   return NOERROR;
}

    ECODE CProperty::GetProperty_StreetNumber(
  /* [out] */ String* property.streetNumber);

{
   VALIDATE_NOT_NULL(property.streetNumber)
   *property.streetNumber = mProperty_StreetNumber;
   return NOERROR;
}


   ECODE CProperty::SetProperty_StreetName(
  /* [in] */ const String& property.streetName);

{
   mProperty_StreetName = property.streetName;
   return NOERROR;
}

    ECODE CProperty::GetProperty_StreetName(
  /* [out] */ String* property.streetName);

{
   VALIDATE_NOT_NULL(property.streetName)
   *property.streetName = mProperty_StreetName;
   return NOERROR;
}


   ECODE CProperty::SetProperty_SuburbTown(
  /* [in] */ const String& property.suburbTown);

{
   mProperty_SuburbTown = property.suburbTown;
   return NOERROR;
}

    ECODE CProperty::GetProperty_SuburbTown(
  /* [out] */ String* property.suburbTown);

{
   VALIDATE_NOT_NULL(property.suburbTown)
   *property.suburbTown = mProperty_SuburbTown;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Postcode(
  /* [in] */ Int32 property.postcode);

{
   mProperty_Postcode = property.postcode;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Postcode(
  /* [out] */ Int32* property.postcode);

{
   VALIDATE_NOT_NULL(property.postcode)
   *property.postcode = mProperty_Postcode;
   return NOERROR;
}


   ECODE CProperty::SetProperty_State(
  /* [in] */ CHelper.ausState property.state);

{
   mProperty_State = property.state;
   return NOERROR;
}

    ECODE CProperty::GetProperty_State(
  /* [out] */ CHelper.ausState* property.state);

{
   VALIDATE_NOT_NULL(property.state)
   *property.state = mProperty_State;
   return NOERROR;
}


   ECODE CProperty::SetProperty_EnvelopeGreetings(
  /* [in] */ const String& property.envelopeGreetings);

{
   mProperty_EnvelopeGreetings = property.envelopeGreetings;
   return NOERROR;
}

    ECODE CProperty::GetProperty_EnvelopeGreetings(
  /* [out] */ String* property.envelopeGreetings);

{
   VALIDATE_NOT_NULL(property.envelopeGreetings)
   *property.envelopeGreetings = mProperty_EnvelopeGreetings;
   return NOERROR;
}


   ECODE CProperty::SetProperty_CorrespondenceFolderDocRef(
  /* [in] */ const String& property.correspondenceFolderDocRef);

{
   mProperty_CorrespondenceFolderDocRef = property.correspondenceFolderDocRef;
   return NOERROR;
}

    ECODE CProperty::GetProperty_CorrespondenceFolderDocRef(
  /* [out] */ String* property.correspondenceFolderDocRef);

{
   VALIDATE_NOT_NULL(property.correspondenceFolderDocRef)
   *property.correspondenceFolderDocRef = mProperty_CorrespondenceFolderDocRef;
   return NOERROR;
}


   ECODE CProperty::SetProperty_StartDateLatestLease(
  /* [in] */ const String& property.startDateLatestLease);

{
   mProperty_StartDateLatestLease = property.startDateLatestLease;
   return NOERROR;
}

    ECODE CProperty::GetProperty_StartDateLatestLease(
  /* [out] */ String* property.startDateLatestLease);

{
   VALIDATE_NOT_NULL(property.startDateLatestLease)
   *property.startDateLatestLease = mProperty_StartDateLatestLease;
   return NOERROR;
}


   ECODE CProperty::SetProperty_EndDateLatestLease(
  /* [in] */ const String& property.endDateLatestLease);

{
   mProperty_EndDateLatestLease = property.endDateLatestLease;
   return NOERROR;
}

    ECODE CProperty::GetProperty_EndDateLatestLease(
  /* [out] */ String* property.endDateLatestLease);

{
   VALIDATE_NOT_NULL(property.endDateLatestLease)
   *property.endDateLatestLease = mProperty_EndDateLatestLease;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Occupied(
  /* [in] */ Boolean property.occupied);

{
   mProperty_Occupied = property.occupied;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Occupied(
  /* [out] */ Boolean* property.occupied);

{
   VALIDATE_NOT_NULL(property.occupied)
   *property.occupied = mProperty_Occupied;
   return NOERROR;
}


   ECODE CProperty::SetProperty_LocalGovArea(
  /* [in] */ const String& property.localGovArea);

{
   mProperty_LocalGovArea = property.localGovArea;
   return NOERROR;
}

    ECODE CProperty::GetProperty_LocalGovArea(
  /* [out] */ String* property.localGovArea);

{
   VALIDATE_NOT_NULL(property.localGovArea)
   *property.localGovArea = mProperty_LocalGovArea;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Zoning(
  /* [in] */ const String& property.zoning);

{
   mProperty_Zoning = property.zoning;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Zoning(
  /* [out] */ String* property.zoning);

{
   VALIDATE_NOT_NULL(property.zoning)
   *property.zoning = mProperty_Zoning;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Lot(
  /* [in] */ const String& property.lot);

{
   mProperty_Lot = property.lot;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Lot(
  /* [out] */ String* property.lot);

{
   VALIDATE_NOT_NULL(property.lot)
   *property.lot = mProperty_Lot;
   return NOERROR;
}


   ECODE CProperty::SetProperty_DP(
  /* [in] */ const String& property.dP);

{
   mProperty_DP = property.dP;
   return NOERROR;
}

    ECODE CProperty::GetProperty_DP(
  /* [out] */ String* property.dP);

{
   VALIDATE_NOT_NULL(property.dP)
   *property.dP = mProperty_DP;
   return NOERROR;
}


   ECODE CProperty::SetProperty_SP(
  /* [in] */ const String& property.sP);

{
   mProperty_SP = property.sP;
   return NOERROR;
}

    ECODE CProperty::GetProperty_SP(
  /* [out] */ String* property.sP);

{
   VALIDATE_NOT_NULL(property.sP)
   *property.sP = mProperty_SP;
   return NOERROR;
}


   ECODE CProperty::SetProperty_DCPNum(
  /* [in] */ const String& property.dCPNum);

{
   mProperty_DCPNum = property.dCPNum;
   return NOERROR;
}

    ECODE CProperty::GetProperty_DCPNum(
  /* [out] */ String* property.dCPNum);

{
   VALIDATE_NOT_NULL(property.dCPNum)
   *property.dCPNum = mProperty_DCPNum;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Parish(
  /* [in] */ const String& property.parish);

{
   mProperty_Parish = property.parish;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Parish(
  /* [out] */ String* property.parish);

{
   VALIDATE_NOT_NULL(property.parish)
   *property.parish = mProperty_Parish;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Description(
  /* [in] */ const String& property.description);

{
   mProperty_Description = property.description;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Description(
  /* [out] */ String* property.description);

{
   VALIDATE_NOT_NULL(property.description)
   *property.description = mProperty_Description;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Lon(
  /* [in] */ Double property.lon);

{
   mProperty_Lon = property.lon;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Lon(
  /* [out] */ Double* property.lon);

{
   VALIDATE_NOT_NULL(property.lon)
   *property.lon = mProperty_Lon;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Lat(
  /* [in] */ Double property.lat);

{
   mProperty_Lat = property.lat;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Lat(
  /* [out] */ Double* property.lat);

{
   VALIDATE_NOT_NULL(property.lat)
   *property.lat = mProperty_Lat;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Elevation(
  /* [in] */ Double property.elevation);

{
   mProperty_Elevation = property.elevation;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Elevation(
  /* [out] */ Double* property.elevation);

{
   VALIDATE_NOT_NULL(property.elevation)
   *property.elevation = mProperty_Elevation;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Liens(
  /* [in] */ Boolean property.liens);

{
   mProperty_Liens = property.liens;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Liens(
  /* [out] */ Boolean* property.liens);

{
   VALIDATE_NOT_NULL(property.liens)
   *property.liens = mProperty_Liens;
   return NOERROR;
}


   ECODE CProperty::SetProperty_NumBedrooms(
  /* [in] */ Int32 property.numBedrooms);

{
   mProperty_NumBedrooms = property.numBedrooms;
   return NOERROR;
}

    ECODE CProperty::GetProperty_NumBedrooms(
  /* [out] */ Int32* property.numBedrooms);

{
   VALIDATE_NOT_NULL(property.numBedrooms)
   *property.numBedrooms = mProperty_NumBedrooms;
   return NOERROR;
}


   ECODE CProperty::SetProperty_NumEnsuites(
  /* [in] */ Int32 property.numEnsuites);

{
   mProperty_NumEnsuites = property.numEnsuites;
   return NOERROR;
}

    ECODE CProperty::GetProperty_NumEnsuites(
  /* [out] */ Int32* property.numEnsuites);

{
   VALIDATE_NOT_NULL(property.numEnsuites)
   *property.numEnsuites = mProperty_NumEnsuites;
   return NOERROR;
}


   ECODE CProperty::SetProperty_NumBathrooms(
  /* [in] */ Int32 property.numBathrooms);

{
   mProperty_NumBathrooms = property.numBathrooms;
   return NOERROR;
}

    ECODE CProperty::GetProperty_NumBathrooms(
  /* [out] */ Int32* property.numBathrooms);

{
   VALIDATE_NOT_NULL(property.numBathrooms)
   *property.numBathrooms = mProperty_NumBathrooms;
   return NOERROR;
}


   ECODE CProperty::SetProperty_NumStoreys(
  /* [in] */ Int32 property.numStoreys);

{
   mProperty_NumStoreys = property.numStoreys;
   return NOERROR;
}

    ECODE CProperty::GetProperty_NumStoreys(
  /* [out] */ Int32* property.numStoreys);

{
   VALIDATE_NOT_NULL(property.numStoreys)
   *property.numStoreys = mProperty_NumStoreys;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Furnished(
  /* [in] */ Boolean property.furnished);

{
   mProperty_Furnished = property.furnished;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Furnished(
  /* [out] */ Boolean* property.furnished);

{
   VALIDATE_NOT_NULL(property.furnished)
   *property.furnished = mProperty_Furnished;
   return NOERROR;
}


   ECODE CProperty::SetProperty_ConstructionTypeName(
  /* [in] */ const String& property.constructionTypeName);

{
   mProperty_ConstructionTypeName = property.constructionTypeName;
   return NOERROR;
}

    ECODE CProperty::GetProperty_ConstructionTypeName(
  /* [out] */ String* property.constructionTypeName);

{
   VALIDATE_NOT_NULL(property.constructionTypeName)
   *property.constructionTypeName = mProperty_ConstructionTypeName;
   return NOERROR;
}


   ECODE CProperty::SetProperty_FolioCertCopyDocRef(
  /* [in] */ const String& property.folioCertCopyDocRef);

{
   mProperty_FolioCertCopyDocRef = property.folioCertCopyDocRef;
   return NOERROR;
}

    ECODE CProperty::GetProperty_FolioCertCopyDocRef(
  /* [out] */ String* property.folioCertCopyDocRef);

{
   VALIDATE_NOT_NULL(property.folioCertCopyDocRef)
   *property.folioCertCopyDocRef = mProperty_FolioCertCopyDocRef;
   return NOERROR;
}


   ECODE CProperty::SetProperty_CopyOfDepositedPlanDocRef(
  /* [in] */ const String& property.copyOfDepositedPlanDocRef);

{
   mProperty_CopyOfDepositedPlanDocRef = property.copyOfDepositedPlanDocRef;
   return NOERROR;
}

    ECODE CProperty::GetProperty_CopyOfDepositedPlanDocRef(
  /* [out] */ String* property.copyOfDepositedPlanDocRef);

{
   VALIDATE_NOT_NULL(property.copyOfDepositedPlanDocRef)
   *property.copyOfDepositedPlanDocRef = mProperty_CopyOfDepositedPlanDocRef;
   return NOERROR;
}


   ECODE CProperty::SetProperty_CopiesOfLiensDocrefs(
  /* [in] */ ArrayOf<const String&> property.copiesOfLiensDocrefs);

{
   mProperty_CopiesOfLiensDocrefs = property.copiesOfLiensDocrefs;
   return NOERROR;
}

    ECODE CProperty::GetProperty_CopiesOfLiensDocrefs(
     /* [out, callee] */ ArrayOf<String>* property.copiesOfLiensDocrefs);

{
   VALIDATE_NOT_NULL(property.copiesOfLiensDocrefs)
   *property.copiesOfLiensDocrefs = mProperty_CopiesOfLiensDocrefs;
   return NOERROR;
}


   ECODE CProperty::SetProperty_CopyOfBuildingCertDocRef(
  /* [in] */ const String& property.copyOfBuildingCertDocRef);

{
   mProperty_CopyOfBuildingCertDocRef = property.copyOfBuildingCertDocRef;
   return NOERROR;
}

    ECODE CProperty::GetProperty_CopyOfBuildingCertDocRef(
  /* [out] */ String* property.copyOfBuildingCertDocRef);

{
   VALIDATE_NOT_NULL(property.copyOfBuildingCertDocRef)
   *property.copyOfBuildingCertDocRef = mProperty_CopyOfBuildingCertDocRef;
   return NOERROR;
}


   ECODE CProperty::SetProperty_CopyOfInsuranceCertDocRef(
  /* [in] */ const String& property.copyOfInsuranceCertDocRef);

{
   mProperty_CopyOfInsuranceCertDocRef = property.copyOfInsuranceCertDocRef;
   return NOERROR;
}

    ECODE CProperty::GetProperty_CopyOfInsuranceCertDocRef(
  /* [out] */ String* property.copyOfInsuranceCertDocRef);

{
   VALIDATE_NOT_NULL(property.copyOfInsuranceCertDocRef)
   *property.copyOfInsuranceCertDocRef = mProperty_CopyOfInsuranceCertDocRef;
   return NOERROR;
}


   ECODE CProperty::SetProperty_FolderContainingWarrantiesDocRef(
  /* [in] */ const String& property.folderContainingWarrantiesDocRef);

{
   mProperty_FolderContainingWarrantiesDocRef = property.folderContainingWarrantiesDocRef;
   return NOERROR;
}

    ECODE CProperty::GetProperty_FolderContainingWarrantiesDocRef(
  /* [out] */ String* property.folderContainingWarrantiesDocRef);

{
   VALIDATE_NOT_NULL(property.folderContainingWarrantiesDocRef)
   *property.folderContainingWarrantiesDocRef = mProperty_FolderContainingWarrantiesDocRef;
   return NOERROR;
}


   ECODE CProperty::SetProperty_CopyOfPlanningCertSection149DEPADocRef(
  /* [in] */ const String& property.copyOfPlanningCertSection149DEPADocRef);

{
   mProperty_CopyOfPlanningCertSection149DEPADocRef = property.copyOfPlanningCertSection149DEPADocRef;
   return NOERROR;
}

    ECODE CProperty::GetProperty_CopyOfPlanningCertSection149DEPADocRef(
  /* [out] */ String* property.copyOfPlanningCertSection149DEPADocRef);

{
   VALIDATE_NOT_NULL(property.copyOfPlanningCertSection149DEPADocRef)
   *property.copyOfPlanningCertSection149DEPADocRef = mProperty_CopyOfPlanningCertSection149DEPADocRef;
   return NOERROR;
}


   ECODE CProperty::SetProperty_CopyOfSection88GCertDocRef(
  /* [in] */ const String& property.copyOfSection88GCertDocRef);

{
   mProperty_CopyOfSection88GCertDocRef = property.copyOfSection88GCertDocRef;
   return NOERROR;
}

    ECODE CProperty::GetProperty_CopyOfSection88GCertDocRef(
  /* [out] */ String* property.copyOfSection88GCertDocRef);

{
   VALIDATE_NOT_NULL(property.copyOfSection88GCertDocRef)
   *property.copyOfSection88GCertDocRef = mProperty_CopyOfSection88GCertDocRef;
   return NOERROR;
}


   ECODE CProperty::SetProperty_FolderContainingAdditionalAnnexuresDocRef(
  /* [in] */ const String& property.folderContainingAdditionalAnnexuresDocRef);

{
   mProperty_FolderContainingAdditionalAnnexuresDocRef = property.folderContainingAdditionalAnnexuresDocRef;
   return NOERROR;
}

    ECODE CProperty::GetProperty_FolderContainingAdditionalAnnexuresDocRef(
  /* [out] */ String* property.folderContainingAdditionalAnnexuresDocRef);

{
   VALIDATE_NOT_NULL(property.folderContainingAdditionalAnnexuresDocRef)
   *property.folderContainingAdditionalAnnexuresDocRef = mProperty_FolderContainingAdditionalAnnexuresDocRef;
   return NOERROR;
}


   ECODE CProperty::SetProperty_FolderContainingAdditionalDisclosuresDocRef(
  /* [in] */ const String& property.folderContainingAdditionalDisclosuresDocRef);

{
   mProperty_FolderContainingAdditionalDisclosuresDocRef = property.folderContainingAdditionalDisclosuresDocRef;
   return NOERROR;
}

    ECODE CProperty::GetProperty_FolderContainingAdditionalDisclosuresDocRef(
  /* [out] */ String* property.folderContainingAdditionalDisclosuresDocRef);

{
   VALIDATE_NOT_NULL(property.folderContainingAdditionalDisclosuresDocRef)
   *property.folderContainingAdditionalDisclosuresDocRef = mProperty_FolderContainingAdditionalDisclosuresDocRef;
   return NOERROR;
}


   ECODE CProperty::SetProperty_CopyOfSurveyReportsDocRefs(
  /* [in] */ ArrayOf<const String&> property.copyOfSurveyReportsDocRefs);

{
   mProperty_CopyOfSurveyReportsDocRefs = property.copyOfSurveyReportsDocRefs;
   return NOERROR;
}

    ECODE CProperty::GetProperty_CopyOfSurveyReportsDocRefs(
     /* [out, callee] */ ArrayOf<String>* property.copyOfSurveyReportsDocRefs);

{
   VALIDATE_NOT_NULL(property.copyOfSurveyReportsDocRefs)
   *property.copyOfSurveyReportsDocRefs = mProperty_CopyOfSurveyReportsDocRefs;
   return NOERROR;
}


   ECODE CProperty::SetProperty_DrainageDiagsSewerRefSheetsDocRefs(
  /* [in] */ ArrayOf<const String&> property.drainageDiagsSewerRefSheetsDocRefs);

{
   mProperty_DrainageDiagsSewerRefSheetsDocRefs = property.drainageDiagsSewerRefSheetsDocRefs;
   return NOERROR;
}

    ECODE CProperty::GetProperty_DrainageDiagsSewerRefSheetsDocRefs(
     /* [out, callee] */ ArrayOf<String>* property.drainageDiagsSewerRefSheetsDocRefs);

{
   VALIDATE_NOT_NULL(property.drainageDiagsSewerRefSheetsDocRefs)
   *property.drainageDiagsSewerRefSheetsDocRefs = mProperty_DrainageDiagsSewerRefSheetsDocRefs;
   return NOERROR;
}


   ECODE CProperty::SetProperty_BuildingInspectionDocRefs(
  /* [in] */ ArrayOf<const String&> property.buildingInspectionDocRefs);

{
   mProperty_BuildingInspectionDocRefs = property.buildingInspectionDocRefs;
   return NOERROR;
}

    ECODE CProperty::GetProperty_BuildingInspectionDocRefs(
     /* [out, callee] */ ArrayOf<String>* property.buildingInspectionDocRefs);

{
   VALIDATE_NOT_NULL(property.buildingInspectionDocRefs)
   *property.buildingInspectionDocRefs = mProperty_BuildingInspectionDocRefs;
   return NOERROR;
}


   ECODE CProperty::SetProperty_PestInspectionDocRefs(
  /* [in] */ ArrayOf<const String&> property.pestInspectionDocRefs);

{
   mProperty_PestInspectionDocRefs = property.pestInspectionDocRefs;
   return NOERROR;
}

    ECODE CProperty::GetProperty_PestInspectionDocRefs(
     /* [out, callee] */ ArrayOf<String>* property.pestInspectionDocRefs);

{
   VALIDATE_NOT_NULL(property.pestInspectionDocRefs)
   *property.pestInspectionDocRefs = mProperty_PestInspectionDocRefs;
   return NOERROR;
}


   ECODE CProperty::SetProperty_ProblemsWithPropertyDocRefs(
  /* [in] */ ArrayOf<const String&> property.problemsWithPropertyDocRefs);

{
   mProperty_ProblemsWithPropertyDocRefs = property.problemsWithPropertyDocRefs;
   return NOERROR;
}

    ECODE CProperty::GetProperty_ProblemsWithPropertyDocRefs(
     /* [out, callee] */ ArrayOf<String>* property.problemsWithPropertyDocRefs);

{
   VALIDATE_NOT_NULL(property.problemsWithPropertyDocRefs)
   *property.problemsWithPropertyDocRefs = mProperty_ProblemsWithPropertyDocRefs;
   return NOERROR;
}


   ECODE CProperty::SetProperty_PropertyOwnerSharePercents(
  /* [in] */ ArrayOf<Double> property.propertyOwnerSharePercents);

{
   mProperty_PropertyOwnerSharePercents = property.propertyOwnerSharePercents;
   return NOERROR;
}

    ECODE CProperty::GetProperty_PropertyOwnerSharePercents(
     /* [out, callee] */ ArrayOf<Double>* property.propertyOwnerSharePercents);

{
   VALIDATE_NOT_NULL(property.propertyOwnerSharePercents)
   *property.propertyOwnerSharePercents = mProperty_PropertyOwnerSharePercents;
   return NOERROR;
}


   ECODE CProperty::SetProperty_CapitalValue(
  /* [in] */ Double property.capitalValue);

{
   mProperty_CapitalValue = property.capitalValue;
   return NOERROR;
}

    ECODE CProperty::GetProperty_CapitalValue(
  /* [out] */ Double* property.capitalValue);

{
   VALIDATE_NOT_NULL(property.capitalValue)
   *property.capitalValue = mProperty_CapitalValue;
   return NOERROR;
}


   ECODE CProperty::SetProperty_FloorPrice(
  /* [in] */ Double property.floorPrice);

{
   mProperty_FloorPrice = property.floorPrice;
   return NOERROR;
}

    ECODE CProperty::GetProperty_FloorPrice(
  /* [out] */ Double* property.floorPrice);

{
   VALIDATE_NOT_NULL(property.floorPrice)
   *property.floorPrice = mProperty_FloorPrice;
   return NOERROR;
}


   ECODE CProperty::SetProperty_LatestBuyOfferPrice(
  /* [in] */ Double property.latestBuyOfferPrice);

{
   mProperty_LatestBuyOfferPrice = property.latestBuyOfferPrice;
   return NOERROR;
}

    ECODE CProperty::GetProperty_LatestBuyOfferPrice(
  /* [out] */ Double* property.latestBuyOfferPrice);

{
   VALIDATE_NOT_NULL(property.latestBuyOfferPrice)
   *property.latestBuyOfferPrice = mProperty_LatestBuyOfferPrice;
   return NOERROR;
}


   ECODE CProperty::SetProperty_LatestBuyOfferDateTime(
  /* [in] */ const String& property.latestBuyOfferDateTime);

{
   mProperty_LatestBuyOfferDateTime = property.latestBuyOfferDateTime;
   return NOERROR;
}

    ECODE CProperty::GetProperty_LatestBuyOfferDateTime(
  /* [out] */ String* property.latestBuyOfferDateTime);

{
   VALIDATE_NOT_NULL(property.latestBuyOfferDateTime)
   *property.latestBuyOfferDateTime = mProperty_LatestBuyOfferDateTime;
   return NOERROR;
}


   ECODE CProperty::SetProperty_LatestBuyOfferPriceAccepted(
  /* [in] */ Boolean property.latestBuyOfferPriceAccepted);

{
   mProperty_LatestBuyOfferPriceAccepted = property.latestBuyOfferPriceAccepted;
   return NOERROR;
}

    ECODE CProperty::GetProperty_LatestBuyOfferPriceAccepted(
  /* [out] */ Boolean* property.latestBuyOfferPriceAccepted);

{
   VALIDATE_NOT_NULL(property.latestBuyOfferPriceAccepted)
   *property.latestBuyOfferPriceAccepted = mProperty_LatestBuyOfferPriceAccepted;
   return NOERROR;
}


   ECODE CProperty::SetProperty_LatestBuyOfferNotes(
  /* [in] */ ArrayOf<const String&> property.latestBuyOfferNotes);

{
   mProperty_LatestBuyOfferNotes = property.latestBuyOfferNotes;
   return NOERROR;
}

    ECODE CProperty::GetProperty_LatestBuyOfferNotes(
     /* [out, callee] */ ArrayOf<String>* property.latestBuyOfferNotes);

{
   VALIDATE_NOT_NULL(property.latestBuyOfferNotes)
   *property.latestBuyOfferNotes = mProperty_LatestBuyOfferNotes;
   return NOERROR;
}


   ECODE CProperty::SetProperty_RentalValue(
  /* [in] */ Double property.rentalValue);

{
   mProperty_RentalValue = property.rentalValue;
   return NOERROR;
}

    ECODE CProperty::GetProperty_RentalValue(
  /* [out] */ Double* property.rentalValue);

{
   VALIDATE_NOT_NULL(property.rentalValue)
   *property.rentalValue = mProperty_RentalValue;
   return NOERROR;
}


   ECODE CProperty::SetProperty_LandTotalSquareMetres(
  /* [in] */ Double property.landTotalSquareMetres);

{
   mProperty_LandTotalSquareMetres = property.landTotalSquareMetres;
   return NOERROR;
}

    ECODE CProperty::GetProperty_LandTotalSquareMetres(
  /* [out] */ Double* property.landTotalSquareMetres);

{
   VALIDATE_NOT_NULL(property.landTotalSquareMetres)
   *property.landTotalSquareMetres = mProperty_LandTotalSquareMetres;
   return NOERROR;
}


   ECODE CProperty::SetProperty_LandTotalHectares(
  /* [in] */ Double property.landTotalHectares);

{
   mProperty_LandTotalHectares = property.landTotalHectares;
   return NOERROR;
}

    ECODE CProperty::GetProperty_LandTotalHectares(
  /* [out] */ Double* property.landTotalHectares);

{
   VALIDATE_NOT_NULL(property.landTotalHectares)
   *property.landTotalHectares = mProperty_LandTotalHectares;
   return NOERROR;
}


   ECODE CProperty::SetProperty_BuildingTotalSquareMetres(
  /* [in] */ Double property.buildingTotalSquareMetres);

{
   mProperty_BuildingTotalSquareMetres = property.buildingTotalSquareMetres;
   return NOERROR;
}

    ECODE CProperty::GetProperty_BuildingTotalSquareMetres(
  /* [out] */ Double* property.buildingTotalSquareMetres);

{
   VALIDATE_NOT_NULL(property.buildingTotalSquareMetres)
   *property.buildingTotalSquareMetres = mProperty_BuildingTotalSquareMetres;
   return NOERROR;
}


   ECODE CProperty::SetProperty_Amenities(
  /* [in] */ ArrayOf<const String&> property.amenities);

{
   mProperty_Amenities = property.amenities;
   return NOERROR;
}

    ECODE CProperty::GetProperty_Amenities(
     /* [out, callee] */ ArrayOf<String>* property.amenities);

{
   VALIDATE_NOT_NULL(property.amenities)
   *property.amenities = mProperty_Amenities;
   return NOERROR;
}


   ECODE CProperty::SetProperty_PropertyTradingBasis(
  /* [in] */ CHelper.propertyTradingBasis property.propertyTradingBasis);

{
   mProperty_PropertyTradingBasis = property.propertyTradingBasis;
   return NOERROR;
}

    ECODE CProperty::GetProperty_PropertyTradingBasis(
  /* [out] */ CHelper.propertyTradingBasis* property.propertyTradingBasis);

{
   VALIDATE_NOT_NULL(property.propertyTradingBasis)
   *property.propertyTradingBasis = mProperty_PropertyTradingBasis;
   return NOERROR;
}


   ECODE CProperty::SetProperty_PropertyType(
  /* [in] */ CHelper.propertyType property.propertyType);

{
   mProperty_PropertyType = property.propertyType;
   return NOERROR;
}

    ECODE CProperty::GetProperty_PropertyType(
  /* [out] */ CHelper.propertyType* property.propertyType);

{
   VALIDATE_NOT_NULL(property.propertyType)
   *property.propertyType = mProperty_PropertyType;
   return NOERROR;
}


   ECODE CProperty::SetProperty_LeaseType(
  /* [in] */ CHelper.leaseType property.leaseType);

{
   mProperty_LeaseType = property.leaseType;
   return NOERROR;
}

    ECODE CProperty::GetProperty_LeaseType(
  /* [out] */ CHelper.leaseType* property.leaseType);

{
   VALIDATE_NOT_NULL(property.leaseType)
   *property.leaseType = mProperty_LeaseType;
   return NOERROR;
}


   ECODE CProperty::SetProperty_LeaseArrangement(
  /* [in] */ CHelper.leaseArrangement property.leaseArrangement);

{
   mProperty_LeaseArrangement = property.leaseArrangement;
   return NOERROR;
}

    ECODE CProperty::GetProperty_LeaseArrangement(
  /* [out] */ CHelper.leaseArrangement* property.leaseArrangement);

{
   VALIDATE_NOT_NULL(property.leaseArrangement)
   *property.leaseArrangement = mProperty_LeaseArrangement;
   return NOERROR;
}


   ECODE CProperty::SetProperty_LeasingTerm(
  /* [in] */ CHelper.leasingTerm property.leasingTerm);

{
   mProperty_LeasingTerm = property.leasingTerm;
   return NOERROR;
}

    ECODE CProperty::GetProperty_LeasingTerm(
  /* [out] */ CHelper.leasingTerm* property.leasingTerm);

{
   VALIDATE_NOT_NULL(property.leasingTerm)
   *property.leasingTerm = mProperty_LeasingTerm;
   return NOERROR;
}


   ECODE CProperty::SetProperty_RentalPaymentInterval(
  /* [in] */ CHelper.billingInterval property.rentalPaymentInterval);

{
   mProperty_RentalPaymentInterval = property.rentalPaymentInterval;
   return NOERROR;
}

    ECODE CProperty::GetProperty_RentalPaymentInterval(
  /* [out] */ CHelper.billingInterval* property.rentalPaymentInterval);

{
   VALIDATE_NOT_NULL(property.rentalPaymentInterval)
   *property.rentalPaymentInterval = mProperty_RentalPaymentInterval;
   return NOERROR;
}


   ECODE CProperty::SetProperty_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner property.businessChannelOwnerId);

{
   mProperty_BusinessChannelOwnerId = property.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetProperty_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* property.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(property.businessChannelOwnerId)
   *property.businessChannelOwnerId = mProperty_BusinessChannelOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetProperty_BranchId(
  /* [in] */ CAdministration.branch property.branchId);

{
   mProperty_BranchId = property.branchId;
   return NOERROR;
}

    ECODE CProperty::GetProperty_BranchId(
  /* [out] */ CAdministration.branch* property.branchId);

{
   VALIDATE_NOT_NULL(property.branchId)
   *property.branchId = mProperty_BranchId;
   return NOERROR;
}


   ECODE CProperty::SetProperty_DeptId(
  /* [in] */ CAdministration.department property.deptId);

{
   mProperty_DeptId = property.deptId;
   return NOERROR;
}

    ECODE CProperty::GetProperty_DeptId(
  /* [out] */ CAdministration.department* property.deptId);

{
   VALIDATE_NOT_NULL(property.deptId)
   *property.deptId = mProperty_DeptId;
   return NOERROR;
}


   ECODE CProperty::SetProperty_PropertyOwnerIds(
  /* [in] */ ArrayOf<propertyOwner> property.propertyOwnerIds);

{
   mProperty_PropertyOwnerIds = property.propertyOwnerIds;
   return NOERROR;
}

    ECODE CProperty::GetProperty_PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<propertyOwner>* property.propertyOwnerIds);

{
   VALIDATE_NOT_NULL(property.propertyOwnerIds)
   *property.propertyOwnerIds = mProperty_PropertyOwnerIds;
   return NOERROR;
}


   ECODE CProperty::SetProperty_PropertyConstructionTypeId(
  /* [in] */ propertyConstructionType property.propertyConstructionTypeId);

{
   mProperty_PropertyConstructionTypeId = property.propertyConstructionTypeId;
   return NOERROR;
}

    ECODE CProperty::GetProperty_PropertyConstructionTypeId(
  /* [out] */ propertyConstructionType* property.propertyConstructionTypeId);

{
   VALIDATE_NOT_NULL(property.propertyConstructionTypeId)
   *property.propertyConstructionTypeId = mProperty_PropertyConstructionTypeId;
   return NOERROR;
}


   ECODE CProperty::SetProperty_TenancyId(
  /* [in] */ tenant property.tenancyId);

{
   mProperty_TenancyId = property.tenancyId;
   return NOERROR;
}

    ECODE CProperty::GetProperty_TenancyId(
  /* [out] */ tenant* property.tenancyId);

{
   VALIDATE_NOT_NULL(property.tenancyId)
   *property.tenancyId = mProperty_TenancyId;
   return NOERROR;
}


   ECODE CProperty::SetProperty_DocRefs(
  /* [in] */ ArrayOf<CAdministration.documents> property.docRefs);

{
   mProperty_DocRefs = property.docRefs;
   return NOERROR;
}

    ECODE CProperty::GetProperty_DocRefs(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* property.docRefs);
{
   VALIDATE_NOT_NULL(property.docRefs)
   *property.docRefs = mProperty_DocRefs;
   return NOERROR;
}


   ECODE CProperty::SetProperty_ImageRefs(
  /* [in] */ ArrayOf<CAdministration.images> property.imageRefs);

{
   mProperty_ImageRefs = property.imageRefs;
   return NOERROR;
}

    ECODE CProperty::GetProperty_ImageRefs(
     /* [out, callee] */ ArrayOf<CAdministration.images>* property.imageRefs);
{
   VALIDATE_NOT_NULL(property.imageRefs)
   *property.imageRefs = mProperty_ImageRefs;
   return NOERROR;
}


   ECODE CProperty::SetProperty_AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> property.audioRefIds);

{
   mProperty_AudioRefIds = property.audioRefIds;
   return NOERROR;
}

    ECODE CProperty::GetProperty_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* property.audioRefIds);
{
   VALIDATE_NOT_NULL(property.audioRefIds)
   *property.audioRefIds = mProperty_AudioRefIds;
   return NOERROR;
}


   ECODE CProperty::SetProperty_VideoRefs(
  /* [in] */ ArrayOf<CAdministration.video> property.videoRefs);

{
   mProperty_VideoRefs = property.videoRefs;
   return NOERROR;
}

    ECODE CProperty::GetProperty_VideoRefs(
     /* [out, callee] */ ArrayOf<CAdministration.video>* property.videoRefs);
{
   VALIDATE_NOT_NULL(property.videoRefs)
   *property.videoRefs = mProperty_VideoRefs;
   return NOERROR;
}





   ECODE CProperty::SetPropertyConstructionType_PropertyConstructionTypeId(
  /* [in] */ const String& propertyConstructionType.propertyConstructionTypeId);

{
   mPropertyConstructionType_PropertyConstructionTypeId = propertyConstructionType.propertyConstructionTypeId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyConstructionType_PropertyConstructionTypeId(
  /* [out] */ String* propertyConstructionType.propertyConstructionTypeId);

{
   VALIDATE_NOT_NULL(propertyConstructionType.propertyConstructionTypeId)
   *propertyConstructionType.propertyConstructionTypeId = mPropertyConstructionType_PropertyConstructionTypeId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyConstructionType_ConstructionTypeName(
  /* [in] */ const String& propertyConstructionType.constructionTypeName);

{
   mPropertyConstructionType_ConstructionTypeName = propertyConstructionType.constructionTypeName;
   return NOERROR;
}

    ECODE CProperty::GetPropertyConstructionType_ConstructionTypeName(
  /* [out] */ String* propertyConstructionType.constructionTypeName);

{
   VALIDATE_NOT_NULL(propertyConstructionType.constructionTypeName)
   *propertyConstructionType.constructionTypeName = mPropertyConstructionType_ConstructionTypeName;
   return NOERROR;
}


   ECODE CProperty::SetPropertyConstructionType_Description(
  /* [in] */ const String& propertyConstructionType.description);

{
   mPropertyConstructionType_Description = propertyConstructionType.description;
   return NOERROR;
}

    ECODE CProperty::GetPropertyConstructionType_Description(
  /* [out] */ String* propertyConstructionType.description);

{
   VALIDATE_NOT_NULL(propertyConstructionType.description)
   *propertyConstructionType.description = mPropertyConstructionType_Description;
   return NOERROR;
}


   ECODE CProperty::SetPropertyConstructionType_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> propertyConstructionType.docRefIds);

{
   mPropertyConstructionType_DocRefIds = propertyConstructionType.docRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyConstructionType_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* propertyConstructionType.docRefIds);
{
   VALIDATE_NOT_NULL(propertyConstructionType.docRefIds)
   *propertyConstructionType.docRefIds = mPropertyConstructionType_DocRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyConstructionType_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> propertyConstructionType.imageRefIds);

{
   mPropertyConstructionType_ImageRefIds = propertyConstructionType.imageRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyConstructionType_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* propertyConstructionType.imageRefIds);
{
   VALIDATE_NOT_NULL(propertyConstructionType.imageRefIds)
   *propertyConstructionType.imageRefIds = mPropertyConstructionType_ImageRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyConstructionType_AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> propertyConstructionType.audioRefIds);

{
   mPropertyConstructionType_AudioRefIds = propertyConstructionType.audioRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyConstructionType_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* propertyConstructionType.audioRefIds);
{
   VALIDATE_NOT_NULL(propertyConstructionType.audioRefIds)
   *propertyConstructionType.audioRefIds = mPropertyConstructionType_AudioRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyConstructionType_VideoRefIds(
  /* [in] */ ArrayOf<CAdministration.video> propertyConstructionType.videoRefIds);

{
   mPropertyConstructionType_VideoRefIds = propertyConstructionType.videoRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyConstructionType_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* propertyConstructionType.videoRefIds);
{
   VALIDATE_NOT_NULL(propertyConstructionType.videoRefIds)
   *propertyConstructionType.videoRefIds = mPropertyConstructionType_VideoRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyConstructionType_RiskIds(
  /* [in] */ ArrayOf<CAdministration.riskRegister> propertyConstructionType.riskIds);

{
   mPropertyConstructionType_RiskIds = propertyConstructionType.riskIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyConstructionType_RiskIds(
     /* [out, callee] */ ArrayOf<CAdministration.riskRegister>* propertyConstructionType.riskIds);
{
   VALIDATE_NOT_NULL(propertyConstructionType.riskIds)
   *propertyConstructionType.riskIds = mPropertyConstructionType_RiskIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyConstructionType_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner propertyConstructionType.businessChannelOwnerId);

{
   mPropertyConstructionType_BusinessChannelOwnerId = propertyConstructionType.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyConstructionType_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* propertyConstructionType.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(propertyConstructionType.businessChannelOwnerId)
   *propertyConstructionType.businessChannelOwnerId = mPropertyConstructionType_BusinessChannelOwnerId;
   return NOERROR;
}





   ECODE CProperty::SetPropertyOwner_PropertyOwnerId(
  /* [in] */ const String& propertyOwner.propertyOwnerId);

{
   mPropertyOwner_PropertyOwnerId = propertyOwner.propertyOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_PropertyOwnerId(
  /* [out] */ String* propertyOwner.propertyOwnerId);

{
   VALIDATE_NOT_NULL(propertyOwner.propertyOwnerId)
   *propertyOwner.propertyOwnerId = mPropertyOwner_PropertyOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_LinkedToThisCustomerId(
  /* [in] */ const String& propertyOwner.linkedToThisCustomerId);

{
   mPropertyOwner_LinkedToThisCustomerId = propertyOwner.linkedToThisCustomerId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_LinkedToThisCustomerId(
  /* [out] */ String* propertyOwner.linkedToThisCustomerId);

{
   VALIDATE_NOT_NULL(propertyOwner.linkedToThisCustomerId)
   *propertyOwner.linkedToThisCustomerId = mPropertyOwner_LinkedToThisCustomerId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_LinkedToThisSupplierId(
  /* [in] */ const String& propertyOwner.linkedToThisSupplierId);

{
   mPropertyOwner_LinkedToThisSupplierId = propertyOwner.linkedToThisSupplierId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_LinkedToThisSupplierId(
  /* [out] */ String* propertyOwner.linkedToThisSupplierId);

{
   VALIDATE_NOT_NULL(propertyOwner.linkedToThisSupplierId)
   *propertyOwner.linkedToThisSupplierId = mPropertyOwner_LinkedToThisSupplierId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_FirstName(
  /* [in] */ const String& propertyOwner.firstName);

{
   mPropertyOwner_FirstName = propertyOwner.firstName;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_FirstName(
  /* [out] */ String* propertyOwner.firstName);

{
   VALIDATE_NOT_NULL(propertyOwner.firstName)
   *propertyOwner.firstName = mPropertyOwner_FirstName;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_LastName(
  /* [in] */ const String& propertyOwner.lastName);

{
   mPropertyOwner_LastName = propertyOwner.lastName;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_LastName(
  /* [out] */ String* propertyOwner.lastName);

{
   VALIDATE_NOT_NULL(propertyOwner.lastName)
   *propertyOwner.lastName = mPropertyOwner_LastName;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_ResidentialAddress(
  /* [in] */ const String& propertyOwner.residentialAddress);

{
   mPropertyOwner_ResidentialAddress = propertyOwner.residentialAddress;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_ResidentialAddress(
  /* [out] */ String* propertyOwner.residentialAddress);

{
   VALIDATE_NOT_NULL(propertyOwner.residentialAddress)
   *propertyOwner.residentialAddress = mPropertyOwner_ResidentialAddress;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_PostalAddress(
  /* [in] */ const String& propertyOwner.postalAddress);

{
   mPropertyOwner_PostalAddress = propertyOwner.postalAddress;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_PostalAddress(
  /* [out] */ String* propertyOwner.postalAddress);

{
   VALIDATE_NOT_NULL(propertyOwner.postalAddress)
   *propertyOwner.postalAddress = mPropertyOwner_PostalAddress;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_Email(
  /* [in] */ const String& propertyOwner.email);

{
   mPropertyOwner_Email = propertyOwner.email;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_Email(
  /* [out] */ String* propertyOwner.email);

{
   VALIDATE_NOT_NULL(propertyOwner.email)
   *propertyOwner.email = mPropertyOwner_Email;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_HomePhone(
  /* [in] */ Int32 propertyOwner.homePhone);

{
   mPropertyOwner_HomePhone = propertyOwner.homePhone;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_HomePhone(
  /* [out] */ Int32* propertyOwner.homePhone);

{
   VALIDATE_NOT_NULL(propertyOwner.homePhone)
   *propertyOwner.homePhone = mPropertyOwner_HomePhone;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_MobilePhone(
  /* [in] */ Int32 propertyOwner.mobilePhone);

{
   mPropertyOwner_MobilePhone = propertyOwner.mobilePhone;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_MobilePhone(
  /* [out] */ Int32* propertyOwner.mobilePhone);

{
   VALIDATE_NOT_NULL(propertyOwner.mobilePhone)
   *propertyOwner.mobilePhone = mPropertyOwner_MobilePhone;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_WorkPhone(
  /* [in] */ Int32 propertyOwner.workPhone);

{
   mPropertyOwner_WorkPhone = propertyOwner.workPhone;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_WorkPhone(
  /* [out] */ Int32* propertyOwner.workPhone);

{
   VALIDATE_NOT_NULL(propertyOwner.workPhone)
   *propertyOwner.workPhone = mPropertyOwner_WorkPhone;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_BankName(
  /* [in] */ const String& propertyOwner.bankName);

{
   mPropertyOwner_BankName = propertyOwner.bankName;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_BankName(
  /* [out] */ String* propertyOwner.bankName);

{
   VALIDATE_NOT_NULL(propertyOwner.bankName)
   *propertyOwner.bankName = mPropertyOwner_BankName;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_BankBSB(
  /* [in] */ Int32 propertyOwner.bankBSB);

{
   mPropertyOwner_BankBSB = propertyOwner.bankBSB;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_BankBSB(
  /* [out] */ Int32* propertyOwner.bankBSB);

{
   VALIDATE_NOT_NULL(propertyOwner.bankBSB)
   *propertyOwner.bankBSB = mPropertyOwner_BankBSB;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_BankAccountNumber(
  /* [in] */ Int32 propertyOwner.bankAccountNumber);

{
   mPropertyOwner_BankAccountNumber = propertyOwner.bankAccountNumber;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_BankAccountNumber(
  /* [out] */ Int32* propertyOwner.bankAccountNumber);

{
   VALIDATE_NOT_NULL(propertyOwner.bankAccountNumber)
   *propertyOwner.bankAccountNumber = mPropertyOwner_BankAccountNumber;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_ContactedWithDetails(
  /* [in] */ ArrayOf<const String&> propertyOwner.contactedWithDetails);

{
   mPropertyOwner_ContactedWithDetails = propertyOwner.contactedWithDetails;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* propertyOwner.contactedWithDetails);

{
   VALIDATE_NOT_NULL(propertyOwner.contactedWithDetails)
   *propertyOwner.contactedWithDetails = mPropertyOwner_ContactedWithDetails;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_SharesPercents(
  /* [in] */ ArrayOf<Double> propertyOwner.sharesPercents);

{
   mPropertyOwner_SharesPercents = propertyOwner.sharesPercents;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_SharesPercents(
     /* [out, callee] */ ArrayOf<Double>* propertyOwner.sharesPercents);

{
   VALIDATE_NOT_NULL(propertyOwner.sharesPercents)
   *propertyOwner.sharesPercents = mPropertyOwner_SharesPercents;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner propertyOwner.businessChannelOwnerId);

{
   mPropertyOwner_BusinessChannelOwnerId = propertyOwner.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* propertyOwner.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(propertyOwner.businessChannelOwnerId)
   *propertyOwner.businessChannelOwnerId = mPropertyOwner_BusinessChannelOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_BranchId(
  /* [in] */ CAdministration.branch propertyOwner.branchId);

{
   mPropertyOwner_BranchId = propertyOwner.branchId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_BranchId(
  /* [out] */ CAdministration.branch* propertyOwner.branchId);

{
   VALIDATE_NOT_NULL(propertyOwner.branchId)
   *propertyOwner.branchId = mPropertyOwner_BranchId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_PropertyIds(
  /* [in] */ ArrayOf<property> propertyOwner.propertyIds);

{
   mPropertyOwner_PropertyIds = propertyOwner.propertyIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_PropertyIds(
     /* [out, callee] */ ArrayOf<property>* propertyOwner.propertyIds);

{
   VALIDATE_NOT_NULL(propertyOwner.propertyIds)
   *propertyOwner.propertyIds = mPropertyOwner_PropertyIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_CustomerId(
  /* [in] */ CCustomer.customer propertyOwner.customerId);

{
   mPropertyOwner_CustomerId = propertyOwner.customerId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_CustomerId(
  /* [out] */ CCustomer.customer* propertyOwner.customerId);

{
   VALIDATE_NOT_NULL(propertyOwner.customerId)
   *propertyOwner.customerId = mPropertyOwner_CustomerId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> propertyOwner.docRefIds);

{
   mPropertyOwner_DocRefIds = propertyOwner.docRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* propertyOwner.docRefIds);
{
   VALIDATE_NOT_NULL(propertyOwner.docRefIds)
   *propertyOwner.docRefIds = mPropertyOwner_DocRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwner_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> propertyOwner.imageRefIds);

{
   mPropertyOwner_ImageRefIds = propertyOwner.imageRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwner_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* propertyOwner.imageRefIds);
{
   VALIDATE_NOT_NULL(propertyOwner.imageRefIds)
   *propertyOwner.imageRefIds = mPropertyOwner_ImageRefIds;
   return NOERROR;
}





   ECODE CProperty::SetProgram_ProgramId(
  /* [in] */ const String& program.programId);

{
   mProgram_ProgramId = program.programId;
   return NOERROR;
}

    ECODE CProperty::GetProgram_ProgramId(
  /* [out] */ String* program.programId);

{
   VALIDATE_NOT_NULL(program.programId)
   *program.programId = mProgram_ProgramId;
   return NOERROR;
}


   ECODE CProperty::SetProgram_ProgramName(
  /* [in] */ const String& program.programName);

{
   mProgram_ProgramName = program.programName;
   return NOERROR;
}

    ECODE CProperty::GetProgram_ProgramName(
  /* [out] */ String* program.programName);

{
   VALIDATE_NOT_NULL(program.programName)
   *program.programName = mProgram_ProgramName;
   return NOERROR;
}


   ECODE CProperty::SetProgram_Description(
  /* [in] */ const String& program.description);

{
   mProgram_Description = program.description;
   return NOERROR;
}

    ECODE CProperty::GetProgram_Description(
  /* [out] */ String* program.description);

{
   VALIDATE_NOT_NULL(program.description)
   *program.description = mProgram_Description;
   return NOERROR;
}


   ECODE CProperty::SetProgram_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> program.docRefIds);

{
   mProgram_DocRefIds = program.docRefIds;
   return NOERROR;
}

    ECODE CProperty::GetProgram_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* program.docRefIds);
{
   VALIDATE_NOT_NULL(program.docRefIds)
   *program.docRefIds = mProgram_DocRefIds;
   return NOERROR;
}


   ECODE CProperty::SetProgram_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> program.imageRefIds);

{
   mProgram_ImageRefIds = program.imageRefIds;
   return NOERROR;
}

    ECODE CProperty::GetProgram_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* program.imageRefIds);
{
   VALIDATE_NOT_NULL(program.imageRefIds)
   *program.imageRefIds = mProgram_ImageRefIds;
   return NOERROR;
}


   ECODE CProperty::SetProgram_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner program.businessChannelOwnerId);

{
   mProgram_BusinessChannelOwnerId = program.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetProgram_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* program.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(program.businessChannelOwnerId)
   *program.businessChannelOwnerId = mProgram_BusinessChannelOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetProgram_BranchId(
  /* [in] */ CAdministration.branch program.branchId);

{
   mProgram_BranchId = program.branchId;
   return NOERROR;
}

    ECODE CProperty::GetProgram_BranchId(
  /* [out] */ CAdministration.branch* program.branchId);

{
   VALIDATE_NOT_NULL(program.branchId)
   *program.branchId = mProgram_BranchId;
   return NOERROR;
}


   ECODE CProperty::SetProgram_DeptId(
  /* [in] */ CAdministration.department program.deptId);

{
   mProgram_DeptId = program.deptId;
   return NOERROR;
}

    ECODE CProperty::GetProgram_DeptId(
  /* [out] */ CAdministration.department* program.deptId);

{
   VALIDATE_NOT_NULL(program.deptId)
   *program.deptId = mProgram_DeptId;
   return NOERROR;
}





   ECODE CProperty::SetProject_ProjectId(
  /* [in] */ const String& project.projectId);

{
   mProject_ProjectId = project.projectId;
   return NOERROR;
}

    ECODE CProperty::GetProject_ProjectId(
  /* [out] */ String* project.projectId);

{
   VALIDATE_NOT_NULL(project.projectId)
   *project.projectId = mProject_ProjectId;
   return NOERROR;
}


   ECODE CProperty::SetProject_ProjectName(
  /* [in] */ const String& project.projectName);

{
   mProject_ProjectName = project.projectName;
   return NOERROR;
}

    ECODE CProperty::GetProject_ProjectName(
  /* [out] */ String* project.projectName);

{
   VALIDATE_NOT_NULL(project.projectName)
   *project.projectName = mProject_ProjectName;
   return NOERROR;
}


   ECODE CProperty::SetProject_Description(
  /* [in] */ const String& project.description);

{
   mProject_Description = project.description;
   return NOERROR;
}

    ECODE CProperty::GetProject_Description(
  /* [out] */ String* project.description);

{
   VALIDATE_NOT_NULL(project.description)
   *project.description = mProject_Description;
   return NOERROR;
}


   ECODE CProperty::SetProject_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> project.docRefIds);

{
   mProject_DocRefIds = project.docRefIds;
   return NOERROR;
}

    ECODE CProperty::GetProject_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* project.docRefIds);
{
   VALIDATE_NOT_NULL(project.docRefIds)
   *project.docRefIds = mProject_DocRefIds;
   return NOERROR;
}


   ECODE CProperty::SetProject_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> project.imageRefIds);

{
   mProject_ImageRefIds = project.imageRefIds;
   return NOERROR;
}

    ECODE CProperty::GetProject_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* project.imageRefIds);
{
   VALIDATE_NOT_NULL(project.imageRefIds)
   *project.imageRefIds = mProject_ImageRefIds;
   return NOERROR;
}


   ECODE CProperty::SetProject_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner project.businessChannelOwnerId);

{
   mProject_BusinessChannelOwnerId = project.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetProject_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* project.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(project.businessChannelOwnerId)
   *project.businessChannelOwnerId = mProject_BusinessChannelOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetProject_BranchId(
  /* [in] */ CAdministration.branch project.branchId);

{
   mProject_BranchId = project.branchId;
   return NOERROR;
}

    ECODE CProperty::GetProject_BranchId(
  /* [out] */ CAdministration.branch* project.branchId);

{
   VALIDATE_NOT_NULL(project.branchId)
   *project.branchId = mProject_BranchId;
   return NOERROR;
}


   ECODE CProperty::SetProject_DeptId(
  /* [in] */ CAdministration.department project.deptId);

{
   mProject_DeptId = project.deptId;
   return NOERROR;
}

    ECODE CProperty::GetProject_DeptId(
  /* [out] */ CAdministration.department* project.deptId);

{
   VALIDATE_NOT_NULL(project.deptId)
   *project.deptId = mProject_DeptId;
   return NOERROR;
}





   ECODE CProperty::SetAdvertisingBudgetSchedule_AdvertScheduleId(
  /* [in] */ const String& advertisingBudgetSchedule.advertScheduleId);

{
   mAdvertisingBudgetSchedule_AdvertScheduleId = advertisingBudgetSchedule.advertScheduleId;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_AdvertScheduleId(
  /* [out] */ String* advertisingBudgetSchedule.advertScheduleId);

{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.advertScheduleId)
   *advertisingBudgetSchedule.advertScheduleId = mAdvertisingBudgetSchedule_AdvertScheduleId;
   return NOERROR;
}


   ECODE CProperty::SetAdvertisingBudgetSchedule_AdvertisingMedium(
  /* [in] */ CHelper.advertisingMedium advertisingBudgetSchedule.AdvertisingMedium);

{
   mAdvertisingBudgetSchedule_AdvertisingMedium = advertisingBudgetSchedule.AdvertisingMedium;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_AdvertisingMedium(
  /* [out] */ CHelper.advertisingMedium* advertisingBudgetSchedule.AdvertisingMedium);

{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.AdvertisingMedium)
   *advertisingBudgetSchedule.AdvertisingMedium = mAdvertisingBudgetSchedule_AdvertisingMedium;
   return NOERROR;
}


   ECODE CProperty::SetAdvertisingBudgetSchedule_PreviousSchedId(
  /* [in] */ const String& advertisingBudgetSchedule.previousSchedId);

{
   mAdvertisingBudgetSchedule_PreviousSchedId = advertisingBudgetSchedule.previousSchedId;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_PreviousSchedId(
  /* [out] */ String* advertisingBudgetSchedule.previousSchedId);

{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.previousSchedId)
   *advertisingBudgetSchedule.previousSchedId = mAdvertisingBudgetSchedule_PreviousSchedId;
   return NOERROR;
}


   ECODE CProperty::SetAdvertisingBudgetSchedule_month(
  /* [in] */ CHelper.month advertisingBudgetSchedule.month);

{
   mAdvertisingBudgetSchedule_month = advertisingBudgetSchedule.month;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_month(
  /* [out] */ CHelper.month* advertisingBudgetSchedule.month);

{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.month)
   *advertisingBudgetSchedule.month = mAdvertisingBudgetSchedule_month;
   return NOERROR;
}


   ECODE CProperty::SetAdvertisingBudgetSchedule_BudgetedAmount(
  /* [in] */ Double advertisingBudgetSchedule.budgetedAmount);

{
   mAdvertisingBudgetSchedule_BudgetedAmount = advertisingBudgetSchedule.budgetedAmount;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_BudgetedAmount(
  /* [out] */ Double* advertisingBudgetSchedule.budgetedAmount);

{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.budgetedAmount)
   *advertisingBudgetSchedule.budgetedAmount = mAdvertisingBudgetSchedule_BudgetedAmount;
   return NOERROR;
}


   ECODE CProperty::SetAdvertisingBudgetSchedule_RunDateTimes(
  /* [in] */ ArrayOf<const String&> advertisingBudgetSchedule.runDateTimes);

{
   mAdvertisingBudgetSchedule_RunDateTimes = advertisingBudgetSchedule.runDateTimes;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_RunDateTimes(
     /* [out, callee] */ ArrayOf<String>* advertisingBudgetSchedule.runDateTimes);

{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.runDateTimes)
   *advertisingBudgetSchedule.runDateTimes = mAdvertisingBudgetSchedule_RunDateTimes;
   return NOERROR;
}


   ECODE CProperty::SetAdvertisingBudgetSchedule_PropertyId(
  /* [in] */ property advertisingBudgetSchedule.propertyId);

{
   mAdvertisingBudgetSchedule_PropertyId = advertisingBudgetSchedule.propertyId;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_PropertyId(
  /* [out] */ property* advertisingBudgetSchedule.propertyId);

{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.propertyId)
   *advertisingBudgetSchedule.propertyId = mAdvertisingBudgetSchedule_PropertyId;
   return NOERROR;
}


   ECODE CProperty::SetAdvertisingBudgetSchedule_PropertyOwnerIds(
  /* [in] */ ArrayOf<propertyOwner> advertisingBudgetSchedule.propertyOwnerIds);

{
   mAdvertisingBudgetSchedule_PropertyOwnerIds = advertisingBudgetSchedule.propertyOwnerIds;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_PropertyOwnerIds(
     /* [out, callee] */ ArrayOf<propertyOwner>* advertisingBudgetSchedule.propertyOwnerIds);

{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.propertyOwnerIds)
   *advertisingBudgetSchedule.propertyOwnerIds = mAdvertisingBudgetSchedule_PropertyOwnerIds;
   return NOERROR;
}


   ECODE CProperty::SetAdvertisingBudgetSchedule_AdvertDesignIds(
  /* [in] */ ArrayOf<CAdministration.advertisingTemplatesPlans> advertisingBudgetSchedule.advertDesignIds);

{
   mAdvertisingBudgetSchedule_AdvertDesignIds = advertisingBudgetSchedule.advertDesignIds;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_AdvertDesignIds(
     /* [out, callee] */ ArrayOf<CAdministration.advertisingTemplatesPlans>* advertisingBudgetSchedule.advertDesignIds);
{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.advertDesignIds)
   *advertisingBudgetSchedule.advertDesignIds = mAdvertisingBudgetSchedule_AdvertDesignIds;
   return NOERROR;
}


   ECODE CProperty::SetAdvertisingBudgetSchedule_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner advertisingBudgetSchedule.businessChannelOwnerId);

{
   mAdvertisingBudgetSchedule_BusinessChannelOwnerId = advertisingBudgetSchedule.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* advertisingBudgetSchedule.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.businessChannelOwnerId)
   *advertisingBudgetSchedule.businessChannelOwnerId = mAdvertisingBudgetSchedule_BusinessChannelOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetAdvertisingBudgetSchedule_BranchId(
  /* [in] */ CAdministration.branch advertisingBudgetSchedule.branchId);

{
   mAdvertisingBudgetSchedule_BranchId = advertisingBudgetSchedule.branchId;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_BranchId(
  /* [out] */ CAdministration.branch* advertisingBudgetSchedule.branchId);

{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.branchId)
   *advertisingBudgetSchedule.branchId = mAdvertisingBudgetSchedule_BranchId;
   return NOERROR;
}


   ECODE CProperty::SetAdvertisingBudgetSchedule_DeptId(
  /* [in] */ CAdministration.department advertisingBudgetSchedule.deptId);

{
   mAdvertisingBudgetSchedule_DeptId = advertisingBudgetSchedule.deptId;
   return NOERROR;
}

    ECODE CProperty::GetAdvertisingBudgetSchedule_DeptId(
  /* [out] */ CAdministration.department* advertisingBudgetSchedule.deptId);

{
   VALIDATE_NOT_NULL(advertisingBudgetSchedule.deptId)
   *advertisingBudgetSchedule.deptId = mAdvertisingBudgetSchedule_DeptId;
   return NOERROR;
}





   ECODE CProperty::SetAllocation_AllocationId(
  /* [in] */ const String& allocation.allocationId);

{
   mAllocation_AllocationId = allocation.allocationId;
   return NOERROR;
}

    ECODE CProperty::GetAllocation_AllocationId(
  /* [out] */ String* allocation.allocationId);

{
   VALIDATE_NOT_NULL(allocation.allocationId)
   *allocation.allocationId = mAllocation_AllocationId;
   return NOERROR;
}


   ECODE CProperty::SetAllocation_ApplicationIds(
  /* [in] */ ArrayOf<const String&> allocation.applicationIds);

{
   mAllocation_ApplicationIds = allocation.applicationIds;
   return NOERROR;
}

    ECODE CProperty::GetAllocation_ApplicationIds(
     /* [out, callee] */ ArrayOf<String>* allocation.applicationIds);

{
   VALIDATE_NOT_NULL(allocation.applicationIds)
   *allocation.applicationIds = mAllocation_ApplicationIds;
   return NOERROR;
}


   ECODE CProperty::SetAllocation_DocRefs(
  /* [in] */ ArrayOf<const String&> allocation.docRefs);

{
   mAllocation_DocRefs = allocation.docRefs;
   return NOERROR;
}

    ECODE CProperty::GetAllocation_DocRefs(
     /* [out, callee] */ ArrayOf<String>* allocation.docRefs);

{
   VALIDATE_NOT_NULL(allocation.docRefs)
   *allocation.docRefs = mAllocation_DocRefs;
   return NOERROR;
}


   ECODE CProperty::SetAllocation_Notes(
  /* [in] */ ArrayOf<const String&> allocation.notes);

{
   mAllocation_Notes = allocation.notes;
   return NOERROR;
}

    ECODE CProperty::GetAllocation_Notes(
     /* [out, callee] */ ArrayOf<String>* allocation.notes);

{
   VALIDATE_NOT_NULL(allocation.notes)
   *allocation.notes = mAllocation_Notes;
   return NOERROR;
}


   ECODE CProperty::SetAllocation_DateOfEffect(
  /* [in] */ const String& allocation.dateOfEffect);

{
   mAllocation_DateOfEffect = allocation.dateOfEffect;
   return NOERROR;
}

    ECODE CProperty::GetAllocation_DateOfEffect(
  /* [out] */ String* allocation.dateOfEffect);

{
   VALIDATE_NOT_NULL(allocation.dateOfEffect)
   *allocation.dateOfEffect = mAllocation_DateOfEffect;
   return NOERROR;
}


   ECODE CProperty::SetAllocation_PropertyId(
  /* [in] */ property allocation.propertyId);

{
   mAllocation_PropertyId = allocation.propertyId;
   return NOERROR;
}

    ECODE CProperty::GetAllocation_PropertyId(
  /* [out] */ property* allocation.propertyId);

{
   VALIDATE_NOT_NULL(allocation.propertyId)
   *allocation.propertyId = mAllocation_PropertyId;
   return NOERROR;
}


   ECODE CProperty::SetAllocation_SuccessfulApplicationId(
  /* [in] */ CCustomer.application allocation.successfulApplicationId);

{
   mAllocation_SuccessfulApplicationId = allocation.successfulApplicationId;
   return NOERROR;
}

    ECODE CProperty::GetAllocation_SuccessfulApplicationId(
  /* [out] */ CCustomer.application* allocation.successfulApplicationId);

{
   VALIDATE_NOT_NULL(allocation.successfulApplicationId)
   *allocation.successfulApplicationId = mAllocation_SuccessfulApplicationId;
   return NOERROR;
}


   ECODE CProperty::SetAllocation_SuccessfulTenancyId(
  /* [in] */ tenant allocation.successfulTenancyId);

{
   mAllocation_SuccessfulTenancyId = allocation.successfulTenancyId;
   return NOERROR;
}

    ECODE CProperty::GetAllocation_SuccessfulTenancyId(
  /* [out] */ tenant* allocation.successfulTenancyId);

{
   VALIDATE_NOT_NULL(allocation.successfulTenancyId)
   *allocation.successfulTenancyId = mAllocation_SuccessfulTenancyId;
   return NOERROR;
}


   ECODE CProperty::SetAllocation_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner allocation.businessChannelOwnerId);

{
   mAllocation_BusinessChannelOwnerId = allocation.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetAllocation_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* allocation.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(allocation.businessChannelOwnerId)
   *allocation.businessChannelOwnerId = mAllocation_BusinessChannelOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetAllocation_BranchId(
  /* [in] */ CAdministration.branch allocation.branchId);

{
   mAllocation_BranchId = allocation.branchId;
   return NOERROR;
}

    ECODE CProperty::GetAllocation_BranchId(
  /* [out] */ CAdministration.branch* allocation.branchId);

{
   VALIDATE_NOT_NULL(allocation.branchId)
   *allocation.branchId = mAllocation_BranchId;
   return NOERROR;
}


   ECODE CProperty::SetAllocation_DeptId(
  /* [in] */ CAdministration.department allocation.deptId);

{
   mAllocation_DeptId = allocation.deptId;
   return NOERROR;
}

    ECODE CProperty::GetAllocation_DeptId(
  /* [out] */ CAdministration.department* allocation.deptId);

{
   VALIDATE_NOT_NULL(allocation.deptId)
   *allocation.deptId = mAllocation_DeptId;
   return NOERROR;
}





   ECODE CProperty::SetTenant_TenancyId(
  /* [in] */ const String& tenant.tenancyId);

{
   mTenant_TenancyId = tenant.tenancyId;
   return NOERROR;
}

    ECODE CProperty::GetTenant_TenancyId(
  /* [out] */ String* tenant.tenancyId);

{
   VALIDATE_NOT_NULL(tenant.tenancyId)
   *tenant.tenancyId = mTenant_TenancyId;
   return NOERROR;
}


   ECODE CProperty::SetTenant_ABN(
  /* [in] */ const String& tenant.aBN);

{
   mTenant_ABN = tenant.aBN;
   return NOERROR;
}

    ECODE CProperty::GetTenant_ABN(
  /* [out] */ String* tenant.aBN);

{
   VALIDATE_NOT_NULL(tenant.aBN)
   *tenant.aBN = mTenant_ABN;
   return NOERROR;
}


   ECODE CProperty::SetTenant_BusinessName(
  /* [in] */ const String& tenant.businessName);

{
   mTenant_BusinessName = tenant.businessName;
   return NOERROR;
}

    ECODE CProperty::GetTenant_BusinessName(
  /* [out] */ String* tenant.businessName);

{
   VALIDATE_NOT_NULL(tenant.businessName)
   *tenant.businessName = mTenant_BusinessName;
   return NOERROR;
}


   ECODE CProperty::SetTenant_FirstName(
  /* [in] */ const String& tenant.firstName);

{
   mTenant_FirstName = tenant.firstName;
   return NOERROR;
}

    ECODE CProperty::GetTenant_FirstName(
  /* [out] */ String* tenant.firstName);

{
   VALIDATE_NOT_NULL(tenant.firstName)
   *tenant.firstName = mTenant_FirstName;
   return NOERROR;
}


   ECODE CProperty::SetTenant_LastName(
  /* [in] */ const String& tenant.lastName);

{
   mTenant_LastName = tenant.lastName;
   return NOERROR;
}

    ECODE CProperty::GetTenant_LastName(
  /* [out] */ String* tenant.lastName);

{
   VALIDATE_NOT_NULL(tenant.lastName)
   *tenant.lastName = mTenant_LastName;
   return NOERROR;
}


   ECODE CProperty::SetTenant_ResidentialAddress(
  /* [in] */ const String& tenant.residentialAddress);

{
   mTenant_ResidentialAddress = tenant.residentialAddress;
   return NOERROR;
}

    ECODE CProperty::GetTenant_ResidentialAddress(
  /* [out] */ String* tenant.residentialAddress);

{
   VALIDATE_NOT_NULL(tenant.residentialAddress)
   *tenant.residentialAddress = mTenant_ResidentialAddress;
   return NOERROR;
}


   ECODE CProperty::SetTenant_PostalAddress(
  /* [in] */ const String& tenant.postalAddress);

{
   mTenant_PostalAddress = tenant.postalAddress;
   return NOERROR;
}

    ECODE CProperty::GetTenant_PostalAddress(
  /* [out] */ String* tenant.postalAddress);

{
   VALIDATE_NOT_NULL(tenant.postalAddress)
   *tenant.postalAddress = mTenant_PostalAddress;
   return NOERROR;
}


   ECODE CProperty::SetTenant_Email(
  /* [in] */ const String& tenant.email);

{
   mTenant_Email = tenant.email;
   return NOERROR;
}

    ECODE CProperty::GetTenant_Email(
  /* [out] */ String* tenant.email);

{
   VALIDATE_NOT_NULL(tenant.email)
   *tenant.email = mTenant_Email;
   return NOERROR;
}


   ECODE CProperty::SetTenant_HomePhone(
  /* [in] */ Int32 tenant.homePhone);

{
   mTenant_HomePhone = tenant.homePhone;
   return NOERROR;
}

    ECODE CProperty::GetTenant_HomePhone(
  /* [out] */ Int32* tenant.homePhone);

{
   VALIDATE_NOT_NULL(tenant.homePhone)
   *tenant.homePhone = mTenant_HomePhone;
   return NOERROR;
}


   ECODE CProperty::SetTenant_MobilePhone(
  /* [in] */ Int32 tenant.mobilePhone);

{
   mTenant_MobilePhone = tenant.mobilePhone;
   return NOERROR;
}

    ECODE CProperty::GetTenant_MobilePhone(
  /* [out] */ Int32* tenant.mobilePhone);

{
   VALIDATE_NOT_NULL(tenant.mobilePhone)
   *tenant.mobilePhone = mTenant_MobilePhone;
   return NOERROR;
}


   ECODE CProperty::SetTenant_WorkPhone(
  /* [in] */ Int32 tenant.workPhone);

{
   mTenant_WorkPhone = tenant.workPhone;
   return NOERROR;
}

    ECODE CProperty::GetTenant_WorkPhone(
  /* [out] */ Int32* tenant.workPhone);

{
   VALIDATE_NOT_NULL(tenant.workPhone)
   *tenant.workPhone = mTenant_WorkPhone;
   return NOERROR;
}


   ECODE CProperty::SetTenant_ContactedWithDetails(
  /* [in] */ ArrayOf<const String&> tenant.contactedWithDetails);

{
   mTenant_ContactedWithDetails = tenant.contactedWithDetails;
   return NOERROR;
}

    ECODE CProperty::GetTenant_ContactedWithDetails(
     /* [out, callee] */ ArrayOf<String>* tenant.contactedWithDetails);

{
   VALIDATE_NOT_NULL(tenant.contactedWithDetails)
   *tenant.contactedWithDetails = mTenant_ContactedWithDetails;
   return NOERROR;
}


   ECODE CProperty::SetTenant_AllocationId(
  /* [in] */ allocation tenant.allocationId);

{
   mTenant_AllocationId = tenant.allocationId;
   return NOERROR;
}

    ECODE CProperty::GetTenant_AllocationId(
  /* [out] */ allocation* tenant.allocationId);

{
   VALIDATE_NOT_NULL(tenant.allocationId)
   *tenant.allocationId = mTenant_AllocationId;
   return NOERROR;
}


   ECODE CProperty::SetTenant_ApplicantIds(
  /* [in] */ ArrayOf<CCustomer.applicant> tenant.applicantIds);

{
   mTenant_ApplicantIds = tenant.applicantIds;
   return NOERROR;
}

    ECODE CProperty::GetTenant_ApplicantIds(
     /* [out, callee] */ ArrayOf<CCustomer.applicant>* tenant.applicantIds);
{
   VALIDATE_NOT_NULL(tenant.applicantIds)
   *tenant.applicantIds = mTenant_ApplicantIds;
   return NOERROR;
}


   ECODE CProperty::SetTenant_CustomerId(
  /* [in] */ CCustomer.customer tenant.customerId);

{
   mTenant_CustomerId = tenant.customerId;
   return NOERROR;
}

    ECODE CProperty::GetTenant_CustomerId(
  /* [out] */ CCustomer.customer* tenant.customerId);

{
   VALIDATE_NOT_NULL(tenant.customerId)
   *tenant.customerId = mTenant_CustomerId;
   return NOERROR;
}


   ECODE CProperty::SetTenant_PropertyId(
  /* [in] */ property tenant.propertyId);

{
   mTenant_PropertyId = tenant.propertyId;
   return NOERROR;
}

    ECODE CProperty::GetTenant_PropertyId(
  /* [out] */ property* tenant.propertyId);

{
   VALIDATE_NOT_NULL(tenant.propertyId)
   *tenant.propertyId = mTenant_PropertyId;
   return NOERROR;
}


   ECODE CProperty::SetTenant_BranchId(
  /* [in] */ CAdministration.branch tenant.branchId);

{
   mTenant_BranchId = tenant.branchId;
   return NOERROR;
}

    ECODE CProperty::GetTenant_BranchId(
  /* [out] */ CAdministration.branch* tenant.branchId);

{
   VALIDATE_NOT_NULL(tenant.branchId)
   *tenant.branchId = mTenant_BranchId;
   return NOERROR;
}


   ECODE CProperty::SetTenant_ChartOfAccountsId(
  /* [in] */ CFinance.chartOfAccounts tenant.chartOfAccountsId);

{
   mTenant_ChartOfAccountsId = tenant.chartOfAccountsId;
   return NOERROR;
}

    ECODE CProperty::GetTenant_ChartOfAccountsId(
  /* [out] */ CFinance.chartOfAccounts* tenant.chartOfAccountsId);

{
   VALIDATE_NOT_NULL(tenant.chartOfAccountsId)
   *tenant.chartOfAccountsId = mTenant_ChartOfAccountsId;
   return NOERROR;
}


   ECODE CProperty::SetTenant_ChartOfClassesId(
  /* [in] */ CFinance.chartOfClasses tenant.chartOfClassesId);

{
   mTenant_ChartOfClassesId = tenant.chartOfClassesId;
   return NOERROR;
}

    ECODE CProperty::GetTenant_ChartOfClassesId(
  /* [out] */ CFinance.chartOfClasses* tenant.chartOfClassesId);

{
   VALIDATE_NOT_NULL(tenant.chartOfClassesId)
   *tenant.chartOfClassesId = mTenant_ChartOfClassesId;
   return NOERROR;
}


   ECODE CProperty::SetTenant_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> tenant.docRefIds);

{
   mTenant_DocRefIds = tenant.docRefIds;
   return NOERROR;
}

    ECODE CProperty::GetTenant_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* tenant.docRefIds);
{
   VALIDATE_NOT_NULL(tenant.docRefIds)
   *tenant.docRefIds = mTenant_DocRefIds;
   return NOERROR;
}


   ECODE CProperty::SetTenant_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> tenant.imageRefIds);

{
   mTenant_ImageRefIds = tenant.imageRefIds;
   return NOERROR;
}

    ECODE CProperty::GetTenant_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* tenant.imageRefIds);
{
   VALIDATE_NOT_NULL(tenant.imageRefIds)
   *tenant.imageRefIds = mTenant_ImageRefIds;
   return NOERROR;
}


   ECODE CProperty::SetTenant_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner tenant.businessChannelOwnerId);

{
   mTenant_BusinessChannelOwnerId = tenant.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetTenant_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* tenant.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(tenant.businessChannelOwnerId)
   *tenant.businessChannelOwnerId = mTenant_BusinessChannelOwnerId;
   return NOERROR;
}





   ECODE CProperty::SetPropertyOwnerPropertyJoin_PropOwnerPropJoinId(
  /* [in] */ const String& propertyOwnerPropertyJoin.propOwnerPropJoinId);

{
   mPropertyOwnerPropertyJoin_PropOwnerPropJoinId = propertyOwnerPropertyJoin.propOwnerPropJoinId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwnerPropertyJoin_PropOwnerPropJoinId(
  /* [out] */ String* propertyOwnerPropertyJoin.propOwnerPropJoinId);

{
   VALIDATE_NOT_NULL(propertyOwnerPropertyJoin.propOwnerPropJoinId)
   *propertyOwnerPropertyJoin.propOwnerPropJoinId = mPropertyOwnerPropertyJoin_PropOwnerPropJoinId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwnerPropertyJoin_OwnershipPercentage(
  /* [in] */ Double propertyOwnerPropertyJoin.ownershipPercentage);

{
   mPropertyOwnerPropertyJoin_OwnershipPercentage = propertyOwnerPropertyJoin.ownershipPercentage;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwnerPropertyJoin_OwnershipPercentage(
  /* [out] */ Double* propertyOwnerPropertyJoin.ownershipPercentage);

{
   VALIDATE_NOT_NULL(propertyOwnerPropertyJoin.ownershipPercentage)
   *propertyOwnerPropertyJoin.ownershipPercentage = mPropertyOwnerPropertyJoin_OwnershipPercentage;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwnerPropertyJoin_PropertyId(
  /* [in] */ property propertyOwnerPropertyJoin.propertyId);

{
   mPropertyOwnerPropertyJoin_PropertyId = propertyOwnerPropertyJoin.propertyId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwnerPropertyJoin_PropertyId(
  /* [out] */ property* propertyOwnerPropertyJoin.propertyId);

{
   VALIDATE_NOT_NULL(propertyOwnerPropertyJoin.propertyId)
   *propertyOwnerPropertyJoin.propertyId = mPropertyOwnerPropertyJoin_PropertyId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwnerPropertyJoin_PropertyOwnerId(
  /* [in] */ propertyOwner propertyOwnerPropertyJoin.propertyOwnerId);

{
   mPropertyOwnerPropertyJoin_PropertyOwnerId = propertyOwnerPropertyJoin.propertyOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwnerPropertyJoin_PropertyOwnerId(
  /* [out] */ propertyOwner* propertyOwnerPropertyJoin.propertyOwnerId);

{
   VALIDATE_NOT_NULL(propertyOwnerPropertyJoin.propertyOwnerId)
   *propertyOwnerPropertyJoin.propertyOwnerId = mPropertyOwnerPropertyJoin_PropertyOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyOwnerPropertyJoin_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner propertyOwnerPropertyJoin.businessChannelOwnerId);

{
   mPropertyOwnerPropertyJoin_BusinessChannelOwnerId = propertyOwnerPropertyJoin.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyOwnerPropertyJoin_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* propertyOwnerPropertyJoin.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(propertyOwnerPropertyJoin.businessChannelOwnerId)
   *propertyOwnerPropertyJoin.businessChannelOwnerId = mPropertyOwnerPropertyJoin_BusinessChannelOwnerId;
   return NOERROR;
}





   ECODE CProperty::SetCustomerPropertyJoin_CustPropJoinId(
  /* [in] */ const String& customerpropertyJoin.custPropJoinId);

{
   mCustomerPropertyJoin_CustPropJoinId = customerpropertyJoin.custPropJoinId;
   return NOERROR;
}

    ECODE CProperty::GetCustomerPropertyJoin_CustPropJoinId(
  /* [out] */ String* customerpropertyJoin.custPropJoinId);

{
   VALIDATE_NOT_NULL(customerpropertyJoin.custPropJoinId)
   *customerpropertyJoin.custPropJoinId = mCustomerPropertyJoin_CustPropJoinId;
   return NOERROR;
}


   ECODE CProperty::SetCustomerPropertyJoin_Relationship(
  /* [in] */ CHelper.relationship customerpropertyJoin.relationship);

{
   mCustomerPropertyJoin_Relationship = customerpropertyJoin.relationship;
   return NOERROR;
}

    ECODE CProperty::GetCustomerPropertyJoin_Relationship(
  /* [out] */ CHelper.relationship* customerpropertyJoin.relationship);

{
   VALIDATE_NOT_NULL(customerpropertyJoin.relationship)
   *customerpropertyJoin.relationship = mCustomerPropertyJoin_Relationship;
   return NOERROR;
}


   ECODE CProperty::SetCustomerPropertyJoin_CustomerId(
  /* [in] */ CCustomer.customer customerpropertyJoin.customerId);

{
   mCustomerPropertyJoin_CustomerId = customerpropertyJoin.customerId;
   return NOERROR;
}

    ECODE CProperty::GetCustomerPropertyJoin_CustomerId(
  /* [out] */ CCustomer.customer* customerpropertyJoin.customerId);

{
   VALIDATE_NOT_NULL(customerpropertyJoin.customerId)
   *customerpropertyJoin.customerId = mCustomerPropertyJoin_CustomerId;
   return NOERROR;
}


   ECODE CProperty::SetCustomerPropertyJoin_PropertyId(
  /* [in] */ property customerpropertyJoin.propertyId);

{
   mCustomerPropertyJoin_PropertyId = customerpropertyJoin.propertyId;
   return NOERROR;
}

    ECODE CProperty::GetCustomerPropertyJoin_PropertyId(
  /* [out] */ property* customerpropertyJoin.propertyId);

{
   VALIDATE_NOT_NULL(customerpropertyJoin.propertyId)
   *customerpropertyJoin.propertyId = mCustomerPropertyJoin_PropertyId;
   return NOERROR;
}


   ECODE CProperty::SetCustomerPropertyJoin_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner customerpropertyJoin.businessChannelOwnerId);

{
   mCustomerPropertyJoin_BusinessChannelOwnerId = customerpropertyJoin.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetCustomerPropertyJoin_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* customerpropertyJoin.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(customerpropertyJoin.businessChannelOwnerId)
   *customerpropertyJoin.businessChannelOwnerId = mCustomerPropertyJoin_BusinessChannelOwnerId;
   return NOERROR;
}





   ECODE CProperty::SetCustomerPropertyOwnerJoin_CustPropOwnerJoinId(
  /* [in] */ const String& customerPropertyOwnerJoin.custPropOwnerJoinId);

{
   mCustomerPropertyOwnerJoin_CustPropOwnerJoinId = customerPropertyOwnerJoin.custPropOwnerJoinId;
   return NOERROR;
}

    ECODE CProperty::GetCustomerPropertyOwnerJoin_CustPropOwnerJoinId(
  /* [out] */ String* customerPropertyOwnerJoin.custPropOwnerJoinId);

{
   VALIDATE_NOT_NULL(customerPropertyOwnerJoin.custPropOwnerJoinId)
   *customerPropertyOwnerJoin.custPropOwnerJoinId = mCustomerPropertyOwnerJoin_CustPropOwnerJoinId;
   return NOERROR;
}


   ECODE CProperty::SetCustomerPropertyOwnerJoin_CustomerId(
  /* [in] */ CCustomer.customer customerPropertyOwnerJoin.customerId);

{
   mCustomerPropertyOwnerJoin_CustomerId = customerPropertyOwnerJoin.customerId;
   return NOERROR;
}

    ECODE CProperty::GetCustomerPropertyOwnerJoin_CustomerId(
  /* [out] */ CCustomer.customer* customerPropertyOwnerJoin.customerId);

{
   VALIDATE_NOT_NULL(customerPropertyOwnerJoin.customerId)
   *customerPropertyOwnerJoin.customerId = mCustomerPropertyOwnerJoin_CustomerId;
   return NOERROR;
}


   ECODE CProperty::SetCustomerPropertyOwnerJoin_PropertyOwnerId(
  /* [in] */ propertyOwner customerPropertyOwnerJoin.propertyOwnerId);

{
   mCustomerPropertyOwnerJoin_PropertyOwnerId = customerPropertyOwnerJoin.propertyOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetCustomerPropertyOwnerJoin_PropertyOwnerId(
  /* [out] */ propertyOwner* customerPropertyOwnerJoin.propertyOwnerId);

{
   VALIDATE_NOT_NULL(customerPropertyOwnerJoin.propertyOwnerId)
   *customerPropertyOwnerJoin.propertyOwnerId = mCustomerPropertyOwnerJoin_PropertyOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetCustomerPropertyOwnerJoin_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner customerPropertyOwnerJoin.businessChannelOwnerId);

{
   mCustomerPropertyOwnerJoin_BusinessChannelOwnerId = customerPropertyOwnerJoin.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetCustomerPropertyOwnerJoin_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* customerPropertyOwnerJoin.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(customerPropertyOwnerJoin.businessChannelOwnerId)
   *customerPropertyOwnerJoin.businessChannelOwnerId = mCustomerPropertyOwnerJoin_BusinessChannelOwnerId;
   return NOERROR;
}





   ECODE CProperty::SetPropertyInspectionResidential_PropertyInspectionResId(
  /* [in] */ const String& propertyInspectionResidential.propertyInspectionResId);

{
   mPropertyInspectionResidential_PropertyInspectionResId = propertyInspectionResidential.propertyInspectionResId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_PropertyInspectionResId(
  /* [out] */ String* propertyInspectionResidential.propertyInspectionResId);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.propertyInspectionResId)
   *propertyInspectionResidential.propertyInspectionResId = mPropertyInspectionResidential_PropertyInspectionResId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_InspectionDates(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.inspectionDates);

{
   mPropertyInspectionResidential_InspectionDates = propertyInspectionResidential.inspectionDates;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_InspectionDates(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.inspectionDates);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.inspectionDates)
   *propertyInspectionResidential.inspectionDates = mPropertyInspectionResidential_InspectionDates;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_PropertyAddressString(
  /* [in] */ const String& propertyInspectionResidential.propertyAddressString);

{
   mPropertyInspectionResidential_PropertyAddressString = propertyInspectionResidential.propertyAddressString;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_PropertyAddressString(
  /* [out] */ String* propertyInspectionResidential.propertyAddressString);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.propertyAddressString)
   *propertyInspectionResidential.propertyAddressString = mPropertyInspectionResidential_PropertyAddressString;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_UnitNumber(
  /* [in] */ const String& propertyInspectionResidential.unitNumber);

{
   mPropertyInspectionResidential_UnitNumber = propertyInspectionResidential.unitNumber;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_UnitNumber(
  /* [out] */ String* propertyInspectionResidential.unitNumber);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.unitNumber)
   *propertyInspectionResidential.unitNumber = mPropertyInspectionResidential_UnitNumber;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Bathroom(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.bathroom);

{
   mPropertyInspectionResidential_Bathroom = propertyInspectionResidential.bathroom;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Bathroom(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.bathroom);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.bathroom)
   *propertyInspectionResidential.bathroom = mPropertyInspectionResidential_Bathroom;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Bedroom(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.bedroom);

{
   mPropertyInspectionResidential_Bedroom = propertyInspectionResidential.bedroom;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Bedroom(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.bedroom);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.bedroom)
   *propertyInspectionResidential.bedroom = mPropertyInspectionResidential_Bedroom;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_DiningRoom(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.diningRoom);

{
   mPropertyInspectionResidential_DiningRoom = propertyInspectionResidential.diningRoom;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_DiningRoom(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.diningRoom);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.diningRoom)
   *propertyInspectionResidential.diningRoom = mPropertyInspectionResidential_DiningRoom;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_InternalDoorways(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.internalDoorways);

{
   mPropertyInspectionResidential_InternalDoorways = propertyInspectionResidential.internalDoorways;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_InternalDoorways(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.internalDoorways);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.internalDoorways)
   *propertyInspectionResidential.internalDoorways = mPropertyInspectionResidential_InternalDoorways;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Driveways(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.driveways);

{
   mPropertyInspectionResidential_Driveways = propertyInspectionResidential.driveways;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Driveways(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.driveways);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.driveways)
   *propertyInspectionResidential.driveways = mPropertyInspectionResidential_Driveways;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Ensuite(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.ensuite);

{
   mPropertyInspectionResidential_Ensuite = propertyInspectionResidential.ensuite;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Ensuite(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.ensuite);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.ensuite)
   *propertyInspectionResidential.ensuite = mPropertyInspectionResidential_Ensuite;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Entrance(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.entrance);

{
   mPropertyInspectionResidential_Entrance = propertyInspectionResidential.entrance;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Entrance(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.entrance);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.entrance)
   *propertyInspectionResidential.entrance = mPropertyInspectionResidential_Entrance;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_ExternalAreas(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.externalAreas);

{
   mPropertyInspectionResidential_ExternalAreas = propertyInspectionResidential.externalAreas;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_ExternalAreas(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.externalAreas);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.externalAreas)
   *propertyInspectionResidential.externalAreas = mPropertyInspectionResidential_ExternalAreas;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_ExternalDoors(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.externalDoors);

{
   mPropertyInspectionResidential_ExternalDoors = propertyInspectionResidential.externalDoors;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_ExternalDoors(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.externalDoors);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.externalDoors)
   *propertyInspectionResidential.externalDoors = mPropertyInspectionResidential_ExternalDoors;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_FamilyRoom(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.familyRoom);

{
   mPropertyInspectionResidential_FamilyRoom = propertyInspectionResidential.familyRoom;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_FamilyRoom(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.familyRoom);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.familyRoom)
   *propertyInspectionResidential.familyRoom = mPropertyInspectionResidential_FamilyRoom;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Fences(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.fences);

{
   mPropertyInspectionResidential_Fences = propertyInspectionResidential.fences;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Fences(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.fences);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.fences)
   *propertyInspectionResidential.fences = mPropertyInspectionResidential_Fences;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_GarageCarport(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.garageCarport);

{
   mPropertyInspectionResidential_GarageCarport = propertyInspectionResidential.garageCarport;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_GarageCarport(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.garageCarport);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.garageCarport)
   *propertyInspectionResidential.garageCarport = mPropertyInspectionResidential_GarageCarport;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Gates(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.gates);

{
   mPropertyInspectionResidential_Gates = propertyInspectionResidential.gates;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Gates(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.gates);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.gates)
   *propertyInspectionResidential.gates = mPropertyInspectionResidential_Gates;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Gutterings(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.gutterings);

{
   mPropertyInspectionResidential_Gutterings = propertyInspectionResidential.gutterings;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Gutterings(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.gutterings);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.gutterings)
   *propertyInspectionResidential.gutterings = mPropertyInspectionResidential_Gutterings;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Hallway(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.hallway);

{
   mPropertyInspectionResidential_Hallway = propertyInspectionResidential.hallway;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Hallway(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.hallway);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.hallway)
   *propertyInspectionResidential.hallway = mPropertyInspectionResidential_Hallway;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_HotWater(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.hotWater);

{
   mPropertyInspectionResidential_HotWater = propertyInspectionResidential.hotWater;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_HotWater(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.hotWater);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.hotWater)
   *propertyInspectionResidential.hotWater = mPropertyInspectionResidential_HotWater;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Kitchen(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.kitchen);

{
   mPropertyInspectionResidential_Kitchen = propertyInspectionResidential.kitchen;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Kitchen(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.kitchen);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.kitchen)
   *propertyInspectionResidential.kitchen = mPropertyInspectionResidential_Kitchen;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Laundry(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.laundry);

{
   mPropertyInspectionResidential_Laundry = propertyInspectionResidential.laundry;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Laundry(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.laundry);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.laundry)
   *propertyInspectionResidential.laundry = mPropertyInspectionResidential_Laundry;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_LetterBox(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.letterBox);

{
   mPropertyInspectionResidential_LetterBox = propertyInspectionResidential.letterBox;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_LetterBox(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.letterBox);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.letterBox)
   *propertyInspectionResidential.letterBox = mPropertyInspectionResidential_LetterBox;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_LivingRoom(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.livingRoom);

{
   mPropertyInspectionResidential_LivingRoom = propertyInspectionResidential.livingRoom;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_LivingRoom(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.livingRoom);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.livingRoom)
   *propertyInspectionResidential.livingRoom = mPropertyInspectionResidential_LivingRoom;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Notes(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.notes);

{
   mPropertyInspectionResidential_Notes = propertyInspectionResidential.notes;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Notes(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.notes);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.notes)
   *propertyInspectionResidential.notes = mPropertyInspectionResidential_Notes;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_OtherItems(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.otherItems);

{
   mPropertyInspectionResidential_OtherItems = propertyInspectionResidential.otherItems;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_OtherItems(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.otherItems);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.otherItems)
   *propertyInspectionResidential.otherItems = mPropertyInspectionResidential_OtherItems;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Pests(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.pests);

{
   mPropertyInspectionResidential_Pests = propertyInspectionResidential.pests;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Pests(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.pests);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.pests)
   *propertyInspectionResidential.pests = mPropertyInspectionResidential_Pests;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_PetIssues(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.petIssues);

{
   mPropertyInspectionResidential_PetIssues = propertyInspectionResidential.petIssues;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_PetIssues(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.petIssues);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.petIssues)
   *propertyInspectionResidential.petIssues = mPropertyInspectionResidential_PetIssues;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Plumbing(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.plumbing);

{
   mPropertyInspectionResidential_Plumbing = propertyInspectionResidential.plumbing;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Plumbing(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.plumbing);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.plumbing)
   *propertyInspectionResidential.plumbing = mPropertyInspectionResidential_Plumbing;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Pool(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.pool);

{
   mPropertyInspectionResidential_Pool = propertyInspectionResidential.pool;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Pool(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.pool);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.pool)
   *propertyInspectionResidential.pool = mPropertyInspectionResidential_Pool;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_RecreationRoom(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.recreationRoom);

{
   mPropertyInspectionResidential_RecreationRoom = propertyInspectionResidential.recreationRoom;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_RecreationRoom(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.recreationRoom);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.recreationRoom)
   *propertyInspectionResidential.recreationRoom = mPropertyInspectionResidential_RecreationRoom;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Roof(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.roof);

{
   mPropertyInspectionResidential_Roof = propertyInspectionResidential.roof;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Roof(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.roof);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.roof)
   *propertyInspectionResidential.roof = mPropertyInspectionResidential_Roof;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_ScreenDoors(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.screenDoors);

{
   mPropertyInspectionResidential_ScreenDoors = propertyInspectionResidential.screenDoors;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_ScreenDoors(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.screenDoors);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.screenDoors)
   *propertyInspectionResidential.screenDoors = mPropertyInspectionResidential_ScreenDoors;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_StructuralIntegrity(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.structuralIntegrity);

{
   mPropertyInspectionResidential_StructuralIntegrity = propertyInspectionResidential.structuralIntegrity;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_StructuralIntegrity(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.structuralIntegrity);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.structuralIntegrity)
   *propertyInspectionResidential.structuralIntegrity = mPropertyInspectionResidential_StructuralIntegrity;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_TennisCourt(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.tennisCourt);

{
   mPropertyInspectionResidential_TennisCourt = propertyInspectionResidential.tennisCourt;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_TennisCourt(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.tennisCourt);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.tennisCourt)
   *propertyInspectionResidential.tennisCourt = mPropertyInspectionResidential_TennisCourt;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_Toilet(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.toilet);

{
   mPropertyInspectionResidential_Toilet = propertyInspectionResidential.toilet;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_Toilet(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.toilet);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.toilet)
   *propertyInspectionResidential.toilet = mPropertyInspectionResidential_Toilet;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_WiringElectrical(
  /* [in] */ ArrayOf<const String&> propertyInspectionResidential.wiringElectrical);

{
   mPropertyInspectionResidential_WiringElectrical = propertyInspectionResidential.wiringElectrical;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_WiringElectrical(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionResidential.wiringElectrical);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.wiringElectrical)
   *propertyInspectionResidential.wiringElectrical = mPropertyInspectionResidential_WiringElectrical;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner propertyInspectionResidential.businessChannelOwnerId);

{
   mPropertyInspectionResidential_BusinessChannelOwnerId = propertyInspectionResidential.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* propertyInspectionResidential.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.businessChannelOwnerId)
   *propertyInspectionResidential.businessChannelOwnerId = mPropertyInspectionResidential_BusinessChannelOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_BranchId(
  /* [in] */ CAdministration.branch propertyInspectionResidential.branchId);

{
   mPropertyInspectionResidential_BranchId = propertyInspectionResidential.branchId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_BranchId(
  /* [out] */ CAdministration.branch* propertyInspectionResidential.branchId);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.branchId)
   *propertyInspectionResidential.branchId = mPropertyInspectionResidential_BranchId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_DeptId(
  /* [in] */ CAdministration.department propertyInspectionResidential.deptId);

{
   mPropertyInspectionResidential_DeptId = propertyInspectionResidential.deptId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_DeptId(
  /* [out] */ CAdministration.department* propertyInspectionResidential.deptId);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.deptId)
   *propertyInspectionResidential.deptId = mPropertyInspectionResidential_DeptId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_PropertyId(
  /* [in] */ property propertyInspectionResidential.propertyId);

{
   mPropertyInspectionResidential_PropertyId = propertyInspectionResidential.propertyId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_PropertyId(
  /* [out] */ property* propertyInspectionResidential.propertyId);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.propertyId)
   *propertyInspectionResidential.propertyId = mPropertyInspectionResidential_PropertyId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> propertyInspectionResidential.docRefIds);

{
   mPropertyInspectionResidential_DocRefIds = propertyInspectionResidential.docRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* propertyInspectionResidential.docRefIds);
{
   VALIDATE_NOT_NULL(propertyInspectionResidential.docRefIds)
   *propertyInspectionResidential.docRefIds = mPropertyInspectionResidential_DocRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> propertyInspectionResidential.imageRefIds);

{
   mPropertyInspectionResidential_ImageRefIds = propertyInspectionResidential.imageRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* propertyInspectionResidential.imageRefIds);
{
   VALIDATE_NOT_NULL(propertyInspectionResidential.imageRefIds)
   *propertyInspectionResidential.imageRefIds = mPropertyInspectionResidential_ImageRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> propertyInspectionResidential.audioRefIds);

{
   mPropertyInspectionResidential_AudioRefIds = propertyInspectionResidential.audioRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* propertyInspectionResidential.audioRefIds);
{
   VALIDATE_NOT_NULL(propertyInspectionResidential.audioRefIds)
   *propertyInspectionResidential.audioRefIds = mPropertyInspectionResidential_AudioRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_VideoRefIds(
  /* [in] */ ArrayOf<CAdministration.video> propertyInspectionResidential.videoRefIds);

{
   mPropertyInspectionResidential_VideoRefIds = propertyInspectionResidential.videoRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* propertyInspectionResidential.videoRefIds);
{
   VALIDATE_NOT_NULL(propertyInspectionResidential.videoRefIds)
   *propertyInspectionResidential.videoRefIds = mPropertyInspectionResidential_VideoRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_TenancyId(
  /* [in] */ tenant propertyInspectionResidential.tenancyId);

{
   mPropertyInspectionResidential_TenancyId = propertyInspectionResidential.tenancyId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_TenancyId(
  /* [out] */ tenant* propertyInspectionResidential.tenancyId);

{
   VALIDATE_NOT_NULL(propertyInspectionResidential.tenancyId)
   *propertyInspectionResidential.tenancyId = mPropertyInspectionResidential_TenancyId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionResidential_EmployeeIds(
  /* [in] */ ArrayOf<CAdministration.staff> propertyInspectionResidential.employeeIds);

{
   mPropertyInspectionResidential_EmployeeIds = propertyInspectionResidential.employeeIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionResidential_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* propertyInspectionResidential.employeeIds);
{
   VALIDATE_NOT_NULL(propertyInspectionResidential.employeeIds)
   *propertyInspectionResidential.employeeIds = mPropertyInspectionResidential_EmployeeIds;
   return NOERROR;
}





   ECODE CProperty::SetPropertyInspectionCommercial_PropertyInspectionCommercId(
  /* [in] */ const String& propertyInspectionCommercial.propertyInspectionCommercId);

{
   mPropertyInspectionCommercial_PropertyInspectionCommercId = propertyInspectionCommercial.propertyInspectionCommercId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_PropertyInspectionCommercId(
  /* [out] */ String* propertyInspectionCommercial.propertyInspectionCommercId);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.propertyInspectionCommercId)
   *propertyInspectionCommercial.propertyInspectionCommercId = mPropertyInspectionCommercial_PropertyInspectionCommercId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_InspectionDates(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.inspectionDates);

{
   mPropertyInspectionCommercial_InspectionDates = propertyInspectionCommercial.inspectionDates;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_InspectionDates(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.inspectionDates);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.inspectionDates)
   *propertyInspectionCommercial.inspectionDates = mPropertyInspectionCommercial_InspectionDates;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_PropertyAddressString(
  /* [in] */ const String& propertyInspectionCommercial.propertyAddressString);

{
   mPropertyInspectionCommercial_PropertyAddressString = propertyInspectionCommercial.propertyAddressString;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_PropertyAddressString(
  /* [out] */ String* propertyInspectionCommercial.propertyAddressString);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.propertyAddressString)
   *propertyInspectionCommercial.propertyAddressString = mPropertyInspectionCommercial_PropertyAddressString;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_UnitNumber(
  /* [in] */ const String& propertyInspectionCommercial.unitNumber);

{
   mPropertyInspectionCommercial_UnitNumber = propertyInspectionCommercial.unitNumber;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_UnitNumber(
  /* [out] */ String* propertyInspectionCommercial.unitNumber);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.unitNumber)
   *propertyInspectionCommercial.unitNumber = mPropertyInspectionCommercial_UnitNumber;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_AirConditioning(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.airConditioning);

{
   mPropertyInspectionCommercial_AirConditioning = propertyInspectionCommercial.airConditioning;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_AirConditioning(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.airConditioning);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.airConditioning)
   *propertyInspectionCommercial.airConditioning = mPropertyInspectionCommercial_AirConditioning;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_DiningRoom(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.diningRoom);

{
   mPropertyInspectionCommercial_DiningRoom = propertyInspectionCommercial.diningRoom;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_DiningRoom(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.diningRoom);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.diningRoom)
   *propertyInspectionCommercial.diningRoom = mPropertyInspectionCommercial_DiningRoom;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_InternalDoorways(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.internalDoorways);

{
   mPropertyInspectionCommercial_InternalDoorways = propertyInspectionCommercial.internalDoorways;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_InternalDoorways(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.internalDoorways);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.internalDoorways)
   *propertyInspectionCommercial.internalDoorways = mPropertyInspectionCommercial_InternalDoorways;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Driveways(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.driveways);

{
   mPropertyInspectionCommercial_Driveways = propertyInspectionCommercial.driveways;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Driveways(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.driveways);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.driveways)
   *propertyInspectionCommercial.driveways = mPropertyInspectionCommercial_Driveways;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Entrance(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.entrance);

{
   mPropertyInspectionCommercial_Entrance = propertyInspectionCommercial.entrance;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Entrance(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.entrance);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.entrance)
   *propertyInspectionCommercial.entrance = mPropertyInspectionCommercial_Entrance;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_ExternalAreas(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.externalAreas);

{
   mPropertyInspectionCommercial_ExternalAreas = propertyInspectionCommercial.externalAreas;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_ExternalAreas(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.externalAreas);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.externalAreas)
   *propertyInspectionCommercial.externalAreas = mPropertyInspectionCommercial_ExternalAreas;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_ExternalDoors(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.externalDoors);

{
   mPropertyInspectionCommercial_ExternalDoors = propertyInspectionCommercial.externalDoors;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_ExternalDoors(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.externalDoors);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.externalDoors)
   *propertyInspectionCommercial.externalDoors = mPropertyInspectionCommercial_ExternalDoors;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_FactorySpace(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.factorySpace);

{
   mPropertyInspectionCommercial_FactorySpace = propertyInspectionCommercial.factorySpace;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_FactorySpace(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.factorySpace);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.factorySpace)
   *propertyInspectionCommercial.factorySpace = mPropertyInspectionCommercial_FactorySpace;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Fences(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.fences);

{
   mPropertyInspectionCommercial_Fences = propertyInspectionCommercial.fences;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Fences(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.fences);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.fences)
   *propertyInspectionCommercial.fences = mPropertyInspectionCommercial_Fences;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_GarageCarport(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.garageCarport);

{
   mPropertyInspectionCommercial_GarageCarport = propertyInspectionCommercial.garageCarport;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_GarageCarport(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.garageCarport);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.garageCarport)
   *propertyInspectionCommercial.garageCarport = mPropertyInspectionCommercial_GarageCarport;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Gates(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.gates);

{
   mPropertyInspectionCommercial_Gates = propertyInspectionCommercial.gates;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Gates(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.gates);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.gates)
   *propertyInspectionCommercial.gates = mPropertyInspectionCommercial_Gates;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Gutterings(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.gutterings);

{
   mPropertyInspectionCommercial_Gutterings = propertyInspectionCommercial.gutterings;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Gutterings(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.gutterings);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.gutterings)
   *propertyInspectionCommercial.gutterings = mPropertyInspectionCommercial_Gutterings;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Hallway(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.hallway);

{
   mPropertyInspectionCommercial_Hallway = propertyInspectionCommercial.hallway;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Hallway(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.hallway);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.hallway)
   *propertyInspectionCommercial.hallway = mPropertyInspectionCommercial_Hallway;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Heating(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.heating);

{
   mPropertyInspectionCommercial_Heating = propertyInspectionCommercial.heating;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Heating(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.heating);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.heating)
   *propertyInspectionCommercial.heating = mPropertyInspectionCommercial_Heating;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_HotWater(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.hotWater);

{
   mPropertyInspectionCommercial_HotWater = propertyInspectionCommercial.hotWater;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_HotWater(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.hotWater);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.hotWater)
   *propertyInspectionCommercial.hotWater = mPropertyInspectionCommercial_HotWater;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Kitchen(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.kitchen);

{
   mPropertyInspectionCommercial_Kitchen = propertyInspectionCommercial.kitchen;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Kitchen(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.kitchen);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.kitchen)
   *propertyInspectionCommercial.kitchen = mPropertyInspectionCommercial_Kitchen;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Laundry(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.laundry);

{
   mPropertyInspectionCommercial_Laundry = propertyInspectionCommercial.laundry;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Laundry(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.laundry);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.laundry)
   *propertyInspectionCommercial.laundry = mPropertyInspectionCommercial_Laundry;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Notes(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.notes);

{
   mPropertyInspectionCommercial_Notes = propertyInspectionCommercial.notes;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Notes(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.notes);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.notes)
   *propertyInspectionCommercial.notes = mPropertyInspectionCommercial_Notes;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_OfficeSpace(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.officeSpace);

{
   mPropertyInspectionCommercial_OfficeSpace = propertyInspectionCommercial.officeSpace;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_OfficeSpace(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.officeSpace);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.officeSpace)
   *propertyInspectionCommercial.officeSpace = mPropertyInspectionCommercial_OfficeSpace;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_ParkingSpaces(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.parkingSpaces);

{
   mPropertyInspectionCommercial_ParkingSpaces = propertyInspectionCommercial.parkingSpaces;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_ParkingSpaces(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.parkingSpaces);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.parkingSpaces)
   *propertyInspectionCommercial.parkingSpaces = mPropertyInspectionCommercial_ParkingSpaces;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_OtherItems(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.otherItems);

{
   mPropertyInspectionCommercial_OtherItems = propertyInspectionCommercial.otherItems;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_OtherItems(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.otherItems);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.otherItems)
   *propertyInspectionCommercial.otherItems = mPropertyInspectionCommercial_OtherItems;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Pests(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.pests);

{
   mPropertyInspectionCommercial_Pests = propertyInspectionCommercial.pests;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Pests(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.pests);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.pests)
   *propertyInspectionCommercial.pests = mPropertyInspectionCommercial_Pests;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_OtherIssues(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.otherIssues);

{
   mPropertyInspectionCommercial_OtherIssues = propertyInspectionCommercial.otherIssues;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_OtherIssues(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.otherIssues);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.otherIssues)
   *propertyInspectionCommercial.otherIssues = mPropertyInspectionCommercial_OtherIssues;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Plumbing(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.plumbing);

{
   mPropertyInspectionCommercial_Plumbing = propertyInspectionCommercial.plumbing;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Plumbing(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.plumbing);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.plumbing)
   *propertyInspectionCommercial.plumbing = mPropertyInspectionCommercial_Plumbing;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_RecreationRoom(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.recreationRoom);

{
   mPropertyInspectionCommercial_RecreationRoom = propertyInspectionCommercial.recreationRoom;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_RecreationRoom(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.recreationRoom);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.recreationRoom)
   *propertyInspectionCommercial.recreationRoom = mPropertyInspectionCommercial_RecreationRoom;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_RetailSpace(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.retailSpace);

{
   mPropertyInspectionCommercial_RetailSpace = propertyInspectionCommercial.retailSpace;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_RetailSpace(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.retailSpace);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.retailSpace)
   *propertyInspectionCommercial.retailSpace = mPropertyInspectionCommercial_RetailSpace;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Roof(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.roof);

{
   mPropertyInspectionCommercial_Roof = propertyInspectionCommercial.roof;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Roof(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.roof);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.roof)
   *propertyInspectionCommercial.roof = mPropertyInspectionCommercial_Roof;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_ScreenDoors(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.screenDoors);

{
   mPropertyInspectionCommercial_ScreenDoors = propertyInspectionCommercial.screenDoors;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_ScreenDoors(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.screenDoors);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.screenDoors)
   *propertyInspectionCommercial.screenDoors = mPropertyInspectionCommercial_ScreenDoors;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_StructuralIntegrity(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.structuralIntegrity);

{
   mPropertyInspectionCommercial_StructuralIntegrity = propertyInspectionCommercial.structuralIntegrity;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_StructuralIntegrity(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.structuralIntegrity);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.structuralIntegrity)
   *propertyInspectionCommercial.structuralIntegrity = mPropertyInspectionCommercial_StructuralIntegrity;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Floors(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.floors);

{
   mPropertyInspectionCommercial_Floors = propertyInspectionCommercial.floors;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Floors(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.floors);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.floors)
   *propertyInspectionCommercial.floors = mPropertyInspectionCommercial_Floors;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Toilet(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.toilet);

{
   mPropertyInspectionCommercial_Toilet = propertyInspectionCommercial.toilet;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Toilet(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.toilet);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.toilet)
   *propertyInspectionCommercial.toilet = mPropertyInspectionCommercial_Toilet;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_VentilationIncludingFans(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.ventilationIncludingFans);

{
   mPropertyInspectionCommercial_VentilationIncludingFans = propertyInspectionCommercial.ventilationIncludingFans;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_VentilationIncludingFans(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.ventilationIncludingFans);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.ventilationIncludingFans)
   *propertyInspectionCommercial.ventilationIncludingFans = mPropertyInspectionCommercial_VentilationIncludingFans;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_WarehouseSpace(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.warehouseSpace);

{
   mPropertyInspectionCommercial_WarehouseSpace = propertyInspectionCommercial.warehouseSpace;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_WarehouseSpace(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.warehouseSpace);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.warehouseSpace)
   *propertyInspectionCommercial.warehouseSpace = mPropertyInspectionCommercial_WarehouseSpace;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_Washroom(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.washroom);

{
   mPropertyInspectionCommercial_Washroom = propertyInspectionCommercial.washroom;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_Washroom(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.washroom);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.washroom)
   *propertyInspectionCommercial.washroom = mPropertyInspectionCommercial_Washroom;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_WiringElectrical(
  /* [in] */ ArrayOf<const String&> propertyInspectionCommercial.wiringElectrical);

{
   mPropertyInspectionCommercial_WiringElectrical = propertyInspectionCommercial.wiringElectrical;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_WiringElectrical(
     /* [out, callee] */ ArrayOf<String>* propertyInspectionCommercial.wiringElectrical);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.wiringElectrical)
   *propertyInspectionCommercial.wiringElectrical = mPropertyInspectionCommercial_WiringElectrical;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner propertyInspectionCommercial.businessChannelOwnerId);

{
   mPropertyInspectionCommercial_BusinessChannelOwnerId = propertyInspectionCommercial.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* propertyInspectionCommercial.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.businessChannelOwnerId)
   *propertyInspectionCommercial.businessChannelOwnerId = mPropertyInspectionCommercial_BusinessChannelOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_BranchId(
  /* [in] */ CAdministration.branch propertyInspectionCommercial.branchId);

{
   mPropertyInspectionCommercial_BranchId = propertyInspectionCommercial.branchId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_BranchId(
  /* [out] */ CAdministration.branch* propertyInspectionCommercial.branchId);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.branchId)
   *propertyInspectionCommercial.branchId = mPropertyInspectionCommercial_BranchId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_DeptId(
  /* [in] */ CAdministration.department propertyInspectionCommercial.deptId);

{
   mPropertyInspectionCommercial_DeptId = propertyInspectionCommercial.deptId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_DeptId(
  /* [out] */ CAdministration.department* propertyInspectionCommercial.deptId);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.deptId)
   *propertyInspectionCommercial.deptId = mPropertyInspectionCommercial_DeptId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_PropertyId(
  /* [in] */ property propertyInspectionCommercial.propertyId);

{
   mPropertyInspectionCommercial_PropertyId = propertyInspectionCommercial.propertyId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_PropertyId(
  /* [out] */ property* propertyInspectionCommercial.propertyId);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.propertyId)
   *propertyInspectionCommercial.propertyId = mPropertyInspectionCommercial_PropertyId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_TenancyId(
  /* [in] */ tenant propertyInspectionCommercial.tenancyId);

{
   mPropertyInspectionCommercial_TenancyId = propertyInspectionCommercial.tenancyId;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_TenancyId(
  /* [out] */ tenant* propertyInspectionCommercial.tenancyId);

{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.tenancyId)
   *propertyInspectionCommercial.tenancyId = mPropertyInspectionCommercial_TenancyId;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_EmployeeIds(
  /* [in] */ ArrayOf<CAdministration.staff> propertyInspectionCommercial.employeeIds);

{
   mPropertyInspectionCommercial_EmployeeIds = propertyInspectionCommercial.employeeIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* propertyInspectionCommercial.employeeIds);
{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.employeeIds)
   *propertyInspectionCommercial.employeeIds = mPropertyInspectionCommercial_EmployeeIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> propertyInspectionCommercial.docRefIds);

{
   mPropertyInspectionCommercial_DocRefIds = propertyInspectionCommercial.docRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* propertyInspectionCommercial.docRefIds);
{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.docRefIds)
   *propertyInspectionCommercial.docRefIds = mPropertyInspectionCommercial_DocRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> propertyInspectionCommercial.imageRefIds);

{
   mPropertyInspectionCommercial_ImageRefIds = propertyInspectionCommercial.imageRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* propertyInspectionCommercial.imageRefIds);
{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.imageRefIds)
   *propertyInspectionCommercial.imageRefIds = mPropertyInspectionCommercial_ImageRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_AudioRefIds(
  /* [in] */ ArrayOf<CAdministration.audio> propertyInspectionCommercial.audioRefIds);

{
   mPropertyInspectionCommercial_AudioRefIds = propertyInspectionCommercial.audioRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_AudioRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.audio>* propertyInspectionCommercial.audioRefIds);
{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.audioRefIds)
   *propertyInspectionCommercial.audioRefIds = mPropertyInspectionCommercial_AudioRefIds;
   return NOERROR;
}


   ECODE CProperty::SetPropertyInspectionCommercial_VideoRefIds(
  /* [in] */ ArrayOf<CAdministration.video> propertyInspectionCommercial.videoRefIds);

{
   mPropertyInspectionCommercial_VideoRefIds = propertyInspectionCommercial.videoRefIds;
   return NOERROR;
}

    ECODE CProperty::GetPropertyInspectionCommercial_VideoRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.video>* propertyInspectionCommercial.videoRefIds);
{
   VALIDATE_NOT_NULL(propertyInspectionCommercial.videoRefIds)
   *propertyInspectionCommercial.videoRefIds = mPropertyInspectionCommercial_VideoRefIds;
   return NOERROR;
}





   ECODE CProperty::SetTenancyCaseManagement_TenancyCaseMngmntId(
  /* [in] */ const String& tenancyCaseManagement.tenancyCaseMngmntId);

{
   mTenancyCaseManagement_TenancyCaseMngmntId = tenancyCaseManagement.tenancyCaseMngmntId;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_TenancyCaseMngmntId(
  /* [out] */ String* tenancyCaseManagement.tenancyCaseMngmntId);

{
   VALIDATE_NOT_NULL(tenancyCaseManagement.tenancyCaseMngmntId)
   *tenancyCaseManagement.tenancyCaseMngmntId = mTenancyCaseManagement_TenancyCaseMngmntId;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_SupervisorStaffId(
  /* [in] */ const String& tenancyCaseManagement.supervisorStaffId);

{
   mTenancyCaseManagement_SupervisorStaffId = tenancyCaseManagement.supervisorStaffId;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_SupervisorStaffId(
  /* [out] */ String* tenancyCaseManagement.supervisorStaffId);

{
   VALIDATE_NOT_NULL(tenancyCaseManagement.supervisorStaffId)
   *tenancyCaseManagement.supervisorStaffId = mTenancyCaseManagement_SupervisorStaffId;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_TenantActionsInChronologicalOrder(
  /* [in] */ ArrayOf<const String&> tenancyCaseManagement.tenantActionsInChronologicalOrder);

{
   mTenancyCaseManagement_TenantActionsInChronologicalOrder = tenancyCaseManagement.tenantActionsInChronologicalOrder;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_TenantActionsInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* tenancyCaseManagement.tenantActionsInChronologicalOrder);

{
   VALIDATE_NOT_NULL(tenancyCaseManagement.tenantActionsInChronologicalOrder)
   *tenancyCaseManagement.tenantActionsInChronologicalOrder = mTenancyCaseManagement_TenantActionsInChronologicalOrder;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_DatesTimesOfEvents(
  /* [in] */ ArrayOf<const String&> tenancyCaseManagement.datesTimesOfEvents);

{
   mTenancyCaseManagement_DatesTimesOfEvents = tenancyCaseManagement.datesTimesOfEvents;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_DatesTimesOfEvents(
     /* [out, callee] */ ArrayOf<String>* tenancyCaseManagement.datesTimesOfEvents);

{
   VALIDATE_NOT_NULL(tenancyCaseManagement.datesTimesOfEvents)
   *tenancyCaseManagement.datesTimesOfEvents = mTenancyCaseManagement_DatesTimesOfEvents;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_OurResponsesInChronologicalOrder(
  /* [in] */ ArrayOf<const String&> tenancyCaseManagement.ourResponsesInChronologicalOrder);

{
   mTenancyCaseManagement_OurResponsesInChronologicalOrder = tenancyCaseManagement.ourResponsesInChronologicalOrder;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_OurResponsesInChronologicalOrder(
     /* [out, callee] */ ArrayOf<String>* tenancyCaseManagement.ourResponsesInChronologicalOrder);

{
   VALIDATE_NOT_NULL(tenancyCaseManagement.ourResponsesInChronologicalOrder)
   *tenancyCaseManagement.ourResponsesInChronologicalOrder = mTenancyCaseManagement_OurResponsesInChronologicalOrder;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_DatesTimesOfResponses(
  /* [in] */ ArrayOf<const String&> tenancyCaseManagement.datesTimesOfResponses);

{
   mTenancyCaseManagement_DatesTimesOfResponses = tenancyCaseManagement.datesTimesOfResponses;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_DatesTimesOfResponses(
     /* [out, callee] */ ArrayOf<String>* tenancyCaseManagement.datesTimesOfResponses);

{
   VALIDATE_NOT_NULL(tenancyCaseManagement.datesTimesOfResponses)
   *tenancyCaseManagement.datesTimesOfResponses = mTenancyCaseManagement_DatesTimesOfResponses;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_Resolved(
  /* [in] */ Boolean tenancyCaseManagement.resolved);

{
   mTenancyCaseManagement_Resolved = tenancyCaseManagement.resolved;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_Resolved(
  /* [out] */ Boolean* tenancyCaseManagement.resolved);

{
   VALIDATE_NOT_NULL(tenancyCaseManagement.resolved)
   *tenancyCaseManagement.resolved = mTenancyCaseManagement_Resolved;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_BusinessChannelOwnerId(
  /* [in] */ CRegister.businessChannelOwner tenancyCaseManagement.businessChannelOwnerId);

{
   mTenancyCaseManagement_BusinessChannelOwnerId = tenancyCaseManagement.businessChannelOwnerId;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_BusinessChannelOwnerId(
  /* [out] */ CRegister.businessChannelOwner* tenancyCaseManagement.businessChannelOwnerId);

{
   VALIDATE_NOT_NULL(tenancyCaseManagement.businessChannelOwnerId)
   *tenancyCaseManagement.businessChannelOwnerId = mTenancyCaseManagement_BusinessChannelOwnerId;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_PropertyId(
  /* [in] */ property tenancyCaseManagement.propertyId);

{
   mTenancyCaseManagement_PropertyId = tenancyCaseManagement.propertyId;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_PropertyId(
  /* [out] */ property* tenancyCaseManagement.propertyId);

{
   VALIDATE_NOT_NULL(tenancyCaseManagement.propertyId)
   *tenancyCaseManagement.propertyId = mTenancyCaseManagement_PropertyId;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_BranchId(
  /* [in] */ CAdministration.branch tenancyCaseManagement.branchId);

{
   mTenancyCaseManagement_BranchId = tenancyCaseManagement.branchId;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_BranchId(
  /* [out] */ CAdministration.branch* tenancyCaseManagement.branchId);

{
   VALIDATE_NOT_NULL(tenancyCaseManagement.branchId)
   *tenancyCaseManagement.branchId = mTenancyCaseManagement_BranchId;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_TenancyId(
  /* [in] */ tenant tenancyCaseManagement.tenancyId);

{
   mTenancyCaseManagement_TenancyId = tenancyCaseManagement.tenancyId;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_TenancyId(
  /* [out] */ tenant* tenancyCaseManagement.tenancyId);

{
   VALIDATE_NOT_NULL(tenancyCaseManagement.tenancyId)
   *tenancyCaseManagement.tenancyId = mTenancyCaseManagement_TenancyId;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_CustomerIds(
  /* [in] */ ArrayOf<CCustomer.customer> tenancyCaseManagement.customerIds);

{
   mTenancyCaseManagement_CustomerIds = tenancyCaseManagement.customerIds;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_CustomerIds(
     /* [out, callee] */ ArrayOf<CCustomer.customer>* tenancyCaseManagement.customerIds);
{
   VALIDATE_NOT_NULL(tenancyCaseManagement.customerIds)
   *tenancyCaseManagement.customerIds = mTenancyCaseManagement_CustomerIds;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_EmployeeIds(
  /* [in] */ ArrayOf<CAdministration.staff> tenancyCaseManagement.employeeIds);

{
   mTenancyCaseManagement_EmployeeIds = tenancyCaseManagement.employeeIds;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_EmployeeIds(
     /* [out, callee] */ ArrayOf<CAdministration.staff>* tenancyCaseManagement.employeeIds);
{
   VALIDATE_NOT_NULL(tenancyCaseManagement.employeeIds)
   *tenancyCaseManagement.employeeIds = mTenancyCaseManagement_EmployeeIds;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_DocRefIds(
  /* [in] */ ArrayOf<CAdministration.documents> tenancyCaseManagement.docRefIds);

{
   mTenancyCaseManagement_DocRefIds = tenancyCaseManagement.docRefIds;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_DocRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.documents>* tenancyCaseManagement.docRefIds);
{
   VALIDATE_NOT_NULL(tenancyCaseManagement.docRefIds)
   *tenancyCaseManagement.docRefIds = mTenancyCaseManagement_DocRefIds;
   return NOERROR;
}


   ECODE CProperty::SetTenancyCaseManagement_ImageRefIds(
  /* [in] */ ArrayOf<CAdministration.images> tenancyCaseManagement.imageRefIds);

{
   mTenancyCaseManagement_ImageRefIds = tenancyCaseManagement.imageRefIds;
   return NOERROR;
}

    ECODE CProperty::GetTenancyCaseManagement_ImageRefIds(
     /* [out, callee] */ ArrayOf<CAdministration.images>* tenancyCaseManagement.imageRefIds);
{
   VALIDATE_NOT_NULL(tenancyCaseManagement.imageRefIds)
   *tenancyCaseManagement.imageRefIds = mTenancyCaseManagement_ImageRefIds;
   return NOERROR;
}


} // ChubbaMorris
} // Elastos

