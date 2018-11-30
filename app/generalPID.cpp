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
 *  @file      generalPID.cpp
 *  @author    Saimouli Katragadda
 *  @copyright MIT License.
 *  @brief   Definition and implementation of
 *  the virtual PID class
 */

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
