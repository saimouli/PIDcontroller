/**
 *  @file      PID.cpp
 *  @brief     PID Class
 *  @details   Definition and implementation of the PID
 *  @author    Saimouli Katragadda
 *  @author    Part 2 (Driver:Kapil Rawal, Navigator:Amrish Baskaran)
 *  @copyright GNU Public License.
 */

#include <iostream>
#include "PID.h"
#include "generalPID.h"


PID::PID() {
  kP = 2;
  kD = 1;
  kI = 0.1;
  dT = 0.5;
  prevErr = 0;
  iterr = 0;
}

PID::PID(float kp, float kd, float ki, float dt) {
  kP = kp;
  kD = kd;
  kI = ki;
  dT = dt;
  prevErr = 0;
  iterr = 0;
}

PID::~PID() {
}


float PID::getKD() {
  return kD;
}

float PID::getKI() {
  return kI;
}

float PID::getKP() {
  return kP;
}


float PID::computePID(float spVel, float currVel) {
  // calculate error
  float error = spVel - currVel;
  // calculate iterr for integral
  iterr += error * dT;
  // calculate final output
  // Proportional term = kp* error
  // integral term  = kI * iterr
  // derivative term = kD * ((error - prevErr) / dT)
  float output = kP * error + kI * iterr + kD * ((error - prevErr) / dT);
  prevErr = error;

  return output;
}






