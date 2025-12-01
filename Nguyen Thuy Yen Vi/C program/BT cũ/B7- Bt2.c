#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int sum;

    printf("Enter a 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(j = 0; j < 3; j++) {
        sum = 0; 
        for(i = 0; i < 3; i++) {
            sum += matrix[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, sum);
    }

    return 0;
}
