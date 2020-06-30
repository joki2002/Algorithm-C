#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int i = 0, result = 0;
    char word[1000000];
    
    scanf("%[^\n]", word);
    
    int len = strlen(word);

    if (len == 1)
    {
        if (word[i] == ' ')
        {
            printf("0\n");
            return 0;
        }
    }

    for (i = 1; i < len-1; i++)
    {
        if (word[i] == ' ')
            result++;
    }

    printf("%d\n", result+1);

    return 0;
}
