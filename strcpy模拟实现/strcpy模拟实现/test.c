#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*dest++ = *src++)//拷贝src指向的字符串到det指向的空间
	{
		;
	}
	return ret;//返回目的空间的起始地址
}

int main()
{
	char arr1[10] = { 0 };
	char arr2[10] = { 0 };
	scanf("%s %s", arr1, arr2);
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}