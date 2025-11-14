#include <stdio.h>
int main() {
    int i = 1;
    int n = 5;
    int giaiThua = 1;
    while (i <= n) {
        giaiThua = giaiThua * i;
        i = i + 1;
    }
    printf("Giai thua cua %d la %d\n", n, giaiThua);
return 0;
}
