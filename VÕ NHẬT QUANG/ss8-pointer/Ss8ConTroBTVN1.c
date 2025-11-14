#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = NULL;
    int n;
    printf("Nhap so phan tu n:\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("0 cap phat duoc\n");
        return 1;
    }
    printf("enter elements:\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p[i]); // *(p+i)
        }
        for (int i = n - 1; i >= 0; i--)
        {

            printf("%d\t", (*(p+i)));
        }
        free(p);
    }

    
