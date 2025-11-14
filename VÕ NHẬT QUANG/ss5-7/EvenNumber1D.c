#include <stdio.h>
int main()
{
    int m;
    printf("Nhap so phan tu cua mang:");
    scanf("%d", &m);
    int a[m];
    printf("Nhap cac phan tu cua mang:");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {

        if (a[i] % 2 == 0)
            printf("%d is an even number\n", a[i]);
    }

    return 0;
}