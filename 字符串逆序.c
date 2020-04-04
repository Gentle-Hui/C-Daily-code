#include<string.h>
#include<stdio.h>


void reverse(char* str){
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	char tmp = 0;

	while (left<right){
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}

int main(){
	char arr[100] = {0};
	//scanf("%s",arr)
	gets(arr);
	reverse(arr);

	printf("%s\n",arr);
	system("pause");
	return 0;
}