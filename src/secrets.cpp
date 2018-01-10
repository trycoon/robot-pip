#include "secrets.h"

/*
* Secrets settings that should not be committed to Git-repo.
*/

namespace Settings {
    /*
    * WiFi settings
    */
    const char* const SSID = "<your WiFi SSID>";
    const char* const WIFI_PASSWORD = "<your WiFi password>";
    const char* const OTA_PASSWORD = "<your Over-The-Air firmware update password>";

    /*
    * MQTT settings (https://en.wikipedia.org/wiki/MQTT)
    */
    const char* const MQTT_SERVER = "<your MQTT server>"; // leave this as it is or set it to an empty string if MQTT should not be used.
    const uint16_t MQTT_PORT = 1883;
    const std::string MQTT_TOPIC = "home/pip";
}
