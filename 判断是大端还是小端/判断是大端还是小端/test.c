#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С�˴洢\n");
	}
	else
	{
		printf("��˴洢\n");
	}
	return 0;
}