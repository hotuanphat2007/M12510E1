#include <stdio.h>
#include <math.h>

int main()
{
    int a = 6, b = 3, c = 2;
    int result = (a+b)*c&a|b;

    printf("\nGiven a = 6, b = 3, c = 2");
    printf("\nExpression: (a + b) * c & a | b");
    printf("\nStep-by-step:");
    printf("\n(a + b) = %d", a+b);
    printf("\n9 * c = %d", (a+b)*c);
    printf("\n18 & a = %d", (a+b)*c&a);
    printf("\n2 | b = %d", (a+b)*c&a|b);
    printf("\nResult = %d", result);
return 0;
}