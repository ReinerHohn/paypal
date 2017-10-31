/* soapPayPalAPISoapBindingProxy.h
   Generated by gSOAP 2.8.54 for paypal.h

gSOAP XML Web services tools
Copyright (C) 2000-2017, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapPayPalAPISoapBindingProxy_H
#define soapPayPalAPISoapBindingProxy_H
#include "soapH.h"

    class SOAP_CMAC PayPalAPISoapBindingProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        bool soap_own; ///< flag indicating that this context is owned by this proxy when context is shared
        /// Endpoint URL of service 'PayPalAPISoapBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in paypal.h, if any
        /// Construct a proxy with new managing context
        PayPalAPISoapBindingProxy();
        /// Copy constructor
        PayPalAPISoapBindingProxy(const PayPalAPISoapBindingProxy& rhs);
        /// Construct proxy given a shared managing context
        PayPalAPISoapBindingProxy(struct soap*);
        /// Constructor taking an endpoint URL
        PayPalAPISoapBindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        PayPalAPISoapBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        PayPalAPISoapBindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        PayPalAPISoapBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes non-shared managing context only (use destroy() to delete deserialized data)
        virtual ~PayPalAPISoapBindingProxy();
        /// Initializer used by constructors
        virtual void PayPalAPISoapBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual PayPalAPISoapBindingProxy *copy();
        /// Copy assignment
        PayPalAPISoapBindingProxy& operator=(const PayPalAPISoapBindingProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(ns3__CustomSecurityHeaderType *ns1__RequesterCredentials);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault string (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail as string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        /// Web service operation 'RefundTransaction' (returns SOAP_OK or error code)
        virtual int RefundTransaction(_ns1__RefundTransactionReq *ns1__RefundTransactionReq, ns1__RefundTransactionResponseType &ns1__RefundTransactionResponse)
        { return this->RefundTransaction(NULL, NULL, ns1__RefundTransactionReq, ns1__RefundTransactionResponse); }
        virtual int RefundTransaction(const char *soap_endpoint, const char *soap_action, _ns1__RefundTransactionReq *ns1__RefundTransactionReq, ns1__RefundTransactionResponseType &ns1__RefundTransactionResponse);
        /// Web service operation 'InitiateRecoup' (returns SOAP_OK or error code)
        virtual int InitiateRecoup(_ns1__InitiateRecoupReq *ns1__InitiateRecoupReq, ns1__InitiateRecoupResponseType &ns1__InitiateRecoupResponse)
        { return this->InitiateRecoup(NULL, NULL, ns1__InitiateRecoupReq, ns1__InitiateRecoupResponse); }
        virtual int InitiateRecoup(const char *soap_endpoint, const char *soap_action, _ns1__InitiateRecoupReq *ns1__InitiateRecoupReq, ns1__InitiateRecoupResponseType &ns1__InitiateRecoupResponse);
        /// Web service operation 'CompleteRecoup' (returns SOAP_OK or error code)
        virtual int CompleteRecoup(_ns1__CompleteRecoupReq *ns1__CompleteRecoupReq, ns1__CompleteRecoupResponseType &ns1__CompleteRecoupResponse)
        { return this->CompleteRecoup(NULL, NULL, ns1__CompleteRecoupReq, ns1__CompleteRecoupResponse); }
        virtual int CompleteRecoup(const char *soap_endpoint, const char *soap_action, _ns1__CompleteRecoupReq *ns1__CompleteRecoupReq, ns1__CompleteRecoupResponseType &ns1__CompleteRecoupResponse);
        /// Web service operation 'CancelRecoup' (returns SOAP_OK or error code)
        virtual int CancelRecoup(_ns1__CancelRecoupReq *ns1__CancelRecoupReq, ns1__CancelRecoupResponseType &ns1__CancelRecoupResponse)
        { return this->CancelRecoup(NULL, NULL, ns1__CancelRecoupReq, ns1__CancelRecoupResponse); }
        virtual int CancelRecoup(const char *soap_endpoint, const char *soap_action, _ns1__CancelRecoupReq *ns1__CancelRecoupReq, ns1__CancelRecoupResponseType &ns1__CancelRecoupResponse);
        /// Web service operation 'GetTransactionDetails' (returns SOAP_OK or error code)
        virtual int GetTransactionDetails(_ns1__GetTransactionDetailsReq *ns1__GetTransactionDetailsReq, ns1__GetTransactionDetailsResponseType &ns1__GetTransactionDetailsResponse)
        { return this->GetTransactionDetails(NULL, NULL, ns1__GetTransactionDetailsReq, ns1__GetTransactionDetailsResponse); }
        virtual int GetTransactionDetails(const char *soap_endpoint, const char *soap_action, _ns1__GetTransactionDetailsReq *ns1__GetTransactionDetailsReq, ns1__GetTransactionDetailsResponseType &ns1__GetTransactionDetailsResponse);
        /// Web service operation 'BMCreateButton' (returns SOAP_OK or error code)
        virtual int BMCreateButton(_ns1__BMCreateButtonReq *ns1__BMCreateButtonReq, ns1__BMCreateButtonResponseType &ns1__BMCreateButtonResponse)
        { return this->BMCreateButton(NULL, NULL, ns1__BMCreateButtonReq, ns1__BMCreateButtonResponse); }
        virtual int BMCreateButton(const char *soap_endpoint, const char *soap_action, _ns1__BMCreateButtonReq *ns1__BMCreateButtonReq, ns1__BMCreateButtonResponseType &ns1__BMCreateButtonResponse);
        /// Web service operation 'BMUpdateButton' (returns SOAP_OK or error code)
        virtual int BMUpdateButton(_ns1__BMUpdateButtonReq *ns1__BMUpdateButtonReq, ns1__BMUpdateButtonResponseType &ns1__BMUpdateButtonResponse)
        { return this->BMUpdateButton(NULL, NULL, ns1__BMUpdateButtonReq, ns1__BMUpdateButtonResponse); }
        virtual int BMUpdateButton(const char *soap_endpoint, const char *soap_action, _ns1__BMUpdateButtonReq *ns1__BMUpdateButtonReq, ns1__BMUpdateButtonResponseType &ns1__BMUpdateButtonResponse);
        /// Web service operation 'BMSetInventory' (returns SOAP_OK or error code)
        virtual int BMSetInventory(_ns1__BMSetInventoryReq *ns1__BMSetInventoryReq, ns1__BMSetInventoryResponseType &ns1__BMSetInventoryResponse)
        { return this->BMSetInventory(NULL, NULL, ns1__BMSetInventoryReq, ns1__BMSetInventoryResponse); }
        virtual int BMSetInventory(const char *soap_endpoint, const char *soap_action, _ns1__BMSetInventoryReq *ns1__BMSetInventoryReq, ns1__BMSetInventoryResponseType &ns1__BMSetInventoryResponse);
        /// Web service operation 'BMGetButtonDetails' (returns SOAP_OK or error code)
        virtual int BMGetButtonDetails(_ns1__BMGetButtonDetailsReq *ns1__BMGetButtonDetailsReq, ns1__BMGetButtonDetailsResponseType &ns1__BMGetButtonDetailsResponse)
        { return this->BMGetButtonDetails(NULL, NULL, ns1__BMGetButtonDetailsReq, ns1__BMGetButtonDetailsResponse); }
        virtual int BMGetButtonDetails(const char *soap_endpoint, const char *soap_action, _ns1__BMGetButtonDetailsReq *ns1__BMGetButtonDetailsReq, ns1__BMGetButtonDetailsResponseType &ns1__BMGetButtonDetailsResponse);
        /// Web service operation 'BMGetInventory' (returns SOAP_OK or error code)
        virtual int BMGetInventory(_ns1__BMGetInventoryReq *ns1__BMGetInventoryReq, ns1__BMGetInventoryResponseType &ns1__BMGetInventoryResponse)
        { return this->BMGetInventory(NULL, NULL, ns1__BMGetInventoryReq, ns1__BMGetInventoryResponse); }
        virtual int BMGetInventory(const char *soap_endpoint, const char *soap_action, _ns1__BMGetInventoryReq *ns1__BMGetInventoryReq, ns1__BMGetInventoryResponseType &ns1__BMGetInventoryResponse);
        /// Web service operation 'BMManageButtonStatus' (returns SOAP_OK or error code)
        virtual int BMManageButtonStatus(_ns1__BMManageButtonStatusReq *ns1__BMManageButtonStatusReq, ns1__BMManageButtonStatusResponseType &ns1__BMManageButtonStatusResponse)
        { return this->BMManageButtonStatus(NULL, NULL, ns1__BMManageButtonStatusReq, ns1__BMManageButtonStatusResponse); }
        virtual int BMManageButtonStatus(const char *soap_endpoint, const char *soap_action, _ns1__BMManageButtonStatusReq *ns1__BMManageButtonStatusReq, ns1__BMManageButtonStatusResponseType &ns1__BMManageButtonStatusResponse);
        /// Web service operation 'BMButtonSearch' (returns SOAP_OK or error code)
        virtual int BMButtonSearch(_ns1__BMButtonSearchReq *ns1__BMButtonSearchReq, ns1__BMButtonSearchResponseType &ns1__BMButtonSearchResponse)
        { return this->BMButtonSearch(NULL, NULL, ns1__BMButtonSearchReq, ns1__BMButtonSearchResponse); }
        virtual int BMButtonSearch(const char *soap_endpoint, const char *soap_action, _ns1__BMButtonSearchReq *ns1__BMButtonSearchReq, ns1__BMButtonSearchResponseType &ns1__BMButtonSearchResponse);
        /// Web service operation 'BillUser' (returns SOAP_OK or error code)
        virtual int BillUser(_ns1__BillUserReq *ns1__BillUserReq, ns1__BillUserResponseType &ns1__BillUserResponse)
        { return this->BillUser(NULL, NULL, ns1__BillUserReq, ns1__BillUserResponse); }
        virtual int BillUser(const char *soap_endpoint, const char *soap_action, _ns1__BillUserReq *ns1__BillUserReq, ns1__BillUserResponseType &ns1__BillUserResponse);
        /// Web service operation 'TransactionSearch' (returns SOAP_OK or error code)
        virtual int TransactionSearch(_ns1__TransactionSearchReq *ns1__TransactionSearchReq, ns1__TransactionSearchResponseType &ns1__TransactionSearchResponse)
        { return this->TransactionSearch(NULL, NULL, ns1__TransactionSearchReq, ns1__TransactionSearchResponse); }
        virtual int TransactionSearch(const char *soap_endpoint, const char *soap_action, _ns1__TransactionSearchReq *ns1__TransactionSearchReq, ns1__TransactionSearchResponseType &ns1__TransactionSearchResponse);
        /// Web service operation 'MassPay' (returns SOAP_OK or error code)
        virtual int MassPay(_ns1__MassPayReq *ns1__MassPayReq, ns1__MassPayResponseType &ns1__MassPayResponse)
        { return this->MassPay(NULL, NULL, ns1__MassPayReq, ns1__MassPayResponse); }
        virtual int MassPay(const char *soap_endpoint, const char *soap_action, _ns1__MassPayReq *ns1__MassPayReq, ns1__MassPayResponseType &ns1__MassPayResponse);
        /// Web service operation 'BillAgreementUpdate' (returns SOAP_OK or error code)
        virtual int BillAgreementUpdate(_ns1__BillAgreementUpdateReq *ns1__BillAgreementUpdateReq, ns1__BAUpdateResponseType &ns1__BAUpdateResponse)
        { return this->BillAgreementUpdate(NULL, NULL, ns1__BillAgreementUpdateReq, ns1__BAUpdateResponse); }
        virtual int BillAgreementUpdate(const char *soap_endpoint, const char *soap_action, _ns1__BillAgreementUpdateReq *ns1__BillAgreementUpdateReq, ns1__BAUpdateResponseType &ns1__BAUpdateResponse);
        /// Web service operation 'AddressVerify' (returns SOAP_OK or error code)
        virtual int AddressVerify(_ns1__AddressVerifyReq *ns1__AddressVerifyReq, ns1__AddressVerifyResponseType &ns1__AddressVerifyResponse)
        { return this->AddressVerify(NULL, NULL, ns1__AddressVerifyReq, ns1__AddressVerifyResponse); }
        virtual int AddressVerify(const char *soap_endpoint, const char *soap_action, _ns1__AddressVerifyReq *ns1__AddressVerifyReq, ns1__AddressVerifyResponseType &ns1__AddressVerifyResponse);
        /// Web service operation 'EnterBoarding' (returns SOAP_OK or error code)
        virtual int EnterBoarding(_ns1__EnterBoardingReq *ns1__EnterBoardingReq, ns1__EnterBoardingResponseType &ns1__EnterBoardingResponse)
        { return this->EnterBoarding(NULL, NULL, ns1__EnterBoardingReq, ns1__EnterBoardingResponse); }
        virtual int EnterBoarding(const char *soap_endpoint, const char *soap_action, _ns1__EnterBoardingReq *ns1__EnterBoardingReq, ns1__EnterBoardingResponseType &ns1__EnterBoardingResponse);
        /// Web service operation 'GetBoardingDetails' (returns SOAP_OK or error code)
        virtual int GetBoardingDetails(_ns1__GetBoardingDetailsReq *ns1__GetBoardingDetailsReq, ns1__GetBoardingDetailsResponseType &ns1__GetBoardingDetailsResponse)
        { return this->GetBoardingDetails(NULL, NULL, ns1__GetBoardingDetailsReq, ns1__GetBoardingDetailsResponse); }
        virtual int GetBoardingDetails(const char *soap_endpoint, const char *soap_action, _ns1__GetBoardingDetailsReq *ns1__GetBoardingDetailsReq, ns1__GetBoardingDetailsResponseType &ns1__GetBoardingDetailsResponse);
        /// Web service operation 'CreateMobilePayment' (returns SOAP_OK or error code)
        virtual int CreateMobilePayment(_ns1__CreateMobilePaymentReq *ns1__CreateMobilePaymentReq, ns1__CreateMobilePaymentResponseType &ns1__CreateMobilePaymentResponse)
        { return this->CreateMobilePayment(NULL, NULL, ns1__CreateMobilePaymentReq, ns1__CreateMobilePaymentResponse); }
        virtual int CreateMobilePayment(const char *soap_endpoint, const char *soap_action, _ns1__CreateMobilePaymentReq *ns1__CreateMobilePaymentReq, ns1__CreateMobilePaymentResponseType &ns1__CreateMobilePaymentResponse);
        /// Web service operation 'GetMobileStatus' (returns SOAP_OK or error code)
        virtual int GetMobileStatus(_ns1__GetMobileStatusReq *ns1__GetMobileStatusReq, ns1__GetMobileStatusResponseType &ns1__GetMobileStatusResponse)
        { return this->GetMobileStatus(NULL, NULL, ns1__GetMobileStatusReq, ns1__GetMobileStatusResponse); }
        virtual int GetMobileStatus(const char *soap_endpoint, const char *soap_action, _ns1__GetMobileStatusReq *ns1__GetMobileStatusReq, ns1__GetMobileStatusResponseType &ns1__GetMobileStatusResponse);
        /// Web service operation 'SetMobileCheckout' (returns SOAP_OK or error code)
        virtual int SetMobileCheckout(_ns1__SetMobileCheckoutReq *ns1__SetMobileCheckoutReq, ns1__SetMobileCheckoutResponseType &ns1__SetMobileCheckoutResponse)
        { return this->SetMobileCheckout(NULL, NULL, ns1__SetMobileCheckoutReq, ns1__SetMobileCheckoutResponse); }
        virtual int SetMobileCheckout(const char *soap_endpoint, const char *soap_action, _ns1__SetMobileCheckoutReq *ns1__SetMobileCheckoutReq, ns1__SetMobileCheckoutResponseType &ns1__SetMobileCheckoutResponse);
        /// Web service operation 'DoMobileCheckoutPayment' (returns SOAP_OK or error code)
        virtual int DoMobileCheckoutPayment(_ns1__DoMobileCheckoutPaymentReq *ns1__DoMobileCheckoutPaymentReq, ns1__DoMobileCheckoutPaymentResponseType &ns1__DoMobileCheckoutPaymentResponse)
        { return this->DoMobileCheckoutPayment(NULL, NULL, ns1__DoMobileCheckoutPaymentReq, ns1__DoMobileCheckoutPaymentResponse); }
        virtual int DoMobileCheckoutPayment(const char *soap_endpoint, const char *soap_action, _ns1__DoMobileCheckoutPaymentReq *ns1__DoMobileCheckoutPaymentReq, ns1__DoMobileCheckoutPaymentResponseType &ns1__DoMobileCheckoutPaymentResponse);
        /// Web service operation 'GetBalance' (returns SOAP_OK or error code)
        virtual int GetBalance(_ns1__GetBalanceReq *ns1__GetBalanceReq, ns1__GetBalanceResponseType &ns1__GetBalanceResponse)
        { return this->GetBalance(NULL, NULL, ns1__GetBalanceReq, ns1__GetBalanceResponse); }
        virtual int GetBalance(const char *soap_endpoint, const char *soap_action, _ns1__GetBalanceReq *ns1__GetBalanceReq, ns1__GetBalanceResponseType &ns1__GetBalanceResponse);
        /// Web service operation 'GetPalDetails' (returns SOAP_OK or error code)
        virtual int GetPalDetails(_ns1__GetPalDetailsReq *ns1__GetPalDetailsReq, ns1__GetPalDetailsResponseType &ns1__GetPalDetailsResponse)
        { return this->GetPalDetails(NULL, NULL, ns1__GetPalDetailsReq, ns1__GetPalDetailsResponse); }
        virtual int GetPalDetails(const char *soap_endpoint, const char *soap_action, _ns1__GetPalDetailsReq *ns1__GetPalDetailsReq, ns1__GetPalDetailsResponseType &ns1__GetPalDetailsResponse);
        /// Web service operation 'DoExpressCheckoutPayment' (returns SOAP_OK or error code)
        virtual int DoExpressCheckoutPayment(_ns1__DoExpressCheckoutPaymentReq *ns1__DoExpressCheckoutPaymentReq, ns1__DoExpressCheckoutPaymentResponseType &ns1__DoExpressCheckoutPaymentResponse)
        { return this->DoExpressCheckoutPayment(NULL, NULL, ns1__DoExpressCheckoutPaymentReq, ns1__DoExpressCheckoutPaymentResponse); }
        virtual int DoExpressCheckoutPayment(const char *soap_endpoint, const char *soap_action, _ns1__DoExpressCheckoutPaymentReq *ns1__DoExpressCheckoutPaymentReq, ns1__DoExpressCheckoutPaymentResponseType &ns1__DoExpressCheckoutPaymentResponse);
        /// Web service operation 'DoUATPExpressCheckoutPayment' (returns SOAP_OK or error code)
        virtual int DoUATPExpressCheckoutPayment(_ns1__DoUATPExpressCheckoutPaymentReq *ns1__DoUATPExpressCheckoutPaymentReq, ns1__DoUATPExpressCheckoutPaymentResponseType &ns1__DoUATPExpressCheckoutPaymentResponse)
        { return this->DoUATPExpressCheckoutPayment(NULL, NULL, ns1__DoUATPExpressCheckoutPaymentReq, ns1__DoUATPExpressCheckoutPaymentResponse); }
        virtual int DoUATPExpressCheckoutPayment(const char *soap_endpoint, const char *soap_action, _ns1__DoUATPExpressCheckoutPaymentReq *ns1__DoUATPExpressCheckoutPaymentReq, ns1__DoUATPExpressCheckoutPaymentResponseType &ns1__DoUATPExpressCheckoutPaymentResponse);
        /// Web service operation 'SetAuthFlowParam' (returns SOAP_OK or error code)
        virtual int SetAuthFlowParam(_ns1__SetAuthFlowParamReq *ns1__SetAuthFlowParamReq, ns1__SetAuthFlowParamResponseType &ns1__SetAuthFlowParamResponse)
        { return this->SetAuthFlowParam(NULL, NULL, ns1__SetAuthFlowParamReq, ns1__SetAuthFlowParamResponse); }
        virtual int SetAuthFlowParam(const char *soap_endpoint, const char *soap_action, _ns1__SetAuthFlowParamReq *ns1__SetAuthFlowParamReq, ns1__SetAuthFlowParamResponseType &ns1__SetAuthFlowParamResponse);
        /// Web service operation 'GetAuthDetails' (returns SOAP_OK or error code)
        virtual int GetAuthDetails(_ns1__GetAuthDetailsReq *ns1__GetAuthDetailsReq, ns1__GetAuthDetailsResponseType &ns1__GetAuthDetailsResponse)
        { return this->GetAuthDetails(NULL, NULL, ns1__GetAuthDetailsReq, ns1__GetAuthDetailsResponse); }
        virtual int GetAuthDetails(const char *soap_endpoint, const char *soap_action, _ns1__GetAuthDetailsReq *ns1__GetAuthDetailsReq, ns1__GetAuthDetailsResponseType &ns1__GetAuthDetailsResponse);
        /// Web service operation 'SetAccessPermissions' (returns SOAP_OK or error code)
        virtual int SetAccessPermissions(_ns1__SetAccessPermissionsReq *ns1__SetAccessPermissionsReq, ns1__SetAccessPermissionsResponseType &ns1__SetAccessPermissionsResponse)
        { return this->SetAccessPermissions(NULL, NULL, ns1__SetAccessPermissionsReq, ns1__SetAccessPermissionsResponse); }
        virtual int SetAccessPermissions(const char *soap_endpoint, const char *soap_action, _ns1__SetAccessPermissionsReq *ns1__SetAccessPermissionsReq, ns1__SetAccessPermissionsResponseType &ns1__SetAccessPermissionsResponse);
        /// Web service operation 'UpdateAccessPermissions' (returns SOAP_OK or error code)
        virtual int UpdateAccessPermissions(_ns1__UpdateAccessPermissionsReq *ns1__UpdateAccessPermissionsReq, ns1__UpdateAccessPermissionsResponseType &ns1__UpdateAccessPermissionsResponse)
        { return this->UpdateAccessPermissions(NULL, NULL, ns1__UpdateAccessPermissionsReq, ns1__UpdateAccessPermissionsResponse); }
        virtual int UpdateAccessPermissions(const char *soap_endpoint, const char *soap_action, _ns1__UpdateAccessPermissionsReq *ns1__UpdateAccessPermissionsReq, ns1__UpdateAccessPermissionsResponseType &ns1__UpdateAccessPermissionsResponse);
        /// Web service operation 'GetAccessPermissionDetails' (returns SOAP_OK or error code)
        virtual int GetAccessPermissionDetails(_ns1__GetAccessPermissionDetailsReq *ns1__GetAccessPermissionDetailsReq, ns1__GetAccessPermissionDetailsResponseType &ns1__GetAccessPermissionDetailsResponse)
        { return this->GetAccessPermissionDetails(NULL, NULL, ns1__GetAccessPermissionDetailsReq, ns1__GetAccessPermissionDetailsResponse); }
        virtual int GetAccessPermissionDetails(const char *soap_endpoint, const char *soap_action, _ns1__GetAccessPermissionDetailsReq *ns1__GetAccessPermissionDetailsReq, ns1__GetAccessPermissionDetailsResponseType &ns1__GetAccessPermissionDetailsResponse);
        /// Web service operation 'GetIncentiveEvaluation' (returns SOAP_OK or error code)
        virtual int GetIncentiveEvaluation(_ns1__GetIncentiveEvaluationReq *ns1__GetIncentiveEvaluationReq, ns1__GetIncentiveEvaluationResponseType &ns1__GetIncentiveEvaluationResponse)
        { return this->GetIncentiveEvaluation(NULL, NULL, ns1__GetIncentiveEvaluationReq, ns1__GetIncentiveEvaluationResponse); }
        virtual int GetIncentiveEvaluation(const char *soap_endpoint, const char *soap_action, _ns1__GetIncentiveEvaluationReq *ns1__GetIncentiveEvaluationReq, ns1__GetIncentiveEvaluationResponseType &ns1__GetIncentiveEvaluationResponse);
        /// Web service operation 'SetExpressCheckout' (returns SOAP_OK or error code)
        virtual int SetExpressCheckout(_ns1__SetExpressCheckoutReq *ns1__SetExpressCheckoutReq, ns1__SetExpressCheckoutResponseType &ns1__SetExpressCheckoutResponse)
        { return this->SetExpressCheckout(NULL, NULL, ns1__SetExpressCheckoutReq, ns1__SetExpressCheckoutResponse); }
        virtual int SetExpressCheckout(const char *soap_endpoint, const char *soap_action, _ns1__SetExpressCheckoutReq *ns1__SetExpressCheckoutReq, ns1__SetExpressCheckoutResponseType &ns1__SetExpressCheckoutResponse);
        /// Web service operation 'ExecuteCheckoutOperations' (returns SOAP_OK or error code)
        virtual int ExecuteCheckoutOperations(_ns1__ExecuteCheckoutOperationsReq *ns1__ExecuteCheckoutOperationsReq, ns1__ExecuteCheckoutOperationsResponseType &ns1__ExecuteCheckoutOperationsResponse)
        { return this->ExecuteCheckoutOperations(NULL, NULL, ns1__ExecuteCheckoutOperationsReq, ns1__ExecuteCheckoutOperationsResponse); }
        virtual int ExecuteCheckoutOperations(const char *soap_endpoint, const char *soap_action, _ns1__ExecuteCheckoutOperationsReq *ns1__ExecuteCheckoutOperationsReq, ns1__ExecuteCheckoutOperationsResponseType &ns1__ExecuteCheckoutOperationsResponse);
        /// Web service operation 'GetExpressCheckoutDetails' (returns SOAP_OK or error code)
        virtual int GetExpressCheckoutDetails(_ns1__GetExpressCheckoutDetailsReq *ns1__GetExpressCheckoutDetailsReq, ns1__GetExpressCheckoutDetailsResponseType &ns1__GetExpressCheckoutDetailsResponse)
        { return this->GetExpressCheckoutDetails(NULL, NULL, ns1__GetExpressCheckoutDetailsReq, ns1__GetExpressCheckoutDetailsResponse); }
        virtual int GetExpressCheckoutDetails(const char *soap_endpoint, const char *soap_action, _ns1__GetExpressCheckoutDetailsReq *ns1__GetExpressCheckoutDetailsReq, ns1__GetExpressCheckoutDetailsResponseType &ns1__GetExpressCheckoutDetailsResponse);
        /// Web service operation 'DoDirectPayment' (returns SOAP_OK or error code)
        virtual int DoDirectPayment(_ns1__DoDirectPaymentReq *ns1__DoDirectPaymentReq, ns1__DoDirectPaymentResponseType &ns1__DoDirectPaymentResponse)
        { return this->DoDirectPayment(NULL, NULL, ns1__DoDirectPaymentReq, ns1__DoDirectPaymentResponse); }
        virtual int DoDirectPayment(const char *soap_endpoint, const char *soap_action, _ns1__DoDirectPaymentReq *ns1__DoDirectPaymentReq, ns1__DoDirectPaymentResponseType &ns1__DoDirectPaymentResponse);
        /// Web service operation 'ManagePendingTransactionStatus' (returns SOAP_OK or error code)
        virtual int ManagePendingTransactionStatus(_ns1__ManagePendingTransactionStatusReq *ns1__ManagePendingTransactionStatusReq, ns1__ManagePendingTransactionStatusResponseType &ns1__ManagePendingTransactionStatusResponse)
        { return this->ManagePendingTransactionStatus(NULL, NULL, ns1__ManagePendingTransactionStatusReq, ns1__ManagePendingTransactionStatusResponse); }
        virtual int ManagePendingTransactionStatus(const char *soap_endpoint, const char *soap_action, _ns1__ManagePendingTransactionStatusReq *ns1__ManagePendingTransactionStatusReq, ns1__ManagePendingTransactionStatusResponseType &ns1__ManagePendingTransactionStatusResponse);
        /// Web service operation 'DoCancel' (returns SOAP_OK or error code)
        virtual int DoCancel(_ns1__DoCancelReq *ns1__DoCancelReq, ns1__DoCancelResponseType &ns1__DoCancelResponse)
        { return this->DoCancel(NULL, NULL, ns1__DoCancelReq, ns1__DoCancelResponse); }
        virtual int DoCancel(const char *soap_endpoint, const char *soap_action, _ns1__DoCancelReq *ns1__DoCancelReq, ns1__DoCancelResponseType &ns1__DoCancelResponse);
        /// Web service operation 'DoCapture' (returns SOAP_OK or error code)
        virtual int DoCapture(_ns1__DoCaptureReq *ns1__DoCaptureReq, ns1__DoCaptureResponseType &ns1__DoCaptureResponse)
        { return this->DoCapture(NULL, NULL, ns1__DoCaptureReq, ns1__DoCaptureResponse); }
        virtual int DoCapture(const char *soap_endpoint, const char *soap_action, _ns1__DoCaptureReq *ns1__DoCaptureReq, ns1__DoCaptureResponseType &ns1__DoCaptureResponse);
        /// Web service operation 'DoReauthorization' (returns SOAP_OK or error code)
        virtual int DoReauthorization(_ns1__DoReauthorizationReq *ns1__DoReauthorizationReq, ns1__DoReauthorizationResponseType &ns1__DoReauthorizationResponse)
        { return this->DoReauthorization(NULL, NULL, ns1__DoReauthorizationReq, ns1__DoReauthorizationResponse); }
        virtual int DoReauthorization(const char *soap_endpoint, const char *soap_action, _ns1__DoReauthorizationReq *ns1__DoReauthorizationReq, ns1__DoReauthorizationResponseType &ns1__DoReauthorizationResponse);
        /// Web service operation 'DoVoid' (returns SOAP_OK or error code)
        virtual int DoVoid(_ns1__DoVoidReq *ns1__DoVoidReq, ns1__DoVoidResponseType &ns1__DoVoidResponse)
        { return this->DoVoid(NULL, NULL, ns1__DoVoidReq, ns1__DoVoidResponse); }
        virtual int DoVoid(const char *soap_endpoint, const char *soap_action, _ns1__DoVoidReq *ns1__DoVoidReq, ns1__DoVoidResponseType &ns1__DoVoidResponse);
        /// Web service operation 'DoAuthorization' (returns SOAP_OK or error code)
        virtual int DoAuthorization(_ns1__DoAuthorizationReq *ns1__DoAuthorizationReq, ns1__DoAuthorizationResponseType &ns1__DoAuthorizationResponse)
        { return this->DoAuthorization(NULL, NULL, ns1__DoAuthorizationReq, ns1__DoAuthorizationResponse); }
        virtual int DoAuthorization(const char *soap_endpoint, const char *soap_action, _ns1__DoAuthorizationReq *ns1__DoAuthorizationReq, ns1__DoAuthorizationResponseType &ns1__DoAuthorizationResponse);
        /// Web service operation 'UpdateAuthorization' (returns SOAP_OK or error code)
        virtual int UpdateAuthorization(_ns1__UpdateAuthorizationReq *ns1__UpdateAuthorizationReq, ns1__UpdateAuthorizationResponseType &ns1__UpdateAuthorizationResponse)
        { return this->UpdateAuthorization(NULL, NULL, ns1__UpdateAuthorizationReq, ns1__UpdateAuthorizationResponse); }
        virtual int UpdateAuthorization(const char *soap_endpoint, const char *soap_action, _ns1__UpdateAuthorizationReq *ns1__UpdateAuthorizationReq, ns1__UpdateAuthorizationResponseType &ns1__UpdateAuthorizationResponse);
        /// Web service operation 'DoUATPAuthorization' (returns SOAP_OK or error code)
        virtual int DoUATPAuthorization(_ns1__DoUATPAuthorizationReq *ns1__DoUATPAuthorizationReq, ns1__DoUATPAuthorizationResponseType &ns1__DoUATPAuthorizationResponse)
        { return this->DoUATPAuthorization(NULL, NULL, ns1__DoUATPAuthorizationReq, ns1__DoUATPAuthorizationResponse); }
        virtual int DoUATPAuthorization(const char *soap_endpoint, const char *soap_action, _ns1__DoUATPAuthorizationReq *ns1__DoUATPAuthorizationReq, ns1__DoUATPAuthorizationResponseType &ns1__DoUATPAuthorizationResponse);
        /// Web service operation 'SetCustomerBillingAgreement' (returns SOAP_OK or error code)
        virtual int SetCustomerBillingAgreement(_ns1__SetCustomerBillingAgreementReq *ns1__SetCustomerBillingAgreementReq, ns1__SetCustomerBillingAgreementResponseType &ns1__SetCustomerBillingAgreementResponse)
        { return this->SetCustomerBillingAgreement(NULL, NULL, ns1__SetCustomerBillingAgreementReq, ns1__SetCustomerBillingAgreementResponse); }
        virtual int SetCustomerBillingAgreement(const char *soap_endpoint, const char *soap_action, _ns1__SetCustomerBillingAgreementReq *ns1__SetCustomerBillingAgreementReq, ns1__SetCustomerBillingAgreementResponseType &ns1__SetCustomerBillingAgreementResponse);
        /// Web service operation 'GetBillingAgreementCustomerDetails' (returns SOAP_OK or error code)
        virtual int GetBillingAgreementCustomerDetails(_ns1__GetBillingAgreementCustomerDetailsReq *ns1__GetBillingAgreementCustomerDetailsReq, ns1__GetBillingAgreementCustomerDetailsResponseType &ns1__GetBillingAgreementCustomerDetailsResponse)
        { return this->GetBillingAgreementCustomerDetails(NULL, NULL, ns1__GetBillingAgreementCustomerDetailsReq, ns1__GetBillingAgreementCustomerDetailsResponse); }
        virtual int GetBillingAgreementCustomerDetails(const char *soap_endpoint, const char *soap_action, _ns1__GetBillingAgreementCustomerDetailsReq *ns1__GetBillingAgreementCustomerDetailsReq, ns1__GetBillingAgreementCustomerDetailsResponseType &ns1__GetBillingAgreementCustomerDetailsResponse);
        /// Web service operation 'CreateBillingAgreement' (returns SOAP_OK or error code)
        virtual int CreateBillingAgreement(_ns1__CreateBillingAgreementReq *ns1__CreateBillingAgreementReq, ns1__CreateBillingAgreementResponseType &ns1__CreateBillingAgreementResponse)
        { return this->CreateBillingAgreement(NULL, NULL, ns1__CreateBillingAgreementReq, ns1__CreateBillingAgreementResponse); }
        virtual int CreateBillingAgreement(const char *soap_endpoint, const char *soap_action, _ns1__CreateBillingAgreementReq *ns1__CreateBillingAgreementReq, ns1__CreateBillingAgreementResponseType &ns1__CreateBillingAgreementResponse);
        /// Web service operation 'DoReferenceTransaction' (returns SOAP_OK or error code)
        virtual int DoReferenceTransaction(_ns1__DoReferenceTransactionReq *ns1__DoReferenceTransactionReq, ns1__DoReferenceTransactionResponseType &ns1__DoReferenceTransactionResponse)
        { return this->DoReferenceTransaction(NULL, NULL, ns1__DoReferenceTransactionReq, ns1__DoReferenceTransactionResponse); }
        virtual int DoReferenceTransaction(const char *soap_endpoint, const char *soap_action, _ns1__DoReferenceTransactionReq *ns1__DoReferenceTransactionReq, ns1__DoReferenceTransactionResponseType &ns1__DoReferenceTransactionResponse);
        /// Web service operation 'CreateRecurringPaymentsProfile' (returns SOAP_OK or error code)
        virtual int CreateRecurringPaymentsProfile(_ns1__CreateRecurringPaymentsProfileReq *ns1__CreateRecurringPaymentsProfileReq, ns1__CreateRecurringPaymentsProfileResponseType &ns1__CreateRecurringPaymentsProfileResponse)
        { return this->CreateRecurringPaymentsProfile(NULL, NULL, ns1__CreateRecurringPaymentsProfileReq, ns1__CreateRecurringPaymentsProfileResponse); }
        virtual int CreateRecurringPaymentsProfile(const char *soap_endpoint, const char *soap_action, _ns1__CreateRecurringPaymentsProfileReq *ns1__CreateRecurringPaymentsProfileReq, ns1__CreateRecurringPaymentsProfileResponseType &ns1__CreateRecurringPaymentsProfileResponse);
        /// Web service operation 'GetRecurringPaymentsProfileDetails' (returns SOAP_OK or error code)
        virtual int GetRecurringPaymentsProfileDetails(_ns1__GetRecurringPaymentsProfileDetailsReq *ns1__GetRecurringPaymentsProfileDetailsReq, ns1__GetRecurringPaymentsProfileDetailsResponseType &ns1__GetRecurringPaymentsProfileDetailsResponse)
        { return this->GetRecurringPaymentsProfileDetails(NULL, NULL, ns1__GetRecurringPaymentsProfileDetailsReq, ns1__GetRecurringPaymentsProfileDetailsResponse); }
        virtual int GetRecurringPaymentsProfileDetails(const char *soap_endpoint, const char *soap_action, _ns1__GetRecurringPaymentsProfileDetailsReq *ns1__GetRecurringPaymentsProfileDetailsReq, ns1__GetRecurringPaymentsProfileDetailsResponseType &ns1__GetRecurringPaymentsProfileDetailsResponse);
        /// Web service operation 'ManageRecurringPaymentsProfileStatus' (returns SOAP_OK or error code)
        virtual int ManageRecurringPaymentsProfileStatus(_ns1__ManageRecurringPaymentsProfileStatusReq *ns1__ManageRecurringPaymentsProfileStatusReq, ns1__ManageRecurringPaymentsProfileStatusResponseType &ns1__ManageRecurringPaymentsProfileStatusResponse)
        { return this->ManageRecurringPaymentsProfileStatus(NULL, NULL, ns1__ManageRecurringPaymentsProfileStatusReq, ns1__ManageRecurringPaymentsProfileStatusResponse); }
        virtual int ManageRecurringPaymentsProfileStatus(const char *soap_endpoint, const char *soap_action, _ns1__ManageRecurringPaymentsProfileStatusReq *ns1__ManageRecurringPaymentsProfileStatusReq, ns1__ManageRecurringPaymentsProfileStatusResponseType &ns1__ManageRecurringPaymentsProfileStatusResponse);
        /// Web service operation 'BillOutstandingAmount' (returns SOAP_OK or error code)
        virtual int BillOutstandingAmount(_ns1__BillOutstandingAmountReq *ns1__BillOutstandingAmountReq, ns1__BillOutstandingAmountResponseType &ns1__BillOutstandingAmountResponse)
        { return this->BillOutstandingAmount(NULL, NULL, ns1__BillOutstandingAmountReq, ns1__BillOutstandingAmountResponse); }
        virtual int BillOutstandingAmount(const char *soap_endpoint, const char *soap_action, _ns1__BillOutstandingAmountReq *ns1__BillOutstandingAmountReq, ns1__BillOutstandingAmountResponseType &ns1__BillOutstandingAmountResponse);
        /// Web service operation 'UpdateRecurringPaymentsProfile' (returns SOAP_OK or error code)
        virtual int UpdateRecurringPaymentsProfile(_ns1__UpdateRecurringPaymentsProfileReq *ns1__UpdateRecurringPaymentsProfileReq, ns1__UpdateRecurringPaymentsProfileResponseType &ns1__UpdateRecurringPaymentsProfileResponse)
        { return this->UpdateRecurringPaymentsProfile(NULL, NULL, ns1__UpdateRecurringPaymentsProfileReq, ns1__UpdateRecurringPaymentsProfileResponse); }
        virtual int UpdateRecurringPaymentsProfile(const char *soap_endpoint, const char *soap_action, _ns1__UpdateRecurringPaymentsProfileReq *ns1__UpdateRecurringPaymentsProfileReq, ns1__UpdateRecurringPaymentsProfileResponseType &ns1__UpdateRecurringPaymentsProfileResponse);
        /// Web service operation 'DoNonReferencedCredit' (returns SOAP_OK or error code)
        virtual int DoNonReferencedCredit(_ns1__DoNonReferencedCreditReq *ns1__DoNonReferencedCreditReq, ns1__DoNonReferencedCreditResponseType &ns1__DoNonReferencedCreditResponse)
        { return this->DoNonReferencedCredit(NULL, NULL, ns1__DoNonReferencedCreditReq, ns1__DoNonReferencedCreditResponse); }
        virtual int DoNonReferencedCredit(const char *soap_endpoint, const char *soap_action, _ns1__DoNonReferencedCreditReq *ns1__DoNonReferencedCreditReq, ns1__DoNonReferencedCreditResponseType &ns1__DoNonReferencedCreditResponse);
        /// Web service operation 'ReverseTransaction' (returns SOAP_OK or error code)
        virtual int ReverseTransaction(_ns1__ReverseTransactionReq *ns1__ReverseTransactionReq, ns1__ReverseTransactionResponseType &ns1__ReverseTransactionResponse)
        { return this->ReverseTransaction(NULL, NULL, ns1__ReverseTransactionReq, ns1__ReverseTransactionResponse); }
        virtual int ReverseTransaction(const char *soap_endpoint, const char *soap_action, _ns1__ReverseTransactionReq *ns1__ReverseTransactionReq, ns1__ReverseTransactionResponseType &ns1__ReverseTransactionResponse);
        /// Web service operation 'ExternalRememberMeOptOut' (returns SOAP_OK or error code)
        virtual int ExternalRememberMeOptOut(_ns1__ExternalRememberMeOptOutReq *ns1__ExternalRememberMeOptOutReq, ns1__ExternalRememberMeOptOutResponseType &ns1__ExternalRememberMeOptOutResponse)
        { return this->ExternalRememberMeOptOut(NULL, NULL, ns1__ExternalRememberMeOptOutReq, ns1__ExternalRememberMeOptOutResponse); }
        virtual int ExternalRememberMeOptOut(const char *soap_endpoint, const char *soap_action, _ns1__ExternalRememberMeOptOutReq *ns1__ExternalRememberMeOptOutReq, ns1__ExternalRememberMeOptOutResponseType &ns1__ExternalRememberMeOptOutResponse);
    };
#endif
