#include<stdio.h>
#include<string.h>

char a[100010],b[100010];
int A[100010],B[100010],C[100010];

int cmp(int*A,int*B,int lena,int lenb)
{
    int len=lena-lenb;
    if(len!=0)
    {
        return len;
    }
    else
    {
        for(int i=lena-1;i>=0;i--)
        {
            if(A[i]!=B[i])
            {
                return A[i]-B[i];
            }
        }
    }
    return 0;
}

int sub(int*A,int*B,int*C,int lena,int lenb)
{
    int t=0,lenc=0;
    for(int i=0;i<lena;i++)
    {
        t=A[i]-t;
        
        if(i<lenb)t-=B[i];
        
        if(t>=0)
        {
            C[i]=t;
            t=0;
        }
        else
        {
            C[i]=t+10;
            t=1;
        }
        lenc++;
    }
    while(lenc>1&&C[lenc-1]==0)lenc--;
    return lenc;
}

int main()
{
    scanf("%s %s",a,b);
    int lena=strlen(a);
    int lenb=strlen(b);
    int lenC=0;
    for(int i=0;i<lena;i++)A[i]=a[lena-i-1]-'0';
    for(int i=0;i<lenb;i++)B[i]=b[lenb-i-1]-'0';
    
    if(cmp(A,B,lena,lenb)>=0)
    {
        lenC=sub(A,B,C,lena,lenb);
    }
    else
    {
        lenC=sub(B,A,C,lena,lenb);
        printf("-");
    }
    for(int i=lenC-1;i>=0;i--)printf("%d",C[i]);
	return 0;
}