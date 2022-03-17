// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    int calc;
    int sqrtNum;
    double sqrtResult;

    cout << "This is a simple console-based calculator written in C++." << endl;
    cout << "1: Simple calculations (Format: a+b | a-b | a*b | a/b)" << endl;
    cout << "2: Square root of n" << endl;
    cout << endl << "Your choice: "; cin >> calc;

    if (calc == 1)
    {
        calculator c;
        int count = 1;
        while (count <= 1)
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
            cout << endl << "Result is: " << result << endl << endl << endl;
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
    else
    {
        int sqrtCount = 1;
        while (sqrtCount <= 1)
        {
            cout << "Please enter a number to get its square root: "; cin >> sqrtNum;
            sqrtResult = sqrt(sqrtNum);

            cout << endl << "The square root of " << sqrtNum << " is " << sqrtResult << endl << endl;
            cout << "Do you wish to perform another calculation? (YES: 1 | NO: 2)" << endl;
            cout << endl << "Your choice: "; cin >> sqrtCount;
            if (sqrtCount == 1)
            {
            }
            else
            {
                return 0;
            }
        }

    }
}
