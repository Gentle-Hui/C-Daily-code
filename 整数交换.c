#include<stdio.h>

#include<stdlib.h>

void Swap(int *pa, int *pb){

	int tmp = 0;

	tmp = *pa;//µÈ¼ÛÓÚtmp=a;

	*pa = *pb;

	*pb = tmp;

}




int main(){

	int a = 10;

	int b = 20;

	printf("a=%d b=%d\n", a, b);

	Swap(&a, &b);

	printf("a=%d b=%d\n", a, b);

	system("pause");

	return 0;

}