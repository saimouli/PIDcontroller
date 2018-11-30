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
 *  @file      PID.h
 *  @author    Saimouli Katragadda
 *  @copyright MIT License.
 *  @brief   Definition and implementation of the PID class
 */

#ifndef INCLUDE_PID_H_
#define INCLUDE_PID_H_

#include <iostream>
#include "generalPID.h"

/**
 * @brief generalPID Class
 * derived class of the base generalPID class
 * implements the computePID
 */
class PID : public generalPID {
 public:
  /**
   * @brief default constructor PID class
   * @param none
   * @return none
   * Initializes all gain values of
   * the base class to zero
   */
  PID();

  /**
   * @brief constructor PID class
   * @param kp of type float
   * @param kd of type float
   * @param ki of type float
   * @param dt of type float
   * @return none
   * Initializes gains and dt to the values passed
   * to the constructor
   */
  PID(float kp, float kd, float ki, float dt);

  /**
   * @brief Destructor for PID class
   * @param none
   * @return none
   * destroys class objects when
   * it goes out of scope
   */
  ~PID();

  /**
   * @brief getKP function
   * @param none
   * @return kp gain of type float
   * returns the kp gain upon request
   */
  float getKP();

  /**
   * @brief getKD function
   * @param none
   * @return kd gain of type float
   * returns the kd gain upon request
   */
  float getKD();

  /**
   * @brief getKI function
   * @param none
   * @return ki gain of type float
   * returns the ki gain upon request
   */
  float getKI();

  /**
   * @brief computePID function
   * @param spVel of type float
   * @param currVel of type float
   * @return input of type float
   */
  float computePID(float spVel, float currVel);

};

#endif /* INCLUDE_PID_H_ */
