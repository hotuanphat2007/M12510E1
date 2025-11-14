#include <stdio.h>

int main() {
    int a = 6, b = 3, c = 2;
    int x, y, z, result;

    printf("Given a = %d, b = %d, c = %d\n", a, b, c);
    printf("Expression: (a + b) * c & a | b\n");
    printf("Step-by-step:\n");

    x = a + b;
    printf("(a + b) = %d\n", x);

    y = x * c;
    printf("%d * %d = %d\n", x, c, y);

    z = y & a;
    printf("%d & %d = %d\n", y, a, z);

    result = z | b;
    printf("%d | %d = %d\n", z, b, result);

    printf("Result = %d\n", result);
    return 0;
}

