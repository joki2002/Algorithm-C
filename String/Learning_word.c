#include <stdio.h>
#include <string.h>


int main(void)
{
    int i, j, max, flag=0, result = 0;
    char arr[1000000];
    int cnt[26] = { 0 };
    
    scanf("%s", arr);

    for (i = 'a'; i <= 'z'; i++)
    {
        for (j = 0; j < strlen(arr); j++)
        {
           if (i == arr[j])
               cnt[i-'a']++;
        }
    }

    for (i = 'A'; i <= 'Z'; i++)
    {
        for (j = 0; j < strlen(arr); j++)
        {
           if (i == arr[j])
               cnt[i-'A']++;
        }
    }
    
    max = cnt[0];

    for (i = 1; i < 26; i++)
    {
        if (max < cnt[i])
        {
            max = cnt[i];
            result = i;
        }
    }
    
    for (i = 0; i < 26; i++)
    {
        if (max == cnt[i])
            flag++;
    }
    
    if (flag > 1)
        printf("?\n");

    else
        printf("%c", result+'A');
    
    return 0;
}