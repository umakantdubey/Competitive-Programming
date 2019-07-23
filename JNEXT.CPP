#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
         long long int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool val = next_permutation(a,a+n);
    if(val)
    {
    	for(int i=0;i<n;i++)
{
    cout<<a[i];

}

    }
    else
    {
    	cout<<"-1"<<endl;
    }

     cout<<endl;
       // continue;

cout<<endl;
    }
}
