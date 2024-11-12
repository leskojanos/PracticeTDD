#include<iostream>
#include "Reverse.h"
#include <string>

int main() {

    Reverse reverse;

    std::string original = "Dog's ear!";
    std::string reversed = reverse.reverseString(original);
    std::cout << "Original: " << original << std::endl;
    std::cout << "Reversed: " << reversed << std::endl;
    return 0;
}