// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "This is a simple console-based calculator written in C++." << endl << endl;
    cout << "Please enter a mathematical operation. (Format: a+b | a-b | a*b | a/b)" << endl;

    calculator c;
    int count = 1;
    while (count <=1)
    {
        cout << endl << "Operation: "; cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << endl << "Division by 0 is not possible." << endl;
            continue;

        }
        else
        {
            result = c.calculate(x, oper, y);
        }
        cout << endl << "Result is: " << result << endl << endl <<endl;
        cout << "Do you wish to perform another operation? (YES: 1 | NO: 2) : "; cin >> count;
            if (count == 1)
            {
                cout << endl;
                continue;
            }
            else
            {
                return 0;
            }
    }

    return 0;
}
