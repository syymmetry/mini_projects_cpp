#ifndef MATH_FUNCTIONS_HPP
#define MATH_FUNCTIONS_HPP

class MathFunctions {
    public:
        // sin, cos, tan
        static double sin(double x, bool radians = true);
        static double cos(double x, bool radians = true);
        static double tan(double x, bool radians = true);

        //log
        static double log(double x);
        static double log10(double x);
        
        // pow
        static double pow(double base, double exp);

        // const
        static constexpr double PI = 3.141592653589793;
        static constexpr double E = 2.718281828459045;

    private:
        static double taylorSeriesSin(double x);
        static double newtonMethodLog(double x);
        static double exp(double x);
};


#endif