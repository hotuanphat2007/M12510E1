#include <stdlib.h>
#include <stdio.h>
int main ()
{
    int n, *arr, i, new_n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n* sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed \n");
        return 1;
    }

    printf("Enter %d elements \n",n);
    for (i = 0; i < n; i++)
    {
        scanf ("%d",&arr[i]);
    
    }

    printf("Thay so chan bằng 0: ");
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
        arr[i]=0;
        }
        printf("%d",arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}