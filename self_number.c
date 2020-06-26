#include <stdio.h>

typedef enum {false, true} bool;
bool check[10000];

int d(int n)
{
	int sum = n;
	
	while (n != 0)
	{
		sum = sum + n % 10;
		n = n / 10;
	}

	return sum;
}

int main(int argc, char const *argv[])
{
	int SNum = 0;
	
	for(int i = 0; i < 10000; i++)
	{
		SNum = d(i);
		check[SNum] = true;
	}
	
	for(int i = 0; i < 10000; i++)
	{
		if(!check[i]) 
			printf("%d\n", i);
	}
	
	return 0;
}
