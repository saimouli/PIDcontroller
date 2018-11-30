/**
 *  MIT License
 *
 *  Copyright (c) 2018 Saimouli Katragadda
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a
 *  copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without
 *  limitation the rights to use, copy, modify, merge, publish, distribute,
 *  sublicense, and/or sell copies of the Software, and to permit persons to
 *  whom the Software is furnished to do so, subject to the following
 *  conditions:
 *
 *  The above copyright notice and this permission notice shall be included
 *  in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 *  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *  DEALINGS IN THE SOFTWARE.
 */

/**
 *  @file      PID.cpp
 *  @brief     PID Class
 *  @author    Saimouli Katragadda
 *  @details   Implementation of the PID methods
 *  @copyright MIT License.
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
