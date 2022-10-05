#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//char* GetMemory()
//{
//	char*p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//char* GetMemory()
//{
//	char* p = (char*)malloc(40);
//	assert(p != NULL);
//
//	return p;
//}
//void Test()
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world.");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//
//struct type_a
//{
//	char a;
//	int b;
//	int arr[];
//};
//
//struct type_b
//{
//	char a;
//	int b;
//	int arr[0];
//};
//
//int main()
//{
//	printf("%zu",sizeof(struct type_a));
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//
//struct type_a
//{
//	char a;
//	int b;
//	int arr[];
//};
//
//int main()
//{
//	struct type_a* ptr = (struct type_a*)malloc(sizeof(struct type_a) + (10 * sizeof(int)));
//	struct type_a* p = NULL;
//	if (ptr == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		p = ptr;
//	}
//	p->a = 'a';
//	p->b = 18;
//	for (int i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//
//	free(p);
//	p = NULL;
//	ptr = NULL;
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct type_a
{
	char a;
	int b;
	int* arr;
};

int main()
{
	struct type_a* ptr = (struct type_a*)malloc(sizeof(struct type_a));
	struct type_a* p = NULL;
	if (ptr == NULL)
	{
		perror("malloc");
		return 1;
	}
	else
	{
		p = ptr;
	}
	int* pp = (int*)malloc(10 * sizeof(int));

	if (pp == NULL)
	{
		perror("malloc");
		return 1;
	}
	else
	{
		p->arr = pp;
	}

	p->a = 'y';
	p->b = 12;
	for (int i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}

	free(p);
	p = NULL;
	ptr = NULL;
	free(pp);
	pp = NULL;
	p->arr = NULL;

	return 0;
}