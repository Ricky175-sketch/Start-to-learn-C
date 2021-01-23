#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "cr@qq.com";
	char* p = "@.";
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	char* ret =NULL;
	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;
}