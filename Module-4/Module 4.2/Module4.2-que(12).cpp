/*Write a program to swap the two numbers using friend function without 
using third variable*/

#include<iostream>
using namespace std;

class Swap {
private:
    int num1, num2; 

public:
    Swap(int a, int b) {
        num1 = a;
        num2 = b;
    }

    friend void swap(Swap& s);

    void display() {
        cout << "num1: " << num1 << ", num2: " << num2 << endl;
    }
};

void swap(Swap& s) {
    s.num1 = s.num1 + s.num2; // sum of num1 and num2
    s.num2 = s.num1 - s.num2; // num2 becomes the original num1
    s.num1 = s.num1 - s.num2; // num1 becomes the original num2
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Swap s(a, b);

    cout << "\nBefore swapping:" << endl;
    s.display();  

    // Calling the friend function to swap the numbers
    swap(s);

    cout << "\nAfter swapping:" << endl;
    s.display();  

    return 0;
}

