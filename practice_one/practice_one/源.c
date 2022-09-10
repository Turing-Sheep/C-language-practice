#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void the_number_of_one_1()
{
	int n = 0;
	int count = 0;
	scanf("%d",&n);
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) % 2 == 1)
		{
			count++;
		}
	}
	printf("%d的二进制位中1的个数为：%d\n",n,count);
}

void the_number_of_one_2()
{
	int n = 0;
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (n & 1 == 1)
		{
			count++;
		}
		n >>= 1;
	}
	printf("%d", count);
}

void the_number_of_one_3()
{
	int count = 0;
	int n = 0;
	scanf("%d",&n);
	while (n)
	{
		n = (n & (n - 1));
		count++;
	}
	printf("%d", count);
}

void the_number_of_one_4()
{
	unsigned int n = 0;
	int count = 0;
	scanf("%d",&n);
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n/= 2;
	}
	printf("%d",count);
}

void the_seam_number_1()
{
	int n = 0;
	int m = 0;
	int count = 0;
	scanf("%d %d",&n,&m);
	int different = 0;
	int seam = 0;
	int a = n ^ m;
	while (a)
	{
		a = (a - 1) & a;
		different++;
	}
	seam = 32 - different;
	printf("两数相同的位有：%d个，不同的位有：%d个", seam, different);
	
}

void the_seam_number_2()
{

	int n = 0;
	int m = 0;
	scanf("%d %d",&n,&m);
	int seam = 0;
	int different = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((n >> i) == (m >> i))
		{
			seam++;
		}
		else
		{
			different++;
		}
	}
	printf("两数相同的位有：%d个，不同的位有：%d个", seam, different);

	
}

void test01()
{
	int n = 0;
	int m = 0;
	scanf("%d",&n);
	int temp[32] = { 0 };

	while (n)
	{
		temp[m] = n % 6;
		n /= 6;
		m++;
	}

	for (int i = m-1; i >=0; i--)
	{
		printf("%d",temp[i]);
	}

}

void turn(const int n)
{
	if (n > 0)
	{
		
		turn(n/6);
		printf("%d", n % 6);
	}
	else
	{
		return;
	}
}

void test02()
{
	int n = 0;
	scanf("%d",&n);
	turn(n);
}


void test03()
{
	int n = 0;
	int m = 0;
	scanf("%d",&n);
	scanf("%d", &m);
	int arr[10];
	int j = 0;
	for (int i = 0 ; i < n; i++)
	{
		scanf("%d",&arr[i]);
		if (arr[i] != m)
		{
			arr[j] = arr[i];
			j++;
		}

	}

	for ( int i=0;i<j; i++)
	{
		printf("%d ",arr[i]);
	}
}


int main()
{
	
	test03();

	return 0;
}