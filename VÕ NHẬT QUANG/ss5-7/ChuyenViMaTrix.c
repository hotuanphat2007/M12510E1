#include <stdio.h>
int main()
{
    int m, n;
    printf("Nhap m x n ");
    scanf("%d %d", &m, &n);
    int a[m][n], b[m][n];
    printf("nhap ma tran %d x %d \n", m, n);
    for (int i = 0; i < m; i++)
    { // thong so hang
        for (int j = 0; j < n; j++)
        { // thong so cot
            scanf("%d", &a[i][j]);
        }
    }
    printf("Phep chuyen vi cua ma tran\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("RESULT:\n");
    for (int i = 0; i < n; i++)
    { // thong so cot
        for (int j = 0; j < m; j++)
        { // thong so hang
            b[j][i] = a[j][i];
            printf("%d\t", b[j][i]);
        }
        printf("\n");
    }

    return 0;
}