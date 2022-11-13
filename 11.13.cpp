#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> V;
    for (int i = 0; i <= 50;i++)
    {
        V.push_back(i);
    }
    //遍历方式1：数组
    for (int i = 0; i < V.size();i++)
    {
        cout << V[i] << endl;
    }
    //遍历方式2：迭代器
    for (vector<int>::iterator ib = V.begin(); ib != V.end();ib++)
    {
        cout << *ib << endl;
    }
    return 0;
}