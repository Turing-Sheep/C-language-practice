//1、字符串的展开
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// char* cut_str(char *str)
// {
//     char *nums = (char *)calloc(105,sizeof(char*));//记录每一段字符串的地址
//     int len = strlen(str);
//     int j = 0;
//     int llen = 0;
//     for (int i = 0; i < len;i++)
//     {
//         if(str[i]=='-')
//         {
//             nums[j++] = (char *)calloc(llen+1,sizeof(char));
//         }
//     }
// }

// int main()
// {
//     int p1, p2, p3;
//     char str[105];
//     scanf("%d %d %d",&p1,&p2,&p3);
//     scanf("%s", str);
//     return 0;
// }

//2、大整数乘法
// #include<stdio.h>
// #include<string.h>
// char a[2005], b[2005];
// int A[2005], B[2005], C[4100];
// int lA, lB, lC;
// int main()
// {
//     memset(a,0,sizeof(a));
//     memset(b,0,sizeof(b));
//     memset(A,0,sizeof(A));
//     memset(B,0,sizeof(B));
//     memset(C,0,sizeof(C));

//     scanf("%s",a);
//     scanf("%s",b);
//     //计算两个数的长度
//     lA = strlen(a);
//     lB = strlen(b);
//     //计算结果的最大位数
//     lC = lA + lB;
//     //倒置两个数
//     for (int i = 0; i < lA; i++)
//     {
//         A[lA - i - 1] = a[i]-'0';
//     }
//     for (int i = 0; i < lB; i++)
//     {
//         B[lB - i - 1] = b[i]-'0';
//     }
//     //开始模拟竖式乘法
//     for (int i = 0; i < lA;i++)
//     {
//         for (int j = 0; j < lB;j++)
//         {
//             C[i + j] += A[i] * B[j];
//             C[i + j+1] += C[i + j] / 10;
//             C[i + j] = C[i + j] % 10;
//         }
//     }
//     //去除前导零
//     while(C[lC-1]==0&&lC>1)
//     {
//         lC--;
//     }
//     for (int i = lC-1; i >= 0;i--)
//     {
//         printf("%d",C[i]);
//     }

//         return 0;
// }

// #include<stdio.h>
// #include<string.h>
// struct object
// {
// 	int x;//横坐标
// 	int y;//纵坐标
// 	int dir;//方向
// }Farmer,Cows;

// int Map[12][12];
// int dx[4]={-1,0,1,0};
// int dy[4]={0,1,0,-1};
// int all[12][12][4][12][12][4];//记录每次移动的状态

// void moving()
// {
// 	int c_next_x = Cows.x+dx[Cows.dir];
// 	int c_next_y = Cows.y+dy[Cows.dir];
// 	if(Map[c_next_x][c_next_y]==0)
// 	{
// 		Cows.dir=(Cows.dir+1)%4;
// 	}
// 	else
// 	{
// 		Cows.x=c_next_x;
// 		Cows.y=c_next_y;
// 	}
	
// 	int f_next_x=Farmer.x+dx[Farmer.dir];
// 	int f_next_y=Farmer.y+dy[Farmer.dir];
// 	if(Map[f_next_x][f_next_y]==0)
// 	{
// 		Farmer.dir=(Farmer.dir+1)%4;
// 	}
// 	else
// 	{
// 		Farmer.x=f_next_x;
// 		Farmer.y=f_next_y;
// 	}
// }

// int main()
// {
// 	memset(Map,0,sizeof(Map));
// 	for(int i=1;i<11;i++)
// 	{

// 		for(int j=1;j<11;j++)
// 		{
// 			char input;
// 			scanf("%c",&input);
// 			if(input=='*')
// 			{
// 				continue;
// 			}
// 			else if(input=='.')
// 			{
// 				//为1，则该坐标点可以走
// 				Map[i][j]=1;
// 			}
// 			else if(input=='C')
// 			{
// 				Map[i][j]=1;
// 				//定位牛的初始位置
// 				Cows.x=i;
// 				Cows.y=j;
// 				Cows.dir=0;
// 			}
// 			else
// 			{
// 				Map[i][j]=1;
// 				//定位人的初始位置
// 				Farmer.x=i;
// 				Farmer.y=j;
// 				Farmer.dir=0;
// 			}
// 		}
// 		getchar();
// 	}
// 	int count=0;//记录移动步数

// 	memset(all,0,sizeof(all));
// 	while(Farmer.x!=Cows.x||Farmer.y!=Cows.y)
// 	{
// 		if(all[Farmer.x][Farmer.y][Farmer.dir][Cows.x][Cows.y][Cows.dir]==1)
// 		{
// 			printf("2");
// 			printf("0");
// 			return 0;
// 		}
// 		// else
// 		// {
// 			moving();
// 			all[Farmer.x][Farmer.y][Farmer.dir][Cows.x][Cows.y][Cows.dir] = 1;
// 			count++;
// 			printf("1");
// 			// }
// 	}
// 	printf("%d",count);
// 	return 0;
// }