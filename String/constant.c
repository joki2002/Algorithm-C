#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int num1, num2, flag = 0;
    int result[6];
    scanf("%d %d", &num1, &num2);
    
    while (num1 != 0)
    {
        result[flag] = num1 % 10;
        result[flag+3] = num2 % 10;
        num1 = num1 / 10;
        num2 = num2 / 10;
        flag++;
    }

    num1 = result[0] * 100 + result[1] * 10 + result[2];
    num2 = result[3] * 100 + result[4] * 10 + result[5];

    if (num1 > num2)
        printf("%d", num1);
    
    else
        printf("%d", num2);
    

    return 0;
}
