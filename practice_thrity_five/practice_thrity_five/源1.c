#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int jian(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	char c;
//	while (n--)
//	{
//		char str[100];
//		char s1[100];
//		int a, b,ret,len;
//		gets(str);
//		sscanf(str, "%c %d %d", &c, &a, &b);
//		switch (c)
//		{
//			case '+':
//				ret=add(a,b);
//				sprintf(s1,"%d+%d=%d",a,b,ret);
//				len = strlen(s1);
//				printf("%s\n%d\n",s1,len);
//				break;
//
//			case '-':
//				ret = jian(a, b);
//				sprintf(s1, "%d-%d=%d", a, b, ret);
//				len = strlen(s1);
//				printf("%s\n%d\n", s1, len);
//				break;
//
//			case '*':
//				ret = mul(a, b);
//				sprintf(s1, "%d*%d=%d", a, b, ret);
//				len = strlen(s1);
//				printf("%s\n%d\n", s1, len);
//				break;
//
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[101];
//	scanf("%s", str);
//	_strupr(str);
//	printf("%s", str);
//	return 0;