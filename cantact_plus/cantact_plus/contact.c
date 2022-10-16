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
	//�ڶ�������һ���ڴ棬�����ṹ���ڵ�listָ���¼���ַ��
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
	printf("����������Ҫ���ӵ�������>\n");
	int number = 0;
	scanf("%d",&number);
	for (int i = 0; i < number; i++)
	{
		printf("-------------------------------------------------------------------\n");
		printf("�������%dλ��ϵ����Ϣ��>\n",(i+1));
		if (con->capacity == (con->len - 2))
		{
			con->list = realloc(con->list,MAX_NUM*2);
			if (con->list == NULL)
			{
				perror("realloc");
			}
			con->capacity = MAX_NUM * 2;
		}
		printf("������\n");
		scanf("%s", con->list[con->len+i].name);
		printf("���䣺\n");
		scanf("%d",&(con->list[con->len+i].age));
		printf("�Ա�\n");
		scanf("%s",con->list[con->len+i].sex);
		printf("�绰��\n");
		scanf("%s",con->list[con->len+i].phone_number);
		printf("-------------------------------------------------------------------\n");
		
	}
	con->len += number;
}

void del_contact(struct Contact* con)
{
	assert(con != NULL);
	printf("����������ɾ������ϵ�˵�������>\n");
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
		printf("�ɹ��ҵ�����ϵ�ˣ����ɹ�ɾ����\n");
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
		printf("δ�ҵ���Ҫɾ������ϵ�ˣ�\n");
	}

}

void search_contact(struct Contact* con)
{
	assert(con != NULL);
	printf("������������ҵ���ϵ�˵�������>\n");
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
		printf("�ɹ��ҵ�����ϵ��!��Ϣ���£�>\n");
		printf("-------------------------------------------------------------------\n");
		printf("������%s\n",con->list[find_num].name);
		printf("���䣺%d\n", con->list[find_num].age);
		printf("�Ա�%s\n", con->list[find_num].sex);
		printf("�绰��%s\n", con->list[find_num].phone_number);
		printf("-------------------------------------------------------------------\n");
	}
	else
	{
		printf("δ�ҵ���ϵ�ˣ�\n");
	}
}

void Show_contact(struct Contact* con)
{
	printf("һ��%dλ��ϵ�ˣ�\n",con->len);
	assert(con != NULL);
	printf("-------------------------------------------------------------------\n");
	printf("%8s\t%3s\t%4s\t%11s\t\n", "����", "����", "�Ա�", "�绰");
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
	printf("��������Ҫ�޸ĵ���ϵ��������>\n");
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
		printf("�ɹ��ҵ�����ϵ��!��Ϣ���£�>\n");
		printf("������%s\n", con->list[find_num].name);
		printf("���䣺%d\n", con->list[find_num].age);
		printf("�Ա�%s\n", con->list[find_num].sex);
		printf("�绰��%s\n", con->list[find_num].phone_number);
		printf("-------------------------------------------------------------------\n");
	}
	else
	{
		printf("δ�ҵ���ϵ�ˣ�\n");
	}
	printf("-------------------------------------------------------------------\n");
	printf("�������޸ĺ����Ϣ��>\n");
	printf("������");
	scanf("%s", con->list[find_num].name);
	printf("���䣺");
	scanf("%d", &(con->list[find_num].age));
	printf("�Ա�");
	scanf("%s", con->list[find_num].sex);
	printf("�绰��");
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
	printf("����ɹ���\n");
	printf("��������������ɼ�����ӡ�\n");
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

	printf("����ɹ���\n");
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