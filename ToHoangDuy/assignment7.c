#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_current_date()
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	printf("Current Date: %02d-%02d-%04d\n", tm.tm_mday, 
		tm.tm_mon + 1, tm.tm_year + 1900);
}

void Get_five_float(float arr[], int size)
{
	printf("Enter %d float numbers:\n", size);
	for (int i = 0; i < size; i++)
	{
		scanf("%f", arr + i);
	}
}

void Calculate_average_of_five_float(float arr[], int size)
{
	float average = 0.0;
	for (int i = 0; i < size; i++)
	{
		average += *(arr + i);
	}
	average /= size;
	printf("Average of %d float numbers: %.2f\n", size, average);
}

int main()
{
	system("cls");
	print_current_date();

	float Num[5];
	int size = sizeof(Num) / sizeof(Num[0]);
	Get_five_float(Num, size);
	Calculate_average_of_five_float(Num, size);

	return 0;
}