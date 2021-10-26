#include <stdio.h>

int main()
{
	int r, c;
	printf("Enter the number of rows and columns in matrix\n");
	scanf("%d", &r);
	scanf("%d", &c);
	printf("Enter the matrix\n");
	int m[r][c];
	int deg;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			// printf("enter %d row and %d column\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	printf("Your matrix is:\n");
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d", m[i][j]);
		}
		printf("\n");
	}
	int y;
	printf("Select 1 if you want to change the angle of view\n2 if its ok.\n");
	scanf("%d", &y);

	while (y == 1)
	{
		

		printf("Which angle you want matrix to be rotated to right for your perfect view\nSelect 90deg\t180deg\n");
		scanf("%d", &deg);

		if (deg == 180)
		{
			printf("Your matrix is:\n");
			for (int i = r - 1; i >= 0; i--)
			{
				for (int j = 0; j < c; j++)
				{
					printf("%d", m[i][j]);
				}
				printf("\n");
			}
		}
		int a[c][r];
		for (int i = 0; i < c; i++)
		{
			for (int j = 0; j < r; j++)
			{
				a[i][j] = 0;
			}
		}
		if (deg == 90)
		{
			for (int i = 0; i < c; i++)
			{
				for (int j = r - 1; j >= 0; j--)
				{
					a[i][(r - 1) - j] = m[j][i];
				}
			}
			printf("Your matrix is:\n");
			for (int i = 0; i < c; i++)
			{
				for (int j = 0; j < r; j++)
				{
					printf("%d", a[i][j]);
				}
				printf("\n");
			}
		}
		printf("Select 1 if you want to change the angle of view\n2 if its ok.\n");
		scanf("%d", &y);
		if(y==2)
		{
			break;
		}
	}
	return 0;
}
