#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	int i, j = 0;
	int arr[1000];
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			arr[j] = i;
			j++;
		}		
	}
	printf("%d", arr[0]);
	for (i = 1; i < j; i++)
	{
		printf(" %d", arr[i]);
	}
}