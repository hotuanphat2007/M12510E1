#include <stdio.h>
#include <math.h>
int main()
{
    int num,sum=1;

    printf("enter positive number: ");
    scanf("%d",&num);
    for (int count=1; count <= num; count++)
    {
        sum = sum * count;
    }
    
    printf("%d is the sumary of the number",sum);
    return 0;

}