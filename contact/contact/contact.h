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
	struct Information number[MAX_NUMBER];//创建一个结构体指针数组，开辟空间存储联系人
	int len;//记录空间中联系人的数量
};

//初始化通讯录
void Init(struct Contact* con);

//1、菜单界面
void contact_menu();


//2、添加联系人
void ADD_number(struct Contact* con);

//3、删除联系人
void DEL_number(struct Contact*con);

//4、查找联系人
void SEARCH_number(struct Contact*con);

//5、修改联系人
void MODIFY_number(struct Contact*con);

//6、展示所有联系人
void SHOW_number(struct Contact*con);

//7、将联系人进行排序
void SORT_number(struct Contact* con);

