#include<stdio.h>


int main(){
	int a = 0;
	int b = 0;
	int max = 0;
	printf("请输入两次数字\n");
	scanf("%d%d", &a, &b);
	int minus();
	printf("最大的数字是：");
	printf("%d\n", max);
	return 0;
}

int minus(){
	int x = 0;
	int y = 0;
	int max = x > y ? x : y;
	return max;
}