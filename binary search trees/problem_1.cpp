#include<iostream>
#include<vector>

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


bool checkForInOrder(vector<int> & v)
{
    bool flag = true;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i] < v[i+1])
        {
            flag = true;
        }
        else{
            return false;
        }
    }
    return flag ;
}
int main()
{
    int n;
    cout<<"Enter The size of the vector :";
    cin>>n;

    cout<<"Enter the elements of the vector : ";
    cout<<endl;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    cout<<checkForInOrder(v);

    return 0;
}//Jai Jai Jai Bajarangbali..