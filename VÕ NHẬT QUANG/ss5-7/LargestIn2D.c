#include <stdio.h>
int main()
{
    int m, n;
    int lar = -9999;
    printf("Nhap m x n:");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("nhap cac phan tu cua mang %d x %d ", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("So lon nhat trong mang\n \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nRESULT:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > lar)
            {
                lar = a[i][j];
            }
        }
    }
    printf("%d", lar);
    return 0;
}