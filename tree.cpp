#include<bits/stdc++.h>
using namespace std;
struct node
{
public:

    int data;
    node*left,node*right;
};
node* root=NULL;
void insert(int data)
{
  node *root = new node();
  root->data =data;
  root->left=NULL;
  root->right=NULL;
}
int main()
{


}


