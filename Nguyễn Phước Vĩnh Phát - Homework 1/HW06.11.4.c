#include <stdio.h>
int main() 
{
    int matrix[3][3];
    int col_sum[3] = {0, 0, 0};

    printf("Enter a matrix of 3x3:\n");

   
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]); 
        }
    }

    for (int j = 0; j < 3; j++) 
    {
        for (int i = 0; i < 3; i++) 
        {
            col_sum[j] += matrix[i][j];
        }
    }

    for (int j = 0; j < 3; j++) 
    {
        printf("Colum %d sum = %d\n", j + 1, col_sum[j]);
    }

    return 0;
}
