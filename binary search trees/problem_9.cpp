#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class  node{
    public :
    int val;
    node* left;
    node* right;

    node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

class bst{
    public: 
    node* root;

    bst(){
        root = NULL;
    }
};

void insert(node* &root,int val)
{
    node* newNode = new node(val);

    if(root== NULL)
    {
        root = newNode;
        return ;
    }

    node* curr = root;

while(1)
{
    if(curr->val > val)
    {
        if(curr->left == NULL)
        {
            curr->left = newNode;
            return; 
        }
        curr = curr->left;

    }
    else{
        if(curr->right == NULL)
        {
            curr->right = newNode;
            return ;
        }

        curr = curr->right;
    }
}

}

void RangeSumHelper(node* root,int low,int high,int &sum)
{
    if(root == NULL)
    {
        return ;
    }

    RangeSumHelper(root->left,low,high,sum);
    if(root->val > low && root->val < high)
    {
        sum += root->val;
    }
    RangeSumHelper(root->right,low,high,sum);

}

int RangeSum(node* root,int low , int high)
{
    int sum  = 0;
    RangeSumHelper(root,low,high,sum);

    return sum;

}
int main()
{   
    bst b;
    int n;
    cin>>n;

    while(n--)
    {
        int ele;
        cin>>ele;
        insert(b.root,ele);
    }

    int left;
    cin>>left;
    int right ;
    cin>>right;

    
    int ans = RangeSum(b.root,left,right);

    cout<<"the sum is :  "<<(ans)<<endl;

    return 0;
}//Jai Jai Jai Bajarangbali..