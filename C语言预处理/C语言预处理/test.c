#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	free(pf);
//	pf = NULL;
//	return 0;
//}

//定义宏该加的括号不能少
//#define SQUART(X) ((X)*(X))
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int ret = SQUART(5+1);
//	int a = 10 * DOUBLE(5);
//	printf("%d %d", ret,a);
//	return 0;
//}

//利用宏将变量插入到字符串中
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}

//把位于两边的符号合成一个符号
//#define CAT(X,Y) X##Y
//int main()
//{
//	int ricky20 = 2021;
//	printf("%d\n", CAT(ricky, 20));
//	return 0;
//}

//