#include<stdio.h>
#define _CRT_SECURE_NO_DEPRECATE

int main(){
	int n = 0;
	printf("������һ��n:\n");
	scanf("%d",&n);
	int i = 1;
	int ret = 1;
	/*while (i<=n){
		ret = ret*i;
		i++;
	}*/
	for (i = 1; i <= n;i++){
		ret = ret*i;

	}
	printf("n�Ľ׳�Ϊ��%d\n",ret);
	system("pause");
	return 0;

}