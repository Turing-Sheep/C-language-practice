#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    double f = 0;
    scanf("%lf", &f);
    double c = 5 / 9 * (f - 32);
    printf("%.3lf", c);
    return 0;
}