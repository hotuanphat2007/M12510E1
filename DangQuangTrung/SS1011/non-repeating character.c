#include <stdio.h>
#include <string.h>

int main()
{
    char arr[20];
    char nonrep;

    int i, j, count=0, index = -1;

    printf("Input a contiguous string :\n");
    scanf("%s", &arr);
    for (i = 0; i < sizeof(arr); i++) NULL = \0
    {
        
        for (j = 0; j <= sizeof(arr); j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (arr[i] == arr[j])
            {
                break;
            }
            else if(arr[j] == '\0')
            {
                count++;
            }

        }

        if(count){
            index = i;
            nonrep = arr[i];
            break;
        }
    }

    printf("First non-repeating character at index %d: %c\n", index, nonrep);

    return 0;
}
