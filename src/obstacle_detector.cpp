#include "obstacle_detector.h"
#include "settings.h"

ObstacleDetector::ObstacleDetector() {
  servo.attach(Settings::OBSTACLE_DETECTOR_SERVO_PIN);
};

ObstacleDetector::~ObstacleDetector() {
  servo.write(sweep_pos);
}

void ObstacleDetector::center() {
  sweep_pos = 90;
  sweep_delta = 0;
}

void ObstacleDetector::sweep() {
  sweep_pos = 90;
  sweep_delta = SWEEP_STEP;
}

void ObstacleDetector::process() {
  sweep_pos += sweep_delta;

  // check limits
  if (sweep_pos <= 0 || sweep_pos >= 180) {
    // start turning the other way
    sweep_delta = -sweep_delta;
  }

  servo.write(sweep_pos);
  delay(100);  // waits 15ms for the servo to reach the position.
}
