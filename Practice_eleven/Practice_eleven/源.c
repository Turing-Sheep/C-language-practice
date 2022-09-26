#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int arr[7];
//    int sum = 0;
//    while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) == 7)
//    {
//        for (int i = 0; i < 7 - 1; i++)
//        {
//            for (int j = 0; j < 7 - 1 - i; j++)
//            {
//                if (arr[j] > arr[j + 1])
//                {
//                    int temp = arr[j];
//                    arr[j] = arr[j + 1];
//                    arr[j + 1] = temp;
//                }
//            }
//        }
//        for (int i = 1; i < 6; i++)
//        {
//            sum += arr[i];
//        }
//        double average_score = sum / 5.0;
//        printf("%.2lf\n", average_score);
//    }
//    
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) == 1)
//    {
//        switch (a)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[7];
//    while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) == 7)
//    {
//        int sum = 0;
//        int min = 100;
//        int max = 0;
//        for (int i = 0; i < 7; i++)
//        {
//            if (arr[i] > max)
//            {
//                max = arr[i];
//            }
//
//            if (arr[i] < min)
//            {
//                min = arr[i];
//            }
//            sum += arr[i];
//        }
//
//        double average_score = (sum - max - min) / 5.0;
//        printf("%.2lf\n", average_score);
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int line = 0;
//    scanf("%d", &line);
//    int cow = line + 1;
//    int arr[5][6] = { 0 };
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
//    //打印杨辉三角
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
//#include<stdlib.h>
//int my_cmp(void* num1, void* num2)
//{
//	int ret = *((int*)num1) - *((int*)num2);
//	return ret;
//}
//int main()
//{
//	int arr[14] = {2,3,4,5,3,2,12,34,5,5,6,6,7,7};
//	qsort(arr,14,4,&my_cmp);
//	for (int i = 0; i < 14; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//#include<stdio.h>
//
//int my_int_cmp(void* num1, void* num2)
//{
//	int ret = *((int*)num1) - *((int*)num2);
//	return ret;
//}
//
//void my_qsort(void* base, int num, int size, int(*cmp)(void*number1, void*number2))
//{
//	for (int i = 0; i < num-1; i++)
//	{
//		for (int j = 0; j < num - 1 - i; j++)
//		{
//			int ret = (*cmp)((char*)base+j*size,(char*)base+(j+1)*size);
//			if (ret > 0)
//			{
//				for (int k = 0; k < size; k++)
//				{
//					char temp = *((char*)base + j * size + k);
//					*((char*)base + j * size + k) = *((char*)base + (j + 1) * size + k);
//					*((char*)base + (j + 1) * size + k) = temp;
//
//				}
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[14] = { 2,3,4,5,3,2,12,34,5,5,6,6,7,7 };
//	my_qsort(arr, 14, 4, &my_int_cmp);
//	for (int i = 0; i < 14; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int find_number(int(*arr)[5], int find, int* line, int* cow)
//{
//    int n = *line;
//    int m = *cow;
//    *line = 0;
//    *cow = m - 1;
//    while ((*line<n)&&(*cow>=0))
//    {
//        if (arr[*line][*cow] < find)
//        {
//            (*line)++;
//        }
//        else if (arr[*line][*cow] > find)
//        {
//            (*cow)--;
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
//    int n = 5;
//    int m = 5;
//    int arr[5][5];
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            arr[i][j] = count;
//            count++;
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("%2d ",arr[i][j]);
//        }
//        printf("\n");
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
//    int len = strlen(arr);
//    k %= len;
//    while (k--)
//    {
//        char temp_char = arr[0];
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
//    printf("%s\n",arr);
//    int k = 0;
//    scanf("%d", &k);
//    char* ret = left_move(arr, k);
//    printf("%s\n", ret);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void reverse(char* arr, int left, int right)
//{
//    while (left <= right)
//    {
//        char temp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = temp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[] = "abcdefgh";
//    printf("%s\n", arr);
//    int len = strlen(arr);
//    int k = 0;
//    scanf("%d", &k);
//    reverse(arr, 0, k - 1);
//    reverse(arr, k, len - k + 1);
//    reverse(arr, 0, len - 1);
//    printf("%s\n", arr);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//char* left_move(char* arr, int k)
//{
//    int len = strlen(arr);
//    k %= len;
//    while (k--)
//    {
//        char temp_char = arr[0];
//        for (int i = 0; i < len - 1; i++)
//        {
//            arr[i] = arr[i + 1];
//        }
//        arr[len - 1] = temp_char;
//    }
//    return arr;
//}
//
//int is_left_move_func(const char* str1, char* str2)
//{
//    assert(str1 != NULL);
//    assert(str2 != NULL);
//    int len1 = strlen(str1);
//    int len2 = strlen(str2);
//
//    if (len1 != len2)
//    {
//        return 0;
//    }
//    else
//    {
//        for (int i = 0; i < len1; i++)
//        {
//            if (strcmp(str1, left_move(str2, i)) == 0)
//            {
//                return 1;
//            }
//        }
//    }
//
//    return 0;
//}
//
//int main()
//{
//    char str1[20] = { 0 };
//    char str2[20] = { 0 };
//    int flag = 0;
//    scanf("%s", str1);
//    scanf("%s", str2);
//
//    int ret = is_left_move_func(str1, str2);
//    if (ret == 1)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//int is_left_move(char* str1, char* str2)
//{
//    assert(str1 != NULL);
//    assert(str2 != NULL);
//    int len1 = strlen(str1);
//    int len2 = strlen(str2);
//    if (len1 != len2)
//    {
//        return 0;
//    }
//    else
//    {
//        strcat(str2, str2);
//        char* ret = strstr(str2, str1);
//        if (ret != NULL)
//        {
//            return 1;
//        }
//        else
//        {
//            return 0;
//        }
//    }
//}
//
//int main()
//{
//    char str1[200] = { 0 };
//    char str2[200] = { 0 };
//    scanf("%s", str1);
//    scanf("%s", str2);
//    int ret = is_left_move(str1, str2);
//    if (ret == 1)
//    {
//        printf("YES.\n");
//    }
//    else
//    {
//        printf("NO.\n");
//    }
//    return 0;
//}
