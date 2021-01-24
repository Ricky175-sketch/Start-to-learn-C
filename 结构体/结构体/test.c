#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//设计结构体时尽量让占用空间小的靠在一起，减少空间的浪费
//结构体的使用
//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	int a;
//	struct T st;
//	char arr[10];
//	double b;
//	char c;
//};
//
//int main()
//{
////	struct S s = { 18, {54.1,20}, "Ricky", 3.14, 'C' };
//	struct S s;
//	s.a = 18;
//	//printf("%d %s %lf %c\n", s.a, s.arr, s.b, s.c);
//	//printf("%.2lf %hd\n", s.st.weight, s.st.age);
//	printf("%d\n", s.a);
//	return 0;
//}
//

//#pragma pack(4)//设置默认对其数为4
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//取消设置默认对其数
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//结构体调用函数
struct S 
{
	char c;
	int b;
};
void Init(struct S* ps)
{
	ps -> b = 18;
	ps -> c = 'C';
}
void Print(struct S* ps)
{
	printf("%d %c\n", ps->b, ps->c);
}
int main()
{
	struct S s = { 0 };
	Init(&s);
	Print(&s);//结构体传参尽量传地址
	return 0;
}