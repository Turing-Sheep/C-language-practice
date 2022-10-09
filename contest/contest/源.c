#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a = 0;
//	while (n--)
//	{
//		char arr[100];
//		scanf("%s",arr);
//		if ((strcmp(arr, "++a") == 0)||(strcmp(arr,"a++")==0))
//		{
//			a++;
//		}
//		else if ((strcmp(arr, "--a") == 0) || (strcmp(arr, "a--") == 0))
//		{
//			a--;
//		}
//		printf("%d",a);
//	}
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	while (n--)
//	{
//
//	}
//}
//#include<stdio.h>
//#include<string.h>
//long long f(long long x) 
//{
//    if (x == 1) return 1;
//    return f(x / 2) + f(x / 2 + x % 2);
//}
//
//int main()
//{
//    long long n;
//    scanf("%lld",&n);
//    printf("%lld",f(n));
//
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[1999] = "Hello,";
//	char arr[1000] = {'\0'};
//	scanf("%s",arr);
//	strcat(str, arr);
//	printf("%s", strcat(str, "!"));
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n, m;
//	scanf("%d %d",&n,&m);
//	int arr[3];
//	for (int i = 0; i < 3; i++)
//	{
//		arr[i] = n % 10;
//		n /= 10;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		arr[i] += m % 10;
//		m /= 10;
//	}
//	for (int i = 2; i >= 0; i--)
//	{
//		printf("%d",arr[i]%3);
//	}
//}
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    long long n,m;
//    scanf("%lld %lld",&n,&m);
//    long long arr[100001];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%lld",&arr[i]);
//    }
//    long long max = 0;
//    for (int i = 0; i < n; i++)
//    {
//        int sum = 0;
//        for (int j = 0; j < m; j++)
//        {
//            if((i+j)<n)
//            sum += arr[i+j];
//        }
//        if (sum > max)
//            max = sum;
//    }
//    printf("%lld",max);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	while (n--)
//	{
//		char str[10001];
//		scanf("%s",str);
//		char* temp = str;
//		while (*temp != '\0')
//		{
//			int count = 0;
//			while(*temp == *(temp+1))
//			{
//				count++;
//				temp++;
//			}
//			if (count > 0)
//			{
//				printf("%d%c",count+1,*temp);
//				temp++;
//			}
//			else
//			{
//				printf("%c",*temp);
//				temp++;
//			}
//			
//			
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    long long n, m;
//    scanf("%lld %lld", &n, &m);
//    long long arr[100001];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%lld", &arr[i]);
//    }
//    long long max;
//    for (int i = 0; i < n; i++)
//    {
//        int sum = 0;
//        for (int j = 0; j < m; j++)
//        {
//            if ((i + j) < n)
//                sum += arr[i + j];
//        }
//        if (i == 0)
//        {
//            max = sum;
//        }
//        if (sum > max)
//            max = sum;
//    }
//    printf("%lld", max);
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int cmp(void*num1,void*num2)
//{
//	long long ret = *((long long*)num1) - (*(long long*)num2);
//	if (ret > 0)
//	{
//		return 1;
//	}
//	else if (ret < 0)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int n,m;
//	scanf("%d %d",&n,&m);
//	long long arr[100001];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lld",arr+i);
//	}
//	qsort(arr,n,sizeof(long long),cmp);
//	long long sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		sum += arr[n-1-i];
//	}
//	printf("%lld",sum);
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    long long n, m;
//    scanf("%lld %lld", &n, &m);
//    long long arr[100001];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%lld", &arr[i]);
//    }
//    long long max;
//    for (int i = 0; i <1+ n-m; i++)
//    {
//        long long sum = 0;
//        for (int j = 0; j < m; j++)
//        {
//            
//                sum += arr[i + j];
//        }
//        if (i == 0)
//        {
//            max = sum;
//        }
//        if (sum > max)
//            max = sum;
//    }
//    printf("%lld", max);
//    return 0;
//}
//#include<stdio.h>
//struct Data
//{
//	long long t;
//	long long x;
//	long long a;
//};
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	struct Data NX[100001];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lld %lld %lld", &NX[i].t, &NX[i].x, &NX[i].a);
//
//	}
//	int sum_time = 0;
//	long long sum_score = 0;
//	long long step = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//
//	}
//
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
//struct Road
//{
//	int begin;
//	int end;
//	int time;
//};
//int main()
//{
//	int node;
//	int line;
//	int loction;
//	scanf("%d %d %d",&node,&line,&loction);
//	struct Road* Ro = (struct Road*)malloc(sizeof(struct Road)*2000001);
//	
//	int max = 0;
//	for (int i = 0; i < line; i++)
//	{
//		scanf("%d %d %d",&Ro[i].begin,&Ro[i].end,&Ro[i].time);
//
//	}
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line; j++)
//		{
//			if ((Ro[i].begin == Ro[j].end) && (Ro[i].end == loction) && (Ro[j].begin == loction))
//			{
//				int time = Ro[i].time + Ro[j].time;
//				if (time > max)
//				{
//					max = time;
//				}
//			}
//		}
//	}
//	printf("%d",max);
//	free(Ro);
//	Ro = NULL;
//	
//	return 0;
//}
