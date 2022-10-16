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
//1、菜单显示
void menu();
//2、初始化：
void init_contact(struct Contact* con);
//3、增加联系人：
void add_contact(struct Contact* con);
//4、删除联系人：
void del_contact(struct Contact* con);
//5、查找联系人：
void search_contact(struct Contact* con);
//6、修改联系人
void modify_contact(struct Contact*con);
//7、显示联系人
void Show_contact(struct Contact* con);
//8、清空联系人
void clear_contact(struct Contact*con);
//9、排序
void sort_contact(struct Contact* con);
//10、退出保存
void exit_contact(struct Contact* con);