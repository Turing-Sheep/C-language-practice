#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//day1-1
int* printNumbers(int n, int* returnSize)
{
    *returnSize = pow(10, n) - 1;
    static int  arr[100000];
    for (int i = 1; i <= *returnSize; i++)
    {
        arr[i - 1] = i;
    }

    return arr;
}

//day1-2
void day1_2()
{
    int year = 0;
    int month = 0;
    int day = 0;
    int sum_day = 0;
    scanf("%d %d %d", &year, &month, &day);
    int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        arr[2]++;
    }
    for (int i = 0; i < month; i++)
    {
        sum_day += arr[i];
    }
    sum_day += day;
    printf("%d", sum_day);
}

//day2-1
void day2_1()
{
    int m = 0;
    scanf("%d", &m);
    int m3 = pow(m, 3);
    int count = 0;
    int arr[6];//这里其实应该是int arr[n];
    arr[0] = 1;
    for (int i = 1; i < m; i++)
    {
        arr[i] = arr[i - 1] + 2;
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += arr[i];
    }
    while (sum != m3)
    {
        sum += 2 * m;
        count++;
    }
    for (int i = 0; i < m; i++)
    {
        arr[i] += 2 * count;
        if (i != m - 1)
            printf("%d+", arr[i]);
        else
            printf("%d", arr[i]);
    }

}

//day2-2
void day2_2()
{
    int n = 0;
    scanf("%d", &n);
    int sum = (n * ((3 * n - 1) + 2)) / 2;
    printf("%d", sum);
}

//day3-1
void day3_1()
{
    int n = 0;
    scanf("%d", &n);
    int arr[6]; //这里其实应该是int arr[n];
    int count = 0;
    int sum = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < 0)
        {
            count++;
        }
        else if (arr[i] > 0)
        {
            sum += arr[i];
        }
        else
        {
            zero++;
        }
    }
    double average = (sum * 1.0) / (n - count - zero);
    if (n == zero + count)
    {
        printf("%d 0.0", count);
    }
    else
    {
        printf("%d %.1lf", count, average);
    }


}