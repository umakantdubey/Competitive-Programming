#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int sum=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            sum = sum+a[i];
            count++;
        }
    }
    if(count!=0)
    {
        cout<<sum<<" "<<count<<endl;
    }
   else
   {
       int max=a[0];
       for(int i=0;i<n;i++)
       {
           if(a[i]>max)
           {
               max=a[i];
           }
       }
       cout<<max<<" "<<1<<endl;
   }




}
