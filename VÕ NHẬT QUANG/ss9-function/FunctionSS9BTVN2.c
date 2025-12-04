#include <stdio.h>
#include <stdlib.h>
float AVRnELEMENTS(int n)
{
    float *p = NULL;
    p = (float *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("UNABLE TO ALLOWCATE\n");
        return 1;
    }
    printf("nhap %d phan tu\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d\t", i + 1);
        scanf("%f", &p[i]);
    }
    float sum;
    for (int i = 0; i < n; i++)
    {
        sum += p[i] / 5;
    }
    free(p);
    return sum;
}
int main()
{
    int n;
    printf("enter n elements\n");
    scanf("%d", &n);
    printf("%.2f", AVRnELEMENTS(n));
    return 0;
}