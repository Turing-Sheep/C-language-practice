#define  _CRT_SECURE_NO_WARNINGS 1
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
