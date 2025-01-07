// Write a program of to swap the two values using template.

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Before Swap: int1 = " << int1 << ", int2 = " << int2 << endl;
    swapValues(int1, int2);
    cout << "After Swap: int1 = " << int1 << ", int2 = " << int2 << endl;

    float float1, float2;
    cout << "\nEnter two floating-point numbers: ";
    cin >> float1 >> float2;
    cout << "Before Swap: float1 = " << float1 << ", float2 = " << float2 << endl;
    swapValues(float1, float2);
    cout << "After Swap: float1 = " << float1 << ", float2 = " << float2 << endl;

    char char1, char2;
    cout << "\nEnter two characters: ";
    cin >> char1 >> char2;
    cout << "Before Swap: char1 = " << char1 << ", char2 = " << char2 << endl;
    swapValues(char1, char2);
    cout << "After Swap: char1 = " << char1 << ", char2 = " << char2 << endl;

    return 0;
}

