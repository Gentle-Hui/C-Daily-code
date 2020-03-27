#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> 
int fab(int n)
{
	if (n <= 2)
		return 1;
	else
		return fab(n - 1) + fab(n - 2);
}
int main()
{
	int n = 0;
	printf("请输入求第几个数：");
	scanf("%d", &n);
	int ret = fab(n);
	printf("答案是%d\n", ret);
	system("pause");
	return 0;
}