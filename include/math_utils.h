#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#include <vector>

namespace MathUtils {
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    double divide(double a, double b);
    int sum(const std::vector<int>& vec);
}

#endif // MATH_UTILS_H