#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//void swap_pointer(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void swap_yinyong(int& a, int& b)//����: int *const a,int *const b,ָ�볣��
//{
//	int temp = a;//���ʣ�int temp = * a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << a << " " << b << endl;
//	swap_pointer(&a,&b);
//	cout << a << " " << b << endl;
//	swap_yinyong(a,b);
//	cout << a << " " << b << endl;
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#define PI 3.1415926
//int main()
//{
//	const double pi = 3.1415926;
//	double r, c, s;
//	cout << "������Բ�İ뾶��" << endl;
//	cin >> r;
//	c = 2 * pi * r;
//	s = pi * r * r;
//
//	cout << "Բ���ܳ�Ϊ��" << c << endl;
//	cout << "Բ�����Ϊ��" << s << endl;
//	return 0;
//}
//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//int main()
//{
//	double d = sqrt(2.0);
//	cout << "�������ã�" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << setprecision(i) << d <<endl;//��d���֮ǰ���þ��ȣ�precision����
//
//	}
//	cout << "��ǰ����Ϊ��" << cout.precision() << endl;
//	setprecision(2);
//	cout <<  d << endl;
//	cout << setw(6) << d << endl;
//	cout << "��ǰ����ַ���" << endl;
//	cout << setfill('*') << setw(10) << d << endl;
//
//	return 0;
//}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int n;
//	int ge, shi, bai;
//	cin >> n;
//	ge = n % 10;
//	shi = (n / 10) % 10;
//	bai = (n / 100) % 10;
//	cout << ge << shi<< bai << endl;
//	cout <<setw(3)<< ge << setw(2) << shi << setw(2) << bai << endl;
//	return 0;
////}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	float score;
//	cin >> score;
//	if (score >= 60)
//	{
//		cout << "����" << endl;
//	}
//	else
//	{
//		cout << "���ϸ�" << endl;
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swap2(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//void swap3(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	return 0;
//}