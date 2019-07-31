#include<bits/stdc++.h>
using namespace std;
int main()
{


  long long int n;
    cin>>n;
    int a[100001];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
   long long int k;
    cin>>k;
    long long int c=1,s=0;
    a[n+1]=-1;
     int max=0;
    for(int i=0;i<n;i++)
    {


        if(a[i]==a[i+1])
        {
            c++;
        }
       else
       {
           if(k==c)
           {
            cout<<a[i]<<endl;
            break;
            // s=a[i];
              // c=1;
           }
          c=1;
       }

    }

}
