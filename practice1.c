#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_DEPRECATE
int main()
{
		int i, j;
		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j <= i; j++)
			{
				printf("%d*%d=%2d ", j, i, j*i);
				if (i == j)
					printf("\n");
			}
		}
	system("pause");
	return 0;
	
}

