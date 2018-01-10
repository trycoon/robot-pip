#ifndef main_h
#define main_h

#include <string>
#include <Arduino.h>
#include <AsyncMqttClient.h>

boolean spiffs_available;

void onMqttConnect(bool sessionPresent);
void onMqttDisconnect(AsyncMqttClientDisconnectReason reason);
void onMqttPublish(uint16_t packetId);
void onMqttMessage(char* topic, char* payload, AsyncMqttClientMessageProperties properties, size_t len, size_t index, size_t total);
void publish_message(String message, std::string subtopic = "");
void setup_WiFi();
void setup_OTA();
void setup_MQTT();

#endif
