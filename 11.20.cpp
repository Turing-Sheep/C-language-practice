#include<iostream>
using namespace std;
const int N=1000;
int str[N];
int tmp[N];
int main()
{
  	int n,k;
	scanf("%d %d",&n,&k);
  	for(int i=0;i<n;i++)
  	{
    	cin>>str[i];
  	}
  	for(int i=0;i<n;i++)
    {
      	if(k+i<n)
      	tmp[i]=str[k+i];
      	printf("%d ",tmp[i]);
    }
  return 0;
}