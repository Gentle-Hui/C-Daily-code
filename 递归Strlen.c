#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Strlen1(char* str) {
	if (*str == '\0') {
		return 0;
	}
	else {
		return Strlen1(str + 1) + 1;
	}
}
/*int Strlen2(char* str) {//非递归
	int n = 0;
	while (*str != '\0') {
		++str;
		++n;
	}
	return n;
}*/
int main() {
	char str[30] = { 0 };
	printf("请输入一个字符串\n");
	fgets(str, 30, stdin);
	str[strlen(str) - 1] = '\0';
	printf("递归方法判断字符串的长度为:%d\n", Strlen1(str));
	//printf("非递归方法判断字符串的长度为:%d\n", Strlen2(str));
	system("pause");
}