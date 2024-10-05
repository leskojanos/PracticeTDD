# **[Using Google Test for C++ in Window](https://medium.com/swlh/google-test-installation-guide-for-c-in-windows-for-visual-studio-code-2b2e66352456#:~:text=Google%20Test%20is%20a%20unit%20testing)**

## Install msys2 GoogleTest adapter

<big>**1\.**</big>

<u>Open MSYS2 MinGW x64</u>

<big>**2\.**</big>

Then enter:

```bash
$ pacman -S mingw-w64-x86_64-gtest
```
Package list: https://packages.msys2.org/packages/mingw-w64-x86_64-gtest?repo=mingw64

## Using Google Test
<big>**3\.**</big>

Create the following files:
* triangle.h 
```cpp
#ifndef __TRIANGLE_H
#define __TRIANGLE_H

int TypeOfTriangle(int, int, int);

#endif
```

* triangle.cpp
```cpp
#include "triangle.h"
/* Return values
1 for equilateral, 2 for isosceles, 3 for scalane
0 if triangle can't be formed with given sides
-1 if any side value is invalid, say -ve 
*/	
int TypeOfTriangle(int a, int b, int c) {
if (a < 0 || b < 0 || c < 0) 
    return -1;
if (!(a + b > c && b + c > a && a + c > b))  
    return 0;
else if (a == b && b == c)  
    return 1;
else if (a == b || b == c || c == a)  
    retur```
else // a!=b && b!=c && c!=a  
    return 3;
}
```
* triangle_test.cpp

```cpp
#include "triangle.h"
#include <gtest/gtest.h>

namespace {
TEST(TriangleTest, InvalidSides) {
    EXPECT_EQ(-1, TypeOfTriangle(-10, 26, 30));
    EXPECT_EQ(-1, TypeOfTriangle(18, -20, 30));
    EXPECT_EQ(-1, TypeOfTriangle(3, 4, -8));
}
TEST(TriangleTest, NonFormation) {
    EXPECT_EQ(0, TypeOfTriangle(10, 20, 30));
    EXPECT_EQ(0, TypeOfTriangle(3, 4, 8));
}
TEST(TriangleTest, Equivalateral) {
    EXPECT_EQ(1, TypeOfTriangle(10, 10, 10));
    EXPECT_EQ(1, TypeOfTriangle(5, 5, 5));
}
TEST(TriangleTest, Isosceles) {
    EXPECT_EQ(2, TypeOfTriangle(10, 9, 15));
    EXPECT_EQ(2, TypeOfTriangle(15, 10, 10));
    EXPECT_EQ(2, TypeOfTriangle(10, 15, 10));
}
TEST(TriangleTest, Scalan) {
    EXPECT_EQ(3, TypeOfTriangle(3, 4, 5));
    EXPECT_EQ(3, TypeOfTriangle(10, 12, 15));
    EXPECT_EQ(3, TypeOfTriangle(10, 25, 18));
}
}
```
<big>**4\.**</big>

Next is the process of creating the test program, triangle_test. Then we will compile both these files.
```bash
>> g++ triangle.cpp -c
>> g++ triangle_test.cpp -c
>> g++ triangle.o traingle_test.o -lgtest -lgtest_main -lpthread
```
<big>**5\.**</big>

Run the executable file at the end and here you go!

![googletest_result](https://miro.medium.com/v2/resize:fit:720/format:webp/1*-uzDNDNw64RSMeGo5wSXXg.png)



 