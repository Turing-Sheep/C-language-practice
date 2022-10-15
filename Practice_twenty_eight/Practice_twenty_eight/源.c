#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[101];
//    int min = 100;
//    int loc_min = 0;
//    int gap_min = 0;
//    int max = 0;
//    int loc_max = 0;
//    int gap_max = 0;
//    double bin = n / 2;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", arr + i);
//        if (arr[i] > max)
//        {
//            max = arr[i];
//            loc_max = i;
//        }
//        if (arr[i] < min)
//        {
//            min = arr[i];
//            loc_min = i;
//        }
//    }
//    if (loc_min > bin)
//    {
//        gap_min = loc_min - 0;
//    }
//    else
//    {
//        gap_min = n - 1 - loc_min;
//    }
//    if (loc_max > bin)
//    {
//        gap_max = loc_max - 0;
//    }
//    else
//    {
//        gap_max = n - 1 - loc_max;
//    }
//    int ret = (gap_max > gap_min) ? (gap_max) : (gap_min);
//    printf("%d", ret);
//
//
//    return 0;
//}

//atoi()函数的实现
//#include<stdio.h>
//#include<assert.h>
//#include<ctype.h>
//#include<limits.h>
//int my_atoi(const char*str)
//{
//	assert(str!=NULL);
//	while (!isdigit(*str))
//	{
//		if (*str != '\0')
//		{
//			if ((*str == '-') || (*str == '+'))
//			{
//				break;
//			}
//			str++;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//	int flag = 1;
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if(*str=='-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long ret = 0;
//	while ((isdigit(*str))&&(*str!='\0'))
//	{
//		if ((ret < INT_MIN) || (ret > INT_MAX))
//		{
//			return 0;
//		}
//		ret = (ret * 10) + (*str - '0');
//		str++;
//	}
//	return ret*flag;
//}
//
//int main()
//{
//	char str[] = "    abcd-123";
//	int ret = my_atoi(str);
//	printf("%d",ret);
//	return 0;
//}