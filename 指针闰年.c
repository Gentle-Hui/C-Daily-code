#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE
int leap(int *a)
{
	int tempyear = *a;
	if (((tempyear % 4 == 0) && (tempyear % 100 != 0)) || (tempyear % 400 == 0))
	{
		printf("是闰年");
	}
	else{
	
		printf("不是闰年");
	}
}
int main()
{
	printf("请输入你想判断是否是闰年的年份：");
	int year = 0;
	scanf("%d",&year);
	leap(&year);
	system("pause");
	return 0;
}