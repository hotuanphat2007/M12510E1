#include <stdio.h>

int main() {
    int n = 5;
    int giaiThua = 1;

    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }

    printf("Giai thua cua %d la %d\n", n, giaiThua);
    return 0;
}