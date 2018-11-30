/**
 *  @file      testPID.cpp
 *  @brief     Unit test for PID Class
 *  @details   Unit test implementation to test PID class
 *  @author    Saimouli Katragadda
 *  @copyright GNU Public License.
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

TEST(GmockStatic, settingKDTest) {
  PID pid;
  std::unique_ptr<mockgeneralPID> gpid(new mockgeneralPID);
  std::unique_ptr<GmockStatic> gmock;

  EXPECT_CALL(*gpid, setKD(4)).Times(1).WillOnce(Return(true));
  gmock->set_KD(std::move(gpid));

  EXPECT_EQ(1, pid.setKD(4));
}

TEST(GmockStatic, settingKITest) {
  PID pid;
  std::unique_ptr<mockgeneralPID> gpid(new mockgeneralPID);
  std::unique_ptr<GmockStatic> gmock;

  EXPECT_CALL(*gpid, setKI(0.2)).Times(1).WillOnce(Return(true));
  gmock->set_KI(std::move(gpid));

  EXPECT_EQ(1, pid.setKI(0.2));
}

/**
 * @brief Tests pid compute method
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
 * @brief Tests pid gains initializing method
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
