#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char 

 main()
{
	char str1[1000];
	char str2[1000];
	int n1,n2;
	char c;
	int i=0;
	printf("enter the string1\n");
	gets(str1);
	printf("enter the string2\n");
	gets(str2);
	n1=strlen(str1);
	n2=strlen(str2);
	if (n1!=n2)
	{
		printf("error");
	}
	else
	{
		while(strcmp(str1,str2)!=0  && i<=n1 )
		{
			i++;
			char temp=str1[0];
			for (int j=0;j<n1-1;j++)
			{
				str1[j]=str1[j+1];
			}
			str1[n1-1]=temp;
		}
		if(strcmp(str1,str2)==0 )
		{
			printf("match");
		}
		else
		{
			printf("not match");
		}
		
	}


}

