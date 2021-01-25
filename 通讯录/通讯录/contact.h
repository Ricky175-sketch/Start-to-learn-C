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
//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ����Ԫ�ظ���
};
//��������
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);
//��������
void AddContact(struct Contact* ps);
//ɾ������
void DelContact(struct Contact* ps);
//��������
void SearchContact(const struct Contact* ps);
//�޸�����
void ModifyContact(struct Contact* ps);
//��������
//void SortContact(struct Contact* ps);
//��ʾ����
void ShowContact(const struct Contact* ps);