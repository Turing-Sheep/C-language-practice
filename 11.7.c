#include<stdio.h>
#include<string.h>
char word[15];
char str[1000005];

char* my_gets(char* line)
{
    int c;
    int len = 0;
    while((c=getchar())!=EOF)
    {
        line[len++] = c;
        if(c=='\n')
        {
            break;
        }
    }
    line[len] = '\0';
    return line;
}
int main()
{
    scanf("%s",word);
    getchar();
    my_gets(str);
   
    int lenw = strlen(word);
    int lens = strlen(str);
    for (int i = 0; i < lenw;i++)
    {
        if(word[i]<='z'&&word[i]>='a')
        {
            word[i] = word[i] - 'a' + 'A';
        }
    }
    for (int i = 0; i < lens;i++)
    {
        if(str[i]<='z'&&str[i]>='a')
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    int count = 0;
    int num = 0;
    int pos = 1000005;
    for (int i = 0; i < lens-lenw+1;i++)
    {
        if(str[i]==word[0])
        {
            
            for (int j = i; j < lenw+i;j++)
            {
                if(str[j]==word[j-i])
                {
                    count++;
                }
            }
            if(count==lenw)
            {
                if ((((i-1>0&&str[i-1]==' ')||i==0)&&((lenw + i < lens - 1 && str[lenw+i]==' ')||(lenw+i==lens-1))))
                {
                    if (i < pos)
                    pos = i;
                    num++;
                }

             count = 0;
        }
    }
    if(num)
    {
        printf("%d %d",num,pos);
    }
    else
    {
        printf("-1");
    }
    return 0;
}