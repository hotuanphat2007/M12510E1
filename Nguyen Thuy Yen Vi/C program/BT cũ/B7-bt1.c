#include <stdio.h>

int main() {
    int arr[5]; 
    int i;

    printf("Enter 5 numbers: \n");
    printf("Numbers in reverse order:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
