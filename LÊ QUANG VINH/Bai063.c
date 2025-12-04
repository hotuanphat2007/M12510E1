#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[20];
    int roll;
    float marks;
};
void compareMarks(struct Student student1, struct Student student2)
{
    if(student1.marks < student2.marks)
    {
        printf("%s has higher marks: %.2f", student2.name, student2.marks);
    }
    if(student1.marks > student2.marks)
    {
        printf("%s has higher marks: %.2f", student1.name, student1.marks);
    }
    if(student1.marks == student2.marks)
    {
        printf("%s and %s has the same marks", student1.name, student2.name);
    }
}
int main()
{
    struct Student student1, student2;
    printf("Enter student name: ");
    scanf("%s", student1.name);
    printf("Enter roll: ");
    scanf("%d", &student1.roll);
    printf("Enter the marks: ");
    scanf("%f", &student1.marks);
    printf("Enter student name: ");
    scanf("%s", student2.name);
    printf("Enter roll: ");
    scanf("%d", &student2.roll);
    printf("Enter the marks: ");
    scanf("%f", &student2.marks);

    compareMarks(student1, student2);
    return 0;
}