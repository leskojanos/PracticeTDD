#include "Reverse.h"
#include <string>

std::string Reverse::reverseString(std::string input) {

    std::string reversed;
    for (int i = input.length() - 1; i >= 0; --i) {
        reversed += input[i];
    }
    return reversed;
};
