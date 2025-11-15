#include <stdio.h>
#include <stdlib.h>

const float PI = 3.1416;

typedef struct Circle {
	float radius;
	float area;
	float circumference;
} Circle;

void printCircleArea_and_Circumference(Circle *c)
{
	c->area = PI * c->radius * c->radius;
	c->circumference = 2 * PI * c->radius;

	printf("Area of circle: %.2f\n", c->area);
	printf("Circumference of circle: %.2f\n", c->circumference);
}

int main()
{
	system("cls"); // Use "clear" instead of "cls" if on Unix/Linux

	Circle c1;
	printf("Enter radius of circle: "); scanf("%f", &c1.radius);
	printCircleArea_and_Circumference(&c1);
	
	return 0;

}