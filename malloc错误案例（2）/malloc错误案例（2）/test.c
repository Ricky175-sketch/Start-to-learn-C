#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
}
//malloc开辟空间后未free
int main()
{
	Test();
	return 0;
}
//改
//void getmemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void test(void)
//{
//	char* str = null;
//	getmemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = null;
//}
//
//int main()
//{
//	test();
//	return 0;
//}