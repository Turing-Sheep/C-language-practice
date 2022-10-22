#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cmath>
//
//using namespace std;
//int arr[100] = {0};
//
//int main()
//{
//	string s1;
//	cin >> s1;
//	int min = 100;
//	int max = 0;
//	for (int i = 0; i < s1.length(); i++)
//	{
//		int wor = s1[i]-'a';
//		arr[wor]++;
//	}
//
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min&&arr[i]>0)
//		{
//			min = arr[i];
//		}
//	}
//
//	int num = max - min;
//	bool flag = 1;
//	for (int i = 2; i < num; i++)
//	{
//		if ((num % i == 0)&&num>1)
//		{
//			flag = 0;
//		}
//	}
//
//	if (flag)
//	{
//		cout << "Lucky Word" << endl;
//		cout << num << endl;
//	}
//	else
//	{
//		cout << "No Answer" << endl;
//		cout << num << endl;
//	}
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<cstdio>
//#include<cstdlib>
//using namespace std;
//
//int add(int x, int y)
//{
//	return x + y;
//}
//int jian(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	getchar();
//	char c;
//	int(*p[3])(int x, int y) = {add,jian,mul};
//	while (n--)
//	{
//		char s1[100];
//		gets(s1);
//		cout << s1 << endl;
//		
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int main()
//{
//	int(*pf[3])(int x, int y) = {add,sub,mul};
//	char signal[3] = {'+','-','*'};
//	int n;
//	int a, b;
//	char str[100], st[10];
//	char te;
//	cin >> n;
//	while (n--)
//	{
//		cin >> st;
//		if (*st >= 'a' && *st <= 'z')
//		{
//			te = *st;
//			cin >> a >> b;
//		}
//		else
//		{
//			sscanf(st,"%d",&a);
//			cin >> b;
//		}
//		int ret=pf[te - 'a'](a,b);
//		sprintf(str, "%d%c%d=%d", a, signal[te-'a'], b, ret);
//		int len = strlen(str);
//		cout << str << endl << len << endl;
//	}
//	return 0;
////}
//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	char str[101];
//	cin >> str;
//	int len = strlen(str);
//	_strupr(str);
//	cout << str;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int count = 0;
//	char c;
//	while ((c=getchar())!=EOF)
//	{
//		if (c != '\n' && c != ' ')
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}
//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	int q;
//	cin >> q;
//	char str[303];
//	cin >> str;
//	while (q--)
//	{
//		
//		int choice;
//		cin >> choice;
//		switch (choice)
//		{
//			case 1:
//			{
//				char str1[101];
//				cin >> str1;
//				strcat(str, str1);
//				cout << str << endl;
//				break;
//			}
//			case 2:
//			{
//				int begin, count;
//				cin >> begin;
//				cin >> count;
//				char temp[101];
//				for (int i = 0; i < count; i++)
//				{
//					temp[i] = str[begin + i];
//				}
//				temp[count] = '\0';
//				strcpy(str, temp);
//				cout << str << endl;
//				break;
//			}
//			case 3:
//			{
//				int loc;
//				cin >> loc;
//				char str_be[303] = {0};
//				char str_en[101] = {0};
//				char str_insert[101] = {0};
//				for (int i = 0; i < loc; i++)
//				{
//					str_be[i] = str[i];
//				}
//				for (int i = loc; i < strlen(str); i++)
//				{
//					str_en[i-loc] = str[i];
//				}
//				cin >> str_insert;
//				strcat(str_be,str_insert);
//				strcat(str_be,str_en);
//				cout<<strcpy(str,str_be)<<endl;
//				break;
//			}
//			case 4:
//			{
//				char find[101];
//				cin >> find;
//				char *p=strstr(str,find);
//				if (p != NULL)
//				{
//					cout << p - str << endl;
//				}
//				else
//				{
//					cout << "-1" << endl;
//				}
//				break;
//			}
//			
//		}
//	}
//	return 0;
//}