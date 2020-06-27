#include <stdio.h> 
#include <string.h> 

void print(char a[], int b) 
{
	for(int i = 0; i < strlen(a); i++) 
		for(int j = 0; j < b; j++) 
			printf("%c", a[i]); 
	
	printf("\n"); 
} 

int main(void) 
{ 
	int j, n; 
	char p[21]; 
	
	scanf("%d", &n); 
	
	for(int i = 0; i < n; i++) 
	{ 
		scanf("%d", &j); 
		scanf("%s", p); 
		print(p, j); 
	} 
	
	return 0; 
}
