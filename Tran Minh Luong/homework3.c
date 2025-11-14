#include <stdio.h>

int main() {
    int x = 29;              // 29 = 11101
    int mask, newValue;

    mask = (1 << 1) | (1 << 3);  
    newValue = x ^ mask;         // XOR để đảo các bit

    printf("Giá trị ban đầu: %d (11101)\n", x);
    printf("Giá trị mới: %u\n", newValue);

    return 0;
}
