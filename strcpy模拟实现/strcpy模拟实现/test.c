#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*dest++ = *src++)//����srcָ����ַ�����detָ��Ŀռ�
	{
		;
	}
	return ret;//����Ŀ�Ŀռ����ʼ��ַ
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