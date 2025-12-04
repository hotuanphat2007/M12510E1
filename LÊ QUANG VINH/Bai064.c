#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee
{
    char name[20];
    int salary;
};
void sortEmployee(struct Employee emp[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (emp[j].salary > emp[j + 1].salary)
            {
                struct Employee temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}
int main()
{
    struct Employee employee[3];
    strcpy(employee[0].name, "Asha");
    employee[0].salary = 50000;
    printf("Employee details: ");
    printf("\nName: %s", employee[0].name);
    printf("\nSalary: %d", employee[0].salary);
    strcpy(employee[1].name, "Asha");
    employee[1].salary = 65000;
    printf("\nEmployee details: ");
    printf("\nName: %s", employee[1].name);
    printf("\nSalary: %d", employee[1].salary);
    strcpy(employee[2].name, "Dev");
    employee[2].salary = 48000;
    printf("\nEmployee details: ");
    printf("\nName: %s", employee[2].name);
    printf("\nSalary: %d", employee[2].salary);
    sortEmployee(employee, 3);
    printf("\nSorted Salarie: ");
    
    for(int i = 0; i < 3; i++)
    {
        printf("\nName: %s %d\n", employee[i].name, employee[i].salary);
    }
    return 0;
}