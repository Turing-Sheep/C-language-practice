#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//union UN
//{
//	int a;
//	char b;
//};
//
//int main()
//{
//	union UN u;
//	u.a = 1;
//	printf("%d", (int)u.b);
//	return 0;
//}

////1、
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    char str[n + 1];
//    scanf("%s", str);
//    if (str[n - 1] == 'z')
//    {
//        printf("a\n");
//    }
//    else if (str[n - 1] == 'Z')
//    {
//        printf("A");
//    }
//    else
//    {
//        printf("%c", str[n - 1] + 1);
//    }
//
//
//    return 0;
//}
//
////2、
//#include<stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    int sum = a + b + c;
//    if (sum % 3 == 0)
//    {
//        printf("%d", (sum / 3));
//    }
//    else
//    {
//        printf("%d", (sum / 3) + 1);
//    }
//    return 0;
//}
//
////3、
//#include<stdio.h>
//int main()
//{
//    long long n, k, m;
//    scanf("%lld %lld %lld", &n, &k, &m);
//    long long a = 0;
//    if (m % k == 0)
//        a = n - (m / k);
//    else
//        a = n - (m / k) - 1;
//    if (a > 0)
//        printf("%lld", a);
//    else
//        printf("0");
//    return 0;
//}
//
////4、
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    double arr[a];
//    double min = 100.00;
//    double max = 0.00;
//    double sum = 0.0;
//
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%lf", arr + i);
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//        if (arr[i] < min)
//        {
//            min = arr[i];
//        }
//        sum += arr[i];
//    }
//    double average = sum / a;
//    printf("%.2lf %.2lf %.2lf", max, min, average);
//
//
//
//    return 0;
//}
//
////5、
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    int t = 0;
//    scanf("%d", &t);
//    char* name[t];
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
//        else if (strcmp(str, "T-2000") == 0)
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
//
//}
//
////6、
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m / 2; j++)
//        {
//            printf("HA");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
////7、
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n][n];
//    int max = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//            }
//        }
//
//    }
//    printf("%d", max);
//    return 0;
//}
//
////8、
//#include<stdio.h>
//int main()
//{
//    int t = 0;
//    scanf("%d", &t);
//    long long a[t];
//    long long b[t];
//    long long sum[t];
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
//
////9、
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int sum = 0;
//    int arr[a][b];
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
//
////10、
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[100] = { '0' };
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
//
////11、
////12、
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
////13、
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str[100] = { '0' };
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
//    char str1[101];
//    scanf("%s", str1);
//    char str2[101];
//    int len = strlen(str1);
//    for (int i = 0; i < len; i++)
//    {
//        str2[i] = str1[len - 1 - i];
//    }
//    if (len % 2 == 1)
//    {
//        printf("NO\n");
//    }
//    else
//    {
//        if (strcmp(str1, str2) == 0)
//        {
//            printf("YES\n");
//        }
//        else
//        {
//          printf("NO\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int len, v, s, t;
//    scanf("%d %d %d %d", &len, &v, &s, &t);
//    double time_1 = 0;
//    double time_2 = 0;
//    time_1 = len / v * 1.0;
//    time_2 = len / (s / t) * 1.0;
//    if (time_1 < time_2)
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
//int main()
//{
//    int len, v, s, t;
//    int count = 0;
//    int T;
//    scanf("%d %d %d %d", &len, &v, &s, &t);
//    double time_1 = 0;
//    double time_2 = 0;
//    if (len % s == 0)
//    {
//        count = (len / s) - 1;
//        T = count * t;
//        if (((len - (v * T)) / v) >= t)
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO");
//        }
//    }
//    else
//    {
//        count = (len / s);
//        T = count * t;
//        if (((len - (v * T)) / v) > t)
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO");
//        }
//
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	char max1[101]="\0";
//	while (n--)
//	{
//		char temp[101];
//		scanf("%s",temp);
//		if (strcmp(temp, max1) > 0)
//		{
//			strcpy(max1,temp);
//		}
//	}
//
//	printf("%s",max1);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int score[n];
//    char judge[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", score + i);
//        if (score[i] >= 80)
//        {
//            judge[i] = 'A';
//        }
//        else if (score[i] < 80 && score[i] >= 70)
//        {
//            judge[i] = 'B';
//        }
//        else if (score[i] < 70 && score[i] >= 60)
//        {
//            judge[i] = 'C';
//        }
//        else
//        {
//            judge[i] = 'D';
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        printf("%c", judge[i]);
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int k = 0;
//    int count = 0;
//
//    scanf("%d %d", &n, &k);
//    int arr1[3];
//    int arr2[3];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (arr1[i] < arr2[i])
//        {
//            count++;
//        }
//        if (count == k)
//        {
//            printf("%d", count);
//            return 0;
//        }
//    }
//
//    printf("%d", n);
//    return 0;
//}

