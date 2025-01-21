/*Write a program of structure employee that provides the following 
information -print and display empno, empname, address and age*/

#include <stdio.h>
#include <string.h>

struct employee {
    int empno;
    char empname[20];
    char address[50];
    int age;
};

int main() {
    struct employee emp;
    emp.empno = 1;
    strcpy(emp.empname, "Ms.bhatia ");
    strcpy(emp.address, "171/A d'cabin street.");
    emp.age = 22;

    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);

}

