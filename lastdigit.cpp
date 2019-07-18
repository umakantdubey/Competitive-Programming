#include<bits/stdc++.h>
using namespace std;
int modularExponentiation(int x,int n,int M)
{
    M =10;
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        long long int p=0;

        p = modularExponentiation(a,b,10);
       // p = pow(a,b);
        cout<<p<<endl;

    }
}