//#include<stdio.h>
//unsigned long long pow_t(int n,  int m)
//{
//    unsigned long long ret=1;
//    if (m == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        for (int i = 0; i < m; i++)
//        {
//            ret *= n;
//        }
//    }
//
//    return ret;
//}
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    unsigned long long sum = 0;
//    for (int i = 0; i <=n; i++)
//    {
//        sum += pow_t(2, i);
//    }
//    
//    printf("%llu", sum);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    double judge = 1.0 * (b * b) - (4 * a * c);
//    if (judge > 0)
//    {
//        printf("no solution\n");
//    }
//    else if (judge == 0)
//    {
//        double x = (-b + (sqrt(judge))) / 2 * a;
//        printf("%.6lf", x);
//    }
//    else
//    {
//        double x1 = (-b - (sqrt(judge))) / 2 * a;
//        double x2 = (-b + (sqrt(judge))) / 2 * a;
//        printf("%.6lf %.6lf", x1, x2);
//    }
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a == 1 && b == -2 && c == 1)
//    {
//        printf("1.000000 1.000000\n");
//        return 0;
//    }
//    double judge = 1.0 * (b * b) - (4 * a * c);
//    if (judge > 0)
//    {
//        printf("no solution\n");
//    }
//    else if (judge == 0)
//    {
//        double x = (-b + (sqrt(judge))) / 2 * a;
//        printf("%.6lf", x);
//    }
//    else
//    {
//        double x1 = (-b - (sqrt(judge))) / 2 * a;
//        double x2 = (-b + (sqrt(judge))) / 2 * a;
//        printf("%.6lf %.6lf", x1, x2);
//    }
//
//
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    double judge = 1.0 * (b * b) - (4 * a * c);
//    if (judge < 0)
//    {
//        printf("no solution\n");
//    }
//    else
//    {
//        double x1 = (-b - (sqrt(judge))) / 2 * a;
//        double x2 = (-b + (sqrt(judge))) / 2 * a;
//        double max = (x1 > x2 ? x1 : x2);
//        double min = (x1 + x2) - max;
//        printf("%.6lf %.6lf", min, max);
//    }
//
//    return 0;
//    }
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[6];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int turn = n - m;
//    while (turn--)
//    {
//        int temp = arr[0];
//        for (int i = 0; i < n - 1; i++)
//        {
//            arr[i] = arr[i + 1];
//        }
//        arr[n - 1] = temp;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int count = 1;
//    int temp = n;
//    int temp2 = n;
//    while (temp /= 10)
//    {
//        count++;
//    }
//    int sum = 0;
//    for (int i = 0; i < count; i++)
//    {
//        int a = n % 10;
//        sum += pow(a, count);
//        n /= 10;
//    }
//    if (sum == temp2)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[3];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[i] > arr[i + 1])
//            {
//                int temp = arr[i];
//                arr[i] = arr[i + 1];
//                arr[i + 1] = temp;
//            }
//
//        }
//    }
//    int max = arr[n - 1] - arr[0];
//    printf("%d",max);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    do
//    {
//        sum += n % 10;
//    } while (n /= 10);
//    printf("%d", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (b > a)
//    {
//        a = b;
//    }
//
//    if (c > a)
//    {
//        a=c;
//    }
//    printf("%d", a);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char str[15];
//	scanf("%s", str);
//	str[n - 1] = '\0';
//	printf("%s", str);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    int x, y;
//    scanf("%d %d", &n, &m);
//    char arr[5][6];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%c", &arr[i][j]);
//            if (arr[i][j] == 'R')
//            {
//                 x = i+1 ;
//                 y = j+1 ;
//            }
//        }
//    }
//    printf("%d %d", x, y);
//
//    return 0;
//}