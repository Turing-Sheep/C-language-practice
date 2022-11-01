// #include<stdio.h>
// #include<math.h>
// struct ListNode 
// {
//       int val;
//       struct ListNode *next;
// };
 
// struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
// {
// 	if(headA==NULL||headB==NULL)
// 	{
// 		return NULL;
// 	}
// 	//判断是否相交
// 	struct ListNode*tailA=headA;
// 	struct ListNode*tailB=headB;
// 	int len_A=1;
// 	int len_B=1;
// 	while(tailA->next!=NULL)
// 	{
// 		tailA=tailA->next;
// 		len_A++;
// 	}
// 	while(tailB->next!=NULL)
// 	{
// 		tailB=tailB->next;
// 		len_B++;
// 	}
// 	if(&tailA!=&tailB)
// 	{
// 		return NULL;
// 	}
// 	//若相交，求交点
// 	int Gap=abs(len_A-len_B);
// 	struct ListNode*slow=headB;
// 	struct ListNode*quick=headA;
// 	if(len_B>len_A)
// 	{
// 		slow=headA;
// 		quick=headB;
// 	}
// 	while(Gap--)
//     {
//         quick = quick->next;
//     }
//     while(slow!=quick)
//     {
//         slow = slow->next;
//         quick = quick->next;
//     }
//     return slow;
// }
// int main()
// {
//     int n;

//         return 0;
// }
#include<stdio.h>

struct people
{
	int x;//x坐标
	int y;//y坐标
	int face;//朝向的位置

};

int map[15][15] = {0};
int judge[10][10][4][10][10][4] = { 0 };

int dir_x[4] = {-1,0,1,0};
int dir_y[4] = {0,1,0,-1};

void moving(struct people*Farmer, struct people*Cows)
{
	int F_next_x = Farmer->x + dir_x[Farmer->face];
	int F_next_y = Farmer->y + dir_y[Farmer->face];

	int C_next_x = Cows->x + dir_x[Cows->face];
	int C_next_y = Cows->y + dir_y[Cows->face];
	if (map[F_next_x][F_next_y] == 0)
	{
		Farmer->face = (Farmer->face + 1) % 4;
	}
	else
	{
		Farmer->x = F_next_x;
		Farmer->y = F_next_y;
	}

	if (map[C_next_x][C_next_y] == 0)
	{
		Cows->face = (Cows->face + 1) % 4;
	}
	else
	{
		Cows->x = C_next_x;
		Cows->y = C_next_y;
	}

}

int main()
{
	int time = 0;
	char input;
	//创建两个对象
	struct people Farmer, Cows;
	//初始化地图，记录人和牛的位置
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			scanf("%c",&input);

			if (input == '*')
			{
				continue;
			}
			if (input == '.')
			{
				map[i][j] = 1;
			}
			if (input == 'C')
			{
				Cows.x = i;
				Cows.y = j;
				Cows.face = 0;
				map[i][j] = 1;
			}
			if (input == 'F')
			{
				Farmer.x = i;
				Farmer.y = j;
				Farmer.face = 0;
				map[i][j] = 1;
			}
		}
		getchar();
	}


	while (Farmer.x != Cows.x || Farmer.y != Cows.y)
	{
		moving(&Farmer,&Cows);
		time++;
		if (judge[Farmer.x - 1][Farmer.y - 1][Farmer.face][Cows.x - 1][Cows.y - 1][Cows.face] == 1)
		{
			printf("0");
			return 0;
		}
		judge[Farmer.x - 1][Farmer.y - 1][Farmer.face][Cows.x - 1][Cows.y - 1][Cows.face]=1;
		
	}

	printf("%d",time);
	return 0;

}