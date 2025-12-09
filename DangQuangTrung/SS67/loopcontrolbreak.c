#include <stdio.h>
#include <math.h>
int main()
{
    int num,i;
    printf("enter number: ");
    scanf("%d",&num);

    for (i=2; i<=sqrt(num);i++)
    {
        if(num %1==0)
        break; 
    }
    if (i >sqrt(num))
    printf("\nprime");
    else
    printf("Not Prime");
    return 0;
}