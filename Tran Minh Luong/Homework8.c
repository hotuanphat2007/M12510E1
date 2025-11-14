#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial;
    int i;
    printf("Sample Input: ");
    scanf("%d", &n);
    // Trường hợp 1
    factorial = 1;
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Truong hop 1: Using for loop: %llu\n", factorial);
    // Trường hợp 2
    factorial = 1;   // đặt lại về 1
    i = 1;           // bắt đầu lại từ 1
    while (i <= n) {
        factorial *= i;
        i++;
    }
    printf("Truong hop 2: Using while loop: %llu\n", factorial);
    // Trường hợp 3
    factorial = 1;   // đặt lại về 1
    i = 1;
    if (n == 0) {
        // 0! = 1
        factorial = 1;
    } else {
        do {
            factorial *= i;
            i++;
        } while (i <= n);
    }
    printf("Truong hop 3: Using do-while loop: %llu\n", factorial);
return 0;
}
