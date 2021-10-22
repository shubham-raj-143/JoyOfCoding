#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number of elements in array\n");
	scanf("%d", &n);
	
	printf("Enter the elements\n");
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	int sum;
	printf("Enter the sum\n");
	scanf("%d", &sum);
	int c = 0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j] == sum)
			{
				c++;
				printf("The indices found are in :(%d %d) and (%d %d).", i, j, j, i);
			}
		}
	}
	if(c==0)
	{
		printf("No indices found\n");
	}
	return 0;
}
