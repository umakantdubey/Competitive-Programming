#include<bits/stdc++.h>
using namespace std;
struct node{

int data;
node *left;
node *right;
};
struct node *new_node(int num)
{
    node*temp = new node();
    temp->left=NULL;
    temp->right=NULL;
    temp->data=num;
    return temp;

};
void inorder(node*root)
{

    if(root==NULL)
    {

        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void getparent(node*root,int parent,node**temp)
{

    if(root==NULL)
    {

        return;
    }
    if(root->data==parent)
    {

        (*temp)=root;
        getparent(root->left,parent,temp);
        getparent(root->right,parent,temp);

    }
}
node *getnode(node*root,int parent,int child,char ch)
{

    node*temp =NULL;
    getparent(root,parent,&temp);
    if(ch=='R')
    {

        temp->right=new_node(child);
    }
    else
    {

        temp->left=new_node(child);
    }
    return root;
}
int main()
{
    node*root=NULL;
    root = new_node(1);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        char ch;
        cin>>a>>b>>ch;
        root = getnode(root,a,b,ch);

    }
    inorder(root);
    return 0;



}
