#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i;
    int cnt = 0;
    char word[100];

    scanf("%s", word);

    for (i = 0; ; i++) 
    {
        char flag = word[i];
        if (word[i] == NULL)
            break;
        if (flag == 'n' || flag == 'l') 
        {
            if (word[i + 1] == 'j') continue;
        }
        else if (flag == 'c' || flag == 's' || flag == 'z') 
        {
            if (word[i + 1] == '=' || word[i + 1] == '-') continue;
        }
        else if (flag == 'd') 
        {
            if (word[i + 1] == '-') continue;
            if (word[i + 1] == 'z' && word[i + 2] == '=') continue;
        }
        cnt++;
    }
    printf("%d", cnt);
    
    return 0;
}
