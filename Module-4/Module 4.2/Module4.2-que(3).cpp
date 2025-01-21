/*Write a program to find the multiplication values and the cubic values using 
inline function */

#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;
    cout << "\nThe multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << "\n\n";

    int num;
    cout << "Enter a number to find its cube: ";
    cin >> num;
    cout << "\nThe cube of " << num << " is: " << cube(num) << "\n\n";

    cout << "Thank you for using the calculator. Goodbye!\n";
    return 0;
}

