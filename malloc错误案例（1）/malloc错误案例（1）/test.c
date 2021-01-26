#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "Hello World");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "Hello World");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正2
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}

void Test(void)
{
	char* str = NULL;
	str=GetMemory(str);
	strcpy(str, "Hello World");
	printf(str);
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}
