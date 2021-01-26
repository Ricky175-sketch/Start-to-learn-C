#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	int* ptr = realloc(p, 40);
	if (ptr != NULL)
	{
		p = ptr;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
	}
	free(p);
	p = NULL;
	return 0;
}