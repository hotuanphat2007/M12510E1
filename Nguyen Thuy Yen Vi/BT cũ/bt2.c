#include <stdio.h>
int main() {
    int a = 6, b = 3, c = 2;
    int result;
    printf("Given a = %d, b = %d, c = %d\n", a, b, c);
    result = (a + b) * c & a | b;
    printf("Expession: (a + b) * c & a | b\n");
    // Step_by_step explanition
    int step1 = a + b;
    int step2 = step1 * c;
    int step3 = step2 & a;
    int step4 = step3 | b;
    printf("Step_by_step: \n");
    printf("(a + b) = %d\n", step1);
    printf("%d * c = %d\n", step1, step2);
    printf("%d & a = %d\n", step2, step3);
    printf("%d | b = %d\n", step3, step4);
    printf("Result = %d\n", result);
    return 0;
}