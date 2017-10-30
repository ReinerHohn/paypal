wsdl2hssl -o paypal.h  https://www.sandbox.paypal.com/wsdl/PayPalSvc.wsdl
soapcpp2 -c -r -CL paypal.h -ID:\Entwicklung\Tools\gsoap-2.8\gsoap
https://www.paypal.com/wsdl/PayPalSvc.wsdl

Linux:
g++ -g -O0 -std=c++11 -o paypal -DWITH_OPENSSL ../gsoap-2.8.54/gsoap/stdsoap2.c ../gsoap-2.8.54/gsoap/custom/chrono_duration.cpp  -I../gsoap-2.8.54/gsoap soapClient.cpp soapC.cpp -I. Paypal/Paypal/Paypal.cpp  -lssl -lcrypto

