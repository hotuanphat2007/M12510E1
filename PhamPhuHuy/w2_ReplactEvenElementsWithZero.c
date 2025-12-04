#include <stdio.h>
#include <stdlib.h>

void replaceEvenToZero(int *arr, int size) {
    int *ptr = arr;

    for (int i = 0; i < size; i++) {
        if (*ptr % 2 == 0) {
            *ptr = 0;        
        }
        ptr++;               
    }
}

int main() {
    int n, *arr, i, new_n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n");

    replaceEvenToZero(arr, n);

    printf("Edited array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}