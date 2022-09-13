#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void drink_water_by_math()
{
	//等差数列
	int money = 0;
	scanf("%d",&money);
	int water = 2 * money - 1;
	printf("%d",water);      
               
}
int water(int x,int y)
{
	int a = (x + y);
	
	if (a != 1)
	{
		return a + water(a / 2, a % 2);
	}
	else
	{
		return a;
	}
}
void drink_water_by_Clanguage()
{
	//函数递归
	int money = 0;
	scanf("%d",&money);
	      
	printf("%d",w);

}

int main()
{
	drink_water_by_Clanguage();
	return 0;
}