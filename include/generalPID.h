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
 *  @file      generalPID.h
 *  @author    Saimouli Katragadda
 *  @copyright MIT License.
 *  @breif   Virtual class meant for abstraction
 *  and implementation of the PID
 */

#ifndef INCLUDE_GENERALPID_H_
#define INCLUDE_GENERALPID_H_

#include <iostream>

/**
 * @brief generalPID Class
 * class for pure inheritance of cascaded PID classes
 */

class generalPID {
 protected:
  // variable to store proportional gain
  float kP;
  // variable to store derivative gain
  float kD;
  // variable to store integral gain
  float kI;
  // variable to store time constant
  float dT;
  // variable to store error values for integration
  float prevErr;
  // variable used to store integration values
  float iterr;

 public:
  /**
   * @brief constructor generalPID class
   * @param none
   * @return none
   * Initializes all private variables to zero
   */
  generalPID();

  /**
   * @brief virtual destructor for generalPID
   * @param none
   * @return none
   * destroys class objects when
   * it goes out of scope even in derived classes.
   */
  virtual ~generalPID()=0;

  /**
   * @brief pure virtual computePID method
   * @param spVel
   * @param currVel
   * @return input of type float
   * a pure virtual function to be derived for
   * cascaded PID classes
   */
  virtual float computePID(float spVel, float currVel) =0;

  /**
   * @brief virtual function setKP
   * @param kp of type float
   * @return boolean
   * function to set the kp value
   */
  virtual bool setKP(float kp);

  /**
   * @brief virtual function setKI
   * @param kI of type float
   * @return boolean
   * function to set the kI value
   */
  virtual bool setKI(float ki);

  /**
   * @brief virtual function setKD
   * @param kd of type float
   * @return boolean
   * function to set the kd value
   */
  virtual bool setKD(float kd);
};

#endif /* INCLUDE_GENERALPID_H_ */
