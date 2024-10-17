#include "product.h"
#include <gtest/gtest.h>

// https://google.github.io/googletest/reference/assertions.html

namespace
{
    
    TEST(PersonTestSuite, func_Triangle_less_180)
    {
        Product p;
        EXPECT_EQ(p.computeTriangle(100, 20, 30), 0);
    }

    TEST(PersonTestSuite, func_Triangle_greater_180)
    {
        Product p;
        EXPECT_EQ(p.computeTriangle(100, 120, 90), 0);
    }

    TEST(PersonTestSuite, func_Triangle_equal_180)
    {
        Product p;
        EXPECT_EQ(p.computeTriangle(100, 20, 60), 1);
    }


}