// #include<iostream>
// using namespace std;
// const int N=10010;
// int n, m;
// int a[N], s[N];

// int main()
// {
//     scanf("%d%d",&n,&m);
//     for (int i = 1; i <= n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i = 1; i <= n;i++)
//     {
//         s[i] = s[i - 1] + a[i];
//     }
//     while(m--)
//     {
//         int l, r;
//         scanf("%d%d",&l,&r);
//         printf("%d\n",s[r]-s[r-1]);
//     }
//         return 0;
// }
#include<iostream>
#include<cstring>
using namespace std;

const int N=1e5+10;
int arr[N];
int S[N];

bool check(int i,int j)
{
    while(j<=i)
    {
        S[arr[j]]++;
        if(S[arr[j]]>1)
        {
            return true;
        }
        else
        j++;
    }
    memset(S,0,sizeof(S));
    return false;
}

int main()
{
    int n;
    scanf("%d" ,&n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int j=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        while(j<n&&check(i,j))j++;
        res=max(res,i-j+1);
    }
    cout<<res<<endl;
    return 0;
}