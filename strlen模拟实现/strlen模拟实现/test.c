#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[10] = { 0 };
	scanf("%s", arr);
	int len=my_strlen(arr);
	printf("%d\n", len);
	return 0;
}