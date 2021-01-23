#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

void* my_memcpy(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;//charһ��ֻ����һ���ֽڣ���Ҫ�����ĸ��ֽڣ�����int��sizeof������������ֽ�����
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, sizeof(arr1));
	int len = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}