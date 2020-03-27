#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* reverse_string(char*string)
{
	if (*string)
	{
		char* start = string;
		char* end = start + strlen(string) - 1;
		char tmp = *start;
		*start = *end;
		*end = '\0';
		reverse_string(string + 1);
		*end = tmp;
	}
	return string;
}
int main()
{
	char string[4] = "abcd";

	printf("%s", reverse_string(string));
	system("pause");
	return 0;
}