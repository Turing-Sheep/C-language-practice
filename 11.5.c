// #include<stdio.h>
// #include<string.h>
// char a[500], b[500];
// int A[500], B[500], C[500];

// int main()
// {
//     scanf("%s",a);
//     scanf("%s",b);
//     int lena = strlen(a);
//     int lenb = strlen(b);

//     for (int i = 0; i < lena;i++)
//     {
//         A[lena - i - 1] = a[i] - '0';
//     }

//     for (int i = 0; i < lenb;i++)
//     {
//          B[lenb - i - 1] = b[i] - '0';
//     }

//     int lenc = (lena > lenb ? lena : lenb)+1;

//     for (int i = 0; i < lenc;i++)
//     {
//          C[i] += A[i] + B[i];
//          C[i + 1] += (C[i])/10;
//          C[i] = C[i] % 10;
//     }

//     while(C[lenc]==0&&lenc>0)
//     {
//          lenc--;
//     }

//     for (int i = lenc; i >= 0;i--)
//     {
//          printf("%d",C[i]);
//     }

//          return 0;
// }
#include<stdio.h>
#include<string.h>
char a[500], b[500];
int A[500], B[500], C[1000];
int main()
{
    scanf("%s",a);
    scanf("%s",b);
    int lena = strlen(a);
    int lenb = strlen(b);
    for (int i = 0; i < lena;i++)
    {
        A[lena - i - 1] = a[i]-'0';
    }
    for (int i = 0; i < lenb;i++)
    {
        B[lenb - i - 1] = b[i]-'0';
    }

    int lenc = lena + lenb;
    for (int i = 0; i < lena;i++)
    {
        for (int j = 0; j < lenb;j++)
        {
            C[i + j] += A[i] * B[j];
            C[i + j + 1] += C[i + j] / 10;
            C[i + j] %= 10;
        }
    }
    while(C[lenc]==0&&lenc>0)
    {
        lenc--;
    }
    for (int i = lenc; i >= 0;i--)
    {
        printf("%d",C[i]);
    }
        return 0;
}