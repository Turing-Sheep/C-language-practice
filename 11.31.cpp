// #include<iostream>
// #include<stack>
// #include<unordered_map>
// using namespace std;
// stack<int>nums;
// stack<char>ops;
// void eval()
// {
//     auto r=nums.top();nums.pop();
//     auto l=nums.top();nums.pop();
//     auto c=ops.top();ops.pop();
//     if(c=='+')nums.push(l+r);
//     else if(c=='-')nums.push(l-r);
//     else if(c=='*')nums.push(l*r);
//     else nums.push(l/r);
// }
// int main()
// {
//     string str;
//     cin>>str;
//     unordered_map<char,int>pr{{'+',1},{'-',1},{'*',2},{'/',2}};
//     for(int i=0;i<str.size();i++)
//     {
//         if(isdigit(str[i]))
//         {
//             int j=i;int tmp=0;
//             while(j<str.size()&&isdigit(str[j]))
//                 tmp=tmp*10+str[j++]-'0';
//             i=j-1;
//             nums.push(tmp);
//         }
//         else if(str[i]=='(')
//             ops.push(str[i]);
//         else if(str[i]==')')
//         {
//             while(ops.top()!='(')eval();
//             ops.pop();
//         }
//         else
//         {
//             while(!ops.empty()&& ops.top() != '('&&pr[ops.top()]>=pr[str[i]])eval();
//             ops.push(str[i]);
//         }
//     }
//     while(!ops.empty())eval();
//     cout<<nums.top()<<endl;
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// const int N=1e5+10;
// const int M=31*N;
// int a[M][2],idx;
// void insert(int x)
// {
//     int p=0;
//     for(int i=31;i>=0;i--)
//     {
//         int t=x>>i&1;
//         if(a[p][t]==0)a[p][t]=++idx;
//         p=a[p][t];
//     }
// }
// int quary(int x)
// {
//     int p=0,res=0;
//     for(int i=31;i>=0;i--)
//     {
//         int t=x>>i&1;
//         if(a[p][!t]!=0)
//         {
//             res=res*2+1;
//             p=a[p][!t];
//         }
//         else
//         {
//             res=res*2;
//             p=a[p][t];
//         }
//     }
//     return res;
// }
// int main()
// {
//     vector<int>v;
//     int n,x;cin>>n;
//     int ans=0;
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&x);
//         v.push_back(x);
//     }
//     for(int i=0;i<n;i++)
//     {
//         insert(v[i]);
//         int t=quary(v[i]);
//         ans=max(ans,t);
//     } 
//     printf("%d",ans);   
// }
// #include<iostream>
// using namespace std;
// const int N=1e5+10;
// int p[N],s[N];
// int find(int x)
// {
//     if(p[x]!=x)p[x]=find(p[x]);
//     return p[x];
// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     for(int i=1;i<=n;i++)
//     {
//         p[i]=i;
//         s[i]=1;
//     }
//     while(m--)
//     {
//         string str;
//         int a,b;
//         cin>>str;
//         if(str=="C")
//         {
//             scanf("%d%d",&a,&b);
//             if(find(a)!=find(b))
//             {
//                 int pa=find(a),pb=find(b);
//                 p[pa]=pb;//让a的租先认b的祖先为爹
//                 s[pb]+=s[pa];
//             }

//         }
//         else if(str=="Q1")
//         {
//             scanf("%d%d",&a,&b);
//             if(find(a)==find(b))
//                 cout<<"Yes"<<endl;
//             else
//                 cout<<"No"<<endl;
//         }
//         else
//         {
//             scanf("%d",&a);
//             cout<<s[find(a)]<<endl;
//         }
//     }
//     return 0;
// }
// #include<iostream>
// #include<unordered_map>
// #include<cmath>
// #include<algorithm>
// using namespace std;
// const int N=1000;
// int a[N];
// void cmp(int n)
// {
//     for(int i=0;i<n;i+=2)
//     {
//         a[(n-2+i)/2]=max(a[n-1+i],a[n+i]);
//     }
//     if(n>1)
//         cmp(n/2);
//     else
//         return;
// }
// int main()
// {
//     int n,nums=1;cin>>n;
//     int n2=pow(2,n);
//     unordered_map<int,int>map;
//     for(int i=n2-1;i<n2*2-1;i++)
//     {
//         int x;
//         cin>>x;
//         a[i]=x;
//         map.insert(make_pair(a[i],nums++));
//     }
//     cmp(n2);
//     cout<<map[a[1]+a[2]-a[0]]<<endl;
//     return 0;
// }
// #include<iostream>
// #include<unordered_map>
// using namespace std;
// const int N=1e5+10;
// int a[N];
// unordered_map<int,int>ma;
// int tree(int x)
// {
//     if(a[x*2+1]==0&&a[x*2]==0)
//     {
//         return 1;
//     }
//     else
//     {
//         int lh=tree(x*2);
//         int rh=tree(x*2+1);
//         if(lh>rh)
//             return lh+1;
//         else
//             return rh+1;
//     }

// }
// int main()
// {
    
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         int l,r,pos=1;
//         scanf("%d%d",&l,&r);
//         if(ma[i]!=0)
//         pos=ma[i];
//         if(l!=0)
//         {
//             a[2*pos]=l;
//             ma.insert(make_pair(l,2*pos));
//         }
//         if(r!=0)
//         {
//             a[2*pos+1]=r;
//             if(r!=0)ma.insert(make_pair(r,2*pos+1));
//         }
//     }
//     int high=tree(1);
//     cout<<high;
//     return 0;
// }
// #include<iostream>
// #include<map>
// using namespace std;
// typedef pair<int,int> pii;
// const int N=1e5+10;
// pii a[N];
// int ok[N][2];
// int n,high;
// void dfs(int u,int deep)
// {
//     if(a[u].first==a[u].second)
//     {
//         high=max(high,deep);
//         return;
//     }
//     dfs(a[u].first,deep+1);
//     dfs(a[u].second,deep+1);
// }
// int main()
// {
//     cin>>n;
//     //搭建一棵树
//     for(int i=1;i<=n;i++)
//     {
//         int x,y;scanf("%d%d",&x,&y);
//         a[i].first=x,a[i].second=y;
//     }
//     //dfs枚举
//     dfs(1,1);
//     cout<<high;
//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// void back(string s1,string s2)
// {
//     int l=s1.find(s2[0]);
//     if(l>0)
//     {
//         string s1_l=s1.substr(0,l);
//         string s2_l=s2.substr(1,l);
//         back(s1_l,s2_l);
//     }
//     if(s1.size()-l-1>0)
//     {
//         string s1_r=s1.substr(l+1,s1.size()-l-1);
//         string s2_r=s2.substr(l+1,s2.size()-l-1);
//         back(s1_r,s2_r);
//     }


//     cout<<s2[0];

// }
// int main()
// {
//     string s1,s2;
//     cin>>s1>>s2;
//     back(s1,s2);
// }

#include<iostream>
const int N=11;
bool a[N],b[N],c[N];
int n;
char ch[N][N];
using namespace std;
void dfs(int u)
{
    if(u==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<ch[i][j];
            }
            puts("");
        }
        return ;
    }
    for(int i=0;i<n;i++)
    {
        if(!a[i]&&!b[u+i]&&!c[n+u-i])
        {
            a[i]=b[u+i]=c[n+u-i]=true;
            ch[u][i]='Q';
            dfs(u+1);
            a[i]=b[u+i]=c[n+u-i]=false;
            ch[u][i]='.';
        }
    }
}
int main()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            ch[i][j]='.';
    
    cin>>n;
    dfs(0);
    return 0;
}