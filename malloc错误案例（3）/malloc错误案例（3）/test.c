#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free释放str指向的空间后，并不会把str置为NULL,str变为野指针
	if (str != NULL)
	{
		strcpy(str, "world");//已经free还使用，非法访问内存
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}
//改正
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}