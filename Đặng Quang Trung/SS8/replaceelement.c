#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = NULL;
    int n;
    printf("enter numbers of intergers: \n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allowcate\n");
        return 1;
    }
    printf("enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("RESULT:\n");
    for (int i = 0; i < n; i++)
    {
        if (p[i] % 2 == 0)
        {
            printf("0\t");
        }
        else
            printf("%d \t", p[i]);
    }
free(p);
    return 0;
}
