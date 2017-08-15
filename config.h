/*
 * This is a sample configuration file for the "mqtt_esp8266_sensors" sensor.
 *
 * Change the settings below and save the file as "config.h"
 * You can then upload the code using the Arduino IDE.
 */

// WiFi
//#define CONFIG_WIFI_SSID "Xom nha la"             // SSID of the wi-fi hostpot
//#define CONFIG_WIFI_PASS "AgriConnect"            // Passwork of the wi-fi hostpot
#define CONFIG_WIFI_SSID "FPT-TanPhuc"
#define CONFIG_WIFI_PASS "01666863453"

// MQTT
#define CONFIG_MQTT_HOST "mqtt.agriconnect.vn"    // MQTT broker
#define CONFIG_MQTT_USER "node"                   // User - connect to MQTT broker
#define CONFIG_MQTT_PASS "654321"                 // Passwork - connect to MQTT broker
#define CONFIG_MQTT_CLIENT_ID "daothanhnode01"          // Must be unique on the MQTT network

// MQTT Topics
#define CONFIG_MQTT_TOPIC "daothanh/r1/n/01"          // MQTT-Msg-Topic - publish the envi-data to MQTT broker
#define CONFIG_PUMP_STATUS_TOPIC "daothanh/r1/ds/01"  // MQTT-Msg-Topic - publish the pump-status to MQTT broker
#define CONFIG_LED_STATUS_TOPIC "daothanh/r1/ds/02"   // MQTT-Msg-Topic - publish the led-status to MQTT broker
#define CONFIG_FAN_STATUS_TOPIC "daothanh/r1/ds/03"   // MQTT-Msg-Topic - publish the fan-status to MQTT broker

#define CONFIG_SUBSCRIBE_TOPIC "daothanh/r1/d/#"      // MQTT-Msg-Topic - subscribe the device-status from MQTT broker
#define CONFIG_PUMP_TOPIC "daothanh/r1/d/01"          // MQTT-Msg-Topic - subscribe the pump-status from MQTT broker
#define CONFIG_LED_TOPIC "daothanh/r1/d/02"           // MQTT-Msg-Topic - subscribe the led-status from MQTT broker
#define CONFIG_FAN_TOPIC "daothanh/r1/d/03"           // MQTT-Msg-Topic - subscribe the fan-status from MQTT broker

// DHT sensor
#define CONFIG_DHT_PIN 2                          // Define the DHT type in the code file
#define CONFIG_SAMPLE_DELAY 10000                 // Milliseconds step - 10 seconds

// Soil moisture sensor
#define CONFIG_IO_SOIL_MOISTURE A0
#define CONFIG_SMC_SAMPLE_NUMBER 5                // Reading 5 samples, after that caculating the average of them
#define CONFIG_SAMPLE_PERIOD 500                  // Delay between 2 readings - in miliseconds
#define CONFIG_AIR_VALUE 434                      // A value between 0 - 1024 when put the SM sensor in the air
#define CONFIG_WATER_VALUE 328                    // A value between 0 - 1024 when put the SM sensor into the water

// GPIOs
#define CONFIG_IO_PUMP 12                         // GPIO12 of ESP8266 which controls the PUMP
#define CONFIG_IO_LED 13                          // GPIO12 of ESP8266 which controls the LED
#define CONFIG_IO_FAN 14                          // GPIO12 of ESP8266 which controls the FAN
