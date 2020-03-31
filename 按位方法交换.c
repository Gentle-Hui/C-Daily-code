#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1

void exchange(int m,int n){
	m = m^n;
	n = m^n;
	m = m^n;
	printf("交换后得知为：\ni=%d和j=%d\n", m, n);
}

int main()
{
	int i = 0;
	int j = 0;
	printf("请输入i的值：\n");
	scanf("%d", &i);
	printf("请输入j的值：\n");
	scanf("%d", &j);
	printf("您输入的值为：\ni=%d和j=%d\n", i, j);
	exchange(i,j);
	system("pause");
	return 0;
}