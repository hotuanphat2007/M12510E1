#include <stdio.h>
int main()
{
    int a, b, c, smallest;
    printf("nhap 3 so a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    smallest = (a < b && a < c) ? a : (b < a && b < c) ? b
                                                      : c;
    printf("So nho nhat trong 3 so la %d", smallest);
    return 0;
}