#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//输入数组中元素的个数
//	int n = 0;
//	int arr_find[1000] = {0};
//	scanf("%d",&n);
//	while (n--)
//	{
//		int number = 0;
//		scanf("%d",&number);
//		arr_find[number]++;
//	}
//	for (int i = 0; i < 1000; i++)
//	{
//		if (arr_find[i] == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//char* my_strncpy(char* destination, const char* sourse, size_t num)
//{
//	assert(destination!=NULL);
//	assert(sourse!=NULL);
//	for (int i = 0; i < num; i++)
//	{
//		destination[i] = sourse[i];
//	}
//	destination[num] = '\0';
//	return destination;
//
//}
//
//int main()
//{
//	char str1[] = "xxxxxxxxxx";
//	char str2[] = "abcdefgh";
//	printf("%s", my_strncpy(str1,str2,3));
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strncat(char* destination, char* sourse, size_t num)
//{
//	assert(destination!=NULL);
//	assert(sourse!=NULL);
//
//	int len = strlen(destination);
//	
//	for (int i = 0; i < num; i++)
//	{
//		destination[i + len] = sourse[i];
//	}
//	return destination;
//
//}
//
//int main()
//{
//	char str1[100] = "abcdef";
//	char str2[] = "xxxxxx";
//	printf("%s",my_strncat(str1,str2,3));
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
int my_adoi(const char* str)
{
	assert(str!=NULL);
	char* temp = str;
	while (1)
	{
		if ((*temp <= '9') && (*temp >= '0'))
		{
			break;
		}
		temp++;
	}
	int arr[100000];
	int len = strlen(str);
	int i = 0;
	while ((i < len)&&(*temp!='\0'))
	{
		if (((*temp <= '9') && (*temp >= '0'))||(*temp=='+')||(*temp=='-'))
		{
			arr[i] = *temp - 48;
			temp++;
			i++;
		}
		else
		{
			break;
		}
	}
	int ret = 0;
	for (int j = i; j >= 0; j--)
	{
		ret += arr[j]*(pow(10,i-j));
		
	}
	return ret;
}

int main()
{
	char str[] = "   +123";
	int re = my_adoi(str);
	printf("%d",re);

	return 0;
}