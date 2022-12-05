#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
const int N=1e5+10;
int h[N],e[N],ne[N],idx,w[N];
bool s[N];
int dis[N];
int n,m,a,b,c;
void add(int a,int b,int c)
{
    e[idx]=b;ne[idx]=h[a];w[idx]=c;h[a]=idx++;
}

int dijkstra()
{
    memset(dis,0x3f,sizeof dis);
    dis[1]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    q.push(make_pair(0,1));
    while(!q.empty())
    {
        int t=q.top().first;
        q.pop();
        if(s[q.top().second])continue;
        s[q.top().second]=true;
        
        for(int i=h[q.top().second];i!=-1;i=ne[i])
        {
            if(dis[e[i]]>t+w[i])
            {
                dis[e[i]]=t+w[i];
                q.push({e[i],dis[e[i]]});
            }
        }
       
    }
    if(dis[n]==0x3f3f3f3f)return -1;
    else return dis[n];
    
}
int main()
{
    memset(h,-1,sizeof h);
    cin>>n>>m;
    while(m--)
    {
        scanf("%d%d%d",&a,&b,&c);
        add(a,b,c);
    }
    cout<<dijkstra();
    return 0;
}