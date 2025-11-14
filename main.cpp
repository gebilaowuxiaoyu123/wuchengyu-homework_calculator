#include <iostream>
//#include <windows.h>
//#include <locale>
#include "calculator.h"

int main()
{   
    //SetConsoleOutputCP(CP_UTF8);
    //SetConsoleCP(CP_UTF8);
    //std::cout.imbue(std::locale("Chinese (Simplified)_China.utf8"));
    Calculator calc;
    char op;
    double num1, num2;
    std::cout << "===C++简易计算机===" << std::endl;
    std::cout << "请先输入操作符，再输入两个数字（若进行平方或开平方根运算，第二个数字请填默认值0）" << std::endl;
    std::cout << "支持操作：" << std::endl;
    std::cout << "基础操作：+:加法 | -:减法 | *:乘法 | /:除法" << std::endl;
    std::cout << "拓展操作：s:平方(仅第一个数字有效) \n r:开平方根(仅第一个数字有效) \n %:取模 \n ^:幂运算(第一个数的第二个数次方)" << std::endl;
    std::cout << "终止操作：请输入操作符q，数字部分仍保留默认值" << std::endl;

    while (true){
        if (!(std::cin >> op >> num1 >> num2)){
            std::cout << "输入格式错误，请重新输入~" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000,'\n');
            continue;
        }
        if (op == 'q'){
            break;
        }
        try {
            double result;
            switch (op){
                case '+':
                    result = calc.add(num1,num2);
                    break;
                case '-':
                    result = calc.sub(num1,num2);
                    break;
                case '*':
                    result = calc.mul(num1,num2);
                    break;
                case '/':
                    result = calc.div(num1,num2);
                    break;
                case 's':
                    result = calc.squa(num1);
                    break;
                case 'r':
                    result = calc.sqrt(num1);
                    break;
                case '%':
                    result = calc.mod(num1,num2);
                    break;
                case '^':
                    result = calc.power(num1,num2);
                    break;
                default:
                    std::cout << "错误，无效的操作符！" << std::endl;
                    continue;
            }
            std::cout << "\n结果：" << num1 << " " << op << " " << num2 << " = " << result << std::endl; 
        }catch (const std::invalid_argument& e){
            std::cout << "错误：" << e.what() << std::endl; 
        }
    }
    return 0;
};