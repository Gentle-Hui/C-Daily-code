#include<stdio.h>

int main(){
	int n = 0;
	scanf("%d",&n);
	int i = 0;
	int ret = 1;
	int j = 0;
	int sum = 0;
	for (j = 1; j <= n;j++){
		for (i = 1; i <= j; i++){
			ret *= i;
		
		}
		sum += ret;
	}
	printf("%d",sum);
	system("pause");
	return 0;
}