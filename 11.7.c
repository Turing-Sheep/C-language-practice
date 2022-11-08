#include<stdio.h>
#include<string.h>
 int p1, p2, p3;
 char str[105];
 char res[4000];
 int main()
 {
     scanf("%d %d %d", &p1, &p2, &p3);
     scanf("%s", str);
     int len = strlen(str);
     int pos = 0;
     int j = 0;
     while (pos != len)
     {
        if(str[pos]!='-')
        {
            res[j++] = str[pos++];
        }
        else if(str[pos]=='-'&&pos==0)
        {
            res[j++] = str[pos++];
        }
        else if(str[pos]=='-'&&pos==len-1)
        {
            res[j++] = str[pos++];
        }
        else 
        {
             char prev = str[pos - 1];
             char next = str[pos + 1];
             if (next - prev <= 0)
             {
                 res[j++] = str[pos++];
             }
             else if (next - prev == 1)
             {
                 res[j++] = str[++pos];
                 pos++;
             }
             else if((((prev<='z'&&prev>='a')||(prev<='Z'&&prev>='A'))&&((next<='Z'&&next>='A')||
             (next<='z'&&next>='a')))||((prev>='0'&&prev<='9')&&(next>='0'&&next<='9')))
             {
                if(p1==1)
                {
                    int gap = next - prev;
                    for (int i = 1; i < gap;i++)
                    {
                        for (int k = 0; k < p2;k++)
                            res[j++] = prev + i;
                    }
                    if(p3==2)
                    {
                        int q = pos;
                        int p = pos + p2 * (gap - 1);
                        while(q<=p)
                        {
                            char temp = res[q];
                            res[q] = res[p];
                            res[p] = temp;
                            q++, p--;
                        }
                    }
                    pos++;
                }
                else if(p1==2)
                {
                    int gap = next - prev;
                    for (int i = 1; i < gap;i++)
                    {
                        for (int k = 0; k < p2;k++)
                            res[j++] = prev - 'a' + 'A' + i;
                    }
                    if(p3==2)
                    {
                        int q = pos;
                        int p = pos + p2 * (gap - 1)-1;
                        while(q<p)
                        {
                            char temp = res[q];
                            res[q] = res[p];
                            res[p] = temp;
                            q++, p--;
                        }
                    }
                    pos++;
                }
                else if(p1==3)
                {
                    int gap = next - prev;
                    for (int i = 1; i < gap;i++)
                    {
                        for (int k = 0; k < p2;k++)
                            res[j++] = '*';
                    }
                    pos++;
                }
            }
            else
            {
                res[j++] = str[pos++];
            }
        }
     }
     printf("%s",res);
     return 0;
}