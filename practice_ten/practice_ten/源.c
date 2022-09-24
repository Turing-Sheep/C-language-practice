#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void* my_memcpy(void* destination, void* source, size_t num)
//{
//	assert(destination != NULL);
//	assert(source != NULL);
//	for (int i = 0; i < num; i++)
//	{
//		*((char*)destination + i) = *((char*)source + i);
//	}
//	return destination;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	char* ret = my_memcpy(arr + 2, arr, 16);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void* my_memcpy(void* str1, const void* str2,size_t num)
//{
//	for (int i = num - 1; i >= 0; i--)
//	{
//		*((char*)str1 + i) = *((char*)str2 + i);
//	}
//	return str1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	char* ret = my_memcpy(arr, arr+2, 16);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<string.h>
//#include<assert.h>
//void* my_memcpy(void* str1, const void* str2, size_t num)
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
//	char* ret = my_memcpy(arr, arr + 2, 16);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int arr1[] = { 1,2,3,4,5,6,7,8 };
//	ret = my_memcpy(arr1 + 2, arr1, 16);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	char* ret = memcpy(arr, arr + 2, 16);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int arr1[] = { 1,2,3,4,5,6,7,8 };
//	ret = memcpy(arr1 + 2, arr1, 16);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1246;
//	int b = 34234;
//	if (memcmp(&a, &b,32) > 0)
//	{
//		printf("a>b\n");
//	}
//	else if (memcmp(&a, &b,32) < 0)
//	{
//		printf("a<b\n");
//	}
//	else
//	{
//		printf("a=b\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int line = 0;
//    scanf("%d", &line);
//    int cow = line + 1;
//    int arr[10][11] = { 0 };
//    //将第一列弄成1
//    for (int i = 0; i < line; i++)
//    {
//        arr[i][0] = 1;
//    }
//    //将每一列的末尾弄成1
//    for (int i = 0; i < line; i++)
//    {
//        arr[i][1 + i] = 1;
//    }
//    //填补2
//    arr[1][1] = 2;
//    //填写剩余数字
//    for (int i = 2; i < line; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//        }
//    }
//
//    //
//    for (int i = 0; i < line; i++)
//    {
//        if (i == 0)
//        {
//            printf("%d", arr[0][0]);
//            printf("\n");
//            continue;
//        }
//        for (int j = 0; j < 2 + i; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    //创建并输入两个数组
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int arr1[2];
//    int arr2[3];
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < b; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //创建两个指向两个数组首元素的指针
//    int* p1 = arr1;
//    int* p2 = arr2;
//    //
//    while ((p1 < arr1 + a) && (p2 < arr2 + b))
//    {
//        if (*p1 > *p2)
//        {
//            printf("%d ", *p2);
//            p2++;
//        }
//        else if (*p1 < *p2)
//        {
//            printf("%d ", *p1);
//            p1++;
//        }
//        else
//        {
//            printf("%d ", *p1);
//            p1++;
//            p2++;
//        }
//
//    }
//    if (p1 < arr1 + a)
//    {
//        for (int* i = p1; i < arr1 + a; i++)
//        {
//            printf("%d ", *i);
//        }
//    }
//    if (p2 < arr2 + b)
//    {
//        for (int* i = p2; i < arr2 + b; i++)
//        {
//            printf("%d ", *i);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    char arr[3][3];
//    for (int i = 0; i < a; i++)
//    {
//        arr[i][i] = '*';
//        arr[i][a - i-1] = '*';
//    }
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < a; j++)
//        {
//            if (arr[i][j] != '*')
//            {
//                arr[i][j] = ' ';
//            }
//            printf("%c", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int find_number(int(*arr)[], int* find, int* line, int cow)
//{
//    int n = 0;
//    int m = line - 1;
//    while (1)
//    {
//        if ((*(*arr + n) + m) < find)
//        {
//            n++;
//        }
//        else if ((*(*arr + n) + m) > find)
//        {
//            m--;
//        }
//        else
//        {
//            return 1;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[3][3];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int number = 0;
//    scanf("%d", &number);
//    int ret = find_number(arr, number, &n, &m);
//    if (ret == 1)
//    {
//        printf("已经找到该数字，该数字的下标为：%d %d\n", n, m);
//    }
//    else
//    {
//        printf("很遗憾，未能找到该数字！\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//char* left_move(char* arr, int k)
//{
//    while (k--)
//    {
//        char temp_char = arr[0];
//        int len = strlen(arr);
//        for (int i = 0; i < len - 1; i++)
//        {
//            arr[i] = arr[i + 1];
//        }
//        arr[len - 1] = temp_char;
//    }
//    return arr;
//
//}
//int main()
//{
//    char arr[] = "abcdefgh";
//    int k = 0;
//    scanf("%d", &k);
//    char* ret = left_move(arr, k);
//    printf("%s\n", ret);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF )
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n + 1];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", arr + i);
//    }
//    int m = 0;
//    scanf("%d", &m);
//    arr[n] = m;
//    for (int i = 0; i < n + 1; i++)
//    {
//        if (arr[i] >= m)
//        {
//            int temp = m;
//            for (int j = 0; j < n - i; j++)
//            {
//                arr[n + 1 - 1 - j] = arr[n + 1 - 1 - j - 1];
//            }
//            arr[i] = temp;
//            break;
//        }
//    }
//    for (int i = 0; i < n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
//#include<stdio.h>
//void swap_number(int* a, int* b)
//{
//    int temp = 0;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}
//int main()
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        if (b > a)
//        {
//            swap_number(&a,& b);
//        }
//        if (c > a)
//        {
//            swap_number(&a, &c);
//        }
//        if (c > b)
//        {
//            swap_number(&b, &c);
//        }
//
//        if (b + c <= a)
//        {
//            printf("Not a triangle!\n");
//        }
//        else
//        {
//            if (a == b || b == c)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else if (a == b && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//void swap_number(int* a, int* b)
//{
//    int temp = 0;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}
//int main()
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        if (b > a)
//        {
//            swap_number(&a, & b);
//        }
//        if (c > a)
//        {
//            swap_number(&a, &c);
//        }
//        if (c > b)
//        {
//            swap_number(&b, &c);
//        }
//
//        if (b + c <= a)
//        {
//            printf("Not a triangle!\n");
//        }
//        else
//        {
//            if (((a == b) && (a!=c)) || ((b == c) && (b != a)))
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else if (a == b && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//    }
//    return 0;
//}