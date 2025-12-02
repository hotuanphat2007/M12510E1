#include <stdio.h>

int main() {
    int i = 1;
    int n = 5;
    int giaiThua = 1;

    while (i <= n) {
        giaiThua *= i;
        i++;
    }

    printf("Giai thua cua %d la %d\n", n, giaiThua);
    return 0;
}