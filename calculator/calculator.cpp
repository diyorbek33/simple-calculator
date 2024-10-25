#include "calculator.h"

int calculator(int a, int b, char op)
{
    switch(op)
    {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return (b == 0) ? 0 : a / b;
            break;
        default:
            return 0;
    }
}
