/**
 *  @file    main.cpp
 *  @author  Saimouli Katragadda
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
  PID pid(2, 1, 0.1, 0.5);
  float fVal, iVal;
  cout << "enter the (set point)final velocity" << endl;
  cin >> fVal;
  cout << "enter the initial velocity" << endl;
  cin >> iVal;
  float inc = pid.computePID(fVal, iVal);
  cout << inc << endl;
   
  return 0;
}
