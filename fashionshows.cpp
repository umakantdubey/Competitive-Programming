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
        int m[100],f[100];
       long long int sum =0;
        for(int i=0;i<n;i++)
        {

            cin>>m[i];

        }
         for(int i=0;i<n;i++)
        {

            cin>>f[i];

        }
         for(int i=0;i<n;i++)
        {

           sum+=f[i]*m[i];

        }
       // cout<<m[0]<<f[0];
        cout<<sum<<endl;
    }
}
