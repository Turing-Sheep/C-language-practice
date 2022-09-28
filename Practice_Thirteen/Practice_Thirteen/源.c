#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    int t = 0;
//    scanf("%d", &t);
//    while (t--)
//    {
//        char name[100] = { '0' };
//        scanf("%s", name);
//
//        if (strcmp(name, "laiyang") == 0)
//        {
//            printf("Brilliant courage\n");
//        }
//
//
//        if (strcmp(name, "aidi") == 0)
//        {
//            printf("A warm comfort\n");
//        }
//        if (strcmp(name, "longlong") == 0)
//        {
//            printf("A stroke of luck\n");
//        }
//        if (strcmp(name, "laodi") == 0)
//        {
//            printf("The friendship of being together\n");
//        }
//        if (strcmp(name, "T - 2000") == 0)
//        {
//            printf("Full of hope for the future\n");
//        }
//        if (strcmp(name, "baobaotree") == 0)
//        {
//            printf("A comfortable rest\n");
//        }
//
//    };
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    int t = 0;
//    scanf("%d", &t);
//    char* name[2];
//
//    for (int i = 0; i < t; i++)
//    {
//        char str[30];
//        scanf("%s", str);
//        if (strcmp(str, "laiyang") == 0)
//        {
//            name[i] = "Brilliant courage\n";
//        }
//        else if (strcmp(str, "aidi") == 0)
//        {
//            name[i] = "A warm comfort\n";
//        }
//        else if (strcmp(str, "longlong") == 0)
//        {
//            name[i] = "A stroke of luck\n";
//        }
//        else if (strcmp(str, "laodi") == 0)
//        {
//            name[i] = "The friendship of being together\n";
//        }
//        else if (strcmp(str, "T - 2000") == 0)
//        {
//            name[i] = "Full of hope for the future\n";
//        }
//        else if (strcmp(str, "baobaotree") == 0)
//        {
//            name[i] = "A comfortable rest\n";
//        }
//
//    }
//    for (int i = 0; i < t; i++)
//    {
//        printf("%s", name[i]);
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int arr[3][3];
//    int max = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d",&arr[i][j]);
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//            }
//        }
//
//    }
//    printf("%d",max);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int t = 0;
//    scanf("%d", &t);
//    long long a[2] = { 0 };
//    long long b[2] = { 0 };
//    long long sum[2] = { 0 };
//    for (int i = 0; i < t; i++)
//    {
//        scanf("%lld %lld", &a[i], &b[i]);
//        sum[i] = a[i] + b[i];
//    }
//    for (int i = 0; i < t; i++)
//    {
//        printf("Case %d:\n", i + 1);
//        printf("%lld + %lld = %lld\n", a[i], b[i], sum[i]);
//        printf("\n");
//
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int sum = 0;
//    int arr[2][3];
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            sum += arr[i][j];
//        }
//    }
//    printf("%d", sum);
//
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[100] = {'0'};
//    gets(arr);
//    if (strcmp(arr, "shi xian") == 0)
//    {
//        printf("li bai\n");
//    }
//    else if (strcmp(arr, "shi sheng") == 0)
//    {
//        printf("du fu");
//    }
//    else if (strcmp(arr, "shi kuang") == 0)
//    {
//        printf("he zhi zhang");
//    }
//    else if (strcmp(arr, "shi mo") == 0)
//    {
//        printf("bai ju yi\n");
//    }
//    else if (strcmp(arr, "shi fo") == 0)
//    {
//        printf("wang wei\n");
//    }
//    else if (strcmp(arr, "shi gui") == 0)
//    {
//        printf("li he");
//    }
//    else if (strcmp(arr, "shi shen") == 0)
//    {
//        printf("su shi");
//    }
//    else if (strcmp(arr, "shi hao") == 0)
//    {
//        printf("liu yu xi");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    for (int i = n - 1; i >= 0; i--)
//    {
//       
//        if (i == 0)
//        {
//            printf("0=");
//        }
//        else
//            printf("%d+", i);
//        sum += i;
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (6 <= n && n <= 16)
//    {
//        printf("50w");
//    }
//    else if (16 < n && n <= 26)
//    {
//        printf("1450");
//    }
//    else if (26 < n && n <= 36)
//    {
//        printf("jing wai shi li");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str[100] = {'0'};
//    gets(str);
//    int flag = 0;
//    for (int i = 0; i < strlen(str); i++)
//    {
//        if (i <= 1)
//        {
//            if (str[i] == ' ')
//            {
//                flag++;
//            }
//        }
//        else
//        {
//            if (!(str[i] >= 'a' && str[i] <= 'z'))
//            {
//                flag = 0;
//                break;
//            }
//        }
//
//
//    }
//    if (flag == 2)
//    {
//        printf("haoba");
//    }
//    else
//    {
//        printf("chongxie");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str[100] = {0};
//    scanf("%s", str);
//    char str1[100] = {0};
//    int len = strlen(str);
//    for (int i = len - 1; i >= 0; i--)
//    {
//        str1[len-1-i] = str[i];
//    }
//    int ret = strcmp(str, str1);
//
//    if (len % 2 == 1)
//    {
//        printf("NO");
//    }
//    else
//    {
//        if (ret == 0)
//        {
//            printf("YES");
//        }
//        else
//        {
//            printf("NO");
//        }
//    }
//
//    return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] = { 0 };
    scanf("%s", str);
    char str1[100] = { 0 };
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        str1[len - 1 - i] = str[i];
    }
    int ret = strcmp(str, str1);

    if (len % 2 == 1)
    {
        printf("NO");
    }
    else
    {
        if (ret == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}