#include <stdio.h>
int main()
{
    int arr[5],sum=0,min,max=0;            //array 1 chieu
    printf("The elements are: ");
    
    for (int i = 0; i < 5; i++)
    {
        
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i <5; i++)
    {
        printf("%d\n",arr[i]);
        sum+=arr[i];
        if (max<arr[i])
        {
            max=arr[i];
            
        }
        if (min>arr[i])
        {
            min=arr[i];
            
        }
        
    }
    printf("Sum of the array is: %d\n",sum);
    printf("Max of array is: %d\n",max);
    printf("Min of array is: %d",min);
    /******************************************************************************/

    /*
    int arr1[2][2] = {10,20,30,40};         // array nhan 2 matran 2 chieu 
    int arr2[2][2] = {10,20,30,40};
    int add[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            add[i][j]= arr1[i][j]+arr2[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
        {
            printf("|%d|",add[i][j]);
        } 
        printf("\n");
    }
    */
   /**************************************************************************/

    /*int arr[3][3]={1,2,3,4,5,6,7,8,9};      //sum of diagonal elements
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            if (i==j)
            {
            sum+=arr[i][j];
            }
            
        }
        
    }
    printf("sum of diagonal elements: %d",sum);*/
    return 0;

}