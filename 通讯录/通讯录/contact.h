#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<memory.h>

#define MAX 1000
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DELETE,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放一个信息
	int size;//记录当前已有元素个数
};
//声明函数
//初始化通讯录
void InitContact(struct Contact* ps);
//增加数据
void AddContact(struct Contact* ps);
//删除数据
void DelContact(struct Contact* ps);
//查找数据
void SearchContact(const struct Contact* ps);
//修改数据
void ModifyContact(struct Contact* ps);
//排序数据
//void SortContact(struct Contact* ps);
//显示数据
void ShowContact(const struct Contact* ps);