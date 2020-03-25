#include<stdio.h>

int prime(int *tmp){
	int i = 0;
	int j = 0;
	i = *tmp;
	for (j = 2; j <i;j++){
		if (i%j == 0){
			break;
		}
	}
	if (j >= i){
		printf("%d\n",i);
	}
}
int main(){
	int a;
	for (a = 100; a <= 200; a++)
	{
	prime(&a);
	}
	getchar();
	return 0;
}