#include <stdio.h>
int main()
{
    int arr[5];                             //Reverse array
    printf("The elements are: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("|%d|",arr[i]);
    }
    printf("\n");
    for (int i = 4; i >=0; i--)
    {
        printf("|%d|",arr[i]);
    }
/******************************************************************
    int arr[3][3];
    printf("The elements are: ");
    for (int i = 0; i < 3; i++)
    {
        
        scanf("%d",&arr[i]);
    }
*/
    return 0;
}