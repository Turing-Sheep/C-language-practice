#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	FILE*pf = fopen("Text.txt","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("Text.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	//ʹ���ļ�
//	//.......
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//fputc��ʹ��
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("Text.txt","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//
//	��26����ĸд���ļ���
//	for (int i = 0; i < 26; i++)
//	{
//		fputc('a'+i,pf);
//	}
//
//
//
//	fclose(pf);
//	pf = NULL;
//
//}
//
//fgetc��ʹ��
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("Text.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	���ļ��е�26����ĸ��ȡ���������Ҵ�ӡ����Ļ�ϡ�
//	for (int i = 0; i < 26; i++)
//	{
//		int c = fgetc(pf);
//		printf("%c", c);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//����˳��д�ı���
//#include<stdio.h>
//int main()
//{
//	���ļ�
//	FILE* pf = fopen("test.txt", "w");
//
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	���ļ�������ַ���
//	fputs("hello\n",pf);
//	fputs("denny\n",pf);
//	�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
// 
//����˳���ȡ�ı���
//#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ�-һ��һ�ж�
//	char str[100] = "##################";//����һ��������մ��ļ��ж�ȡ������
//	fgets(str,7,pf);
//	//����ȡ�������������Ļ��
//	printf("%s",str);
//	//����ȡ�������������Ļ��
//	fgets(str, 7, pf);
//	printf("%s", str);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
// 
//#include<stdio.h>
////дһ���ṹ�������
//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	//��һ���ļ�
//	FILE*pf=fopen("Test.txt","w");
//	if (pf==NULL)
//	{
//		perror("fopen");
//	}
//	//����һ���ṹ�����
//	struct stu S = {"denny",18,95.5f};
//	//���ṹ�����������ļ���
//	fprintf(pf,"%s %d %.2f",S.name,S.age,S.score);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu s = {0};
//	FILE* pf=fopen("test.txt","r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//	}
//	//���ļ��е����ݶ�ȡ����
//	fscanf(pf,"%s %d %f",s.name,&(s.age),&(s.score));
//	//����ȡ���������ݴ�ӡ����Ļ��
//	printf("%s %d %.2f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 0;
	fscanf(stdin, "%d", &a);
	fprintf(stdout, "%d", a);
	return 0;
}