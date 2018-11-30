
#ifndef INCLUDE_GENERALPID_H_
#define INCLUDE_GENERALPID_H_

#include <iostream>

/**
 * @brief generalPID Class
 * class for pure inheritance of cascaded PID classes
 */

class generalPID {
 protected:
  float kP;
  float kD;
  float kI;
  float dT;
  float prevErr;
  float iterr;

 public:
  generalPID();

  virtual ~generalPID()=0;

  virtual float computePID(float spVel, float currVel) =0;

  virtual bool setKP(float kp);

  virtual bool setKI(float ki);

  virtual bool setKD(float kd);
};

#endif /* INCLUDE_GENERALPID_H_ */
