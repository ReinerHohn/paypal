// Paypal.cpp : Defines the entry point for the console application.
//

#include <soapH.h>
#include "soapPayPalAPISoapBindingProxy.h"
#include "PayPalAPISoapBinding.nsmap"
#include "D:\Entwicklung\2_git\gsoap\gsoap_2.8.55\gsoap-2.8\gsoap\plugin\cacerts.h"

#include <string>
#include <fstream>
#include <streambuf>

#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	std::string strSignature;
	PayPalAPISoapBindingProxy paypalProxy("https://api-3t.sandbox.paypal.com/2.0/");
	struct soap *soap = soap_new(); // create a new context
	soap_init(soap);

	paypalProxy.header = new SOAP_ENV__Header;
	paypalProxy.header->ns1__RequesterCredentials = new ns3__CustomSecurityHeaderType;
	paypalProxy.header->ns1__RequesterCredentials->eBayAuthToken = NULL; // &sUserToken;
	paypalProxy.header->ns1__RequesterCredentials->Credentials = new ns3__UserIdPasswordType;
	paypalProxy.header->ns1__RequesterCredentials->Credentials->AppId = NULL; // &sAppId;
	paypalProxy.header->ns1__RequesterCredentials->Credentials->DevId = NULL; // &sDevId;
	paypalProxy.header->ns1__RequesterCredentials->Credentials->AuthCert = NULL; // &sAuthCert;

	paypalProxy.header->ns1__RequesterCredentials->Credentials->Username = soap_strdup(soap, "mi-dick_api1.gmx.de");
	paypalProxy.header->ns1__RequesterCredentials->Credentials->Password = soap_strdup(soap, "BXV8EFW5J7CQU4KP");
	strSignature = soap_strdup(soap, "ADvj-tIuMJxr3YEo-QPTwZC-2h.3A5Tz2QMZtUuFCzu2c5dpIVxpztRh"); // Sandbox env
	paypalProxy.header->ns1__RequesterCredentials->Credentials->Signature = &strSignature;

	_ns1__GetBalanceReq ns1__GetBalanceReq;
	ns1__GetBalanceResponseType ns1__GetBalanceResponse;

	ns1__GetBalanceReq.GetBalanceRequest = new ns1__GetBalanceRequestType; // (soap, NULL, NULL, "ns1:GetBalanceRequestType");
	ns1__GetBalanceReq.GetBalanceRequest->DetailLevel.push_back(ns3__DetailLevelCodeType__ReturnAll);

/*	soap_ssl_init();
	//if (soap_ssl_client_context(soap, SOAP_SSL_DEFAULT, NULL, NULL, "api-3t.sandbox.paypal.com_SHA-2_01142018.pem", NULL, NULL))
	if (soap_ssl_client_context(soap, SOAP_SSL_DEFAULT, NULL, NULL, "D:\\Entwicklung\\2_git\\paypal\\api-3t.sandbox.paypal.com_SHA-2_01142018.pem", NULL, NULL))
	{
		soap_print_fault(soap, stderr);
		exit(1);
	}
	STACK_OF(X509_NAME) *cert_names;
	cert_names = SSL_load_client_CA_file("D:\\Entwicklung\\2_git\\paypal_lin\\cacert.pem");
	if (cert_names != NULL)
	{
		//SSL_CTX_set_client_CA_list(soap->ctx, cert_names);
		//SSL_CTX_add_client_CA(soap->ctx, cert_names);
		SSL_CTX_use_certificate_chain_file(soap->ctx, "D:\\Entwicklung\\2_git\\paypal_lin\\cacert.pem");
	}
*/
	//std::ifstream t("D:\\Entwicklung\\2_git\\paypal_lin\\gsoap.pem");
	//std::ifstream t("D:\\Entwicklung\\2_git\\paypal_lin\\cacert.pem");
	std::ifstream t("D:\\Entwicklung\\2_git\\gsoap\\gsoap_2.8.55\\gsoap-2.8\\gsoap\\samples\\ssl\\cacerts.pem");
	std::string str((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());

	char* pstr = _strdup(str.c_str());
	//if (soap_ssl_client_cacerts_str(soap, pstr)) // || soap_call_ns__myMethod(soap, "https://api-3t.sandbox.paypal.com") != SOAP_OK)
	if (soap_ssl_client_cacerts_str(soap, pstr)) // || paypalProxy.GetBalance(&ns1__GetBalanceReq, ns1__GetBalanceResponse) != SOAP_OK)
	{
		soap_print_fault(soap, stderr);
		exit(1);
	}

	int res = paypalProxy.GetBalance(&ns1__GetBalanceReq, ns1__GetBalanceResponse);
	if (res != SOAP_OK)
	{
		soap_print_fault(soap, stderr);
	}
	else
	{
		std::ostringstream oss;
		oss << ns1__GetBalanceResponse.Balance;
                std::cout << oss.str() << std::endl;
		oss << ns1__GetBalanceResponse.BalanceTimeStamp;
		std::cout << oss.str() << std::endl;
		//std::cout << ns1__GetBalanceResponse.BalanceHoldings. ->soap_serialize << std::endl;
		//std::cout << ns1__GetBalanceResponse.BalanceTimeStamp soap_serialize << std::endl;
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
	std::cout << std::endl;
	return 0;
}
