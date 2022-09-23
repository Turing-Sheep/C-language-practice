#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char str1[] = "aaaaaaaaaaa";
//	char str2[] = "xxxxxxxxxx";
//	printf("%s\n", strncpy(str1, str2, 3));
//	return 0;
//}
//int main()
//{
//	char str1[20] = "aaaa";
//	char str2[] = "xxxxxxxxx";
//	printf("%s\n", strncat(str1, str2, 4));
//	return 0;
//}
//int main()
//{
//	char str1[20] = "aaaaaaaaaaa";
//	char str2[] = "xxxxx";
//	printf("%d\n", strncmp(str1, str2, 3));
//	return 0;
//}
//int main()
//{
//	char str1[] = "abcdefgh";
//	char str2[] = "cde";
//	char* ret = strstr(str1, str2);
//	if (ret != NULL)
//	{
//		printf("ÒÑ¾­ÕÒµ½×Ö·û´®¡£%s\n", ret);
//	}
//	else
//	{
//		printf("Î´ÕÒµ½¸Ã×Ö·û´®£¡\n");
//	}
//	return 0;
//}
//const char* strstr(const char* str1,const char* str2)
//{
//
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//
//	while (*str1 != '\0')
//	{
//		while (*str1++ != *str2++)
//		{
//			;
//		}
//
//		int count = 0;
//		char* p1 = str1;
//		char* p2 = str2;
//		for (int i = 0; i < strlen(str2); i++)
//		{
//
//			if (*p1 == *p2)
//			{
//				count++;
//			}
//		}
//		if (count == strlen(str2))
//		{
//			return str1;
//		}
//	}
//	return NULL;
//
//}
//int main()
//{
//	char str1[] = "abcdefg";
//	char str2[] = "bcd";
//	printf("%s\n", my_strstr(str1, str2));
//}
char* my_strstr(const char* str1, const char* str2)
{
	assert(*str1!='\0');
	assert(*str2!='\0');
	while (*str1 != '\0')
	{
		while (*str1 != *str2)
		{
			str1++;
		}

		int count = 0;
		char* p1 = str1;
		char* p2 = str2;

		for (int i = 0; i < strlen(str2); i++, p2++, p1++)
		{
			if (*p1 == *p2)
			{
				count++;
			}
		}
		if (count == strlen(str2))
		{
			return str1;
		}

		str1++;
	}
	return NULL;

}
int main()
{
	char str1[] = "abcdefg";
	char str2[] = "bcd";
	printf("%s\n", my_strstr(str1, str2));
}