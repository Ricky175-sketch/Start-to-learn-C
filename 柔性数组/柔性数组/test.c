#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//struct S
//{
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* str = (struct S*)realloc(ps, 44);
//	if (str != NULL)
//	{
//		ps = str;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	free(ps);
//	ps=NULL;
//	return 0;
//}

//柔性数组的另一种实现
struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int*)malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	int* ptr =(int*) realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 5; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}
