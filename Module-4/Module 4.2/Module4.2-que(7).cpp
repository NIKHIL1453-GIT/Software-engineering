/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/

#include <iostream>
using namespace std;

class Student {
protected:
    int rollNumber;

public:
    void inputStudent() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }

    void displayStudent() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test {
protected:
    float marks1, marks2;

public:
    void inputTest() {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
    }

    void displayTest() {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};

// Class Result inherits from Test and Student (Multilevel Inheritance)
class Result : public Test, public Student {
protected:
    float totalMarks;

public:
    void calculateTotal() {
        totalMarks = marks1 + marks2;
    }

    void displayResult() {
        displayStudent();    // Displaying Student details
        displayTest();       // Displaying Test details
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult;

    studentResult.inputStudent();
    studentResult.inputTest();

    studentResult.calculateTotal();

    cout << "\n--- Student Test Result ---\n";
    studentResult.displayResult();

    return 0;
}

