#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE
int leap(int *a)
{
	int tempyear = *a;
	if (((tempyear % 4 == 0) && (tempyear % 100 != 0)) || (tempyear % 400 == 0))
	{
		printf("������");
	}
	else{
	
		printf("��������");
	}
}
int main()
{
	printf("�����������ж��Ƿ����������ݣ�");
	int year = 0;
	scanf("%d",&year);
	leap(&year);
	system("pause");
	return 0;
}