#include <stdio.h>
#include <string.h>

int main()
{
    char array[20];
    char nonRepeatChar;

    int i, j, count=0, index = -1;

    printf("Input a contiguous string (aabbccd or any sequence):\n");
    scanf("%s", &array);
    for (i = 0; i < sizeof(array); i++)
    {
        
        for (j = 0; j <= sizeof(array); j++)
        {
            if (i == j){
                continue;
            }else if (array[i] == array[j])
            {
                break;
            }else if(array[j] == '\0'){
                count++;
            }

        }

        if(count){
            index = i;
            nonRepeatChar = array[i];
            break;
        }
    }

    printf("First non-repeating character at index %d: %c\n", index, nonRepeatChar);

    return 0;
}