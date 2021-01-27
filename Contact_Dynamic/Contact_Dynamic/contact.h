#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<memory.h>
#include<stdlib.h>
#include<errno.h>

#define DEFAUIT_SZ 3
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

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;
//通讯录类型
typedef struct Contact
{
	struct PeoInfo* data;//存放一个信息
	int size;//记录当前已有元素个数
	int capacity;//当前最大容量
}Contact;
//声明函数
//初始化通讯录
void InitContact(Contact* ps);
//增加数据
void AddContact(Contact* ps);
//删除数据
void DelContact(Contact* ps);
//查找数据
void SearchContact(const struct Contact* ps);
//修改数据
void ModifyContact(Contact* ps);
//排序数据
//void SortContact(struct Contact* ps);
//显示数据
void ShowContact(const struct Contact* ps);
//释放
void DestroyContact(Contact* ps);