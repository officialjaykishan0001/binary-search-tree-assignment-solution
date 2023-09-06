#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class node{
    public : 
    int val;
    node* left;
    node* right;

    node(int data)
    {
        val =data;
        left = NULL;
        right = NULL;
    }
};

class Bst
{
    public : 
    node* root;

    Bst()
    {
        root = NULL;
    }
};

void insert(node* &root,int val)
{
    node* newNode = new node(val);
    if(root == NULL)
    {
        root = newNode;
        return ;
    }

    node* curr = root;
    while(true)
    {
        if(curr->val > val)
        {
            if(curr->left==NULL)
            {
                curr->left = newNode;
                return ;
            }
            curr = curr->left;
        }
        else{
            if(curr->right==NULL)
            {
                curr->right = newNode;
                return ;
            }
            curr = curr->right;


        }


    }
    
}


void display(node* root)
{
    if(root== NULL) return; 
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);


}

void  inOrder(node* root,vector<int> & v){
    if(root==NULL){
        return ;
    }
    inOrder(root->left,v);
    v.push_back(root->val);
    inOrder(root->right,v);
    

}


bool  isSame(node* root1,node* root2)
{
    vector<int> v1;
    inOrder(root1,v1);
    
    vector<int> v2;
    inOrder(root2,v2);

    return v1==v2;
}
int main()
{
    Bst b;
    int n;
    cin>>n;
    while(n--)
    {
        int ele;
        cin>>ele;
        insert(b.root, ele);
    }

    cout<<endl<<endl;
    Bst c;
    int m;
    cin>>m;
    while(m--)
    {
        int ele;
        cin>>ele;
        insert(c.root,ele);

    }

    cout<<"the first tree is : "<<endl;
    display(b.root);

    cout<<"\nthe second tree is : "<<endl;
    display(c.root);


    cout<<endl<<"the final output is :" <<isSame(b.root,c.root);
    return 0;
}//Jai Jai Jai Bajararngbali..