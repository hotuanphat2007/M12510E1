#include <stdio.h>
int main()
{
    int m, n, s = 0;
    printf("Nhap m x n :");
    scanf("%d %d", &m, &n);
    printf("Nhap cac phan tu cua mang:");
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Tong cac phan tu cua ma tran\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("RESULT:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s += a[i][j];
        }
    }
    printf("%d", s);
    return 0;
}