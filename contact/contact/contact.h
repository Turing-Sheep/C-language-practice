#pragma once
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define MAX_NAME 20
#define MAX_PHONE 11
#define MAX_ADDR 20
#define MAX_SEX 10
#define MAX_NUMBER 100

struct Information
{
	char name[MAX_NAME];
	char phone[MAX_PHONE];
	int age;
	char addr[MAX_ADDR];
	char sex[MAX_SEX];
	
};

struct Contact
{
	struct Information number[MAX_NUMBER];//����һ���ṹ��ָ�����飬���ٿռ�洢��ϵ��
	int len;//��¼�ռ�����ϵ�˵�����
};

//��ʼ��ͨѶ¼
void Init(struct Contact* con);

//1���˵�����
void contact_menu();


//2�������ϵ��
void ADD_number(struct Contact* con);

//3��ɾ����ϵ��
void DEL_number(struct Contact*con);

//4��������ϵ��
void SEARCH_number(struct Contact*con);

//5���޸���ϵ��
void MODIFY_number(struct Contact*con);

//6��չʾ������ϵ��
void SHOW_number(struct Contact*con);

//7������ϵ�˽�������
void SORT_number(struct Contact* con);

