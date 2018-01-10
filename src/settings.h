#ifndef _settings_h
#define _settings_h

#include <string>
#include <Arduino.h>
#include "secrets.h"

namespace Settings {
  extern const char* APP_NAME;
  extern const uint8_t SDA_PIN;
  extern const uint8_t SCL_PIN;
  extern const uint8_t IO_COMPASS_ADDRESS;
  extern const uint8_t LEFT_WHEEL_MOTOR_PIN;
  extern const uint8_t LEFT_WHEEL_MOTOR_DIRECTION_PIN;
  extern const uint8_t LEFT_WHEEL_MOTOR_SPEED;
  extern const bool LEFT_WHEEL_MOTOR_INVERTED;
  extern const uint8_t RIGHT_WHEEL_MOTOR_PIN;
  extern const uint8_t RIGHT_WHEEL_MOTOR_DIRECTION_PIN;
  extern const uint8_t RIGHT_WHEEL_MOTOR_SPEED;
  extern const bool RIGHT_WHEEL_MOTOR_INVERTED;
  extern const uint8_t WHEEL_MOTOR_MIN_SPEED;
  extern const uint8_t WHEEL_MOTOR_TURN_SPEED;
  extern const uint8_t OBSTACLE_DETECTOR_SERVO_PIN;
  extern const uint8_t OBSTACLE_DETECTOR_TRIGGER;
  extern const uint8_t BUZZER_PIN;
  extern const float BATTERY_FULLY_CHARGED;
  extern const float BATTERY_EMPTY;
  extern const float BATTERY_RESISTOR_DIVISOR;
  extern const uint8_t CHARGER_SENSOR_CHANNEL;
  extern const float CHARGER_RESISTOR_DIVISOR;
  extern const uint16_t MQTT_QUEUE_LENGTH;
};

#endif
