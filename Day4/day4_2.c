#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char s[100];
	printf("Enter the string\n");
	gets(s);
	int l = strlen(s);
	int a[26];
	for(int i=0;i<26;i++)
	{
		a[i] = 0;
	}
	int max=0;
	int p,q;
	for(int i=0;i<l;i++)
	{
		p = s[i];
		//printf("%d", p);
		a[p-97]++;
		if(max < a[p-97] && s[i] != ' ')
		{
			max = a[p-97];
			q = p;
		}
		
	}
	
	printf("The frequency of %c is %d\n", q, max);

	return 0;
}
