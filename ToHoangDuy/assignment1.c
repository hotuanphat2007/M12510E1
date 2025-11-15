#include <stdlib.h>
#include <stdio.h>
int main()
{
    system("cls");

    // Exercise 1
    int days, weeks, years;
    printf("Type the number of days: "); scanf("%d", &days);
    years = days / 365;
    weeks = (days - (years * 365)) / 7;
    days = (days - (years * 365 + 7 * weeks));
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    // Exercise 2
    int a, b, c;
    printf("\n\nType a, b, c: ");
    scanf("%d", &a); scanf("%d", &b); scanf("%d", &c);

    printf("Given a = %d, b = %d, c = %d\n", a, b, c);
    printf("Expression: (a + b) * c & a | b\n");
    printf("Step-by-step:\n");

    int result = a + b;
    printf("(a + b) = %d\n", result);

    printf("%d * c = %d\n", result, result * c);
    result = result * c;

    printf("%d & a = %d\n", result, result & a);
    result = result & a;

    printf("%d | b = %d\n", result, result | b);
    result = result | b;

    printf("Result = %d\n", result);

    // Exercise 3
    int x;
    printf("\n\nType an integer: "); scanf("%d", &x);
    printf("The number %d in hexadecimal is: 0x%x\n", x, x); 

    x = x ^ 8;
    x = x ^ 2;
    printf("After toggling the 4th and 2nd bits, the new value is: %d\n", x);
    printf("In hexadecimal, it is: 0x%x\n", x);

    return 0;
}