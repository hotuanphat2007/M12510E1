#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char string[1000];
    int cnt[256] = {0};
    printf("enter string:\t");
    scanf("%s", string);
    for (int i = 0; i < strlen(string); i++)
    {
        cnt[string[i]]++;
    }
    for (int i = 0; i < strlen(string); i++)
    {
        if (cnt[string[i]])
        {
            if (cnt[string[i]] == 1)
            {
                printf("%c la ki tu xuat hien thu %d khong lap lai\n", string[i],i);
            }
            cnt[string[i]] = 0;
        }
    }
    return 0;
}