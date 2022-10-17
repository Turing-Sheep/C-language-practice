#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void select_sort(int* arr, int len)
//{
//    for (int i = 0; i < len; i++)
//    {
//        int k = i;
//        for (int j = i + 1; j < len; j++)
//        {
//            if (arr[j] < arr[k])
//            {
//                k = j;
//            }
//        }
//        int temp = arr[k];
//        arr[k] = arr[i];
//        arr[i] = temp;
//    }
//}
//void bubble_sort(int* arr, int len)
//{
//    for (int i = 0; i < len - 1; i++)
//    {
//        for (int j = 0; j < len - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
void insert_sort(int* arr, int len)
{
    for (int i = 1; i < len; i++)
    {
        for (int j = i; (j > 0 && j < len) && (arr[j] < arr[j - 1]); j--)
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
        }
    }
}
void bubble_sort(int* arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int is_swap = 0;
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (is_swap == 0)
        {
            return;
        }
    }
} 
//void select_sort(int* arr, int len)
//{
//    for (int i = 0; i < len; i++)
//    {
//        int min_k = i;
//        int max_k = len - 1;
//        int max_j = max_k - 1;
//        for (int min_j = min_k + 1; min_j < len; min_j++)
//        {
//            if (arr[min_j] < arr[min_k])
//            {
//                min_k = min_j;
//            }
//            if (arr[max_j] > arr[max_k])
//            {
//                max_k = max_j;
//            }
//        }
//
//        int temp = arr[min_k];
//        arr[min_k] = arr[i];
//        arr[i] = temp;
//
//        int temp_ = arr[max_k];
//        arr[max_k] = arr[len-1-i];
//        arr[len-1-i] = temp_;
//    }
//}
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void select_sort(int* arr, int len)
{
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        int k_min = left;
        int k_max = left;
        for (int j = left; j <= right; j++)
        {
            if (arr[j] < arr[k_min])
            {
                k_min = j;
            }
            if (arr[j] > arr[k_max])
            {
                k_max = j;
            }
        }
        swap(arr + k_min, arr + left);
        if (k_max == left)
        {
            k_max = k_min;
        }
        swap(arr + k_max, arr + right);
        left++;
        right--;

    }
}
//void shell_sort(int* arr, int len)
//{
//    int step = len / 2;
//    while (step >= 1)
//    {
//        for (int i = 0; i < step; i++)
//        {
//            for (int j = i; j > 0; j -= step)
//            {
//                if (arr[j] < arr[j - step])
//                {
//                    int temp = arr[j];
//                    arr[j] = arr[j - step];
//                    arr[j - step] = temp;
//                }
//            }
//        }
//        step /= 2;
//    }
//}
void shell_sort(int* arr, int len)
{
    int step = len / 2;
    while (step >= 1)
    {
        for (int i = step; i < len; i++)
        {
            for (int j = i; j >= step; j -= step)
            {
                if (arr[j] < arr[j - step])
                {
                    int temp = arr[j];
                    arr[j] = arr[j - step];
                    arr[j - step] = temp;
                }
            }
        }
        step /= 2;
    }
}
int main()
{
    int arr[] = {7,4,5,3,6};
    int len = sizeof(arr)/4;
    shell_sort(arr,len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}