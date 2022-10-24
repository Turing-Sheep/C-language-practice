#define  _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//��ʼ��˳���
void SeqListInit(SeqList *SL)
{
	SL->a = NULL;
	SL->size = SL->capacity = 0;
}
//�������������
void SeqListCheckCapacity(SeqList *SL)
{
	assert(SL!=NULL);
	if (SL->size == SL->capacity)
	{
		int NewCapacity = SL->capacity == 0 ? 4 : 2 * SL->capacity;
		ElementType*temp=(ElementType*)realloc(SL->a,(NewCapacity)*sizeof(ElementType));
		if (temp == NULL)
		{
			perror("SeqListCheckCapacity():");
		}
		SL->a = temp;
		SL->capacity = NewCapacity;
		
	}
	else
	{
		return;
	}
}
//β��
void SeqListPushBack(SeqList *SL, ElementType data)
{
	assert(SL!=NULL);
	SeqListCheckCapacity(SL);
	SL->a[SL->size] = data;
	SL->size++;
}
//βɾ
void SeqListPopBack(SeqList *SL)
{
	assert(SL != NULL);
	assert(SL->size != 0);
	SL->a[SL->size - 1] = 0;
	SL->size--;
}
//ͷ��
void SeqListPushFront(SeqList *SL, ElementType data)
{
	assert(SL!=NULL);
	SeqListCheckCapacity(SL);
	for (int i = SL->size-1; i >=0; i--)
	{
		SL->a[i + 1] = SL->a[i];
	}
	SL->a[0] = data;
	SL->size++;
}
//ͷɾ
void SeqListPopFront(SeqList *SL, ElementType data)
{
	assert(SL!=NULL);
	assert(SL->size!=0);
	for (int i = 0; i < SL->size-1; i++)
	{
		SL->a[i] = SL->a[i + 1];
	}
	SL->a[SL->size - 1] = 0;
	SL->size--;
}
//��ӡ
void SeqListPrint(SeqList *SL)
{
	assert(SL!=NULL);
	for (int i = 0; i < SL->size; i++)
	{
		printf("%d", SL->a[i]);
	}
}
//����
void SeqListDestroy(SeqList* SL)
{
	free(SL->a);
	SL->a = NULL;
}
//10������
int SeqListFind(SeqList* SL, ElementType data)
{
	assert(SL!=NULL);
	for (int i = 0; i < SL->size; i++)
	{
		if (SL->a[i] == data)
		{
			return i;
		}
	}
	return -1;
}
//9���м����
void SeqListInsert(SeqList* SL, int pos, ElementType data)
{
	assert(SL!=NULL);
	assert(pos >= 0);
	SeqListCheckCapacity(SL);
	for (int i = pos; i < SL->size; i++)
	{
		SL->a[i + 1] = SL->a[i];
	}
	SL->a[pos] = data;
	SL->size++;
}
//11���м�ɾ��
void SeqListErase(SeqList* SL, int pos)
{
	assert(SL != NULL);
	assert(pos >= 0);
	SeqListCheckCapacity(SL);
	for (int i = pos; i < SL->size - 1; i++)
	{
		SL->a[i] = SL->a[i + 1];
	}
	SL->a[SL->size - 1] = 0;
	SL->size--;
}
