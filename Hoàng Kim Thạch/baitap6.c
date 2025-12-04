#include <stdio.h>
#include<stdlib.h>// dynamic memory allocation for interger array
int main()
{
    int *p = NULL;
    int n;
    printf("enter the no. of elements : ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory \n");
    }
    else
    {
        printf("Enter the value : \n");
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &p[i] );
    }
printf("The elements are : \n");
for(int i = 0; i <n; i++){
    printf("%d", p[i]);
}
printf("\n");
free(p);

    return 0;
}