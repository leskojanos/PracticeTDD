#include "product.h"
#include <gtest/gtest.h>

// https://google.github.io/googletest/reference/assertions.html

namespace
{
    
    TEST(PersonTestSuite, functionTriangle)
    {
        Product p;
        EXPECT_EQ(p.computeTriangle(100, 120, 30), 250);
    }

    TEST(PersonTestSuite, fun_Triangle_greater_180)
    {
        Product p;
        EXPECT_NE(p.computeTriangle(100, 120, 30), 180);
    }

}