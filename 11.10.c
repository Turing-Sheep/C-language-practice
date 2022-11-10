#define  _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
void QueueInit(Queue* q)
{
	assert(q);
	q->head = NULL;
	q->tail = NULL;
}

bool QueueEmpty(Queue* q)
{
	assert(q);
	if (q->head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void QueuePush(Queue* q,ElementType dat)
{
	assert(q);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)
	{
		printf("Failed to creat new space!\n");
		exit(-1);
	}
	newnode->next = NULL;
	newnode->data = dat;
	if (q->tail != NULL)
	{
		q->tail->next = newnode;
		q->tail = newnode;
	}
	else
	{
		q->head = newnode;
		q->tail = newnode;
	}
}

void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	QueueNode* nex = q->head->next;
	free(q->head);
	q->head = nex;
	if (q->head == NULL)
	{
		q->tail = NULL;
	}
}

ElementType QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->head->data;
}

ElementType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->tail->data;
}

int QueueSize(Queue* q)
{
	assert(q);
	int size = 0;
	QueueNode* cur = q->head;
	while (cur != NULL)
	{
		size++;
		cur = cur->next;
	}
	return size;
}

void QueueDestory(Queue* q)
{
	assert(q);
	QueueNode* cur = q->head;
	while (cur != NULL)
	{
		QueueNode* nex = cur->next;
		free(cur);
		cur = nex;
	}
	q->head = NULL;
	q->tail = NULL;
}