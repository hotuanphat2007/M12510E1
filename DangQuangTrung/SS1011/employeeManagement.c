#include <stdio.h>
#include <stdlib.h>

struct member 
{
	char name[50];
    int age;
    char dpm[50];
	int sal;
};

void swap(struct member *a, struct member *b)
{
	struct member temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(struct member arr[], int n)
{
	for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++) 
		{
            if (arr[j].sal < arr[j + 1].sal) 
			{
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
void change_record(struct member s[], int n)
{
    s[n].age += 1;
}
int main()
{
	int n;
	printf("Number of member: ");
	scanf("%d",&n);
	
	struct member s[n];
	for (int i = 0; i < n; i++) 
	{
        printf("\nMember %d\n", i + 1);
        printf("Name: ");
        scanf("%s", &s[i].name);
        printf("Salary: ");
        scanf("%d", &s[i].sal);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Department: ");
        scanf("%s", &s[i].dpm);
    }
	bubble_sort(s,n);
	printf("\n Sorted Members by Salary (High to Low) \n");
    for (int i = 0; i < n; i++) 
	{
        printf("%s - %d\n", s[i].name, s[i].sal);
    }
	return 0;
}

