#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

void Print(unsigned int n){
	if (n>9){
		Print(n/10);
	}
	printf("%d  ",n%10);
}

int main(){
	unsigned int num=0;
	scanf("%d",&num);
	Print(num);
	system("pause");
	return 0;
}