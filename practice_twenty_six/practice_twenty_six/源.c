#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//extern Add(int x, int y);
//int A_val = 20;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d",sum);
//	return 0;
//}
//
//#include<stdio.h>
//#define Add(x,y) ((x)+(y))
//int  main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d",ret);
//	return 0;
//}

//#define Add(x,y) x+y
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 2 * Add(a, b);
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//#define Mul(x) (x*x)
//int main()
//{
//	int ret = Mul(2 + 5);
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");
//	char* str = "hello ""world\n";
//	printf("%s\n", str);
//	return 0;
//}
//#include<stdio.h>
//#define PRINT(val,format) printf("the value of "#val" is "format"\n",val)
//int main()
//{
//	int a = 0;
//	PRINT(a,"%d");
//	int b = 20;
//	PRINT(b, "%d");
//	double c = 1.22;
//	PRINT(c, "%lf");
//	return 0;
//}
//
//#include<stdio.h>
//#define A(a,b) (a##b)
//int main()
//{
//	int aabb = 10;
//	printf("%d",A(aa, bb));
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int paper = 0;
//    scanf("%d", &paper);
//    while (paper--)
//    {
//        int number;
//        scanf("%d", &number);
//        int arr[1001];
//        int max = 1;
//        int min = 5000;
//        int sum = 0;
//        for (int i = 0; i < number; i++)
//        {
//            scanf("%d", &arr[i]);
//            if (arr[i] > max)
//            {
//                max = arr[i];
//            }
//            if (arr[i] < min)
//            {
//                min = arr[i];
//            }
//            sum += arr[i];
//        }
//        double average_number = (sum * 1.0) / number;
//        int max_gap = max - min;
//        double variance_sum = 0;
//        for (int i = 0; i < number; i++)
//        {
//            variance_sum += pow(arr[i] - average_number, 2);
//
//        }
//        double variance = variance_sum / number;
//        printf("%d %.3lf", max_gap, variance);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int find = 0;
//    scanf("%d %d", &n, &find);
//    int arr[10] = {0};
//    for (int i = 1; i <= n; i++)
//    {
//        int temp = i;
//        while (temp)
//        {
//            int n = temp % 10;
//            arr[n]++;
//            temp /= 10;
//        }
//    }
//    printf("%d", arr[find]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int L = 0;
//    int k = 0;
//    scanf("%d %d", &L, &k);
//    int LOC[100000];//种树的位置
//    for (int i = 0; i <= L; i++)
//    {
//        LOC[i] = 1;//将每个位置都种树
//    }
//    //开始砍树
//    while (k)
//    {
//        int begin = 0;
//        int end = 0;
//        scanf("%d %d", &begin, &end);
//        for (int i = begin; i <= end; i++)
//        {
//            LOC[i] = 0;
//        }
//        k--;
//    }
//    int count = 0;
//    for (int i = 0; i <= L; i++)
//    {
//        if (LOC[i] == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, k, m;
//    scanf("%d %d %d", &n, &k, &m);
//    int arr[101];
//    for (int i = 1; i < n + 1; i++)
//    {
//        arr[i] = 1;
//    }
//    int p = k;
//    int temp = n;
//    while (n - 1)
//    {
//        int turn = 1;
//        while (1)
//        {
//            
//            if ((turn == m) && (arr[p] == 1))
//            {
//                arr[p] = 0;
//                if (p == temp)
//                {
//                    p = 1;
//                }
//                else
//                {
//                    p++;
//                }
//                break;
//            }
//            if (arr[p] == 1)
//            {
//                turn++;
//            }
//            if (p == temp)
//            {
//                p = 1;
//                
//            }
//            else
//            {
//                p++;
//            }
//           
//        }
//        n--;
//    }
//    for (int i = 1; i <= temp; i++)
//    {
//        if (arr[i] == 1)
//        {
//            printf("%d", i);
//            break;
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, k, m;
//	scanf("%d %d %d",&n,&k,&m);
//	int arr[101] = {0};
//	while (n - 1)
//	{
//
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int ysf(int n, int m)
//{
//    int k = 1;
//    int arr[1000];
//    for (int i = 1; i < n + 1; i++)
//    {
//        arr[i] = 1;
//    }
//    int p = k;
//    int temp = n;
//    while (n - 1)
//    {
//        int turn = 1;
//        while (1)
//        {
//
//            if ((turn == m) && (arr[p] == 1))
//            {
//                arr[p] = 0;
//                if (p == temp)
//                {
//                    p = 1;
//                }
//                else
//                {
//                    p++;
//                }
//                break;
//            }
//            if (arr[p] == 1)
//            {
//                turn++;
//            }
//            if (p == temp)
//            {
//                p = 1;
//
//            }
//            else
//            {
//                p++;
//            }
//
//        }
//        n--;
//    }
//    for (int i = 1; i <= temp; i++)
//    {
//        if (arr[i] == 1)
//        {
//            return i;
//            break;
//        }
//    }
//
//}
//int main()
//{
//    int ret=ysf(5,2);
//    printf("%d",ret);
//    return 0;
//}
