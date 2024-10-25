#include <iostream>
#include <string>
#include "calculator.h"

using namespace std;

int main()
{
    int a, b = 0;
    char op = ' ';

    while (true)
    {
        cout << "Enter number(a) " << endl;
        cin >> a;
        cout << "Enter number(b) " << endl;
        cin >> b;
        cout << "Enter operation(+, -, *, /) " << endl;
        cin >> op;
        cout << calculator(a,b,op) << endl;
        if(op == 'q') 
            break;
    }



    return 0;
}
