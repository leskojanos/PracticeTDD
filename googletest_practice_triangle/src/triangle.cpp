#include "Triangle.h"


int Triangle::computeTriangle(int a, int b, int c) {

    if ((a + b + c) == 180) {

        return 1;

    }
    else {

        return 0;

    }

}