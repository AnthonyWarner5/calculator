#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <termios.h>
#include <unistd.h>
#include <cstdio>
#include <cmath>

char input() {
    struct termios oldt, newt;
    char ch;

    // Get the current terminal settings
    tcgetattr(STDIN_FILENO, &oldt);

    // Set the new terminal settings for raw mode
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO); // Turn off canonical mode and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    ch = getchar(); // reads input from user

    // Restore the old terminal settings
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

    return ch;
}

double add(double a, double b) {
    return (a + b);
}

double subt(double a, double b) {
    return (a - b);
}

double mult(double a, double b) {
    return (a * b);
}

double divi(double a, double b) {
    return (a / b);
}

double expo(double a, double b) {
    return (pow(a, b));
}

#endif