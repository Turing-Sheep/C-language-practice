#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void print_the_day()
{
    int year = 0;
    int month = 0;
    int day = 28;
    while (scanf("%d %d", &year, &month) != EOF)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
        case 2:

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                day++;
            }
            printf("%d\n", day);
            day = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;
        }
    }
}
void judge_if_alphabet()
{
    char a;
    while ((a = getchar()) != EOF)
    {
        if ((a >= 65 && a <= 90) || (a <= 122 && a >= 97))
        {
            printf("%c is an alphabet.\n", a);
        }
        else
        {
            printf("%c is not an alphabet.\n", a);
        }
        getchar();
    }

}
void switch_alphabet()
{

char a = 0;
while (scanf("%c", &a) != EOF)
{
    if (a >= 65 && a <= 90)
    {
        printf("%c\n", (a + 32));
    }
    else
    {
        printf("%c\n", (a - 32));
    }
    getchar();
}

}
void price()
{
    double price = 0;
    int month = 0;
    int day = 0;
    int judge = 0;
    scanf("%lf %d %d %d", &price, &month, &day, &judge);
    if (day == 12 && month == 12)
    {
        price *= 0.8;
        if (judge)
        {
            price -= 50;
        }
    }
    else if (day == 11 && month == 11)
    {
        price *= 0.7;
        if (judge)
        {
            price -= 50;
        }
    }
    if (price > 0)
        printf("%.2lf", price);
    else
        printf("0.00");
}
void print_graph()
{
    char arr1[] = "* * * * * * * * * * * * *\n";
    char arr2[] = "                         \n";
    int middle = 27 / 2;
    int max = middle-1;
    int min = middle-1;
    for (int i = 0; i < 13; i++,min--,max++)
    {
        arr2[min] = arr1[min];
        arr2[max] = arr1[max];
        if(i%2==0)
        printf("%s",arr2);
        else
        {
            printf("\n");
        }

    }
    char arr3[] = "* * * * * * * * * * * * *\n";
    char arr4[] = "                         \n";
    min = 0;
    max = 24;
    printf("\n");
    for (int j = 0; j < 12; j++,min++, max--)
    {
        arr3[min] = arr4[min];
        arr3[max] = arr4[max];

        if (j % 2 == 0)
            printf("%s", arr3);
        else
        {
            printf("\n");
        }

    }

    
}

void print_array()
{

}

void print_number_of_water_flower()
{
    for (int i = 1; i <= 100000; i++)
    {
        int arr[10] = { 0 };
        int temp = i;
        int j = 0;
        while (temp)
        {
            arr[j] = temp % 10;
            temp /= 10;
            j++;
        }
        int sum = 0;
        for (int i = 0; i < j; i++)
        {
            sum += pow(arr[i],3);
        }
        if (sum == i)
        {
            printf("%d  ", i);
        }
    }
}

void Sn()
{
    int a = 0;
    scanf("%d",&a);
    int sum = a;
    int temp = a;
    for (int i = 1; i <=4; i++)
    {
        a = a + temp * pow(10,i);
        sum += a;
    }
    printf("%d", sum);
}
int main()
{
    print_graph();
	return 0;
}