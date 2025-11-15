#include <stdio.h>
#include <stdlib.h>

typedef struct Employee
{
	char name[50];
	long salary;
} Employee;

void swap(Employee *emp1, Employee *emp2)
{
	Employee temp = *emp1;
	*emp1 = *emp2;
	*emp2 = temp;
}

void typeEmployee(Employee *emp)
{
	printf("Enter Employee Name: ");
	scanf("%49s", emp->name); // Limit input to avoid buffer overflow
	printf("Enter Employee Salary: ");
	scanf("%ld", &emp->salary);
}

void printEmployee(Employee emp)
{
	printf("%s - %ld\n", emp.name, emp.salary);
}

void BubbleSort(Employee emp[], int n)
{
	for(int i = n - 1; i > 0; i--)
	{
		for(int j = 0; j < i; j++)
		{
			if(emp[j].salary < emp[j + 1].salary) {
				swap(&emp[j], &emp[j + 1]);
			}
		}
	}
}

int main()
{
	system("cls"); // Use "clear" instead of "cls" if on Unix/Linux

	Employee emp[3];
	for (int i = 0; i < 3; i++)
	{
		printf("Entering details for Employee %d:\n", i + 1);
		typeEmployee(&emp[i]);
	}
	BubbleSort(emp, 3);
	for(int i = 0; i < 3; i++)
	{
		printf("Details of Employee %d after sorting:\n", i + 1);
		printEmployee(emp[i]);
	}
	
	return 0;
}