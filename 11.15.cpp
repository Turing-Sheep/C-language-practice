// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// typedef pair<int, int> PII;//创建一个pair,在first的位置，插入second的数值

// const int N = 300010;

// int n, m;
// int a[N], s[N];//求前缀和所需的数组

// vector<int> alls;
// vector<PII> add, query;

// int find(int x)
// {
//     int l = 0, r = alls.size() - 1;
//     while (l < r)
//     {
//         int mid = l + r >> 1;
//         if (alls[mid] >= x) r = mid;
//         else l = mid + 1;
//     }
//     return r + 1;
// }

// int main()
// {
//     cin >> n >> m;
//     for (int i = 0; i < n; i ++ )
//     {
//         int x, c;
//         cin >> x >> c;
//         add.push_back({x, c});

//         alls.push_back(x);
//     }

//     for (int i = 0; i < m; i ++ )
//     {
//         int l, r;
//         cin >> l >> r;
//         query.push_back({l, r});

//         alls.push_back(l);
//         alls.push_back(r);
//     }

//     // 去重
//     sort(alls.begin(), alls.end());
//     alls.erase(unique(alls.begin(), alls.end()), alls.end());

//     // 处理插入
//     for (auto item : add)//C11特性：自动创建一个迭代器去遍历容器中的每一个元素
//     {
//         int x = find(item.first);//找到映射后的位置
//         a[x] += item.second;//在映射后的位置插入数值
//     }

//     // 预处理前缀和
//     for (int i = 1; i <= alls.size(); i ++ ) s[i] = s[i - 1] + a[i];

//     // 处理询问
//     for (auto item : query)
//     {
//         int l = find(item.first), r = find(item.second);
//         cout << s[r] - s[l - 1] << endl;
//     }

//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<int> alls;//存储所有需要离散化的数字
// vector<pair<int,int>>add;//将所有的位置插入存储起来
// vector<pair<int, int>>quary;//存储需要求和的区间

// int findx(int nums)
// {
//     int l=0,r=alls.size()-1;
//     while(l<r)
//     {
//         int mid = l + r >> 1;
//         if(alls[mid]>=nums)r = mid;
//         else l = mid + 1;
//     }
//     return l;
// }

// int main()
// {
//     int n,m;
//     scanf("%d%d",&n,&m);
//     for (int i = 0; i < n;i++)
//     {
//         int x,a;
//         scanf("%d%d",&x,&a);
//         add.push_back({x,a});
//         alls.push_back(x);
//     }
//     for (int i = 0; i < m;i++)
//     {
//         int l, r;
//         scanf("%d %d",&l,&r);
//         quary.push_back({l,r});
//         alls.push_back(l);
//         alls.push_back(r);
//     }

//     sort(alls.begin(),alls.end());
//     alls.erase(unique(alls.begin(),alls.end()),alls.end());

//     for (vector<pair<int,int>>::iterator p = add.begin(); p != add.end();p++)
//     {
//         int x = findx((*p).first);
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// typedef pair<int, int> PII;

// void merge(vector<PII> &segs)
// {
//     vector<PII> res;

//     sort(segs.begin(), segs.end());//给各个区间排序

//     int st = -2e9, ed = -2e9;
//     for (auto seg : segs)//遍历存储区间的容器
//         if (ed < seg.first)
//         {
//             if (st != -2e9) res.push_back({st, ed});
//             st = seg.first, ed = seg.second;
//         }
//         else ed = max(ed, seg.second);

//     if (st != -2e9) res.push_back({st, ed});

//     segs = res;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     vector<PII> segs;//定义一个存储区间范围的容器
//     for (int i = 0; i < n; i ++ )
//     {
//         int l, r;
//         scanf("%d%d", &l, &r);
//         segs.push_back({l, r});
//     }

//     merge(segs);

//     cout << segs.size() << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

bool cmp(vector<int> &A, vector<int> &B)
{
    if (A.size() != B.size()) return A.size() > B.size();

    for (int i = A.size() - 1; i >= 0; i -- )
        if (A[i] != B[i])
            return A[i] > B[i];

    return true;
}

vector<int> sub(vector<int> &A, vector<int> &B)
{
    vector<int> C;
    for (int i = 0, t = 0; i < A.size(); i ++ )
    {
        t = A[i] - t;
        if (i < B.size()) t -= B[i];
        C.push_back((t + 10) % 10);
        if (t < 0) t = 1;
        else t = 0;
    }

    while (C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}

int main()
{
    string a, b;
    vector<int> A, B;
    cin >> a >> b;
    for (int i = a.size() - 1; i >= 0; i -- ) A.push_back(a[i] - '0');
    for (int i = b.size() - 1; i >= 0; i -- ) B.push_back(b[i] - '0');

    vector<int> C;

    if (cmp(A, B)) C = sub(A, B);
    else C = sub(B, A), cout << '-';

    for (int i = C.size() - 1; i >= 0; i -- ) cout << C[i];
    cout << endl;

    return 0;
}
