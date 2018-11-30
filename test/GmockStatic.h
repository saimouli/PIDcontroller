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
 *  @file      GmockStatic.h
 *  @author    Saimouli Katragadda
 *  @copyright MIT License.
 *  @brief   Definition and implementation of
 *  the GmockStatic class
 */

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "generalPID.h"

/**
 * @brief GMockStatic Class
 * class to call functions of generalPID mock class
 */
class GmockStatic : public ::testing::Test {
 public:
  /**
   * @brief set_Kp function
   * @param instance of std::unique_ptr<generalPID>
   * @return none
   * initializes the object and
   * calls the setKP in the generalPID class
   */
  void set_KP(std::unique_ptr<generalPID> instance) {
    instance->setKP(3);
  }

  /**
   * @brief set_KD function
   * @param instance of std::unique_ptr<generalPID>
   * @return none
   * initializes the object and
   * calls the setKD in the generalPID class
   */
  void set_KD(std::unique_ptr<generalPID> instance) {
    instance->setKD(4);
  }

  /**
   * @brief set_KI function
   * @param instance of std::unique_ptr<generalPID>
   * @return none
   * initializes the object and
   * calls the setKI in the generalPID class
   */
  void set_KI(std::unique_ptr<generalPID> instance) {
    instance->setKI(0.2);
  }

  /**
   * @brief compute_PID function
   * @param instance of std::unique_ptr<generalPID>
   * @return none
   * initializes the object and
   * calls the computePID in the generalPID class
   */
  void compute_PID(std::unique_ptr<generalPID> instance) {
    instance->computePID(1, 2);
  }
};
