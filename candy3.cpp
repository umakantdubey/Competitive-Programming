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
        long long int sum =0;
        for(int i=0;i<n;i++)
        {
int x;
            cin>>x;
            sum =sum+x;
        }
        if(sum%n==0)
        {

            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      //  cout<<sum<<endl;
    }
}
