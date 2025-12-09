#include <stdio.h>
#include <math.h>
/*int main()
{
    int count=0;
    char num;
    printf("enter positive number: ");
    for (count = 0; num = getchar() != '\n'; count++)
    {
        
    }
    
    printf("%d is the count of the number",count);
    return 0;

}*/
////////////////////////////////////////////////////////////////////////////
int main()
{
    int count=0;
    char num;
    printf("enter positive number: ");
    while (num=getchar()!= '\n')
    {
    count++;
    }
    printf("%d is the count of the number",count);
    return 0;

}