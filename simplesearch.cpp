#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   long long int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<i<<endl;
            break;
        }
    }
}
}
}
