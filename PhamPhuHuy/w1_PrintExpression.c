#include <stdio.h>

int main() {
    int a = 6, b = 3, c = 2;
    int result = (a + b) * c & a | b;
    int step1 = a + b;
    int step2 = step1 * c;
    int step3 = step2 & a;
    int step4 = step3 | b;
    printf("Given a = %d, b = %d, c= %d\n", a, b, c);
    printf("Expression: ( a + b) * c & a | b\n");
    printf("Step-by-step:\n");
    printf("1. (a + b) =  %d\n", step1);
    printf("2. %d * c = %d\n", step1, step2);
    printf("3. %d & a = %d\n", step2, step3);
    printf("4. %d | b = %d\n", step3, step4);
    printf("Result = %d\n", result);
    return 0;
}