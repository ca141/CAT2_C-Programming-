// c program to define a structure named employee 
#include <stdio.h>

// Define the structure
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Initialize the structure with the given data
    struct employee emp = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "John.doe@company.com"
    };

    // Print the values of the fields
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}