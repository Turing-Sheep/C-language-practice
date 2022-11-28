// #include<iostream>
// using namespace std;
// int h=-1,e[110],ne[110],idx;

// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     //构造环形队列
//     for(int i=n;i>=1;i--)
//     {
//         e[idx]=i;
//         ne[idx]=h;
//         h=idx++;
//     }
//     ne[0]=h;
//     //开始报数
//     int count=0;
//     int k=0;
//     int prev=0;
//     for(int i=h;count<n;i=ne[i])
//     {
//         k++;
//         if(k==m)
//         {
//             cout<<e[i]<<" ";
//             ne[prev]=ne[i];
//             count++;
//             k=0;
//         }
//         prev=i;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// const int N=1e5+10;
// int pos[N],e[N],l[N],r[N],idx=2;

// void insert(int p,int x)
// {
//     e[idx]=x;
//     r[idx]=r[p];
//     l[idx]=p;
//     l[r[p]]=idx;
//     pos[x]=idx;
//     r[p]=idx++;
// }
// void remove(int k)
// {
//     if(pos[k]==-1)
//     return;
//     int p=pos[k];
//     l[r[p]]=l[p];
//     r[l[p]]=r[p];
//     pos[k]=-1;
// }
// int main()
// {
//     l[1]=0;
//     r[0]=1;
//     idx=2;
//     pos[1]=2;
//     insert(0,1);
//     int n;
//     cin>>n;
//     for(int i=2;i<=n;i++)
//     {
//         int k,op;
//         scanf("%d%d",&k,&op);
//         if(op==0)
//         {
//             insert(l[pos[k]],i);
//         }
//         else
//         {
//             insert(pos[k],i);
//         }
//     }
//     int m;
//     cin>>m;
//     while(m--)
//     {
//         int x;
//         scanf("%d",&x);
//         remove(x);
//     }
//     for(int i=r[0];i!=1;i=r[i])printf("%d ",e[i]);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// const int N=1100;
// int b[N],a[N],q[N],h,t=-1,k;
// int main()
// {
//     int m,n;
//     cin>>m>>n;
//     for(int i=0;i<n;i++)scanf("%d",&a[i]);
//     for(int i=0;i<n;i++)
//     {
//         while(h<=t&&t-h+1>m)
//         {
//             b[a[q[h]]]=0;
//             h++;
            
//         }
//         if(b[a[i]]==0)
//         {
//             k++;
//             q[++t]=i;
//             b[a[i]]=1;
//         }
//     }
//     printf("%d",k);
// }
// #include<iostream>
// using namespace std;
// #include<stack>
// int main()
// {
//     string str;
//     stack<char>s;
//     cin>>str;
//     for(int i=str.size()-1;i>=0;i--)
//     {
//         if(str[i]==')')
//         {
//             if(str[i-1]=='(')
//             {
//                 s.push(str[i]);
//                 s.push(str[i-1]);
//                 i--;
//             }
//             else
//             {
//                 s.push(str[i]);
//                 s.push('(');
//             }
//         }
//         else if(str[i]==']')
//         {
//             if(str[i-1]=='[')
//             {
//                 s.push(str[i]);
//                 s.push(str[i-1]);
//                 i--;
//             }
//             else
//             {
//                 s.push(str[i]);
//                 s.push('[');
//             }
//         }
//         else if(str[i]=='[')
//         {
//             s.push(']');
//             s.push(str[i]);
//         }
//         else
//         {
//             s.push(')');
//             s.push(str[i]);
//         }  
//     }
//     while(!s.empty())
//     {
//         cout<<s.top();
//         s.pop();
//     }
// }
// #include<iostream>
// #include<string>
// #include<stack>
// const int N=1001;
// bool a[N];
// using namespace std;
// int main()
// {
//     stack<pair<char,int>>stk;
//     string s;cin>>s;
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]=='['||s[i]=='(')
//         {
//             stk.push(make_pair(s[i],i));
//         }
//         else
//         {
//             if(s[i]==')')
//             {
//                 if(!stk.empty()&&stk.top().first=='(')
//                 {
//                     a[stk.top().second]=1;
//                     a[i]=true;
//                     stk.pop();
//                 }
//             }
//             else
//             {
//                 if(!stk.empty()&&stk.top().first=='[')
//                 {
//                     a[stk.top().second]=1;
//                     a[i]=true;
//                     stk.pop();
//                 }                
//             }
//         }
//     }
//     for(int i=0;i<s.size();i++)
//     {
//         if(a[i]==true)cout<<s[i];
//         else
//         {
//             if(s[i]=='['||s[i]==']')
//             {
//                 printf("[]");
//             }
//             else
//             {
//                 printf("()");
//             }
//         }
//     }
//     return 0;
// }
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    vector<int>a, b;
    while (n--)
    {
        stack<int>stk;
        bool flag = true;
        int now = 0;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int x; scanf("%d", &x);
            a.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x; scanf("%d", &x);
            b.push_back(x);
        }

        for (int i = 0; i < m; i++)
        {
            if (stk.empty())stk.push(a[now++]);
            while (stk.top() != b[i] && now <= m) stk.push(a[now++]);

            if (stk.top() == b[i])
                stk.pop();
            else
            {
                flag = false;
            }
        }
        if (flag)cout << "Yes\n" << endl;
        else cout << "No\n" << endl;
        a.clear();
        b.clear();
    }

    return 0;
}