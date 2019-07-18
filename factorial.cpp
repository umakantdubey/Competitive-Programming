#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

       long long int n;
        cin>>n;
        int i=1;
        int count=0;
    while(n/pow(5,i)>=1)
    {
        count =count+(n/pow(5,i));
        i++;

    }
    cout<<count<<endl;


    }

}
