#include <stdio.h>
#include <stdlib.h>
typedef struct Person
{
	char name[20];
	int roll;
	float marks;
} Person;

void type_person(Person* p)
{
	printf("Type name: "); scanf("%s", p->name);
	printf("Type roll number: "); scanf("%d", &p->roll);
	printf("Type marks: "); scanf("%f", &p->marks);
}

void compare_marks(Person p1, Person p2)
{
	if(p1.marks > p2.marks)
	{
		printf("%s has higher marks: %.2f \n", p1.name, p1.marks);
	} else if(p1.marks < p2.marks) {
		printf("%s has higher marks: %.2f \n", p2.name, p2.marks);
	} else {
		printf("%s and %s have the same marks: %.2f\n", p1.name, p2.name, p1.marks);
	}
}

int main()
{
	system("cls");
	Person students[2];
	for(int i = 0; i < 2; i++)
	{
		printf("Enter information of Student %d:\n", i + 1);
		type_person(&students[i]);
	}
	compare_marks(students[0], students[1]);

	

	return 0;
}