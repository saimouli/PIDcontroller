/**
 *  @file      testPID.cpp
 *  @brief     Unit test for PID Class
 *  @details   Unit test implementation to test PID class
 *  @author    Saimouli Katragadda
 *  @copyright GNU Public License.
 */
#include <gtest/gtest.h>
#include <iostream>
#include <memory>
#include "PID.h"

/**
 * @brief Tests pid compute method
 */
TEST(PIDtest, computeMethodPidTest) {
  std::shared_ptr<PID> pid = std::make_shared<PID>(2, 1, 0.1, 0.5);

  float newVel = 0;
  // setpoint velocity is 1m/s and current velocity is 2m/s
  newVel = pid->computePID(1, 2);

  // the compute method should output a value of -2.5m/s
  EXPECT_NEAR(-2.5, newVel, 0.1);
}

/**
 * @brief Tests pid gains initializing method
 */

TEST(PIDtest, SetGainsTest) {
  std::shared_ptr<PID> pid = std::make_shared<PID>();

  float kp, kd, ki;
  pid->setKP(3);  // setting the gains using setKp method
  pid->setKD(2.4);
  pid->setKI(0.001);

  kp = pid->getKP();  // reading the gains through getKP method
  kd = pid->getKD();
  ki = pid->getKI();

  EXPECT_EQ(kp, 3);  // checking if the gains are properly set by Setkp method
  EXPECT_EQ(kd, 2.4);
  // std::cout << "test kd: " << kd << std::endl;
  EXPECT_EQ(ki, 0.001);
}
