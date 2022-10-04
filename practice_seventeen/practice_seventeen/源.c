#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<errno.h>
//int main()
//{
//	int* p = (int*)malloc(20000000000);
//	int* ptr;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		ptr = p;
//	}
//	//使用结束后：
//	free(p);//释放空间内存，这个函数一会儿讲
//	p = NULL;
//	ptr = NULL;
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int* ptr = p;
//	for (int i = 0; i < 10; i++)
//	{
//		ptr[i] = i;
//	}
//	free(ptr);
//	p = NULL;
//	ptr = NULL;
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);
//}