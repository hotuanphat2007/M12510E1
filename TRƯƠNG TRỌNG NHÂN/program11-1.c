#include <stdio.h>
struct Student 
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct Student s1,s2;
    printf("Enter detail of Student 1:\n");
    printf("Name: ");
    scanf("%s",s1.name);

    printf("Roll: ");
    scanf("%d",&s1.roll);

    printf("Marks: ");
    scanf("%f",&s1.marks);

    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);

    printf("Roll: ");
    scanf("%d", &s2.roll);

    printf("Marks: ");
    scanf("%f", &s2.marks);

    if (s1.marks > s2.marks)
    
        printf("\n%s has higher marks: %.2f\n", s1.name, s1.marks);
        else if (s2.marks > s1.marks)

        printf("\n%s has higher marks: %.2f\n", s2.name, s2.marks);
        else
        printf("\nBoth students have equal marks: %.2f\n", s1.marks);
    
    return 0;
    
}
