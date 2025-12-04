#include <stdio.h>
int main() {
    int a[3][3];
    
    printf("Enter a matrix of 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int cot = 0; cot < 3; cot++) {
        int tong = 0;
        for (int dong = 0; dong < 3; dong++) {
            tong += a[dong][cot];
        }
        printf("Cot %d Tong = %d\n", cot + 1, tong);
    }

    return 0;
}