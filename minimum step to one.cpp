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
        int k=0;
        while(n!=1)
        if(n%3==0)
        {

            n =n/3;
            k++;
        }
        else if(n%2==0)
        {

            n =n/2;
            k++;
        }
        else
        {

            n= n-1;
            k++;
        }
        cout<<k<<endl;
    }
}
