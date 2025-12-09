#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = NULL;
    int n,max=0,min;
    printf("enter the num of element/ 品数入れる: ");
    scanf("%d",&n);
    p = (int *)malloc(n * sizeof(int));

    if (p==NULL)
    {
        printf("Unable to allocate memory!\n");
    }
    else
    {
        printf("enter the value: \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&p[i]);
        }
        
        printf("The element are: \n");
        for (int i = 0; i < n; i++)
        {
            printf("|%d|",p[i]);
        }
        printf("\n");
        for (int i = n - 1; i >= 0; i--)
        {
            printf("|%d|", (*(p+i)));
        }
        for (int i = 0; i < n; i++)
        {
            if (max<p[i])
        {
            max=p[i]; 
        }
        if (min>p[i])
        {
            min=p[i];  
        }
        }
        printf("\n");
        printf("Max of array is: %d\n",max);
        printf("Min of array is: %d",min);
        
        free(p);
        
    }
    return 0;
}