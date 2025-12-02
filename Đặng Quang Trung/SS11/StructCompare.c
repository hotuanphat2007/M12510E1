#include <stdio.h>
#include <string.h>
struct stu
{
    int age;
    char name[20];
    float mark;
};
void compage(struct stu s1,struct stu s2)
{
    if (s1.mark > s2.mark)
    {
        printf("%s is higher than %s",s1.name,s2.name);
    }
    else if (s1.mark < s2.mark)
    {
        printf("%s is higher than %s",s2.name,s1.name);
    }
    else {printf("Same mark !\n");}
    
}
int main()
{
 struct stu s1,s2;
 printf("Student detail 1: ");
 scanf("%s",s1.name);
 printf("Enter age: ");
 scanf("%d",&s1.age);
 printf("Enter mark: ");
 scanf("%f",&s1.mark);

 printf("Student detail 2: ");
 scanf("%s",s2.name);
 printf("Enter age: ");
 scanf("%d",&s2.age);
 printf("Enter mark: ");
 scanf("%f",&s2.mark);
 compage(s1,s2);
 return 0;
}