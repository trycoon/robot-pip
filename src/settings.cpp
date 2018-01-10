#include "settings.h"

/*
* Global settings and pin-assignments.
*/

namespace Settings {
    // Name of application
    const char* APP_NAME = "pip";

    // Max number of messages awaiting to be sent to broker. Higher value consumes more RAM-memory but let us be disconnected from WiFi for a longer period.
    const uint16_t MQTT_QUEUE_LENGTH = 50;

    /*
      I2C pins
    */
    const uint8_t SDA_PIN = SDA; // could be any free and suitable pin. We use default D2 here.
    const uint8_t SCL_PIN = SCL; // could be any free and suitable pin. We use default D1 here.

    /*
      COMPASS
    */
    const uint8_t IO_COMPASS_ADDRESS = 0x53; // I2C address.

    /*
      Wheel motor settings
    */
     const uint8_t LEFT_WHEEL_MOTOR_PIN = D2;
     const uint8_t LEFT_WHEEL_MOTOR_DIRECTION_PIN = D4;
     const uint8_t LEFT_WHEEL_MOTOR_SPEED = 100;   // 0-100 (%), used to compensate for drifting motors, lower this value if mower drift to the right.
     const bool LEFT_WHEEL_MOTOR_INVERTED = false; // Set to "true" if left wheel runs backward when mower should be running forward.

     const uint8_t RIGHT_WHEEL_MOTOR_PIN = D1;
     const uint8_t RIGHT_WHEEL_MOTOR_DIRECTION_PIN = D3;
     const uint8_t RIGHT_WHEEL_MOTOR_SPEED = 100;   // 0-100 (%), used to compensate for drifting motors, lower this value if mower drift to the left.
     const bool RIGHT_WHEEL_MOTOR_INVERTED = false; // Set to "true" if right wheel runs backward when mower should be running forward.

     const uint8_t WHEEL_MOTOR_MIN_SPEED = 50;    // 0-100 (%), set the minimum speed that the wheel motors should use. This is used in combination with e.g. WHEEL_MOTOR_DECREASE_SPEED_AT_CUTTER_LOAD.
     const uint8_t WHEEL_MOTOR_TURN_SPEED = 50;   // 0-100 (%), speed to use when turning.

     const uint8_t OBSTACLE_DETECTOR_SERVO_PIN = D5;
     const uint8_t OBSTACLE_DETECTOR_TRIGGER = D6;

     const uint8_t BUZZER_PIN = D7;

     // Lithium-ion / LiPo  http://batteryuniversity.com/learn/article/types_of_lithium_ion
     // Normally a fully charged cell is 4.2 volt and quickly drops down to 3.7 volt, as battery is closing depleated it will drop from 3.7 down to 3.0 volt.
     // 3.0 volts should be considered an completely discharged cell, below that will damage the cell.
     const float BATTERY_FULLY_CHARGED = 8.4;        // in volt. e.g. 4.2 volt * 2 cells = 8.4 volt.
     const float BATTERY_EMPTY = 6.00;               // in volt. e.g. 3.0 volt * 2 cells = 6.0 volt and then we add a few volts to give us enough power to get us back to the charger.
     const float BATTERY_RESISTOR_DIVISOR = 20.0/170.0;   // Setting of RV2-trim resistor divided by size of RV2-trim resistor, e.g. 20/170 (kilo ohm). This is to read the correct battery voltage.

    // Nickel–metal hydride / NiMH example. http://batteryuniversity.com/learn/article/charging_nickel_metal_hydride
    // const float BATTERY_FULLY_CHARGED = 14.50;
    // const float BATTERY_EMPTY = 11.50;
    // const float BATTERY_RESISTOR_DIVISOR = ???;

    // Lead-acid example. http://www.solarnavigator.net/battery_charging.htm
    // const float BATTERY_FULLY_CHARGED = 13.30;
    // const float BATTERY_EMPTY = 11.90;
    // const float BATTERY_RESISTOR_DIVISOR = ???;

    /*
      Charger Settings
    */
    const uint8_t CHARGER_SENSOR_CHANNEL = 2;    // Channel on ADC for measuring charger voltage.
    const float CHARGER_RESISTOR_DIVISOR = 20.0/170.0; // Setting of RV1-trim resistor divided by size of RV1-trim resistor, e.g. 20/170 (kilo ohm). This is to read the correct charge voltage.

}
