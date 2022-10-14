#define  _CRT_SECURE_NO_WARNINGS 1
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