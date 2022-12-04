#include<iostream>
#include<string>
#include<map>
using namespace std;
int n,m;
const int N=1e5+10;
char ss[10];
int main()
{
    scanf("%d %d",&n,&m);
    string str;
    cin>>str;
    while(m--)
    {
        bool AA=false,BB=false,CC=false;
        int a=0,b=0,c=0;
        int l,r;
        scanf("%d%d",&l,&r);
        string sub = str.substr(l-1,r-l+1);
        for(auto s:sub)
        {
            if(s=='A')
            {
                a++;
                AA=true;
            }
            else if(s=='B')
            {
                b++;
                BB=true;
            }
            else
            {
                c++;
                CC=true;
            }
        }
        int ma=max(max(a,b),c);
        char tmp;
        if(ma==a)tmp='A';
        else if(ma==b)tmp='B';
        else tmp='C';
        
        if(ma==r-l+1)
        {
            printf("0\n");
        }
        else
        {
            int c1=0,c2=0;
            char t1,t2;
            if(ma==a)
            {
                t1='B';
                t2='C';
            }
            else if(ma==b)
            {
                t1='A';
                t2='C';
            }
            else
            {
                t1='A';
                t2='B';
            }
            int i=1;
            while(i<sub.size()-1)
            {
                if((sub[i]==t1&&sub[i+1]!=t1)||(sub[i]!=t1&&sub[i+1]==t1))
                {
                    c1++;
                    i++;
                }
                else i++;
                
            }
            i=0;
            while(i<sub.size()-1)
            {
                if((sub[i]==t2&&sub[i+1]!=t2)||(sub[i]!=t2&&sub[i+1]==t2))
                {
                    c2++;
                    i++;
                }
                else i++;
                
            }
            printf("%d\n",min((c1+1),(c2+1)));
        }

        
    }

}
