//Q150 Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

enum Department { HR = 1, SALES, TECH, ACCOUNTS };

struct Employee {
    int id;
    char name[20];
    enum Department dept;
    float salary;
};

int main() {
    struct Employee emp;         
    struct Employee *ptr;        

    ptr = &emp;                 

    
    ptr->id = 101;
    strcpy(ptr->name, "John");
    ptr->dept = TECH;
    ptr->salary = 55000.50;

    
    printf("Employee Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Department: %d\n", ptr->dept);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}