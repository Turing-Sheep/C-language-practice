#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void Init(struct Contact* con)
{
	assert(con!=NULL);
	memset(con->number,0,MAX_NUMBER*sizeof(struct Information));
	con->len = 0;
}

void contact_menu()
{
	printf("**************************************\n");
	printf("*****   1. add      2. del       *****\n");
	printf("*****   3. search   4. modify    *****\n");
	printf("*****   5. show     6. sort      *****\n");
	printf("*****   0. exit                  *****\n");
	printf("**************************************\n");
}

void ADD_number(struct Contact* con)
{
	assert(con!=NULL);
	//记录添加联系人的数量
	int num;
	printf("请输入您需要添加的联系人数量：>\n");
	scanf("%d",&num);
	for (int i = 0; i < num; i++)
	{
		printf("请填写第%d个联系人的信息：>\n",i+1);
		printf("请输入联系人的姓名：>\n");
		scanf("%s",con->number[i+(con->len)].name);
		printf("请输入联系人的性别：>\n");
		scanf("%s",(con->number[i+con->len].sex));
		printf("请输入联系人的年龄：>\n");
		scanf("%d",&(con->number[i].age));
		printf("请输入联系人的电话：>\n");
		scanf("%s",con->number[i].phone);
		printf("请输入联系人的住址：>\n");
		scanf("%s",con->number[i].addr);
		printf("\n");
	}
	//更新通讯录中总联系人的数量
	con->len += num;
}

void DEL_number(struct Contact* con)
{
	assert(con!=NULL);
	printf("请输入要删除的联系人姓名：>");
	char DEL_name[30];//记录删除人的姓名
	int del_number=-1;//记录删除人所在位置
	scanf("%s",DEL_name);
	for (int i = 0; i < con->len; i++)
	{
		if (strcmp(con->number[i].name, DEL_name) == 0)
		{
			del_number = i;
			break;
		}
	}
	//将删除人后面的人向前移动一个位置，覆盖掉。
	if (del_number == -1)
	{
		printf("该联系人不存在！\n");
	}
	else
	{
		for (int i = del_number; i < con->len - 1; i++)
		{
			strcpy(con->number[i].name, con->number[i + 1].name);
			strcpy(con->number[i].phone, con->number[i + 1].phone);
			strcpy(con->number[i].addr, con->number[i + 1].addr);
			strcpy(con->number[i].sex, con->number[i + 1].sex);
			con->number[i].age = con->number[i + 1].age;

		}
		con->len--;
	}

}

void SEARCH_number(struct Contact* con)
{
	assert(con!=NULL);
	printf("请输入您需要查找的联系人的姓名：>\n");
	char Search_Name[30];
	int search_number=-1;//记录人所在位置
	scanf("%s", Search_Name);
	for (int i = 0; i < con->len; i++)
	{
		if (strcmp(con->number[i].name, Search_Name) == 0)
		{
			search_number = i;
			break;
		}
	}

	if (search_number == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("已成功找到该联系人！其信息如下：>\n");
		printf("姓名：%s  ", con->number[search_number].name);
		printf("年龄：%d  ",&(con->number[search_number].age));
		printf("性别：%s  ",con->number[search_number].sex);
		printf("电话：%s  ",con->number[search_number].phone);
		printf("地址：%s  ",con->number[search_number].addr);
	}

}

void MODIFY_number(struct Contact* con)
{
	assert(con!=NULL);
	printf("请输入您需要修改的联系人姓名：>\n");
	char Search_Name[30];
	int search_number = -1;//记录人所在位置
	scanf("%s", Search_Name);
	for (int i = 0; i < con->len; i++)
	{
		if (strcmp(con->number[i].name, Search_Name) == 0)
		{
			search_number = i;
			break;
		}
	}

	if (search_number == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("已成功找到该联系人,其信息如下：>\n");
		printf("姓名：%s", con->number[search_number].name);
		printf("年龄：%d", con->number[search_number].age);
		printf("性别：%s", con->number[search_number].sex);
		printf("电话：%s", con->number[search_number].phone);
		printf("地址：%s", con->number[search_number].addr);
	}

	printf("请修改该联系人信息：>\n");
	printf("姓名：");
	scanf("%s", con->number[search_number].name);
	printf("年龄：");
	scanf("%d", &(con->number[search_number].age));
	printf("性别：");
	scanf("%s", con->number[search_number].sex);
	printf("电话：");
	scanf("%s",con->number[search_number].phone);
	printf("地址：");
	scanf("%s",con->number[search_number].addr);
}

void SHOW_number(struct Contact* con)
{
	assert(con!=NULL);
	printf("通讯录中共有%d个联系人。信息如下：\n",con->len);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (int i=0;i<con->len;i++)
	{
		
		printf("%-20s\t%-5s\t%-5d\t%-12s\t%-30s\n", con->number[i].name,
			con->number[i].sex,
			con->number[i].age,
			con->number[i].phone,
			con->number[i].addr);
	}
}

int compare_age(void* num1, void* num2)
{
	int ret=((struct Information*)num1)->age - ((struct Information*)num2)->age;
	return ret;
}

void SORT_number(struct Contact* con)
{
	qsort(con->number,con->len,sizeof(struct Information),compare_age);
	printf("排序成功！\n");
}