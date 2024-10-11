#include "fibonacci.h"

#include <gtest/gtest.h>

using namespace std;

TEST(TestFibonacci, TestFunctionResults) {
  ASSERT_TRUE(fibonacci(1) == 1);
  ASSERT_TRUE(fibonacci(10) == 55);
  ASSERT_TRUE(fibonacci(16) == 987);
  ASSERT_TRUE(fibonacci(19) == 4181);
}

int main(int argc, char **argv){
  
  testing::InitGoogleTest(&argc, argv);
  
  return RUN_ALL_TESTS();
}