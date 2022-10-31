#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char Map[10][10];
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			scanf("%c",&Map[i][j]);
//			getchar();
//		}
//	}
//	return 0;
//}
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
//class Partition
//{
//public:
//    ListNode* partition(ListNode* pHead, int x)
//    {
//        struct ListNode* FrontHead = (struct ListNode*)malloc(sizeof(struct ListNode));
//        struct ListNode* AfterHead = (struct ListNode*)malloc(sizeof(struct ListNode));
//        FrontHead->next = NULL;
//        AfterHead->next = NULL;
//        struct ListNode* cur = pHead;
//        struct ListNode* next = cur->next;
//        struct ListNode* FrontTail = FrontHead;
//        struct ListNode* AfterTail = AfterHead;
//        while (cur != NULL)
//        {
//            if (cur->val < x)
//            {
//                FrontTail->next = cur;
//                cur->next = NULL;
//                FrontTail = cur;
//            }
//            else
//            {
//                AfterTail->next = cur;
//                cur->next = NULL;
//                AfterTail = cur;
//            }
//            cur = next;
//            if (next != NULL)
//            {
//                next = next->next;
//            }
//
//        }
//        FrontTail->next = AfterHead->next;
//        struct ListNode* NewHead = FrontHead->next;
//        return NewHead;
//
//
//    }
//};
