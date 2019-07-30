#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    long long int sum=0,sum1=0;
  sort(a,a+n);
 for(int i=0;i<n-1;i++)
 {
     sum =sum+a[i];
 }
 for(int i=1;i<n;i++)
 {
     sum1 =sum1+a[i];
 }
 cout<<sum<<" "<<sum1<<endl;
}
