#include <stdio.h>
#include <string.h>

// 소문자 - 40 = 대문자
void print(void)
{
    char arr[1000001] = { 0 };
    
    scanf("%s", arr);
    
    for (int i = 0; i < strlen(arr); i++)   // change to upper case
    {
        if (arr[i] > 140)
            arr[i] = arr - 40;
    }


}


int main(int argc, char const *argv[])
{
    
    return 0;
}
