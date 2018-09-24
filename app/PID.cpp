/**
 *  @file      PID.cpp
 *  @brief     PID Class
 *  @details   Definition and implementation of the PID
 *  @author    Saimouli Katragadda
 *  @copyright GNU Public License.
 */

#include <iostream>
#include "PID.h"

/**
 * @brief Default Constructor
 */
PID::PID()
    : kP(0),
      kD(0),
      kI(0),
      dT(0),
      prevErr(0) 
      iterr(0){
}

/**
 * @brief Constructor
 * @breif initializes dT as 0.5 and rest to zeros
 * @param kP: float
 * @param kD: float
 * @param kI: float
 * @param dT: float
 * @param prevErr: float
 */
PID::PID(float kP, float kD, float kI, float dT)
    : kP(kP),
      kD(kD),
      kI(kI),
      dT(dT),
      prevErr(0)
      iterr(0) {
}

/**
 * @brief Default destrcutor
 */

PID::~PID() {
}

/**
 * @brief initializes kD value
 * @param kD: float
 */
void PID::setKD(float kD) {
  this->kD = kD;
}

/**
 * @brief initializes kI value
 * @param kI: float
 */

void PID::setKI(float kI) {
  this->kI = kI;
}

/**
 * @brief initializes kP value
 * @param kP: float
 */

void PID::setKP(float kP) {
  this->kP = kP;
}

/**
 * @brief method to read the gain
 * @param kd: float
 * @return gain kD
 */
float PID::getKD() {
  return this->kD;
}

/**
 * @brief method to read the gain
 * @param kI: float
 * @return gain kI
 */
float PID::getKI() {
  return this->kI;
}

/**
 * @brief method to read the gain
 * @param kP: float
 * @return gain kP
 */

float PID::getKP() {
  return this->kP;
}

/**
 * @brief computes the control input
 * @param setpoint velocity: float
 * @param current velocity: float
 * @return control input + current velocity
 */

float PID::computePID(float spVel, float currVel) {
  return 0;
}






