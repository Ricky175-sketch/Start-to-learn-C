#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strcat(char* dest,const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };
	scanf("%s %s", arr1, arr2);
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}