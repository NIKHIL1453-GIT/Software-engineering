/*Write a program of Addition, Subtraction, Division, Multiplication using 
constructor. */
#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;
public:
    Calculator(double a, double b) {
        num1 = a;
        num2 = b;
    }

    void add() {
        cout << "The addition of " << num1 << " and " << num2 << " is: " << (num1 + num2) << endl;
    }

    void subtract() {
        cout << "The subtraction of " << num1 << " and " << num2 << " is: " << (num1 - num2) << endl;
    }

    void multiply() {
        cout << "The multiplication of " << num1 << " and " << num2 << " is: " << (num1 * num2) << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "The division of " << num1 << " by " << num2 << " is: " << (num1 / num2) << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};

int main() {
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Calculator calc(num1, num2);

    cout << "\nResults:\n";
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();

    cout << "\nThank you for using the calculator. Goodbye!\n";
    return 0;
}

