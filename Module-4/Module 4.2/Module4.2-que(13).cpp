/*Write a program to find the max number from given two numbers using 
friend function*/

#include <iostream>
using namespace std;

class Compare {
private:
    int num1, num2;

public:

    Compare(int a, int b) {
        num1 = a;
        num2 = b;
    }

    friend int findMax(Compare c);

    void display() {
        cout << "Number 1: " << num1 << ", Number 2: " << num2 << endl;
    }
};

int findMax(Compare c) {
    return (c.num1 > c.num2) ? c.num1 : c.num2;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    Compare c(a, b);

    cout << "\nThe entered numbers are:" << endl;
    c.display();  
    cout << "The maximum number is: " << findMax(c) << endl;

    return 0;
}

