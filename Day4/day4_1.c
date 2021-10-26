#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[40];
	
	printf("Enter the String\n");
	gets(s);
	printf("The abbrebiation of your sentance is:\n");
	int n = strlen(s);

	for(int i=0;i<n;i++)
	{
		
		if(s[i] >= 65 && s[i] <=90)
		{
			printf("%c", s[i]);
		}
		
	}
	printf("\n");
	
	return 0;
}
