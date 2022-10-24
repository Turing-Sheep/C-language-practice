#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int arr[5][5];
//int main()
//{
//	int n, m;
//	scanf("%d %d",&n,&m);
//	int num = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] = num++;
//		}
//	}
//
//
//	while (m--)
//	{
//		int x, y, r, z;
//		scanf("%d %d %d %d",&x,&y,&r,&z);
//		if (z == 1)
//		{
//			for (int i = 0; i < 2 * r + 1; i++)
//			{
//				arr[x - r - 1][y - r - 1 + i] 
//					= arr[x - r - 1 + i][y + r - 1];
//			}
//			for (int i = x; i <= x + r; i++)
//			{
//				for (int j = y - r; j <= y + r; j++)
//				{
//					arr[i - 1][j - 1] 
//					= arr[i -r- 1][j - 1] - 1;
//				}
//			}
//		}
//		else
//		{
//			for (int i = 0; i < 2 * r + 1; i++)
//			{
//				arr[x - r - 1][y + r - i - 1] 
//					= arr[x-r-1+i][y-r-1];
//			}
//			for (int i = x; i <= x + r; i++)
//			{
//				for (int j = y - r; j <= y + r; j++)
//				{
//					arr[i - 1][j - 1]
//						= arr[i -r- 1][j - 1] + 1;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}