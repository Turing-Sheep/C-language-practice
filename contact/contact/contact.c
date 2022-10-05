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
	//��¼�����ϵ�˵�����
	int num;
	printf("����������Ҫ��ӵ���ϵ��������>\n");
	scanf("%d",&num);
	for (int i = 0; i < num; i++)
	{
		printf("����д��%d����ϵ�˵���Ϣ��>\n",i+1);
		printf("��������ϵ�˵�������>\n");
		scanf("%s",con->number[i+(con->len)].name);
		printf("��������ϵ�˵��Ա�>\n");
		scanf("%s",(con->number[i+con->len].sex));
		printf("��������ϵ�˵����䣺>\n");
		scanf("%d",&(con->number[i].age));
		printf("��������ϵ�˵ĵ绰��>\n");
		scanf("%s",con->number[i].phone);
		printf("��������ϵ�˵�סַ��>\n");
		scanf("%s",con->number[i].addr);
		printf("\n");
	}
	//����ͨѶ¼������ϵ�˵�����
	con->len += num;
}

void DEL_number(struct Contact* con)
{
	assert(con!=NULL);
	printf("������Ҫɾ������ϵ��������>");
	char DEL_name[30];//��¼ɾ���˵�����
	int del_number=-1;//��¼ɾ��������λ��
	scanf("%s",DEL_name);
	for (int i = 0; i < con->len; i++)
	{
		if (strcmp(con->number[i].name, DEL_name) == 0)
		{
			del_number = i;
			break;
		}
	}
	//��ɾ���˺��������ǰ�ƶ�һ��λ�ã����ǵ���
	if (del_number == -1)
	{
		printf("����ϵ�˲����ڣ�\n");
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
	printf("����������Ҫ���ҵ���ϵ�˵�������>\n");
	char Search_Name[30];
	int search_number=-1;//��¼������λ��
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
		printf("���޴���\n");
	}
	else
	{
		printf("�ѳɹ��ҵ�����ϵ�ˣ�����Ϣ���£�>\n");
		printf("������%s  ", con->number[search_number].name);
		printf("���䣺%d  ",&(con->number[search_number].age));
		printf("�Ա�%s  ",con->number[search_number].sex);
		printf("�绰��%s  ",con->number[search_number].phone);
		printf("��ַ��%s  ",con->number[search_number].addr);
	}

}

void MODIFY_number(struct Contact* con)
{
	assert(con!=NULL);
	printf("����������Ҫ�޸ĵ���ϵ��������>\n");
	char Search_Name[30];
	int search_number = -1;//��¼������λ��
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
		printf("���޴���\n");
	}
	else
	{
		printf("�ѳɹ��ҵ�����ϵ��,����Ϣ���£�>\n");
		printf("������%s", con->number[search_number].name);
		printf("���䣺%d", con->number[search_number].age);
		printf("�Ա�%s", con->number[search_number].sex);
		printf("�绰��%s", con->number[search_number].phone);
		printf("��ַ��%s", con->number[search_number].addr);
	}

	printf("���޸ĸ���ϵ����Ϣ��>\n");
	printf("������");
	scanf("%s", con->number[search_number].name);
	printf("���䣺");
	scanf("%d", &(con->number[search_number].age));
	printf("�Ա�");
	scanf("%s", con->number[search_number].sex);
	printf("�绰��");
	scanf("%s",con->number[search_number].phone);
	printf("��ַ��");
	scanf("%s",con->number[search_number].addr);
}

void SHOW_number(struct Contact* con)
{
	assert(con!=NULL);
	printf("ͨѶ¼�й���%d����ϵ�ˡ���Ϣ���£�\n",con->len);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
	printf("����ɹ���\n");
}