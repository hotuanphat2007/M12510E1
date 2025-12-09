#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *p = NULL;
    int n,max=0,min;
    int i, newn;
    printf("Enter the num of element: ");
    scanf("%d",&n);
    p = (int *)malloc(n * sizeof(int));

    if (p==NULL)
    {
        printf("Unable to allocate memory!\n");
        return 1;
    }
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
        printf("Enter new num of element: ");
        scanf("%d",&newn);

        p= (int *)realloc(p, (n+newn)*sizeof(int));
        if (p==NULL)
    {
        printf("Unable to allocate memory!\n");
        return 1;
    }
    printf("Enter new the value: \n",newn);
        for (i = n; i < n+newn; i++)
        {
            scanf("%d",&p[i]);
        }
        
        printf("The element are: \n");
        for (i = 0; i < n+newn; i++)
        {
            printf("|%d|",p[i]);
        }
        printf("\n");
        free(p);
return 0;
}