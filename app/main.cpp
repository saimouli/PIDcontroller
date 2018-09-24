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

int main() {
    //PID pid(2, 1, 0.1, 0.5);  // this is sai's test value
  //PID pid(0.1, 0.01, 0.5, 0.1);

  PID pid(2, 1, 0.1, 0.5);
  float fVal, iVal;
  cout << "enter the (set point)final velocity" << endl;
  cin >> fVal;
  cout << "enter the initial velocity" << endl;
  cin >> iVal;
  for (int i = 0; i < 1; i++) {
    float inc = pid.computePID(fVal, iVal);
    cout << inc << endl;
    //printf("val:% 7.3f inc:% 7.3f\n", val, inc);
    // iVal += inc;
  }
    return 0;
}
