#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial = 1;
    int i = 1;

    printf("Sample Input: ");
    scanf("%d", &n);

    if (n != 0) 
    { 
        do 
        {
            factorial *= i;
            i++;
        } while (i <= n);
    }

    printf("Trường hợp 3: Using do-while loop: %llu\n", factorial);

    return 0;
}