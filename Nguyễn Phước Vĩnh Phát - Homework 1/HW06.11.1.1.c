#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Sample Input: ");
    scanf("%d", &n);

    for (int i = 1; i < (n+1); i++) 
    {
        factorial *= i;
    }

    printf("Trường hợp 1: Using for loop: %llu\n", factorial);

    return 0;
}