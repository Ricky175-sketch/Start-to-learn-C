#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//fputcд��һ���ֽ�
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('H', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fgetc��ȡһ���ֽ�
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fgets��ȡһ��
//int main()
//{
//	char buff[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(buff, 1024, pf);
//	printf("%s", buff);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fputsд��һ��
//int main()
//{
//	char buff[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputs("Hello", pf);
//	fputs("Ricky", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��ʽ����д�ļ�
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 10, 3.14f, "Ricky" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��ʽ���ض��ļ�
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fwrite������д
//struct S
//{
//	char name[10];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s={ "����", 20, 50.5 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fread�����ƶ�
//struct S
//{
//	char name[10];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S tmp = {0};
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fseek�����ȡ
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fseek(pf, 4, SEEK_CUR);//SEEK_SET��SEEK_CUR��SEEK_END
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell��λָ��,����ָ��ƫ����
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fseek(pf, 4, SEEK_CUR);
//	int pos=ftell(pf);
//	printf("%d", pos);
//	fclose(pf);
//	pf = NULL;
//	return  0;
//}

//rewindָ��ص���ʼλ��
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ftell(pf));
//	rewind(pf);
//	printf("%d", ftell(pf));
//	return 0;
//}

//ferror/feof
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test fail");
		return 0;
	}
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}
	printf("%d", ftell(pf));
	return 0;
}