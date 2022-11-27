// #include<iostream>
// using namespace std;

// typedef char BTDataType;
// typedef struct BinaryTreeNode
// {
// 	struct BinaryTreeNode* left;
// 	struct BinaryTreeNode* right;
// 	BTDataType data;
// }BTNode;

// BTNode* BuyNode(BTDataType x)
// {
// 	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
// 	if (node == NULL)
// 	{
// 		printf("malloc fail\n");
// 		exit(-1);
// 	}

// 	node->data = x;
// 	node->left = node->right = NULL;
// 	return node;
// }

// BTNode* CreatBinaryTree()
// {
// 	BTNode* nodeA = BuyNode('A');
// 	BTNode* nodeB = BuyNode('B');
// 	BTNode* nodeC = BuyNode('C');
// 	BTNode* nodeD = BuyNode('D');
// 	BTNode* nodeE = BuyNode('E');
// 	BTNode* nodeF = BuyNode('F');
// 	nodeA->left = nodeB;
// 	nodeA->right = nodeC;
// 	nodeB->left = nodeD;
// 	nodeC->left = nodeE;
// 	nodeC->right = nodeF;
// 	return nodeA;
// }

// void PreOrder(BTNode* root)
// {
// 	if(root==NULL)
// 	{
// 		cout<<"NULL ";
// 		return ;
// 	}
// 	cout<<root->data<<" ";
// 	PreOrder(root->left);
// 	PreOrder(root->right);
// }

// void InOrder(BTNode* root)
// {
//     if(root==NULL)
//     {
//         printf("NULL ");
//         return;
//     }
//     InOrder(root->left);
//     printf("%c ",root->data);
//     InOrder(root->right);
// }

// void PostOrder(BTNode* root)
// {
//     if(root==NULL)
//     {
//         printf("NULL ");
//         return;
//     }
//     PostOrder(root->left);
//     PostOrder(root->right);
//     printf("%c ",root->data);

// }
// int BinaryTreeSize(BTNode*root)
// {
// 	if(root==NULL)return 0;
// 	return BinaryTreeSize(root->left)+BinaryTreeSize(root->right)+1;
// }

// int BinaryTreeLeafSize(BTNode*root)
// {
// 	if(root==NULL)return 0;
// 	if(root->left==NULL&&root->right==NULL)return 1;
// 	return BinaryTreeLeafSize(root->right)+BinaryTreeLeafSize(root->left);
// }

// int BinaryTreeLevelKSize(BTNode* root, int k)
// {
// 	if(root==NULL)return 0;
// 	if(k==1)
// 	{
// 		return 1;
// 	}
// 	return BinaryTreeLevelKSize(root->left,k-1)+BinaryTreeLevelKSize(root->right,k-1);
// }

// BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
// {
// 	if(root==NULL)return NULL;
// 	if(root->data==x)return root;
// 	BTNode*left=BinaryTreeFind(root->left,x);
// 	if(left)return	left;
// 	BTNode*right=BinaryTreeFind(root->right,x);
// 	if(right)return right;
// 	return NULL; 
// }

// int BinaryTreeDepth(BTNode*root)
// {
// 	if(root==NULL)return 0;
// 	int depth=max(BinaryTreeDepth(root->left),BinaryTreeDepth(root->right));
// 	return depth+1;
// }

// int main()
// {
// 	BTNode*t= CreatBinaryTree();
// 	cout<<BinaryTreeDepth(t)<<endl;	
// 	return 0;
// }
#include<iostream>
using namespace std;
const int N=1e5+10;
int a[N];
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
void Heap_Sort(int*arr,int size)
{
    for(int i=(size-1-1)/2;i>=0;i--)
    {
        AdjustDown(arr,size,i);
    }

    for(int end=size-1;end>0;end--)
    {
        swap(arr[0],arr[end]);
        AdjustDown(arr,end,0);
    }
}

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)scanf("%d",a+i);
	Heap_Sort(a,n);
	for(int i=0;i<m;i++)printf("%d ",a[i]);
	return 0;
}
