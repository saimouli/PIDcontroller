/*
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
 *  @file      mockgeneralPID.h
 *  @author    Saimouli Katragadda
 *  @copyright MIT License.
 *  @brief   Definition and implementation of
 *  the mockgeneralPID class
 */

#ifndef INCLUDE_MOCKGENERALPID_H_
#define INCLUDE_MOCKGENERALPID_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "generalPID.h"

/**
 * @brief mockgeneralPID class
 * class to initializes the mock method
 * that are yet to be tested using gmock
 */
class mockgeneralPID : public generalPID {
 public:
  /**
   * @brief computePID mock
   * @param float currVel
   * @param float spvel
   * @return none
   * initializes the computePID mock
   */
  MOCK_METHOD2(computePID, float(float,float));

  /**
   * @brief setKP mock
   * @param float kp
   * @return bool
   * initializes the setKP mock
   */
  MOCK_METHOD1(setKP, bool(float kp));

  /**
   * @brief setKI mock
   * @param float kI
   * @return bool
   * initializes the setKI mock
   */
  MOCK_METHOD1(setKI, bool(float ki));

  /**
   * @brief setKD mock
   * @param float kD
   * @return bool
   * initializes the setKD mock
   */
  MOCK_METHOD1(setKD, bool(float kd));
};

#endif /* INCLUDE_MOCKGENERALPID_H_ */

