#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf("******************************\n");
	printf("*****1. add   2. del *********\n");
	printf("*****3. search 4. modify *****\n");
	printf("*****5. show  6. clear *******\n");
	printf("*****7. sort  0. exit ********\n");
	printf("******************************\n");
}
void init_contact(struct Contact* con)
{
	assert(con!=NULL);
	//在堆区开辟一段内存，并将结构体内的list指针记录其地址。
	con->list = (struct People*)calloc(MAX_NUM,sizeof(struct People));
	con->len = 0;
	con->capacity = MAX_NUM;
	if (con->list == NULL)
	{
		perror("calloc");
	}
	FILE*pfr=fopen("contact.txt","r");
	if (pfr != NULL)
	{
		while (fscanf(pfr, "%s %d %s %s",
			con->list[con->len].name,
			&con->list[con->len].age,
			con->list[con->len].sex,
			con->list[con->len].phone_number) != EOF)
		{
			con->len++;
		}
		
	}
}

void add_contact(struct Contact* con)
{
	assert(con != NULL);
	printf("请输入您需要增加的人数：>\n");
	int number = 0;
	scanf("%d",&number);
	for (int i = 0; i < number; i++)
	{
		printf("-------------------------------------------------------------------\n");
		printf("请输入第%d位联系人信息：>\n",(i+1));
		if (con->capacity == (con->len - 2))
		{
			con->list = realloc(con->list,MAX_NUM*2);
			if (con->list == NULL)
			{
				perror("realloc");
			}
			con->capacity = MAX_NUM * 2;
		}
		printf("姓名：\n");
		scanf("%s", con->list[con->len+i].name);
		printf("年龄：\n");
		scanf("%d",&(con->list[con->len+i].age));
		printf("性别：\n");
		scanf("%s",con->list[con->len+i].sex);
		printf("电话：\n");
		scanf("%s",con->list[con->len+i].phone_number);
		printf("-------------------------------------------------------------------\n");
		
	}
	con->len += number;
}

void del_contact(struct Contact* con)
{
	assert(con != NULL);
	printf("请输入所需删除的联系人的姓名：>\n");
	char del_name[20];
	int del_num;
	scanf("%s",del_name);
	int is_exist = 0;
	for (int i = 0; i < con->len; i++)
	{
		if (strcmp(con->list[i].name, del_name) == 0)
		{
			is_exist = 1;
			del_num = i;
			break;
		}
	}
	if (is_exist)
	{
		printf("成功找到该联系人，并成功删除！\n");
		for (int i = del_num; i++; i < (con->len) - 1)
		{
			con->list[i].age = con->list[i + 1].age;
			strcpy(con->list[i].name, con->list[i + 1].name);
			strcpy(con->list[i].sex, con->list[i + 1].sex);
			strcpy(con->list[i].phone_number, con->list[i + 1].phone_number);

		}
		con->len--;
	}
	else
	{
		printf("未找到您要删除的联系人！\n");
	}

}

void search_contact(struct Contact* con)
{
	assert(con != NULL);
	printf("请输入所需查找的联系人的姓名：>\n");
	char find_name[20];
	int find_num;
	scanf("%s", find_name);
	int is_exist = 0;
	for (int i = 0; i < con->len; i++)
	{
		if (strcmp(con->list[i].name, find_name) == 0)
		{
			is_exist = 1;
			find_num = i;
			break;
		}
	}
	if (is_exist)
	{
		printf("成功找到该联系人!信息如下：>\n");
		printf("-------------------------------------------------------------------\n");
		printf("姓名：%s\n",con->list[find_num].name);
		printf("年龄：%d\n", con->list[find_num].age);
		printf("性别：%s\n", con->list[find_num].sex);
		printf("电话：%s\n", con->list[find_num].phone_number);
		printf("-------------------------------------------------------------------\n");
	}
	else
	{
		printf("未找到联系人！\n");
	}
}

void Show_contact(struct Contact* con)
{
	printf("一共%d位联系人：\n",con->len);
	assert(con != NULL);
	printf("-------------------------------------------------------------------\n");
	printf("%8s\t%3s\t%4s\t%11s\t\n", "名字", "年龄", "性别", "电话");
	for (int i = 0; i < con->len; i++)
	{
		printf("%8s\t", con->list[i].name);
		printf("%3d\t", con->list[i].age);
		printf("%4s\t", con->list[i].sex);
		printf("%11s\n", con->list[i].phone_number);
	}
	printf("-------------------------------------------------------------------\n");
}
void modify_contact(struct Contact* con)
{
	assert(con != NULL);
	printf("请输入需要修改的联系人姓名：>\n");
	char find_name[20];
	int find_num;
	scanf("%s", find_name);
	int is_exist = 0;
	for (int i = 0; i < con->len; i++)
	{
		if (strcmp(con->list[i].name, find_name) == 0)
		{
			is_exist = 1;
			find_num = i;
			break;
		}
	}
	if (is_exist)
	{
		printf("-------------------------------------------------------------------\n");
		printf("成功找到该联系人!信息如下：>\n");
		printf("姓名：%s\n", con->list[find_num].name);
		printf("年龄：%d\n", con->list[find_num].age);
		printf("性别：%s\n", con->list[find_num].sex);
		printf("电话：%s\n", con->list[find_num].phone_number);
		printf("-------------------------------------------------------------------\n");
	}
	else
	{
		printf("未找到联系人！\n");
	}
	printf("-------------------------------------------------------------------\n");
	printf("请输入修改后的信息：>\n");
	printf("姓名：");
	scanf("%s", con->list[find_num].name);
	printf("年龄：");
	scanf("%d", &(con->list[find_num].age));
	printf("性别：");
	scanf("%s", con->list[find_num].sex);
	printf("电话：");
	scanf("%s", con->list[find_num].phone_number);
	printf("-------------------------------------------------------------------\n");
}
void clear_contact(struct Contact* con)
{
	assert(con != NULL);
	free(con->list);
	con->list = NULL;
	con->len = 0;
	con->capacity = MAX_NUM;
	printf("清除成功！\n");
	printf("请重新启动，则可继续添加。\n");
	FILE* pfw = fopen("contact.txt", "w");
	if (pfw == NULL)
	{
		perror("fopen");
	}
	for (int i = 0; i < con->len; i++)
	{
		fprintf(pfw, "");
	}
	fclose(pfw);
	pfw == NULL;
	exit(0);
}

int age_cmp(void* num1, void* num2)
{
	int ret = ((struct People*)num1)->age - ((struct People*)num2)->age;
	return ret;
}
void sort_contact(struct Contact* con)
{
	assert(con != NULL);
	qsort(con->list, con->len,sizeof(struct People),age_cmp);

	printf("排序成功！\n");
	Show_contact(con);
}
void exit_contact(struct Contact* con)
{
	FILE* pfw = fopen("contact.txt", "w");
	if (pfw == NULL)
	{
		perror("fopen");
	}
	for (int i = 0; i < con->len; i++)
	{
		fprintf(pfw, "%s %d %s %s ", con->list[i].name,con->list[i].age,con->list[i].sex,con->list[i].phone_number);
	}
	fclose(pfw);
	pfw == NULL;
	free(con->list);
	con->list = NULL;
}