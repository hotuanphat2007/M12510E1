#include <stdio.h>

int main() {
    int a, b, c, d, largest;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    largest = (a > b && a > c && a > d) ? a : (b > a && b > c && b > d) ? b : (c > a && c > b && c > d) ? c : d;
    printf("The largest number is: %d\n", largest);
    return 0;
}
