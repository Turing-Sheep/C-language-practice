#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<stdio.h>
////声明一个位段：
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
////利用位段来创建一个变量：
//struct S s = { 0 };
//
//int main()
//{
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d", sizeof(s));
//	return 0;
//}
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

enum Color
{
	red = 1,
	green = 5,
	blue = 2
};

enum Day
{
	mon = 1,
	tue,
	wed,
	thur = 5,
	fri,
	sat,
	sun
};
int main()
{

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	printf("\n");
	printf("%d\n", red);
	printf("%d\n", green);
	printf("%d\n", blue);
	printf("\n");
	printf("%d\n", mon);
	printf("%d\n", tue);
	printf("%d\n", wed);
	printf("%d\n", thur);
	printf("%d\n", fri);
	printf("%d\n", sat);
	printf("%d\n", sun);


	return 0;
}