#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p=0,q=0,r=0;
    while(t--)
    {


        int x,y,z;
        cin>>x>>y>>z;
        p+=x;
        q+=y;
        r+=z;
    }
    if(p==0&&q==0&&r==0)
    {

        cout<<"YES"<<endl;
    }
    else
    {

        cout<<"NO"<<endl;
    }
}
