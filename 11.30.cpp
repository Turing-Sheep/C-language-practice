// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     char c;
//     stack<int>stk;
//     int l,r;
//     cin>>c;
//     while(c!='@')
//     {
//         l=0;
//         if(c>='0'&&c<='9')
//         {
//             while(c!='.')
//             {
//                 l+=l*10+(c-'0');
//                 cin>>c;
//             }
//             stk.push(l);
//         }
        
//         if(!(c>='0'&&c<='9')&&c!='.')
//         {
//             r=stk.top();
//             stk.pop();
//             l=stk.top();
//             stk.pop();
//             if(c=='+')stk.push(l+r);
//             else if(c=='-')stk.push(l-r);
//             else if(c=='*')stk.push(l*r);
//             else stk.push(l/r);
//         }
//         cin>>c;
//     }
//     cout<<stk.top();
// }
// #include<iostream>
// #include<stack>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int>a;
//     stack<int>ma,mi;    
//     int n,sum=0;
//     cin>>n;
//     while(n--)
//     {
//         int x;scanf("%d ",&x);
//         a.push_back(x);
//     }
//     for(int i=0;i<a.size();i++)
//     {
//         int tx=INT32_MAX,tn=INT32_MAX;
//         if(ma.empty()&&mi.empty())
//         sum+=abs(a[i]);
//         else
//         {
//             if(!ma.empty())tx=abs(ma.top()-a[i]);
//             if(!mi.empty())tn=abs(a[i]-mi.top());
//             sum+=min(tx,tn);
//         }
//         if(mi.empty()&&i+1<a.size()&&a[i]<a[i+1])mi.push(a[i]);
//         else
//         {
//             if(i+1<a.size()&&a[i]<a[i+1]&&a[i]>mi.top())
//             mi.push(a[i]);
//         }
//         if(ma.empty()&&i+1<a.size()&&a[i]>a[i+1])ma.push(a[i]);
//         else
//         {
//             if(i+1<a.size()&&a[i]>a[i+1]&&a[i]<ma.top())
//             ma.push(a[i]);
//         }
//         cout<<sum<<endl;
//     }
//     while(!ma.empty())
//     {
//         cout<<ma.top()<<" ";
//         ma.pop();
//     }
//     cout<<endl;
//     while(!mi.empty())
//     {
//         cout<<mi.top()<<" ";
//         mi.pop();
//     }
//     return 0;
// }
// #include<iostream>
// #include<stack>
// #include<set>
// #include<vector>
// #include<ctime>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     srand((int)time(NULL));
//     vector<int>a;
//     stack<int>ma,mi;    
//     int n1=10,sum=0;
//     cout<<n1<<endl;
//     while(n1--)
//     {
//         int x=rand()%100;
//         a.push_back(x);
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<a.size();i++)
//     {
//         int tx=INT32_MAX,tn=INT32_MAX;
//         if(ma.empty()&&mi.empty())
//         sum+=abs(a[i]);
//         else
//         {
//             if(!ma.empty())tx=abs(ma.top()-a[i]);
//             if(!mi.empty())tn=abs(a[i]-mi.top());
//             sum+=min(tx,tn);
//         }
//         if(mi.empty()&&i+1<a.size()&&a[i]<a[i+1])mi.push(a[i]);
//         else
//         {
//             if(i+1<a.size()&&a[i]<a[i+1]&&a[i]>mi.top())
//             mi.push(a[i]);
//         }
//         if(ma.empty()&&i+1<a.size()&&a[i]>a[i+1])ma.push(a[i]);
//         else
//         {
//             if(i+1<a.size()&&a[i]>a[i+1]&&a[i]<ma.top())
//             ma.push(a[i]);
//         }
//     }
//     printf("%d\n",sum);
//     return 0;
// }
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    set<int>s;
    int n,sum=0;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        auto it=s.lower_bound(x);
        if(s.empty())
        {
            sum+=x;
        }
        else
        {
            auto rit=it;
            auto lit=--it;
            int r=*rit;
            int l=*lit;
            if(rit==s.begin())
            {
                sum+=abs(r-x);
            }
            else if(rit==s.end())
            {
                sum+=abs(l-x);
            }
            else
            {
                sum+=min(abs(r-x),abs(l-x));
            }
        }
        s.insert(x);
    }
    cout<<sum;
    return 0;
}