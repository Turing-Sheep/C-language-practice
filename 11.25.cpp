#include<iostream>
#include<ctime>
using namespace std;
int a[10];

void swap(int*num1,int*num2)
{
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}
void AdjustUp(int *arr, int size,int child)
{
    while(child>0)
    {
        int parent = (child - 1) >> 1;
        if(arr[child]>arr[parent])
        {
            swap(&arr[child],&arr[parent]);
             child = parent;
        }
        else
        {
            break;
        }
    }
}
void AdjustDown(int*arr,int size,int parent)
{
    int child = parent * 2 + 1;
    while(child<size)
    {
        if(arr[child]>arr[parent])
        {
            swap(&arr[child],&arr[parent]);
            child = parent * 2 + 1;
        }
        else
        {
            break;
        }
    }
}
void HeapSort(int *a, int size)
{
    for(int i=0;i<size;i++)
    {
        AdjustUp(a,i+1,i);
    }
    for(int end=size-1;end>0;end--)
    {
        swap(&a[0],&a[end]);
        AdjustDown(a,end,0);
    }
}

int main()
{
    srand((int)time(NULL));
    for(int i=0;i<10;i++)
        a[i] = rand() % 100;
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    cout << endl;
    HeapSort(a,10);
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}