#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100], temp;
    int n, i, j;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d name: ", i + 1);
        scanf("%s", emp[i].name);
        printf("Employee %d salary: ", i + 1);
        scanf("%f", &emp[i].salary);
    }

    // Bubble sort (descending order)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (emp[j].salary < emp[j + 1].salary) {
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }

    printf("\nEmployees sorted by salary (descending):\n");
    for (i = 0; i < n; i++) {
        printf("%s - %.2f\n", emp[i].name, emp[i].salary);
    }

    return 0;
}
