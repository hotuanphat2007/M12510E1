#include <stdio.h>
#include <math.h>
int main()
{
    int num,sum=0, count=0;
    printf("enter 4 positive number, ONe per line: \n");
    while (count<4)
    {
        scanf("%d",&num);
        if (num <0)
        {
            printf("ERROR: negative number or zero!/\reenter the number and continue: \n");
            continue;
        }
        sum += num;
        count++;
    }
    printf("%d is the sumary of the %d number",sum,count);
    return 0;

}