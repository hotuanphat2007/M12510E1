#include <stdio.h>
// Hàm tính tổng từng cột của ma trận 3x3
void sumColumns(int matrix[3][3], int col_sum[3]) {
    for (int j = 0; j < 3; j++) {
        col_sum[j] = 0;              // đặt tổng cột j = 0
        for (int i = 0; i < 3; i++) {
            col_sum[j] += matrix[i][j];
        }
    }
}
int main() {
    int matrix[3][3];
    int col_sum[3];
    printf("Nhap ma tran 3x3 (9 so nguyen):\n");
    // Nhap ma tran 3x3
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Tinh tong tung cot
    sumColumns(matrix, col_sum);
    // In ket qua don gian, de nhin
    printf("\nTong tung cot:\n");
    for (int j = 0; j < 3; j++) {
        printf("Cot %d: %d\n", j + 1, col_sum[j]);
    }
    return 0;
}

