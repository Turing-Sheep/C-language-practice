#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int ElementType;//����Ԫ������

typedef struct SeqList
{
	ElementType* a;//��¼�������ٵ��ڴ�ռ�

	int size;//Ԫ�ص�ʵ�ʸ���
	int capacity;//Ԫ�ص��������

} SeqList; //���嶯̬˳���Ľṹ�壬��������

//�ӿں�����
//1����ʼ��˳���
void SeqListInit(SeqList*SL);
//2��β��
void SeqListPushBack(SeqList *SL,ElementType data);
//3��βɾ
void SeqListPopBack(SeqList *SL);
//4��ͷ��
void SeqListPushFront(SeqList *SL,ElementType data);
//5��ͷɾ
void SeqListPopFront(SeqList *SL);
//6����ӡ
void SeqListPrint(SeqList *SL);
//7������
void SeqListDestroy(SeqList *SL);
//8�����
void SeqListCheckCapacity(SeqList *SL);
//9���м����
void SeqListInsert(SeqList *SL, int pos,ElementType data);
//10������
int SeqListFind(SeqList *SL,ElementType data);
//11���м�ɾ��
void SeqListErase(SeqList *SL,int pos);