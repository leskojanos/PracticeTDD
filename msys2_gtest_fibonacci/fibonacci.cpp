// fibonacci.cpp
#include <iostream>
#include "fibonacci.h"

using namespace std;

int fibonacci(int number){
  if(number <= 2){
    return 1;
  } else {
    return fibonacci(number - 1) + fibonacci(number - 2);
  }
}