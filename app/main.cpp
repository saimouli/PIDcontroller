/**
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
 *  @file    main.cpp
 *  @author  Saimouli Katragadda
 *  @copyright MIT License
 *  @brief This program implements PID controller
 */
#include <iostream>
#include "PID.h"
#include "generalPID.h"
#include "memory"

/**
 * @brief      main function
 * @param      none
 * @param      none
 * @return     int of value zero
 */
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

