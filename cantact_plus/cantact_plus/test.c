#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
int main()
{
	//����һ���ṹ��
	struct Contact Con;
	init_contact(&Con);
	int choice;
	do
	{
		//��ʾ�˵�
		menu();
		printf("����������ѡ��>\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case EXIT:
				exit_contact(&Con);
				system("pause");
				system("cls");
				break;
			case ADD:
				add_contact(&Con);
				system("pause");
				system("cls");
				break;
			case DEL:
				del_contact(&Con);
				system("pause");
				system("cls");
				break;
			case SEARCH:
				search_contact(&Con);
				system("pause");
				system("cls");
				break;
			case MODIFY:
				modify_contact(&Con);
				system("pause");
				system("cls");
				break;
			case SHOW:
				Show_contact(&Con);
				system("pause");
				system("cls");
				break;
			case CLEAR:
				clear_contact(&Con);
				system("pause");
				system("cls");
				break;
			case SORT:
				sort_contact(&Con);
				system("pause");
				system("cls");
				break;
			default:
				printf("����Ƿ���\n");
				system("pause");
				system("cls");
				break;
		}
	} while (choice);
	
	return 0;
}