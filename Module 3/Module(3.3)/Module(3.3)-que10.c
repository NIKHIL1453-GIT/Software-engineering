/*Write a program of structure for five employee that provides the following 
information -print and display empno, empname, address and age */

#include <stdio.h>
#include <string.h>

struct employee {
    int empno;
    char empname[20];
    char address[50];
    int age;
};

int main() {
    struct employee emp[5];
    int i;

    for(i=0; i<5; ++i) {
        emp[i].empno = i+1;
        printf("\nEnter details of employee %d:\n", emp[i].empno);
        printf("Enter name: ");
        scanf("%s", emp[i].empname);
        printf("Enter address: ");
        scanf("%s", emp[i].address);
        printf("Enter age: ");
        scanf("%d", &emp[i].age);
    }

    printf("\nDetails of all employees:\n");
    for(i=0; i<5; ++i) {
        printf("Employee number: %d\n", i+1);
        printf("Name: %s\n", emp[i].empname);
        printf("Address: %s\n", emp[i].address);
        printf("Age: %d\n", emp[i].age);
    }

    return 0;
}
