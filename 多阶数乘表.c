#include <stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE

void time(int *temp){
	int i = 0;
	int j = 0;
	int k = 0;
	k = *temp;
	for (i = 1;i<=k;i++){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%3d      ",i,j,i*j);
			
		}printf("\n");
	
	}

}

int main(){
	printf("请输入你想要的是几阶乘法口诀表：");
	int a = 0;
	scanf("%d",&a);
	time(&a);
	system("pause");
	return 0;
}