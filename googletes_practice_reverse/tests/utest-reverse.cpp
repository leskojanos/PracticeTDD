#include "Reverse.h"
#include <gtest/gtest.h>

namespace {

Reverse p;

    TEST(PersonTestSuite, TestReverseString)
    {

        ASSERT_EQ("txet", p.reverseString("text"));
        EXPECT_EQ("txet", p.reverseString("text"));
    };

};