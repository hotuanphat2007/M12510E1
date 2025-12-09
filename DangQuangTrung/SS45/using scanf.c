#include <stdio.h>
int main()
{
    char a[50];
    printf("enter your school: ");
    scanf("%[^\n]",a);
    printf("Your enter: %s\n",a);
    return 0;
}