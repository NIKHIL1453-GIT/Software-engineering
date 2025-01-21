/*Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading */

#include <iostream>
using namespace std;

class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return (double)a / b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    MathOperations math;

    int num1, num2;
    double num3, num4;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "\nAddition (int): " << math.add(num1, num2) << endl;
    cout << "Subtraction (int): " << math.subtract(num1, num2) << endl;
    cout << "Multiplication (int): " << math.multiply(num1, num2) << endl;
    cout << "Division (int): " << math.divide(num1, num2) << endl;

    cout << "\nEnter two floating-point numbers: ";
    cin >> num3 >> num4;

    cout << "\nAddition (double): " << math.add(num3, num4) << endl;
    cout << "Subtraction (double): " << math.subtract(num3, num4) << endl;
    cout << "Multiplication (double): " << math.multiply(num3, num4) << endl;
    cout << "Division (double): " << math.divide(num3, num4) << endl;

    return 0;
}

