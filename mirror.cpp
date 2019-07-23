#include<bits/stdc++.h>
using namespace std;
struct node{


    int data;
    node*left;
    node*right;

};

node * new_node(int num)
{

    node*temp = new node();
    temp->left=NULL;
    temp->right=NULL;
    temp->data= num;
    return temp;
}
void print(node*root)
{
    if(root==NULL)
    {

        return;
    }
cout<<root->data<<" ";
print(root->left);
print(root->right);
}
void mirror(node*root)
{
    node*temp;
    if(root==NULL)
    {
        return;
    }
    mirror(root->left);
    mirror(root->right);
    temp = root->left;
    root->left= root->right;
    root->right = temp;
}
int main()
{

    node*root = new_node(1);
    root->left= new_node(3);
    root->right=new_node(2);
    root->left->left=new_node(7);
    root->left->right=new_node(6);
        root->right->left=new_node(5);
            root->right->right=new_node(4);
                root->left->left->left=new_node(10);
                    root->right->left->left=new_node(9);
                     root->right->left->right=new_node(8);
                     print(root);

                     cout<<"After mirror"<<endl;
                     mirror(root);
                     print(root);






}
