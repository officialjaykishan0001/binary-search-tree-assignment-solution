#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class node{
    public : 
    int val;
    node* left ;
    node* right;

    node(int data)
    {
        val =data;
        left =NULL;
        right = NULL;
    }
};

class BST{
    public : 
    node* root;

    BST()
    {
        root = NULL;
    }
};


void insert(node* &root,int val)
{
    node* newNode = new node(val);
    if(root==NULL) {
        root= newNode;
        return ;
    }

    node* current = root;
    while(true)
     {
    
        if(current->val > val)
        {
            if(current->left==NULL) {
                current->left = newNode;
                return ;
            }
            current = current->left;
        }
        else {
            if(current->right == NULL) {
                current->right = newNode;
                return ;
            }
            current = current->right;
        }
    }

}


void display(node* root,int &min)
{
    if(root==NULL) return ;

    if(root->val < min)
    {
        min  = root->val;
    }
    cout<<root->val<<" ";
    display(root->left,min);
    display(root->right,min);
    
}

int main()
{

    int n;
    cout<<"n  = ";
    cin>>n;

    vector<int> v(n);
    cout<<"enter the values : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }


    BST b;
   
    for(int i=0;i<n;i++)
    {
        int temp = v[i];
        insert(b.root,temp);
    }

    cout<<"the tree is :"<<endl;

int min = 10000;
    display(b.root,min);

cout<<"\nthe minimun node value is: "<<min<<endl;

}//Jai Jai Jai Bajarangbali...