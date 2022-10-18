#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void replaceSpace(char* str, int length)
//{
//    char temp[] = "%20";
//    char str_temp[1000];
//    strcpy(str_temp,str);
//    str = (char*)malloc(4 * length);
//    int k = 0;
//    for (int i = 0; i <= length; i++)
//    {
//        if (str_temp[i] == ' ')
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                str[k] = temp[j];
//                k++;
//            }
//        }
//        else
//        {
//            str[k] = str_temp[i];
//            k++;
//        }
//    }
//    return str;
//}
//
//int main()
//{
//	char str[] = "We Are Happy.";
//    int len = strlen(str);
//    replaceSpace(str,len);
//    printf("%s",str);
//	return 0;
//}
//#include <stdio.h>
//int aa[100], bb[100]; int cc[100];
//int max(int a, int b) {
//    if (a >= b) return a;
//    else return b;
//}
//int main() {
//    int num1 = 0, num2 = 0;
//    int a, b;
//    scanf("%d%d", &a, &b);
//    while (a > 0) {
//        aa[++num1] = a % 2;
//        a /= 2;
//    }
//    while (b > 0) {
//        bb[++num2] = b % 2;
//        b /= 2;
//    }
//    int max_num = max(num1, num2); int jw = 0;
//    for (int i = 1; i <= max_num; i++) {
//        cc[i] = (aa[i] + bb[i] + jw) % 10;
//        jw = (aa[i] + bb[i]) / 10;
//    }
//    if (jw != 0) {
//        cc[++max_num] = jw;
//    }
//    for (int i = max_num; i >= 1; i--) printf("%d", cc[i]);
//    //printf("%d\n",ans1+ans2);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[1002][1002] = { 0 };
//    while (m--)
//    {
//        int x, y;
//        scanf("%d %d", &x, &y);
//        arr[x][y] = 1;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            arr[i][j] = arr[i - 1][j] + arr[i][j - 1] +
//                arr[i][j + 1] + arr[i + 1][j];
//        }
//    }
//    int is_pollute = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            if (arr[i][j] <= 1)
//            {
//                is_pollute = 0;
//                printf("NO");
//                return 0;
//            }
//        }
//    }
//    printf("YES");
//    return 0;
//}
#include<stdio.h>
int main()
{
    int sum[1000] = { 0 };
    int n = 0;
    scanf("%d", &n);
    int arr[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum[arr[i]] = 1;
    }

    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (sum[i] == 1)
        {
            count++;
        }
    }

    printf("%d\n", count);
    for (int i = 0; i < 1000; i++)
    {
        if (sum[i] == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}