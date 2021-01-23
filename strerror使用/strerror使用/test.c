#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
int main()
{
	//char* str = strerror(errno);
	//printf("%s", str);
	//return 0;
	FILE* fp = fopen("test.txt","r");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("file open success\n");
	}
	return 0;
}