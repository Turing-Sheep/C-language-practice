// #include<iostream>
// #include<cstring>
// using namespace std;
// const int N=1e5+10;
// int h[N],e[N],ne[N],idx,ans;
// bool m[N];
// void add(int x,int y)
// {
//     e[idx]=y;
//     ne[idx]=h[x];
//     h[x]=idx++;
// }

// int dfs(int u)//u表示节点
// {
//     if(h[u]==-1)return 0;
//     int sum=0;
//     for(int i=h[u];i!=-1;i=ne[i])
//     {
//         int j=e[i];
//         if(!m[j])
//         {
//             m[j]=true;
//             sum=dfs(j)+1;
//         }
//         ans=max(sum,ans);
//     }
    
//     return sum;
// }

// int main()
// {
//     memset(h,-1,sizeof h);
//     int n;
//     cin>>n;
//     while(n--)
//     {
//         int x,y;
//         add(x,y);
//         add(y,x);
//     }
//     cout<<dfs(1);
// }
