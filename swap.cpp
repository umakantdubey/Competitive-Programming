#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

       int n;
       cin>>n;
       vector<int>v;
       for(int i=1;i<=n;i++)
       {

           int x;
           cin>>x;
           v.push_back(x);
       }
       int a=0,b=0;
        for(int i=1;i<=n;i++)
        {
            a=v[i];
            b=v[i+1];

           v[i]=b;
           v[i+1]=a;
            i++;

        }
        long long int sum=0;
        for(int i=1;i<=n;i++)
        {

        cout<<v[i]<<" ";
        }
        //cout<<sum<<endl;
    }
}
