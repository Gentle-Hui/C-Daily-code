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
	printf("��������ڼ�������");
	scanf("%d", &n);
	int ret = fab(n);
	printf("����%d\n", ret);
	system("pause");
	return 0;
}