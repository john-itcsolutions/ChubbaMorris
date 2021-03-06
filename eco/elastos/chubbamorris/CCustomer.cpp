#include "elastos/chubbamorris/CCustomer.h"
#include <stdio.h>

using Elastos::Core::EIID_IComparable;

namespace Elastos {
namespace ChubbaMorris {

// The class which implements a CAR interface requires macros CAR_INTERFACE_IMPL/CAR_INTERFACE_IMPL
CAR_INTERFACE_IMPL(CCustomer, Object, ICH, IComparable)

// Initialize member variables using member initialization lists.
CCustomer::CCustomer()
    : mSetCustomer_CustomerId("String")
    , mGetCustomer_CustomerId("String")
    , mSetCustomer_LinkedToThisBusinessChannelOwnerId("String")
    , mGetCustomer_LinkedToThisBusinessChannelOwnerId("String")
    , mSetCustomer_Relationship(Contact)
    , mGetCustomer_Relationship(Contact)
    , mSetCustomer_CustomerTypesIds(["String"])
    , mGetCustomer_CustomerTypesIds(["String"])
    , mSetCustomer_OurBranchId("String")
    , mGetCustomer_OurBranchId("String")
    , mSetCustomer_FirstName("String")
    , mGetCustomer_FirstName("String")
    , mSetCustomer_LastName("String")
    , mGetCustomer_LastName("String")
    , mSetCustomer_ResidentialAddress(["String"])
    , mGetCustomer_ResidentialAddress(["String"])
    , mSetCustomer_PostalAddress(["String"])
    , mGetCustomer_PostalAddress(["String"])
    , mSetCustomer_DeliveryAddress(["String"])
    , mGetCustomer_DeliveryAddress(["String"])
    , mSetCustomer_BillingAddress(["String"])
    , mGetCustomer_BillingAddress(["String"])
    , mSetCustomer_Email("String")
    , mGetCustomer_Email("String")
    , mSetCustomer_HomePhone(0)
    , mGetCustomer_HomePhone(0)
    , mSetCustomer_MobilePhone(0)
    , mGetCustomer_MobilePhone(0)
    , mSetCustomer_WorkPhone(0)
    , mGetCustomer_WorkPhone(0)
    , mSetCustomer_AmenitiesRequired(["String"])
    , mGetCustomer_AmenitiesRequired(["String"])
    , mSetCustomer_StreetsDesired(["String"])
    , mGetCustomer_StreetsDesired(["String"])
    , mSetCustomer_PostcodesDesired(["String"])
    , mGetCustomer_PostcodesDesired(["String"])
    , mSetCustomer_BedroomsRequired(0)
    , mGetCustomer_BedroomsRequired(0)
    , mSetCustomer_MaxPriceOffering(0)
    , mGetCustomer_MaxPriceOffering(0)
    , mSetCustomer_MinPriceOffering(0)
    , mGetCustomer_MinPriceOffering(0)
    , mSetCustomer_MaxPriceAsking([0])
    , mGetCustomer_MaxPriceAsking([0])
    , mSetCustomer_MinPriceAsking([0])
    , mGetCustomer_MinPriceAsking([0])
    , mSetCustomer_CentrelinkCRN("String")
    , mGetCustomer_CentrelinkCRN("String")
    , mSetCustomer_ATOTFN(0)
    , mGetCustomer_ATOTFN(0)
    , mSetCustomer_ABN("String")
    , mGetCustomer_ABN("String")
    , mSetCustomer_ContactedWithDetails(["String"])
    , mGetCustomer_ContactedWithDetails(["String"])
    , mSetCustomer_BusinessChannelOwnerId("String")
    , mGetCustomer_BusinessChannelOwnerId("String")
    , mSetCustomer_PropertyOwnerIds(["String"])
    , mGetCustomer_PropertyOwnerIds(["String"])
    , mSetCustomer_CustPropJoinIds(["String"])
    , mGetCustomer_CustPropJoinIds(["String"])
    , mSetCustomer_DocRefIds(["String"])
    , mGetCustomer_DocRefIds(["String"])
    , mSetCustomer_ImageRefIds(["String"])
    , mGetCustomer_ImageRefIds(["String"])
    , mSetCustomer_TenancyId("String")
    , mGetCustomer_TenancyId("String")
    , mSetCustomer_ApplicantId("String")
    , mGetCustomer_ApplicantId("String")
    , mSetCustomerType_CustomerTypeId("String")
    , mGetCustomerType_CustomerTypeId("String")
    , mSetCustomerType_Description("String")
    , mGetCustomerType_Description("String")
    , mSetCustomerType_CustTypeName("String")
    , mGetCustomerType_CustTypeName("String")
    , mSetCustomerType_BusinessChannelOwnerId("String")
    , mGetCustomerType_BusinessChannelOwnerId("String")
    , mSetCustomerType_DocRefs(["String"])
    , mGetCustomerType_DocRefs(["String"])
    , mSetCustomerType_ImageRefs(["String"])
    , mGetCustomerType_ImageRefs(["String"])
    , mSetCustomerType_AudioRefIds(["String"])
    , mGetCustomerType_AudioRefIds(["String"])
    , mSetCustomerType_VideoRefs(["String"])
    , mGetCustomerType_VideoRefs(["String"])
    , mSetCustomerCustomerJoin_CustCustomerJoinId("String")
    , mGetCustomerCustomerJoin_CustCustomerJoinId("String")
    , mSetCustomerCustomerJoin_CustomerIds(["String"])
    , mGetCustomerCustomerJoin_CustomerIds(["String"])
    , mSetCustomerCustomerJoin_PercentageShares([0])
    , mGetCustomerCustomerJoin_PercentageShares([0])
    , mSetCustomerCustomerJoin_PropertyId(["String"])
    , mGetCustomerCustomerJoin_PropertyId(["String"])
    , mSetCustomerCustomerJoin_ProjectId(["String"])
    , mGetCustomerCustomerJoin_ProjectId(["String"])
    , mSetCustomerCustomerJoin_ProgramId(["String"])
    , mGetCustomerCustomerJoin_ProgramId(["String"])
    , mSetCustomerCustomerJoin_BusinessChannelOwnerId("String")
    , mGetCustomerCustomerJoin_BusinessChannelOwnerId("String")
    , mSetApplicant_ApplicantId("String")
    , mGetApplicant_ApplicantId("String")
    , mSetApplicant_PostcodesAppliedFor(["String"])
    , mGetApplicant_PostcodesAppliedFor(["String"])
    , mSetApplicant_BedroomsSought(0)
    , mGetApplicant_BedroomsSought(0)
    , mSetApplicant_AmenitiesRequested(["String"])
    , mGetApplicant_AmenitiesRequested(["String"])
    , mSetApplicant_FirstName("String")
    , mGetApplicant_FirstName("String")
    , mSetApplicant_LastName("String")
    , mGetApplicant_LastName("String")
    , mSetApplicant_ResidentialAddress("String")
    , mGetApplicant_ResidentialAddress("String")
    , mSetApplicant_PostalAddress("String")
    , mGetApplicant_PostalAddress("String")
    , mSetApplicant_Email("String")
    , mGetApplicant_Email("String")
    , mSetApplicant_HomePhone(0)
    , mGetApplicant_HomePhone(0)
    , mSetApplicant_MobilePhone(0)
    , mGetApplicant_MobilePhone(0)
    , mSetApplicant_WorkPhone(0)
    , mGetApplicant_WorkPhone(0)
    , mSetApplicant_ContactedWithDetails(["String"])
    , mGetApplicant_ContactedWithDetails(["String"])
    , mSetApplicant_ApplicationId("String")
    , mGetApplicant_ApplicationId("String")
    , mSetApplicant_BranchId("String")
    , mGetApplicant_BranchId("String")
    , mSetApplicant_CustomerId("String")
    , mGetApplicant_CustomerId("String")
    , mSetApplicant_PropertyIds(["String"])
    , mGetApplicant_PropertyIds(["String"])
    , mSetApplicant_TenancyId("String")
    , mGetApplicant_TenancyId("String")
    , mSetApplicant_DocRefIds(["String"])
    , mGetApplicant_DocRefIds(["String"])
    , mSetApplicant_ImageRefIds(["String"])
    , mGetApplicant_ImageRefIds(["String"])
    , mSetApplicant_BusinessChannelOwnerId("String")
    , mGetApplicant_BusinessChannelOwnerId("String")
    , mSetApplication_ApplicationId("String")
    , mGetApplication_ApplicationId("String")
    , mSetApplication_SocialHousingApplication(false)
    , mGetApplication_SocialHousingApplication(false)
    , mSetApplication_NDIS(false)
    , mGetApplication_NDIS(false)
    , mSetApplication_AffordableHousingApplication(false)
    , mGetApplication_AffordableHousingApplication(false)
    , mSetApplication_SharedEquityHousingApplication(false)
    , mGetApplication_SharedEquityHousingApplication(false)
    , mSetApplication_RentToBuyApplication(false)
    , mGetApplication_RentToBuyApplication(false)
    , mSetApplication_MarketRateHousingApplication(false)
    , mGetApplication_MarketRateHousingApplication(false)
    , mSetApplication_HeadApplicantFirstName("String")
    , mGetApplication_HeadApplicantFirstName("String")
    , mSetApplication_HeadApplicantLastName("String")
    , mGetApplication_HeadApplicantLastName("String")
    , mSetApplication_HeadApplicantAddressLine1("String")
    , mGetApplication_HeadApplicantAddressLine1("String")
    , mSetApplication_HeadApplicantAddressLine2("String")
    , mGetApplication_HeadApplicantAddressLine2("String")
    , mSetApplication_HeadApplicantSuburb("String")
    , mGetApplication_HeadApplicantSuburb("String")
    , mSetApplication_HeadApplicantPostcode("String")
    , mGetApplication_HeadApplicantPostcode("String")
    , mSetApplication_HeadApplicantHomePhone("String")
    , mGetApplication_HeadApplicantHomePhone("String")
    , mSetApplication_HeadApplicantWorkPhone("String")
    , mGetApplication_HeadApplicantWorkPhone("String")
    , mSetApplication_HeadApplicantMobilePhone("String")
    , mGetApplication_HeadApplicantMobilePhone("String")
    , mSetApplication_HeadApplicantEmail("String")
    , mGetApplication_HeadApplicantEmail("String")
    , mSetApplication_HeadApplicantDOB("String")
    , mGetApplication_HeadApplicantDOB("String")
    , mSetApplication_StreetsSought(["String"])
    , mGetApplication_StreetsSought(["String"])
    , mSetApplication_PostcodesSought(["String"])
    , mGetApplication_PostcodesSought(["String"])
    , mSetApplication_BedroomRangeRequired(["String"])
    , mGetApplication_BedroomRangeRequired(["String"])
    , mSetApplication_AmenitiesRequested(["String"])
    , mGetApplication_AmenitiesRequested(["String"])
    , mSetApplication_RangeForRent([0])
    , mGetApplication_RangeForRent([0])
    , mSetApplication_Interval(Hourly)
    , mGetApplication_Interval(Hourly)
    , mSetApplication_SecondaryApplicantFirstNames(["String"])
    , mGetApplication_SecondaryApplicantFirstNames(["String"])
    , mSetApplication_SecondaryApplicantLastNames(["String"])
    , mGetApplication_SecondaryApplicantLastNames(["String"])
    , mSetApplication_PartnerIds(["String"])
    , mGetApplication_PartnerIds(["String"])
    , mSetApplication_ApplicantIds(["String"])
    , mGetApplication_ApplicantIds(["String"])
    , mSetApplication_CustomerIds(["String"])
    , mGetApplication_CustomerIds(["String"])
    , mSetApplication_PropertyIds(["String"])
    , mGetApplication_PropertyIds(["String"])
    , mSetApplication_BusinessChannelOwnerId("String")
    , mGetApplication_BusinessChannelOwnerId("String")
    , mSetApplication_BranchId("String")
    , mGetApplication_BranchId("String")
    , mSetApplication_DeptId("String")
    , mGetApplication_DeptId("String")
    , mSetApplication_DocRefs(["String"])
    , mGetApplication_DocRefs(["String"])
    , mSetApplication_ImageRefs(["String"])
    , mGetApplication_ImageRefs(["String"])
    , mSetApplication_AudioRefIds(["String"])
    , mGetApplication_AudioRefIds(["String"])
    , mSetStudentAccommodationBookings_BookingId("String")
    , mGetStudentAccommodationBookings_BookingId("String")
    , mSetStudentAccommodationBookings_PropertyAddressString("String")
    , mGetStudentAccommodationBookings_PropertyAddressString("String")
    , mSetStudentAccommodationBookings_UnitNumber("String")
    , mGetStudentAccommodationBookings_UnitNumber("String")
    , mSetStudentAccommodationBookings_PreInspected("String")
    , mGetStudentAccommodationBookings_PreInspected("String")
    , mSetStudentAccommodationBookings_DateLeaseStarts("String")
    , mGetStudentAccommodationBookings_DateLeaseStarts("String")
    , mSetStudentAccommodationBookings_MidTermInspections(["String"])
    , mGetStudentAccommodationBookings_MidTermInspections(["String"])
    , mSetStudentAccommodationBookings_DateLeaseEnds("String")
    , mGetStudentAccommodationBookings_DateLeaseEnds("String")
    , mSetStudentAccommodationBookings_PostInspected("String")
    , mGetStudentAccommodationBookings_PostInspected("String")
    , mSetStudentAccommodationBookings_PaymentInterval(Hourly)
    , mGetStudentAccommodationBookings_PaymentInterval(Hourly)
    , mSetStudentAccommodationBookings_RentalAmountAgreed(0)
    , mGetStudentAccommodationBookings_RentalAmountAgreed(0)
    , mSetStudentAccommodationBookings_BusinessChannelOwnerId("String")
    , mGetStudentAccommodationBookings_BusinessChannelOwnerId("String")
    , mSetStudentAccommodationBookings_BranchId("String")
    , mGetStudentAccommodationBookings_BranchId("String")
    , mSetStudentAccommodationBookings_DeptId("String")
    , mGetStudentAccommodationBookings_DeptId("String")
    , mSetStudentAccommodationBookings_PropertyId("String")
    , mGetStudentAccommodationBookings_PropertyId("String")
    , mSetStudentAccommodationBookings_ApplicationId("String")
    , mGetStudentAccommodationBookings_ApplicationId("String")
    , mSetStudentAccommodationBookings_ApplicantId("String")
    , mGetStudentAccommodationBookings_ApplicantId("String")
    , mSetStudentAccommodationBookings_AllocationId("String")
    , mGetStudentAccommodationBookings_AllocationId("String")
    , mSetStudentAccommodationBookings_TenancyId("String")
    , mGetStudentAccommodationBookings_TenancyId("String")
    , mSetStudentAccommodationBookings_DocRefIds(["String"])
    , mGetStudentAccommodationBookings_DocRefIds(["String"])
    , mSetStudentAccommodationBookings_ImageRefIds(["String"])
    , mGetStudentAccommodationBookings_ImageRefIds(["String"])
    , mSetStudentAccommodationBookings_BookingId("String")
    , mGetStudentAccommodationBookings_BookingId("String")
    , mSetStudentAccommodationBookings_PropertyAddressString("String")
    , mGetStudentAccommodationBookings_PropertyAddressString("String")
    , mSetStudentAccommodationBookings_UnitNumber("String")
    , mGetStudentAccommodationBookings_UnitNumber("String")
    , mSetStudentAccommodationBookings_PreInspected("String")
    , mGetStudentAccommodationBookings_PreInspected("String")
    , mSetStudentAccommodationBookings_DateLeaseStarts("String")
    , mGetStudentAccommodationBookings_DateLeaseStarts("String")
    , mSetStudentAccommodationBookings_MidTermInspections(["String"])
    , mGetStudentAccommodationBookings_MidTermInspections(["String"])
    , mSetStudentAccommodationBookings_DateLeaseEnds("String")
    , mGetStudentAccommodationBookings_DateLeaseEnds("String")
    , mSetStudentAccommodationBookings_PostInspected("String")
    , mGetStudentAccommodationBookings_PostInspected("String")
    , mSetStudentAccommodationBookings_PaymentInterval(Hourly)
    , mGetStudentAccommodationBookings_PaymentInterval(Hourly)
    , mSetStudentAccommodationBookings_RentalAmountAgreed(0)
    , mGetStudentAccommodationBookings_RentalAmountAgreed(0)
    , mSetStudentAccommodationBookings_BusinessChannelOwnerId("String")
    , mGetStudentAccommodationBookings_BusinessChannelOwnerId("String")
    , mSetStudentAccommodationBookings_BranchId("String")
    , mGetStudentAccommodationBookings_BranchId("String")
    , mSetStudentAccommodationBookings_DeptId("String")
    , mGetStudentAccommodationBookings_DeptId("String")
    , mSetStudentAccommodationBookings_PropertyId("String")
    , mGetStudentAccommodationBookings_PropertyId("String")
    , mSetStudentAccommodationBookings_ApplicationId("String")
    , mGetStudentAccommodationBookings_ApplicationId("String")
    , mSetStudentAccommodationBookings_ApplicantId("String")
    , mGetStudentAccommodationBookings_ApplicantId("String")
    , mSetStudentAccommodationBookings_AllocationId("String")
    , mGetStudentAccommodationBookings_AllocationId("String")
    , mSetStudentAccommodationBookings_TenancyId("String")
    , mGetStudentAccommodationBookings_TenancyId("String")
    , mSetStudentAccommodationBookings_DocRefIds(["String"])
    , mGetStudentAccommodationBookings_DocRefIds(["String"])
    , mSetStudentAccommodationBookings_ImageRefIds(["String"])
    , mGetStudentAccommodationBookings_ImageRefIds(["String"])
    , mSetStudentAccommodationBookings_CustTenantJoinId("String")
    , mGetStudentAccommodationBookings_CustTenantJoinId("String")
    , mSetStudentAccommodationBookings_CustomerId("String")
    , mGetStudentAccommodationBookings_CustomerId("String")
    , mSetStudentAccommodationBookings_TenancyId("String")
    , mGetStudentAccommodationBookings_TenancyId("String")
    , mSetStudentAccommodationBookings_BusinessChannelOwnerId("String")
    , mGetStudentAccommodationBookings_BusinessChannelOwnerId("String")
    , mSetTemporaryAccommodationBookings_BookingId("String")
    , mGetTemporaryAccommodationBookings_BookingId("String")
    , mSetTemporaryAccommodationBookings_PropertyAddressString("String")
    , mGetTemporaryAccommodationBookings_PropertyAddressString("String")
    , mSetTemporaryAccommodationBookings_UnitNumber("String")
    , mGetTemporaryAccommodationBookings_UnitNumber("String")
    , mSetTemporaryAccommodationBookings_PreInspected("String")
    , mGetTemporaryAccommodationBookings_PreInspected("String")
    , mSetTemporaryAccommodationBookings_DateLeaseStarts("String")
    , mGetTemporaryAccommodationBookings_DateLeaseStarts("String")
    , mSetTemporaryAccommodationBookings_MidTermInspections(["String"])
    , mGetTemporaryAccommodationBookings_MidTermInspections(["String"])
    , mSetTemporaryAccommodationBookings_DateLeaseEnds("String")
    , mGetTemporaryAccommodationBookings_DateLeaseEnds("String")
    , mSetTemporaryAccommodationBookings_PostInspected("String")
    , mGetTemporaryAccommodationBookings_PostInspected("String")
    , mSetTemporaryAccommodationBookings_PaymentInterval(Hourly)
    , mGetTemporaryAccommodationBookings_PaymentInterval(Hourly)
    , mSetTemporaryAccommodationBookings_RentalAmountAgreed(0)
    , mGetTemporaryAccommodationBookings_RentalAmountAgreed(0)
    , mSetTemporaryAccommodationBookings_BusinessChannelOwnerId("String")
    , mGetTemporaryAccommodationBookings_BusinessChannelOwnerId("String")
    , mSetTemporaryAccommodationBookings_BranchId("String")
    , mGetTemporaryAccommodationBookings_BranchId("String")
    , mSetTemporaryAccommodationBookings_DeptId("String")
    , mGetTemporaryAccommodationBookings_DeptId("String")
    , mSetTemporaryAccommodationBookings_PropertyId("String")
    , mGetTemporaryAccommodationBookings_PropertyId("String")
    , mSetTemporaryAccommodationBookings_ApplicationId("String")
    , mGetTemporaryAccommodationBookings_ApplicationId("String")
    , mSetTemporaryAccommodationBookings_ApplicantId("String")
    , mGetTemporaryAccommodationBookings_ApplicantId("String")
    , mSetTemporaryAccommodationBookings_AllocationId("String")
    , mGetTemporaryAccommodationBookings_AllocationId("String")
    , mSetTemporaryAccommodationBookings_TenancyId("String")
    , mGetTemporaryAccommodationBookings_TenancyId("String")
    , mSetTemporaryAccommodationBookings_DocRefIds(["String"])
    , mGetTemporaryAccommodationBookings_DocRefIds(["String"])
    , mSetTemporaryAccommodationBookings_ImageRefIds(["String"])
    , mGetTemporaryAccommodationBookings_ImageRefIds(["String"])
    , mSetTemporaryAccommodationBookings_BookingId("String")
    , mGetTemporaryAccommodationBookings_BookingId("String")
    , mSetTemporaryAccommodationBookings_PropertyAddressString("String")
    , mGetTemporaryAccommodationBookings_PropertyAddressString("String")
    , mSetTemporaryAccommodationBookings_UnitNumber("String")
    , mGetTemporaryAccommodationBookings_UnitNumber("String")
    , mSetTemporaryAccommodationBookings_PreInspected("String")
    , mGetTemporaryAccommodationBookings_PreInspected("String")
    , mSetTemporaryAccommodationBookings_DateLeaseStarts("String")
    , mGetTemporaryAccommodationBookings_DateLeaseStarts("String")
    , mSetTemporaryAccommodationBookings_MidTermInspections(["String"])
    , mGetTemporaryAccommodationBookings_MidTermInspections(["String"])
    , mSetTemporaryAccommodationBookings_DateLeaseEnds("String")
    , mGetTemporaryAccommodationBookings_DateLeaseEnds("String")
    , mSetTemporaryAccommodationBookings_PostInspected("String")
    , mGetTemporaryAccommodationBookings_PostInspected("String")
    , mSetTemporaryAccommodationBookings_PaymentInterval(Hourly)
    , mGetTemporaryAccommodationBookings_PaymentInterval(Hourly)
    , mSetTemporaryAccommodationBookings_RentalAmountAgreed(0)
    , mGetTemporaryAccommodationBookings_RentalAmountAgreed(0)
    , mSetTemporaryAccommodationBookings_BusinessChannelOwnerId("String")
    , mGetTemporaryAccommodationBookings_BusinessChannelOwnerId("String")
    , mSetTemporaryAccommodationBookings_BranchId("String")
    , mGetTemporaryAccommodationBookings_BranchId("String")
    , mSetTemporaryAccommodationBookings_DeptId("String")
    , mGetTemporaryAccommodationBookings_DeptId("String")
    , mSetTemporaryAccommodationBookings_PropertyId("String")
    , mGetTemporaryAccommodationBookings_PropertyId("String")
    , mSetTemporaryAccommodationBookings_ApplicationId("String")
    , mGetTemporaryAccommodationBookings_ApplicationId("String")
    , mSetTemporaryAccommodationBookings_ApplicantId("String")
    , mGetTemporaryAccommodationBookings_ApplicantId("String")
    , mSetTemporaryAccommodationBookings_AllocationId("String")
    , mGetTemporaryAccommodationBookings_AllocationId("String")
    , mSetTemporaryAccommodationBookings_TenancyId("String")
    , mGetTemporaryAccommodationBookings_TenancyId("String")
    , mSetTemporaryAccommodationBookings_DocRefIds(["String"])
    , mGetTemporaryAccommodationBookings_DocRefIds(["String"])
    , mSetTemporaryAccommodationBookings_ImageRefIds(["String"])
    , mGetTemporaryAccommodationBookings_ImageRefIds(["String"])
    , mSetTemporaryAccommodationBookings_CustTenantJoinId("String")
    , mGetTemporaryAccommodationBookings_CustTenantJoinId("String")
    , mSetTemporaryAccommodationBookings_CustomerId("String")
    , mGetTemporaryAccommodationBookings_CustomerId("String")
    , mSetTemporaryAccommodationBookings_TenancyId("String")
    , mGetTemporaryAccommodationBookings_TenancyId("String")
    , mSetTemporaryAccommodationBookings_BusinessChannelOwnerId("String")
    , mGetTemporaryAccommodationBookings_BusinessChannelOwnerId("String")
    , mSetCustomerTenantJoin_CustTenantJoinId("String")
    , mGetCustomerTenantJoin_CustTenantJoinId("String")
    , mSetCustomerTenantJoin_CustomerIds(["String"])
    , mGetCustomerTenantJoin_CustomerIds(["String"])
    , mSetCustomerTenantJoin_TenancyId([0])
    , mGetCustomerTenantJoin_TenancyId([0])
    , mSetCustomerTenantJoin_BusinessChannelOwnerId("String")
    , mGetCustomerTenantJoin_BusinessChannelOwnerId("String")
    , mSetComplaint_ComplaintId("String")
    , mGetComplaint_ComplaintId("String")
    , mSetComplaint_ParticipantNameComplainant("String")
    , mGetComplaint_ParticipantNameComplainant("String")
    , mSetComplaint_ParticipantIdComplainant("String")
    , mGetComplaint_ParticipantIdComplainant("String")
    , mSetComplaint_Description("String")
    , mGetComplaint_Description("String")
    , mSetComplaint_NonTenantRelated(false)
    , mGetComplaint_NonTenantRelated(false)
    , mSetComplaint_AgainstTenant(false)
    , mGetComplaint_AgainstTenant(false)
    , mSetComplaint_ByTenant(false)
    , mGetComplaint_ByTenant(false)
    , mSetComplaint_DetailsInChronologicalOrder(["String"])
    , mGetComplaint_DetailsInChronologicalOrder(["String"])
    , mSetComplaint_DatesTimesOfEvents(["String"])
    , mGetComplaint_DatesTimesOfEvents(["String"])
    , mSetComplaint_RepliedWhen("String")
    , mGetComplaint_RepliedWhen("String")
    , mSetComplaint_ResponsibilitiesParticpantsIds(["String"])
    , mGetComplaint_ResponsibilitiesParticpantsIds(["String"])
    , mSetComplaint_ResponsibilitiesParticpantsNames(["String"])
    , mGetComplaint_ResponsibilitiesParticpantsNames(["String"])
    , mSetComplaint_RequiredActions(["String"])
    , mGetComplaint_RequiredActions(["String"])
    , mSetComplaint_BusinessChannelOwnerId("String")
    , mGetComplaint_BusinessChannelOwnerId("String")
    , mSetComplaint_BranchId("String")
    , mGetComplaint_BranchId("String")
    , mSetComplaint_DeptId("String")
    , mGetComplaint_DeptId("String")
    , mSetComplaint_PropertyOwnerIds(["String"])
    , mGetComplaint_PropertyOwnerIds(["String"])
    , mSetComplaint_TenantIds(["String"])
    , mGetComplaint_TenantIds(["String"])
    , mSetComplaint_CustomerIds(["String"])
    , mGetComplaint_CustomerIds(["String"])
    , mSetComplaint_EmployeeIds(["String"])
    , mGetComplaint_EmployeeIds(["String"])
    , mSetComplaint_CommunityIds(["String"])
    , mGetComplaint_CommunityIds(["String"])
    , mSetComplaint_MediaIds(["String"])
    , mGetComplaint_MediaIds(["String"])
    , mSetComplaint_SupplierIds(["String"])
    , mGetComplaint_SupplierIds(["String"])
    , mSetComplaint_PartnerIds(["String"])
    , mGetComplaint_PartnerIds(["String"])
    , mSetComplaint_TribunalIds(["String"])
    , mGetComplaint_TribunalIds(["String"])
    , mSetComplaint_TicaIds(["String"])
    , mGetComplaint_TicaIds(["String"])
    , mSetComplaint_PropertyIds(["String"])
    , mGetComplaint_PropertyIds(["String"])
    , mSetComplaint_ServiceIdsInvolved(["String"])
    , mGetComplaint_ServiceIdsInvolved(["String"])
    , mSetComplaint_ItemiIds(["String"])
    , mGetComplaint_ItemiIds(["String"])
    , mSetComplaint_JobIds(["String"])
    , mGetComplaint_JobIds(["String"])
    , mSetComplaint_DocRefs(["String"])
    , mGetComplaint_DocRefs(["String"])
    , mSetComplaint_ImageRefs(["String"])
    , mGetComplaint_ImageRefs(["String"])
    , mSetComplaint_AudioRefIds(["String"])
    , mGetComplaint_AudioRefIds(["String"])
    , mSetComplaint_VideoRefs(["String"])
    , mGetComplaint_VideoRefs(["String"])
    , mSetCompliment_ComplimentId("String")
    , mGetCompliment_ComplimentId("String")
    , mSetCompliment_ParticipantNameComplimenting("String")
    , mGetCompliment_ParticipantNameComplimenting("String")
    , mSetCompliment_ParticipantIdComplimenting("String")
    , mGetCompliment_ParticipantIdComplimenting("String")
    , mSetCompliment_Description("String")
    , mGetCompliment_Description("String")
    , mSetCompliment_NonTenantRelated(false)
    , mGetCompliment_NonTenantRelated(false)
    , mSetCompliment_ProTenant(false)
    , mGetCompliment_ProTenant(false)
    , mSetCompliment_ByTenant(false)
    , mGetCompliment_ByTenant(false)
    , mSetCompliment_DetailsInChronologicalOrder(["String"])
    , mGetCompliment_DetailsInChronologicalOrder(["String"])
    , mSetCompliment_DatesTimesOfEvents(["String"])
    , mGetCompliment_DatesTimesOfEvents(["String"])
    , mSetCompliment_CorroReceived("String")
    , mGetCompliment_CorroReceived("String")
    , mSetCompliment_ResponseDocRefs(["String"])
    , mGetCompliment_ResponseDocRefs(["String"])
    , mSetCompliment_RepliedWhen("String")
    , mGetCompliment_RepliedWhen("String")
    , mSetCompliment_ResponsibilitiesParticpantsIds(["String"])
    , mGetCompliment_ResponsibilitiesParticpantsIds(["String"])
    , mSetCompliment_ResponsibilitiesParticpantsNames(["String"])
    , mGetCompliment_ResponsibilitiesParticpantsNames(["String"])
    , mSetCompliment_RequiredActions(["String"])
    , mGetCompliment_RequiredActions(["String"])
    , mSetCompliment_BusinessChannelOwnerId("String")
    , mGetCompliment_BusinessChannelOwnerId("String")
    , mSetCompliment_BranchId("String")
    , mGetCompliment_BranchId("String")
    , mSetCompliment_DeptId("String")
    , mGetCompliment_DeptId("String")
    , mSetCompliment_PropertyIds(["String"])
    , mGetCompliment_PropertyIds(["String"])
    , mSetCompliment_PropertyOwnerIds(["String"])
    , mGetCompliment_PropertyOwnerIds(["String"])
    , mSetCompliment_ServiceIdsInvolved(["String"])
    , mGetCompliment_ServiceIdsInvolved(["String"])
    , mSetCompliment_ItemiIds(["String"])
    , mGetCompliment_ItemiIds(["String"])
    , mSetCompliment_JobIds(["String"])
    , mGetCompliment_JobIds(["String"])
    , mSetCompliment_TenancyId(["String"])
    , mGetCompliment_TenancyId(["String"])
    , mSetCompliment_CustomerIds(["String"])
    , mGetCompliment_CustomerIds(["String"])
    , mSetCompliment_EmployeeIds(["String"])
    , mGetCompliment_EmployeeIds(["String"])
    , mSetCompliment_CommunityIds(["String"])
    , mGetCompliment_CommunityIds(["String"])
    , mSetCompliment_MediaIds(["String"])
    , mGetCompliment_MediaIds(["String"])
    , mSetCompliment_SupplierIds(["String"])
    , mGetCompliment_SupplierIds(["String"])
    , mSetCompliment_PartnerIds(["String"])
    , mGetCompliment_PartnerIds(["String"])
    , mSetCompliment_TribunalIds(["String"])
    , mGetCompliment_TribunalIds(["String"])
    , mSetCompliment_TicaIds(["String"])
    , mGetCompliment_TicaIds(["String"])
    , mSetCompliment_DocRefIds(["String"])
    , mGetCompliment_DocRefIds(["String"])
    , mSetCompliment_ImageRefIds(["String"])
    , mGetCompliment_ImageRefIds(["String"])
    , mSetCompliment_AudioRefIds(["String"])
    , mGetCompliment_AudioRefIds(["String"])
    , mSetCompliment_VideoRefIds(["String"])
    , mGetCompliment_VideoRefIds(["String"])
    
{
}

CCustomer::~CCustomer()
{
    // 
}

ECode CCustomer::constructor()
{
    return NOERROR;
}

ECode CCustomer::CompareTo(
    /* [in] */ IInterface* another,
    /* [out] */ Int32* result)
{
    VALIDATE_NOT_NULL(result);

    ICCustomer* oa = ICH::Probe(another);
    if (oa == NULL) {
        *result = 1;
        return E_CLASS_CAST_EXCEPTION;
    }

    CCustomer* a = (CCustomer*)oa;
    *result = mName.Compare(a->mName);
    return NOERROR;
}

ECode CCustomer::SetName(
    /* [in] */ const String& name)
{
    mName = name;
    return NOERROR;
}

ECode CCustomer::GetName(
    /* [out] */ String* name)
{
    VALIDATE_NOT_NULL(name)
    *name = mName;
    return NOERROR;
}

ECode CCustomer::SetAge(
    /* [in] */ Int32 age)
{
    mAge = age;
    return NOERROR;
}

ECode CCustomer::GetAge(
    /* [out] */ Int32* age)
{
    VALIDATE_NOT_NULL(age)
    *age = mAge;
    return NOERROR;
}

ECode CCustomer::CanFly(
    /* [out] */ Boolean* canFly)
{
    VALIDATE_NOT_NULL(canFly);
    *canFly = FALSE;
    return NOERROR;
}

} // ChubbaMorris
} // Elastos

