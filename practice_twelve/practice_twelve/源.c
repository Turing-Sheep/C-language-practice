#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////��ϰһ��
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct point
//{
//	int x;
//	int y;
//}p1;
////��ϰ����
//struct s2
//{
//	int a;
//	char c1;
//	char c2;
//	
//};
//struct Node
//{
//	int data;
//	struct point P;
//	struct Node* next;
//}n1 = { 10,{2,3},NULL };         //�ṹ��Ƕ�׳�ʼ��
//
//struct Node n2 = { 20,{4,5},NULL };//�ṹ��Ƕ�׳�ʼ��
////����Ҳ���Բ�����Ա������˳���ʼ��
//struct Node n3 = { .P = {3,4},.data = 12,.next = NULL };
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	printf("%d\n", sizeof(struct s2));
//	return 0;
//}
//#include<stdio.h>
//#include<stddef.h>
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct s1, c1));
//	printf("%d\n", offsetof(struct s1, i));
//	printf("%d\n", offsetof(struct s1, c2));
//	return 0;
//}
//#include<stdio.h>
//#include<stddef.h>
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s3));
//	printf("%d\n", offsetof(struct s3, d));
//	printf("%d\n", offsetof(struct s3, c));
//	printf("%d\n", offsetof(struct s3, i));
//	return 0;
//}
//#include<stdio.h>
//#include<stddef.h>
////��ϰ3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
////��ϰ4-�ṹ��Ƕ������
//struct s4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s4));
//	printf("%d\n", offsetof(struct s4, c1));
//	printf("%d\n", offsetof(struct s4, s3));
//	printf("%d\n", offsetof(struct s4, d));
//	return 0;
//}
//����Ĭ�϶�����
//#include<stdio.h>
//
//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
////�ָ�Ĭ�϶�����
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}
#include<stdio.h>
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node N1 = { 1,NULL };