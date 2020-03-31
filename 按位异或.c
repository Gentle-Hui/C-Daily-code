#include <stdio.h>
int calc_diff_bit(int m, int n)
{
	int tmp = m^n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp&(tmp - 1);
		count++;
	}
	return count;
}


int main()
{
	int m, n;
	while (scanf("%d %d", &m, &n) == 2)
	{
		printf("%d\n", calc_diff_bit(m, n));
	}
	return 0;
}