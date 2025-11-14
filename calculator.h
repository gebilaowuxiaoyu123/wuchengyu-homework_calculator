#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <stdexcept>
#include <cmath>
class Calculator{
    public:
        //基础部分
        double add(double a, double b);
        double sub(double a, double b);
        double mul(double a, double b);
        double div(double a, double b);
        //拓展部分
        double sqrt(double a);
        double squa(double a);
        double power(double a,double b);
        double mod(double a,double b);
};

#endif