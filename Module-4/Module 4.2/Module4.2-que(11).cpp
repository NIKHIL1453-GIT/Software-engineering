/*Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading   
1 Rectangle: Area * breadth   
2 Triangle: ½ *Area* breadth  
3 Circle: Pi * Area *Area */

#include<iostream>
using namespace std;

int calculate(int length, int breadth) {
    int rectangle = length * breadth;
    return rectangle;    
}

	float calculate(float base, float height) {
    float triangle = base * height * 0.5;
    return triangle;
}

	float calculate(float radius) {
    float circle = 3.14 * radius * radius;
    return circle;
}

int main() {
    int length, breadth;
    float base, height, radius;
    
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << calculate(length, breadth) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << calculate(base, height) << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << calculate(radius) << endl;

    return 0;
}

