#ifndef PID_CONTROLLLER_H
#define PID_CONTROLLLER_H

#include <Arduino.h>

class PIDController{
  public:
    PIDController(void);
    int calcResponse(int error, int ms);
    void setGains(float Kp, float Ki, float Kd);
  private:
    float _prev_error;
    float _integral_sum;
    float _Kp;
    float _Ki;
    float _Kd;
};

#endif
