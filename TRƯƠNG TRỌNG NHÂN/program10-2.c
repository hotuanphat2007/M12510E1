#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len;
    int repeat;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        repeat = 0;

        for (j = 0; j < len; j++)
        {
            if (i != j && str[i] == str[j])
            {
                repeat = 1;
                break;
            }
        }

        if (repeat == 0)
        {
            printf("First non-repeating character at index %d: %c\n", i, str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");
    return 0;
}
