#include<stdio.h>

int main()
{
	
	int n;
	printf("Enter the number of baloons\n");
	scanf("%d", &n);
	int a[n];
	printf("Enter the numbers on baloons\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	int m[10];
	int p[10];
	for(int i=0;i<10;i++)
	{
		m[i] = 0;
	}
	int c=0;
	for(int i=0;i<n;i++){
		m[a[i]]++;
		if(m[a[i]] == 1)
		{
			p[c] = a[i];
			c++;
		}
		
	}
	for(int i = 0;i<c;i++)
	{
	if(m[a[i]] > 1)
	{
		//printf("Duplicate element not allowed!\n");
		printf("Error! You have duplicated %d\n", a[i]);
	}
		// printf("%d\t", p[i]);
	}
	return 0;
}
