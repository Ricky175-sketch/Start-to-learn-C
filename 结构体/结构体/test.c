#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ƽṹ��ʱ������ռ�ÿռ�С�Ŀ���һ�𣬼��ٿռ���˷�
//�ṹ���ʹ��
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

//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//ȡ������Ĭ�϶�����
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//�ṹ����ú���
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
	Print(&s);//�ṹ�崫�ξ�������ַ
	return 0;
}