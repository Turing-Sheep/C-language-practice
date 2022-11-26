#include<iostream>
#include<ctime>
using namespace std;
void AdjustDown(int*arr,int size,int parent)
{
    int child=parent*2+1;
    while(child<size)
    {
        if(child+1<size&&arr[child+1]>arr[child])child++;
        if(arr[child]>arr[parent])
        {
            swap(arr[child],arr[parent]);
            parent=child;
            child=parent*2+1;
        }
        else break;
    }
}
//升序排序
void Heap_Sort(int*arr,int size)
{
    //搭建一个大根堆:向下调整
    for(int i=(size-1-1)/2;i>=0;i--)
    {
        AdjustDown(arr,size,i);
    }
    //先交换，再向下调整
    for(int i=size-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        AdjustDown(arr,i,0);
    }
}
int main()
{
    srand((int)time(NULL));
    int a[10];
    for(int i=0;i<10;i++)a[i]=rand()%100+1;
    int size=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<10;i++)cout<<a[i]<<" ";
    cout<<endl;

    Heap_Sort(a,size);

    for(int i=0;i<10;i++)cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
// #include<iostream>
// #include<ctime>
// using namespace std;
// void AdjustUp(int*arr,int child)
// {
//     int parent=(child-1)>>1;
//     while(child>0)
//     {
        
//         if(arr[child]>arr[parent])
//         {
//             swap(arr[child],arr[parent]);
//             child=parent;
//             parent=(child-1)>>1;
//         }
//         else break;
//     }
// }
// void AdjustDown(int*arr,int size,int parent)
// {
//     int child=parent*2+1;
//     while(child<size)
//     {
//         if(child+1<size&&arr[child+1]>arr[child])child++;
//         if(arr[child]>arr[parent])
//         {
//             swap(arr[child],arr[parent]);
//             parent=child;
//             child=parent*2+1;
//         }
//         else break;
//     }
// }

// void Heap_Sort(int*arr,int size)
// {
//     for(int i=0;i<size;i++)
//     {
//        AdjustUp(arr,i);
//     }

//     for(int end=size-1;end>0;end--)
//     {
//         swap(arr[0],arr[end]);
//         AdjustDown(arr,end,0);
//     }
// }
// int main()
// {
//     srand((int)time(NULL));
//     int a[10];
//     for(int i=0;i<10;i++)a[i]=rand()%10+1;
//     int size=sizeof(a)/sizeof(a[0]);

//     for(int i=0;i<10;i++)cout<<a[i]<<" ";
//     cout<<endl;

//     Heap_Sort(a,size);

//     for(int i=0;i<10;i++)cout<<a[i]<<" ";
//     cout<<endl;

//     return 0;
// }