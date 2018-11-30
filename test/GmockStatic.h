
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "generalPID.h"


class GmockStatic : public ::testing::Test {
 public:
  void set_KP(std::unique_ptr<generalPID> instance) {
    instance->setKP(3);
  }

  void set_KD(std::unique_ptr<generalPID> instance) {
    instance->setKD(4);
  }

  void set_KI(std::unique_ptr<generalPID> instance) {
    instance->setKI(0.2);
  }

  void compute_PID(std::unique_ptr<generalPID> instance) {
    instance->computePID(1, 2);
  }
};
