#include "calculator.h"
#include <cmath>

// 基础运算
double Calculator::add(double a, double b) { return a + b; }
double Calculator::sub(double a, double b) { return a - b; }
double Calculator::mul(double a, double b) { return a * b; }
double Calculator::div(double a, double b)
{
    if (b == 0)
        throw std::invalid_argument("除数不能为0");
    return a / b;
}

// 拓展运算
double Calculator::squa(double a) { return a * a; }
double Calculator::power(double a, double b) { return std::pow(a, b); }
double Calculator::sqrt(double a)
{
    if (a < 0)
        throw std::invalid_argument("实数范围内负数不能开平方");
    return std::sqrt(a);
}
double Calculator::mod(double a, double b)
{
    if (b == 0)
        throw std::invalid_argument("取模的除数不能为0");
    return std::fmod(a, b);
}