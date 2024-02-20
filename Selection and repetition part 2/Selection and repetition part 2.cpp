#include <iostream>
#include <cmath>
using namespace std;


int main() {

    double num1, num2;
    char op;

    cout << "Enter the Equation: ";
    cin >> num1 >> op >> num2;

    if (op == '+')
        cout << num1 << " + " << num2 << " = " << num1 + num2;
    else if (op == '-')
        cout << num1 << " - " << num2 << " = " << num1 - num2;
    else if (op == '*')
        cout << num1 << " * " << num2 << " = " << num1 * num2;
    else if (op == '/') {
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        if (num2 == 0)
            cout << "   " << "Error: Cannot divide by 0";
        else if (num1 == 0)
            cout << "0";
    }
    else {
        cout << "Error Invalid Operator";
    }




}