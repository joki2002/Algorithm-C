#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, count;

    scanf("%d", &N);

    count = N / 5;
    N = N - count * 5;
    if (N > 3 && N % 3 == 0)
    {
        count = count + N / 3;
    }


    return 0;
}
