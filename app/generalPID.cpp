#include "generalPID.h"

generalPID::generalPID()
    : kP(0),
      kD(0),
      kI(0),
      dT(0),
      prevErr(0),
      iterr(0) {
}

generalPID::~generalPID() {
}

bool generalPID::setKD(float kd) {
  kD = kd;
  return true;
}

bool generalPID::setKP(float kp) {
  // set the kp gain value
  kP = kp;
  // return true
  return true;
}

bool generalPID::setKI(float ki) {
  // set ki gain value
  kI = ki;
  // return true
  return true;
}
