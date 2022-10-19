#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char str1[505];
char str2[505];
int a[505];
int b[505];
int c[506];
int main()
{
	scanf("%s %s",str1,str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for (int i = 0; i < len1; i++)
	{
		a[len1 - i - 1] = str1[i]-'0';
	}
	for (int i = 0; i < len2; i++)
	{
		b[len2 - i - 1] = str2[i]-'0';
	}
	int max_number = (len1 > len2 ? len1 : len2)+1;
	for (int i = 0; i <= max_number; i++)
	{
		c[i] += a[i] + b[i];
		c[i + 1] = c[i] / 10;
		c[i] = c[i] % 10;
	}
	while (c[max_number] == 0&&max_number>0)
	{
		max_number--;
	}
	for (int i = max_number ; i >= 0; i--)
	{
		printf("%d",c[i]);
	}

	return 0;
}
//#include<stdio.h>
//#include<string.h>
//
//char s1[505], s2[505];
//int a[505], b[505], c[505];
//
//int main()
//{
//    int la, lb, lc;
//    scanf("%s", s1);
//    scanf("%s", s2);
//
//    la = strlen(s1);
//    lb = strlen(s2);
//    //将字符串转化为整型数组，同时倒置整个数组，目的是便于从个位开始相加。
//    for (int i = 0; i < la; i++)
//    {
//        a[la - i] = s1[i] - '0';
//    }
//    for (int i = 0; i < lb; i++)
//    {
//        b[lb - i] = s2[2] - '0';
//    }
//
//    //lc为结果的最大位数
//    lc = (la > lb ? la : lb) + 1;
//    for (int i = 0; i <= lc; i++)
//    {
//        c[i] += a[i] + b[i];
//        c[i + 1] = c[i] / 10;
//        c[i] = c[i] % 10;
//    }
//    //删除前导零    
//    if (c[lc] == 0 && lc > 0)
//    {
//        lc--;
//    }
//    for (int i = lc; i > 0; i--)
//    {
//        printf("%d", c[i]);
//    }
//    return 0;
//}