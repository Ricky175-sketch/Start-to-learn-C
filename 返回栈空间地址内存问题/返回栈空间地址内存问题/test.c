#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

char* GetMemory(void)
{
	 char p[] = "Hello World";
	return p;
}
//p��ջ������������GetMemory�ͱ������ˣ���˲�Ҫ���ⷵ��ջ���ĵ�ַ
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
//�Ƿ������ڴ�
int main()
{
	Test();
	return 0;
}
//����
//char* GetMemory(void)
//{
//	static char p[] = "Hello World";
//	return p;
//}
////p���ŵ���̬����
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