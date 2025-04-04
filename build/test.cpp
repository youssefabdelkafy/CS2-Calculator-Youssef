#include <iostream>
#include "calculator.h"
#include "expression_parser.h"

int main() {
    // Basic operations
    std::cout << "Add(5, 3): " << add(5, 3) << std::endl;
    std::cout << "Subtract(10, 4): " << subtract(10, 4) << std::endl;
    std::cout << "Multiply(6, 7): " << multiply(6, 7) << std::endl;
    std::cout << "Divide(20, 4): " << divide(20, 4) << std::endl;

    // Factorial
    std::cout << "Factorial(5): " << factorial(5) << std::endl;

    // GCD and LCM
    std::cout << "GCD(28, 36): " << gcd(28, 36) << std::endl;
    std::cout << "LCM(28, 36): " << lcm(28, 36) << std::endl;

    // Random number
    std::cout << "Random number between 10 and 20: " << randomInRange(10, 20) << std::endl;

    // Square function (updated line for feature branch)
    std::cout << "[Updated] Square(7): " << square(7) << std::endl;

    // Bonus: Expression Parsing
    std::string expr1 = "3 + 4 * (2 - 1) / 5";
    std::string expr2 = "10 + 2 * 6";
    std::string expr3 = "100 * (2 + 12) / 14";

    std::cout << "Expression: " << expr1 << " = " << evaluateExpression(expr1) << std::endl;
    std::cout << "Expression: " << expr2 << " = " << evaluateExpression(expr2) << std::endl;
    std::cout << "Expression: " << expr3 << " = " << evaluateExpression(expr3) << std::endl;

    return 0;
}


