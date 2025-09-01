#include <iostream>
#include "math_utils.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    
    int a = 10, b = 5;
    std::cout << "Addition: " << a << " + " << b << " = " << MathUtils::add(a, b) << std::endl;
    std::cout << "Subtraction: " << a << " - " << b << " = " << MathUtils::subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << a << " * " << b << " = " << MathUtils::multiply(a, b) << std::endl;
    
    try {
        std::cout << "Division: " << a << " / " << b << " = " << MathUtils::divide(a, b) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}