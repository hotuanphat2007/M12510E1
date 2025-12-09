#include <stdio.h>
int main()
{
    char oper;
    int a,b,c;
    printf("enter operator: ");scanf("%s",&oper);
    printf("enter number 1: ");scanf("%d",&a);
    printf("enter number 2: ");scanf("%d",&b);
    switch (oper)
    {
    case '-':
        c=a-b;
        printf("Calculation result: %d - %d = %d",a,b,c);
        break;
    case '+':
        c=a+b;
        printf("Calculation result: %d + %d = %d",a,b,c);
        break;
    case '*':
        c=a*b;
        printf("Calculation result: %d * %d = %d",a,b,c);
        break;
    case '/':
        if (b!=0)
        {
            c=a/b;
            printf("Calculation result: %d / %d = %d",a,b,c);
        }
        else
        {
            printf("Error!!!");
        }
        return 0;
        break;
    default:
        break;
    }
return 0;
}