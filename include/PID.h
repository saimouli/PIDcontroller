/**
 *  @file      PID.h
 *  @brief     PID controller header file
 *  @details   Definition and implementation of the PID class
 *  @author    Saimouli Katragadda
 *  @author    Part 2 (Driver:Kapil Rawal, Navigator:Amrish Baskaran)
 *  @copyright GNU Public License.
 */

#ifndef INCLUDE_PID_H_
#define INCLUDE_PID_H_

#include <iostream>
#include "generalPID.h"

/**
 * @brief Implementation of PID controller
 */
class PID : public generalPID {
 public:
  PID();
  
  /**
   * @brief default constructor assign zeros
   * @param kp
   * @param kd
   * @param ki
   * @param dT
   */
  PID(float kP, float kD, float kI, float dT);

  /**
   * @brief default destructor
   */
  ~PID();

  /**
   * @brief access to private kp gain for outside class
   * @return kp gain
   */
  float getKP();

  /**
   * @brief access to private kd gain for outside class
   * @return kd gain
   */
  float getKD();

  /**
   * @brief access to private ki gain for outside class
   * @return ki gain
   */
  float getKI();

  /**
   * @brief sets the kD gain value according to the passed value
   * @param setpoint velocity
   * @param current velocity
   */
  float computePID(float, float);
};


#endif /* INCLUDE_PID_H_ */
