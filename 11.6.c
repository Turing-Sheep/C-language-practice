// #include<stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d",&n,&m);
//     int i = 1;
//     int a,count=0;
//     while(i<=n)
//     {
//         int temp = i;
//         while(temp)
//         {
//             a = temp % 10;
//             if(a==m)
//             {
//                 count++;
//             }
//             temp /= 10;
//         }
//         i++;
//     }
//     printf("%d",count);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int day = 0;
//     long long  sum = 0;
//     scanf("%d",&day);
//     for (int i = 1,count=1; count <= day;i++)
//     {

//         for (int j = 0; j < i;j++)
//         {
//             if(count<=day)
//             {
//                 sum += i;
//                 count++;
//             }

//         }
//     }
//         printf("%lld", sum);
//     return 0;
// }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d",arr[i][j]);
    //     }
    //     printf("\n");
    // }
// #include<stdio.h>
// int arr[25][25];
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     for (int i = 0; i < n;i++)
//     {
//         arr[i][0] = 1;
//         arr[i][i] = 1;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         for (int j = 1; j < n; j++)
//         {
//             arr[i][j] = arr[i - 1][j - 1] + arr[i-1][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//         return 0;
// }
// #include<stdio.h>
// #include<string.h>
// char word[100];
// int arr[100];
// int main()
// {
//     scanf("%s",word);
//     int len = strlen(word);
//     int max = 0;
//     int min = 100;
//     for (int i = 0; i < len;i++)
//     {
//         int a = word[i] - 'a';
//         arr[a]++;
//     }
//     for (int i = 0; i < 100;i++)
//     {
//         if(arr[i]>0&&arr[i]<min)
//         {
//             min = arr[i];
//         }
//         if(arr[i]>max)
//         {
//             max = arr[i];
//         }
//     }
//     int gap = max - min;
//     int flag = 1;
//     for (int i = 2; i < gap;i++)
//     {
//         if(gap>1&&gap%i==0)
//         {
//             flag = 0;
//         }
//     }
//     if(flag&&gap!=0)
//     {
//         printf("Lucky Word\n");
//         printf("%d",gap);
//     }
//     else
//     {
//         printf("No Answer");
//         printf("0");
//     }
//         return 0;

// }
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int max = 0;
//     int n;
//     int a;
//     scanf("%d",&n);
//     for (int i = 2; i < sqrt(n); i++)
//     {
//         if(n%i==0)
//         {
//             a = n / i;
//             n = n / i;
//             int ma = a > n ? a : n;
//             if(ma>max)
//             {
//                 max = ma;
//             }
//         }
//     }
//     printf("%d",max);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int min = n < m ? n : m;
//     int nums_z = 0;
//     int nums_c = 0;
//     for (int i = 0; i <= min; i++)
//     {
//         if ((n - i > 0) && (m - i > 0))
//         {
//             nums_z += (n - i) * (m - i);
//         }
            
//     }

//     for (int i = 1; i <= n; n++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if ((n - i > 0 )&&( m - j> 0 )&&( j != i))
//                 nums_c += (n - j) * (m - j);
//         }
//     }
//     printf("%d %d", nums_z, nums_c);
//     return 0;
// }
// #include<stdio.h>

// void quick_sort(long long*arr,int low,int high)
// {
//     if(low>=high)
//     {
//         return;
//     }

//     int i = low, j = high;
//     int pivot = low;
//     while(i!=j)
//     {
//         while(arr[i]<=arr[pivot]&&i<j)
//         {
//             i++;
//         }
//         if(arr[i]>arr[pivot])
//         {
//             long long temp = arr[i];
//             arr[i] = arr[pivot];
//            arr[pivot] = temp;
//         }
//         while(arr[j]>=arr[pivot]&&i<j)
//         {
//             j--;
//         }
//         if(arr[j]<arr[pivot])
//         {
//             long long temp = arr[j];
//             arr[j] = arr[pivot];
//            arr[pivot] = temp;   
//         }
//     }
//     int mid = ((high - low) / 2) + low;
//     quick_sort(arr,low,mid);
//     quick_sort(arr,mid+1,high);
// }
// long long arr[100000];
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for (int i = 0; i < n;i++)
//     {
//         scanf("%lld",&arr[i]);
//     }

//     quick_sort(arr,0,n-1);
//     for (int i = 0; i < n;i++)
//     {
//         printf("%lld ",arr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>



// #include<stdio.h>
// #include<string.h>
// void reverse(long long t_nums,int m)
// {
//     if(t_nums==0)
//     {
//         return;
//     }
//     else
//     {
//          reverse(t_nums/m,m);
//          if(t_nums%m<10)
//          {
//             printf("%d",t_nums%m);
//          }
//         else
//         {
//             printf("%c",('A'+(t_nums%m)-10));
//         }
       
