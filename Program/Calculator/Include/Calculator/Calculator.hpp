#pragma once
#include "MathFunctions.hpp"
#include <stack>
#include <string>

class Calculator {
    public:
        void pushOperand(double value);
        void pushOperation(const std::string& op);
        double calculate();

    private:
        std::stack<double> operands;
        std::stack<std::string> operations;
        MathFunctions math;
};
