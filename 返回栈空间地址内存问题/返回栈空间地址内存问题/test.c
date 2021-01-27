#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

char* GetMemory(void)
{
	 char p[] = "Hello World";
	return p;
}
//p在栈区创建，出了GetMemory就被销毁了，因此不要随意返回栈区的地址
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
//非法访问内存
int main()
{
	Test();
	return 0;
}
//改正
//char* GetMemory(void)
//{
//	static char p[] = "Hello World";
//	return p;
//}
////p被放到静态区里
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}