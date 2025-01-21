/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:

    void initPerson(string n, int a) {
        name = n;
        age = a;
    }
    
    void readPerson() {
        cout << "Enter your name:  ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
    }
    
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    void initStudent(float p) {
        percentage = p;
    }
    
    void readStudent() {
        readPerson();  // Reusing Person class's read function
        cout << "Enter your percentage: ";
        cin >> percentage;
    }
    
    void displayStudent() {
        displayPerson();  // Reusing Person class's display function
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
protected:
    float salary;

public:
    void initTeacher(float s) {
        salary = s;
    }
    
    void readTeacher() {
        readPerson();  // Reusing Person class's read function
        cout << "Enter your salary: ";
        cin >> salary;
    }
    
    void displayTeacher() {
        displayPerson();  // Reusing Person class's display function
        cout << "Salary: " << salary << endl;
    }
};

// Derived class StudentTeacher from Student and Teacher (Multiple Inheritance)
class StudentTeacher : public Student, public Teacher {
public:

    void readStudentTeacher() {
        cout << "\n--- Please provide the following details ---\n";
        readStudent();
        readTeacher();
    }
    
    void displayStudentTeacher() {
        cout << "\n--- Student and Teacher Information ---\n";
        displayStudent();
        displayTeacher();
    }
};

int main() {
    cout << "Welcome to the Student and Teacher Info Program!\n\n";
    
    StudentTeacher st;
    
    st.readStudentTeacher();
    
    st.displayStudentTeacher();
    
    return 0;
}

