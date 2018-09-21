/**
 *  @file      main.cpp
 *  @brief     Runs unit tests
 *  @author    Saimouli Katragadda
 *  @copyright GNU Public License.
 */
#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
