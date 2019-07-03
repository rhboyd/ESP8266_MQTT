#include <pgmspace.h>
#define SECRET

const char ssid[] = "[YOUR_WIFI_SSID_HERE]";
const char pass[] = "[YOUR_WIFI_PASSWORD_HERE]";

#define THINGNAME "MyThermometer"

int8_t TIME_ZONE = -5; //NYC(USA): -5 UTC
#define USE_SUMMER_TIME_DST  //uncomment to use DST

const char MQTT_HOST[] = "[YOUR_ENDPOINT_HERE]";

// Obtain First CA certificate for Amazon AWS
// https://docs.aws.amazon.com/iot/latest/developerguide/managing-device-certs.html#server-authentication
// Copy contents from CA certificate here ▼
static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
rqXRfboQnoZsG4q5WTP468SQvvG5
-----END CERTIFICATE-----
)EOF";

// Copy contents from XXXXXXXX-certificate.pem.crt here ▼
static const char client_cert[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
MIIDWTCCAkGgAwIBAgIUMHOzkNbfRlutF13t0Y+M+Ljd8YMwDQYJKoZIhvcNAQEL
N0mZqdsIBSfyWUl2Ov62875tyOsl76X6l7Z+DSbWcPigu/rSHb+hmUZIXzagCjE3
YjrUW4SIlQnqIAE0r/xoOCNAQG/aZOPLmr+w1OsnPELkkYX1OZVMCJZzHN2R
-----END CERTIFICATE-----
)KEY";

// Copy contents from  XXXXXXXX-private.pem.key here ▼
static const char privkey[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
MIIEogIBAAKCAQEAuf9RWez2HiIEb/lzmxW6ufexDmviJcw5DGvR168KHgTWvQkr
KXEn6HhvbUxok/cLkyse5xw5lI2ntmtLzoAgQJyZ3PUm9atr5oDLHuinT3oz7/eh
9W4nWASaOEO5la0KGGiw5L3aBMHY5c5GrQPXcDKP6hz8at/dv1s=
-----END RSA PRIVATE KEY-----
)KEY";
