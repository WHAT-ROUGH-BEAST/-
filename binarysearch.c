#include<stdio.h>

int main()
{
	int a[6] = {1, 2, 3, 4, 5, 6};
	
	int x = 5;
	
	printf("%d", Binsearch(a, x, 6));
	
	return 0;
}

int Binsearch(int a[], int x, int size)
{
	int high, low, mid;
	
	low = 0;
	high = size - 1;
	mid = (low + high)/2; 
	
	while(low <= high)
	{
		if (a[mid] < x)
		{
			low = mid + 1;
			mid = (low + high)/2;
		}
		else if (a[mid] > x)
		{
			high = mid - 1;
			mid = (low + high)/2;
		}
		else return mid;
	}
	return -1;
}
