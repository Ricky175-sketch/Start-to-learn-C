#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size ; i++)
	{
		if (strcmp(name, ps->data[i].name)==0)
		{
			return i;
		}
	}
	return -1;
}

void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* str = realloc(ps->data, (ps->capacity + 2)*sizeof(PeoInfo));
		if (str != NULL)
		{
			ps->data = str;
			ps->capacity += 2;
		}
		else
		{
			printf("%s\n", strerror(errno));
		}
	}
}

void InitContact(Contact* ps)
{
	ps->data = (PeoInfo*)malloc(DEFAUIT_SZ*sizeof(PeoInfo));
	if (ps == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAUIT_SZ;
}

void AddContact(Contact* ps)
{
	CheckCapacity(ps);

	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("��ӳɹ�\n");
}

void DelContact(Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ������ϵ������:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos==-1)
	{
		printf("ɾ������ϵ�˲����ڣ�");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ������:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("���ҵ���ϵ�˲����ڣ�");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n", ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tele, ps->data[pos].addr);
	}
}

void ModifyContact(Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ���ϵ������:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("�޸ĵ���ϵ�˲����ڣ�");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ���\n");
	}
}

//void SortContact(struct Contact* ps)

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
}

void DestroyContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}