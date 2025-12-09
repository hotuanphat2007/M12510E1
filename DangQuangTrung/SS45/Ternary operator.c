#include <stdio.h>
int main()
{
    int a,b,c, Min;
    printf("enter number 1: ");
    scanf("%d", &a);
    printf("enter number 2: ");
    scanf("%d",&b);
    printf("enter number 3: ");
    scanf("%d",&c);
    Min = (a<b && a<c) ? a : (b<a && b<c) ? b :c;
    printf("Min is: %d\n",Min);
    return 0;
}