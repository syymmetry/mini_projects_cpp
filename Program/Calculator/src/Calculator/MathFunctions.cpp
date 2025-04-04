#include "MathFunctions.hpp"
#include <cmath>
#include <stdexcept>

double MathFunctions::taylorSeriesSin(double x) {
    double term = x, result = term;
    for (int n = 1; n <= 10; ++n) {
        term *= -x * x / ((2*n) * (2*n + 1));
        result += term;
    }
    return result;
}

double MathFunctions::newtonMethodLog(double x) {
    if (x <= 0) throw std::runtime_error("Log: invalid input");
    double y = 0.0;
    for (int i = 0; i < 20; ++i) {
        double ey = exp(y);
        y = y + 2 * (x - ey) / (x + ey);
    }
    return y;
}

double MathFunctions::exp(double x) {
    double term = 1.0, result = term;
    for (int n = 1; n <= 20; ++n) {
        term = x / n;
        result += term;
    }
    return result;
}