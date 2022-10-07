#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//    assert(str != NULL);
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int main()
//{
//    char str[] = "abcdef";
//    printf("%d",my_strlen(str));
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* destination, const char* resourse)
//{
//	assert(destination != NULL);
//	assert(resourse != NULL);
//	int len = strlen(resourse);
//	for (int i = 0; i <= len; i++)
//	{
//		*(destination + i) = *(resourse + i);
//	}
//	return destination;
//
//}
//int main()
//{
//	char str[] = "absfd";
//	char str2[] = "123";
//	printf("%s", my_strcpy(str, str2));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 != '\0' || *str2 != '\0')
//	{
//		if (*str1 != *str2)
//		{
//			return *str1 - *str2;
//		}
//		str1++;
//		str2++;
//	}
//	return 0;
//}﻿
//; int main()
//{
//	char str1[] = "abcd";
//	char str2[] = "ad";
//	char str3[] = "abcc";
//	char str4[] = "abcc";
//	printf("%d\n",my_strcmp(str1,str2));
//	printf("%d\n", my_strcmp(str1, str3));
//	printf("%d\n", my_strcmp(str3, str4));
//	printf("\n");
//	printf("%d\n", strcmp(str1, str2));
//	printf("%d\n", strcmp(str1, str3));
//	printf("%d\n", strcmp(str3, str4));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//char* my_strcat(char* destination, const char* resourse)
//{
//    assert(destination != NULL);
//    assert(resourse != NULL);
//    int addr_d = strlen(destination);
//    int addr_s = strlen(resourse);
//    for (int i = addr_d; i <= (addr_d+addr_s); i++)
//    {
//        destination[i] = resourse[i-addr_d];
//    }
//    return destination;
//}
//int main()
//{
//    char str[12] = "abcd";
//    char str1[] = "1234";
//    printf("%s", my_strcat(str, str1));
//    return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//char* my_strstr(const char* destination, const char* resourse)
//{
//    assert(destination != NULL);
//    assert(resourse != NULL);
//    char* p_d = destination;
//    char* p_r = resourse;
//    int len = strlen(resourse);
//    while (*p_d != '\0')
//    {
//        if (*p_d == *resourse)
//        {
//            int seam_num = 0;
//            for (int i = 0; i < len; i++)
//            {
//                if (p_d[i] == resourse[i])
//                {
//                    seam_num++;
//                }
//            }
//            if (seam_num == len)
//            {
//                return p_d;
//            }
//        }
//        else
//        {
//            p_d++;
//        }
//    }
//    return NULL;
//
//}
//int main()
//{
//    char str1[] = "abcsdef";
//    char str2[] = "abc";
//    printf("%s", my_strstr(str1, str2));
//    return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//void* my_memcpy(void* destination,void*resourse,int num)
//{
//	assert(destination!=NULL);
//	assert(resourse!=NULL);
//	for (int i = 0; i < num; i++)
//	{
//		*((char*)destination + i) = *((char*)resourse + i);
//	}
//	return destination;
//
//}
//
//int main()
//{
//	char str1[] = "acsdsadsdff";
//	char str2[] = "12344";
//	printf("%s",my_memcpy(str1,str2,5));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void* my_memmove(void* str1, const void* str2, size_t num)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	if (str2 < str1)
//	{
//		for (int i = num - 1; i >= 0; i--)
//		{
//			*((char*)str1 + i) = *((char*)str2 + i);
//		}
//		return str1;
//	}
//	else
//	{
//		for (int i = 0; i < num; i++)
//		{
//			*((char*)str1 + i) = *((char*)str2 + i);
//		}
//		return str1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	char* ret = my_memmove(arr, arr + 2, 16);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int arr1[] = { 1,2,3,4,5,6,7,8 };
//	ret = my_memmove(arr1 + 2, arr1, 16);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int my_cmp(void* num1, void* num2)
//{
//    int ret = *((int*)num1) - *((int*)num2);
//    return ret;
//}
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d", &n);
//    int arr[100];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int arr1[100];
//    for (int i = 0; i < n; i++)
//    {
//        int seam = 0;
//        for (int j = 0; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                seam++;
//            }
//        }
//        if (seam == 1)
//        {
//            arr1[k] = arr[i];
//            k++;
//        }
//    }
//    qsort(arr1, k + 1, 4, my_cmp);
//    for (int i = 0; i < k + 1; i++)
//    {
//        printf("%d\n", arr1[i]);
//    }
//
//
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        char arr[5][9];
        for (int i = 0; i < n; i++)
        {
            for (int j = 2 * n - 1 - 1; j >= 0; j--)
            {
                int num = 0;
                if ((j % 2 == 0 )&&( num < i))
                {
                    arr[i][j] = '*';
                    num++;
                }
                else
                {
                    arr[i][j] = ' ';
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                printf("%c", arr[i][j]);
            }
            printf("\n");
        }
    }
}