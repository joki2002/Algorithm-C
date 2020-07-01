#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int time[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    char input[15];
    int i, result = 0;

    scanf("%s", input);

    for (i = 0; i < strlen(input); i++)
        result += time[input[i] - 'A'];
    
    printf("%d", result);

    return 0;
}