#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//
//
//void turn_char(char* arr, int len, int k)
//{
//	char arr_temp[2];
//	for (int i = 0; i < k; i++)
//	{
//		arr_temp[i] = arr[i];
//	}
//	for (int i = 0; i < len - k; i++)
//	{
//		arr[i] = arr[i + k];
//	}
//	for (int i = 0; i < k; i++)
//	{
//		arr[len - k + i] = arr_temp[i];
//	}
//}
//int jude_if_turn(const char*arr1,const char*arr2)
//{
//
//
//}
//int main()
//{
//	char arr[30];
//	scanf("%s",arr);
//	turn_char(arr, strlen(arr), 2);
//	printf("%s\n",arr);
//	char arr1[100] = { '0' };
//	strcpy(arr1,arr);
//	int ret = jude_if_turn(arr, arr1);
//	printf("%d",ret);
//	return 0;
//}
//void turn_number(int* arr, int len)
//{
//    int temp_arr_1[len];
//    int temp_arr_0[len];
//    int count_1 = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (arr[i] % 2 == 1)
//        {
//            temp_arr_1[i] = arr[i];
//            count_1++;
//        }
//        if (arr[i] % 2 == 0)
//        {
//            temp_arr_0[i] = arr[i];
//        }
//    }
//    for (int i = 0; i < count; i++)
//    {
//        arr[i] = temp_arr_1[i];
//    }
//    for (int i = 0; i < len - count; i++)
//    {
//        arr[i + count] = temp_arr_2[i];
//    }
//}
//
//int main()
//{
//    int arr[10];
//    for (int i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//    }
//    printf("%s\n", arr);
//    turn_number(arr, sizeof(arr));
//    printf("%s\n", arr);
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	//����һ������
//
//	int arr[line][cow];
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < cow; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//������Ҫ���ҵ�����
//	int Find_number = 0;
//	scanf("%d", &Find_number);
//	
//
//
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int money = 0;//��ʼ��Ǯ��
//	scanf("%d", &money);
//    int count = money / 1;//��Ǯ�����ƿ��
//    int empty = count;//��ƿ�ӵ�����
// 
//    while (empty != 1)
//    {
//        count += empty / 2;
//        empty = (empty / 2) +( empty % 2);
//
//    }
//    printf("%d", count);
//
//
//    return 0;
//}
//#include<stdio.h>
//
//void turn_number(int* arr, int len)
//{
//    int temp_arr_1[10] = {0};//��¼����������
//    int temp_arr_0[10] = {0};//��¼ż��������
//    int count_1 = 0;//��¼�����ĸ���
//    int count_2 = 0;//��¼ż���ĸ���
//    //����ԭ���飬�ֱ�洢������ż��
//    for (int i = 0; i < len; i++)
//    {
//        if (arr[i] % 2 == 1)
//        {
//            temp_arr_1[count_1] = arr[i];
//            count_1++;
//        }
//        if (arr[i] % 2 == 0)
//        {
//            temp_arr_0[count_2] = arr[i];
//            count_2++;
//        }
//    }
//    //�ϲ���������
//    for (int i = 0; i < count_1; i++)
//    {
//        arr[i] = temp_arr_1[i];
//    }
//    for (int i = 0; i < len - count_1; i++)
//    {
//        arr[i + count_1] = temp_arr_0[i];
//    }
//}
//
//int main()
//{
//    int arr[10] = {0};
//    for (int i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//    turn_number(arr, sizeof(arr)/sizeof(arr[0]));
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
#include<stdio.h>

void turn(int* arr, int len)
{
    int* p1 = arr;
    int* p2 = &arr[len - 1];
    while (p1 <= p2)
    {
        //��p1ָ��ż��
        while (((*p1) % 2 == 1) && p1 < &arr[len - 1])
        {
            p1++;
        }
        //��p2ָ������
        while (((*p2) % 2 == 0) && p2 > &arr[0])
        {
            p2--;
        }
        //�����ߵ�λ�ú���ʱ���Զ��ߵ�ֵ���н�����
        if (p1 < p2)
        {
            int temp = *p1;
            *p1 = *p2;
            *p2 = temp;
        }


    }
}

int main()
{
    //����һ������
    int len = 0;
    scanf("%d", &len);
    int arr[5];
    //�����鸳ֵ
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    turn(arr, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d  ", arr[i]);
    }


    return 0;
}