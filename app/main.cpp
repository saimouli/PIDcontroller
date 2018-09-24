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

using std::cin;
using std::cout;
using std::endl;

int main() {
  // passing kP,kD,kI,dT values
  PID pid(2, 1, 0.1, 0.5);
  float fVal, iVal;
  // input Target setpoint velocity
  cout << "enter the Target setpoint velocity" << endl;
  cin >> fVal;
  // input actual velocity
  cout << "enter the actual velocity" << endl;
  cin >> iVal;
  float inc = pid.computePID(fVal, iVal);
  printf("% 7.3f\n" ,inc);
  //cout << inc << endl;
  return 0;
}
