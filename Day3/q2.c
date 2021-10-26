#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number of elements in an array\n");
	scanf("%d", &n);
	printf("Enter the array\n");
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int sum;
	printf("Print sum\n");
	scanf("%d", &sum);
	for (int i = 0; i < n; i++)
	{
		int s = a[i];
		// printf("%d", s);
		for (int j = i + 1; j < n - 1; j++)
		{

			if (s == sum)
			{
				printf("subarray is from range\n");
				printf("[");
				for (int k = i; k < j - 1; k++)
				{
					printf("%d,", k);
				}
				printf("%d]", j - 1);
				printf("\n");
			}
			
				s = s + a[j];
				printf("%d\t", s);
			if (s == sum)
			{
				printf("subarray is from range\n");
				printf("[");
				for (int k = i; k < j - 1; k++)
				{
					printf("%d,", k);
				}
				printf("%d]", j - 1);
				printf("\n");
				break;
			}
		}
	}
}
