#include<iostream>
using namespace std;
const int N=1e6+10;
int e[N],ne[N],head,idx;
void init()
{
    head=-1;
    idx=0;
}
void push_front(int x)
{
    e[idx]=x;
    ne[idx]=head;
    head=idx++;
}
void insert(int k,int x)
{
    e[idx]=k;
    ne[idx]=ne[k];
    ne[k]=idx++;
}
void erase(int k)
{
    ne[k]=ne[ne[k]];
}
int main()
{
    
    init();
    int n;
    scanf("%d",n);
    while(n--)
    {
        char op;
        scanf("%c",&op);
        getchar();
        if(op=='H')
        {
            int x;
            scanf("%d",&x);
            push_front(x);
        }
        else if(op=='D')
        {
            int k;
            scanf("%d",&k);
            if(k==0)head=ne[head];
            else
            {
                erase(k-1);
            }
        }
        else
        {
            int k,x;
            scanf("%d %d",&k,&x);
            insert(k-1,x);
        }
    }
    
    for(int i=head;i!=-1;i=ne[i])printf("%d ",e[i]);
    return 0;
}