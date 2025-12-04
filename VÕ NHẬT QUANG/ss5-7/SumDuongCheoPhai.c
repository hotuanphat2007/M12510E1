#include <stdio.h>
int main()
{
    int m;
    int s = 0;
    printf("ma tran phai co dang la ma tran vuong\n");
    printf("nhap m x n:");
    scanf("%d", &m);
    int a[m][m];
    printf("nhap cac phan tu cua mang %d x %d \n", m);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Tong cua duong cheo phai cua mang\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i + j == m - 1)
            {
                s += a[i][j];

                printf("%d\t", a[j][i]);
            }
        }
        printf("\n");
    }
    printf("RESULT %d", s);
    return 0;
}