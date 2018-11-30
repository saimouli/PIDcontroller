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
 *  @file      testPID.h
 *  @author    Saimouli Katragadda
 *  @copyright MIT License.
 *  @brief   Definition and implementation of
 *  gmock and unit tests
 */

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "mockgeneralPID.h"
#include "GmockStatic.h"
#include "generalPID.h"
#include "PID.h"
#include "generalPID.h"

using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

/**
 *@brief Cases to test setting of kp gain by the mocked class
 *and the drived class
 *@param none
 *@return none
 */
TEST(GmockStatic, settingKPTest) {
  PID pid;
  std::unique_ptr<mockgeneralPID> gpid(new mockgeneralPID);
  std::unique_ptr<GmockStatic> gmock;

  // expect a call of the mocked class and should return true
  EXPECT_CALL(*gpid, setKP(3)).Times(1).WillOnce(Return(true));
  gmock->set_KP(std::move(gpid));

  // check if the expected return is equal to the actual output
  EXPECT_EQ(1, pid.setKP(3));
}

/**
 *@brief Cases to test setting of kd gain by the mocked class
 *and the drived class
 *@param none
 *@return none
 */
TEST(GmockStatic, settingKDTest) {
  PID pid;
  std::unique_ptr<mockgeneralPID> gpid(new mockgeneralPID);
  std::unique_ptr<GmockStatic> gmock;

  EXPECT_CALL(*gpid, setKD(4)).Times(1).WillOnce(Return(true));
  gmock->set_KD(std::move(gpid));

  EXPECT_EQ(1, pid.setKD(4));
}

/**
 *@brief Cases to test setting of ki gain by the mocked class
 *and the drived class
 *@param none
 *@return none
 */
TEST(GmockStatic, settingKITest) {
  PID pid;
  std::unique_ptr<mockgeneralPID> gpid(new mockgeneralPID);
  std::unique_ptr<GmockStatic> gmock;

  EXPECT_CALL(*gpid, setKI(0.2)).Times(1).WillOnce(Return(true));
  gmock->set_KI(std::move(gpid));

  EXPECT_EQ(1, pid.setKI(0.2));
}

/**
 *@brief Cases to test setting of compute PID by the mocked class
 *and the drived class
 *@param none
 *@return none
 */
TEST(GmockStatic, computeMethodTest) {
  PID pid;
  std::unique_ptr<mockgeneralPID> gpid(new mockgeneralPID);
  std::unique_ptr<GmockStatic> gmock;

  EXPECT_CALL(*gpid, computePID(1,2)).Times(1).WillOnce(Return(0.0));
  gmock->compute_PID(std::move(gpid));

  float newVel = pid.computePID(1, 2);
  EXPECT_NEAR(-4.05, newVel, 0.1);
}

/**
 *@brief Unit test to check if the returned gain
 *are the initialized gains
 *@param none
 *@return none
 */
TEST(PIDtest, getGainsTest) {
  mockgeneralPID mdb;

  // KP KD KI
  PID pid(3, 2, 4, 0.5);

  // checking if the gains are properly set by Setkp method
  EXPECT_EQ(3, pid.getKP());
  EXPECT_EQ(2, pid.getKD());
  EXPECT_EQ(4, pid.getKI());
}
