#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}
//// 计算Fibonacci的空间复杂度？
//long long* Fibonacci(size_t n)
//{
//	if (n == 0)
//		return NULL;
//	long long* fibArray =
//		(long long*)malloc((n + 1) * sizeof(long long));
//	fibArray[0] = 0;
//	fibArray[1] = 1; for (int i = 2; i <= n; ++i)
//	{
//		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
//	}
//	return fibArray;
//}
//// 计算阶乘递归Factorial的空间复杂度？
//long long Factorial(size_t N)
//{
//	return N < 2 ? N : Factorial(N - 1) * N;
//}
//
//
//// 计算斐波那契递归Fib的时间复杂度？
//long long Fib(size_t N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fib(N - 1) + Fib(N - 2);
//}
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#define MAX 11
//using namespace std;
//char score_der[7500]={0};
//char score_fin[7500]={0};
//int main()
//{
//	char c;
//	int i=0;
//	while((c=getchar())!=EOF)
//	{
//		if(c!='\n')
//		score_der[i++]=c;
//	}
//	i=0;
//	while(score_der[i]!='E')
//	{
//		score_fin[i]=score_der[i];
//		i++;
//	}
//	int len=strlen(score_fin);
//	int a=0,b=0;
//	int count=0;
//	for(int j=0;j<len;j++)
//	{
//		if(count==11)
//		{
//			cout<<a<<":"<<b<<endl;
//			a=0,b=0;
//		}
//		if(score_fin[j]=='W')a++;
//		if(score_fin[i]=='L')b++;
//		count++;
//	}
//	a=0,b=0;
//	int surplus=len%11;
//	for(int k=0;k<surplus;k++)
//	{
//		if(score_fin[len-1-k]=='W')a++;
//		if(score_fin[len-1-k]=='L')b++;
//	}
//	cout<<a<<":"<<b;
//	return 0;
//#include<iostream>
//using namespace std;
//char win[62500];
//int main(){
//	int w,l;
//
//	}
//	w=0;
//	l=0;
//	for(int i=0;;++i){
//		if(win[i]=='E')break;
//		if(win[i]=='W')++w;
//		if(win[i]=='L')++l;
//		if((w-l>=2||l-w>=2)&&(w>=11||l>=11)){
//			cout<<w<<':'<<l<<endl;
//			w=0;
//			l=0;
//		}
//	}
//	cout<<w<<':'<<l<<endl;
//	cout<<endl;
//	w=0;
//	l=0;
//	for(int i=0;;++i){
//		if(win[i]=='E')break;
//		if(win[i]=='W')++w;
//		if(win[i]=='L')++l;
//		if((w-l>=2||l-w>=2)&&(w>=21||l>=21)){
//			cout<<w<<':'<<l<<endl;
//			w=0;
//			l=0;
//		}
//	}
//	cout<<w<<':'<<l<<endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//char str[62500];
//int win=0,lose=0;
//int main()
//{
//	int i=0;
//	do
//	{
//		cin>>str[i];
//		if(str[i]=='E')break;
//	}while(++i);
//	
//	for(int j=0;;j++)
//	{
//		if(str[j]=='E')break;
//		if(str[j]=='W')win++;
//		if(str[j]=='L')lose++;
//		if((win-lose>=2||lose-win>=2)&&(win>=11||lose>=11))
//		{
//			cout<<win<<':'<<lose<<endl;
//			win=0;
//			lose=0;
//		}
//	}
//	cout<<win<<':'<<lose<<endl;
//	cout<<endl;
//	win=0;
//	lose=0;
//	
//	for(int j=0;;j++)
//	{
//		if(str[j]=='E')break;
//		if(str[j]=='W')win++;
//		if(str[j]=='L')lose++;
//		if((win-lose>=2||lose-win>=2)&&(win>=21||lose>=21))
//		{
//			cout<<win<<':'<<lose<<endl;
//			win=0,lose=0;
//		}
//	}
//	cout<<win<<':'<<lose<<endl;
//	
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//char win[62500];
//int main(){
//	int w,l;
//	for(int i=0;;++i){
//		cin>>win[i];
//		if(win[i]=='E')break;
//	}
//	w=0;
//	l=0;
//	for(int i=0;;++i){
//		if(win[i]=='E')break;
//		if(win[i]=='W')++w;
//		if(win[i]=='L')++l;
//		if((w-l>=2||l-w>=2)&&(w>=11||l>=11)){
//			cout<<w<<':'<<l<<endl;
//			w=0;
//			l=0;
//		}
//	}
//	cout<<w<<':'<<l<<endl;
//	cout<<endl;
//	w=0;
//	l=0;
//	for(int i=0;;++i){
//		if(win[i]=='E')break;
//		if(win[i]=='W')++w;
//		if(win[i]=='L')++l;
//		if((w-l>=2||l-w>=2)&&(w>=21||l>=21)){
//			cout<<w<<':'<<l<<endl;
//			w=0;
//			l=0;
//		}
//	}
//	cout<<w<<':'<<l<<endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,m;
//	cin>>n>>m;
//	getchar();
//	char str[n+2][m+2]={0};
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			cin>>str[i][j];
//		}
//		getchar();
//	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			if(str[i][j]!='*')
//			{
//				int count=0;
//				for(int q=i-1;q<=i+1;q++)
//				{
//					for(int p=j-1;p<=j+1;p++)
//					{
//						if(str[q][p]=='*')count++;
//					}
//				}
//				str[i][j]='0'+count;
//			}
//		}
//	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			cout<<str[i][j];
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<cstring>
//using namespace std;
//char a[505],b[505];
//int A[505],B[505],C[506];
//int main()
//{
//	cin>>a>>b;
//	int len_a=strlen(a);
//	int len_b=strlen(b);
//	for(int i=0;i<len_a;i++)
//		A[len_a-1-i]=a[i]-'0';
//	for(int i=0;i<len_b;i++)
//		B[len_b-1-i]=b[i]-'0';
//	int len_max=(len_a>len_b?len_a:len_b)+1;
//	for(int i=0;i<=len_max;i++)
//	{
//		C[i]+=A[i]+B[i];
//		C[i+1]=C[i]/10;
//		C[i]=C[i]%10;
//		
//	}
//	while(len_max>0&&C[len_max]==0)len_max--;
//	for(int i=len_max;i>=0;i--)cout<<C[i];
//	return 0;
//}
//#include<iostream>
//#include<cstring>
//using namespace std;
//char a[2005],b[2005];
//int A[2005],B[2005],C[2006];
//
//int main()
//{
//	cin>>a>>b;
//	int len_a=strlen(a);
//	int len_b=strlen(b);
//	int lc=len_a+len_b;
//	for(int i=0;i<len_a;i++)A[len_a-i-1]=a[i]-'0';
//	for(int i=0;i<len_b;i++)B[len_b-i-1]=b[i]-'0';
//	for(int i=1;i<=len_a;i++)
//	{
//		for(int j=i;j<=len_b;j++)
//		{
//			C[i+j-1]+=a[i]*b[i];
//			C[i+j]+=C[i+j-1]/10;
//			C[i+j-1]%=10;
//		}
//	}
//	while(C[lc]==0&&lc>0)lc--;
//	for(int i=lc;i>=0;i--)
//		cout<<C[i];
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<cstdio>
//
////归并部分
//void merge(int* arr, int low, int mid, int high)
//{
//	int* b = new int[high - low + 1];
//	int i = low, j = mid + 1, k = 0;
//	while (i <= mid && j <= high)
//	{
//		if (arr[i] <= arr[j])b[k++] = arr[i++];
//		else b[k++] = arr[j++];
//	}
//	while (i <= mid)b[k++] = arr[i++];
//	while (j <= high)b[k++] = arr[j++];
//	for (i = low, k = 0; i <= high; i++)
//		arr[i] = b[k++];
//	delete[] b;
//}
////分治部分
//void mergesort(int* A, int low, int high)
//{
//	
//	if (low < high)
//	{
//		int mid = (low + high) / 2;
//		mergesort(A, low, mid);
//		mergesort(A, mid + 1, high);
//		merge(A, low, mid, high);
//	}
//}
//
//
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d",arr+i);
//	}
//	mergesort(arr,0,n-1);
//	for(int i=0;i<n-1;i++)
//	{
//		if(arr[i+1]-arr[i]==2)
//		{
//			printf("%d",arr[i+1]-1);
//			return 0;
//		}
//
//	}
//	printf("%d",n+1);
//	
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    int a = 0;
//    scanf("%d", &n);
//    int sum1 = 0;
//    int sum2 = 0;
//    int temp = n;
//    while (temp--)
//    {
//        scanf("%d", &a);
//        sum1 += a;
//        sum2 += n--;
//    }
//    printf("%d", sum2 - sum1);
//    return 0;
//}
#include<stdio.h>
//int missingNumber(int* nums, int numsSize)
//{
//    int a = 0;
//    int max = numsSize;
//    while (max)
//    {
//        a ^= max--;
//    }
//    for (int i = 0; i < numsSize; i++)
//    {
//        a ^= nums[i];
//    }
//    return a;
//
//}
//int removeElement(int* nums, int numsSize, int val)
//{
//	int temp[numsSize];
//	int k = 0;
//	for(int i=0;i<numsSize;i++)
//	{
//		if (nums[i] != val)
//		{
//			temp[k++] = nums[i];
//		}
//	}
//	for (int i = 0; i < k; i++)
//	{
//		nums[i] = temp[i];
//	}
//	return k;
//
//}
int removeElement(int* nums, int numsSize, int val)
{
	int des = 0;
	int src = 0;
	while (src < numsSize)
	{
		if (nums[src] != val)
		{
			nums[des] = nums[src];
			des++;
			src++;
		}
		else
		{
			src++;
		}
	}
	return des;
}

int main()
{
    int arr[] = { 0,1,2,2,3,0,4,2 };
	int ret = removeElement(arr,8,2);
	for (int i = 0; i < ret; i++)
	{
		printf("%d ",arr[i]);
	}
    return 0;
}