#include<stdio.h>

void PrintDigit(int n);

int main()
{
	int a;
	scanf("%d", &a);
	
	PrintDigit(a);	
	
	return 0;
} 

void PrintDigit(int n)
{
	if (n >= 10)
	{
		PrintDigit(n/10);
	}
	printf("%d", n-n/10*10);
}
