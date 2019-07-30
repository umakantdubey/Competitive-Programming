#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  long long  int n;
    cin>>n;
    long long count=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  long long  int max1=INT_MIN;
  long long int  max_ending =0;
    for(int i=0;i<n;i++)
    {

        max_ending = max_ending +a[i];
        if(max1<max_ending)
        {
            max1=max_ending;
              count=0;
        }
        if(max1==max_ending)
        {
            count++;
        }
        if(max_ending<0)
        {
            max_ending=0;
        }



    }
    if(max1<0)
    {
        cout<<"0 0"<<endl;
    }
    else
    {
         cout<<max1<<" "<<count<<endl;
    }




}

