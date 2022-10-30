#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
// struct ListNode 
// {
//    int val;
//    struct ListNode* next;
//};
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    struct ListNode* newhead = newhead;
//    struct ListNode* pre = NULL;
//    struct ListNode* cur = head;
//
//    while (cur != NULL)
//    {
//        if (cur->val == val)
//        {
//            if (cur == head)
//            {
//                pre = cur->next;
//                newhead = pre;
//                free(cur);
//            }
//            else
//            {
//                pre->next = cur->next;
//                free(cur);
//            }
//        }
//        else
//        {
//            pre = cur;
//            cur = cur->next;
//        }
//    }
//    return newhead;
//}


struct ListNode 
{
      int val;
      struct ListNode *next;
};
struct ListNode* reverseList(struct ListNode* head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    struct ListNode* n1 = head;
    struct ListNode* n2 = head->next;
    struct ListNode* after_n1 = NULL;
    struct ListNode* after_n2 = n1;
    while (n1 != NULL)
    {
        after_n2->next = after_n1;
        after_n2 = n2;
        after_n1 = n1;
        n1 = n2;
        n2 = n2->next;
    }
    return n1;

}
int main(){
    struct ListNode* p1 = malloc(sizeof(struct ListNode));    struct ListNode* p2 = malloc(sizeof(struct ListNode));
    struct ListNode* p3 = malloc(sizeof(struct ListNode));
    struct ListNode* p4 = malloc(sizeof(struct ListNode));
    struct ListNode* p5 = malloc(sizeof(struct ListNode));
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = p5;
    p5->next = NULL;
    p1->val = 1;
    p2->val = 2;
    p3->val = 3;
    p4->val = 4;
    p5->val = 5;
    struct ListNode* phead = p1;
    struct ListNode* ret=reverseList(phead);
}