#ifndef _obstacle_detector_h
#define _obstacle_detector_h

#include <functional>
#include <Servo.h>
#include "processable.h"

class ObstacleDetector : public Processable {
  public:
    ObstacleDetector();
    ~ObstacleDetector();
    void center();
    void sweep();
    void process();

  private:
    uint8_t SWEEP_STEP = 10;
    uint8_t sweep_pos = 90;   // goes from 0 degrees to 180 degrees
    int16_t sweep_delta = 0;
    Servo servo;
};

#endif
