#include <iostream>
#include "product.h"


int main () {

    Product p;

    auto c1 = p.computeTriangle(100, 20, 60);
    std::cout << "Haromszog vizsgalat eredmenye: " << c1 << "\n";

    return 0;

}