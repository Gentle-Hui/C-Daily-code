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
	printf("��������Ҫ���������");
	scanf("%d", &a);
	printf("����Ҫ�õ����ļ��η�����");
	scanf("%d", &b);
	int p = power(a, b, i);
	printf("����ǣ�%d", p);
	system("pause");
	return 0;
}