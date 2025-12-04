#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *p = (int *)malloc(n * sizeof(int));
    if (p == NULL) {
        printf("Unable to allocate memory!\n");
        return 1;
    }
    printf("Enter the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    printf("The elements are:\n");
    int max = p[0], min = p[0];
    for (int i = 0; i < n; i++) {
        printf("|%d|", p[i]);
        if (p[i] > max) max = p[i];
        if (p[i] < min) min = p[i];
    }
    printf("\nReverse:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("|%d|", p[i]);
    }
    printf("\nMax of array is: %d\n", max);
    printf("Min of array is: %d\n", min);
    free(p);
return 0;
}