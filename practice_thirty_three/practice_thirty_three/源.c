#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//struct info
//{
//    int number;
//    int score;
//};
//
//int score_cmp(void* num1, void* num2)
//{
//    int ret = ((struct info*)num2)->score
//        - ((struct info*)num1)->score;
//    return ret;
//}
//
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int line = m * 1.5;
//    struct info people[5000];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d %d", &people[i].number, &people[i].score);
//    }
//
//
//    qsort(people, n, sizeof(struct info), score_cmp);
//    int score_line = people[line].score;
//    int count = 0;
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (people[j].score == people[j + 1].score)
//            {
//                if (people[j].number > people[j + 1].number)
//                {
//                    struct info temp = people[j];
//                    people[j] = people[j + 1];
//                    people[j + 1] = temp;
//                }
//            }
//        }
//
//        if (people[i].score >= score_line)
//        {
//            count++;
//        }
//    }
//    printf("%d %d\n", score_line, count);
//    for (int i = 0; i < count; i++)
//    {
//        printf("%d %d\n", people[i].number, people[i].score);
//    }
//
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char score[25] = { '\0' };
//    scanf("%s", score);
//    int len = strlen(score);
//    int sum = 0;
//    int win = 0;
//    int lose = 0;
//    int win_s = 0;
//    int lose_s = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (score[i] != 'E')
//        {
//            if (len - i > 11)
//            {
//                if (*(score + i) == 'W')
//                {
//                    win++;
//                    sum++;
//                }
//                else
//                {
//                    lose++;
//                    sum++;
//                }
//                if (sum == 11)
//                {
//                    printf("%d:%d\n", win, lose);
//                    sum = 0;
//                    win = 0;
//                    lose = 0;
//                }
//            }
//            else
//            {
//                if (*(score + i) == 'W')
//                {
//                    win_s++;
//
//                }
//                else
//                {
//                    lose_s++;
//                }
//                if (score[i + 1] == '\0')
//                {
//                    printf("%d:%d\n", win_s, lose_s);
//                }
//            }
//        }
//        else
//        {
//            break;
//        }
//
//    }
//    printf("\n");
//    for (int i = 0; i < len; i++)
//    {
//        if (score[i] != 'E')
//        {
//            if (len - i >= 21)
//            {
//                if (*(score + i) == 'W')
//                {
//                    win++;
//                    sum++;
//                }
//                else
//                {
//                    lose++;
//                    sum++;
//                }
//                if (sum == 21)
//                {
//                    printf("%d:%d\n", win, lose);
//                    sum = 0;
//                    win = 0;
//                    lose = 0;
//                }
//            }
//            else
//            {
//                if (*(score + i) == 'W')
//                {
//                    win_s++;
//
//                }
//                else
//                {
//                    lose_s++;
//                }
//                if (score[i + 1] == '\0')
//                {
//                    printf("%d:%d\n", win_s, lose_s);
//                }
//            }
//        }
//        else
//        {
//            break;
//        }
//
//    }
//
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char find[] = "Bob";
//    char str[1000];
//    scanf("%s", str);
//    char* fin = strstr(str, find);
//    printf("%d", fin - str);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str[5000];
//    gets(str);
//    char arr[1000];
//    int len = strlen(str);
//    arr[0] = str[0];
//    int k = 1;
//    for (int i = 0; i < len-1; i++)
//    {
//        if (str[i] = ' ')
//        {
//            arr[k] = str[i + 1];
//            k++;
//        }
//    }
//    for (int i = 0; i < k; i++)
//    {
//        if (arr[i] >= 'a' && arr[i] <= 'z')
//        {
//            arr[i] -= 32;
//        }
//    }
//    printf("%s",arr);
//
//}