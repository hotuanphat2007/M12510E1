#include <stdio.h>

int main() {
    int inp;
    printf("Enter an integer: ");
    scanf("%d", &inp);
    inp = inp ^ (1 << 1);
    inp = inp ^ (1 << 3);
    printf("New value = %d\n", inp);
    return 0;
}