//     }
// }
// char nums[1000];
// int main()
// {
//     int n,m;
//     scanf("%d %s %d",&n,nums,&m);    long long t_nums = 0;
//     int len = strlen(nums);
//     for (int i = 0; i < len;i++)
//     {
//         char a = nums[len - i - 1];
//         int ta;
//         if(a<='Z'&&a>='A')
//         {
//             ta = 10+a - 'A';
//         }
//         else
//         {
//             ta = a - '0';
//         }
//         long long w = 1;
//         for (int j = 0; j < i;j++)
//         {
//             w *= n;
//         }
//         t_nums += ta * w;
//     }
//         reverse(t_nums, m);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// void merge(long long*arr,int low,int high,int mid)
// {
//     long long *b = malloc((high-low+1)*sizeof(long long));
//     int i = low;
//     int j = mid+1;
//     int k = 0;
//     while(i<=mid&&j<=high)
//     {
//         if(arr[i]<=arr[j])
//             b[k++] = arr[i++];
//         else
//             b[k++] = arr[j++];
//     }
//     while(i<=mid)b[k++] = arr[i++];
//     while(j<=high)b[k++] = arr[j++];
//     k = 0;
//     for (i = low; i <= high;i++)
//     {
//         arr[i] = b[k++];
//     }
//     free(b);
// }

// void merge_sort(long long*arr,int low,int high)
// {
//     if(low<high)
//     {
//         int mid = (high + low) / 2;
//         merge_sort(arr,low,mid);
//         merge_sort(arr,mid+1,high);
//         merge(arr,low,high,mid);
//     }
// }
// long long arr[100005];
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for (int i = 0; i < n;i++)
//     {
//         scanf("%lld",arr+i);
//     }

//     merge_sort(arr, 0, n-1);

//     for (int i = 0; i < n;i++)
//     {
//         printf("%lld ",arr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// void reverse(long long t_nums,int m)
// {
//     if(t_nums==0)
//     {
//         return;
//     }
//     else
//     {
//          reverse(t_nums/m,m);
//          if(t_nums%m<10)
//          {
//             printf("%d",t_nums%m);
//          }
//         else
//         {
//             printf("%c",('A'+(t_nums%m)-10));
//         }
       
//     }
// }
// #include<stdio.h>
// #include<string.h>
// char word[15];
// char str[1000005];

// char* my_gets(char* line)
// {
//     int c;
//     int len = 0;
//     while((c=getchar())!=EOF)
//     {
//         line[len++] = c;
//         if(c=='\n')
//         {
//             break;
//         }
//     }
//     line[len] = '\0';
//     return line;
// }
// int main()
// {
//     scanf("%s",word);
//     getchar();
//     my_gets(str);
   
//     int lenw = strlen(word);
//     int lens = strlen(str);
//     for (int i = 0; i < lenw;i++)
//     {
//         if(word[i]<='z'&&word[i]>='a')
//         {
//             word[i] = word[i] - 'a' + 'A';
//         }
//     }
//     for (int i = 0; i < lens;i++)
//     {
//         if(str[i]<='z'&&str[i]>='a')
//         {
//             str[i] = str[i] - 'a' + 'A';
//         }
//     }

//     int count = 0;
//     int num = 0;
//     int pos = 1000005;
//     for (int i = 0; i < lens-lenw+1;i++)
//     {
//         if(str[i]==word[0])
//         {
            
//             for (int j = i; j < lenw+i;j++)
//             {
//                 if(str[j]==word[j-i])
//                 {
//                     count++;
//                 }
//             }
//             if(count==lenw)
//             {
//                 if ((((i-1>0&&str[i-1]==' ')||i==0)&&((lenw + i < lens - 1 && str[lenw+i]==' ')||(lenw+i==lens-1))))
//                 {
//                     if (i < pos)
//                     pos = i;
//                     num++;
//                 }

//             }
//              count = 0;
//         }
//     }
//     if(num)
//     {
//         printf("%d %d",num,pos);
//     }
//     else
//     {
//         printf("-1");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d",&n,&m);
//     long long zheng = 0;
//     int min = n > m ? m : n;
//     int i = 1;
//     while(i<=min)
//     {
//         zheng += (n + 1 - i) * (m+1-i);
//         i++;
//     }

//     long long chang = 0;
//     for (int i = 1; i <= n;i++)
//     {
//         for (int j = 1; j <= m;j++)
//         {
//             long long temp = (n + 1 - i) * (m + 1 - j);
//             if(i!=j&&temp>0)
//                 chang +=temp;
//         }
//     }
//     printf("%lld %lld",zheng,chang);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     long long n, m;
//     scanf("%lld %lld",&n,&m);
//     long long j = n * m;
//     int count = 0;
//     int min = n < m ? n : m;
//     for (int i = min; i <= n + m - min;i++)
//     {
//         if(i%min==0)
//         {
//             int temp = j / i;
//             int a1 = temp;
//             int a2 = i;
//             int a3 = 1;
//             while(a3)
//             {
//                 a3 = a1 % a2;
//                 a1 = a2;
//                 a2 = a3;
//             }
//             int a4 = j / a1;
//             if(((a4==n+m-min&&a1==min)||(a1==n+m-min&&a4==min))&&(temp*i==j))
//             {
                
//                 count++;

//             }
//         }
//     }
//     printf("%d",count);
//     return 0;
// }