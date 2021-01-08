#include "main.h"
#include <iostream>

int Factorial( int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

int main() {
    std::cout << "Exited successfully" << std::endl;
    return 0;
}