#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

int my_strcmp(char* str1, char* str2)
{
	assert(str1&&str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int main()
{
	char arr1[10] = { 0 };
	char arr2[10] = { 0 };
	scanf("%s %s", arr1, arr2);
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}