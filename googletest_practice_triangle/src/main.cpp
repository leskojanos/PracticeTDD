#include <iostream>
#include "triangle.h"


int main() {

    Triangle triangle;

    int c1 = triangle.computeTriangle(100, 20, 60);
    std::cout << "Haromszog vizsgalat eredmenye: " << c1 << "\n";

    return 0;

}