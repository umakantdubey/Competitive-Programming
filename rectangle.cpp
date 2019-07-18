#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int count=0;
for(int i=1;i<=t;i++)
{

    for(int j=i;j<=t;j++)
    {

        if(i*j>t)
        {

            break;
        }
        count++;
    }
}
cout<<count<<endl;
}
