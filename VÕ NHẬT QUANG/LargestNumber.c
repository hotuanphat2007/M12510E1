#include <stdio.h>
int main()
{
    int a, b, c, d, lar;
    printf("Nhap 4 so:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    lar = (a > b && a > c && a > d) ? a : (b > a && b > c && b > d) ? b
                                      : (c > a && c > b && c > d)   ? c
                                                                    : d;
    printf("%d la so lon nhat trong 4 so", lar);
    return 0;
}