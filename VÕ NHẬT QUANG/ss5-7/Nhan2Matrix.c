#include <stdio.h>
int main()
{
    int m, n, p;
    printf("cho 2 ma tran co dang m x n va n x p:\n");
    printf("nhap m x n x p:");
    scanf("%d %d %d", &m, &n, &p);
    int a[m][n], b[n][p], c[m][p];
    printf("nhap ma tran 1:");
    for (int i = 0; i < m; i++)
    { // thong so hang
        for (int j = 0; j < n; j++)
        { // thong so cot
            scanf("%d", &a[i][j]);
        }
    }

    printf("nhap ma tran 2:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("ma tran 1:\n \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("ma tran 2:\n \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("ma tran 1 x ma tran 2:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}