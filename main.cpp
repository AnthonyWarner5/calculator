#include "function.hpp"
#include <termios.h>
#include <unistd.h>
#include <iostream>

int main() {
    double num1;
    double num2;
    double ans;
    char op;

    do {
        num1 = input() - '0';  // convert char to number
        std::cout << num1 << ' ';
        op = input();
        std::cout << op << ' ';
        num2 = input() - '0';  // convert char to number
        std::cout << num2 << ' ';

        switch (op) {
            case '+': ans = add(num1, num2); break;
            case '-': ans = subt(num1, num2); break;
            case '/': ans = divi(num1, num2); break;
            case 'x': ans = mult(num1, num2); break;
            case '^': ans = expo(num1, num2); break;
        }

        std::cout << "= " << ans << '\n';
    } while (op != 'q');

    return 0;
}