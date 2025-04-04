#include <iostream>
#include "calculator.h"

int main() {
    std::cout << "Add: " << add(3, 5) << "\n";
    std::cout << "Subtract: " << subtract(10, 8) << "\n";
    std::cout << "Multiply: " << multiply(3, 5) << "\n";
    std::cout << "Divide: " << divide(10, 2) << "\n";
    std::cout << "Factorial: " << factorial(5) << "\n";
    std::cout << "GCD: " << gcd(12, 18) << "\n";
    std::cout << "LCM: " << lcm(4, 6) << "\n";
    std::cout << "Random (1–10): " << randomInRange(1, 10) << "\n";
    std::cout << "Square: " << square(7) << "\n";
    return 0;
}

