#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int ElementType;

typedef struct QueueNode
{
	QueueNode* next;
	ElementType data;
}QueueNode;

typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;

//��ʼ������
void QueueInit(Queue* q);
//���ٶ���
void QueueDestory(Queue*q);
//ɾ��ͷ��Ԫ��
void QueuePop(Queue*q);
//β������Ԫ��
void QueuePush(Queue*q,ElementType dat);
//�ж��Ƿ�Ϊ��
bool QueueEmpty(Queue*q);
//��ȡ�����е�Ԫ�ظ���
int QueueSize(Queue*q);
//��ȡ�����е�ͷ��Ԫ��
ElementType QueueFront(Queue*q);
//��ȡ�����е�β��Ԫ��
ElementType QUeueBack(Queue*q);