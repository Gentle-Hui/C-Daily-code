#include<stdio.h>
int power(int n, int k, int i) {
	i++;
	if (i >= k) {
		return n;
	}
	return n * power(n, k, i);
}
int main() {
	int a = 0;
	int b = 0;
	int i = 0;
	printf("请输入你要处理的数字");
	scanf("%d", &a);
	printf("你想要得到它的几次方：？");
	scanf("%d", &b);
	int p = power(a, b, i);
	printf("结果是：%d", p);
	system("pause");
	return 0;
}