#include <stdio.h>

int main() {
    int i = 1;
    int n = 5;
    int giaiThua = 1;

    do { giaiThua *= i;
        i++; }
    while (i <= n);
    printf("Giai thua cua %d la %d\n", n, giaiThua);
    return 0;
}