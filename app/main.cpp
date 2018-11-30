/**
 *  @file    main.cpp
 *  @author  Saimouli Katragadda
 *  @author    Part 2 (Driver:Kapil Rawal, Navigator:Amrish Baskaran)
 *  @copyright MIT License
 *  Copyright 2018 SAIMOULI KATRAGADD 113509971
 *  @brief PID
 *
 *  @section DESCRIPTION
 *  This program implements PID controller
 */
#include <iostream>
#include "PID.h"
#include "generalPID.h"
#include "memory"


int main() {
  // Instantiate a object
  PID pid;
  // point the virtual class object to the PID class
  std::unique_ptr<generalPID> gpid = std::make_unique<PID>();

  // variables to hold user input
  float fVal, iVal;

  // input Target setpoint velocity
  std::cout << "Enter the Target setpoint velocity" << std::endl;
  std::cin >> fVal;

  // input actual velocity
  std::cout << "Enter the actual velocity" << std::endl;
  std::cin >> iVal;

  // set the PID gains
  gpid->setKD(1);
  gpid->setKI(0.1);
  gpid->setKP(2);

  // compute the control input
  float inc = pid.computePID(fVal, iVal);

  // output the input to the screen
  std::cout << "Input: " << inc << std::endl;

  return 0;
}

