#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<assert.h>
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_PHONE 11
#define MAX_NUM 10
enum CHOICE
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	CLEAR,
	SORT
};
struct People
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char phone_number[MAX_PHONE];
};

struct Contact
{
	struct People* list;
	int len;
	int capacity;
};
//1���˵���ʾ
void menu();
//2����ʼ����
void init_contact(struct Contact* con);
//3��������ϵ�ˣ�
void add_contact(struct Contact* con);
//4��ɾ����ϵ�ˣ�
void del_contact(struct Contact* con);
//5��������ϵ�ˣ�
void search_contact(struct Contact* con);
//6���޸���ϵ��
void modify_contact(struct Contact*con);
//7����ʾ��ϵ��
void Show_contact(struct Contact* con);
//8�������ϵ��
void clear_contact(struct Contact*con);
//9������
void sort_contact(struct Contact* con);
//10���˳�����
void exit_contact(struct Contact* con);