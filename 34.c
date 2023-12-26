#include <stdio.h>
struct Employee {
    char name[50];
    int employeeID;
    float salary;
};

int main() {
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);
    struct Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", employees[i].name);

        printf("Enter employee ID: ");
        scanf("%d", &employees[i].employeeID);

        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
    }
    printf("\nDetails of all employees:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Employee ID: %d\n", employees[i].employeeID);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }
    return 0;
}
