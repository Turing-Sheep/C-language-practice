#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

enum contact
{
	ADD=1,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	EXIT=0
};

int main()
{
	int choice;
	struct Contact con;
	Init(&con);
	do 
	{
		
		contact_menu();
		printf("ÇëÊäÈëÄúµÄÑ¡Ôñ£º>\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case ADD:
				ADD_number(&con);
				system("pause");
				system("cls");
				break;
			case DEL:
				DEL_number(&con);
				system("pause");
				system("cls");
				break;
			case SEARCH:
				SEARCH_number(&con);
				system("pause");
				system("cls");
				break;
			case MODIFY:
				MODIFY_number(&con);
				system("pause");
				system("cls");
				break;
			case SHOW:
				SHOW_number(&con);
				system("pause");
				system("cls");
				break;
			case SORT:
				SORT_number(&con);
				system("pause");
				system("cls");
				break;
			case EXIT:
				break;
			default:
				break;
		}

	} while (choice);
	return 0;
}
