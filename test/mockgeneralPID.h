#ifndef INCLUDE_MOCKGENERALPID_H_
#define INCLUDE_MOCKGENERALPID_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "generalPID.h"

class mockgeneralPID : public generalPID {
 public:
  MOCK_METHOD2(computePID, float(float,float));

  MOCK_METHOD1(setKP, bool(float kp));

  MOCK_METHOD1(setKI, bool(float ki));

  MOCK_METHOD1(setKD, bool(float kd));
};

#endif /* INCLUDE_MOCKGENERALPID_H_ */

