#include<bits/stdc++.h>
using namespace std;
struct node{

int data;
node*left;
node*right;
};
struct node*new_node(int num)
{

    node*temp=new node();
    temp->left=NULL;
    temp->right=NULL;
    temp->data=num;
};
void print(struct node*root)
{

    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int size(node*root)
{

    if(root==NULL)
    {

        return 0;
    }
    return (size(root->left)+size(root->right)+1);
}
int height(node*root)
{

    if(root==NULL)
    {

        return 0;
    }
    return (max(height(root->left),height(root->right))+1);
}
int leaf(node*root)
{

    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right==NULL)
    {

        return 1;
    }
    return (leaf(root->left)+leaf(root->right));
}
void mirror(node*root)
{
    node*temp;
    if(root ==NULL)
    {

        return ;
    }
    mirror(root->left);
    mirror(root->right);
  temp = root->left;
  root->left=root->right;
 root->right=temp;
}
int main()
{

   struct node *root = new_node(1);

   root->left=new_node(2);

   root->right=new_node(3);

   root->left->left=new_node(4);
    print(root);
   // cout<<size(root);
    //cout<<height(root)<<" ";
    //cout<<leaf(root)<<endl;
    mirror(root);
    print(root);
  // getchar();
   return 0;
}
