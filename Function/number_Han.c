#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    int han = 0;
    int flag = 0;
    int temp = 0;
    int check[3] = {0, };
    
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        if (i < 100) han = i;
        else if (i > 1000) break;
        else
        {
            flag = 0;
            temp = i;
            while (num != 0)
            {
                check[flag] = temp % 10;
                temp /= 10;
                flag++;
            }
            if (check[0] - check[1] == check[1] - check[2]) han++;
        }
    }    
    printf("%d", han);

    return 0;
}