#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct score
//{
//    int chinese;
//    int math;
//    int english;
//    int sum;
//    int number;
//
//};
//
//bool cmp (score stu1,score stu2)
//{
//    if (stu1.sum != stu2.sum)
//    {
//        if (stu1.sum > stu2.sum)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//    else
//    {
//        if (stu1.chinese != stu2.chinese)
//        {
//            if (stu1.chinese > stu2.chinese)
//            {
//                return true;
//            }
//            else
//            {
//                return false;
//            }
//        }
//        else
//        {
//            if (stu1.number > stu2.number)
//            {
//                return true;
//            }
//            else
//            {
//                return false;
//            }
//        }
//    }
//}
//int main()
//{
//    int n;
//    cin >> n;
//    struct score students[350];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> students[i].chinese
//            >> students[i].math
//            >> students[i].english;
//        students[i].number = i + 1;
//        students[i].sum = students[i].chinese + students[i].math + students[i].english;
//    }
//    sort(students,students+n,cmp);
//    for (int i = n-1; i >=n; i--)
//    {
//        cout << students[i].number
//            <<" "
//            << students[i].sum << endl;
//    }
//    return 0;
//}
//#include<iostream>
//using namespace std;
//
//float half(float f)
//{
//	return(f /= 2);
//}
//
//string half(string s)
//{
//	int len = s.length()/2;
//	char* str = new char[len];
//	for (int i = 0; i < len; i++)
//	{
//		str[i] = s[i];
//	}
//	return str;
//}
//
//int main()
//{
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//template<typename T>
//void swap(T x, T y)
//{
//	T temp = x;
//	x = y;
//	y = temp;
//}
//int main()
//{
//	return 0;
//}
//#include<cstring>
//#include<iostream>
//using namespace std;
//#define MAX 1000
//
//bool arr[MAX];
//
//int main()
//{
//	memset(arr,0,MAX);
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if ((arr[j] % i == 0) && i % 2 == 1)
//			{
//				arr[j] = true;
//			}
//			if ((arr[j]) % i == 0 && (i % 2 == 0))
//			{
//				arr[j] = false;
//			}
//		}
//		
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	char str[100];
//	cin >> str;
//	cin.getline(str,10);//这里只会读取九个字符，最后一个字符默认填充0
//	cin.get();
//	cin.getline(str, 10, ':');
//	string str1;
//	cin >> str1;
//	int len = str1.length();
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	char str[] = "hello world!\n";
//	cout << str << endl;
//	printf("%s",str);
//	int len = strlen(str);
//	_strupr(str);
//	cout << str << endl;
//	string s = "hello world!";
//	cout << s << endl;
//	s += "haha";
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//
//	return 0;
//}
/*
* C语言字符串：
* strlen,strcpy,strcat,strcmp,strstr,strchr,strrchr,strlwr,strupr
* C++字符串：
* .size():计算string的长度
* .length()：计算string的长度
* =：给string赋值，strcpy
* +：给string的后面追加，strcat
* ==，！=....可通过逻辑运算符进行比较
* find
*/
//#include<iostream>
//#include<string>
//using namespace std;
//
//int count_words(string& s)
//{
//	int count = 1;
//	int len = s.length();
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == ' ')
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	string s = "a v sc s d";
//	cout<<count_words(s);
//
//	return 0;
//}
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
	
	return 0;
}