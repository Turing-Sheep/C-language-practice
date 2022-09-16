#define  _CRT_SECURE_NO_WARNINGS 1
//
//    }
//}
//
//int main()
//{
//    //创建一个数组
//    int len = 0;
//    scanf("%d", &len);
//    int arr[5];
//    //给数组赋值
//    for (int i = 0; i < len; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    turn(arr, len);
//    for (int i = 0; i < len; i++)
//    {
//        printf("%d  ", arr[i]);
//    }
//
//
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "a";
//	printf("%d",strlen(arr));
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int len = 0;
//    scanf("%d", &len);
//    int arr[len];
//    int flag_one = 0;//判断是否为升序序列
//    int flag_two = 0;//判断是否为降序序列
//    for (int i = 0; i < len; i++)
//    {
//        if (i >= 1)
//        {
//            if (arr[i] > arr[i - 1])
//            {
//                flag_one = 1;
//            }
//            else if (arr[i] < arr[i - 1])
//            {
//                flag_two = 1;
//            }
//
//        }
//
//        if (flag_one + flag_two < 2)
//        {
//            printf("sorted\n");
//        }
//        else
//        {
//            printf("unsorted\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int count = 0;
//    int arr[count];
//    for (int i = 0; i < count; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int len = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < len - 1; i++)
//    {
//        for (int j = 0; j < len - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int count = 0;
//    scanf("%d", &count);
//    int arr[count] = { 0 };
//    int max = 0;
//    int min = 0;
//    for (int i = 0; i < count; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//        else if (arr[i] < min)
//        {
//            min = arr[i];
//        }
//    }
//    printf("%d", max - min);
//    return 0;
