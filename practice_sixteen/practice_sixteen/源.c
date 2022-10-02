#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int arr_1[3];
//    int arr_2[3];
//    int count = 0;
//     for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr_1[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr_2[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (arr_1[i] == arr_2[j])
//            {
//                count++;
//            }
//        }
//    }
//    int dif = n - count;
//    if (dif % 2 == 1)
//    {
//        printf("win");
//    }
//    else
//    {
//        printf("lose");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[6];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int sum = 0;
//    for (int i = a; i <= b; i++)
//    {
//        sum += arr[i - 1];
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double sum = 0.0;
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int choice;
//        scanf("%d", &choice);
//        switch (choice)
//        {
//        case 1:
//            sum += 13.8;
//            break;
//        case 2:
//            sum += 13.8;
//            break;
//        case 3:
//            sum += 13.8;
//            break;
//        case 4:
//            sum += 15.8;
//            break;
//        case 5:
//            sum += 17.8;
//            break;
//        default:
//            break;
//        }
//    }
//    printf("%.1lf", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int share = (n * n + n + 2) / 2;
//        printf("%d\n", share);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int n1;
//        scanf("%d", &n1);
//        int share = (n1 * n1 + n1 + 2) / 2;
//        printf("%d\n", share);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[5];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        int sum = 0;
//        for (int j = 0; j <= i; j++)
//        {
//            sum += arr[j];
//        }
//        printf("%d ", sum);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[8];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    printf("%d", arr[1]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    char arr[1000];
//    scanf("%s",arr);
//    int l, r;
//    scanf("%d %d", &l, &r);
//    while (l < r)
//    {
//        char temp = arr[l];
//        arr[l] = arr[r];
//        arr[r] = temp;
//        l++;
//        r--;
//    }
//    printf("%s", arr);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a;
//    scanf("%c", &a);
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 2 - i; j++)
//        {
//            printf(" ");
//        }
//        for (int k = 0; k < (1 + 2 * i); k++)
//        {
//            printf("%c", a);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    switch (n)
//    {
//    case 1:
//        printf("###");
//        break;
//    case 2:
//        printf("#\n");
//        printf("#\n");
//        printf("#\n");
//        break;
//    case 3:
//        printf("*\n");
//        printf("**\n");
//        printf("***\n");
//        break;
//    case 4:
//        printf("**#**\n");
//        printf("*###*\n");
//        printf("#####\n");
//        break;
//    case 5:
//        printf("##*##\n");
//        printf("#***#\n");
//        printf("*****\n");
//        break;
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    if (b < a)
//    {
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//    if (c < a)
//    {
//        int temp = a;
//        a = c;
//        c = temp;
//    }
//    if (c < b)
//    {
//        int temp = c;
//        c = b;
//        b = temp;
//    }
//    printf("%lf %lf %lf", a, b, c);
//
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//int main()
//{
//    
//    char arr[1000];
//    scanf("%s", arr);
//    int len = strlen(arr);
//    for (int i = 0; i < len; i++)
//    {
//        if (islower(arr[i]))
//        {
//            arr[i]=toupper(arr[i]);
//        }
//    }
//    printf("%s", arr);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//int main()
//{
//	int a = 0;
//	a = getchar();
//	if (islower(a))
//	{
//		toupper(a);
//		putchar(a);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10000];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//
//    }
//    int max = arr[n - 1] - arr[0];
//    printf("%d", max);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n == 0)
//    {
//        printf("NO");
//    }
//    else if (n % 2 == 1)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10000];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == 3)
//        {
//            int temp = arr[i];
//            arr[i] = arr[n - 1];
//            arr[n - 1] = temp;
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int fib(int a)
//{
//    if (a <= 2)
//    {
//        return 1;
//    }
//    else
//    {
//        return fib(a - 1) + fib(a - 2);
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int a = 0;
//        scanf("%d", &a);
//        int ret = fib(a);
//        printf("%d", ret);
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int max = a > b ? a : b;
//    while (max % a != 0 || max % b != 0)
//    {
//        max++;
//    }
//    printf("%d", max);
//    return 0;
//}
//#include<stdio.h>
//void swap(long long* a, long long* b)
//{
//    long long temp = *a;
//    *a = *b;
//    *b = temp;
//}
//int main()
//{
//    long long a, b, c;
//    scanf("%lld %lld %lld", &a, &b, &c);
//    if (b > a)
//    {
//        swap(&a, &b);
//    }
//    if (c > a)
//    {
//        swap(&a, &c);
//    }
//    if (c > b)
//    {
//        swap(&b, &c);
//    }
//    if (b + c > a)
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
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[1000];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    printf("%d", arr[n - 1]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    long long a = 0;
//    scanf("%lld", &a);
//    int arr[100] = { 0 };
//    int i = 0;
//    while (a)
//    {
//        arr[i] = a % 10;
//        a /= 10;
//        i++;
//    }
//    int str[10] = { 0 };
//    for (int j = 0; j < i; j++)
//    {
//        switch (arr[j])
//        {
//        case 0:
//            str[0]++;
//            break;
//        case 1:
//            str[1]++;
//            break;
//        case 2:
//            str[2]++;
//            break;
//        case 3:
//            str[3]++;
//            break;
//        case 4:
//            str[4]++;
//            break;
//        case 5:
//            str[5]++;
//            break;
//        case 6:
//            str[6]++;
//            break;
//        case 7:
//            str[7]++;
//            break;
//        case 8:
//            str[8]++;
//            break;
//        case 9:
//            str[9]++;
//            break;
//        default:
//            break;
//        }
//
//    }
//    for (int m = 0; m < 10; m++)
//    {
//        printf("%d\n", str[m]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[15][15];
//    for (int i = 0; i < n; i++)
//    {
//        arr[i][0] = 1;
//        arr[i][i] = 1;
//    }
//
//    for (int i = 2; i < n; i++)
//    {
//        for (int j = 1; j <= i - 1; j++)
//        {
//            arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]);
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            if (j < n - 1)
//                printf("%d ", arr[i][j]);
//            else
//                printf("%d", arr[i][j]);
//        }
//        if (i < n - 1)
//            printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &n, &m);
//    char arr[3][7];
//    for (int i = 0; i < n; i++)
//    {
//        getchar();
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%c", &arr[i][j]);
//        }
//        
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m - 2; j++)
//        {
//            if ((arr[i][j] == '*') && (arr[i][j + 1] == '*') && (arr[i][j + 2] == '*'))
//            {
//                x = i + 1;
//                y = j + 2;
//            }
//        }
//    }
//    printf("%d %d\n", x, y);
//    printf("ni gei wo hui lai T_T\n");
//
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int day = n;
//    int sum = 0;
//    while (n--)
//    {
//        int hour_start = 0;
//        int min_start = 0;
//        int hour_end = 0;
//        int min_end = 0;
//        scanf("%d:%d %d:%d", &hour_start, &min_start, &hour_end, &min_end);
//        sum += (hour_end - hour_start) * 60 + (min_end - min_start);
//    }
//    double ret = (sum * 1.0) / (day * 2.0 * 60);
//
//    printf("%.3lf", ret);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int h, m, s;
//    scanf("%d %d %d", &h, &m, &s);
//    int s_t = 60 - s;
//    int m_t = 59 - m;
//    int h_t = 23 - h;
//    if (h_t >= 10)
//    {
//        printf("%d ", h_t);
//    }
//    else
//    {
//        printf("0%d ", h_t);
//    }
//
//    if (m_t >= 10)
//    {
//        printf("%d ", m_t);
//    }
//    else
//    {
//        printf("0%d ", m_t);
//    }
//
//    if (s_t >= 10)
//    {
//        printf("%d ", s_t);
//    }
//    else
//    {
//        printf("0%d ", s_t);
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    do{
//        if (n == 0)
//        {
//            break;
//        }
//        if (n % 2 == 1)
//        {
//            sum += n;
//        }
//        else
//        {
//            sum += n + 2;
//        }
//    } while (n--);
//
//    printf("%d", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10000];
//    int give_number = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", arr + i);
//    }
//    int judge = 0;
//    scanf("%d", &judge);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] >= judge)
//        {
//            give_number++;
//        }
//    }
//    printf("%d %d", give_number, n - give_number);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        if (i == 0 || i == n - 1)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                printf("*");
//            }
//        }
//        else
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (j == 0 || j == m - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(".");
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[10000];
//    int sum = 0;
//    for (int i = 0; i < n - 2; i++)
//    {
//        scanf("%d", arr + i);
//        sum += arr[i];
//    }
//    int max = m - sum - 1;
//    for (int i = 0; i < n - 2; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d", max);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int day = 7;
//    int arr[8] = {0};
//    int max = 0;
//    for (int i = 1; i < 8; i++)
//    {
//        int n, m;
//        scanf("%d %d", &n, &m);
//        arr[i] = n + m;
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    if (max >= 8)
//    {
//        for (int i = 1; i < 8; i++)
//        {
//            if (arr[i] == max)
//            {
//                printf("%d", i);
//                break;
//            }
//        }
//    }
//    else
//    {
//        printf("0");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[5];
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int people = 0;
//    for (int i = 0; i < 5; i++)
//    {
//        if (arr[i] > arr[0])
//        {
//            people++;
//        }
//    }
//    printf("%d", people);
//
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str[101];
//    scanf("%s", str);
//    if (strstr(str, "awaw") != NULL)
//    {
//        printf("zhishixuebao");
//    }
//    if (strstr(str, "yaya") != NULL)
//    {
//        printf("zhishisheli");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    int sum = 9 * 10;
//    double data;
//    scanf("%d", &year);
//    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
//    {
//        data = (10.0 / sum)*100;
//    }
//    else
//    {
//        data = (5.0 / sum)*100;
//    }
//    printf("%.2lf", data);
//    printf("%%");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int count = 0;
//    scanf("%d", &n);
//    int arr[1000];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        int flag = 1;
//        for (int j = 2; j < arr[i]; j++)
//        {
//            if (arr[i] % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1&&arr[i]!=1)
//        {
//            count++;
//        }
//    }
//    double data = 100 * (count * 1.0 / n);
//    printf("%.2lf%%", data);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr_1[1000];
//    int arr_2[1000];
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr_1[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr_2[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (arr_1[i] == arr_2[j])
//            {
//                count++;
//            }
//        }
//    }
//    int dif = n - count;
//    if (dif % 2 == 1)
//    {
//        printf("win");
//    }
//    else
//    {
//        printf("lose");
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int n, arr[15][15];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			if (j != i)
//				printf("%d ", arr[i][j]);
//			else
//				printf("%d", arr[i][j]);
//		}
//		if (i != n - 1)
//			printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int a[n];
//    int b[n];
//    int i = 0;
//    int j = 0;
//    for (int i = 0; i < n; i++) 
//    {
//        scanf("%d", &a[i]);
//    }
//    for (j = 0; j < n; j++)
//    {
//        scanf("%d", &b[j]);
//    }
//
//
//    i = 0;
//    j = 0;
//    int d = 0;
//    for (j = 0; j < n; j++)\
//    {
//        for (i = 0; i < n; i++) 
//        {
//            if (a[i] == b[j])
//            {
//                d++; a[i] = 101;
//            }
//        }
//    }
//    if ((n - d) % 2 != 0)
//    {
//        printf("win");
//    }
//    else {
//        printf("lose");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n;
//	long long a[1000];
//	scanf("%d", &n);
//	n--;
//	int step = 0;
//	for (int i = 0; i <= 20; i++) 
//	{
//		a[i] = pow(2, i);
//	}
//	for (int j = 0; j <= 20; j++) 
//	{
//		if (a[j] <= n && a[j + 1] > n) 
//		{
//			step++;
//			n = n % a[j];
//			j = -1;
//		}
//		if (n == 0)
//		{
//			break;
//		}
//	}
//	printf("%d", step);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n, m, a[50], b[50], min = 100000, ji;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int j = 0; j < n; j++)
//	{
//		min = 100000;
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] < min)
//			{
//				min = a[i];
//				ji = i;
//				b[j] = min;
//			}
//		}
//		a[ji] = 100000;
//	}
//	int time = 0, c[50][50];
//	for (int i = 0; i < 50; i++)
//	{
//		for (int y = 0; y < 50; y++)
//		{
//			c[i][y] = 0;
//		}
//	}
//	int x = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int y = 0; y < m; y++)
//		{
//			int p = x / m;
//			for (int j = 0; j <= p; j++)
//			{
//				c[i][y] += b[j * m + y];
//			}
//			x++;
//			if (x == n)
//			{
//				break;
//			}
//		}
//		if (x == n)
//		{
//			break;
//		}
//	}
//	x = 0;
//	for (int i = 0; x < n; i++)
//	{
//		for (int y = 0; y < m; y++)
//		{
//			x++;
//			time += c[i][y];
//			if (x == n)
//			{
//				break;
//			}
//		}
//		if (x == n)
//		{
//			break;
//		}
//	}
//	printf("%d", time);
//
//}