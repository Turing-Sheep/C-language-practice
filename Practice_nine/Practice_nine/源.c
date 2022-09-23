#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[] = "123456@163.com";
//	char str1_[200] = { 0 };
//	strcpy(str1_, str1);
//	char str2[] = "@.";
//	char* ret = 0;
//	ret = strtok(str1_, str2);
//	printf("%s\n", ret);
//	ret = strtok(NULL, str2);
//	printf("%s\n", ret);
//	ret = strtok(NULL, str2);
//	printf("%s\n", ret);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("code.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	return 0;
//}
#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* destination, void* source, size_t num)
{
	assert(destination != NULL);
	assert(source != NULL);
	for (int i = 0; i < num; i++)
	{
		*((char*)destination + i) = *((char*)source + i);
	}
	return destination;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memcpy(arr, arr2, 20);
	int size_1 = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size_1; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	float arr1[] = { 1.0f,2.0f,3.0f,4.0f };
	float arr3[5] = { 0.0 };
	my_memcpy(arr1, arr3, 8);
	int size_2 = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < size_2; i++)
	{
		printf("%f ", arr1[i]);
	}
	return 0;
}