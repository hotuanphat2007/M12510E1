#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void inputString(char *string)
{
    printf("Enter string: ");
    scanf("%s", string);
    printf("%s\n", string);
}
int vowelsCount(char *str)
{
    char vowels[10] = {'a', 'u', 'i', 'o', 'e', 'A', 'U', 'I', 'O', 'E'};
    int count = 0;
    int i, j;
    for(int i = 0; i < strlen(str); i++)
    {
        for(int j = 0; j < 10; j++)
        {
            while(*(str + i) == vowels[j])
            {
                count++;
                break;
            }
        }   
    }
    return count;
}
int cosonantsCOunt(char *str)
{
    char vowels[10] = {'a', 'u', 'i', 'o', 'e', 'A', 'U', 'I', 'O', 'E'};
    int count = 0;
    int count2 = 0;
    int i, j;
    for(i = 0; i < strlen(str); i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            {
                count++;
                break;
            }
        }
    }   
    for(i = 0; i < strlen(str); i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(*(str + i) == vowels[j])
            {
                count2++;
                break;
            }
        }
    }
    int total = count - count2;
    return total;
}
int characterCount(char *str)
{
    int count = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] > 31 && str[i] < 48 || str[i] > 57 && str[i] < 65 || str[i] > 122 && str[i] < 127)
        {
            count++;
        }
    }
    return count;
}
int numberCount(char *str)
{
    int count = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] > 47 && str[i] < 58)
        {
            count++;
            printf("%d\n", count);
        }
    }
    return count;
}
int main()
{
    char *s = NULL;
    s = (char*)malloc(100 * sizeof(char));
    if(s == NULL)
    {
        printf("Memory allocated failed!!!!");
        return 1;
    }
    inputString(s);
    int result = vowelsCount(s);
    int result2 = cosonantsCOunt(s);
    int result3 = characterCount(s);
    int result4 = numberCount(s);
    printf("Vowels: %d\n", result);
    printf("Cosonant: %d\n", result2);
    printf("Character specical: %d\n", result3);
    printf("Number: %d\n", result4);
    return 0;
}