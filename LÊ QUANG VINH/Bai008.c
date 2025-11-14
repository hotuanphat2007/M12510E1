#include <stdio.h>

int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    int num_bits = 0;
    int temp = x;

    while (temp > 0)
    {
        temp >>= 1;
        num_bits++;
    }

    x ^= (1 << (num_bits - 2));
    x ^= (1 << (num_bits - 4));

    printf("New value = %d\n", x);

    return 0;
}