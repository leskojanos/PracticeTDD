#include <iostream>
#include "product.h"


int main (){

    Product p;

    auto c1 = p.computeTriangle(100,120,30);
    std::cout << "c1=" << c1 << "\n";

}