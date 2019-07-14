#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,p;
    cin>>n;
    int a[1000000]={0};
    for(int i=0;i<n;i++)
    {
        cin>>p;
        a[p]++;
    }
    int q;
    cin>>q;
    int c=0;
    while(q--)
    {
        c=0;
        cin>>p;
        cout<<a[p]<<endl;

    }
}
