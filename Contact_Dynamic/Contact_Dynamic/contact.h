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
//ͨѶ¼����
typedef struct Contact
{
	struct PeoInfo* data;//���һ����Ϣ
	int size;//��¼��ǰ����Ԫ�ظ���
	int capacity;//��ǰ�������
}Contact;
//��������
//��ʼ��ͨѶ¼
void InitContact(Contact* ps);
//��������
void AddContact(Contact* ps);
//ɾ������
void DelContact(Contact* ps);
//��������
void SearchContact(const struct Contact* ps);
//�޸�����
void ModifyContact(Contact* ps);
//��������
//void SortContact(struct Contact* ps);
//��ʾ����
void ShowContact(const struct Contact* ps);
//�ͷ�
void DestroyContact(Contact* ps);