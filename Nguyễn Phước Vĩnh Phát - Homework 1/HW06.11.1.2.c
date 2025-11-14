#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial = 1;
    int i = 1;

    printf("Sample Input: ");
    scanf("%d", &n);

    while (i < (n+1)) 
    {
        factorial *= i;
        i++;
    }

    printf("Trường hợp 2: Using while loop: %llu\n", factorial);

    return 0;
}