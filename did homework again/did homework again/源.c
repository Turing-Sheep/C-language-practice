#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    char a = '0';
//    //����������ʵ�ֶ�������Ĵ���
//    //����1��scanf()�ķ���ֵ
//    while (scanf("%c", &a) == 1)
//    {
//        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
//        {
//            printf("%c is an alphabet.\n", a);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", a);
//        }
//        getchar();
//    }
//    //��������EOF��ʹ��
//    while (scanf("%c", &a) != EOF)
//    {
//        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
//        {
//            printf("%c is an alphabet.\n", a);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", a);
//        }
//        getchar();
//    }
//    //��������getchar������ʹ��
//    int chr = 0;
//    while ((chr = getchar()) != EOF)
//    {
//        if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'))
//        {
//            printf("%c is an alphabet.\n", chr);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n ", chr);
//        }
//    }
//
//
//    return 0;
//}
//#include<stdio.h>
//int main����
//{
//    int chr = 0;
//    while ((chr = getchar()) != EOF)
//    {
//        if (chr >= 'a' && a <= 'z')
//        {
//            printf("%c",chr + 32);
//        }
//        else if (chr >= 'A' && chr <= 'Z')
//        {
//            printf("%c",chr - 32);
//        }
//    }
//    return 0��
////}
//#include<stdio.h>
//#include<string.h>
////#include<ctype.h>//��Ҫ���ǰ���ͷ�ļ�
//int main()
//{
//    int chr = '0';
//    while ((chr = getchar())!= EOF)
//    {
//        if (chr >= 'a' && chr <= 'z')
//        {
//            int up_chr = toupper(chr);
//            printf("%c\n", up_chr);
//        }
//        else if (chr >= 'A' && chr <= 'Z')
//        {
//            int low_chr = tolower(chr);
//            printf("%c\n", low_chr);
//        }
//    }
//
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[] = { '0' };
//    gets(arr);
//    int len = strlen(arr);
//    for (int i = len - 1; i >= 0; i--)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[] = { '0' };
//    gets(arr);
//    int len = strlen(arr);
//    int right = len - 1;
//    int left = 0;
//    while (left < right)
//    {
//        char temp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = temp;
//        left++;
//        right--;
//    }
//    printf("%s", arr);
//    return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10001] ={ '0'};
    scanf("%[^\n]", arr);
    int len = strlen(arr);
    int right = len - 1;
    int left = 0;
    while (left < right)
    {
        char temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    printf("%s", arr);
    return 0;
}