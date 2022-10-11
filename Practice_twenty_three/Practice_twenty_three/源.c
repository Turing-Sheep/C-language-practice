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
//	//打开文件
//	FILE* pf = fopen("Text.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	//使用文件
//	//.......
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//fputc的使用
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("Text.txt","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//
//	将26个字母写入文件中
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
//fgetc的使用
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("Text.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	将文件中的26个字母读取回来，并且打印在屏幕上。
//	for (int i = 0; i < 26; i++)
//	{
//		int c = fgetc(pf);
//		printf("%c", c);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//按照顺序写文本行
//#include<stdio.h>
//int main()
//{
//	打开文件
//	FILE* pf = fopen("test.txt", "w");
//
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	向文件中输出字符串
//	fputs("hello\n",pf);
//	fputs("denny\n",pf);
//	关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
// 
//按照顺序读取文本行
//#include<stdio.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件-一行一行读
//	char str[100] = "##################";//创建一个数组接收从文件中读取的数据
//	fgets(str,7,pf);
//	//将读取的数据输出到屏幕上
//	printf("%s",str);
//	//将读取的数据输出到屏幕上
//	fgets(str, 7, pf);
//	printf("%s", str);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
// 
//#include<stdio.h>
////写一个结构体的数据
//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	//打开一个文件
//	FILE*pf=fopen("Test.txt","w");
//	if (pf==NULL)
//	{
//		perror("fopen");
//	}
//	//创建一个结构体变量
//	struct stu S = {"denny",18,95.5f};
//	//将结构体变量输出到文件中
//	fprintf(pf,"%s %d %.2f",S.name,S.age,S.score);
//	//关闭文件
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
//	//将文件中的数据读取回来
//	fscanf(pf,"%s %d %f",s.name,&(s.age),&(s.score));
//	//将读取回来的数据打印到屏幕上
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