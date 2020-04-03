#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1

void print(int *num, int length){
	int i = 0;
	int* p = num;
	for (i = 0; i < length; i++){
		printf("%d ",*(p+i));
	}
}


int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr,sz);
	system("pause");
	return 0;
}