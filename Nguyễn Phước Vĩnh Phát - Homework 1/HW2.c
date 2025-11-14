#include<stdio.h>
int main() {
    int a = 6, b = 3, c = 2;
    int result = (a + b) * c & a | b;

    printf("Given a = %d, b = %d, c = %d \n", a, b, c);
    printf("Expression: (a + b) * c & a | b\n");
    printf("Step-by-step:\n");
    printf("(a + b) = %d \n", a + b);
    printf("%d * c = %d \n", a + b, (a + b) * c);
    printf("%d & a = %d \n", ((a + b) * c), ((a + b) *c) & a);
    printf("%d | b = %d \n", ((a + b) *c) & a, (( ((a + b) *c) & a)|b));
    printf("result = %d \n", result);

    return 0;

}